/**
 * Project Untitled
 */


#include "Woman.h"
#include "ActionVisitor.h"
/**
 * Woman implementation
 */


/**
 * @param visitor
 * @return void
 */
void Woman::Accept(ActionVisitor *visitor) {
    visitor->GetWomanResult(this);
}
