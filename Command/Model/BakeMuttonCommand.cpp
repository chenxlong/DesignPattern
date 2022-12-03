/**
 * Project Untitled
 */


#include "BakeMuttonCommand.h"
#include "Barbecuer.h"

/**
 * BakeMuttonCommand implementation
 */


/**
 * @return void
 */
void BakeMuttonCommand::ExcuteCommand()
{
    mReceiver->BakeMutton();
}

/**
 * @param receiver
 */
BakeMuttonCommand::BakeMuttonCommand(Barbecuer* receiver)
    :Command(receiver)
{

}
