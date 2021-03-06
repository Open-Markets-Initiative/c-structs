/*******************************************************************************
 * C Structs For Otc Markets Ats Headers 1.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageSize;
    uint8_t MessageType;
} MessageHeaderT;

/*
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
    char Payload[0];
} MessageT;

/*
 * Bitfield: Packet Flag
 */ 
typedef struct {
    uint8_t
    Test : 1,
    Replay : 1,
    ReservedPacketFlags : 4,
    SeqNumReset : 1,
    Heartbeat : 1;
} PacketFlagT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint16_t PacketSize;
    uint32_t SeqNum;
    PacketFlagT PacketFlag;
    uint8_t Messages;
    uint32_t PacketMilli;
} PacketHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

