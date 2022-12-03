/**
 * Project Untitled
 */


#include "CashContext.h"
#include "CashStrategy.h"

/**
 * CashContext implementation
 */


/**
 * @param money
 * @return double
 */
double CashContext::GetCashResult(double money)
{
    return mStrategy->AcceptCash(money);
}

/**
 * @param strategy
 */
CashContext::CashContext(CashStrategy * strategy)
{
    mStrategy = strategy;
}

/**
 * @param strategy
 */
void CashContext::SetStrategy(CashStrategy * strategy)
{
    mStrategy = strategy;
}
