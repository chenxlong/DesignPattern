/**
 * Project Untitled
 */


#ifndef _PERSON_H
#define _PERSON_H
#include <string>
using namespace std;

class Person {
public: 
    
/**
 * @param name
 */
    Person(string name);
    virtual ~Person();
    
    virtual void Show() = 0;
private: 
    string name;
};

#endif //_PERSON_H
