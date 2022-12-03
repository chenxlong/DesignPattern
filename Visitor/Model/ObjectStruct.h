/**
 * Project Untitled
 */


#ifndef _OBJECTSTRUCT_H
#define _OBJECTSTRUCT_H

#include <list>

using namespace std;
class Person;
class ActionVisitor;
class ObjectStruct {
public: 
    ~ObjectStruct();
/**
 * @param p
 */
    void Attach(Person* p);
    
/**
 * @param p
 */
    void Detach(Person* p);
    
/**
 * @param action
 */
    void Display(ActionVisitor* action);
private: 
    list<Person*> persons;
};

#endif //_OBJECTSTRUCT_H
