/*******************************************************************************
 * C Structs For Miax Options Mach Tom 1.9 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Bid Condition Values
 */ 
#define ENUM_BID_CONDITION_REGULAR_A = 'A'
#define ENUM_BID_CONDITION_PUBLIC_CUSTOMER_INTEREST_B = 'B'
#define ENUM_BID_CONDITION_NOT_FIRM_C = 'C'
#define ENUM_BID_CONDITION_TRADING_HALT_T = 'T'

/*
 * Event Reason Values
 */ 
#define ENUM_EVENT_REASON_AUTOMATIC_A = 'A'
#define ENUM_EVENT_REASON_MANUAL_M = 'M'

/*
 * Liquidity Acceptance Increment Indicator Values
 */ 
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_PENNY_P = 'P'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_NICKEL_N = 'N'
#define ENUM_LIQUIDITY_ACCEPTANCE_INCREMENT_INDICATOR_DIME_D = 'D'

/*
 * Mbbo Condition Values
 */ 
#define ENUM_MBBO_CONDITION_REGULAR_A = 'A'
#define ENUM_MBBO_CONDITION_PUBLIC_CUSTOMER_INTEREST_B = 'B'
#define ENUM_MBBO_CONDITION_NOT_FIRM_C = 'C'
#define ENUM_MBBO_CONDITION_TRADING_HALT_T = 'T'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_TIME_MESSAGE_1 = '1'
#define ENUM_MESSAGE_TYPE_SERIES_UPDATE_P = 'P'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_TOP_OF_MARKET_BID_COMPACT_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_TOP_OF_MARKET_OFFER_COMPACT_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_WIDE_TOP_OF_MARKET_BID_MESSAGE_W = 'W'
#define ENUM_MESSAGE_TYPE_WIDE_TOP_OF_MARKET_OFFER_MESSAGE_A = 'A'
#define ENUM_MESSAGE_TYPE_DOUBLE_SIDED_TOP_OF_MARKET_COMPACT_MESSAGE_D = 'd'
#define ENUM_MESSAGE_TYPE_WIDE_DOUBLE_SIDED_TOP_OF_MARKET_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_TRADE_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_MESSAGE_X = 'X'
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
#define ENUM_OFFER_CONDITION_PUBLIC_CUSTOMER_INTEREST_B = 'B'
#define ENUM_OFFER_CONDITION_NOT_FIRM_C = 'C'
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
#define ENUM_PACKET_TYPE_HEARTBEAT_0 = "0"
#define ENUM_PACKET_TYPE_START_OF_SESSION_1 = "1"
#define ENUM_PACKET_TYPE_END_OF_SESSION_2 = "2"
#define ENUM_PACKET_TYPE_APPLICATION_MESSAGE_3 = "3"

/*
 * System Status Values
 */ 
#define ENUM_SYSTEM_STATUS_START_OF_SYSTEM_HOURS_S = 'S'
#define ENUM_SYSTEM_STATUS_END_OF_SYSTEM_HOURS_C = 'C'
#define ENUM_SYSTEM_STATUS_START_TEST_SESSION_1 = '1'
#define ENUM_SYSTEM_STATUS_END_OF_TEST_SESSION_2 = '2'
#define ENUM_SYSTEM_STATUS_TOP_BID_B = 'B'
#define ENUM_SYSTEM_STATUS_TOP_OFFER_O = 'O'

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_CANCEL_OF_TRADE_A = 'A'

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
 * Structure: Double-Sided Top of Market Compact Message
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
 * Structure: Top of Market Bid Compact Message
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
 * Structure: Top of Market Offer Compact Message
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
 * Structure: Wide Double Sided Top of Market Message
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
 * Structure: Wide Top of Market Bid Message
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
 * Structure: Wide Top of Market Offer Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ProductId;
    uint32_t MbboPrice4;
    uint32_t MbboSize4;
    uint32_t MbboPriorityCustomerSize4;
    char MbboCondition;
} WideTopOfMarketOfferMessageT;

