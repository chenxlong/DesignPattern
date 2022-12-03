/**
 * Project Untitled
 */


#ifndef _FOREIGNCENTERADAPTER_H
#define _FOREIGNCENTERADAPTER_H

#include "PlayerTarget.h"
#include "ForeignCenter.h"

class ForeignCenterAdapter: public PlayerTarget {
public: 
    
/**
 * @param name
 */
    ForeignCenterAdapter(string name);
    
    void Attack();
    
    void Defense();
private: 
    ForeignCenter mForeignCenter;
};

#endif //_FOREIGNCENTERADAPTER_H
