/**
 * Project Untitled
 */


#ifndef _WOMAN_H
#define _WOMAN_H

#include "Person.h"


class Woman: public Person {
public: 
    
/**
 * @param visitor
 */
    void Accept(ActionVisitor *visitor);
};

#endif //_WOMAN_H
