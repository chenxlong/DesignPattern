/**
 * Project Untitled
 */


#include "Work.h"
#include "ForenoonState.h"
#include "NoonState.h"
#include "AfternoonState.h"
#include "EveningState.h"
#include "SleepingState.h"
#include "RestState.h"

/**
 * Work implementation
 */


/**
 * @param name
 * @return void
 */
Work::Work()
{
    states.clear();
    currState = new ForenoonState;
    states["ForenoonState"] = currState;
    states["NoonState"] = new NoonState;
    states["AfternoonState"] = new AfternoonState;
    states["EveningState"] = new EveningState;
    states["SleepingState"] = new SleepingState;
    states["RestState"] = new RestState;

    hour = 0;
    finish = false;
}

Work::~Work()
{
    for(auto it : states)
    {
        delete it.second;
    }
    states.clear();
}

void Work::SetState(string name)
{
    currState = states[name];
}

/**
 * @param string
 * @return State*
 */
State* Work::GetState(string name)
{
    return states[name];
}

void Work::WriteProgram()
{
    currState->WriteProgram(this);
}
