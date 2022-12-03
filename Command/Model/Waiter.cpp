/**
 * Project Untitled
 */


#include "Waiter.h"
#include "Command.h"

/**
 * Waiter implementation
 */


/**
 * @param command
 * @return void
 */
void Waiter::SetOrder(Command* command)
{
    orders.push_back(command);
}

/**
 * @param command
 * @return void
 */
void Waiter::CancelOrder(Command* command)
{
    orders.remove(command);
}

/**
 * @return void
 */
void Waiter::NotifyExcute()
{
    list<Command*>::iterator iter = orders.begin();
    while(iter != orders.end())
    {
        (*iter)->ExcuteCommand();
        iter++;
    }
    orders.clear();
}
