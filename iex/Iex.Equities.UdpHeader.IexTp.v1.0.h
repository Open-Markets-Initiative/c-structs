/*******************************************************************************
 * C Structs For Iex Equities IexTp UdpHeader 1.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageLength;
    char MessageType[1];
} MessageHeaderT;

/*
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Iex Tp Header
 */ 
typedef struct {
    uint8_t Version;
    char Reserved[1];
    uint16_t MessageProtocolId;
    uint32_t ChannelId;
    uint32_t SessionId;
    uint16_t PayloadLength;
    uint16_t MessageCount;
    uint64_t StreamOffset;
    uint64_t FirstMessageSequenceNumber;
    uint64_t SendTime;
} IexTpHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    IexTpHeaderT IexTpHeader;
} PacketT;

