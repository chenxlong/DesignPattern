/**
 * Project Untitled
 */


#ifndef _CONCRETEITERATOR_H
#define _CONCRETEITERATOR_H

#include "Iterator.h"

class ConcreteAggregate;
class ConcreteIterator: public Iterator
{
public: 
    
    void Fisrt();
    
    void Next();
    
    bool IsDone();
    
    string CurrentItem();
    
/**
 * @param aggregate
 */
    ConcreteIterator(ConcreteAggregate * aggregate);
private: 
    ConcreteAggregate * mAggregate;
    int current;
};

#endif //_CONCRETEITERATOR_H
