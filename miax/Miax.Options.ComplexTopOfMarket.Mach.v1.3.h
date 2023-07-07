/*******************************************************************************
 * C Structs For Miax Options Mach ComplexTopOfMarket 1.3 Binary Model
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
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY_OR_NICKEL 'N'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_NICKEL_OR_DIME 'D'

/*
 * Long Term Option Values
 */ 
#define ENUM_LONG_TERM_OPTION_YES 'Y'
#define ENUM_LONG_TERM_OPTION_NO 'N'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_TIME_MESSAGE '1'
#define ENUM_MESSAGE_TYPE_SIMPLE_SERIES_UPDATE_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_DEFINITION_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_BID_COMPACT_MESSAGE 'b'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_OFFER_COMPACT_MESSAGE 'o'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_BID_WIDE_MESSAGE 'e'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_OFFER_WIDE_MESSAGE 'f'
#define ENUM_MESSAGE_TYPE_COMPLEX_DOUBLE_SIDED_TOP_OF_MARKET_COMPACT_MESSAGE 'm'
#define ENUM_MESSAGE_TYPE_COMPLEX_DOUBLE_SIDED_TOP_OF_MARKET_WIDE_MESSAGE 'w'
#define ENUM_MESSAGE_TYPE_STRATEGY_LAST_SALE_MESSAGE 't'
#define ENUM_MESSAGE_TYPE_UNDERLYING_TRADING_STATUS_NOTIFICATION_MESSAGE 'H'

/*
 * Miax Bbo Posting Increment Indicator Values
 */ 
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_PENNY 'P'
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_PENNY_OR_NICKEL 'N'
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_NICKEL_OR_DIME 'D'

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
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_REGULAR 'A'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_TRADING_HALT 'T'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_WIDE 'W'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_SIMPLE_AUCTION 'S'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_COMPLEX_AUCTION 'C'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_SIMPLE_MARKET_PROTECTION 'M'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_LEG_MARKET_PROTECTION 'L'

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
 * Structure: Underlying Trading Status Notification Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char UnderlyingSymbol[11];
    char TradingStatus;
    char EventReason;
    uint32_t ExpectedEventTimeSeconds;
    uint32_t ExpectedEventTimeNanoSeconds;
} UnderlyingTradingStatusNotificationMessageT;

/*
 * Structure: Strategy Last Sale Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    uint32_t TradeId;
    int64_t NetPrice;
    uint32_t TradeSize;
    char TradeCondition;
    char Reserved16[16];
} StrategyLastSaleMessageT;

/*
 * Structure: Complex Double Sided Top Of Market Wide Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int64_t BidPrice8;
    uint32_t BidSize4;
    uint32_t BidPriorityCustomerSize4;
    char BidCondition;
    int64_t OfferPrice8;
    uint32_t OfferSize4;
    uint32_t OfferPriorityCustomerSize4;
    char OfferCondition;
} ComplexDoubleSidedTopOfMarketWideMessageT;

/*
 * Structure: Complex Double Sided Top Of Market Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int16_t BidPrice2;
    uint16_t BidSize2;
    uint16_t BidPriorityCustomerSize2;
    char BidCondition;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
    uint16_t OfferPriorityCustomerSize2;
    char OfferCondition;
} ComplexDoubleSidedTopOfMarketCompactMessageT;

/*
 * Structure: Complex Top Of Market Offer Wide Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int64_t Price8;
    uint32_t Size4;
    uint32_t PriorityCustomerSize4;
    char TopOfMarketQuoteCondition;
} ComplexTopOfMarketOfferWideMessageT;

/*
 * Structure: Complex Top Of Market Bid Wide Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int64_t Price8;
    uint32_t Size4;
    uint32_t PriorityCustomerSize4;
    char TopOfMarketQuoteCondition;
} ComplexTopOfMarketBidWideMessageT;

/*
 * Structure: Complex Top Of Market Offer Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int16_t Price2;
    uint16_t Size2;
    uint16_t PriorityCustomerSize2;
    char TopOfMarketQuoteCondition;
} ComplexTopOfMarketOfferCompactMessageT;

/*
 * Structure: Complex Top Of Market Bid Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t StrategyId;
    int16_t Price2;
    uint16_t Size2;
    uint16_t PriorityCustomerSize2;
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
    uint64_t Reserved8;
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
 * Structure: Simple Series Update Message
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
    uint64_t Reserved8;
} SimpleSeriesUpdateMessageT;

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
   Version: 1.3
   Date: Friday, March 16, 2018
   Specification: Complex_Top_Of_Market_Feed_cToM_v1_3.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
