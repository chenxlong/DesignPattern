/**
 * Project Untitled
 */


#include "SleepingState.h"
#include <iostream>

/**
 * SleepingState implementation
 */


/**
 * @param w
 * @return void
 */
void SleepingState::WriteProgram(Work* w)
{
    cout << "current time: "
         << w->hour
         << " ,sleeping..."<< endl;
}
