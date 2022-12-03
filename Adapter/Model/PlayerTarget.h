/**
 * Project Untitled
 */


#ifndef _PLAYERTARGET_H
#define _PLAYERTARGET_H
#include <string>
using namespace std;

class PlayerTarget {
public: 
    
/**
 * @param name
 */
    PlayerTarget(string name);
    virtual ~PlayerTarget();
    virtual void Attack() = 0;
    virtual void Defense() = 0;
protected: 
    string name;
};

#endif //_PLAYERTARGET_H
