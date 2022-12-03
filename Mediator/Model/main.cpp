#include <iostream>
#include "Mediator.h"
#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"
#include "ConcreteMediator.h"

using namespace std;

int main()
{
    Mediator *pMediator = new ConcreteMediator();

    ConcreteColleague1 *pColleague1 = new ConcreteColleague1(pMediator);
    ConcreteColleague2 *pColleague2 = new ConcreteColleague2(pMediator);

    pColleague1->Send("i am 1, hello!");
    pColleague2->Send("i am 2, he!");

    delete pMediator;

    return 0;
}
