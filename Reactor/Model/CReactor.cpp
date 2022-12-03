/**
 * Project Untitled
 */


#include "CReactor.h"
#include "CEpollEventDemultiplexer.h"

/**
 * CReactor implementation
 */


CReactor::CReactor()
{
    m_pEventDemultiplexer = new CEpollEventDemultiplexer();
}

CReactor *CReactor::GetInstance()
{
    static CReactor reactor;
    return &reactor;
}

/**
 * @param pEventHander
 * @param evt
 * @return void
 */
void CReactor::RegisterEventHandler(CEventHandler* pEventHander, event_t evt) {
    if(pEventHander == nullptr)
    {
        return;
    }

    handle_t handle_fd = pEventHander->GetHandle();
    std::map<handle_t, CEventHandler *>::iterator it = m_handlers.find(handle_fd);
    if (it == m_handlers.end())
    {
        m_handlers[handle_fd] = pEventHander;
    }

    m_pEventDemultiplexer->RequestEvent(handle_fd, evt);
    return;
}

/**
 * @param pEventHander
 * @param evt
 * @return void
 */
void CReactor::UnregisterEventHandler(CEventHandler* pEventHander, event_t evt) {
    if (pEventHander == nullptr)
    {
        return;
    }

    handle_t handle = pEventHander->GetHandle();
    m_handlers.erase(handle);
    m_pEventDemultiplexer->UnrequestEvent(handle);
    return;
}

/**
 * @return void
 */
void CReactor::HandleEventsLoop() {
    int timeout = 0;

    m_pEventDemultiplexer->WaitEvents(&m_handlers, timeout, nullptr);
}
