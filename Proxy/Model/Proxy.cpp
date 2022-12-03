/**
 * Project Untitled
 */


#include "Proxy.h"
#include "Pursuit.h"

/**
 * Proxy implementation
 */


/**
 * @return void
 */
Proxy::Proxy(Girl mm):
    pursuit(nullptr)
{
    pursuit = new Pursuit(mm);
}

Proxy::~Proxy()
{
    if(pursuit != nullptr)
    {
        delete  pursuit;
    }
}

void Proxy::GiveDolls() {
    pursuit->GiveDolls();
}

/**
 * @return void
 */
void Proxy::GiveFlowers() {
    pursuit->GiveFlowers();
}

/**
 * @return void
 */
void Proxy::GiveChocolate() {
    pursuit->GiveChocolate();
}
