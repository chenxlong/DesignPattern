/**
 * Project Untitled
 */


#ifndef _CEVENTHANDLER_H
#define _CEVENTHANDLER_H
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <errno.h>
#include <string>

typedef unsigned int event_t;
enum {
    kReadEvent = 0x01,
    kWriteEvent = 0x02,
    kErrorEvent = 0x04,
    kEventMask = 0xff
};

typedef int handle_t;

class CEventHandler
{
public: 
    
    CEventHandler();
    
    virtual ~CEventHandler() = 0;
    
    virtual handle_t GetHandle() = 0;
    
    virtual void HandleRead() = 0;
    
    virtual void HandleWrite() = 0;
    
    virtual void HandleError() = 0;
};


bool IsValidHandle(handle_t handle)
{
    return handle >= 0;
}

void ReportSocketError(const char *msg)
{
    fprintf(stderr, "%s error: %s\n", msg, strerror(errno));
}
#endif //_CEVENTHANDLER_H
