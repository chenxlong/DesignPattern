/**
 * Project Untitled
 */


#ifndef _CREQUESTHANDLER_H
#define _CREQUESTHANDLER_H

#include "CEventHandler.h"

#define BUFFERSIZE 1024
extern char g_read_buffer[BUFFERSIZE];
extern char g_write_buffer[BUFFERSIZE];

class CRequestHandler: public CEventHandler
{
public: 
    
/**
 * @param handle
 */
    CRequestHandler(handle_t handle);
    
    handle_t GetHandle();
    
    void HandleRead();
    
    void HandleWrite();
    
    void HandleError();
private: 
    handle_t m_handle;
};

#endif //_CREQUESTHANDLER_H
