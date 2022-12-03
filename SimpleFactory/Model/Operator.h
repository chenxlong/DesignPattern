/**
 * Project Untitled
 */


#ifndef _OPERATOR_H
#define _OPERATOR_H

class Operator {
public: 
    int a;
    int b;

virtual ~Operator();
virtual int result() = 0;
};

#endif //_OPERATOR_H
