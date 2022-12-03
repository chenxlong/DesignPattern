
#include <iostream>
#include "Proxy.h"
#include "Girl.h"


using namespace std;
/**
 * @return int
 */
int main(int argc, char **argv)
 {
    Girl mm;
    mm.name = "XiaoHong";

    Proxy proxy(mm);
    proxy.GiveDolls();
    proxy.GiveFlowers();
    proxy.GiveChocolate();


    return 0;
}
