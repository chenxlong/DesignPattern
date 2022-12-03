/**
 * Project Untitled
 */


#ifndef _UNSHAREDFLYWEIGHT_H
#define _UNSHAREDFLYWEIGHT_H

#include "Flyweight.h"


class UnsharedFlyweight: public Flyweight {
public: 
   UnsharedFlyweight(string id);
/**
 * @param state
 */
    void Operation(string state);
};

#endif //_UNSHAREDFLYWEIGHT_H
