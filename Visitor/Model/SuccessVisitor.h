/**
 * Project Untitled
 */


#ifndef _SUCCESSVISITOR_H
#define _SUCCESSVISITOR_H

#include "ActionVisitor.h"

//成功状态
class SuccessVisitor: public ActionVisitor {
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

#endif //_SUCCESSVISITOR_H
