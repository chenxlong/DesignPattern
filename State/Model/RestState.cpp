/**
 * Project Untitled
 */


#include "RestState.h"
#include <iostream>

/**
 * RestState implementation
 */


/**
 * @param w
 * @return void
 */
void RestState::WriteProgram(Work* w)
{
    cout << "current time: "
         << w->hour
         << " , rest, go home."<< endl;
}
