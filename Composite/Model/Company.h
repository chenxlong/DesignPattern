/**
 * Project Untitled
 */


#ifndef _COMPANY_H
#define _COMPANY_H
#include <string>

using namespace std;

class Company {
public: 
    
/**
 * @param c
 */
    virtual void Add(Company * c) = 0;
    
/**
 * @param c
 */
    virtual void Remove(Company * c) = 0;
    
/**
 * @param depth
 */
    virtual void Display(int depth) = 0;
    
    virtual void LineOfDuty() = 0;
    
/**
 * @param index
 */
    virtual Company * GetChild(int index) = 0;
    
/**
 * @param name
 */
    Company(string name);
    
    virtual ~Company();
protected: 
    string mName;
};

#endif //_COMPANY_H
