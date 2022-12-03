/**
 * Project Untitled
 */


#ifndef _ITERATOR_H
#define _ITERATOR_H

#include <string>
using namespace std;

class Iterator {
public: 
    virtual ~Iterator();
    virtual void Fisrt() = 0;
    
    virtual void Next() = 0;
    
    virtual bool IsDone() = 0;
    
    virtual string CurrentItem() = 0;
};

#endif //_ITERATOR_H
