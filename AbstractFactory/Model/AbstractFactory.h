/**
 * Project Untitled
 */


#ifndef _ABSTRACTFACTORY_H
#define _ABSTRACTFACTORY_H

class IUser;
class IDepartment;

class AbstractFactory {
public: 
    virtual ~AbstractFactory();

    virtual IUser * CreateUser() = 0;
    virtual IDepartment * CreateDepartment() = 0;
};

#endif //_ABSTRACTFACTORY_H

