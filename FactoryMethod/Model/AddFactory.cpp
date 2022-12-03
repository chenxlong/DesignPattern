/**
 * Project Untitled
 */


#include "AddFactory.h"
#include "AddOperator.h"
/**
 * AddFactory implementation
 */


/**
 * @return AddOperator *
 */
Operator * AddFactory::CreateOperation() {
    return new AddOperator();
}
