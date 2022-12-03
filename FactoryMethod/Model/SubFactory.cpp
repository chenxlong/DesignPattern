/**
 * Project Untitled
 */


#include "SubFactory.h"
#include "SubOperator.h"

/**
 * SubFactory implementation
 */


/**
 * @return SubOperator *
 */
Operator * SubFactory::CreateOperation() {
    return new SubOperator();
}
