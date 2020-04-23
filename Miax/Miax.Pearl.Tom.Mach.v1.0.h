/*******************************************************************************
 * C Structs For Miax Pearl Mach Tom 1.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Active On Pearl Values
 */ 
#define ENUM_ACTIVE_ON_PEARL_ACTIVE_TRADABLE_A = 'A'
#define ENUM_ACTIVE_ON_PEARL_INACTIVE_NOT_TRADABLE_I = 'I'

/*
 * Bid Condition Values
 */ 
#define ENUM_BID_CONDITION_REGULAR_A = 'A'
#define ENUM_BID_CONDITION_QUOTE_CONTAINS_PUBLIC_CUSTOMER_INTEREST_B = 'B'
#define ENUM_BID_CONDITION_QUOTE_IS_NOT_FIRM_C = 'C'
#define ENUM_BID_CONDITION_RESERVED_FOR_FUTURE_USE_R = 'R'
#define ENUM_BID_CONDITION_TRADING_HALT_T = 'T'

/*
 * Call Or Put Values
 */ 
#define ENUM_CALL_OR_PUT_CALL_C = 'C'
#define ENUM_CALL_OR_PUT_PUT_P = 'P'

/*
 * Event Reason Values
 */ 
#define ENUM_EVENT_REASON_RESULTED_FROM_AUTOMATICMARKET_DRIVEN_EVENT_A = 'A'
#define ENUM_EVENT_REASON_MANUALLY_INITIATED_M = 'M'

/*
 * Liquidity Acceptance Increment Indicator Values
 */ 
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY_001P = 'P'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY_001N = 'N'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_NICKEL_005D = 'D'

/*
 * Long Term Option Values
 */ 
#define ENUM_LONG_TERM_OPTION_FAR_MONTH_“Y = '“Y'
#define ENUM_LONG_TERM_OPTION_NEAR_MONTH_N = 'N'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_PEARL_SYSTEM_TIME_MESSAGE_1 = '1'
#define ENUM_MESSAGE_TYPE_SERIES_UPDATE_MESSAGE_P = 'P'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_COMPACT_TOP_OF_MARKET_BID_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_COMPACT_TOP_OF_MARKET_BEST_OFFER_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_WIDE_TOP_OF_MARKET_BEST_BID_MESSAGE_W = 'W'
#define ENUM_MESSAGE_TYPE_WIDE_TOP_OF_MARKET_BEST_OFFER_MESSAGE_A = 'A'
#define ENUM_MESSAGE_TYPE_COMPACT_DOUBLE_SIDED_TOP_OF_MARKET_MESSAGE_D = 'd'
#define ENUM_MESSAGE_TYPE_WIDE_DOUBLE_SIDED_TOP_OF_MARKET_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_LAST_SALE_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_MESSAGE_X = 'X'
#define ENUM_MESSAGE_TYPE_UNDERLYING_TRADING_STATUS_NOTIFICATION_H = 'H'

/*
 * Offer Condition Values
 */ 
#define ENUM_OFFER_CONDITION_REGULAR_A = 'A'
#define ENUM_OFFER_CONDITION_QUOTE_CONTAINS_PUBLIC_CUSTOMER_INTEREST_B = 'B'
#define ENUM_OFFER_CONDITION_QUOTE_IS_NOT_FIRM_C = 'C'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE_R = 'R'
#define ENUM_OFFER_CONDITION_TRADING_HALT_T = 'T'
#define ENUM_OFFER_CONDITION_CANCEL_OF_TRADE_A = 'A'
#define ENUM_OFFER_CONDITION_TRADE_THAT_IS_LATE_AND_IS_OUT_OF_SEQUENCE_B = 'B'
#define ENUM_OFFER_CONDITION_CANCEL_OF_THE_LAST_REPORTED_TRADE_C = 'C'
#define ENUM_OFFER_CONDITION_TRADE_THAT_IS_LATE_AND_IS_IN_CORRECT_SEQUENCE_D = 'D'
#define ENUM_OFFER_CONDITION_CANCEL_OF_THE_FIRST_OPENING_REPORTED_TRADE_E = 'E'
#define ENUM_OFFER_CONDITION_TRADE_THAT_IS_LATE_REPORT_OF_THE_OPENING_TRADE_AND_IS_OUT_OF_SEQUENCE_F = 'F'
#define ENUM_OFFER_CONDITION_CANCEL_OF_THE_ONLY_REPORTED_TRADE_G = 'G'
#define ENUM_OFFER_CONDITION_TRADE_THAT_IS_LATE_REPORT_OF_THE_OPENING_TRADE_AND_IS_IN_CORRECT_SEQUENCE_H = 'H'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE_I = 'I'
#define ENUM_OFFER_CONDITION_TRADE_DUE_TO_REOPENING_OF_AN_OPTION_IN_WHICH_TRADING_HAS_BEEN_PREVIOUSLY_HALTED_J = 'J'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE_K = 'K'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE_L = 'L'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE_M = 'M'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE_N = 'N'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE_O = 'O'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE_P = 'P'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE_Q = 'Q'
#define ENUM_OFFER_CONDITION_TRADE_WAS_THE_EXECUTION_OF_AN_ORDER_WHICH_WAS_STOPPED_AT_A_PRICE_THAT_DID_NOT_CONSTITUTE_A_TRADE_THROUGH_ON_ANOTHER_MARKET_AT_THE_TIME_OF_THE_STOP_R = 'R'
#define ENUM_OFFER_CONDITION_TRADE_WAS_THE_EXECUTION_OF_AN_ORDER_IDENTIFIED_S = 'S'
#define ENUM_OFFER_CONDITION_RESERVED_FOR_FUTURE_USE_T = 'T'
#define ENUM_OFFER_CONDITION_TRADE_THAT_IS_TRADE_THROUGH_EXEMPT_X = 'X'

/*
 * Opening Underlying Market Code Values
 */ 
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_AMEX_A = 'A'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_BX_B = 'B'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NATIONAL_STOCK_C = 'C'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_FINRA_ADF_D = 'D'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_MARKET_INDEPENDENT_E = 'E'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_INTERNATIONAL_SECURITIES_I = 'I'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_EDGA_EXCHANGE_J = 'J'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_EDGX_EXCHANGE_K = 'K'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_CHICAGO_STOCK_M = 'M'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_EURONEXT_N = 'N'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NYSE_ARCA_P = 'P'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_Q = 'Q'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_T = 'T'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_IEX_V = 'V'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_NASDAQ_OMX_PHLX_X = 'X'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_BATS_Y_EXCHANGE_Y = 'Y'
#define ENUM_OPENING_UNDERLYING_MARKET_CODE_BATS_EXCHANGE_Z = 'Z'

/*
 * Packet Type Values
 */ 
#define ENUM_PACKET_TYPE_HEARTBEAT_0 = 0
#define ENUM_PACKET_TYPE_START_OF_SESSION_1 = 1
#define ENUM_PACKET_TYPE_END_OF_SESSION_2 = 2
#define ENUM_PACKET_TYPE_APPLICATION_MESSAGE_3 = 3

/*
 * Pbbo Condition Values
 */ 
#define ENUM_PBBO_CONDITION_REGULAR_A = 'A'
#define ENUM_PBBO_CONDITION_QUOTE_CONTAINS_PUBLIC_CUSTOMER_INTEREST_B = 'B'
#define ENUM_PBBO_CONDITION_QUOTE_IS_NOT_FIRM_C = 'C'
#define ENUM_PBBO_CONDITION_RESERVED_FOR_FUTURE_USE_R = 'R'
#define ENUM_PBBO_CONDITION_TRADING_HALT_T = 'T'

/*
 * Pearl Bbo Posting Increment Indicator Values
 */ 
#define ENUM_PEARL_BBO_POSTING_INCREMENT_INDICATOR_PENNY_001P = 'P'
#define ENUM_PEARL_BBO_POSTING_INCREMENT_INDICATOR_PENNY_001N = 'N'
#define ENUM_PEARL_BBO_POSTING_INCREMENT_INDICATOR_NICKEL_005D = 'D'

/*
 * Restricted Option Values
 */ 
#define ENUM_RESTRICTED_OPTION_POSITION_CLOSING_ORDERS_ONLY_Y = 'Y'
#define ENUM_RESTRICTED_OPTION_OPEN_AND_CLOSE_POSITIONS_N = 'N'

/*
 * System Status Values
 */ 
#define ENUM_SYSTEM_STATUS_START_S = 'S'
#define ENUM_SYSTEM_STATUS_END_C = 'C'
#define ENUM_SYSTEM_STATUS_START_1 = '1'
#define ENUM_SYSTEM_STATUS_END_2 = '2'


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
 * Structure: Pearl System Time Message
 */ 
typedef struct {
    uint32_t TimeStamp;
} PearlSystemTimeMessageT;

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
 * Structure: System State Message
 */ 
typedef struct {
    uint32_t NotificationTime;
    char ToMVersion[8];
    uint32_t SessionId;
    char SystemStatus;
} SystemStateMessageT;

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

