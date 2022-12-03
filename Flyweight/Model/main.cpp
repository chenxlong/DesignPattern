#include <iostream>
#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"
#include "UnsharedFlyweight.h"

using namespace std;

int main()
{
    string state = "exp state";

    FlyweightFactory factory;
    Flyweight *pFlyweight = factory.GetFlyweight("ABC");
    pFlyweight->Operation(state);
    pFlyweight = factory.GetFlyweight("XYZ");
    pFlyweight->Operation(state);

    Flyweight *p = new UnsharedFlyweight("FFF");
    p->Operation(state);

    delete p;
    return 0;
}
