#include "server_packet_network.hpp"

void ServerPacketNetwork::tick() {
    std::vector<PacketWithSize> pws = network.get_network_events_since_last_tick();
    packet_handler.handle_packets(pws);
}
