/**
 * Project Untitled
 */


#include "UnsharedFlyweight.h"
#include <iostream>

/**
 * UnsharedFlyweight implementation
 */


/**
 * @param state
 * @return void
 */
UnsharedFlyweight::UnsharedFlyweight(string id)
    :Flyweight(id)
{

}

void UnsharedFlyweight::Operation(string state)
{
    std::cout << mId <<" Operation " << state << std::endl;
}
