
#include <iostream>
#include "Operator.h"
#include "OperatorFactory.h"

using namespace std;
/**
 * @return int
 */
int main(int argc, char **argv)
 {
    OperatorFactory factory;
    Operator * pOper = factory.CreateOperation("+");
    pOper->a = 1;
    pOper->b = 2;
    int iRet = pOper->result();
    printf("result=%d\n", iRet);

    Operator * pOpers = factory.CreateOperation("-");
    pOpers->a = 1;
    pOpers->b = 2;
    int iRets = pOpers->result();
    printf("result=%d\n", iRets);

    delete pOper;
    delete pOpers;
    return 0;
}
