/**
 * Project Untitled
 */


#ifndef _SLEEPINGSTATE_H
#define _SLEEPINGSTATE_H

#include "State.h"


class SleepingState: public State {
public: 
    
/**
 * @param w
 */
    void WriteProgram(Work* w);
};

#endif //_SLEEPINGSTATE_H
