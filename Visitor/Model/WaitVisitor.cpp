/**
 * Project Untitled
 */


#include "WaitVisitor.h"
#include "Man.h"
#include "Woman.h"
#include <iostream>

/**
 * WaitVisitor implementation
 */


/**
 * @param man
 * @return void
 */
void WaitVisitor::GetManResult(Man* man)
{
    cout << man->mName << " wait" << endl;
}

/**
 * @param woman
 * @return void
 */
void WaitVisitor::GetWomanResult(Woman* woman)
{
    cout << woman->mName << " wait" << endl;
}
