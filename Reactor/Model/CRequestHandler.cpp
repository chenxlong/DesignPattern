/**
 * Project Untitled
 */


#include "CRequestHandler.h"
#include "CReactor.h"
#include <time.h>
#include <arpa/inet.h>

char g_read_buffer[BUFFERSIZE];
char g_write_buffer[BUFFERSIZE];

/**
 * CRequestHandler implementation
 */


/**
 * @param handle
 */
CRequestHandler::CRequestHandler(handle_t handle)
    : CEventHandler(),
      m_handle(handle)
{

}

/**
 * @return handle_t
 */
handle_t CRequestHandler::GetHandle() {
    return m_handle;
}

/**
 * @return void
 */
void CRequestHandler::HandleRead() {
    memset(g_read_buffer, 0, sizeof(g_read_buffer));
    int len = recv(m_handle, g_read_buffer, BUFFERSIZE, 0);
    if (len > 0)
    {
        if (strncasecmp("time", g_read_buffer, 4) == 0)
        {
            CReactor::GetInstance()->RegisterEventHandler(this, kWriteEvent);
        } else if (strncasecmp("exit", g_read_buffer, 4) == 0)
        {
            close(m_handle);
            CReactor::GetInstance()->UnregisterEventHandler(this, 0);
            delete this;
        } else
        {
            fprintf(stderr, "Invalid request: %s", g_read_buffer);
            close(m_handle);
            CReactor::GetInstance()->UnregisterEventHandler(this, 0);
            delete this;
        }
    }
    else
    {
        ReportSocketError("recv");
    }
}

/**
 * @return void
 */
void CRequestHandler::HandleWrite() {
    struct tm *ttime;
    char now[64];
    time_t tt;

    memset(now, 0, 64);
    tt = time(nullptr);
    ttime = localtime(&tt);
    strftime(now, 64, "%Y-%m-%d %H:%M:%S", ttime);

    memset(g_write_buffer, 0, sizeof(g_write_buffer));
    int len = sprintf(g_write_buffer, "current time: %s\r\n", now);
    len = send(m_handle, g_write_buffer, len, 0);
    if (len > 0)
    {
        fprintf(stderr, "send response to client, fd=%d\n", (int)m_handle);
        CReactor::GetInstance()->RegisterEventHandler(this, kReadEvent);
    } else
    {
        ReportSocketError("send");
    }
}

/**
 * @return void
 */
void CRequestHandler::HandleError()
{
    fprintf(stderr, "client %d closed\n", m_handle);
    close(m_handle);
    CReactor::GetInstance()->UnregisterEventHandler(this, 0);
    delete this;
}
