/*******************************************************************************
 * C Structs For Nyse Amex Equities Ultra OpenBook 2.1.b protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_FULL_UPDATE_MESSAGE = 230
#define ENUM_MESSAGE_TYPE_DELTA_UPDATE_MESSAGE = 231
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE = 1
#define ENUM_MESSAGE_TYPE_HEARTBEAT_MESSAGE = 2

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_NO_SPECIAL_QUOTE_CONDITION = ' '
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE = 'W'

/*
 * Reason Code Values
 */ 
#define ENUM_REASON_CODE_NEW_ORDERADDITIONAL_INTEREST_ADDED = 'O'
#define ENUM_REASON_CODE_CANCEL = 'C'
#define ENUM_REASON_CODE_EXECUTION = 'E'
#define ENUM_REASON_CODE_MULTIPLE_EVENTS = 'X'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY = 'B'
#define ENUM_SIDE_SELL = 'S'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_PRE_OPENING = 'P'
#define ENUM_TRADING_STATUS_EARLY_SESSION = 'E'
#define ENUM_TRADING_STATUS_CORE_SESSION = 'O'
#define ENUM_TRADING_STATUS_LATE_SESSION = 'L'
#define ENUM_TRADING_STATUS_CLOSED = 'X'
#define ENUM_TRADING_STATUS_HALTED = 'H'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Sequence Number Reset Message
 */ 
typedef struct {
    int32_t NextSequenceNumber;
} SequenceNumberResetMessageT;

/*
 * Structure: Delta Price Point
 */ 
typedef struct {
    int32_t PriceNumerator;
    int32_t Volume;
    int32_t ChgQty;
    int16_t NumOrders;
    char Side;
    char ReasonCode;
    int32_t LinkId1;
    int32_t LinkId2;
    int32_t LinkId3;
} DeltaPricePointT;

/*
 * Structure: Delta Update Message
 */ 
typedef struct {
    int16_t DeltaSize;
    int32_t SymbolIndex;
    int32_t SourceTime;
    int16_t SourceTimeMicroSecs;
    int32_t SourceSeqNum;
    int8_t SourceSessionId;
    char QuoteCondition;
    char TradingStatus;
    int8_t PriceScaleCode;
} DeltaUpdateMessageT;

/*
 * Structure: Delta Update Messages
 */ 
typedef struct {
} DeltaUpdateMessagesT;

/*
 * Structure: Full Price Point
 */ 
typedef struct {
    int32_t PriceNumerator;
    int32_t Volume;
    int16_t NumOrders;
    char Side;
    char Reserved1[1];
} FullPricePointT;

/*
 * Structure: Full Update Message
 */ 
typedef struct {
    int16_t UpdateSize;
    int32_t SymbolIndex;
    int32_t SourceTime;
    int16_t SourceTimeMicroSecs;
    int32_t SymbolSeqNum;
    int8_t SourceSessionId;
    char Symbol[11];
    int8_t PriceScaleCode;
    char QuoteCondition;
    char TradingStatus;
    char Reserved1[1];
    int16_t Mpv;
} FullUpdateMessageT;

/*
 * Structure: Full Update Messages
 */ 
typedef struct {
} FullUpdateMessagesT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint16_t PacketSize;
    uint16_t MessageType;
    uint32_t SequenceNumber;
    uint32_t Timestamp;
    uint8_t ProductId;
    uint8_t RetransmissionFlag;
    uint8_t MessageCount;
    uint8_t LinkFlag;
} PacketHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

#pragma pack(pop)
