/**
 * Project Untitled
 */


#ifndef _CONCRETECOLLEAGUE2_H
#define _CONCRETECOLLEAGUE2_H

#include "Colleague.h"


class ConcreteColleague2: public Colleague {
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
    ConcreteColleague2(Mediator* mediator);
};

#endif //_CONCRETECOLLEAGUE2_H
