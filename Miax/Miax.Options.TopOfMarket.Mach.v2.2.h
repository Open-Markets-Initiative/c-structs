/*******************************************************************************
 * C Structs For Miax Options Mach TopOfMarket 2.2 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Packet Type Values
 */ 
#define ENUM_PACKET_TYPE_HEARTBEAT = 0
#define ENUM_PACKET_TYPE_START_OF_SESSION = 1
#define ENUM_PACKET_TYPE_END_OF_SESSION = 2
#define ENUM_PACKET_TYPE_APPLICATION_MESSAGE = 3


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Application Message
 */ 
typedef struct {
    char MessageType[1];
    char Data[0];
} ApplicationMessageT;

/*
 * Structure: Payload
 */ 
typedef struct {
    ApplicationMessageT ApplicationMessage;
} PayloadT;

/*
 * Structure: Message
 */ 
typedef struct {
    uint64_t SequenceNumber;
    uint16_t PacketLength;
    uint8_t PacketType;
    uint8_t SessionNumber;
} MessageT;

/*
 * Structure: Packet
 */ 
typedef struct {
} PacketT;

