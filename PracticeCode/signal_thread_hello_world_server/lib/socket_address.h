#ifndef SOCKET_ADDRESS_H_
#define SOCKET_ADDRESS_H_

#include "socket_related_head_file.h"

namespace SONNIE{


class socket_info_addr_ipv4
{
    private:
        sockaddr_in *addr_ptr;
        in_addr *dest;// useed for saving ipv4 address
    public:
        socket_info_addr_ipv4(
            decltype(INADDR_ANY) _ipv4_address=INADDR_ANY,
            int _server_port=8888
        );
        ~socket_info_addr_ipv4();
        sockaddr_in *get_sockaddr()const;
        void set_ip_port_ipv4(
            const char *_ipv4_address,
            int _server_port
        );
};


class socket_info_addr_ipv6
{
    private:
        sockaddr_in6 *addr_ptr;
        in6_addr *dest;//used for saving ipv6 address
    public:
        socket_info_addr_ipv6(
            in6_addr _ipv6_address=in6addr_any,
            int _server_port=8888
        );
        ~socket_info_addr_ipv6();
        sockaddr_in6* get_sockaddr()const;
        void set_ip_port_ipv6(
            const char *_ipv6_address,
            int _server_port
        );
};

}
#endif 