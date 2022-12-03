/**
 * Project Untitled
 */


#ifndef _EVENINGSTATE_H
#define _EVENINGSTATE_H

#include "State.h"


class EveningState: public State {
public: 
    
/**
 * @param w
 */
    void WriteProgram(Work* w);
};

#endif //_EVENINGSTATE_H
