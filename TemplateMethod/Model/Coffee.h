/**
 * Project Untitled
 */


#ifndef _COFFEE_H
#define _COFFEE_H

#include "DoDrinkAbstract.h"


class Coffee: public DoDrinkAbstract {
public: 
    
    void BoildWater();
    
    void Brew();
    
    void PourInCup();
    
    void AddSomething();
    
/**
 * @param name
 */
    Coffee(string name);
};

#endif //_COFFEE_H
