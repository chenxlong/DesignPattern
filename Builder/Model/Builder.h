/**
 * Project Untitled
 */


#ifndef _BUILDER_H
#define _BUILDER_H

#include "Product.h"

class Builder {
public: 
    virtual ~Builder();

    virtual void BuildPartA() = 0;
    
    virtual void BuildPartB() = 0;
    
    virtual Product GetProduct() = 0;
};

#endif //_BUILDER_H
