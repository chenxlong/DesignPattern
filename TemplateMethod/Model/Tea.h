/**
 * Project Untitled
 */


#ifndef _TEA_H
#define _TEA_H

#include "DoDrinkAbstract.h"


class Tea: public DoDrinkAbstract {
public: 
    
    void BoildWater();
    
    void Brew();
    
    void PourInCup();
    
    void AddSomething();
    
/**
 * @param name
 */
    Tea(string name);
};

#endif //_TEA_H
