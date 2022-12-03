/**
 * Project Untitled
 */


#include "BakeChickenWingCommand.h"
#include "Barbecuer.h"

/**
 * BakeChickenWingCommand implementation
 */


/**
 * @return void
 */
void BakeChickenWingCommand::ExcuteCommand()
{
    mReceiver->BakeChickenWing();
}

/**
 * @param receiver
 */
BakeChickenWingCommand::BakeChickenWingCommand(Barbecuer* receiver)
    :Command(receiver)
{

}
