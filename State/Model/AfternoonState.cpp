/**
 * Project Untitled
 */


#include "AfternoonState.h"
#include <iostream>

/**
 * AfternoonState implementation
 */


/**
 * @param w
 * @return void
 */
void AfternoonState::WriteProgram(Work* w)
{
    if(w->hour < 17)
    {
        cout << "current time: "
             << w->hour
             << " ,afternoon work very easy."<< endl;
    }
    else
    {
        w->SetState("EveningState");
        w->WriteProgram();
    }
}
