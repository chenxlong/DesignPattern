/**
 * Project Untitled
 */


#include "Facade.h"
#include <iostream>

/**
 * Facade implementation
 */


/**
 * @return void
 */
void Facade::MethodA()
{
    std::cout << "MethodA" << std::endl;
    one.MethodOne();
    two.MethodTwo();
}

/**
 * @return void
 */
void Facade::MethodB()
{
    std::cout << "MethodB" << std::endl;
    three.MethodThree();
    four.MethodFour();
}

Facade::Facade() {

}
