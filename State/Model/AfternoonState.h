/**
 * Project Untitled
 */


#ifndef _AFTERNOONSTATE_H
#define _AFTERNOONSTATE_H

#include "State.h"


class AfternoonState: public State {
public: 
    
/**
 * @param w
 */
    void WriteProgram(Work* w);
};

#endif //_AFTERNOONSTATE_H
