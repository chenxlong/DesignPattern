/**
 * Project Untitled
 */


#ifndef _SQLSERVERFACTORY_H
#define _SQLSERVERFACTORY_H

#include "AbstractFactory.h"


class SqlserverFactory: public AbstractFactory {
public: 
    
    IUser * CreateUser();
    
    IDepartment * CreateDepartment();
};

#endif //_SQLSERVERFACTORY_H
