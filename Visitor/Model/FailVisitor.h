/**
 * Project Untitled
 */


#ifndef _FAILVISITOR_H
#define _FAILVISITOR_H

#include "ActionVisitor.h"

//失败状态
class FailVisitor: public ActionVisitor {
public: 
    
/**
 * @param man
 */
    void GetManResult(Man* man);
    
/**
 * @param woman
 */
    void GetWomanResult(Woman* woman);
};

#endif //_FAILVISITOR_H
