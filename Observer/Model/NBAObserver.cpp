/**
 * Project Untitled
 */


#include "NBAObserver.h"
#include <iostream>
#include "BossSubject.h"

/**
 * NBAObserver implementation
 */


/**
 * @return void
 */
void NBAObserver::Update()
{
    cout << "Notify:" << mName << "," << mSubject->subjectState << endl;
}

/**
 * @param name
 * @param subject
 */
NBAObserver::NBAObserver(string name, BossSubject* subject)
{
    mName = name;
    mSubject = subject;
}
