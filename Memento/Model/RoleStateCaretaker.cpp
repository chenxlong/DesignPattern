/**
 * Project Untitled
 */


#include "RoleStateCaretaker.h"

/**
 * RoleStateCaretaker implementation
 */


/**
 * @param memento
 * @return void
 */
void RoleStateCaretaker::SetMemento(RoleStateMemento memento)
{
    mementos.push_back(memento);
}

/**
 * @return RoleStateMemento
 */
RoleStateMemento RoleStateCaretaker::GetMemento(int index)
{
    RoleStateMemento memento;
    memento = mementos[index];
    return memento;
}
