/**
 * Project Untitled
 */


#include "Command.h"

/**
 * Command implementation
 */


/**
 * @return void
 */
void Command::ExcuteCommand()
{
    return;
}

/**
 * @param receiver
 */
Command::Command(Barbecuer* receiver)
{
    mReceiver = receiver;
}

Command::~Command() {

}
