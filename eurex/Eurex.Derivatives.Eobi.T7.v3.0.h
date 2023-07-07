/*******************************************************************************
 * C Structs For Eurex Derivatives T7 Eobi 3.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_BUY 1
#define ENUM_AGGRESSOR_SIDE_SELL 2
#define ENUM_AGGRESSOR_SIDE_AGGRESSOR_SIDE_MAXIMUM_VALUE 2
#define ENUM_AGGRESSOR_SIDE_AGGRESSOR_SIDE_MINIMUM_VALUE 1

/*
 * Appl Seq Reset Indicator Values
 */ 
#define ENUM_APPL_SEQ_RESET_INDICATOR_NO_RESET 0
#define ENUM_APPL_SEQ_RESET_INDICATOR_RESET 1
#define ENUM_APPL_SEQ_RESET_INDICATOR_APPL_SEQ_RESET_INDICATOR_MAXIMUM_VALUE 1
#define ENUM_APPL_SEQ_RESET_INDICATOR_APPL_SEQ_RESET_INDICATOR_MINIMUM_VALUE 0

/*
 * Completion Indicator Values
 */ 
#define ENUM_COMPLETION_INDICATOR_INCOMPLETE 0
#define ENUM_COMPLETION_INDICATOR_COMPLETE 1
#define ENUM_COMPLETION_INDICATOR_COMPLETION_INDICATOR_MAXIMUM_VALUE 1
#define ENUM_COMPLETION_INDICATOR_COMPLETION_INDICATOR_MINIMUM_VALUE 0

/*
 * Fast Market Indicator Values
 */ 
#define ENUM_FAST_MARKET_INDICATOR_NO 0
#define ENUM_FAST_MARKET_INDICATOR_YES 1
#define ENUM_FAST_MARKET_INDICATOR_FAST_MARKET_INDICATOR_MAXIMUM_VALUE 1
#define ENUM_FAST_MARKET_INDICATOR_FAST_MARKET_INDICATOR_MINIMUM_VALUE 0

/*
 * Implied Market Indicator Values
 */ 
#define ENUM_IMPLIED_MARKET_INDICATOR_NOT_IMPLIED 0
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_IN_OUT 3
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_MARKET_INDICATOR_MAXIMUM_VALUE 3
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_MARKET_INDICATOR_MINIMUM_VALUE 0

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY 1
#define ENUM_LEG_SIDE_SELL 2
#define ENUM_LEG_SIDE_LEG_SIDE_MAXIMUM_VALUE 2
#define ENUM_LEG_SIDE_LEG_SIDE_MINIMUM_VALUE 1

/*
 * Match Sub Type Values
 */ 
#define ENUM_MATCH_SUB_TYPE_OPENING_AUCTION 1
#define ENUM_MATCH_SUB_TYPE_CLOSING_AUCTION 2
#define ENUM_MATCH_SUB_TYPE_INTRADAY_AUCTION 3
#define ENUM_MATCH_SUB_TYPE_CIRCUIT_BREAKER_AUCTION 4
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MAXIMUM_VALUE 4
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MINIMUM_VALUE 1

/*
 * Match Type Values
 */ 
#define ENUM_MATCH_TYPE_CONFIRMED_TRADE_REPORT 3
#define ENUM_MATCH_TYPE_CROSS_AUCTION 5
#define ENUM_MATCH_TYPE_CALL_AUCTION 7
#define ENUM_MATCH_TYPE_MATCH_TYPE_MAXIMUM_VALUE 7
#define ENUM_MATCH_TYPE_MATCH_TYPE_MINIMUM_VALUE 3

/*
 * Md Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_TRADE 2
#define ENUM_MD_ENTRY_TYPE_OPENING_PRICE 4
#define ENUM_MD_ENTRY_TYPE_CLOSING_PRICE 5
#define ENUM_MD_ENTRY_TYPE_HIGH_PRICE 7
#define ENUM_MD_ENTRY_TYPE_LOW_PRICE 8
#define ENUM_MD_ENTRY_TYPE_TRADE_VOLUME 66
#define ENUM_MD_ENTRY_TYPE_PREVIOUS_CLOSING_PRICE 101
#define ENUM_MD_ENTRY_TYPE_OPENING_AUCTION 200
#define ENUM_MD_ENTRY_TYPE_INTRADAY_AUCTION 201
#define ENUM_MD_ENTRY_TYPE_CIRCUIT_BREAKER_AUCTION 202
#define ENUM_MD_ENTRY_TYPE_CLOSING_AUCTION 203
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_MAXIMUM_VALUE 203
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_MINIMUM_VALUE 2

/*
 * Product Complex Values
 */ 
#define ENUM_PRODUCT_COMPLEX_FUTURES_SPREAD 5
#define ENUM_PRODUCT_COMPLEX_INTER_PRODUCT_SPREAD 6
#define ENUM_PRODUCT_COMPLEX_STANDARD_FUTURES_STRATEGY 7
#define ENUM_PRODUCT_COMPLEX_PACK_AND_BUNDLE 8
#define ENUM_PRODUCT_COMPLEX_STRIP 9
#define ENUM_PRODUCT_COMPLEX_PRODUCT_COMPLEX_MAXIMUM_VALUE 9
#define ENUM_PRODUCT_COMPLEX_PRODUCT_COMPLEX_MINIMUM_VALUE 5

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_ACTIVE 1
#define ENUM_SECURITY_STATUS_INACTIVE 2
#define ENUM_SECURITY_STATUS_EXPIRED 4
#define ENUM_SECURITY_STATUS_SUSPENDED 9
#define ENUM_SECURITY_STATUS_SECURITY_STATUS_MAXIMUM_VALUE 9
#define ENUM_SECURITY_STATUS_SECURITY_STATUS_MINIMUM_VALUE 1

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_CLOSED 200
#define ENUM_SECURITY_TRADING_STATUS_RESTRICTED 201
#define ENUM_SECURITY_TRADING_STATUS_BOOK 202
#define ENUM_SECURITY_TRADING_STATUS_CONTINUOUS 203
#define ENUM_SECURITY_TRADING_STATUS_OPENING_AUCTION 204
#define ENUM_SECURITY_TRADING_STATUS_OPENING_AUCTION_FREEZE 205
#define ENUM_SECURITY_TRADING_STATUS_INTRADAY_AUCTION 206
#define ENUM_SECURITY_TRADING_STATUS_INTRADAY_AUCTION_FREEZE 207
#define ENUM_SECURITY_TRADING_STATUS_CIRCUIT_BREAKER_AUCTION 208
#define ENUM_SECURITY_TRADING_STATUS_CIRCUIT_BREAKER_AUCTION_FREEZE 209
#define ENUM_SECURITY_TRADING_STATUS_CLOSING_AUCTION 210
#define ENUM_SECURITY_TRADING_STATUS_CLOSING_AUCTION_FREEZE 211
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_MAXIMUM_VALUE 211
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_MINIMUM_VALUE 200

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 1
#define ENUM_SIDE_SELL 2
#define ENUM_SIDE_SIDE_MAXIMUM_VALUE 2
#define ENUM_SIDE_SIDE_MINIMUM_VALUE 1

/*
 * Trad Ses Status Values
 */ 
#define ENUM_TRAD_SES_STATUS_HALTED 1
#define ENUM_TRAD_SES_STATUS_OPEN 2
#define ENUM_TRAD_SES_STATUS_CLOSED 3
#define ENUM_TRAD_SES_STATUS_TRAD_SES_STATUS_MAXIMUM_VALUE 3
#define ENUM_TRAD_SES_STATUS_TRAD_SES_STATUS_MINIMUM_VALUE 1

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_IMPLIED_TRADE 1
#define ENUM_TRADE_CONDITION_TRADE_CONDITION_MAXIMUM_VALUE 1
#define ENUM_TRADE_CONDITION_TRADE_CONDITION_MINIMUM_VALUE 1

/*
 * Trading Session Id Values
 */ 
#define ENUM_TRADING_SESSION_ID_DAY 1
#define ENUM_TRADING_SESSION_ID_MORNING 3
#define ENUM_TRADING_SESSION_ID_EVENING 5
#define ENUM_TRADING_SESSION_ID_HOLIDAY 7
#define ENUM_TRADING_SESSION_ID_TRADING_SESSION_ID_MAXIMUM_VALUE 7
#define ENUM_TRADING_SESSION_ID_TRADING_SESSION_ID_MINIMUM_VALUE 1

/*
 * Trading Session Sub Id Values
 */ 
#define ENUM_TRADING_SESSION_SUB_ID_PRE_TRADING 1
#define ENUM_TRADING_SESSION_SUB_ID_TRADING 3
#define ENUM_TRADING_SESSION_SUB_ID_CLOSING 4
#define ENUM_TRADING_SESSION_SUB_ID_POST_TRADING 5
#define ENUM_TRADING_SESSION_SUB_ID_QUIESCENT 7
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MAXIMUM_VALUE 7
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MINIMUM_VALUE 1


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Md Trade Entry Grp Comp
 */ 
typedef struct {
    uint64_t MdEntryPx;
    int32_t MdEntrySize;
    uint8_t MdEntryType;
    char Pad3[3];
} MdTradeEntryGrpCompT;

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
 * Structure: Top Of Book
 */ 
typedef struct {
    uint64_t TransactTime;
    int64_t SecurityId;
    uint64_t BidPx;
    uint64_t OfferPx;
} TopOfBookT;

/*
 * Structure: Order Details Comp
 */ 
typedef struct {
    uint64_t TrdRegTsTimePriority;
    int32_t DisplayQty;
    uint8_t Side;
    char Pad3[3];
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
    int32_t LastQty;
    uint8_t Side;
    char Pad3[3];
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
    uint8_t FastMarketIndicator;
} ProductSummaryT;

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
 * Structure: Partial Order Execution
 */ 
typedef struct {
    uint8_t Side;
    char Pad7[7];
    uint64_t Price;
    uint64_t TrdRegTsTimePriority;
    int64_t SecurityId;
    uint32_t TrdMatchId;
    int32_t LastQty;
    uint64_t LastPx;
} PartialOrderExecutionT;

/*
 * Structure: Order Modify Same Prio
 */ 
typedef struct {
    uint64_t TrdRegTsTimeIn;
    uint64_t TransactTime;
    int32_t PrevDisplayQty;
    char Pad4[4];
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
    int32_t PrevDisplayQty;
    char Pad4[4];
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
 * Structure: Md Instrument Entry Grp Comp
 */ 
typedef struct {
    uint64_t MdEntryPx;
    int32_t MdEntrySize;
    uint8_t MdEntryType;
    char Pad3[3];
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
    uint8_t FastMarketIndicator;
    uint8_t NoMdEntries;
    char Pad2[2];
} InstrumentSummaryT;

/*
 * Structure: Instrument State Change
 */ 
typedef struct {
    int64_t SecurityId;
    uint8_t SecurityStatus;
    uint8_t SecurityTradingStatus;
    uint8_t FastMarketIndicator;
    char Pad5[5];
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
    char Pad7[7];
    uint64_t Price;
    uint64_t TrdRegTsTimePriority;
    int64_t SecurityId;
    uint32_t TrdMatchId;
    int32_t LastQty;
    uint64_t LastPx;
} FullOrderExecutionT;

/*
 * Structure: Execution Summary
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t AggressorTimestamp;
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
 * Structure: Cross Request
 */ 
typedef struct {
    int64_t SecurityId;
    int32_t LastQty;
    char Pad4[4];
    uint64_t TransactTime;
} CrossRequestT;

/*
 * Structure: Auction Clearing Price
 */ 
typedef struct {
    uint64_t TransactTime;
    int64_t SecurityId;
    uint64_t LastPx;
} AuctionClearingPriceT;

/*
 * Structure: Auction Bbo
 */ 
typedef struct {
    uint64_t TransactTime;
    int64_t SecurityId;
    uint64_t BidPx;
    uint64_t OfferPx;
} AuctionBboT;

/*
 * Structure: Instrmt Leg Grp Comp
 */ 
typedef struct {
    int32_t LegSymbol;
    char Pad4[4];
    int64_t LegSecurityId;
    int32_t LegRatioQty;
    uint8_t LegSide;
    char Pad3[3];
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
    uint8_t NoLegs;
    char Pad1[1];
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
   Version: 3.0
   Date: Monday, August 3, 2015
   Specification: eurex_enhanced_order_book_interfaces_V30.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
