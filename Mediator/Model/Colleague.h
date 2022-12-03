/**
 * Project Untitled
 */


#ifndef _COLLEAGUE_H
#define _COLLEAGUE_H

#include <string>

using namespace std;

class Mediator;
class Colleague {
public: 
    
/**
 * @param mediator
 */
    Colleague(Mediator* mediator);
    
    Mediator* GetMediator();
    
/**
 * @param msg
 */
    //接收消息接口
    virtual void Notify(string msg) = 0;
    
    virtual ~Colleague();
private: 
    Mediator* mMediator;
};

#endif //_COLLEAGUE_H
