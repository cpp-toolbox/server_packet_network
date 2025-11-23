#ifndef SERVER_PACKET_NETWORK_HPP
#define SERVER_PACKET_NETWORK_HPP

#include "sbpt_generated_includes.hpp"

class ServerPacketNetwork {
  public:
    Network network;
    ServerPacketNetwork(uint16_t port = 7777) : network(port) {};
    PacketHandler packet_handler;

    void tick();
};

#endif // SERVER_PACKET_NETWORK_HPP
