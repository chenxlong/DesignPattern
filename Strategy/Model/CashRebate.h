/**
 * Project Untitled
 */


#ifndef _CASHREBATE_H
#define _CASHREBATE_H

#include "CashStrategy.h"


class CashRebate: public CashStrategy {
public: 
    
/**
 * @param money
 */
    double AcceptCash(double money);
    
/**
 * @param Rebate
 */
    CashRebate(double Rebate);
private: 
    double moneyRebate;
};

#endif //_CASHREBATE_H
