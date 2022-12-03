/**
 * Project Untitled
 */


#include "Flyweight.h"
#include <iostream>

/**
 * Flyweight implementation
 */


/**
 * @param state
 * @return void
 */
void Flyweight::Operation(string state)
{
    std::cout << "Operation " << state << std::endl;
}

/**
 * @param id
 */
Flyweight::Flyweight(string id)
{
    mId = id;
}

/**
 * @return string
 */
string Flyweight::GetId()
{
    return mId;
}

Flyweight::~Flyweight()
{

}
