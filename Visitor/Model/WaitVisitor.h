/**
 * Project Untitled
 */


#ifndef _WAITVISITOR_H
#define _WAITVISITOR_H

#include "ActionVisitor.h"

//等待状态
class WaitVisitor: public ActionVisitor {
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

#endif //_WAITVISITOR_H
