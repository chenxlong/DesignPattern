/**
 * Project Untitled
 */


#include "Coffee.h"
#include <iostream>
/**
 * Coffee implementation
 */


/**
 * @return void
 */
void Coffee::BoildWater() {
    cout << "1 Mineral water" << endl;
}

/**
 * @return void
 */
void Coffee::Brew() {
    cout << "2 Brew Coffee: " << mName <<endl;
}

/**
 * @return void
 */
void Coffee::PourInCup() {
    cout << "3 Pour Coffee in Cup" << endl;
}

/**
 * @return void
 */
void Coffee::AddSomething() {
    cout << "4 Add Sugar" << endl;
}

/**
 * @param name
 */
Coffee::Coffee(string name)
    : DoDrinkAbstract(name)
{

}
