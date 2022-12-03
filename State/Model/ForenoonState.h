/**
 * Project Untitled
 */


#ifndef _FORENOONSTATE_H
#define _FORENOONSTATE_H

#include "State.h"


class ForenoonState: public State {
public: 
    
/**
 * @param w
 */
    void WriteProgram(Work* w);
};

#endif //_FORENOONSTATE_H
