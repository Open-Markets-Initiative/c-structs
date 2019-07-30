/*******************************************************************************
 * C Structs For Miax Options Mach cTom 1.3 protocol
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
#define ENUM_BID_CONDITION_TRADING_HALT_T = 'T'
#define ENUM_BID_CONDITION_WIDE_W = 'W'
#define ENUM_BID_CONDITION_SIMPLE_AUCTION_S = 'S'
#define ENUM_BID_CONDITION_COMPLEX_AUCTION_C = 'C'
#define ENUM_BID_CONDITION_SIMPLE_MARKET_PROTECTION_M = 'M'
#define ENUM_BID_CONDITION_LEG_MARKET_PROTECTION_L = 'L'

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
#define ENUM_LONG_TERM_OPTION_YES_Y = 'Y'
#define ENUM_LONG_TERM_OPTION_NO_N = 'N'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_TIME_MESSAGE_1 = '1'
#define ENUM_MESSAGE_TYPE_SIMPLE_SERIES_UPDATE_MESSAGE_P = 'P'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_DEFINITION_MESSAGE_C = 'C'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_BID_COMPACT_MESSAGE_B = 'b'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_OFFER_COMPACT_MESSAGE_O = 'o'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_BID_WIDE_MESSAGE_E = 'e'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_OFFER_WIDE_MESSAGE_F = 'f'
#define ENUM_MESSAGE_TYPE_COMPLEX_DOUBLE_SIDED_TOP_OF_MARKET_COMPACT_MESSAGE_M = 'm'
#define ENUM_MESSAGE_TYPE_COMPLEX_DOUBLE_SIDED_TOP_OF_MARKET_WIDE_MESSAGE_W = 'w'
#define ENUM_MESSAGE_TYPE_STRATEGY_LAST_SALE_MESSAGE_T = 't'
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
#define ENUM_OFFER_CONDITION_TRADING_HALT_T = 'T'
#define ENUM_OFFER_CONDITION_WIDE_W = 'W'
#define ENUM_OFFER_CONDITION_SIMPLE_AUCTION_S = 'S'
#define ENUM_OFFER_CONDITION_COMPLEX_AUCTION_C = 'C'
#define ENUM_OFFER_CONDITION_SIMPLE_MARKET_PROTECTION_M = 'M'
#define ENUM_OFFER_CONDITION_LEG_MARKET_PROTECTION_L = 'L'

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
#define ENUM_RESTRICTED_OPTION_YES_Y = 'Y'
#define ENUM_RESTRICTED_OPTION_NO_N = 'N'

/*
 * System Status Values
 */ 
#define ENUM_SYSTEM_STATUS_START_OF_SYSTEM_HOURS_S = 'S'
#define ENUM_SYSTEM_STATUS_END_OF_SYSTEM_HOURS_C = 'C'
#define ENUM_SYSTEM_STATUS_START_TEST_SESSION_1 = '1'
#define ENUM_SYSTEM_STATUS_END_OF_TEST_SESSION_2 = '2'

/*
 * Top Of Market Quote Condition Values
 */ 
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_REGULAR_A = 'A'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_TRADING_HALT_T = 'T'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_WIDE_W = 'W'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_SIMPLE_AUCTION_S = 'S'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_COMPLEX_AUCTION_C = 'C'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_SIMPLE_MARKET_PROTECTION_M = 'M'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_LEG_MARKET_PROTECTION_L = 'L'

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_MATCHED_S = 'S'
#define ENUM_TRADE_CONDITION_LEGGED_L = 'L'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_HALTED_H = 'H'
#define ENUM_TRADING_STATUS_RESUMED_R = 'R'
#define ENUM_TRADING_STATUS_OPENED_O = 'O'

/*
 * Update Reason Values
 */ 
#define ENUM_UPDATE_REASON_NEW_STRATEGY_CREATED_N = 'N'
#define ENUM_UPDATE_REASON_UPDATED_U = 'U'


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
    LegDefinitionT LegDefinition;
} ComplexStrategyDefinitionMessageT;

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
 * Structure: Leg Definition
 */ 
typedef struct {
    uint32_t ProductId;
    uint16_t LegRatioQty;
    char LegSide[1];
    uint64_t Reserved8;
} LegDefinitionT;

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
 * Structure: System State Message
 */ 
typedef struct {
    uint32_t NotificationTime;
    char Version[8];
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

