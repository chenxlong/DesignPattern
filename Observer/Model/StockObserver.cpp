/**
 * Project Untitled
 */


#include "StockObserver.h"
#include "BossSubject.h"
#include <iostream>

/**
 * StockObserver implementation
 */


/**
 * @return void
 */
void StockObserver::Update() {
    cout << "Notify:" << mName << "," << mSubject->subjectState << endl;
}

/**
 * @param name
 * @param subject
 */
StockObserver::StockObserver(string name, BossSubject* subject)
{
    mName = name;
    mSubject = subject;
}
