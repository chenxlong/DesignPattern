/**
 * Project Untitled
 */


#ifndef _SPEED_H
#define _SPEED_H

#include "AbstractExpression.h"


class Speed: public AbstractExpression {
public: 
    
/**
 * @param key
 * @param value
 */
    void Excute(string key, double value);
};

#endif //_SPEED_H
