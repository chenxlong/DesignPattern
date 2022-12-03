
#include <iostream>
#include "Operator.h"
#include "InterfaceFactory.h"
#include "AddFactory.h"
#include "SubFactory.h"

using namespace std;
/**
 * @return int
 */
int main(int argc, char **argv)
 {
    InterfaceFactory *pFactory = new AddFactory();
    Operator *pOperAdd = pFactory->CreateOperation();
    pOperAdd->a = 1;
    pOperAdd->b = 2;
    int iRet = pOperAdd->GetResult();
    printf("result=%d\n", iRet);

    delete pOperAdd;
    delete pFactory;

    pFactory = new SubFactory();
    Operator *pOperSub = pFactory->CreateOperation();
    pOperSub->a = 1;
    pOperSub->b = 2;
    iRet = pOperSub->GetResult();
    printf("result=%d\n", iRet);

    delete pOperSub;
    delete pFactory;

    return 0;
}
