/**
 * Project Untitled
 */


#include "OperatorFactory.h"
#include "SubOperator.h"
#include "AddOperator.h"
/**
 * OperatorFactory implementation
 */


/**
 * @param operatortype
 * @return Operator
 */
Operator * OperatorFactory::CreateOperation(string operatortype) {
    if(operatortype == "+")
    {
        return new AddOperator();
    }
    if(operatortype == "-")
    {
        return new SubOperator();
    }
    return NULL;
}
