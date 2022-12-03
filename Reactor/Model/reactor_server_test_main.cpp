#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <string>
#include "CTimeServer.h"
#include "CReactor.h"

//void printHelloworld(client_data *data)
//{
//    fprintf(stderr, "timertask : Hello world from timerTask!\n");
//}

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        fprintf(stderr, "usage: %s ip port\n", argv[0]);
        return EXIT_FAILURE;
    }

    /**
     * 命令行参数，第1个是 IP ，第2个是 port 。
     * （1）启动服务器。
    */
    CTimeServer server(argv[1], atoi(argv[2]));
    if (!server.Start())
    {
        fprintf(stderr, "start server failed\n");
        return EXIT_FAILURE;
    }
    fprintf(stderr, "server started!\n");

//    heap_timer *printtask = new heap_timer(5);
//    printtask->cb_func = printHelloworld;

//    fprintf(stderr, "register a task which will be run is five seconds!\n");
//    CReactor::GetInstance()->RegisterTimerTask(printtask);

    /**
     * （3）向 Reactor 中注册事件处理器：server 。
    */
    CReactor::GetInstance()->RegisterEventHandler(&server, kReadEvent);

    while (true)
    {
        /**
         * （4）监控并分发事件到各个事件处理器。
        */
         CReactor::GetInstance()->HandleEventsLoop();
    }
    return EXIT_SUCCESS;
}
