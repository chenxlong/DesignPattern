/**
 * Project Untitled
 */


#include "FailVisitor.h"
#include "Man.h"
#include "Woman.h"
#include <iostream>

/**
 * FailVisitor implementation
 */


/**
 * @param man
 * @return void
 */
void FailVisitor::GetManResult(Man* man)
{
    cout << man->mName << " fail" << endl;
}

/**
 * @param woman
 * @return void
 */
void FailVisitor::GetWomanResult(Woman* woman)
{
    cout << woman->mName << " fail" << endl;
}
