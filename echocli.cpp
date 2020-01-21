#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <poll.h>

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <vector>
#include <iostream>

#define ERR_EXIT(n) \
    do \
    {\
        perror(n);\
        exit(EXIT_FAILURE);\
    }while(0)

int main(int argc, char const* argv[])
{
    int sock;
    if(0 > (sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)))
    {
        ERR_EXIT("socket");
    }
        struct sockaddr_in servaddr;
    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(5188);
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");

    if(0 > connect(sock, (struct sockaddr*)&servaddr, sizeof(servaddr)))
    {
        ERR_EXIT("connect");
    }

    struct sockaddr_in localaddr;
    socklen_t addrlen = sizeof(localaddr);

    if(0 > getsockname(sock, (struct sockaddr*)&localaddr, &addrlen))
    {
        ERR_EXIT("getsockname");
    }

    std::cout << "ip=" << inet_ntoa(localaddr.sin_addr) << " port=" << ntohs(localaddr.sin_port) << std::endl;
    char sendbuf[1024] = {0};
    char recvbuf[1024] = {0};
    while(NULL != fgets(sendbuf, sizeof(sendbuf), stdin))
    {
        write(sock, sendbuf, strlen(sendbuf));
        read(sock, recvbuf, sizeof(recvbuf));

        fputs(recvbuf, stdout);
        memset(sendbuf, 0, sizeof(sendbuf));
        memset(recvbuf, 0, sizeof(recvbuf));
    }
    close(sock);
    return 0;
}