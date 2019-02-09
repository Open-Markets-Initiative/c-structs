/*******************************************************************************
 * C Structs For Miax Options Mach cTom 1.1 protocol
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
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BID_B = "B"
#define ENUM_LEG_SIDE_ASK_A = "A"

/*
 * Liquidity Acceptance Increment Indicator Values
 */ 
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY_P = 'P'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_NICKEL_N = 'N'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_DIME_D = 'D'

/*
 * Long Term Option Values
 */ 
#define ENUM_LONG_TERM_OPTION_YES_Y = 'Y'
#define ENUM_LONG_TERM_OPTION_NO_N = 'N'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_TIME_MESSAGE_1 = '1'
#define ENUM_MESSAGE_TYPE_SERIES_UPDATE_P = 'P'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_DEFINITION_MESSAGE_C = 'C'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_BID_COMPACT_MESSAGE_B = 'b'
#define ENUM_MESSAGE_TYPE_COMPLEX_TOP_OF_MARKET_OFFER_COMPACT_MESSAGE_O = 'o'
#define ENUM_MESSAGE_TYPE_WIDE_COMPLEX_TOP_OF_MARKET_BID_MESSAGE_E = 'e'
#define ENUM_MESSAGE_TYPE_WIDE_COMPLEX_TOP_OF_MARKET_OFFER_MESSAGE_F = 'f'
#define ENUM_MESSAGE_TYPE_COMPLEX_DOUBLE_SIDED_TOP_OF_MARKET_COMPACT_MESSAGE_M = 'm'
#define ENUM_MESSAGE_TYPE_WIDE_COMPLEX_DOUBLE_SIDED_TOP_OF_MARKET_MESSAGE_W = 'w'
#define ENUM_MESSAGE_TYPE_STRATEGY_TRADE_MESSAGE_T = 't'
#define ENUM_MESSAGE_TYPE_UNDERLYING_TRADING_STATUS_MESSAGE_H = 'H'

/*
 * Miax Bbo Posting Increment Indicator Values
 */ 
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_PENNY_P = 'P'
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_NICKEL_N = 'N'
#define ENUM_MIAX_BBO_POSTING_INCREMENT_INDICATOR_DIME_D = 'D'

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
#define ENUM_PACKET_TYPE_HEARTBEAT_0 = "0"
#define ENUM_PACKET_TYPE_START_OF_SESSION_1 = "1"
#define ENUM_PACKET_TYPE_END_OF_SESSION_2 = "2"
#define ENUM_PACKET_TYPE_APPLICATION_MESSAGE_3 = "3"

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
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_HALTED_H = 'H'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_RESUMED_R = 'R'
#define ENUM_TOP_OF_MARKET_QUOTE_CONDITION_OPENED_O = 'O'

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
 * Structure: Complex Double Sided Top of Market Compact Message
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
    int16_t CompactPrice;
    uint16_t CompactSize;
    char Reserved2[2];
    char TopOfMarketQuoteCondition;
} ComplexTopOfMarketBidCompactMessageT;

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
 * Structure: Leg Definition
 */ 
typedef struct {
    uint32_t ProductId;
    uint16_t LegRatioQty;
    uint8_t LegSide;
    char Reserved8[8];
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
 * Structure: Wide Complex Double Sided Top of Market Message
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

