/**
 * Project Untitled
 */


#include "ConcreteMediator.h"
#include "Colleague.h"

/**
 * ConcreteMediator implementation
 */


/**
 * @param colleague
 * @return void
 */
void ConcreteMediator::Add(Colleague* colleague)
{
    this->colleaguesList.push_back(colleague);
}

/**
 * @param msg
 * @param colleague
 * @return void
 */
void ConcreteMediator::Send(string msg, Colleague* colleague)
{
    for(auto it : colleaguesList)
    {
        //转发给其它同事
        if(it != colleague)
        {
            it->Notify(msg);
        }
    }
    return;
}

ConcreteMediator::~ConcreteMediator()
{
    for(auto it : colleaguesList)
    {
        delete it;
    }
    colleaguesList.clear();
}
