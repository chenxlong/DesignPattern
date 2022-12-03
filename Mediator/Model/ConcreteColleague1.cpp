/**
 * Project Untitled
 */


#include "ConcreteColleague1.h"
#include "Mediator.h"
#include <iostream>

/**
 * ConcreteColleague1 implementation
 */


/**
 * @param msg
 * @return void
 */
void ConcreteColleague1::Send(string msg)
{
    //中介者转发
    GetMediator()->Send(msg, this);
}

/**
 * @param msg
 * @return void
 */
void ConcreteColleague1::Notify(string msg)
{
    //收到消息
    cout << "Colleague1 recv notify:" << msg << endl;
}

/**
 * @param mediator
 */
ConcreteColleague1::ConcreteColleague1(Mediator* mediator)
    :Colleague(mediator)
{

}
