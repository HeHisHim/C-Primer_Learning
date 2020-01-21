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

typedef std::vector<struct pollfd> PollFdList;

int main(int argc, char const *argv[])
{
    signal(SIGPIPE, SIG_IGN);
    signal(SIGCHLD, SIG_IGN);

    int listenfd;

    if (0 > (listenfd = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)))
    {
        ERR_EXIT("socket");
    }

    struct sockaddr_in servaddr;
    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(5188);
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);

    int on = 1;
    if (0 > setsockopt(listenfd, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on)))
    {
        ERR_EXIT("setsockopt");
    }
    if(0 > bind(listenfd, (struct sockaddr*)&servaddr, sizeof(servaddr)))
    {
        ERR_EXIT("bind");
    }
    if(0 > listen(listenfd, SOMAXCONN))
    {
        ERR_EXIT("listen");
    }

    struct pollfd pfd;
    pfd.fd = listenfd;
    pfd.events = POLLIN;
    
    PollFdList pollfds;
    pollfds.push_back(pfd);

    int nready;
    struct sockaddr_in peeraddr;
    socklen_t peerlen;
    int connfd;
    while(true)
    {
        nready = poll(&*pollfds.begin(), pollfds.size(), -1);
        if(-1 == nready)
        {
            if(EINTR == errno)
            {
                continue;
            }
            ERR_EXIT("poll");
        }
        if(0 == nready) // nothing happended
        {
            continue;
        }
        if(pollfds[0].revents & POLLIN)
        {
            peerlen = sizeof(peeraddr);
            connfd = ::accept(listenfd, (struct sockaddr*)&peeraddr, &peerlen);

            if(-1 == connfd)
            {
                ERR_EXIT("accept");
            }
            pfd.fd = connfd;
            pfd.events = POLLIN;
            pfd.revents = 0;
            pollfds.push_back(pfd);
            --nready;

            // connect success
            std::cout << "ip=" << inet_ntoa(peeraddr.sin_addr) << " port=" << ntohs(peeraddr.sin_port) << std::endl;
        }
        std::cout << pollfds.size() << std::endl;
        std::cout << nready << std::endl;
        for(PollFdList::iterator it=pollfds.begin() + 1; it != pollfds.end() && nready > 0; ++it)
        {
            if(it->revents & POLLIN)
            {
                --nready;
                connfd = it->fd;
                char buf[1024] = {0};
                int ret = read(connfd, buf, 1024);
                if(-1 == ret)
                {
                    ERR_EXIT("read");
                }
                if(0 == ret)
                {
                    std::cout << "client close" << std::endl;
                    it = pollfds.erase(it);
                    --it;
                    close(connfd);
                    continue;
                }
                std::cout << buf;
                write(connfd, buf, strlen(buf));
            }
        }

    }

    return 0;
}