
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "CTimeClient.h"
#include <CReactor.h>

int main(int argc, char **argv)
{
    if (argc < 3) {
        fprintf(stderr, "usage: %s ip port\n", argv[0]);
        return EXIT_FAILURE;
    }

    CTimeClient client;
    if (!client.ConnectServer(argv[1], atoi(argv[2])))
    {
        fprintf(stderr, "connect remote server failed\n");
        return EXIT_FAILURE;
    }

    CReactor::GetInstance()->RegisterEventHandler(&client, kWriteEvent);
    while (true)
    {
        CReactor::GetInstance()->HandleEventsLoop();
        sleep(1);
    }
    CReactor::GetInstance()->RegisterEventHandler(&client, 0);
    return EXIT_SUCCESS;
}
