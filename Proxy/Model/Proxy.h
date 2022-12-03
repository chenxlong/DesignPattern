/**
 * Project Untitled
 */


#ifndef _PROXY_H
#define _PROXY_H

#include "IGiveGift.h"
#include "Girl.h"

class Pursuit;

class Proxy: public IGiveGift {
public: 
    Proxy(Girl mm);
    ~Proxy();
    void GiveDolls();
    
    void GiveFlowers();
    
    void GiveChocolate();
private: 
    Pursuit * pursuit;
};

#endif //_PROXY_H
