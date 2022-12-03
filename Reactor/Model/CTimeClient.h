/**
 * Project Untitled
 */


#ifndef _CTIMECLIENT_H
#define _CTIMECLIENT_H

#include "CEventHandler.h"


class CTimeClient: public CEventHandler {
public: 
    
    CTimeClient();
    ~CTimeClient();
/**
 * @param ip
 * @param port
 */
    bool ConnectServer(char* ip, short port);
    
    handle_t GetHandle();
    
    void HandleRead();
    
    void HandleWrite();
    
    void HandleError();

private: 
    handle_t m_handle;
};

#endif //_CTIMECLIENT_H
