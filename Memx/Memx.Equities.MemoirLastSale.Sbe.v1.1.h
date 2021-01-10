/*******************************************************************************
 * C Structs For Memx Equities Sbe MemoirLastSale 1.1 protocol
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
#define ENUM_TEMPLATE_ID_TRADE_REPORT_MESSAGE = 10
#define ENUM_TEMPLATE_ID_TRADE_CANCEL_MESSAGE = 11
#define ENUM_TEMPLATE_ID_TRADE_CORRECT_MESSAGE = 12


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Trade Correct Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t TradeId;
    uint32_t OriginalTradeQty;
    int64_t OriginalTradePrice;
    char OriginalSaleCondition1[1];
    char OriginalSaleCondition2[1];
    char OriginalSaleCondition3[1];
    char OriginalSaleCondition4[1];
    uint32_t CorrectedTradeQty;
    int64_t CorrectedTradePrice;
    char CorrectedSaleCondition1[1];
    char CorrectedSaleCondition2[1];
    char CorrectedSaleCondition3[1];
    char CorrectedSaleCondition4[1];
} TradeCorrectMessageT;

/*
 * Structure: Trade Cancel Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t TradeId;
    uint32_t TradeQty;
    int64_t LastPrice;
    char SaleCondition1[1];
    char SaleCondition2[1];
    char SaleCondition3[1];
    char SaleCondition4[1];
} TradeCancelMessageT;

/*
 * Structure: Trade Report Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t TradeId;
    uint32_t TradeQty;
    int64_t TradePrice;
    char SaleCondition1[1];
    char SaleCondition2[1];
    char SaleCondition3[1];
    char SaleCondition4[1];
} TradeReportMessageT;

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
    TradeReportMessageT TradeReportMessage;
    TradeCancelMessageT TradeCancelMessage;
    TradeCorrectMessageT TradeCorrectMessage;
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

