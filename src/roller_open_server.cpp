#include <functional>
#include <memory>
#include <thread>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"
#include "action_pkg/action/motorcontrol.hpp"

namespace motor_action
{
    class MotorActionServer : public rclcpp::Node
    {
    public:
        using Motor = action_pkg::action::MotorControl
        using GoalHandleMotor = rclcpp_action::ServerGoalHandle<Motor>;

        explicit FibActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
        : Node("Motor_action_server", options)
        {
        using namespace std::placeholders;

        this->action_server_ = rclcpp_action::create_server<Motor>(
        this,
        "Motor",
        std::bind(&FibActionServer::handle_goal, this, _1, _2),
        std::bind(&FibActionServer::handle_cancel, this, _1),
        std::bind(&FibActionServer::handle_accepted, this, _1));
        }
    private:
        rclcpp_action::Server<Motor>::SharedPtr action_server_;
        
        rclcpp_action::GoalResponse handle_goal(
            const rclcpp_action::GoalUUID & uuid,
            std::shared_ptr<const Motor::Goal> goal)
        {
            RCLCPP_INFO(this->get_logger(),"Recieved goal with order %d", goal->order);
            (void)uuid;
            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        }
        
        rclcpp_action::CancelResponse handle_cancel(
            const std::shared_ptr<GoalHandleMotor> goal_handle)
        {
            RCLCPP_INFO(this->get_logger(),"Recieved request to cancel goal");
            (void)goal_handle;
            return rclcpp_action::CancelResponse::ACCEPT;
        }

        void handle_accepted(const std::shared_ptr<GoalHandleMotor> goal_handle)
        {
            using namespace std::placeholders;
            std::thread{
                std::bind(&FibActionServer::execute, this, _1),
                goal_handle
            }.detach();
        }

        void execute(const std::shared_ptr<GoalHandleMotor> goal_handle)
        {
            RCLCPP_INFO(this->get_logger(), "Executing goal");
            rclcpp::Rate loop_rate(1);
            const auto goal = goal_handle->get_goal();
            auto feedback = std::make_shared<Motor::Feedback>();
            auto & sequence = feedback->partial_sequence;
            sequence.push_back(0);
            sequence.push_back(1);
            auto result = std::make_shared<Motor::Result>();

            for(int i = 1; (i < goal->order); i++)
            {
                if(goal_handle->is_canceling())
                {
                    result->sequence = sequence;
                    goal_handle->canceled(result);
                    RCLCPP_INFO(this->get_logger(),"Goal is canceled");
                    return;
                }
                sequence.push_back(sequence[i] + sequence[i-1]);

                goal_handle->publish_feedback(feedback);
                RCLCPP_INFO(this->get_logger(),"publish feedback");

                loop_rate.sleep();
            }

            if(rclcpp::ok())
            {
                result->sequence = sequence;
                goal_handle->succeed(result);
                RCLCPP_INFO(this->get_logger(), "Goal succeeded");
            }
        }
    };
}
RCLCPP_COMPONENTS_REGISTER_NODE(Motor_action::MotorActionServer)