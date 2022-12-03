/**
 * Project Untitled
 */


#ifndef _BAKEMUTTONCOMMAND_H
#define _BAKEMUTTONCOMMAND_H

#include "Command.h"


class BakeMuttonCommand: public Command {
public: 
    
    void ExcuteCommand();
    
/**
 * @param receiver
 */
    BakeMuttonCommand(Barbecuer* receiver);
};

#endif //_BAKEMUTTONCOMMAND_H
