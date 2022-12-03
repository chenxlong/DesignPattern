/**
 * Project Untitled
 */


#ifndef _PERSON_H
#define _PERSON_H
#include <string>

using namespace std;
class ActionVisitor;
class Person {
public: 
    string mName;
    
/**
 * @param visitor
 */
    //获得状态对象
    virtual void Accept(ActionVisitor *visitor) = 0;
};

#endif //_PERSON_H
