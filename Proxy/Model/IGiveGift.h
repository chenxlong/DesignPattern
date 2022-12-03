/**
 * Project Untitled
 */


#ifndef _IGIVEGIFT_H
#define _IGIVEGIFT_H

class IGiveGift {
public: 
    virtual ~IGiveGift();

    virtual void GiveDolls() = 0;
    
    virtual void GiveFlowers() = 0;
    
    virtual void GiveChocolate() = 0;
};

#endif //_IGIVEGIFT_H
