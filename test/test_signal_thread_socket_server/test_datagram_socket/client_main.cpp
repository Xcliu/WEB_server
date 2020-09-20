#include "server_socket_datagram.h"
#include "socket_related_head_file.h"
#include "socket_exception.h"
#include <iostream>
#include <string>
using namespace SONNIE; 

int main(){
    std::cout << "********WEB client**********" <<std::endl;
    try{
        server_socket_datagram *server_socket_obj=new server_socket_datagram(AF_INET);
        server_socket_obj->create_socket();
        std::string str_send="message from client, your fucking udp server!";
        server_socket_obj->set_client_addr_ipv4("127.0.0.1",8888);
        server_socket_obj->send_short_mesg(str_send);
    }catch (socket_exception &exp_s){
            std::cout << exp_s.what()<<std::endl;
    };
    return 0;
}