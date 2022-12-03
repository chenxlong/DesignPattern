/**
 * Project Untitled
 */


#include "Man.h"
#include "ActionVisitor.h"

/**
 * Man implementation
 */


/**
 * @param visitor
 * @return void
 */
void Man::Accept(ActionVisitor *visitor)
{
    visitor->GetManResult(this);
}
