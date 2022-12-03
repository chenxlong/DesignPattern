/**
 * Project Untitled
 */


#ifndef _FINERYDECORATOR_H
#define _FINERYDECORATOR_H

#include "Person.h"


class FineryDecorator: public Person
{
public: 
    FineryDecorator();
    void Show();
    
/**
 * @param component
 */
    void Decorator(Person * component);
protected: 
    Person * component;
};

#endif //_FINERYDECORATOR_H
