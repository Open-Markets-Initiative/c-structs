/*******************************************************************************
 * C Structs For Tmx QuantumFeed Xmt UdpHeader 1.1 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Ack Required Poss Dup Values
 */ 
#define ENUM_ACK_REQUIRED_POSS_DUP_RECEIVER_NEEDS_TO_ACK = 'A'
#define ENUM_ACK_REQUIRED_POSS_DUP_POSSIBLE_DUPLICATES = 'D'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Body Header
 */ 
typedef struct {
    uint16_t MsgLength;
    char MsgType[1];
} BodyHeaderT;

/*
 * Structure: Body
 */ 
typedef struct {
    BodyHeaderT BodyHeader;
} BodyT;

/*
 * Structure: Frame Header
 */ 
typedef struct {
    char StartOfFrame;
    char ProtocolName[1];
    char ProtocolVersion[1];
    uint16_t MessageLength;
    uint32_t SessionId;
    char AckRequiredPossDup;
    uint8_t NumBody;
} FrameHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    FrameHeaderT FrameHeader;
} PacketT;

