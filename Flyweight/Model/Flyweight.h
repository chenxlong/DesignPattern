/**
 * Project Untitled
 */


#ifndef _FLYWEIGHT_H
#define _FLYWEIGHT_H
#include <string>

using namespace std;
class Flyweight {
public: 
    
/**
 * @param state
 */
    virtual void Operation(string state) = 0;
    
/**
 * @param id
 */
    Flyweight(string id);
    
    string GetId();
    
    virtual ~Flyweight();
protected: 
    string mId;
};

#endif //_FLYWEIGHT_H
