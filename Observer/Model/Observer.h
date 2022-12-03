/**
 * Project Untitled
 */


#ifndef _OBSERVER_H
#define _OBSERVER_H

class Observer
{
public: 
    virtual ~Observer();
    virtual void Update() = 0;
};

#endif //_OBSERVER_H
