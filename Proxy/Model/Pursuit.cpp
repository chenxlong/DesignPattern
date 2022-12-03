/**
 * Project Untitled
 */


#include "Pursuit.h"
#include <iostream>

/**
 * Pursuit implementation
 */


/**
 * @return void
 */
void Pursuit::GiveDolls() {
    cout << "give dolls to " << mm.name << endl;
}

/**
 * @return void
 */
void Pursuit::GiveFlowers() {
    cout << "give flower to " << mm.name << endl;
}

/**
 * @return void
 */
void Pursuit::GiveChocolate() {
    cout << "give chocolate to " << mm.name << endl;
}

Pursuit::Pursuit(Girl mm)
{
    this->mm = mm;
}
