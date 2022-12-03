/**
 * Project Untitled
 */


#ifndef _PURSUIT_H
#define _PURSUIT_H

#include "IGiveGift.h"
#include "Girl.h"

class Pursuit: public IGiveGift {
private:
    Girl mm;
public:
    void GiveDolls();
    
    void GiveFlowers();
    
    void GiveChocolate();

    Pursuit(Girl mm);
};

#endif //_PURSUIT_H
