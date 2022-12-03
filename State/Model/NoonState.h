/**
 * Project Untitled
 */


#ifndef _NOONSTATE_H
#define _NOONSTATE_H

#include "State.h"


class NoonState: public State {
public: 
    
/**
 * @param w
 */
    void WriteProgram(Work* w);
};

#endif //_NOONSTATE_H
