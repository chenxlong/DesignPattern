/**
 * Project Untitled
 */


#ifndef _CONCRETEBUILDER2_H
#define _CONCRETEBUILDER2_H

#include "Builder.h"


class ConcreteBuilder2: public Builder {
public:     
    void BuildPartA();
    
    void BuildPartB();
    
    Product GetProduct();
private:
    Product product;
};

#endif //_CONCRETEBUILDER2_H
