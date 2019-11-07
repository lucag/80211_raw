#ifndef _INCLUDE_LIBRAWSOCKET_H_
#define _INCLUDE_LIBRAWSOCKET_H_

#include <stddef.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <linux/sockios.h>
#include <net/ethernet.h>
#include <net/if.h>
#include <netpacket/packet.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <sys/types.h>

int create_rawsocket(int protocol_to_sniff);
int bind_rawsocket(char *device, int rawsock, int protocol);
int send_rawpacket(int rawsock, unsigned char *pkt, size_t pkt_len);
int recv_rawpacket(int rawsock, unsigned char *pkt, size_t pkt_len);

#endif
