/**
 * Project Untitled
 */


#ifndef _CREACTOR_H
#define _CREACTOR_H

#include <iostream>
#include <map>
#include "CEventHandler.h"

class CEventDemultiplexer;

using namespace std;
class CReactor {
public: 
    static CReactor * GetInstance();
    
/**
 * @param pEventHander
 * @param evt
 */
    void RegisterEventHandler(CEventHandler* pEventHander, event_t evt);
    
/**
 * @param pEventHander
 * @param evt
 */
    void UnregisterEventHandler(CEventHandler* pEventHander, event_t evt);
    
    void HandleEventsLoop();
private:
    CReactor();
    CEventDemultiplexer* m_pEventDemultiplexer;
    std::map<handle_t, CEventHandler *> m_handlers;
};

#endif //_CREACTOR_H
