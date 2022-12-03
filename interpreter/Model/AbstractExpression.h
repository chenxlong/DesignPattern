/**
 * Project Untitled
 */


#ifndef _ABSTRACTEXPRESSION_H
#define _ABSTRACTEXPRESSION_H

#include "PlayContext.h"

class AbstractExpression {
public: 
    
/**
 * @param context
 */
    virtual void Interpret(PlayContext* context);
    
/**
 * @param key
 * @param value
 */
    virtual void Excute(string key, double value) = 0;

    virtual ~AbstractExpression();
};

#endif //_ABSTRACTEXPRESSION_H
