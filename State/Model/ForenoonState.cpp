/**
 * Project Untitled
 */


#include "ForenoonState.h"
#include <iostream>
/**
 * ForenoonState implementation
 */


/**
 * @param w
 * @return void
 */
void ForenoonState::WriteProgram(Work* w)
{
    if(w->hour < 12)
    {
        cout << "current time: "
             << w->hour
             << " ,forenoon work easy."<< endl;
    }
    else
    {
        w->SetState("NoonState");
        w->WriteProgram();
    }
}
