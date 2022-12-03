/**
 * Project Untitled
 */


#ifndef _RESTSTATE_H
#define _RESTSTATE_H

#include "State.h"


class RestState: public State {
public: 
    
/**
 * @param w
 */
    void WriteProgram(Work* w);
};

#endif //_RESTSTATE_H
