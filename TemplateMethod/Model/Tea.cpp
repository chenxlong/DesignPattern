/**
 * Project Untitled
 */


#include "Tea.h"
#include <iostream>

/**
 * Tea implementation
 */


/**
 * @return void
 */
void Tea::BoildWater() {
    cout << "1 Tap Water" << endl;
}

/**
 * @return void
 */
void Tea::Brew() {
    cout << "2 Brew Tea: " << mName <<endl;
}

/**
 * @return void
 */
void Tea::PourInCup() {
    cout << "3 Pour Tea in Cup" << endl;
}

/**
 * @return void
 */
void Tea::AddSomething() {
    cout << "4 Add Milk" << endl;
}

/**
 * @param name
 */
Tea::Tea(string name)
    :DoDrinkAbstract(name)
{

}
