/*******************************************************************************
 * C Structs For Memx Equities Sbe MemoirDepthFeed 1.1 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_HEARTBEAT_MESSAGE = 0
#define ENUM_MESSAGE_TYPE_SESSION_SHUTDOWN_MESSAGE = 1
#define ENUM_MESSAGE_TYPE_SEQUENCED_MESSAGE = 2

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_INSTRUMENT_DIRECTORY_MESSAGE = 1
#define ENUM_TEMPLATE_ID_REG_SHO_RESTRICTION_MESSAGE = 2
#define ENUM_TEMPLATE_ID_SECURITY_TRADING_STATUS_MESSAGE = 3
#define ENUM_TEMPLATE_ID_TRADING_SESSION_STATUS_MESSAGE = 5
#define ENUM_TEMPLATE_ID_ORDER_ADDED_MESSAGE = 10
#define ENUM_TEMPLATE_ID_ORDER_DELETED_MESSAGE = 11
#define ENUM_TEMPLATE_ID_ORDER_REDUCED_MESSAGE = 12
#define ENUM_TEMPLATE_ID_ORDER_EXECUTED_MESSAGE = 13
#define ENUM_TEMPLATE_ID_TRADE_MESSAGE = 14
#define ENUM_TEMPLATE_ID_BROKEN_TRADE_MESSAGE = 15
#define ENUM_TEMPLATE_ID_CORRECTED_TRADE_MESSAGE = 16
#define ENUM_TEMPLATE_ID_CLEAR_BOOK_MESSAGE = 18
#define ENUM_TEMPLATE_ID_SNAPSHOT_COMPLETE_MESSAGE = 100


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Snapshot Complete Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint64_t AsOfSequenceNumber;
} SnapshotCompleteMessageT;

/*
 * Structure: Clear Book Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
} ClearBookMessageT;

/*
 * Structure: Corrected Trade Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t TradeId;
    uint32_t OriginalQuantity;
    int64_t OriginalPrice;
    uint32_t CorrectedQuantity;
    int64_t CorrectedPrice;
} CorrectedTradeMessageT;

/*
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t TradeId;
    uint32_t OriginalQuantity;
    int64_t OriginalPrice;
} BrokenTradeMessageT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t TradeId;
    uint32_t Quantity;
    int64_t Price;
} TradeMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t OrderId;
    uint64_t TradeId;
    uint32_t Quantity;
    int64_t Price;
} OrderExecutedMessageT;

/*
 * Structure: Order Reduced Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t OrderId;
    uint32_t Quantity;
} OrderReducedMessageT;

/*
 * Structure: Order Deleted Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t OrderId;
} OrderDeletedMessageT;

/*
 * Structure: Order Added Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t OrderId;
    char Side[1];
    uint32_t Quantity;
    int64_t Price;
} OrderAddedMessageT;

/*
 * Structure: Trading Session Status Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char TradingSession[1];
} TradingSessionStatusMessageT;

/*
 * Structure: Security Trading Status Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    char SecurityTradingStatus[1];
    char SecurityTradingStatusReason[1];
} SecurityTradingStatusMessageT;

/*
 * Structure: Reg Sho Restriction Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint8_t ShortSaleRestriction;
} RegShoRestrictionMessageT;

/*
 * Structure: Instrument Directory Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    char Symbol[6];
    char SymbolSfx[6];
    uint32_t RoundLot;
    uint8_t Reserved;
    uint8_t IsTestSymbol;
    int64_t Mpv;
} InstrumentDirectoryMessageT;

/*
 * Structure: Payload
 */ 
typedef struct {
    InstrumentDirectoryMessageT InstrumentDirectoryMessage;
    RegShoRestrictionMessageT RegShoRestrictionMessage;
    SecurityTradingStatusMessageT SecurityTradingStatusMessage;
    TradingSessionStatusMessageT TradingSessionStatusMessage;
    OrderAddedMessageT OrderAddedMessage;
    OrderDeletedMessageT OrderDeletedMessage;
    OrderReducedMessageT OrderReducedMessage;
    OrderExecutedMessageT OrderExecutedMessage;
    TradeMessageT TradeMessage;
    BrokenTradeMessageT BrokenTradeMessage;
    CorrectedTradeMessageT CorrectedTradeMessage;
    ClearBookMessageT ClearBookMessage;
    SnapshotCompleteMessageT SnapshotCompleteMessage;
} PayloadT;

/*
 * Structure: Sbe Header
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t TemplateId;
    uint8_t SchemaId;
    uint16_t Version;
} SbeHeaderT;

/*
 * Structure: Sbe Message
 */ 
typedef struct {
    SbeHeaderT SbeHeader;
} SbeMessageT;

/*
 * Structure: Message
 */ 
typedef struct {
    uint16_t MessageLength;
} MessageT;

/*
 * Structure: Sequenced Message
 */ 
typedef struct {
    uint16_t MessageCount;
} SequencedMessageT;

/*
 * Structure: Sequenced Messages
 */ 
typedef struct {
} SequencedMessagesT;

/*
 * Structure: Common Header
 */ 
typedef struct {
    uint8_t MessageType;
    uint8_t HeaderLength;
    uint64_t SessionId;
    uint64_t SequenceNumber;
} CommonHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    CommonHeaderT CommonHeader;
} PacketT;

