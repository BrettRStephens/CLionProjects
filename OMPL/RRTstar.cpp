#include <ompl/base/SpaceInformation.h>
#include <ompl/base/spaces/SE2StateSpace.h>
#include <ompl/geometric/planners/rrt/RRTstar.h>
#include <ompl/geometric/SimpleSetup.h>

namespace ob = ompl::base;
namespace og = ompl::geometric;


// Our collision checker. Our robot's state space
// lies in [0,1]x[0,1]x[0,2*pi], with parking lane lines represented as obstacles .
// Any states lying in the lane line regions are
// considered "in collision".


class ValidityChecker : public ob::StateValidityChecker
{
public:
    ValidityChecker(const ob::SpaceInformationPtr& si) :
            ob::StateValidityChecker(si) {}
    // Returns whether the given state's position overlaps a
    // lane line
    bool isValid(const ob::State* state) const
    {
        return this->clearance(state) > 0.0;
    }
    // Returns the distance from the given state's position to the
    // boundary of the lane line obstacle.
    double clearance(const ob::State* state) const
    {
        // We know we're working with a RealVectorStateSpace in this
        // example, so we downcast state into the specific type.
        const ob::RealVectorStateSpace::StateType* state2D =
                state->as<ob::RealVectorStateSpace::StateType>();
        // Extract the robot's (x,y) position from its state

        double x = state2D->values[0];
        double y = state2D->values[1];

        /*double x = state3D->getX();
        double y = state3D->getY();
        double theta = state3D->getYaw();*/
        // Distance formula between two points, offset by the circle's
        // radius
        return sqrt((x-0.5)*(x-0.5) + (y-0.5)*(y-0.5)) - 0.25;
    }
};


int main() {

// Construct the robot state space in which we're planning. We're
// planning in [0,1]x[0,1], a subset of R^2.
    ob::StateSpacePtr space(new ob::RealVectorStateSpace(2));
// Set the bounds of space to be in [0,1].
    space->as<ob::RealVectorStateSpace>()->setBounds(0.0, 1.0);
// Construct a space information instance for this state space
    ob::SpaceInformationPtr si(new ob::SpaceInformation(space));
// Set the object used to check which states in the space are valid
    si->setStateValidityChecker(ob::StateValidityCheckerPtr(new ValidityChecker(si)));
    si->setup();
// Set our robot's starting state to be the bottom-left corner of
// the environment, or (0,0).
    ob::ScopedState<> start(space);
    start->as<ob::RealVectorStateSpace::StateType>()->values[0] = 0.0;
    start->as<ob::RealVectorStateSpace::StateType>()->values[1] = 0.0;
// Set our robot's goal state to be the top-right corner of the
// environment, or (1,1).
    ob::ScopedState<> goal(space);
    goal->as<ob::RealVectorStateSpace::StateType>()->values[0] = 1.0;
    goal->as<ob::RealVectorStateSpace::StateType>()->values[1] = 1.0;
// Create a problem instance
    ob::ProblemDefinitionPtr pdef(new ob::ProblemDefinition(si));
// Set the start and goal states
    pdef->setStartAndGoalStates(start, goal);


// Construct our optimizing planner using the RRTstar algorithm.
    ob::PlannerPtr optimizingPlanner(new og::RRTstar(si));
// Set the problem instance for our planner to solve
    optimizingPlanner->setProblemDefinition(pdef);
    optimizingPlanner->setup();
// attempt to solve the planning problem within one second of
// planning time
    ob::PlannerStatus solved = optimizingPlanner->solve(1.0);

    return 0;
}