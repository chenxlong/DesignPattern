#include <iostream>
#include "CashContext.h"
#include "CashNormal.h"
#include "CashRebate.h"
#include "CashReturn.h"

using namespace std;

int main()
{
    CashNormal *pCashNarmal = new CashNormal;
    CashContext context = CashContext(pCashNarmal);

    double dRet = context.GetCashResult(100);
    cout << "CashNarmal Strategy: " << dRet << endl;

    CashRebate *pCashRebate = new CashRebate(0.8);
    context.SetStrategy(pCashRebate);

    dRet = context.GetCashResult(100);
    cout << "CashRebate Strategy: " << dRet << endl;

    CashReturn *pCashReturn = new CashReturn(70, 5);
    context.SetStrategy(pCashReturn);

    dRet = context.GetCashResult(100);
    cout << "CashReturn Strategy: " << dRet << endl;

    delete pCashReturn;
    delete pCashRebate;
    delete pCashNarmal;
    return 0;
}
