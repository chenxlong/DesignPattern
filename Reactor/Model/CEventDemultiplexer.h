/**
 * Project Untitled
 */


#ifndef _CEVENTDEMULTIPLEXER_H
#define _CEVENTDEMULTIPLEXER_H

#include <iostream>
#include <map>
#include "CEventHandler.h"

class time_heap;
class CEventDemultiplexer {
public: 
    CEventDemultiplexer();
    virtual ~CEventDemultiplexer();
/**
 * @param handlers
 * @param timeout 
 * @param evnet_timer
 */
    virtual int WaitEvents(std::map<handle_t, CEventHandler *> * handlers, int timeout , time_heap * evnet_timer) = 0;
    
/**
 * @param handle
 * @param evt
 */
    virtual int RequestEvent(handle_t handle, event_t evt) = 0;
    
/**
 * @param handle
 */
    virtual int UnrequestEvent(handle_t handle) = 0;
};

#endif //_CEVENTDEMULTIPLEXER_H
