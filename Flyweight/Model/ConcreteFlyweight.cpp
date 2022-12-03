/**
 * Project Untitled
 */


#include "ConcreteFlyweight.h"
#include <iostream>
/**
 * ConcreteFlyweight implementation
 */


/**
 * @param state
 * @return void
 */
ConcreteFlyweight::ConcreteFlyweight(string id)
    :Flyweight(id)
{

}

void ConcreteFlyweight::Operation(string state) {
    std::cout << mId <<" Operation " << state << std::endl;
}
