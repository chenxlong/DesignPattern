/**
 * Project Untitled
 */


#ifndef _FORWARDS_H
#define _FORWARDS_H

#include "PlayerTarget.h"


class Forwards: public PlayerTarget {
public: 
    
    void Attack();
    
    void Defense();
    
/**
 * @param name
 */
    Forwards(string name);
};

#endif //_FORWARDS_H
