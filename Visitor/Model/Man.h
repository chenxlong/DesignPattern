/**
 * Project Untitled
 */


#ifndef _MAN_H
#define _MAN_H

#include "Person.h"


class Man: public Person {
public: 
    
/**
 * @param visitor
 */
    void Accept(ActionVisitor *visitor);
};

#endif //_MAN_H
