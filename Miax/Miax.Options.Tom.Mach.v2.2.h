/*******************************************************************************
 * C Structs For Miax Options Mach Tom 2.2 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Active On Miax Values
 */ 
#define ENUM_ACTIVE_ON_MIAX_ACTIVE_A = 'A'
#define ENUM_ACTIVE_ON_MIAX_INACTIVE_I = 'I'

/*
 * Bid Condition Values
 */ 
#define ENUM_BID_CONDITION_REGULAR_A = 'A'
#define ENUM_BID_CONDITION_PUBLIC_CUSTOMER_INTEREST_B = 'B'
#define ENUM_BID_CONDITION_NOT_FIRM_C = 'C'
#define ENUM_BID_CONDITION_RESERVED_R = 'R'
#define ENUM_BID_CONDITION_TRADING_HALT_T = 'T'

/*
 * Call Or Put Values
 */ 
#define ENUM_CALL_OR_PUT_CALL_C = 'C'
#define ENUM_CALL_OR_PUT_PUT_P = 'P'

/*
 * Event Reason Values
 */ 
#define ENUM_EVENT_REASON_AUTOMATIC_A = 'A'
#define ENUM_EVENT_REASON_MANUAL_M = 'M'

/*
 * Liquidity Acceptance Increment Indicator Values
 */ 
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY_P = 'P'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY_OR_NICKEL_N = 'N'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_NICKEL_OR_DIME_D = 'D'

/*
 * Long Term Option Values
 */ 
#define ENUM_LONG_TERM_OPTION_FAR_MONTH_EXPIRATION_Y = 'Y'
#define ENUM_LONG_TERM_OPTION_NEAR_MONTH_EXPIRATION_N = 'N'

/*
 * Mbbo Condition Values
 */ 
#define ENUM_MBBO_CONDITION_REGULAR_A = 'A'
#define ENUM_MBBO_CONDITION_PUBLIC_CUSTOMER_INTEREST_B = 'B'
#define ENUM_MBBO_CONDITION_NOT_FIRM_C = 'C'
#define ENUM_MBBO_CONDITION_RESERVED_R = 'R'
#define ENUM_MBBO_CONDITION_TRADING_HALT_T = 'T'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_TIME_MESSAGE_1 = '1'
#define ENUM_MESSAGE_TYPE_SIMPLE_SERIES_UPDATE_MESSAGE_P = 'P'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_SIMPLE_TOP_OF_MARKET_BID_COMPACT_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_SIMPLE_TOP_OF_MARKET_OFFER_COMPACT_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_SIMPLE_TOP_OF_MARKET_BID_WIDE_MESSAGE_W = 'W'
#define ENUM_MESSAGE_TYPE_SIMPLE_TOP_OF_MARKET_OFFER_WIDE_MESSAGE_A = 'A'
#define ENUM_MESSAGE_TYPE_SIMPLE_DOUBLE_SIDED_TOP_OF_MARKET_COMPACT_MESSAGE_D = 'd'
#define ENUM_MESSAGE_TYPE_SIMPLE_DOUBLE_SIDED_TOP_OF_MARKET_WIDE_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_LAST_SALE_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_MESSAGE_X = 'X'
#define ENUM_MESSAGE_TYPE_UNDERLYING_TRADING_STATUS_NOTIFICATION_MESSAGE_H = 'H'

/*
 * Miax Bbo Posting Increment Indicator Values
 */ 
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_PENNY_P = 'P'
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_PENNY_OR_NICKEL_N = 'N'
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_NICKEL_OR_DIME_D = 'D'

/*
 * Offer Condition Values
 */ 
#define ENUM_OFFER_CONDITION_REGULAR_A = 'A'
#define ENUM_OFFER_CONDITION_PUBLIC_CUSTOMER_INTEREST_B = 'B'
#define ENUM_OFFER_CONDITION_NOT_FIRM_C = 'C'
#define ENUM_OFFER_CONDITION_RESERVED_R = 'R'
#define ENUM_OFFER_CONDITION_TRADING_HALT_T = 'T'

/*
 * Opening Underlying Market Code Values
 */ 
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_AMEX_A = 'A'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_BX_B = 'B'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NSE_C = 'C'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_FINRA_ADF_D = 'D'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_MARKET_INDEPENDENT_E = 'E'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_ISE_I = 'I'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_EDGA_J = 'J'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_EDGX_K = 'K'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_CSE_M = 'M'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_EURONEXT_N = 'N'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_ARCA_P = 'P'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_UTP_Q = 'Q'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_CTA_T = 'T'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_IEX_V = 'V'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_PHLX_X = 'X'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_BATS_YY = 'Y'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_BATS_Z = 'Z'

/*
 * Packet Type Values
 */ 
#define ENUM_PACKET_TYPE_HEARTBEAT_0 = 0
#define ENUM_PACKET_TYPE_START_OF_SESSION_1 = 1
#define ENUM_PACKET_TYPE_END_OF_SESSION_2 = 2
#define ENUM_PACKET_TYPE_APPLICATION_MESSAGE_3 = 3

/*
 * Restricted Option Values
 */ 
#define ENUM_RESTRICTED_OPTION_ACCEPT_POSITION_CLOSING_Y = 'Y'
#define ENUM_RESTRICTED_OPTION_ACCEPT_OPEN_AND_CLOSE_N = 'N'

/*
 * System Status Values
 */ 
#define ENUM_SYSTEM_STATUS_START_OF_SYSTEM_HOURS_S = 'S'
#define ENUM_SYSTEM_STATUS_END_OF_SYSTEM_HOURS_C = 'C'
#define ENUM_SYSTEM_STATUS_START_TEST_SESSION_1 = '1'
#define ENUM_SYSTEM_STATUS_END_OF_TEST_SESSION_2 = '2'

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_REGULAR = ' '
#define ENUM_TRADE_CONDITION_CANCEL_OF_TRADE_PREVIOUSLY_REPORTED_OTHER_THAN_AS_THE_LAST_OR_OPENING_A = 'A'
#define ENUM_TRADE_CONDITION_LATE_AND_IS_OUT_OF_SEQUENCE_B = 'B'
#define ENUM_TRADE_CONDITION_CANCEL_OF_THE_LAST_REPORTED_TRADE_C = 'C'
#define ENUM_TRADE_CONDITION_LATE_AND_IS_IN_CORRECT_SEQUENCE_D = 'D'
#define ENUM_TRADE_CONDITION_CANCEL_OF_THE_FIRST_REPORTED_TRADE_E = 'E'
#define ENUM_TRADE_CONDITION_LATE_REPORT_OF_THE_OPENING_TRADE_AND_IS_OUT_OF_SEQUENCE_F = 'F'
#define ENUM_TRADE_CONDITION_CANCEL_OF_THE_ONLY_REPORTED_TRADE_G = 'G'
#define ENUM_TRADE_CONDITION_LATE_REPORT_OF_THE_OPENING_TRADE_AND_IS_IN_CORRECT_SEQUENCE_H = 'H'
#define ENUM_TRADE_CONDITION_RESERVED_I = 'I'
#define ENUM_TRADE_CONDITION_REOPENING_OF_AN_OPTION_J = 'J'
#define ENUM_TRADE_CONDITION_RESERVED_K = 'K'
#define ENUM_TRADE_CONDITION_A_BUY_AND_A_SELL_IN_THE_SAME_CLASS_L = 'L'
#define ENUM_TRADE_CONDITION_A_BUY_AND_A_SELL_IN_A_PUT_AND_A_CALL_M = 'M'
#define ENUM_TRADE_CONDITION_RESERVED_N = 'N'
#define ENUM_TRADE_CONDITION_RESERVED_O = 'O'
#define ENUM_TRADE_CONDITION_BUY_OR_SELL_OF_A_CALL_OR_PUT_P = 'P'
#define ENUM_TRADE_CONDITION_BUY_OF_A_CALL_AND_A_SELL_OF_A_PUT_FOR_THE_SAME_UNDERLYING_STOCK_OR_INDEX_Q = 'Q'
#define ENUM_TRADE_CONDITION_EXECUTION_OF_AN_ORDER_WHICH_WAS_STOPPED_AT_A_PRICE_THAT_DID_NOT_CONSTITUTE_A_TRADE_THROUGH_ON_ANOTHER_MARKET_AT_THE_TIME_OF_THE_STOP_R = 'R'
#define ENUM_TRADE_CONDITION_EXECUTION_OF_AN_ISO_ORDER_S = 'S'
#define ENUM_TRADE_CONDITION_RESERVED_T = 'T'
#define ENUM_TRADE_CONDITION_TRADE_THROUGH_EXEMPT_X = 'X'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_HALTED_H = 'H'
#define ENUM_TRADING_STATUS_RESUMED_R = 'R'
#define ENUM_TRADING_STATUS_OPENED_O = 'O'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Application Message
 */ 
typedef struct {
    char MessageType;
} ApplicationMessageT;

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
 * Structure: System State Message
 */ 
typedef struct {
    uint32_t NotificationTime;
    char ToMVersion[8];
    uint32_t SessionId;
    char SystemStatus;
} SystemStateMessageT;

/*
 * Structure: System Time Message
 */ 
typedef struct {
    uint32_t Timestamp;
} SystemTimeMessageT;

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

