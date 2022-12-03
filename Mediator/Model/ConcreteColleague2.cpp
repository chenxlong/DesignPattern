/**
 * Project Untitled
 */


#include "ConcreteColleague2.h"
#include "Mediator.h"
#include <iostream>

/**
 * ConcreteColleague2 implementation
 */


/**
 * @param msg
 * @return void
 */
void ConcreteColleague2::Send(string msg)
{
    //中介者转发
    GetMediator()->Send(msg, this);
}

/**
 * @param msg
 * @return void
 */
void ConcreteColleague2::Notify(string msg)
{
    //收到消息
    cout << "Colleague2 recv notify:" << msg << endl;
}

/**
 * @param mediator
 */
ConcreteColleague2::ConcreteColleague2(Mediator* mediator)
    :Colleague(mediator)
{

}
