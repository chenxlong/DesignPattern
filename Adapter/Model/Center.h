/**
 * Project Untitled
 */


#ifndef _CENTER_H
#define _CENTER_H

#include "PlayerTarget.h"


class Center: public PlayerTarget {
public: 
    
    void Attack();
    
    void Defense();
    
    Center(string name);
};

#endif //_CENTER_H
