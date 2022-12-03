/**
 * Project Untitled
 */


#include "Colleague.h"
#include "Mediator.h"

/**
 * Colleague implementation
 */


/**
 * @param mediator
 */
Colleague::Colleague(Mediator* mediator)
{
    this->mMediator = mediator;
    this->mMediator->Add(this);
}

/**
 * @return Mediator*
 */
Mediator* Colleague::GetMediator()
{
    return this->mMediator;
}

/**
 * @param msg
 * @return void
 */
void Colleague::Notify(string msg)
{
    return;
}

Colleague::~Colleague()
{

}
