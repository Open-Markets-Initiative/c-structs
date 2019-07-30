/*******************************************************************************
 * C Structs For Cboe Options C1 Pitch AuctionFeed 1.1.1 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_AUCTION_INSTRUCTION_MECHANISM_B = 'B'
#define ENUM_AUCTION_TYPE_SOLICITATION_AUCTION_MECHANISM_S = 'S'
#define ENUM_AUCTION_TYPE_STEP_UP_MECHANISM_T = 'T'
#define ENUM_AUCTION_TYPE_ALL_OR_NONE_A = 'A'

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
#define ENUM_MESSAGE_TYPE_AUCTION_UPDATE_MESSAGE_0_XD_1 = 0xD1
#define ENUM_MESSAGE_TYPE_AUCTION_SUMMARY_MESSAGE_0X96 = 0x96
#define ENUM_MESSAGE_TYPE_WIDTH_UPDATE_MESSAGE_0_XD_2 = 0xD2
#define ENUM_MESSAGE_TYPE_SYMBOL_MAPPING_MESSAGE_0X_2E = 0x2E
#define ENUM_MESSAGE_TYPE_END_OF_SESSION_MESSAGE_0X_2D = 0x2D

/*
 * Opening Type Values
 */ 
#define ENUM_OPENING_TYPE_GTH_OPENING_G = 'G'
#define ENUM_OPENING_TYPE_RTH_OPENING_O = 'O'
#define ENUM_OPENING_TYPE_HALT_REOPENING_H = 'H'
#define ENUM_OPENING_TYPE_VOLATILITY_OPENING_V = 'V'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY_B = 'B'
#define ENUM_SIDE_SELL_S = 'S'

/*
 * Symbol Condition Values
 */ 
#define ENUM_SYMBOL_CONDITION_NORMAL_N = 'N'
#define ENUM_SYMBOL_CONDITION_CLOSING_ONLY_C = 'C'

/*
 * Width Type Values
 */ 
#define ENUM_WIDTH_TYPE_REGULAR_R = 'R'
#define ENUM_WIDTH_TYPE_VOLATILITY_V = 'V'


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
    char Symbol6[6];
    uint64_t AuctionId;
    char AuctionType;
    char Side;
    uint64_t Price;
    uint32_t Contracts;
    char CustomerIndicator;
    char ParticipantId[4];
    uint32_t AuctionEndOffset;
    char ClientId[4];
} AuctionNotificationMessageT;

/*
 * Structure: Auction Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol8[8];
    char OpeningType;
    uint64_t Price;
    uint32_t Quantity;
} AuctionSummaryMessageT;

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
 * Structure: Auction Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol8[8];
    char OpeningType;
    uint64_t ReferencePrice;
    uint32_t BuyContracts;
    uint32_t SellContracts;
    uint64_t IndicativePrice;
    uint64_t AuctionOnlyPrice;
    char OpeningCondition[1];
} AuctionUpdateMessageT;

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
    char SymbolCondition;
    char Underlying[8];
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

/*
 * Structure: Width Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Underlying[8];
    char WidthType;
    uint32_t Multiplier;
} WidthUpdateMessageT;

