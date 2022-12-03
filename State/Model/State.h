/**
 * Project Untitled
 */


#ifndef _STATE_H
#define _STATE_H

#include "Work.h"

class Work;
class State {
public: 
    
/**
 * @param w
 */
    //写程序接口
    virtual void WriteProgram(Work* w);
    virtual ~State();
};

#endif //_STATE_H
