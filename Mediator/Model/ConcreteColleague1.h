/**
 * Project Untitled
 */


#ifndef _CONCRETECOLLEAGUE1_H
#define _CONCRETECOLLEAGUE1_H

#include "Colleague.h"


class ConcreteColleague1: public Colleague {
public: 
    
/**
 * @param msg
 */
    void Send(string msg);
    
/**
 * @param msg
 */
    void Notify(string msg);
    
/**
 * @param mediator
 */
    ConcreteColleague1(Mediator* mediator);
};

#endif //_CONCRETECOLLEAGUE1_H
