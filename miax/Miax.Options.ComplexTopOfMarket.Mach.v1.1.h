/*******************************************************************************
 * C Structs For Miax Options Mach ComplexTopOfMarket 1.1 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Active On Miax Values
 */ 
#define ENUM_ACTIVE_ON_MIAX_ACTIVE 'A'
#define ENUM_ACTIVE_ON_MIAX_INACTIVE 'I'

/*
 * Bid Condition Values
 */ 
#define ENUM_BID_CONDITION_REGULAR 'A'
#define ENUM_BID_CONDITION_TRADING_HALT 'T'
#define ENUM_BID_CONDITION_WIDE 'W'
#define ENUM_BID_CONDITION_SIMPLE_AUCTION 'S'
#define ENUM_BID_CONDITION_COMPLEX_AUCTION 'C'
#define ENUM_BID_CONDITION_SIMPLE_MARKET_PROTECTION 'M'
#define ENUM_BID_CONDITION_LEG_MARKET_PROTECTION 'L'

/*
 * Call Or Put Values
 */ 
#define ENUM_CALL_OR_PUT_CALL 'C'
#define ENUM_CALL_OR_PUT_PUT 'P'

/*
 * Event Reason Values
 */ 
#define ENUM_EVENT_REASON_AUTOMATIC 'A'
#define ENUM_EVENT_REASON_MANUAL 'M'

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BID 'B'
#define ENUM_LEG_SIDE_ASK 'A'

/*
 * Liquidity Acceptance Increment Indicator Values
 */ 
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY 'P'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_NICKEL 'N'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_DIME 'D'

/*
 * Long Term Option Values
 */ 
#define ENUM_LONG_TERM_OPTION_YES 'Y'
#define ENUM_LONG_TERM_OPTION_NO 'N'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_TIME_MESSAGE '1'
#define ENUM_MESSAGE_TYPE_SERIES_UPDATE 'P'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_DEFINITION_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_BID_COMPACT_MESSAGE 'b'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_OFFER_COMPACT_MESSAGE 'o'
#define ENUM_MESSAGE_TYPE_WIDE_COMPLEX_TOP_OF_MARKET_BID_MESSAGE 'e'
#define ENUM_MESSAGE_TYPE_WIDE_COMPLEX_TOP_OF_MARKET_OFFER_MESSAGE 'f'
#define ENUM_MESSAGE_TYPE_COMPLEX_DOUBLE_SIDED_TOP_OF_MARKET_COMPACT_MESSAGE 'm'
#define ENUM_MESSAGE_TYPE_WIDE_COMPLEX_DOUBLE_SIDED_TOP_OF_MARKET_MESSAGE 'w'
#define ENUM_MESSAGE_TYPE_STRATEGY_TRADE_MESSAGE 't'
#define ENUM_MESSAGE_TYPE_UNDERLYING_TRADING_STATUS_MESSAGE 'H'

/*
 * Miax Bbo Posting Increment Indicator Values
 */ 
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_PENNY 'P'
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_NICKEL 'N'
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_DIME 'D'

/*
 * Offer Condition Values
 */ 
#define ENUM_OFFER_CONDITION_REGULAR 'A'
#define ENUM_OFFER_CONDITION_TRADING_HALT 'T'
#define ENUM_OFFER_CONDITION_WIDE 'W'
#define ENUM_OFFER_CONDITION_SIMPLE_AUCTION 'S'
#define ENUM_OFFER_CONDITION_COMPLEX_AUCTION 'C'
#define ENUM_OFFER_CONDITION_SIMPLE_MARKET_PROTECTION 'M'
#define ENUM_OFFER_CONDITION_LEG_MARKET_PROTECTION 'L'

/*
 * Opening Underlying Market Code Values
 */ 
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_AMEX 'A'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_BX 'B'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NSE 'C'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_FINRA_ADF 'D'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_MARKET_INDEPENDENT 'E'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_ISE 'I'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_EDGA 'J'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_EDGX 'K'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_CSE 'M'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_EURONEXT 'N'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_ARCA 'P'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_UTP 'Q'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_CTA 'T'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_IEX 'V'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_PHLX 'X'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_BATS_Y 'Y'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_BATS 'Z'

/*
 * Packet Type Values
 */ 
#define ENUM_PACKET_TYPE_HEARTBEAT 0
#define ENUM_PACKET_TYPE_START_OF_SESSION 1
#define ENUM_PACKET_TYPE_END_OF_SESSION 2
#define ENUM_PACKET_TYPE_APPLICATION_MESSAGE 3

/*
 * Restricted Option Values
 */ 
#define ENUM_RESTRICTED_OPTION_YES 'Y'
#define ENUM_RESTRICTED_OPTION_NO 'N'

/*
 * System Status Values
 */ 
#define ENUM_SYSTEM_STATUS_START_OF_SYSTEM_HOURS 'S'
#define ENUM_SYSTEM_STATUS_END_OF_SYSTEM_HOURS 'C'
#define ENUM_SYSTEM_STATUS_START_TEST_SESSION '1'
#define ENUM_SYSTEM_STATUS_END_OF_TEST_SESSION '2'

/*
 * Top Of Market Quote Condition Values
 */ 
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_HALTED 'H'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_RESUMED 'R'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_OPENED 'O'

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_MATCHED 'S'
#define ENUM_TRADE_CONDITION_LEGGED 'L'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_HALTED 'H'
#define ENUM_TRADING_STATUS_RESUMED 'R'
#define ENUM_TRADING_STATUS_OPENED 'O'

/*
 * Update Reason Values
 */ 
#define ENUM_UPDATE_REASON_NEW_STRATEGY_CREATED 'N'
#define ENUM_UPDATE_REASON_UPDATED 'U'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Underlying Trading Status Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char UnderlyingSymbol[11];
    char TradingStatus;
    char EventReason;
    uint32_t SecondsPart;
    uint32_t ExpectedEventTimeNanoSecondsPart;
} UnderlyingTradingStatusMessageT;

/*
 * Structure: Strategy Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    uint32_t TradeId;
    int64_t NetPrice;
    uint32_t TradeSize;
    char TradeCondition;
    char Reserved16[16];
} StrategyTradeMessageT;

/*
 * Structure: Wide Complex Double Sided Top Of Market Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int64_t WideBidPrice;
    uint32_t WideBidSize;
    char BidReserved4[4];
    char BidCondition;
    int64_t WideOfferPrice;
    uint32_t WideOfferSize;
    char OfferReserved4[4];
    char OfferCondition;
} WideComplexDoubleSidedTopOfMarketMessageT;

/*
 * Structure: Complex Double Sided Top Of Market Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int16_t CompactBidPrice;
    uint16_t CompactBidSize;
    char BidReserved2[2];
    char BidCondition;
    int16_t CompactOfferPrice;
    uint16_t CompactOfferSize;
    char OfferReserved2[2];
    char OfferCondition;
} ComplexDoubleSidedTopOfMarketCompactMessageT;

/*
 * Structure: Wide Complex Top Of Market Offer Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int64_t WidePrice;
    uint32_t WideSize;
    char Reserved4[4];
    char TopOfMarketQuoteCondition;
} WideComplexTopOfMarketOfferMessageT;

/*
 * Structure: Wide Complex Top Of Market Bid Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int64_t WidePrice;
    uint32_t WideSize;
    char Reserved4[4];
    char TopOfMarketQuoteCondition;
} WideComplexTopOfMarketBidMessageT;

/*
 * Structure: Complex Top Of Market Offer Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int16_t CompactPrice;
    uint16_t CompactSize;
    char Reserved2[2];
    char TopOfMarketQuoteCondition;
} ComplexTopOfMarketOfferCompactMessageT;

/*
 * Structure: Complex Top Of Market Bid Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int16_t CompactPrice;
    uint16_t CompactSize;
    char Reserved2[2];
    char TopOfMarketQuoteCondition;
} ComplexTopOfMarketBidCompactMessageT;

/*
 * Structure: System State Message
 */ 
typedef struct {
    uint32_t NotificationTime;
    char Version[8];
    uint32_t SessionId;
    char SystemStatus;
} SystemStateMessageT;

/*
 * Structure: Leg Definition
 */ 
typedef struct {
    uint32_t ProductId;
    uint16_t LegRatioQty;
    char LegSide;
    char Reserved8[8];
} LegDefinitionT;

/*
 * Structure: Complex Strategy Definition Message
 */ 
typedef struct {
    uint32_t StrategyAddTime;
    uint32_t StrategyId;
    char UnderlyingSymbol[11];
    char ActiveOnMiax;
    char Reserved1[1];
    char UpdateReason;
    char Reserved10[10];
    uint8_t NumberOfLegs;
} ComplexStrategyDefinitionMessageT;

/*
 * Structure: Series Update
 */ 
typedef struct {
    uint32_t ProductAddUpdateTime;
    uint32_t ProductId;
    char UnderlyingSymbol[11];
    char SecuritySymbol[6];
    char ExpirationDate[8];
    uint32_t StrikePrice;
    char CallOrPut;
    char OpeningTime[8];
    char ClosingTime[8];
    char RestrictedOption;
    char LongTermOption;
    char ActiveOnMiax;
    char MiaxBboPostingIncrementIndicator;
    char LiquidityAcceptanceIncrementIndicator;
    char OpeningUnderlyingMarketCode;
    uint32_t PriorityQuoteWidth;
    char Reserved8[8];
} SeriesUpdateT;

/*
 * Structure: System Time Message
 */ 
typedef struct {
    uint32_t Timestamp;
} SystemTimeMessageT;

/*
 * Structure: Application Message
 */ 
typedef struct {
    char MessageType;
} ApplicationMessageT;

/*
 * Structure: Message
 */ 
typedef struct {
    uint64_t SequenceNumber;
    uint16_t PacketLength;
    uint8_t PacketType;
    uint8_t SessionNumber;
} MessageT;

/*
 * Structure: Packet
 */ 
typedef struct {
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Miami International Securities Exchange
   Version: 1.1
   Date: Friday, July 15, 2016
   Specification: Complex_Top_Of_Market_Feed_cToM_v1_1.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
