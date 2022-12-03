/**
 * Project Untitled
 */


#include "CEventDemultiplexer.h"

/**
 * CEventDemultiplexer implementation
 */

CEventDemultiplexer::CEventDemultiplexer()
{
}
CEventDemultiplexer::~CEventDemultiplexer()
{
}
/**
 * @param handlers
 * @param timeout 
 * @param evnet_timer
 * @return int
 */
int CEventDemultiplexer::WaitEvents(std::map<handle_t, CEventHandler *> * handlers, int timeout , time_heap * evnet_timer) {
    return 0;
}

/**
 * @param handle
 * @param evt
 * @return int
 */
int CEventDemultiplexer::RequestEvent(handle_t handle, event_t evt) {
    return 0;
}

/**
 * @param handle
 * @return int
 */
int CEventDemultiplexer::UnrequestEvent(handle_t handle) {
    return 0;
}
