/*******************************************************************************
 * C Structs For Eurex Derivatives T7 Eobi 4.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_BUY_1 = 1
#define ENUM_AGGRESSOR_SIDE_SELL_2 = 2
#define ENUM_AGGRESSOR_SIDE_AGGRESSOR_SIDE_MINIMUM_VALUE_2 = 2
#define ENUM_AGGRESSOR_SIDE_AGGRESSOR_SIDE_MINIMUM_VALUE_1 = 1

/*
 * Application Sequence Reset Indicator Values
 */ 
#define ENUM_APPLICATION_SEQUENCE_RESET_INDICATOR_NO_RESET_0 = 0
#define ENUM_APPLICATION_SEQUENCE_RESET_INDICATOR_RESET_1 = 1
#define ENUM_APPLICATION_SEQUENCE_RESET_INDICATOR_APPL_SEQ_RESET_INDICATOR_MINIMUM_VALUE_1 = 1
#define ENUM_APPLICATION_SEQUENCE_RESET_INDICATOR_APPL_SEQ_RESET_INDICATOR_MINIMUM_VALUE_0 = 0

/*
 * Completion Indicator Values
 */ 
#define ENUM_COMPLETION_INDICATOR_INCOMPLETE_0 = 0
#define ENUM_COMPLETION_INDICATOR_COMPLETE_1 = 1
#define ENUM_COMPLETION_INDICATOR_COMPLETION_INDICATOR_MINIMUM_VALUE_1 = 1
#define ENUM_COMPLETION_INDICATOR_COMPLETION_INDICATOR_MINIMUM_VALUE_0 = 0

/*
 * Fast Market Indicator Values
 */ 
#define ENUM_FAST_MARKET_INDICATOR_NO_0 = 0
#define ENUM_FAST_MARKET_INDICATOR_YES_1 = 1
#define ENUM_FAST_MARKET_INDICATOR_FAST_MARKET_INDICATOR_MINIMUM_VALUE_1 = 1
#define ENUM_FAST_MARKET_INDICATOR_FAST_MARKET_INDICATOR_MINIMUM_VALUE_0 = 0

/*
 * Implied Market Indicator Values
 */ 
#define ENUM_IMPLIED_MARKET_INDICATOR_NOT_IMPLIED_0 = 0
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_IN_OUT_3 = 3
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_MARKET_INDICATOR_MINIMUM_VALUE_3 = 3
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_MARKET_INDICATOR_MINIMUM_VALUE_0 = 0

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY_1 = 1
#define ENUM_LEG_SIDE_SELL_2 = 2
#define ENUM_LEG_SIDE_LEG_SIDE_MINIMUM_VALUE_2 = 2
#define ENUM_LEG_SIDE_LEG_SIDE_MINIMUM_VALUE_1 = 1

/*
 * Match Sub Type Values
 */ 
#define ENUM_MATCH_SUB_TYPE_OPENING_AUCTION_1 = 1
#define ENUM_MATCH_SUB_TYPE_CLOSING_AUCTION_2 = 2
#define ENUM_MATCH_SUB_TYPE_INTRADAY_AUCTION_3 = 3
#define ENUM_MATCH_SUB_TYPE_CIRCUIT_BREAKER_AUCTION_4 = 4
#define ENUM_MATCH_SUB_TYPE_IPO_AUCTION_5 = 5
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MINIMUM_VALUE_5 = 5
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MINIMUM_VALUE_1 = 1

/*
 * Match Type Values
 */ 
#define ENUM_MATCH_TYPE_CONFIRMED_TRADE_REPORT_3 = 3
#define ENUM_MATCH_TYPE_CROSS_AUCTION_5 = 5
#define ENUM_MATCH_TYPE_CALL_AUCTION_7 = 7
#define ENUM_MATCH_TYPE_MATCH_TYPE_MINIMUM_VALUE_7 = 7
#define ENUM_MATCH_TYPE_MATCH_TYPE_MINIMUM_VALUE_3 = 3

/*
 * Md Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_TRADE_2 = 2
#define ENUM_MD_ENTRY_TYPE_OPENING_PRICE_4 = 4
#define ENUM_MD_ENTRY_TYPE_CLOSING_PRICE_5 = 5
#define ENUM_MD_ENTRY_TYPE_HIGH_PRICE_7 = 7
#define ENUM_MD_ENTRY_TYPE_LOW_PRICE_8 = 8
#define ENUM_MD_ENTRY_TYPE_TRADE_VOLUME_66 = 66
#define ENUM_MD_ENTRY_TYPE_PREVIOUS_CLOSING_PRICE_101 = 101
#define ENUM_MD_ENTRY_TYPE_OPENING_AUCTION_200 = 200
#define ENUM_MD_ENTRY_TYPE_INTRADAY_AUCTION_201 = 201
#define ENUM_MD_ENTRY_TYPE_CIRCUIT_BREAKER_AUCTION_202 = 202
#define ENUM_MD_ENTRY_TYPE_CLOSING_AUCTION_203 = 203
#define ENUM_MD_ENTRY_TYPE_IPO_AUCTION_204 = 204
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_MINIMUM_VALUE_204 = 204
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_MINIMUM_VALUE_2 = 2

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET_1 = 1
#define ENUM_ORD_TYPE_ORD_TYPE_MINIMUM_VALUE_1 = 1
#define ENUM_ORD_TYPE_ORD_TYPE_MINIMUM_VALUE_1 = 1

/*
 * Potential Security Trading Event Values
 */ 
#define ENUM_POTENTIAL_SECURITY_TRADING_EVENT_NONE_0 = 0
#define ENUM_POTENTIAL_SECURITY_TRADING_EVENT_PRICE_VOLATILITY_AUCTION_IS_EXTENDED_10 = 10
#define ENUM_POTENTIAL_SECURITY_TRADING_EVENT_POTENTIAL_SECURITY_TRADING_EVENT_MINIMUM_VALUE_10 = 10
#define ENUM_POTENTIAL_SECURITY_TRADING_EVENT_POTENTIAL_SECURITY_TRADING_EVENT_MINIMUM_VALUE_0 = 0

/*
 * Product Complex Values
 */ 
#define ENUM_PRODUCT_COMPLEX_STANDARD_OPTION_STRATEGY_2 = 2
#define ENUM_PRODUCT_COMPLEX_NON_STANDARD_OPTION_STRATEGY_3 = 3
#define ENUM_PRODUCT_COMPLEX_VOLATILITY_STRATEGY_4 = 4
#define ENUM_PRODUCT_COMPLEX_FUTURES_SPREAD_5 = 5
#define ENUM_PRODUCT_COMPLEX_INTER_PRODUCT_SPREAD_6 = 6
#define ENUM_PRODUCT_COMPLEX_STANDARD_FUTURES_STRATEGY_7 = 7
#define ENUM_PRODUCT_COMPLEX_PACK_AND_BUNDLE_8 = 8
#define ENUM_PRODUCT_COMPLEX_STRIP_9 = 9
#define ENUM_PRODUCT_COMPLEX_PRODUCT_COMPLEX_MINIMUM_VALUE_9 = 9
#define ENUM_PRODUCT_COMPLEX_PRODUCT_COMPLEX_MINIMUM_VALUE_2 = 2

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_ACTIVE_1 = 1
#define ENUM_SECURITY_STATUS_INACTIVE_2 = 2
#define ENUM_SECURITY_STATUS_EXPIRED_4 = 4
#define ENUM_SECURITY_STATUS_SUSPENDED_9 = 9
#define ENUM_SECURITY_STATUS_SECURITY_STATUS_MINIMUM_VALUE_9 = 9
#define ENUM_SECURITY_STATUS_SECURITY_STATUS_MINIMUM_VALUE_1 = 1

/*
 * Security Trading Event Values
 */ 
#define ENUM_SECURITY_TRADING_EVENT_PRICE_VOLATILITY_AUCTION_IS_EXTENDED_10 = 10
#define ENUM_SECURITY_TRADING_EVENT_PRICE_VOLATILITY_AUCTION_IS_EXTENDED_AGAIN_11 = 11
#define ENUM_SECURITY_TRADING_EVENT_SECURITY_TRADING_EVENT_MINIMUM_VALUE_11 = 11
#define ENUM_SECURITY_TRADING_EVENT_SECURITY_TRADING_EVENT_MINIMUM_VALUE_0 = 0

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_MARKET_IMBALANCE_BUY_7 = 7
#define ENUM_SECURITY_TRADING_STATUS_MARKET_IMBALANCE_SELL_8 = 8
#define ENUM_SECURITY_TRADING_STATUS_CLOSED_200 = 200
#define ENUM_SECURITY_TRADING_STATUS_RESTRICTED_201 = 201
#define ENUM_SECURITY_TRADING_STATUS_BOOK_202 = 202
#define ENUM_SECURITY_TRADING_STATUS_CONTINUOUS_203 = 203
#define ENUM_SECURITY_TRADING_STATUS_OPENING_AUCTION_204 = 204
#define ENUM_SECURITY_TRADING_STATUS_OPENING_AUCTION_FREEZE_205 = 205
#define ENUM_SECURITY_TRADING_STATUS_INTRADAY_AUCTION_206 = 206
#define ENUM_SECURITY_TRADING_STATUS_INTRADAY_AUCTION_FREEZE_207 = 207
#define ENUM_SECURITY_TRADING_STATUS_CIRCUIT_BREAKER_AUCTION_208 = 208
#define ENUM_SECURITY_TRADING_STATUS_CIRCUIT_BREAKER_AUCTION_FREEZE_209 = 209
#define ENUM_SECURITY_TRADING_STATUS_CLOSING_AUCTION_210 = 210
#define ENUM_SECURITY_TRADING_STATUS_CLOSING_AUCTION_FREEZE_211 = 211
#define ENUM_SECURITY_TRADING_STATUS_IPO_AUCTION_212 = 212
#define ENUM_SECURITY_TRADING_STATUS_IPO_AUCTION_FREEZE_213 = 213
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_MINIMUM_VALUE_213 = 213
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_MINIMUM_VALUE_7 = 7

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY_1 = 1
#define ENUM_SIDE_SELL_2 = 2
#define ENUM_SIDE_SIDE_MINIMUM_VALUE_2 = 2
#define ENUM_SIDE_SIDE_MINIMUM_VALUE_1 = 1

/*
 * Trad Ses Status Values
 */ 
#define ENUM_TRAD_SES_STATUS_HALTED_1 = 1
#define ENUM_TRAD_SES_STATUS_OPEN_2 = 2
#define ENUM_TRAD_SES_STATUS_CLOSED_3 = 3
#define ENUM_TRAD_SES_STATUS_TRAD_SES_STATUS_MINIMUM_VALUE_3 = 3
#define ENUM_TRAD_SES_STATUS_TRAD_SES_STATUS_MINIMUM_VALUE_1 = 1

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_IMPLIED_TRADE_1 = 1
#define ENUM_TRADE_CONDITION_TRADE_CONDITION_MINIMUM_VALUE_1 = 1
#define ENUM_TRADE_CONDITION_TRADE_CONDITION_MINIMUM_VALUE_1 = 1

/*
 * Trading Session Id Values
 */ 
#define ENUM_TRADING_SESSION_ID_DAY_1 = 1
#define ENUM_TRADING_SESSION_ID_MORNING_3 = 3
#define ENUM_TRADING_SESSION_ID_EVENING_5 = 5
#define ENUM_TRADING_SESSION_ID_AFTER_HOURS_6 = 6
#define ENUM_TRADING_SESSION_ID_HOLIDAY_7 = 7
#define ENUM_TRADING_SESSION_ID_TRADING_SESSION_ID_MINIMUM_VALUE_7 = 7
#define ENUM_TRADING_SESSION_ID_TRADING_SESSION_ID_MINIMUM_VALUE_1 = 1

/*
 * Trading Session Sub Id Values
 */ 
#define ENUM_TRADING_SESSION_SUB_ID_PRE_TRADING_1 = 1
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_3 = 3
#define ENUM_TRADING_SESSION_SUB_ID_CLOSING_4 = 4
#define ENUM_TRADING_SESSION_SUB_ID_POST_TRADING_5 = 5
#define ENUM_TRADING_SESSION_SUB_ID_QUIESCENT_7 = 7
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MINIMUM_VALUE_7 = 7
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MINIMUM_VALUE_1 = 1


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Add Complex Instrument
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t TransactTime;
    int32_t SecuritySubType;
    uint8_t ProductComplex;
    uint8_t ImpliedMarketIndicator;
    uint8_t NoLegs;
    char Pad1[1];
} AddComplexInstrumentT;

/*
 * Structure: Auction Bbo
 */ 
typedef struct {
    uint64_t TransactTime;
    int64_t SecurityId;
    uint64_t BidPx;
    uint64_t OfferPx;
    int32_t BidSize;
    int32_t OfferSize;
    uint8_t PotentialSecurityTradingEvent;
    char Pad7[7];
} AuctionBboT;

/*
 * Structure: Auction Clearing Price
 */ 
typedef struct {
    uint64_t TransactTime;
    int64_t SecurityId;
    uint64_t LastPx;
    int32_t LastQty;
    int32_t ImbalanceQty;
    uint8_t SecurityTradingStatus;
    uint8_t PotentialSecurityTradingEvent;
    char Pad6[6];
} AuctionClearingPriceT;

/*
 * Structure: Cross Request
 */ 
typedef struct {
    int64_t SecurityId;
    int32_t LastQty;
    char Pad4[4];
    uint64_t TransactTime;
} CrossRequestT;

/*
 * Structure: Execution Summary
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t AggressorTime;
    uint64_t RequestTime;
    uint64_t ExecId;
    int32_t LastQty;
    uint8_t AggressorSide;
    uint8_t TradeCondition;
    char Pad2[2];
    uint64_t LastPx;
    int32_t RestingHiddenQty;
    int32_t RestingCxlQty;
} ExecutionSummaryT;

/*
 * Structure: Full Order Execution
 */ 
typedef struct {
    uint8_t Side;
    uint8_t OrdType;
    char Pad6[6];
    uint64_t Price;
    uint64_t TrdRegTsTimePriority;
    int64_t SecurityId;
    uint32_t TrdMatchId;
    int32_t LastQty;
    uint64_t LastPx;
} FullOrderExecutionT;

/*
 * Structure: Heartbeat
 */ 
typedef struct {
    uint32_t LastMsgSeqNumProcessed;
    char Pad4[4];
} HeartbeatT;

/*
 * Structure: Instrmt Leg Grp
 */ 
typedef struct {
    int32_t LegSymbol;
    char Pad4[4];
    int64_t LegSecurityId;
    int32_t LegRatioQty;
    uint8_t LegSide;
    char Pad3[3];
} InstrmtLegGrpT;

/*
 * Structure: Instrument State Change
 */ 
typedef struct {
    int64_t SecurityId;
    uint8_t SecurityStatus;
    uint8_t SecurityTradingStatus;
    uint8_t FastMarketIndicator;
    uint8_t SecurityTradingEvent;
    char Pad4[4];
    uint64_t TransactTime;
} InstrumentStateChangeT;

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
    uint8_t FastMarketIndicator;
    uint8_t SecurityTradingEvent;
    uint8_t NoMdEntries;
    char Pad1[1];
} InstrumentSummaryT;

/*
 * Structure: Md Instrument Entry Grp
 */ 
typedef struct {
    uint64_t MdEntryPx;
    int32_t MdEntrySize;
    uint8_t MdEntryType;
    char Pad3[3];
} MdInstrumentEntryGrpT;

/*
 * Structure: Md Trade Entry Grp
 */ 
typedef struct {
    uint64_t MdEntryPx;
    int32_t MdEntrySize;
    uint8_t MdEntryType;
    char Pad3[3];
} MdTradeEntryGrpT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t BodyLen;
    uint16_t TemplateId;
    uint32_t MsgSeqNum;
} MessageHeaderT;

/*
 * Structure: Order Add
 */ 
typedef struct {
    uint64_t TrdRegTsTimeIn;
    int64_t SecurityId;
    OrderDetailsT OrderDetails;
} OrderAddT;

/*
 * Structure: Order Delete
 */ 
typedef struct {
    uint64_t TrdRegTsTimeIn;
    uint64_t TransactTime;
    int64_t SecurityId;
    char OrderDetails[0];
} OrderDeleteT;

/*
 * Structure: Order Details
 */ 
typedef struct {
    uint64_t TrdRegTsTimePriority;
    int32_t DisplayQty;
    uint8_t Side;
    uint8_t OrdType;
    char Pad2[2];
    uint64_t Price;
} OrderDetailsT;

/*
 * Structure: Order Mass Delete
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t TransactTime;
} OrderMassDeleteT;

/*
 * Structure: Order Modify
 */ 
typedef struct {
    uint64_t TrdRegTsTimeIn;
    uint64_t TrdRegTsPrevTimePriority;
    uint64_t PrevPrice;
    int32_t PrevDisplayQty;
    char Pad4[4];
    int64_t SecurityId;
    char OrderDetails[0];
} OrderModifyT;

/*
 * Structure: Order Modify Same Prio
 */ 
typedef struct {
    uint64_t TrdRegTsTimeIn;
    uint64_t TransactTime;
    int32_t PrevDisplayQty;
    char Pad4[4];
    int64_t SecurityId;
    char OrderDetails[0];
} OrderModifySamePrioT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    PacketInfoT PacketInfo;
    uint32_t ApplicationSequenceNumber;
    int32_t MarketSegmentId;
    uint8_t PartitionId;
    uint8_t CompletionIndicator;
    uint8_t ApplicationSequenceResetIndicator;
    char Pad5[5];
    uint64_t TransactTime;
} PacketHeaderT;

/*
 * Structure: Packet Info
 */ 
typedef struct {
    uint16_t HeaderLength;
    uint16_t PacketId;
    uint32_t PacketSeqNum;
} PacketInfoT;

/*
 * Structure: Partial Order Execution
 */ 
typedef struct {
    uint8_t Side;
    uint8_t OrdType;
    char Pad6[6];
    uint64_t Price;
    uint64_t TrdRegTsTimePriority;
    int64_t SecurityId;
    uint32_t TrdMatchId;
    int32_t LastQty;
    uint64_t LastPx;
} PartialOrderExecutionT;

/*
 * Structure: Product State Change
 */ 
typedef struct {
    uint8_t TradingSessionId;
    uint8_t TradingSessionSubId;
    uint8_t TradSesStatus;
    uint8_t FastMarketIndicator;
    char Pad4[4];
    uint64_t TransactTime;
} ProductStateChangeT;

/*
 * Structure: Product Summary
 */ 
typedef struct {
    uint32_t LastMsgSeqNumProcessed;
    uint8_t TradingSessionId;
    uint8_t TradingSessionSubId;
    uint8_t TradSesStatus;
    uint8_t FastMarketIndicator;
} ProductSummaryT;

/*
 * Structure: Quote Request
 */ 
typedef struct {
    int64_t SecurityId;
    int32_t LastQty;
    uint8_t Side;
    char Pad3[3];
    uint64_t TransactTime;
} QuoteRequestT;

/*
 * Structure: Snapshot Order
 */ 
typedef struct {
    char OrderDetails[0];
} SnapshotOrderT;

/*
 * Structure: Top Of Book
 */ 
typedef struct {
    uint64_t TransactTime;
    int64_t SecurityId;
    uint64_t BidPx;
    uint64_t OfferPx;
} TopOfBookT;

/*
 * Structure: Trade Report
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t TransactTime;
    uint32_t TrdMatchId;
    int32_t LastQty;
    uint64_t LastPx;
    uint8_t MatchType;
    uint8_t MatchSubType;
    char Pad6[6];
} TradeReportT;

/*
 * Structure: Trade Reversal
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t TransactTime;
    uint32_t TrdMatchId;
    int32_t LastQty;
    uint64_t LastPx;
    uint64_t TrdRegTsExecutionTime;
    uint8_t NoMdEntries;
    char Pad7[7];
} TradeReversalT;

