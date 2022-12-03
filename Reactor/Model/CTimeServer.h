/**
 * Project Untitled
 */


#ifndef _CTIMESERVER_H
#define _CTIMESERVER_H

#include "CEventHandler.h"


class CTimeServer: public CEventHandler {
public: 
    
/**
 * @param ip
 * @param port
 */
    CTimeServer(char* ip, short port);
    
    bool Start();
    
    handle_t GetHandle();
    
    void HandleRead();
    
    void HandleWrite();
    
    void HandleError();
private: 
    handle_t m_handle;
    std::string m_ip;
    short m_port;
};

#endif //_CTIMESERVER_H
