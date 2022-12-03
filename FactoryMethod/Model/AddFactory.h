/**
 * Project Untitled
 */


#ifndef _ADDFACTORY_H
#define _ADDFACTORY_H

#include "InterfaceFactory.h"

class AddOperator;
class AddFactory: public InterfaceFactory {
public: 
    ~AddFactory() {}
    Operator * CreateOperation();
};

#endif //_ADDFACTORY_H
