/**
 * Project Untitled
 */


#include "CashRebate.h"

/**
 * CashRebate implementation
 */


/**
 * @param money
 * @return double
 */
double CashRebate::AcceptCash(double money) {
    return money * moneyRebate;
}

/**
 * @param Rebate
 */
CashRebate::CashRebate(double Rebate) {
    moneyRebate = Rebate;
}
