/**
 * Project Untitled
 */


#ifndef _CONCRETEAGGREGATE_H
#define _CONCRETEAGGREGATE_H

#include "Aggregate.h"
#include <string>
#include <vector>

using namespace std;

class ConcreteAggregate: public Aggregate
{
public: 
    
Iterator * CreateIterator();
    
/**
 * @param name
 */
    void Push(string name);
    
/**
 * @param index
 */
    string Pop(int index);
    
    int Count();
private: 
    vector<string> mName;
};

#endif //_CONCRETEAGGREGATE_H
