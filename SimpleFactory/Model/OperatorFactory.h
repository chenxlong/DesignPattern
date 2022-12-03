/**
 * Project Untitled
 */


#ifndef _OPERATORFACTORY_H
#define _OPERATORFACTORY_H

#include <string>
using namespace std;

class Operator;
class OperatorFactory {
public: 
    
/**
 * @param operatortype
 */
Operator * CreateOperation(string operatortype);
};

#endif //_OPERATORFACTORY_H
