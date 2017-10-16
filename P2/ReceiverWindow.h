//
// Created by SHUO ZHAO on 10/15/17.
//

#ifndef COMP_556_NETWORK_RECEIVERWINDOW_H
#define COMP_556_NETWORK_RECEIVERWINDOW_H

#include <Window.h>
#include <sys/socket.h>
class ReceiverWindow{
public:
    int createFile (string file);
private:
    void sendPendingAck(int socket,  char* buf, int size, struct sockaddr* sin, socklen_t addrlen);
};
#endif //COMP_556_NETWORK_RECEIVERWINDOW_H
