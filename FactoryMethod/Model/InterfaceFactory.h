/**
 * Project Untitled
 */


#ifndef _INTERFACEFACTORY_H
#define _INTERFACEFACTORY_H

class Operator;
class InterfaceFactory {
public: 
    virtual ~InterfaceFactory();
    virtual Operator * CreateOperation() = 0;
};

#endif //_INTERFACEFACTORY_H
