/**
 * Project Untitled
 */


#include "Subject.h"
#include "Observer.h"

/**
 * Subject implementation
 */


/**
 * @param observer
 */
void Subject::Attach(Observer* observer)
{
    mObserver.push_back(observer);
}

/**
 * @param observer
 */
void Subject::Detach(Observer * observer)
{
    mObserver.remove(observer);
}

/**
 * @return void
 */
void Subject::Notify()
{
    list<Observer*>::iterator iter = mObserver.begin();
    for(;iter != mObserver.end(); iter++)
    {
        (*iter)->Update();
    }
}
