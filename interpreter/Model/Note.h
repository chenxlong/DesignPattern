/**
 * Project Untitled
 */


#ifndef _NOTE_H
#define _NOTE_H

#include "AbstractExpression.h"


class Note: public AbstractExpression {
public: 
    
/**
 * @param key
 * @param value
 */
    void Excute(string key, double value);
};

#endif //_NOTE_H
