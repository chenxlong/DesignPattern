/**
 * Project Untitled
 */


#ifndef _FACADE_H
#define _FACADE_H

#include "SubSystemOne.h"
#include "SubSystemTwo.h"
#include "SubSystemThree.h"
#include "SubSystemFour.h"

class Facade {
public: 
    
    void MethodA();
    
    void MethodB();
    
    Facade();
private: 
    SubSystemOne one;
    SubSystemTwo two;
    SubSystemThree three;
    SubSystemFour four;
};

#endif //_FACADE_H
