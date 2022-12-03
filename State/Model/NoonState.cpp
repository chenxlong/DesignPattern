/**
 * Project Untitled
 */


#include "NoonState.h"
#include <iostream>
/**
 * NoonState implementation
 */


/**
 * @param w
 * @return void
 */
void NoonState::WriteProgram(Work* w)
{
    if(w->hour < 13)
    {
        cout << "current time: "
             << w->hour
             << " ,noon not work."<< endl;
    }
    else
    {
        w->SetState("AfternoonState");
        w->WriteProgram();
    }
}
