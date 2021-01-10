/*******************************************************************************
 * C Structs For Otc Markets Ats Multicast 4.3 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Asset Class Values
 */ 
#define ENUM_ASSET_CLASS_EQUITY = 1
#define ENUM_ASSET_CLASS_FIXED_INCOME = 2

/*
 * Disclosure Status Values
 */ 
#define ENUM_DISCLOSURE_STATUS_NO_DISCLOSURE_STATUS = 0
#define ENUM_DISCLOSURE_STATUS_CURRENT_INFORMATION = 2
#define ENUM_DISCLOSURE_STATUS_LIMITED_INFORMATION = 3
#define ENUM_DISCLOSURE_STATUS_NO_INFORMATION = 4

/*
 * Reference Price Action Values
 */ 
#define ENUM_REFERENCE_PRICE_ACTION_ADD = 2
#define ENUM_REFERENCE_PRICE_ACTION_DELETE = 3
#define ENUM_REFERENCE_PRICE_ACTION_SPIN = 4

/*
 * Reporting Status Values
 */ 
#define ENUM_REPORTING_STATUS_ALTERNATIVE_REPORTING_STANDARD = 'A'
#define ENUM_REPORTING_STATUS_BANK_THRIFT = 'B'
#define ENUM_REPORTING_STATUS_SEC_REPORTING = 'F'
#define ENUM_REPORTING_STATUS_INTERNATIONAL_REPORTING = 'G'
#define ENUM_REPORTING_STATUS_INSURANCE_COMPANY = 'I'
#define ENUM_REPORTING_STATUS_NO_REPORTING = 'N'
#define ENUM_REPORTING_STATUS_OTHER_REPORTING_STANDARD = 'O'
#define ENUM_REPORTING_STATUS_FINRA_REPORTING = 'R'
#define ENUM_REPORTING_STATUS_SEC_REPORTING_INVESTMENT_COMPANY = 'V'
#define ENUM_REPORTING_STATUS_SEC_REPORTING_REG_A = 'W'

/*
 * Security Action Values
 */ 
#define ENUM_SECURITY_ACTION_UPDATE = 1
#define ENUM_SECURITY_ACTION_ADD = 2
#define ENUM_SECURITY_ACTION_DELETE = 3
#define ENUM_SECURITY_ACTION_SPIN = 4

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_ACTIVE = 'A'
#define ENUM_SECURITY_STATUS_QUOTE_ONLY = 'Q'
#define ENUM_SECURITY_STATUS_SUSPENDED = 'S'
#define ENUM_SECURITY_STATUS_HALTED = 'H'
#define ENUM_SECURITY_STATUS_INTERNAL_HALT = 'I'
#define ENUM_SECURITY_STATUS_REVOKED = 'R'
#define ENUM_SECURITY_STATUS_DELETED = 'D'

/*
 * Spin Type Values
 */ 
#define ENUM_SPIN_TYPE_REFERENCE = 1
#define ENUM_SPIN_TYPE_MARKET_DATA = 2
#define ENUM_SPIN_TYPE_OPENING = 3

/*
 * Tier Values
 */ 
#define ENUM_TIER_NO_TIER = 0
#define ENUM_TIER_OTCQX_US_PREMIER = 1
#define ENUM_TIER_OTCQX_US = 2
#define ENUM_TIER_OTCQX_INTERNATIONAL_PREMIER = 5
#define ENUM_TIER_OTCQX_INTERNATIONAL = 6
#define ENUM_TIER_OTCQB = 10
#define ENUM_TIER_OTCBB_ONLY = 11
#define ENUM_TIER_PINK_CURRENT = 20
#define ENUM_TIER_PINK_LIMITED = 21
#define ENUM_TIER_PINK_NO_INFORMATION = 22
#define ENUM_TIER_GREY_MARKET = 30
#define ENUM_TIER_EXPERT_MARKET = 40
#define ENUM_TIER_OTC_BONDS = 50

/*
 * Trade Action Values
 */ 
#define ENUM_TRADE_ACTION_ADD = 2


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Bitfield: Trade Status
 */ 
typedef struct {
    unsigned char ReservedTradeStatusBits : 7;
    unsigned char Irregular : 1;
} TradeStatusT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    uint32_t TradeId;
    uint8_t TradeAction;
    uint8_t TradeFlags;
    uint32_t SecurityId;
    TradeStatusT TradeStatus;
    char Deprecated[8];
    uint64_t TradePrice;
    uint32_t TradeSize;
    uint64_t TradeTimeMilli;
} TradeMessageT;

/*
 * Bitfield: Security Flags
 */ 
typedef struct {
    unsigned char SaturationEligible : 1;
    unsigned char OtcLinkMessagingDisabled : 1;
    unsigned char OtcLinkEcnEligible : 1;
    unsigned char BbQuoted : 1;
    unsigned char UnsolicitedOnly : 1;
    unsigned char QualifiedInstitutionalBuyersOnly : 1;
    unsigned char CaveatEmptorWarning : 1;
    unsigned char Piggyback : 1;
} SecurityFlagsT;

/*
 * Bitfield: Quote Flags
 */ 
typedef struct {
    unsigned char BidAskWanted : 1;
    unsigned char BidPriced : 1;
    unsigned char BidUnsolicited : 1;
    unsigned char AskBidWanted : 1;
    unsigned char AskPriced : 1;
    unsigned char AskUnsolicited : 1;
    unsigned char State : 1;
    unsigned char UpdateSide : 1;
} QuoteFlagsT;

/*
 * Structure: Reference Price Update Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    uint32_t ReferencePriceId;
    QuoteFlagsT QuoteFlags;
    uint64_t Price;
    uint32_t Size;
    uint64_t TimeMilli;
} ReferencePriceUpdateMessageT;

/*
 * Structure: Reference Price Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    uint32_t ReferencePriceId;
    uint8_t ReferencePriceAction;
    QuoteFlagsT QuoteFlags;
    uint32_t SecurityId;
    uint64_t AskPrice;
    uint32_t AskSize;
    uint64_t AskTimeMilli;
    uint64_t BidPrice;
    uint32_t BidSize;
    uint64_t BidTimeMilli;
} ReferencePriceMessageT;

/*
 * Structure: Inside Update Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    uint32_t InsideId;
    QuoteFlagsT QuoteFlags;
    uint64_t Price;
    uint32_t Size;
    uint64_t InsideTimeMilli;
    uint8_t NumPricedMp;
} InsideUpdateMessageT;

/*
 * Structure: Market Open Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    uint64_t MarketOpen;
    uint64_t MarketClose;
} MarketOpenMessageT;

/*
 * Bitfield: Extended Quote Flags
 */ 
typedef struct {
    unsigned char ReservedExtendedQuoteFlagBits : 4;
    unsigned char NmsConditionalQuote : 1;
    unsigned char OfferAutoEx : 1;
    unsigned char BidAutoEx : 1;
    unsigned char QuoteSaturated : 1;
} ExtendedQuoteFlagsT;

/*
 * Structure: Quote Update Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    uint32_t QuoteId;
    QuoteFlagsT QuoteFlags;
    uint64_t Price;
    uint32_t Size;
    int8_t Qap;
    uint64_t QuoteTimeMilli;
    uint16_t QuoteReferenceId;
    ExtendedQuoteFlagsT ExtendedQuoteFlags;
} QuoteUpdateMessageT;

/*
 * Structure: Quote Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    uint32_t QuoteId;
    uint8_t QuoteAction;
    QuoteFlagsT QuoteFlags;
    uint32_t SecurityId;
    char Mpid[4];
    uint64_t AskPrice;
    uint32_t AskSize;
    int8_t AskQap;
    uint64_t AskTimeMilli;
    uint64_t BidPrice;
    uint32_t BidSize;
    int8_t BidQap;
    uint64_t BidTimeMilli;
    uint16_t QuoteReferenceId;
    ExtendedQuoteFlagsT ExtendedQuoteFlags;
} QuoteMessageT;

/*
 * Structure: Security Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    char Symbol[10];
    uint64_t LastUpdateMilli;
    uint8_t SecurityAction;
    uint8_t AssetClass;
    uint32_t SecurityId;
    SecurityFlagsT SecurityFlags;
    uint8_t Tier;
    char ReportingStatus;
    char SecurityStatus;
} SecurityMessageT;

/*
 * Structure: Market Close Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    uint64_t MarketCloseTimeMilli;
    uint32_t MarketMsgCt;
} MarketCloseMessageT;

/*
 * Structure: End Of Spin Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    uint8_t SpinType;
    uint32_t SpinMsgCt;
    uint64_t SpinEndTimeMilli;
    uint32_t SpinLastSeqNum;
} EndOfSpinMessageT;

/*
 * Structure: Start Of Spin Message
 */ 
typedef struct {
    uint32_t ChannelSeqNum;
    uint8_t SpinType;
    uint64_t SpinStartTimeMilli;
    uint32_t SpinLastSeqNum;
} StartOfSpinMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageSize;
    uint8_t MessageType;
} MessageHeaderT;

/*
 * Bitfield: Packet Flag
 */ 
typedef struct {
    unsigned char Test : 1;
    unsigned char Replay : 1;
    unsigned char ReservedPacketFlags : 4;
    unsigned char SeqNumReset : 1;
    unsigned char Heartbeat : 1;
} PacketFlagT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint16_t PacketSize;
    uint32_t SeqNum;
    PacketFlagT PacketFlag;
    uint8_t Messages;
    uint32_t PacketMilli;
} PacketHeaderT;

