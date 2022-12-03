/**
 * Project Untitled
 */


#ifndef _COMMAND_H
#define _COMMAND_H

class Barbecuer;
class Command {
public: 
    
    virtual void ExcuteCommand() = 0;
    
/**
 * @param receiver
 */
    Command(Barbecuer* receiver);
    
    virtual ~Command();
protected: 
    Barbecuer* mReceiver;
};

#endif //_COMMAND_H
