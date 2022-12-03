/**
 * Project Untitled
 */


#ifndef _ACTIONVISITOR_H
#define _ACTIONVISITOR_H

class Man;
class Woman;
class ActionVisitor {
public: 
    
/**
 * @param man
 */
    //得到男人的结论
    virtual void GetManResult(Man* man) = 0;
    
/**
 * @param woman
 */
    //得到女人的结论
    virtual void GetWomanResult(Woman* woman) = 0;
};

#endif //_ACTIONVISITOR_H
