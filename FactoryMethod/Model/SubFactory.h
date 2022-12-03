/**
 * Project Untitled
 */


#ifndef _SUBFACTORY_H
#define _SUBFACTORY_H

#include "InterfaceFactory.h"

class Operator;
class SubFactory: public InterfaceFactory {
public: 
    ~SubFactory() {}
    Operator * CreateOperation();
};

#endif //_SUBFACTORY_H
