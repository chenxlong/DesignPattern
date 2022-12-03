/**
 * Project Untitled
 */


#ifndef _CASHCONTEXT_H
#define _CASHCONTEXT_H

class CashStrategy;
class CashContext {
public: 
    
/**
 * @param money
 */
double GetCashResult(double money);
    
/**
 * @param strategy
 */
    CashContext(CashStrategy * strategy);
    
/**
 * @param strategy
 */
    void SetStrategy(CashStrategy * strategy);
private: 
    CashStrategy * mStrategy;
};

#endif //_CASHCONTEXT_H
