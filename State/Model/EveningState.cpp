/**
 * Project Untitled
 */


#include "EveningState.h"
#include <iostream>

/**
 * EveningState implementation
 */


/**
 * @param w
 * @return void
 */
void EveningState::WriteProgram(Work* w)
{
    if(w->finish)
    {
        //如果完成任务，下班
        w->SetState("RestState");
        w->WriteProgram();
    }
    else
    {
        if(w->hour < 21)
        {
            cout << "current time: "
                 << w->hour
                 << " ,evening work."<< endl;
        }
        else
        {
            w->SetState("SleepingState");
            w->WriteProgram();
        }
    }
}
