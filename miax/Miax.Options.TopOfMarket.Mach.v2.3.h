/*******************************************************************************
 * C Structs For Miax Options Mach TopOfMarket 2.3 Binary Model
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
#define ENUM_BID_CONDITION_PUBLIC_CUSTOMER_INTEREST 'B'
#define ENUM_BID_CONDITION_NOT_FIRM 'C'
#define ENUM_BID_CONDITION_RESERVED 'R'
#define ENUM_BID_CONDITION_TRADING_HALT 'T'

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
 * Liquidity Acceptance Increment Indicator Values
 */ 
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY 'P'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY_OR_NICKEL 'N'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_NICKEL_OR_DIME 'D'

/*
 * Long Term Option Values
 */ 
#define ENUM_LONG_TERM_OPTION_FAR_MONTH_EXPIRATION 'Y'
#define ENUM_LONG_TERM_OPTION_NEAR_MONTH_EXPIRATION 'N'

/*
 * Mbbo Condition Values
 */ 
#define ENUM_MBBO_CONDITION_REGULAR 'A'
#define ENUM_MBBO_CONDITION_PUBLIC_CUSTOMER_INTEREST 'B'
#define ENUM_MBBO_CONDITION_NOT_FIRM 'C'
#define ENUM_MBBO_CONDITION_RESERVED 'R'
#define ENUM_MBBO_CONDITION_TRADING_HALT 'T'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_TIME_MESSAGE '1'
#define ENUM_MESSAGE_TYPE_SIMPLE_SERIES_UPDATE_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_SIMPLE_TOP_OF_MARKET_BID_COMPACT_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_SIMPLE_TOP_OF_MARKET_OFFER_COMPACT_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_SIMPLE_TOP_OF_MARKET_BID_WIDE_MESSAGE 'W'
#define ENUM_MESSAGE_TYPE_SIMPLE_TOP_OF_MARKET_OFFER_WIDE_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_SIMPLE_DOUBLE_SIDED_TOP_OF_MARKET_COMPACT_MESSAGE 'd'
#define ENUM_MESSAGE_TYPE_SIMPLE_DOUBLE_SIDED_TOP_OF_MARKET_WIDE_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_LAST_SALE_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_MESSAGE 'X'
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
#define ENUM_OFFER_CONDITION_PUBLIC_CUSTOMER_INTEREST 'B'
#define ENUM_OFFER_CONDITION_NOT_FIRM 'C'
#define ENUM_OFFER_CONDITION_RESERVED 'R'
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
 * Restricted Option Values
 */ 
#define ENUM_RESTRICTED_OPTION_ACCEPT_POSITION_CLOSING 'Y'
#define ENUM_RESTRICTED_OPTION_ACCEPT_OPEN_AND_CLOSE 'N'

/*
 * System Status Values
 */ 
#define ENUM_SYSTEM_STATUS_START_OF_SYSTEM_HOURS 'S'
#define ENUM_SYSTEM_STATUS_END_OF_SYSTEM_HOURS 'C'
#define ENUM_SYSTEM_STATUS_START_TEST_SESSION '1'
#define ENUM_SYSTEM_STATUS_END_OF_TEST_SESSION '2'

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_REGULAR ' '
#define ENUM_TRADE_CONDITION_CANCEL_OF_TRADE_PREVIOUSLY_REPORTED_OTHER_THAN_AS_THE_LAST_OR_OPENING 'A'
#define ENUM_TRADE_CONDITION_LATE_AND_IS_OUT_OF_SEQUENCE 'B'
#define ENUM_TRADE_CONDITION_CANCEL_OF_THE_LAST_REPORTED_TRADE 'C'
#define ENUM_TRADE_CONDITION_LATE_AND_IS_IN_CORRECT_SEQUENCE 'D'
#define ENUM_TRADE_CONDITION_CANCEL_OF_THE_FIRST_REPORTED_TRADE 'E'
#define ENUM_TRADE_CONDITION_LATE_REPORT_OF_THE_OPENING_TRADE_AND_IS_OUT_OF_SEQUENCE 'F'
#define ENUM_TRADE_CONDITION_CANCEL_OF_THE_ONLY_REPORTED_TRADE 'G'
#define ENUM_TRADE_CONDITION_LATE_REPORT_OF_THE_OPENING_TRADE_AND_IS_IN_CORRECT_SEQUENCE 'H'
#define ENUM_TRADE_CONDITION_RESERVED 'I'
#define ENUM_TRADE_CONDITION_REOPENING_OF_AN_OPTION 'J'
#define ENUM_TRADE_CONDITION_RESERVED 'K'
#define ENUM_TRADE_CONDITION_A_BUY_AND_A_SELL_IN_THE_SAME_CLASS 'L'
#define ENUM_TRADE_CONDITION_A_BUY_AND_A_SELL_IN_A_PUT_AND_A_CALL 'M'
#define ENUM_TRADE_CONDITION_RESERVED 'N'
#define ENUM_TRADE_CONDITION_RESERVED 'O'
#define ENUM_TRADE_CONDITION_BUY_OR_SELL_OF_A_CALL_OR_PUT 'P'
#define ENUM_TRADE_CONDITION_BUY_OF_A_CALL_AND_A_SELL_OF_A_PUT_FOR_THE_SAME_UNDERLYING_STOCK_OR_INDEX 'Q'
#define ENUM_TRADE_CONDITION_EXECUTION_OF_AN_ORDER_WHICH_WAS_STOPPED_AT_A_PRICE_THAT_DID_NOT_CONSTITUTE_A_TRADE_THROUGH_ON_ANOTHER_MARKET_AT_THE_TIME_OF_THE_STOP 'R'
#define ENUM_TRADE_CONDITION_EXECUTION_OF_AN_ISO_ORDER 'S'
#define ENUM_TRADE_CONDITION_RESERVED 'T'
#define ENUM_TRADE_CONDITION_TRADE_THROUGH_EXEMPT 'X'
#define ENUM_TRADE_CONDITION_PAIRED_PRIME 'a'
#define ENUM_TRADE_CONDITION_RESERVED 'b'
#define ENUM_TRADE_CONDITION_PRIME_CUSTOMER_TO_CUSTOMER_CROSS_OR_PRIME_QCC 'c'
#define ENUM_TRADE_CONDITION_RESERVED 'd'
#define ENUM_TRADE_CONDITION_RESERVED 'e'
#define ENUM_TRADE_CONDITION_COMPLEX_TRANSACTION_THAT_IS_NOT_COMPLEX_STOCKTIED_AND_DOES_NOT_INVOLVE_LEGGING 'f'
#define ENUM_TRADE_CONDITION_COMPLEX_PRIME_TRANSACTION_THAT_IS_NOT_COMPLEX_STOCKTIED_AND_DOES_NOT_INVOLVE_LEGGING 'g'
#define ENUM_TRADE_CONDITION_COMPLEX_PRIME_CUSTOMER_TO_CUSTOMER_CROSS_OR_COMPLEX_PRIME_QCC_TRANSACTION_THAT_IS_NOT_COMPLEX_STOCKTIED 'h'
#define ENUM_TRADE_CONDITION_RESERVED 'i'
#define ENUM_TRADE_CONDITION_COMPLEX_LEGGING_TRANSACTION_THAT_IS_NOT_COMPLEX_STOCKTIED 'j'
#define ENUM_TRADE_CONDITION_COMPLEX_PRIME_STOCKTIED_TRANSACTION_THAT_DOES_NOT_INVOLVE_LEGGING 'k'
#define ENUM_TRADE_CONDITION_COMPLEX_PRIME_LEGGING_TRANSACTION_THAT_IS_NOT_COMPLEX_STOCKTIED 'l'
#define ENUM_TRADE_CONDITION_RESERVED 'm'
#define ENUM_TRADE_CONDITION_COMPLEX_STOCKTIED_TRANSACTION_THAT_DOES_NOT_INVOLVE_LEGGING 'n'
#define ENUM_TRADE_CONDITION_COMPLEX_CUSTOMER_TO_CUSTOMER_CROSS_STOCKTIED_OR_COMPLEX_QCC_STOCKTIED_TRANSACTION 'o'
#define ENUM_TRADE_CONDITION_RESERVED 'p'
#define ENUM_TRADE_CONDITION_RESERVED 'q'
#define ENUM_TRADE_CONDITION_RESERVED 'r'
#define ENUM_TRADE_CONDITION_RESERVED 's'
#define ENUM_TRADE_CONDITION_RESERVED 't'

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
    char TradeCondition;
} LastSaleMessageT;

/*
 * Structure: Simple Double Sided Top Of Market Wide Message
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
} SimpleDoubleSidedTopOfMarketWideMessageT;

/*
 * Structure: Simple Double Sided Top Of Market Compact Message
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
} SimpleDoubleSidedTopOfMarketCompactMessageT;

/*
 * Structure: Simple Top Of Market Offer Wide Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t MbboPrice4;
    uint32_t MbboSize4;
    uint32_t MbboPriorityCustomerSize4;
    char MbboCondition;
} SimpleTopOfMarketOfferWideMessageT;

/*
 * Structure: Simple Top Of Market Bid Wide Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t MbboPrice4;
    uint32_t MbboSize4;
    uint32_t MbboPriorityCustomerSize4;
    char MbboCondition;
} SimpleTopOfMarketBidWideMessageT;

/*
 * Structure: Simple Top Of Market Offer Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint16_t MbboPrice2;
    uint16_t MbboSize2;
    uint16_t MbboPriorityCustomerSize2;
    char MbboCondition;
} SimpleTopOfMarketOfferCompactMessageT;

/*
 * Structure: Simple Top Of Market Bid Compact Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint16_t MbboPrice2;
    uint16_t MbboSize2;
    uint16_t MbboPriorityCustomerSize2;
    char MbboCondition;
} SimpleTopOfMarketBidCompactMessageT;

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
    uint64_t Reserved;
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
   Version: 2.3
   Date: Monday, June 10, 2019
   Specification: Top_Of_Market_Feed_ToM_v2.3.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
