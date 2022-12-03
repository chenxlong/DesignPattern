/**
 * Project Untitled
 */


#ifndef _ROLESTATECARETAKER_H
#define _ROLESTATECARETAKER_H
#include "RoleStateMemento.h"
#include <vector>

class RoleStateCaretaker {
public: 
    
/**
 * @param memento
 */
    void SetMemento(RoleStateMemento memento);
    
    RoleStateMemento GetMemento(int index);
private: 
    std::vector<RoleStateMemento> mementos;
};

#endif //_ROLESTATECARETAKER_H
