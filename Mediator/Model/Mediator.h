/**
 * Project Untitled
 */


#ifndef _MEDIATOR_H
#define _MEDIATOR_H
#include <string>

using namespace std;
class Colleague;

class Mediator {
public: 
    
/**
 * @param msg
 * @param colleague
 */
    virtual void Send(string msg, Colleague* colleague) = 0;
    
/**
 * @param colleague
 */
    virtual void Add(Colleague* colleague) = 0;
    
    virtual ~Mediator();
};

#endif //_MEDIATOR_H
