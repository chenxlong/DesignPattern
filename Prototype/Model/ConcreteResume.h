/**
 * Project Untitled
 */


#ifndef _CONCRETERESUME_H
#define _CONCRETERESUME_H

#include "ResumePrototype.h"


class ConcreteResume: public ResumePrototype {
public:
    ConcreteResume(string name);
    ResumePrototype * Clone();
};

#endif //_CONCRETERESUME_H
