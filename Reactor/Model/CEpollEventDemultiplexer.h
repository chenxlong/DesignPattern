/**
 * Project Untitled
 */


#ifndef _CEPOLLEVENTDEMULTIPLEXER_H
#define _CEPOLLEVENTDEMULTIPLEXER_H

#include "CEventDemultiplexer.h"

class CEpollEventDemultiplexer: public CEventDemultiplexer {
public: 
    
    CEpollEventDemultiplexer();
    ~CEpollEventDemultiplexer();
    
/**
 * @param handlers
 * @param timeout
 * @param evnet_timer
 */
    int WaitEvents(std::map<handle_t, CEventHandler *> * handlers, int timeout, time_heap * evnet_timer);
    
/**
 * @param handle
 * @param evt
 */
    int RequestEvent(handle_t handle, event_t evt);
    
/**
 * @param handle
 */
    int UnrequestEvent(handle_t handle);
private: 
    int m_epoll_fd;
    int m_fd_num;
};

#endif //_CEPOLLEVENTDEMULTIPLEXER_H
