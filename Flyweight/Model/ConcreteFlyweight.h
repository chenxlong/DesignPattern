/**
 * Project Untitled
 */


#ifndef _CONCRETEFLYWEIGHT_H
#define _CONCRETEFLYWEIGHT_H

#include "Flyweight.h"


class ConcreteFlyweight: public Flyweight {
public: 
    ConcreteFlyweight(string id);
/**
 * @param state
 */
    void Operation(string state);
};

#endif //_CONCRETEFLYWEIGHT_H
