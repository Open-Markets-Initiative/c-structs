/*******************************************************************************
 * C Structs For Nasdaq Common Ouch SoupBinTcp 3.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Packet Type Values
 */ 
#define ENUM_PACKET_TYPE_DEBUG_PACKET '+'
#define ENUM_PACKET_TYPE_LOGIN_ACCEPTED_PACKET 'A'
#define ENUM_PACKET_TYPE_LOGIN_REJECTED_PACKET 'J'
#define ENUM_PACKET_TYPE_SEQUENCED_DATA_PACKET 'S'
#define ENUM_PACKET_TYPE_SERVER_HEARTBEAT_PACKET 'H'
#define ENUM_PACKET_TYPE_END_OF_SESSION_PACKET 'Z'
#define ENUM_PACKET_TYPE_LOGIN_REQUEST_PACKET 'L'
#define ENUM_PACKET_TYPE_UNSEQUENCED_DATA_PACKET 'U'
#define ENUM_PACKET_TYPE_CLIENT_HEARTBEAT_PACKET 'R'
#define ENUM_PACKET_TYPE_LOGOUT_REQUEST_PACKET 'O'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Unsequenced Data Packet
 */ 
typedef struct {
    char UnsequencedMessageType[1];
} UnsequencedDataPacketT;

/*
 * Structure: Login Request Packet
 */ 
typedef struct {
    char Username[6];
    char Password[10];
    char RequestedSession[10];
    char RequestedSequenceNumber[20];
} LoginRequestPacketT;

/*
 * Structure: Sequenced Data Packet
 */ 
typedef struct {
    char SequencedMessageType[1];
} SequencedDataPacketT;

/*
 * Structure: Login Rejected Packet
 */ 
typedef struct {
    char RejectReasonCode[1];
} LoginRejectedPacketT;

/*
 * Structure: Login Accepted Packet
 */ 
typedef struct {
    char Session[10];
    char SequenceNumber[20];
} LoginAcceptedPacketT;

/*
 * Structure: Debug Packet
 */ 
typedef struct {
    char Text[1];
} DebugPacketT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint16_t PacketLength;
    char PacketType;
} PacketHeaderT;

/*
 * Structure: Soup Bin Tcp Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} SoupBinTcpPacketT;

/*
 * Structure: Packet
 */ 
typedef struct {
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: National Association of Securities Dealers Automated Quotations
   Version: 3.0
   Date: Wednesday, February 22, 2017
   Specification: soupbintcp.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
