/**
 * Project Untitled
 */


#ifndef _SCALE_H
#define _SCALE_H

#include "AbstractExpression.h"


class Scale: public AbstractExpression {
public: 
    
/**
 * @param key
 * @param value
 */
    void Excute(string key, double value);
};

#endif //_SCALE_H
