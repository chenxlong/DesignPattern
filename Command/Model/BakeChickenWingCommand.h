/**
 * Project Untitled
 */


#ifndef _BAKECHICKENWINGCOMMAND_H
#define _BAKECHICKENWINGCOMMAND_H

#include "Command.h"


class BakeChickenWingCommand: public Command {
public: 
    
    void ExcuteCommand();
    
/**
 * @param receiver
 */
    BakeChickenWingCommand(Barbecuer* receiver);
};

#endif //_BAKECHICKENWINGCOMMAND_H
