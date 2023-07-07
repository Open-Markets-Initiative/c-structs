/*******************************************************************************
 * C Structs For Miax Pearl Options Mach TopOfMarket 1.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Active On Pearl Values
 */ 
#define ENUM_ACTIVE_ON_PEARL_ACTIVE_TRADABLE 'A'
#define ENUM_ACTIVE_ON_PEARL_INACTIVE_NOT_TRADABLE 'I'

/*
 * Bid Condition Values
 */ 
#define ENUM_BID_CONDITION_REGULAR 'A'
#define ENUM_BID_CONDITION_QUOTE_CONTAINS_PUBLIC_CUSTOMER_INTEREST 'B'
#define ENUM_BID_CONDITION_QUOTE_IS_NOT_FIRM 'C'
#define ENUM_BID_CONDITION_RESERVED_FOR_FUTURE_USE 'R'
#define ENUM_BID_CONDITION_TRADING_HALT 'T'

/*
 * Call Or Put Values
 */ 
#define ENUM_CALL_OR_PUT_CALL 'C'
#define ENUM_CALL_OR_PUT_PUT 'P'

/*
 * Event Reason Values
 */ 
#define ENUM_EVENT_REASON_RESULTED_FROM_AUTOMATICMARKET_DRIVEN_EVENT 'A'
#define ENUM_EVENT_REASON_MANUALLY_INITIATED 'M'

/*
 * Liquidity Acceptance Increment Indicator Values
 */ 
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY_001 'P'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY_001 'N'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_NICKEL_005 'D'

/*
 * Long Term Option Values
 */ 
#define ENUM_LONG_TERM_OPTION_FAR_MONTH '“Y'
#define ENUM_LONG_TERM_OPTION_NEAR_MONTH 'N'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_PEARL_SYSTEM_TIME_MESSAGE '1'
#define ENUM_MESSAGE_TYPE_SERIES_UPDATE_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_COMPACT_TOP_OF_MARKET_BID_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_COMPACT_TOP_OF_MARKET_BEST_OFFER_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_WIDE_TOP_OF_MARKET_BEST_BID_MESSAGE 'W'
#define ENUM_MESSAGE_TYPE_WIDE_TOP_OF_MARKET_BEST_OFFER_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_COMPACT_DOUBLE_SIDED_TOP_OF_MARKET_MESSAGE 'd'
#define ENUM_MESSAGE_TYPE_WIDE_DOUBLE_SIDED_TOP_OF_MARKET_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_LAST_SALE_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_MESSAGE 'X'
#define ENUM_MESSAGE_TYPE_UNDERLYING_TRADING_STATUS_NOTIFICATION 'H'

/*
 * Offer Condition Values
 */ 
#define ENUM_OFFER_CONDITION_REGULAR 'A'
#define ENUM_OFFER_CONDITION_QUOTE_CONTAINS_PUBLIC_CUSTOMER_INTEREST 'B'
#define ENUM_OFFER_CONDITION_QUOTE_IS_NOT_FIRM 'C'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE 'R'
#define ENUM_OFFER_CONDITION_TRADING_HALT 'T'
#define ENUM_OFFER_CONDITION_CANCEL_OF_TRADE 'A'
#define ENUM_OFFER_CONDITION_TRADE_THAT_IS_LATE_AND_IS_OUT_OF_SEQUENCE 'B'
#define ENUM_OFFER_CONDITION_CANCEL_OF_THE_LAST_REPORTED_TRADE 'C'
#define ENUM_OFFER_CONDITION_TRADE_THAT_IS_LATE_AND_IS_IN_CORRECT_SEQUENCE 'D'
#define ENUM_OFFER_CONDITION_CANCEL_OF_THE_FIRST_OPENING_REPORTED_TRADE 'E'
#define ENUM_OFFER_CONDITION_TRADE_THAT_IS_LATE_REPORT_OF_THE_OPENING_TRADE_AND_IS_OUT_OF_SEQUENCE 'F'
#define ENUM_OFFER_CONDITION_CANCEL_OF_THE_ONLY_REPORTED_TRADE 'G'
#define ENUM_OFFER_CONDITION_TRADE_THAT_IS_LATE_REPORT_OF_THE_OPENING_TRADE_AND_IS_IN_CORRECT_SEQUENCE 'H'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE 'I'
#define ENUM_OFFER_CONDITION_TRADE_DUE_TO_REOPENING_OF_AN_OPTION_IN_WHICH_TRADING_HAS_BEEN_PREVIOUSLY_HALTED 'J'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE 'K'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE 'L'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE 'M'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE 'N'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE 'O'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE 'P'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE 'Q'
#define ENUM_OFFER_CONDITION_TRADE_WAS_THE_EXECUTION_OF_AN_ORDER_WHICH_WAS_STOPPED_AT_A_PRICE_THAT_DID_NOT_CONSTITUTE_A_TRADE_THROUGH_ON_ANOTHER_MARKET_AT_THE_TIME_OF_THE_STOP 'R'
#define ENUM_OFFER_CONDITION_TRADE_WAS_THE_EXECUTION_OF_AN_ORDER_IDENTIFIED 'S'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE 'T'
#define ENUM_OFFER_CONDITION_TRADE_THAT_IS_TRADE_THROUGH_EXEMPT 'X'

/*
 * Opening Underlying Market Code Values
 */ 
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_AMEX 'A'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_BX 'B'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NATIONAL_STOCK 'C'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_FINRA_ADF 'D'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_MARKET_INDEPENDENT 'E'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_INTERNATIONAL_SECURITIES 'I'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_EDGA_EXCHANGE 'J'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_EDGX_EXCHANGE 'K'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_CHICAGO_STOCK 'M'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_EURONEXT 'N'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_ARCA 'P'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX 'Q'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX 'T'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_IEX 'V'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_PHLX 'X'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_BATS_Y_EXCHANGE 'Y'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_BATS_EXCHANGE 'Z'

/*
 * Packet Type Values
 */ 
#define ENUM_PACKET_TYPE_HEARTBEAT 0
#define ENUM_PACKET_TYPE_START_OF_SESSION 1
#define ENUM_PACKET_TYPE_END_OF_SESSION 2
#define ENUM_PACKET_TYPE_APPLICATION_MESSAGE 3

/*
 * Pbbo Condition Values
 */ 
#define ENUM_PBBO_CONDITION_REGULAR 'A'
#define ENUM_PBBO_CONDITION_QUOTE_CONTAINS_PUBLIC_CUSTOMER_INTEREST 'B'
#define ENUM_PBBO_CONDITION_QUOTE_IS_NOT_FIRM 'C'
#define ENUM_PBBO_CONDITION_RESERVED_FOR_FUTURE_USE 'R'
#define ENUM_PBBO_CONDITION_TRADING_HALT 'T'

/*
 * Pearl Bbo Posting Increment Indicator Values
 */ 
#define ENUM_PEARL_BBO_POSTING_INCREMENT_INDICATOR_PENNY_001 'P'
#define ENUM_PEARL_BBO_POSTING_INCREMENT_INDICATOR_PENNY_001 'N'
#define ENUM_PEARL_BBO_POSTING_INCREMENT_INDICATOR_NICKEL_005 'D'

/*
 * Restricted Option Values
 */ 
#define ENUM_RESTRICTED_OPTION_POSITION_CLOSING_ORDERS_ONLY 'Y'
#define ENUM_RESTRICTED_OPTION_OPEN_AND_CLOSE_POSITIONS 'N'

/*
 * System Status Values
 */ 
#define ENUM_SYSTEM_STATUS_START 'S'
#define ENUM_SYSTEM_STATUS_END 'C'
#define ENUM_SYSTEM_STATUS_START '1'
#define ENUM_SYSTEM_STATUS_END '2'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Underlying Trading Status Notification
 */ 
typedef struct {
    uint32_t Timestamp;
    char UnderlyingSymbol[11];
    char TradingStatus[1];
    char EventReason;
    uint32_t ExpectedEventTimeSecondsPart;
    uint32_t ExpectedEventTimeNanoSecondsPart;
} UnderlyingTradingStatusNotificationT;

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
    char TradeCondition[1];
} TradeCancelMessageT;

/*
 * Structure: Last Sale Message
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
    char TradeCondition[1];
} LastSaleMessageT;

/*
 * Structure: Wide Double Sided Top Of Market Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t WideBidPrice;
    uint32_t WideBidSize;
    uint32_t WideBidPriorityCustomerSize;
    char BidCondition;
    uint32_t WideOfferPrice;
    uint32_t WideOfferSize;
    uint32_t WideOfferPriorityCustomerSize;
    char OfferCondition;
} WideDoubleSidedTopOfMarketMessageT;

/*
 * Structure: Compact Double Sided Top Of Market Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint16_t BidPrice;
    uint16_t BidSize;
    uint16_t BidPriorityCustomerSize;
    char BidCondition;
    uint16_t OfferPrice;
    uint16_t OfferSize;
    uint16_t OfferPriorityCustomerSize;
    char OfferCondition;
} CompactDoubleSidedTopOfMarketMessageT;

/*
 * Structure: Wide Top Of Market Best Offer Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t WidePbboPrice;
    uint32_t WidePbboSize;
    uint32_t WidePbboPriorityCustomerSize;
    char PbboCondition;
} WideTopOfMarketBestOfferMessageT;

/*
 * Structure: Wide Top Of Market Best Bid Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t WidePbboPrice;
    uint32_t WidePbboSize;
    uint32_t WidePbboPriorityCustomerSize;
    char PbboCondition;
} WideTopOfMarketBestBidMessageT;

/*
 * Structure: Compact Top Of Market Best Offer Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint16_t PbboPrice;
    uint16_t PbboSize;
    uint16_t PbboPriorityCustomerSize;
    char PbboCondition;
} CompactTopOfMarketBestOfferMessageT;

/*
 * Structure: Compact Top Of Market Bid Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint16_t PbboPrice;
    uint16_t PbboSize;
    uint16_t PbboPriorityCustomerSize;
    char PbboCondition;
} CompactTopOfMarketBidMessageT;

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
 * Structure: Series Update Message
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
    char ActiveOnPearl;
    char PearlBboPostingIncrementIndicator;
    char LiquidityAcceptanceIncrementIndicator;
    char OpeningUnderlyingMarketCode;
    char Reserved[12];
} SeriesUpdateMessageT;

/*
 * Structure: Pearl System Time Message
 */ 
typedef struct {
    uint32_t Timestamp;
} PearlSystemTimeMessageT;

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
   Version: 1.0
   Date: Monday, February 27, 2017
   Specification: PEARL_Top_Of_Market_Feed_ToM_v1.0b.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
