
#include <iostream>
#include "Person.h"
#include "Man.h"
#include "FineryDecorator.h"
#include "TShirts.h"
#include "BigTrouser.h"
#include "LeatherShoes.h"
#include "Sneakers.h"

using namespace std;
/**
 * @return int
 */
int main(int argc, char **argv)
 {
    Person *pPerson;
    pPerson = new Man("XiaoMing");

    TShirts tShirts;
    tShirts.Decorator(pPerson);

    BigTrouser bigTrouser;
    bigTrouser.Decorator(&tShirts);

    LeatherShoes leatherShoes;
    leatherShoes.Decorator(&bigTrouser);

    leatherShoes.Show();

    delete pPerson;

    return 0;
}
