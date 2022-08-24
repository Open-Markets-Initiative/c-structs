/*******************************************************************************
 * C Structs For Lse Millennium Mitch UdpUnitHeader 1.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint8_t MessageLength;
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
 * Structure: Unit Header
 */ 
typedef struct {
    uint16_t Length;
    uint8_t MessageCount;
    char MarketDataGroup[1];
    uint32_t SequenceNumber;
} UnitHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    UnitHeaderT UnitHeader;
} PacketT;

#pragma pack(pop)
