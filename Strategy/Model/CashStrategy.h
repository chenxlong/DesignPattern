/**
 * Project Untitled
 */


#ifndef _CASHSTRATEGY_H
#define _CASHSTRATEGY_H

class CashStrategy {
public: 
    virtual ~CashStrategy();
/**
 * @param money
 */
    virtual double AcceptCash(double money);
};

#endif //_CASHSTRATEGY_H
