/**
 * Project Untitled
 */


#ifndef _CONCRETEBUILDER1_H
#define _CONCRETEBUILDER1_H

#include "Builder.h"


class ConcreteBuilder1: public Builder {
public: 
    
    void BuildPartA();
    
    void BuildPartB();
    
    Product GetProduct();
private: 
    Product product;
};

#endif //_CONCRETEBUILDER1_H
