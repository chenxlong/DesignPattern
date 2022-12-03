/**
 * Project Untitled
 */


#ifndef _CONCRETEMEDIATOR_H
#define _CONCRETEMEDIATOR_H

#include "Mediator.h"
#include <vector>

class ConcreteMediator: public Mediator {
public: 
    
/**
 * @param colleague
 */
    void Add(Colleague* colleague);
    
/**
 * @param msg
 * @param colleague
 */
    //发送消息接口
    void Send(string msg, Colleague* colleague);
    ~ConcreteMediator();
private: 
    vector<Colleague*> colleaguesList;
};

#endif //_CONCRETEMEDIATOR_H
