/*******************************************************************************
 * C Structs For Miax Options Mach TopOfMarket 1.9 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Bid Condition Values
 */ 
#define ENUM_BID_CONDITION_REGULAR 'A'
#define ENUM_BID_CONDITION_PUBLIC_CUSTOMER_INTEREST 'B'
#define ENUM_BID_CONDITION_NOT_FIRM 'C'
#define ENUM_BID_CONDITION_TRADING_HALT 'T'

/*
 * Event Reason Values
 */ 
#define ENUM_EVENT_REASON_AUTOMATIC 'A'
#define ENUM_EVENT_REASON_MANUAL 'M'

/*
 * Liquidity Acceptance Increment Indicator Values
 */ 
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY 'P'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_NICKEL 'N'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_DIME 'D'

/*
 * Mbbo Condition Values
 */ 
#define ENUM_MBBO_CONDITION_REGULAR 'A'
#define ENUM_MBBO_CONDITION_PUBLIC_CUSTOMER_INTEREST 'B'
#define ENUM_MBBO_CONDITION_NOT_FIRM 'C'
#define ENUM_MBBO_CONDITION_TRADING_HALT 'T'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_TIME_MESSAGE '1'
#define ENUM_MESSAGE_TYPE_SERIES_UPDATE 'P'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_TOP_OF_MARKET_BID_COMPACT_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_TOP_OF_MARKET_OFFER_COMPACT_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_WIDE_TOP_OF_MARKET_BID_MESSAGE 'W'
#define ENUM_MESSAGE_TYPE_WIDE_TOP_OF_MARKET_OFFER_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_DOUBLE_SIDED_TOP_OF_MARKET_COMPACT_MESSAGE 'd'
#define ENUM_MESSAGE_TYPE_WIDE_DOUBLE_SIDED_TOP_OF_MARKET_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_TRADE_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_MESSAGE 'X'
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
#define ENUM_OFFER_CONDITION_PUBLIC_CUSTOMER_INTEREST 'B'
#define ENUM_OFFER_CONDITION_NOT_FIRM 'C'
#define ENUM_OFFER_CONDITION_TRADING_HALT 'T'

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
 * System Status Values
 */ 
#define ENUM_SYSTEM_STATUS_START_OF_SYSTEM_HOURS 'S'
#define ENUM_SYSTEM_STATUS_END_OF_SYSTEM_HOURS 'C'
#define ENUM_SYSTEM_STATUS_START_TEST_SESSION '1'
#define ENUM_SYSTEM_STATUS_END_OF_TEST_SESSION '2'
#define ENUM_SYSTEM_STATUS_TOP_BID 'B'
#define ENUM_SYSTEM_STATUS_TOP_OFFER 'O'

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_CANCEL_OF_TRADE 'A'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_HALTED 'H'
#define ENUM_TRADING_STATUS_RESUMED 'R'
#define ENUM_TRADING_STATUS_OPENED 'O'


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
 * Structure: Trade Cancel Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t TradeId;
    uint8_t CorrectionNumber;
    uint32_t TradePrice;
    uint32_t TradeSize;
    char TradeCondition;
} TradeCancelMessageT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t TradeId;
    uint8_t CorrectionNumber;
    uint32_t ReferenceTradeId;
    uint8_t ReferenceCorrectionNumber;
    uint32_t TradePrice;
    uint32_t TradeSize;
    char TradeCondition;
} TradeMessageT;

/*
 * Structure: Wide Double Sided Top Of Market Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t BidPrice4;
    uint32_t BidSize4;
    uint32_t BidPriorityCustomerSize4;
    char BidCondition;
    uint32_t OfferPrice4;
    uint32_t OfferSize4;
    uint32_t OfferPriorityCustomerSize4;
    char OfferCondition;
} WideDoubleSidedTopOfMarketMessageT;

/*
 * Structure: Double Sided Top Of Market Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint16_t BidPrice2;
    uint16_t BidSize2;
    uint16_t BidPriorityCustomerSize2;
    char BidCondition;
    uint16_t OfferPrice2;
    uint16_t OfferSize2;
    uint16_t OfferPriorityCustomerSize2;
    char OfferCondition;
} DoubleSidedTopOfMarketCompactMessageT;

/*
 * Structure: Wide Top Of Market Offer Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t MbboPrice4;
    uint32_t MbboSize4;
    uint32_t MbboPriorityCustomerSize4;
    char MbboCondition;
} WideTopOfMarketOfferMessageT;

/*
 * Structure: Wide Top Of Market Bid Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t MbboPrice4;
    uint32_t MbboSize4;
    uint32_t MbboPriorityCustomerSize4;
    char MbboCondition;
} WideTopOfMarketBidMessageT;

/*
 * Structure: Top Of Market Offer Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint16_t MbboPrice2;
    uint16_t MbboSize2;
    uint16_t MbboPriorityCustomerSize2;
    char MbboCondition;
} TopOfMarketOfferCompactMessageT;

/*
 * Structure: Top Of Market Bid Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint16_t MbboPrice2;
    uint16_t MbboSize2;
    uint16_t MbboPriorityCustomerSize2;
    char MbboCondition;
} TopOfMarketBidCompactMessageT;

/*
 * Structure: System State Message
 */ 
typedef struct {
    uint32_t NotificationTime;
    char ToMVersion[8];
    uint32_t SessionId;
    char SystemStatus;
} SystemStateMessageT;

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
    char CallOrPut[1];
    char OpeningTime[8];
    char ClosingTime[8];
    char RestrictedOption[1];
    char LongTermOption[1];
    char ActiveOnMiax[1];
    char MiaxBboPostingIncrementIndicator;
    char LiquidityAcceptanceIncrementIndicator;
    char OpeningUnderlyingMarketCode;
    uint32_t PriorityQuoteWidth;
    uint64_t Reserved;
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
   Version: 1.9
   Date: Friday, January 15, 2016
   Specification: Top_Of_Market_Feed_ToM_v1_9.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
