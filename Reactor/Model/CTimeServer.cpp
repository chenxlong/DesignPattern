/**
 * Project Untitled
 */


#include "CTimeServer.h"
#include "CRequestHandler.h"
#include "CReactor.h"

/**
 * CTimeServer implementation
 */


/**
 * @param ip
 * @param port
 */
CTimeServer::CTimeServer(char* ip, short port)
    : CEventHandler()
    , m_ip(ip)
    , m_port(port)
{

}

/**
 * @return bool
 */
bool CTimeServer::Start()
{
    m_handle = socket(AF_INET, SOCK_STREAM, 0);
    if (!IsValidHandle(m_handle))
    {
        ReportSocketError("socket");
        return false;
    }

    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(m_port);
    addr.sin_addr.s_addr = inet_addr(m_ip.c_str());
    if (bind(m_handle, (struct sockaddr *)&addr, sizeof(addr)) < 0)
    {
        ReportSocketError("bind");
        return false;
    }

    if (listen(m_handle, 10) < 0)
    {
        ReportSocketError("listen");
        return false;
    }
    return true;
}

/**
 * @return handle_t
 */
handle_t CTimeServer::GetHandle() {
    return m_handle;
}

/**
 * @return void
 */
void CTimeServer::HandleRead() {
    struct sockaddr addr;
    socklen_t addrlen = sizeof(addr);
    handle_t handle = accept(m_handle, &addr, &addrlen);
    if (!IsValidHandle(handle))
    {
        ReportSocketError("accept");
    }
    else
    {
        /**
        * 对该新连接注册读写事件。
        */
        CRequestHandler *handler = new CRequestHandler(handle);
        CReactor::GetInstance()->RegisterEventHandler(handler, kReadEvent);
    }
}

/**
 * @return void
 */
void CTimeServer::HandleWrite() {
    return;
}

/**
 * @return void
 */
void CTimeServer::HandleError() {
    return;
}
