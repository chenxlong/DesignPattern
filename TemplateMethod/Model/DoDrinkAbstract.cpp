/**
 * Project Untitled
 */


#include "DoDrinkAbstract.h"

/**
 * DoDrinkAbstract implementation
 */


/**
 * @return void
 */
void DoDrinkAbstract::Make() {
    BoildWater();
    Brew();
    PourInCup();
    AddSomething();
}

/**
 * @return void
 */
void DoDrinkAbstract::BoildWater() {
    return;
}

/**
 * @return void
 */
void DoDrinkAbstract::Brew() {
    return;
}

/**
 * @return void
 */
void DoDrinkAbstract::PourInCup() {
    return;
}

/**
 * @return void
 */
void DoDrinkAbstract::AddSomething() {
    return;
}

DoDrinkAbstract::~DoDrinkAbstract() {

}

/**
 * @param name
 */
DoDrinkAbstract::DoDrinkAbstract(string name)
{
    mName = name;
}
