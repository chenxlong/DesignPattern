/**
 * Project Untitled
 */


#include "SuccessVisitor.h"
#include "Man.h"
#include "Woman.h"
#include <iostream>

/**
 * SuccessVisitor implementation
 */


/**
 * @param man
 * @return void
 */
void SuccessVisitor::GetManResult(Man* man)
{
    cout << man->mName << " success" << endl;
}

/**
 * @param woman
 * @return void
 */
void SuccessVisitor::GetWomanResult(Woman* woman)
{
    cout << woman->mName << " success" << endl;
}
