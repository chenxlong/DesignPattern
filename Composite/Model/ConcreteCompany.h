/**
 * Project Untitled
 */


#ifndef _CONCRETECOMPANY_H
#define _CONCRETECOMPANY_H

#include "Company.h"
#include <list>

class ConcreteCompany: public Company {
public: 
    
/**
 * @param name
 */
    ConcreteCompany(string name);
    
    ~ConcreteCompany();
    
/**
 * @param c
 */
    void Add(Company * c);
    
/**
 * @param c
 */
    void Remove(Company * c);
    
/**
 * @param depth
 */
    void Display(int depth);
    
    void LineOfDuty();
    
/**
 * @param index
 */
    Company * GetChild(int index);
private: 
    list<Company *> children;
};

#endif //_CONCRETECOMPANY_H
