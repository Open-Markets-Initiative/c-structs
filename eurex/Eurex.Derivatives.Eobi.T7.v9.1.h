/*******************************************************************************
 * C Structs For Eurex Derivatives T7 Eobi 9.1 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_BUY = 1
#define ENUM_AGGRESSOR_SIDE_SELL = 2
#define ENUM_AGGRESSOR_SIDE_AGGRESSOR_SIDE_MAXIMUM_VALUE = 2
#define ENUM_AGGRESSOR_SIDE_AGGRESSOR_SIDE_MINIMUM_VALUE = 1

/*
 * Algorithmic Trade Indicator Values
 */ 
#define ENUM_ALGORITHMIC_TRADE_INDICATOR_ALGORITHMIC_TRADE = 1
#define ENUM_ALGORITHMIC_TRADE_INDICATOR_ALGORITHMIC_TRADE_INDICATOR_MAXIMUM_VALUE = 1
#define ENUM_ALGORITHMIC_TRADE_INDICATOR_ALGORITHMIC_TRADE_INDICATOR_MINIMUM_VALUE = 1

/*
 * Appl Seq Reset Indicator Values
 */ 
#define ENUM_APPL_SEQ_RESET_INDICATOR_NO_RESET = 0
#define ENUM_APPL_SEQ_RESET_INDICATOR_RESET = 1
#define ENUM_APPL_SEQ_RESET_INDICATOR_APPL_SEQ_RESET_INDICATOR_MAXIMUM_VALUE = 1
#define ENUM_APPL_SEQ_RESET_INDICATOR_APPL_SEQ_RESET_INDICATOR_MINIMUM_VALUE = 0

/*
 * Bid Ord Type Values
 */ 
#define ENUM_BID_ORD_TYPE_MARKET = 1
#define ENUM_BID_ORD_TYPE_BID_ORD_TYPE_MAXIMUM_VALUE = 1
#define ENUM_BID_ORD_TYPE_BID_ORD_TYPE_MINIMUM_VALUE = 1

/*
 * Completion Indicator Values
 */ 
#define ENUM_COMPLETION_INDICATOR_INCOMPLETE = 0
#define ENUM_COMPLETION_INDICATOR_COMPLETE = 1
#define ENUM_COMPLETION_INDICATOR_COMPLETION_INDICATOR_MAXIMUM_VALUE = 1
#define ENUM_COMPLETION_INDICATOR_COMPLETION_INDICATOR_MINIMUM_VALUE = 0

/*
 * Cross Request Type Values
 */ 
#define ENUM_CROSS_REQUEST_TYPE_CROSS_ANNOUNCEMENT = 1
#define ENUM_CROSS_REQUEST_TYPE_LIQUIDITY_IMPROVEMENT_CROSS = 2
#define ENUM_CROSS_REQUEST_TYPE_CROSS_REQUEST_TYPE_MAXIMUM_VALUE = 2
#define ENUM_CROSS_REQUEST_TYPE_CROSS_REQUEST_TYPE_MINIMUM_VALUE = 1

/*
 * Fast Market Indicator Values
 */ 
#define ENUM_FAST_MARKET_INDICATOR_NO = 0
#define ENUM_FAST_MARKET_INDICATOR_YES = 1
#define ENUM_FAST_MARKET_INDICATOR_FAST_MARKET_INDICATOR_MAXIMUM_VALUE = 1
#define ENUM_FAST_MARKET_INDICATOR_FAST_MARKET_INDICATOR_MINIMUM_VALUE = 0

/*
 * Implied Market Indicator Values
 */ 
#define ENUM_IMPLIED_MARKET_INDICATOR_NOT_IMPLIED = 0
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_IN_OUT = 3
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_MARKET_INDICATOR_MAXIMUM_VALUE = 3
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_MARKET_INDICATOR_MINIMUM_VALUE = 0

/*
 * Input Source Values
 */ 
#define ENUM_INPUT_SOURCE_CLIP_CLIENT_BROKER = 1
#define ENUM_INPUT_SOURCE_INPUT_SOURCE_MAXIMUM_VALUE = 1
#define ENUM_INPUT_SOURCE_INPUT_SOURCE_MINIMUM_VALUE = 1

/*
 * Instrument Scope Product Complex Values
 */ 
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_SIMPLE_INSTRUMENT = 1
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_STANDARD_OPTION_STRATEGY = 2
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_NON_STANDARD_OPTION_STRATEGY = 3
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_VOLATILITY_STRATEGY = 4
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_FUTURES_SPREAD = 5
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_INTER_PRODUCT_SPREAD = 6
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_STANDARD_FUTURES_STRATEGY = 7
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_PACK_AND_BUNDLE = 8
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_STRIP = 9
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_MAXIMUM_VALUE = 9
#define ENUM_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_INSTRUMENT_SCOPE_PRODUCT_COMPLEX_MINIMUM_VALUE = 1

/*
 * Last Fragment Values
 */ 
#define ENUM_LAST_FRAGMENT_N = 0
#define ENUM_LAST_FRAGMENT_Y = 1
#define ENUM_LAST_FRAGMENT_LAST_FRAGMENT_MAXIMUM_VALUE = 1
#define ENUM_LAST_FRAGMENT_LAST_FRAGMENT_MINIMUM_VALUE = 0

/*
 * Leg Security Type Values
 */ 
#define ENUM_LEG_SECURITY_TYPE_LEG_SECURITY_MULTI_LEG = 1
#define ENUM_LEG_SECURITY_TYPE_LEG_SECURITY_UNDERLYING_LEG = 2
#define ENUM_LEG_SECURITY_TYPE_LEG_SECURITY_TYPE_MAXIMUM_VALUE = 2
#define ENUM_LEG_SECURITY_TYPE_LEG_SECURITY_TYPE_MINIMUM_VALUE = 1

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY = 1
#define ENUM_LEG_SIDE_SELL = 2
#define ENUM_LEG_SIDE_LEG_SIDE_MAXIMUM_VALUE = 2
#define ENUM_LEG_SIDE_LEG_SIDE_MINIMUM_VALUE = 1

/*
 * Market Condition Values
 */ 
#define ENUM_MARKET_CONDITION_NORMAL = 0
#define ENUM_MARKET_CONDITION_STRESSED = 1
#define ENUM_MARKET_CONDITION_MARKET_CONDITION_MAXIMUM_VALUE = 1
#define ENUM_MARKET_CONDITION_MARKET_CONDITION_MINIMUM_VALUE = 0

/*
 * Mass Market Condition Values
 */ 
#define ENUM_MASS_MARKET_CONDITION_NORMAL = 0
#define ENUM_MASS_MARKET_CONDITION_STRESSED = 1
#define ENUM_MASS_MARKET_CONDITION_MASS_MARKET_CONDITION_MAXIMUM_VALUE = 1
#define ENUM_MASS_MARKET_CONDITION_MASS_MARKET_CONDITION_MINIMUM_VALUE = 0

/*
 * Mass Sold Out Indicator Values
 */ 
#define ENUM_MASS_SOLD_OUT_INDICATOR_SOLD_OUT = 1
#define ENUM_MASS_SOLD_OUT_INDICATOR_MASS_SOLD_OUT_INDICATOR_MAXIMUM_VALUE = 1
#define ENUM_MASS_SOLD_OUT_INDICATOR_MASS_SOLD_OUT_INDICATOR_MINIMUM_VALUE = 1

/*
 * Match Sub Type Values
 */ 
#define ENUM_MATCH_SUB_TYPE_OPENING_AUCTION = 1
#define ENUM_MATCH_SUB_TYPE_CLOSING_AUCTION = 2
#define ENUM_MATCH_SUB_TYPE_INTRADAY_AUCTION = 3
#define ENUM_MATCH_SUB_TYPE_CIRCUIT_BREAKER_AUCTION = 4
#define ENUM_MATCH_SUB_TYPE_IPO_AUCTION = 5
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MAXIMUM_VALUE = 5
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MINIMUM_VALUE = 1

/*
 * Match Type Values
 */ 
#define ENUM_MATCH_TYPE_CONFIRMED_TRADE_REPORT = 3
#define ENUM_MATCH_TYPE_CROSS_AUCTION = 5
#define ENUM_MATCH_TYPE_CALL_AUCTION = 7
#define ENUM_MATCH_TYPE_LIQUIDITY_IMPROVEMENT_CROSS = 13
#define ENUM_MATCH_TYPE_CONTINUOUS_AUCTION = 14
#define ENUM_MATCH_TYPE_MATCH_TYPE_MAXIMUM_VALUE = 14
#define ENUM_MATCH_TYPE_MATCH_TYPE_MINIMUM_VALUE = 3

/*
 * Md Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_TRADE = 2
#define ENUM_MD_ENTRY_TYPE_OPENING_PRICE = 4
#define ENUM_MD_ENTRY_TYPE_CLOSING_PRICE = 5
#define ENUM_MD_ENTRY_TYPE_HIGH_PRICE = 7
#define ENUM_MD_ENTRY_TYPE_LOW_PRICE = 8
#define ENUM_MD_ENTRY_TYPE_TRADE_VOLUME = 66
#define ENUM_MD_ENTRY_TYPE_PREVIOUS_CLOSING_PRICE = 101
#define ENUM_MD_ENTRY_TYPE_OPENING_AUCTION = 200
#define ENUM_MD_ENTRY_TYPE_INTRADAY_AUCTION = 201
#define ENUM_MD_ENTRY_TYPE_CIRCUIT_BREAKER_AUCTION = 202
#define ENUM_MD_ENTRY_TYPE_CLOSING_AUCTION = 203
#define ENUM_MD_ENTRY_TYPE_IPO_AUCTION = 204
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_MAXIMUM_VALUE = 204
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_MINIMUM_VALUE = 2

/*
 * Offer Ord Type Values
 */ 
#define ENUM_OFFER_ORD_TYPE_MARKET = 1
#define ENUM_OFFER_ORD_TYPE_OFFER_ORD_TYPE_MAXIMUM_VALUE = 1
#define ENUM_OFFER_ORD_TYPE_OFFER_ORD_TYPE_MINIMUM_VALUE = 1

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET = 1
#define ENUM_ORD_TYPE_ORD_TYPE_MAXIMUM_VALUE = 1
#define ENUM_ORD_TYPE_ORD_TYPE_MINIMUM_VALUE = 1

/*
 * Potential Security Trading Event Values
 */ 
#define ENUM_POTENTIAL_SECURITY_TRADING_EVENT_NONE = 0
#define ENUM_POTENTIAL_SECURITY_TRADING_EVENT_PRICE_VOLATILITY_AUCTION_IS_EXTENDED = 10
#define ENUM_POTENTIAL_SECURITY_TRADING_EVENT_POTENTIAL_SECURITY_TRADING_EVENT_MAXIMUM_VALUE = 10
#define ENUM_POTENTIAL_SECURITY_TRADING_EVENT_POTENTIAL_SECURITY_TRADING_EVENT_MINIMUM_VALUE = 0

/*
 * Product Complex Values
 */ 
#define ENUM_PRODUCT_COMPLEX_SIMPLE_INSTRUMENT = 1
#define ENUM_PRODUCT_COMPLEX_STANDARD_OPTION_STRATEGY = 2
#define ENUM_PRODUCT_COMPLEX_NON_STANDARD_OPTION_STRATEGY = 3
#define ENUM_PRODUCT_COMPLEX_VOLATILITY_STRATEGY = 4
#define ENUM_PRODUCT_COMPLEX_FUTURES_SPREAD = 5
#define ENUM_PRODUCT_COMPLEX_INTER_PRODUCT_SPREAD = 6
#define ENUM_PRODUCT_COMPLEX_STANDARD_FUTURES_STRATEGY = 7
#define ENUM_PRODUCT_COMPLEX_PACK_AND_BUNDLE = 8
#define ENUM_PRODUCT_COMPLEX_STRIP = 9
#define ENUM_PRODUCT_COMPLEX_PRODUCT_COMPLEX_MAXIMUM_VALUE = 9
#define ENUM_PRODUCT_COMPLEX_PRODUCT_COMPLEX_MINIMUM_VALUE = 1

/*
 * Security Mass Status Values
 */ 
#define ENUM_SECURITY_MASS_STATUS_ACTIVE = 1
#define ENUM_SECURITY_MASS_STATUS_INACTIVE = 2
#define ENUM_SECURITY_MASS_STATUS_EXPIRED = 4
#define ENUM_SECURITY_MASS_STATUS_KNOCKED_OUT = 6
#define ENUM_SECURITY_MASS_STATUS_KNOCK_OUT_REVOKED = 7
#define ENUM_SECURITY_MASS_STATUS_SUSPENDED = 9
#define ENUM_SECURITY_MASS_STATUS_PENDING_DELETION = 11
#define ENUM_SECURITY_MASS_STATUS_KNOCKED_OUT_AND_SUSPENDED = 12
#define ENUM_SECURITY_MASS_STATUS_SECURITY_MASS_STATUS_MAXIMUM_VALUE = 12
#define ENUM_SECURITY_MASS_STATUS_SECURITY_MASS_STATUS_MINIMUM_VALUE = 1

/*
 * Security Mass Trading Event Values
 */ 
#define ENUM_SECURITY_MASS_TRADING_EVENT_PRICE_VOLATILITY_AUCTION_IS_EXTENDED = 10
#define ENUM_SECURITY_MASS_TRADING_EVENT_PRICE_VOLATILITY_AUCTION_IS_EXTENDED_AGAIN = 11
#define ENUM_SECURITY_MASS_TRADING_EVENT_SECURITY_MASS_TRADING_EVENT_MAXIMUM_VALUE = 11
#define ENUM_SECURITY_MASS_TRADING_EVENT_SECURITY_MASS_TRADING_EVENT_MINIMUM_VALUE = 10

/*
 * Security Mass Trading Status Values
 */ 
#define ENUM_SECURITY_MASS_TRADING_STATUS_TRADING_HALT = 2
#define ENUM_SECURITY_MASS_TRADING_STATUS_MARKET_IMBALANCE_BUY = 7
#define ENUM_SECURITY_MASS_TRADING_STATUS_MARKET_IMBALANCE_SELL = 8
#define ENUM_SECURITY_MASS_TRADING_STATUS_CLOSED = 200
#define ENUM_SECURITY_MASS_TRADING_STATUS_RESTRICTED = 201
#define ENUM_SECURITY_MASS_TRADING_STATUS_BOOK = 202
#define ENUM_SECURITY_MASS_TRADING_STATUS_CONTINUOUS = 203
#define ENUM_SECURITY_MASS_TRADING_STATUS_OPENING_AUCTION = 204
#define ENUM_SECURITY_MASS_TRADING_STATUS_OPENING_AUCTION_FREEZE = 205
#define ENUM_SECURITY_MASS_TRADING_STATUS_INTRADAY_AUCTION = 206
#define ENUM_SECURITY_MASS_TRADING_STATUS_INTRADAY_AUCTION_FREEZE = 207
#define ENUM_SECURITY_MASS_TRADING_STATUS_CIRCUIT_BREAKER_AUCTION = 208
#define ENUM_SECURITY_MASS_TRADING_STATUS_CIRCUIT_BREAKER_AUCTION_FREEZE = 209
#define ENUM_SECURITY_MASS_TRADING_STATUS_CLOSING_AUCTION = 210
#define ENUM_SECURITY_MASS_TRADING_STATUS_CLOSING_AUCTION_FREEZE = 211
#define ENUM_SECURITY_MASS_TRADING_STATUS_IPO_AUCTION = 212
#define ENUM_SECURITY_MASS_TRADING_STATUS_IPO_AUCTION_FREEZE = 213
#define ENUM_SECURITY_MASS_TRADING_STATUS_PRE_CALL = 214
#define ENUM_SECURITY_MASS_TRADING_STATUS_CALL = 215
#define ENUM_SECURITY_MASS_TRADING_STATUS_FREEZE = 216
#define ENUM_SECURITY_MASS_TRADING_STATUS_TRADE_AT_CLOSE = 217
#define ENUM_SECURITY_MASS_TRADING_STATUS_SECURITY_MASS_TRADING_STATUS_MAXIMUM_VALUE = 217
#define ENUM_SECURITY_MASS_TRADING_STATUS_SECURITY_MASS_TRADING_STATUS_MINIMUM_VALUE = 2

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_ACTIVE = 1
#define ENUM_SECURITY_STATUS_INACTIVE = 2
#define ENUM_SECURITY_STATUS_EXPIRED = 4
#define ENUM_SECURITY_STATUS_KNOCKED_OUT = 6
#define ENUM_SECURITY_STATUS_KNOCK_OUT_REVOKED = 7
#define ENUM_SECURITY_STATUS_SUSPENDED = 9
#define ENUM_SECURITY_STATUS_PENDING_DELETION = 11
#define ENUM_SECURITY_STATUS_KNOCKED_OUT_AND_SUSPENDED = 12
#define ENUM_SECURITY_STATUS_SECURITY_STATUS_MAXIMUM_VALUE = 12
#define ENUM_SECURITY_STATUS_SECURITY_STATUS_MINIMUM_VALUE = 1

/*
 * Security Trading Event Values
 */ 
#define ENUM_SECURITY_TRADING_EVENT_PRICE_VOLATILITY_AUCTION_IS_EXTENDED = 10
#define ENUM_SECURITY_TRADING_EVENT_PRICE_VOLATILITY_AUCTION_IS_EXTENDED_AGAIN = 11
#define ENUM_SECURITY_TRADING_EVENT_SECURITY_TRADING_EVENT_MAXIMUM_VALUE = 11
#define ENUM_SECURITY_TRADING_EVENT_SECURITY_TRADING_EVENT_MINIMUM_VALUE = 10

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_TRADING_HALT = 2
#define ENUM_SECURITY_TRADING_STATUS_MARKET_IMBALANCE_BUY = 7
#define ENUM_SECURITY_TRADING_STATUS_MARKET_IMBALANCE_SELL = 8
#define ENUM_SECURITY_TRADING_STATUS_CLOSED = 200
#define ENUM_SECURITY_TRADING_STATUS_RESTRICTED = 201
#define ENUM_SECURITY_TRADING_STATUS_BOOK = 202
#define ENUM_SECURITY_TRADING_STATUS_CONTINUOUS = 203
#define ENUM_SECURITY_TRADING_STATUS_OPENING_AUCTION = 204
#define ENUM_SECURITY_TRADING_STATUS_OPENING_AUCTION_FREEZE = 205
#define ENUM_SECURITY_TRADING_STATUS_INTRADAY_AUCTION = 206
#define ENUM_SECURITY_TRADING_STATUS_INTRADAY_AUCTION_FREEZE = 207
#define ENUM_SECURITY_TRADING_STATUS_CIRCUIT_BREAKER_AUCTION = 208
#define ENUM_SECURITY_TRADING_STATUS_CIRCUIT_BREAKER_AUCTION_FREEZE = 209
#define ENUM_SECURITY_TRADING_STATUS_CLOSING_AUCTION = 210
#define ENUM_SECURITY_TRADING_STATUS_CLOSING_AUCTION_FREEZE = 211
#define ENUM_SECURITY_TRADING_STATUS_IPO_AUCTION = 212
#define ENUM_SECURITY_TRADING_STATUS_IPO_AUCTION_FREEZE = 213
#define ENUM_SECURITY_TRADING_STATUS_PRE_CALL = 214
#define ENUM_SECURITY_TRADING_STATUS_CALL = 215
#define ENUM_SECURITY_TRADING_STATUS_FREEZE = 216
#define ENUM_SECURITY_TRADING_STATUS_TRADE_AT_CLOSE = 217
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_MAXIMUM_VALUE = 217
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_MINIMUM_VALUE = 2

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY = 1
#define ENUM_SIDE_SELL = 2
#define ENUM_SIDE_SIDE_MAXIMUM_VALUE = 2
#define ENUM_SIDE_SIDE_MINIMUM_VALUE = 1

/*
 * Sold Out Indicator Values
 */ 
#define ENUM_SOLD_OUT_INDICATOR_SOLD_OUT = 1
#define ENUM_SOLD_OUT_INDICATOR_SOLD_OUT_INDICATOR_MAXIMUM_VALUE = 1
#define ENUM_SOLD_OUT_INDICATOR_SOLD_OUT_INDICATOR_MINIMUM_VALUE = 1

/*
 * Trad Ses Status Values
 */ 
#define ENUM_TRAD_SES_STATUS_HALTED = 1
#define ENUM_TRAD_SES_STATUS_OPEN = 2
#define ENUM_TRAD_SES_STATUS_CLOSED = 3
#define ENUM_TRAD_SES_STATUS_TRAD_SES_STATUS_MAXIMUM_VALUE = 3
#define ENUM_TRAD_SES_STATUS_TRAD_SES_STATUS_MINIMUM_VALUE = 1

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_IMPLIED_TRADE = 1
#define ENUM_TRADE_CONDITION_OUT_OF_SEQUENCE = 107
#define ENUM_TRADE_CONDITION_MIDPOINT_PRICE = 155
#define ENUM_TRADE_CONDITION_TRADING_ON_TERMS_OF_ISSUE = 156
#define ENUM_TRADE_CONDITION_SPECIAL_AUCTION = 596
#define ENUM_TRADE_CONDITION_TRADE_AT_CLOSE = 624
#define ENUM_TRADE_CONDITION_TRADE_CONDITION_MAXIMUM_VALUE = 624
#define ENUM_TRADE_CONDITION_TRADE_CONDITION_MINIMUM_VALUE = 1

/*
 * Trading Session Id Values
 */ 
#define ENUM_TRADING_SESSION_ID_DAY = 1
#define ENUM_TRADING_SESSION_ID_MORNING = 3
#define ENUM_TRADING_SESSION_ID_EVENING = 5
#define ENUM_TRADING_SESSION_ID_AFTER_HOURS = 6
#define ENUM_TRADING_SESSION_ID_HOLIDAY = 7
#define ENUM_TRADING_SESSION_ID_TRADING_SESSION_ID_MAXIMUM_VALUE = 7
#define ENUM_TRADING_SESSION_ID_TRADING_SESSION_ID_MINIMUM_VALUE = 1

/*
 * Trading Session Sub Id Values
 */ 
#define ENUM_TRADING_SESSION_SUB_ID_PRE_TRADING = 1
#define ENUM_TRADING_SESSION_SUB_ID_CONTINUOUS = 3
#define ENUM_TRADING_SESSION_SUB_ID_CLOSING = 4
#define ENUM_TRADING_SESSION_SUB_ID_POST_TRADING = 5
#define ENUM_TRADING_SESSION_SUB_ID_QUIESCENT = 7
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MAXIMUM_VALUE = 7
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MINIMUM_VALUE = 1


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Md Trade Entry Grp Comp
 */ 
typedef struct {
    uint64_t MdEntryPx;
    uint64_t MdEntrySize;
    uint8_t MdEntryType;
    char Pad7[7];
} MdTradeEntryGrpCompT;

/*
 * Structure: Trade Reversal
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t TransactTime;
    uint64_t LastQty;
    uint64_t LastPx;
    uint64_t TrdRegTsExecutionTime;
    uint32_t TrdMatchId;
    uint16_t TradeCondition;
    char Pad2[2];
    uint8_t NoMdEntries;
    char Pad7[7];
} TradeReversalT;

/*
 * Structure: Trade Report
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t TransactTime;
    uint64_t LastQty;
    uint64_t LastPx;
    uint32_t TrdMatchId;
    uint8_t MatchType;
    uint8_t MatchSubType;
    uint8_t AlgorithmicTradeIndicator;
    char Pad1[1];
    uint16_t TradeCondition;
    char Pad6[6];
} TradeReportT;

/*
 * Structure: Top Of Book
 */ 
typedef struct {
    uint64_t TransactTime;
    int64_t SecurityId;
    uint64_t BidPx;
    uint64_t OfferPx;
    uint64_t BidSize;
    uint64_t OfferSize;
    uint16_t NumberOfBuyOrders;
    uint16_t NumberOfSellOrders;
    char Pad4[4];
} TopOfBookT;

/*
 * Structure: Order Details Comp
 */ 
typedef struct {
    uint64_t TrdRegTsTimePriority;
    uint64_t DisplayQty;
    uint8_t Side;
    uint8_t OrdType;
    char Pad6[6];
    uint64_t Price;
} OrderDetailsCompT;

/*
 * Structure: Snapshot Order
 */ 
typedef struct {
    OrderDetailsCompT OrderDetailsComp;
} SnapshotOrderT;

/*
 * Structure: Quote Request
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t LastQty;
    uint8_t Side;
    char Pad7[7];
    uint64_t TransactTime;
} QuoteRequestT;

/*
 * Structure: Product Summary
 */ 
typedef struct {
    uint32_t LastMsgSeqNumProcessed;
    uint8_t TradingSessionId;
    uint8_t TradingSessionSubId;
    uint8_t TradSesStatus;
    uint8_t MarketCondition;
    uint8_t FastMarketIndicator;
    char Pad7[7];
} ProductSummaryT;

/*
 * Structure: Product State Change
 */ 
typedef struct {
    uint8_t TradingSessionId;
    uint8_t TradingSessionSubId;
    uint8_t TradSesStatus;
    uint8_t MarketCondition;
    uint8_t FastMarketIndicator;
    char Pad3[3];
    uint64_t TransactTime;
} ProductStateChangeT;

/*
 * Structure: Partial Order Execution
 */ 
typedef struct {
    uint8_t Side;
    uint8_t OrdType;
    uint8_t AlgorithmicTradeIndicator;
    char Pad1[1];
    uint32_t TrdMatchId;
    uint64_t Price;
    uint64_t TrdRegTsTimePriority;
    int64_t SecurityId;
    uint64_t LastQty;
    uint64_t LastPx;
} PartialOrderExecutionT;

/*
 * Structure: Order Modify Same Prio
 */ 
typedef struct {
    uint64_t TrdRegTsTimeIn;
    uint64_t TransactTime;
    uint64_t PrevDisplayQty;
    int64_t SecurityId;
    OrderDetailsCompT OrderDetailsComp;
} OrderModifySamePrioT;

/*
 * Structure: Order Modify
 */ 
typedef struct {
    uint64_t TrdRegTsTimeIn;
    uint64_t TrdRegTsPrevTimePriority;
    uint64_t PrevPrice;
    uint64_t PrevDisplayQty;
    int64_t SecurityId;
    OrderDetailsCompT OrderDetailsComp;
} OrderModifyT;

/*
 * Structure: Order Mass Delete
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t TransactTime;
} OrderMassDeleteT;

/*
 * Structure: Order Delete
 */ 
typedef struct {
    uint64_t TrdRegTsTimeIn;
    uint64_t TransactTime;
    int64_t SecurityId;
    OrderDetailsCompT OrderDetailsComp;
} OrderDeleteT;

/*
 * Structure: Order Add
 */ 
typedef struct {
    uint64_t TrdRegTsTimeIn;
    int64_t SecurityId;
    OrderDetailsCompT OrderDetailsComp;
} OrderAddT;

/*
 * Structure: Sec Mass Stat Grp Comp
 */ 
typedef struct {
    int64_t SecurityId;
    uint8_t SecurityStatus;
    uint8_t SecurityTradingStatus;
    uint8_t MarketCondition;
    uint8_t SecurityTradingEvent;
    uint8_t SoldOutIndicator;
    char Pad3[3];
} SecMassStatGrpCompT;

/*
 * Structure: Mass Instrument State Change
 */ 
typedef struct {
    uint8_t InstrumentScopeProductComplex;
    uint8_t SecurityMassStatus;
    uint8_t SecurityMassTradingStatus;
    uint8_t MassMarketCondition;
    uint8_t FastMarketIndicator;
    uint8_t SecurityMassTradingEvent;
    uint8_t MassSoldOutIndicator;
    char Pad1[1];
    uint64_t TransactTime;
    uint8_t LastFragment;
    uint8_t NoRelatedSym;
    char Pad6[6];
} MassInstrumentStateChangeT;

/*
 * Structure: Md Instrument Entry Grp Comp
 */ 
typedef struct {
    uint64_t MdEntryPx;
    uint64_t MdEntrySize;
    uint8_t MdEntryType;
    char Pad1[1];
    uint16_t TradeCondition;
    char Pad4[4];
} MdInstrumentEntryGrpCompT;

/*
 * Structure: Instrument Summary
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t LastUpdateTime;
    uint64_t TrdRegTsExecutionTime;
    uint16_t TotNoOrders;
    uint8_t SecurityStatus;
    uint8_t SecurityTradingStatus;
    uint8_t MarketCondition;
    uint8_t FastMarketIndicator;
    uint8_t SecurityTradingEvent;
    uint8_t SoldOutIndicator;
    uint8_t ProductComplex;
    uint8_t NoMdEntries;
    char Pad6[6];
} InstrumentSummaryT;

/*
 * Structure: Instrument State Change
 */ 
typedef struct {
    int64_t SecurityId;
    uint8_t SecurityStatus;
    uint8_t SecurityTradingStatus;
    uint8_t MarketCondition;
    uint8_t FastMarketIndicator;
    uint8_t SecurityTradingEvent;
    uint8_t SoldOutIndicator;
    char Pad2[2];
    uint64_t TransactTime;
} InstrumentStateChangeT;

/*
 * Structure: Heartbeat
 */ 
typedef struct {
    uint32_t LastMsgSeqNumProcessed;
    char Pad4[4];
} HeartbeatT;

/*
 * Structure: Full Order Execution
 */ 
typedef struct {
    uint8_t Side;
    uint8_t OrdType;
    uint8_t AlgorithmicTradeIndicator;
    char Pad1[1];
    uint32_t TrdMatchId;
    uint64_t Price;
    uint64_t TrdRegTsTimePriority;
    int64_t SecurityId;
    uint64_t LastQty;
    uint64_t LastPx;
} FullOrderExecutionT;

/*
 * Structure: Execution Summary
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t AggressorTime;
    uint64_t RequestTime;
    uint64_t ExecId;
    uint64_t LastQty;
    uint8_t AggressorSide;
    char Pad1[1];
    uint16_t TradeCondition;
    char Pad4[4];
    uint64_t LastPx;
    uint64_t RestingHiddenQty;
    uint64_t RestingCxlQty;
} ExecutionSummaryT;

/*
 * Structure: Cross Request
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t LastPx;
    uint64_t LastQty;
    uint8_t Side;
    uint8_t CrossRequestType;
    uint8_t InputSource;
    char Pad5[5];
    uint64_t TransactTime;
} CrossRequestT;

/*
 * Structure: Auction Clearing Price
 */ 
typedef struct {
    uint64_t TransactTime;
    int64_t SecurityId;
    uint64_t LastPx;
    uint64_t LastQty;
    uint64_t ImbalanceQty;
    uint8_t SecurityTradingStatus;
    uint8_t PotentialSecurityTradingEvent;
    char Pad6[6];
} AuctionClearingPriceT;

/*
 * Structure: Auction Bbo
 */ 
typedef struct {
    uint64_t TransactTime;
    int64_t SecurityId;
    uint64_t BidPx;
    uint64_t OfferPx;
    uint64_t BidSize;
    uint64_t OfferSize;
    uint8_t PotentialSecurityTradingEvent;
    uint8_t BidOrdType;
    uint8_t OfferOrdType;
    char Pad5[5];
} AuctionBboT;

/*
 * Structure: Instrmt Leg Grp Comp
 */ 
typedef struct {
    int32_t LegSymbol;
    char Pad4[4];
    int64_t LegSecurityId;
    uint64_t LegPrice;
    int32_t LegRatioQty;
    uint8_t LegSecurityType;
    uint8_t LegSide;
    char Pad2[2];
} InstrmtLegGrpCompT;

/*
 * Structure: Add Complex Instrument
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t TransactTime;
    int32_t SecuritySubType;
    uint8_t ProductComplex;
    uint8_t ImpliedMarketIndicator;
    char Pad2[2];
    uint32_t LegRatioMultiplier;
    uint8_t NoLegs;
    char Pad3[3];
} AddComplexInstrumentT;

/*
 * Structure: Message Header Comp
 */ 
typedef struct {
    uint16_t BodyLen;
    uint16_t TemplateId;
    uint32_t MsgSeqNum;
} MessageHeaderCompT;

/*
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderCompT MessageHeaderComp;
} MessageT;

/*
 * Structure: Packet Info
 */ 
typedef struct {
    uint16_t HeaderLength;
    uint16_t PacketId;
    uint32_t PacketSequenceNumber;
} PacketInfoT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    PacketInfoT PacketInfo;
    uint32_t ApplSeqNum;
    int32_t MarketSegmentId;
    uint8_t PartitionId;
    uint8_t CompletionIndicator;
    uint8_t ApplSeqResetIndicator;
    char Pad5[5];
    uint64_t TransactTime;
} PacketHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Eurex Exchange
   Version: 9.1
   Date: Thursday, April 8, 2021
   Specification: T7_EOBI_Manual_v.9.1.1.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
