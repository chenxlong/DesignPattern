/**
 * Project Untitled
 */


#include "CashReturn.h"

/**
 * CashReturn implementation
 */


/**
 * @param money
 * @return double
 */
double CashReturn::AcceptCash(double money)
{
    double dRet = money;
    if(money >= totalCondition)
    {
        dRet = money - totalReturn;
    }

    return dRet;
}

/**
 * @param moneyCondition
 * @param moneyReturn
 */
CashReturn::CashReturn(double moneyCondition, double moneyReturn)
{
    totalCondition = moneyCondition;
    totalReturn = moneyReturn;
}
