/*******************************************************************************
 * C Structs For Memx Equities Sbe MemoirTopOfBook 1.1 protocol
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
#define ENUM_TEMPLATE_ID_SNAPSHOT_COMPLETE_MESSAGE = 4
#define ENUM_TEMPLATE_ID_TRADING_SESSION_STATUS_MESSAGE = 5
#define ENUM_TEMPLATE_ID_BEST_BID_OFFER_MESSAGE = 10
#define ENUM_TEMPLATE_ID_BEST_BID_MESSAGE = 11
#define ENUM_TEMPLATE_ID_BEST_OFFER_MESSAGE = 12
#define ENUM_TEMPLATE_ID_BEST_BID_SHORT_MESSAGE = 13
#define ENUM_TEMPLATE_ID_BEST_OFFER_SHORT_MESSAGE = 14
#define ENUM_TEMPLATE_ID_CLEAR_BOOK_MESSAGE = 15


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Clear Book Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
} ClearBookMessageT;

/*
 * Structure: Best Offer Short Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint32_t OfferSize;
    int64_t OfferPrice;
} BestOfferShortMessageT;

/*
 * Structure: Best Bid Short Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint32_t BidSize;
    int64_t BidPrice;
} BestBidShortMessageT;

/*
 * Structure: Best Offer Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint32_t OfferSize;
    int64_t OfferPrice;
} BestOfferMessageT;

/*
 * Structure: Best Bid Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint32_t BidSize;
    int64_t BidPrice;
} BestBidMessageT;

/*
 * Structure: Best Bid Offer Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint32_t BidSize;
    int64_t BidPrice;
    uint32_t OfferSize;
    int64_t OfferPrice;
} BestBidOfferMessageT;

/*
 * Structure: Trading Session Status Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char TradingSession[1];
} TradingSessionStatusMessageT;

/*
 * Structure: Snapshot Complete Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint64_t AsOfSequenceNumber;
} SnapshotCompleteMessageT;

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
    SnapshotCompleteMessageT SnapshotCompleteMessage;
    TradingSessionStatusMessageT TradingSessionStatusMessage;
    BestBidOfferMessageT BestBidOfferMessage;
    BestBidMessageT BestBidMessage;
    BestOfferMessageT BestOfferMessage;
    BestBidShortMessageT BestBidShortMessage;
    BestOfferShortMessageT BestOfferShortMessage;
    ClearBookMessageT ClearBookMessage;
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

