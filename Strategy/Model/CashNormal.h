/**
 * Project Untitled
 */


#ifndef _CASHNORMAL_H
#define _CASHNORMAL_H

#include "CashStrategy.h"


class CashNormal: public CashStrategy {
public: 
    
/**
 * @param money
 */
    double AcceptCash(double money);
};

#endif //_CASHNORMAL_H
