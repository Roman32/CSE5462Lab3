#ifndef WRAPPER_FUNCTIONS_HEADER
#define WRAPPER_FUNCTIONS_HEADER
#include <sys/socket.h>
#include <sys/types.h>

ssize_t SEND(int socket,const void *buffer,size_t length,int flags);
ssize_t RECV(int socket,const void *buffer,size_t length,int flags);
int ACCEPT(int socket,struct sockaddr *address,socklen_t address_len);
int CONNECT(int socket,const struct sockaddr *address,socklen_t address_len);
int SOCKET(int domain,int type,int protocol);

#endif
