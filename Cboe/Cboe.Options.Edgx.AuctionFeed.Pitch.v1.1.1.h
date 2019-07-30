/*******************************************************************************
 * C Structs For Cboe Options Edgx Pitch AuctionFeed 1.1.1 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_BATS_AUCTION_MECHANISM_B = 'B'
#define ENUM_AUCTION_TYPE_STEP_UP_MECHANISM_T = 'T'

/*
 * Customer Indicator Values
 */ 
#define ENUM_CUSTOMER_INDICATOR_NON_CUSTOMER_N = 'N'
#define ENUM_CUSTOMER_INDICATOR_CUSTOMER_C = 'C'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE_0X20 = 0x20
#define ENUM_MESSAGE_TYPE_UNIT_CLEAR_MESSAGE_0X97 = 0x97
#define ENUM_MESSAGE_TYPE_AUCTION_NOTIFICATION_MESSAGE_0_XAD = 0xAD
#define ENUM_MESSAGE_TYPE_AUCTION_CANCEL_MESSAGE_0_XAE = 0xAE
#define ENUM_MESSAGE_TYPE_AUCTION_TRADE_MESSAGE_0_XAF = 0xAF
#define ENUM_MESSAGE_TYPE_SYMBOL_MAPPING_MESSAGE_0X_2E = 0x2E
#define ENUM_MESSAGE_TYPE_END_OF_SESSION_MESSAGE_0X_2D = 0x2D

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY_B = 'B'
#define ENUM_SIDE_SELL_S = 'S'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Auction Cancel Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
} AuctionCancelMessageT;

/*
 * Structure: Auction Notification Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol[6];
    uint64_t AuctionId;
    char AuctionType;
    char Side;
    uint64_t Price;
    uint32_t Contracts;
    char CustomerIndicator;
    char ParticipantId[4];
    uint32_t AuctionEndOffset;
} AuctionNotificationMessageT;

/*
 * Structure: Auction Trade Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
    uint64_t ExecutionId;
    uint64_t Price;
    uint32_t Contracts;
} AuctionTradeMessageT;

/*
 * Structure: End Of Session Message
 */ 
typedef struct {
    uint32_t Timestamp;
} EndOfSessionMessageT;

/*
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint8_t MessageLength;
    uint8_t MessageType;
} MessageHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint16_t Length;
    uint8_t Count;
    uint8_t Unit;
    uint32_t Sequence;
} PacketHeaderT;

/*
 * Structure: Symbol Mapping Message
 */ 
typedef struct {
    char FeedSymbol[6];
    char OsiSymbol[21];
    char SymbolCondition[1];
} SymbolMappingMessageT;

/*
 * Structure: Time Message
 */ 
typedef struct {
    uint32_t Time;
} TimeMessageT;

/*
 * Structure: Unit Clear Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} UnitClearMessageT;

