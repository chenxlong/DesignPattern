/**
 * Project Untitled
 */


#ifndef _WAITER_H
#define _WAITER_H

#include <list>
using namespace std;

class Command;
class Waiter {
public: 
    
/**
 * @param command
 */
    void SetOrder(Command* command);
    
/**
 * @param command
 */
    void CancelOrder(Command* command);
    
    void NotifyExcute();
private: 
    list<Command*> orders;
};

#endif //_WAITER_H
