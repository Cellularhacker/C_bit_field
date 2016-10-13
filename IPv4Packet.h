/*
* Cellularhacker
* GNU GENERAL PUBLIC LICENSE Version 3
* IPv4Packet.h
*/
#ifndef IPV4PACKET_H
typedef struct IPv4_Header {    // Declare IPv4_Header structrue
    unsigned int version : 4;   // Version field by unsigned int with 4bit
    unsigned int hlen : 4;      // Header Length field by unsigned int with 4bit
    unsigned int ds : 8;        // Differentiated Services filed by unsigned int with 8bit
    unsigned int totlen : 16;   // Total Length field by unsigned int with 16bit
    unsigned int identify : 16; // Identification field by unsigned int with 16bit
    unsigned int flag : 3;      // Flag field by unsigned int with 3bit
    unsigned int farg_offset : 13;   //Farmentation offset field by unsigned int with 13bit
    unsigned int TTL : 8;       //TTL field by unsigned int with 8bit
    unsigned int protocol : 8;  //Upper-level Protocol field by unsigned int with 8bit
    unsigned int checksum : 16; //Checksum field by unsigned int with 16bit
    unsigned int src_ip : 32;   //Source IP field by unsigned int with 32bit
    unsigned int dest_ip : 32;  //Destination IP field by unsigned int with 32bit
    unsigned int opt : 32;      //Option field by unsigned int with 32bit
}IP_Packet;
#endif