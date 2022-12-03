/**
 * Project Untitled
 */


#include "CTimeClient.h"
#include <arpa/inet.h>
#include <assert.h>
#include "CRequestHandler.h"
#include "CReactor.h"

/**
 * CTimeClient implementation
 */


CTimeClient::CTimeClient()
    : CEventHandler()
{
    m_handle = socket(AF_INET, SOCK_STREAM, 0);
    assert(IsValidHandle(m_handle));
}

CTimeClient::~CTimeClient()
{
    close(m_handle);
}

/**
 * @param ip
 * @param port
 * @return bool
 */
bool CTimeClient::ConnectServer(char* ip, short port)
{
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = inet_addr(ip);
    if (connect(m_handle, (struct sockaddr *)&addr, sizeof(addr)) < 0)
    {
        ReportSocketError("connect");
        return false;
    }
    return true;
}

/**
 * @return handle_t
 */
handle_t CTimeClient::GetHandle()
{
     return m_handle;
}

/**
 * @return void
 */
void CTimeClient::HandleRead()
{
    memset(g_read_buffer, 0, BUFFERSIZE);
    int len = recv(m_handle, g_read_buffer, BUFFERSIZE, 0);
    if (len > 0)
    {
        fprintf(stderr, "%s", g_read_buffer);
        CReactor::GetInstance()->RegisterEventHandler(this, kWriteEvent);
    }
    else
    {
        ReportSocketError("recv");
    }
}

/**
 * @return void
 */
void CTimeClient::HandleWrite() {
    memset(g_write_buffer, 0, BUFFERSIZE);
    int len = sprintf(g_write_buffer, "time\r\n");
    len = send(m_handle, g_write_buffer, len, 0);
    if (len > 0)
    {
        fprintf(stderr, "%s", g_write_buffer);
        CReactor::GetInstance()->RegisterEventHandler(this, kReadEvent);
    }
    else
    {
        ReportSocketError("send");
    }
}

/**
 * @return void
 */
void CTimeClient::HandleError() {
    fprintf(stderr, "server closed\n");
    close(m_handle);
    exit(0);
}
