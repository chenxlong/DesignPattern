/**
 * Project Untitled
 */


#ifndef _ACCESSFACTORY_H
#define _ACCESSFACTORY_H

#include "AbstractFactory.h"


class AccessFactory: public AbstractFactory {
public: 
    
    IUser * CreateUser();
    
    IDepartment * CreateDepartment();
};

#endif //_ACCESSFACTORY_H
