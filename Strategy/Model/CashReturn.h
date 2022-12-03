/**
 * Project Untitled
 */


#ifndef _CASHRETURN_H
#define _CASHRETURN_H

#include "CashStrategy.h"


class CashReturn: public CashStrategy {
public: 
    
/**
 * @param money
 */
    double AcceptCash(double money);
    
/**
 * @param moneyCondition
 * @param moneyReturn
 */
    CashReturn(double moneyCondition, double moneyReturn);
private: 
    double totalCondition;
    double totalReturn;
};

#endif //_CASHRETURN_H
