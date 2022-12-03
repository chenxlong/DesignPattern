/**
 * Project Untitled
 */


#include "ForeignCenterAdapter.h"
#include <iostream>

/**
 * ForeignCenterAdapter implementation
 */


/**
 * @param name
 */
ForeignCenterAdapter::ForeignCenterAdapter(string name)
    :PlayerTarget(name)
{
    mForeignCenter.SetName(name);
}

/**
 * @return void
 */
void ForeignCenterAdapter::Attack() {
    mForeignCenter.JingGong();
}

/**
 * @return void
 */
void ForeignCenterAdapter::Defense() {
    mForeignCenter.FangShou();
}
