/*******************************************************************************
 * C Structs For Nasdaq Psx Itch Bbo 2.1 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Authenticity Values
 */ 
#define ENUM_AUTHENTICITY_LIVE_PRODUCTION_P = 'P'
#define ENUM_AUTHENTICITY_TEST_T = 'T'

/*
 * Breached Level Values
 */ 
#define ENUM_BREACHED_LEVEL_LEVEL_11 = '1'
#define ENUM_BREACHED_LEVEL_LEVEL_22 = '2'
#define ENUM_BREACHED_LEVEL_LEVEL_33 = '3'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALTED_H = 'H'
#define ENUM_CURRENT_TRADING_STATE_PAUSED_P = 'P'
#define ENUM_CURRENT_TRADING_STATE_QUOTATION_ONLY_PERIOD_Q = 'Q'
#define ENUM_CURRENT_TRADING_STATE_TRADING_T = 'T'

/*
 * Etp Flag Values
 */ 
#define ENUM_ETP_FLAG_ETP_Y = 'Y'
#define ENUM_ETP_FLAG_NOT_ETP_N = 'N'
#define ENUM_ETP_FLAG_NA = ' '

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_TRANSMISSIONS_O = 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS_S = 'S'
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS_Q = 'Q'
#define ENUM_EVENT_CODE_END_OF_MARKET_HOURS_M = 'M'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS_E = 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGES_C = 'C'

/*
 * Financial Status Indicator Values
 */ 
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_D = 'D'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT_E = 'E'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT_Q = 'Q'
#define ENUM_FINANCIAL_STATUS_INDICATOR_SUSPENDED_S = 'S'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_BANKRUPT_G = 'G'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_DELINQUENT_H = 'H'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT_AND_BANKRUPT_J = 'J'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_DELINQUENT_AND_BANKRUPT_K = 'K'
#define ENUM_FINANCIAL_STATUS_INDICATOR_CREATIONS_AND_REDEMPTIONS_SUSPENDED_C = 'C'
#define ENUM_FINANCIAL_STATUS_INDICATOR_NORMAL_N = 'N'
#define ENUM_FINANCIAL_STATUS_INDICATOR_NA = ' '

/*
 * Inverse Indicator Values
 */ 
#define ENUM_INVERSE_INDICATOR_INVERSE_ETP_Y = 'Y'
#define ENUM_INVERSE_INDICATOR_NOT_INVERSE_ETP_N = 'N'

/*
 * Ipo Flag Values
 */ 
#define ENUM_IPO_FLAG_NASDAQ_LISTED_INSTRUMENT_Y = 'Y'
#define ENUM_IPO_FLAG_NASDAQ_LISTED_INSTRUMENT_N = 'N'
#define ENUM_IPO_FLAG_NA = ' '

/*
 * Luld Reference Price Tier Values
 */ 
#define ENUM_LULD_REFERENCE_PRICE_TIER_TIER_11 = '1'
#define ENUM_LULD_REFERENCE_PRICE_TIER_TIER_22 = '2'
#define ENUM_LULD_REFERENCE_PRICE_TIER_NA = ' '

/*
 * Market Category Values
 */ 
#define ENUM_MARKET_CATEGORY_NASDAQ_GLOBAL_SELECT_MARKET_Q = 'Q'
#define ENUM_MARKET_CATEGORY_NASDAQ_GLOBAL_MARKET_G = 'G'
#define ENUM_MARKET_CATEGORY_NASDAQ_CAPITAL_MARKET_S = 'S'
#define ENUM_MARKET_CATEGORY_NYSE_N = 'N'
#define ENUM_MARKET_CATEGORY_NYSE_AMEX_A = 'A'
#define ENUM_MARKET_CATEGORY_NYSE_ARCA_P = 'P'
#define ENUM_MARKET_CATEGORY_BATS_BZX_Z = 'Z'
#define ENUM_MARKET_CATEGORY_INVESTORS_EXCHANGE_V = 'V'
#define ENUM_MARKET_CATEGORY_NA = ' '

/*
 * Market Code Values
 */ 
#define ENUM_MARKET_CODE_NASDAQ_Q = Q
#define ENUM_MARKET_CODE_BX_B = B
#define ENUM_MARKET_CODE_PSX_X = X

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_STOCK_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTED_INDICATOR_MESSAGE_Y = 'Y'
#define ENUM_MESSAGE_TYPE_MWCB_DECLINE_LEVEL_MESSAGE_V = 'V'
#define ENUM_MESSAGE_TYPE_MWCB_STATUS_MESSAGE_W = 'W'
#define ENUM_MESSAGE_TYPE_OPERATIONAL_HALT_MESSAGE_H = 'h'
#define ENUM_MESSAGE_TYPE_QUOTATION_MESSAGE_Q = 'Q'
#define ENUM_MESSAGE_TYPE_NEXT_SHARES_QUOTATION_MESSAGE_A = 'A'

/*
 * Operational Halt Action Values
 */ 
#define ENUM_OPERATIONAL_HALT_ACTION_HALTED_H = H
#define ENUM_OPERATIONAL_HALT_ACTION_RESUMED_T = T

/*
 * Reg Sho Action Values
 */ 
#define ENUM_REG_SHO_ACTION_NO_PRICE_TEST_0 = '0'
#define ENUM_REG_SHO_ACTION_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTION_1 = '1'
#define ENUM_REG_SHO_ACTION_TEST_RESTRICTION_REMAINS_2 = '2'

/*
 * Round Lots Only Values
 */ 
#define ENUM_ROUND_LOTS_ONLY_ROUND_LOTS_ONLY_Y = 'Y'
#define ENUM_ROUND_LOTS_ONLY_ODD_MIXED_ALLOWED_N = 'N'

/*
 * Security Class Values
 */ 
#define ENUM_SECURITY_CLASS_NASDAQ_LISTED_ISSUE_Q = 'Q'
#define ENUM_SECURITY_CLASS_NYSE_N = 'N'
#define ENUM_SECURITY_CLASS_NYSE_MKT_A = 'A'
#define ENUM_SECURITY_CLASS_NYSE_ARCA_P = 'P'
#define ENUM_SECURITY_CLASS_BATS_Z = 'Z'
#define ENUM_SECURITY_CLASS_IEXG_V = 'V'
#define ENUM_SECURITY_CLASS_NA = ' '

/*
 * Short Sale Threshold Indicator Values
 */ 
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_RESTRICTED_Y = 'Y'
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_NOT_RESTRICTED_N = 'N'
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_NA = ' '


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t Length;
    char MessageType;
} MessageHeaderT;

/*
 * Structure: Mwcb Decline Level Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    int64_t Level1;
    int64_t Level2;
    int64_t Level3;
} MwcbDeclineLevelMessageT;

/*
 * Structure: Mwcb Status Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char BreachedLevel;
} MwcbStatusMessageT;

/*
 * Structure: Next Shares Quotation Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char NextSharesSymbol[8];
    char SecurityClass;
    int32_t NasdaqBestBid;
} NextSharesQuotationMessageT;

/*
 * Structure: Operational Halt Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    int8_t MarketCode;
    int8_t OperationalHaltAction;
} OperationalHaltMessageT;

/*
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    char Session[10];
    uint64_t Sequence;
    uint16_t Count;
} PacketHeaderT;

/*
 * Structure: Quotation Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char SecurityClass;
    int32_t PsxBestBidPrice;
    uint32_t PsxBestBidSize;
    int32_t PsxBestOfferPrice;
    uint32_t PsxBestOfferSize;
} QuotationMessageT;

/*
 * Structure: Reg Sho Short Sale Price Test Restricted Indicator Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char RegShoAction;
} RegShoShortSalePriceTestRestrictedIndicatorMessageT;

/*
 * Structure: Stock Directory Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char MarketCategory;
    char FinancialStatusIndicator;
    uint32_t RoundLotSize;
    char RoundLotsOnly;
    char IssueClassification[1];
    char IssueSubType[2];
    char Authenticity;
    char ShortSaleThresholdIndicator;
    char IpoFlag;
    char LuldReferencePriceTier;
    char EtpFlag;
    uint32_t EtpLeverageFactor;
    char InverseIndicator;
} StockDirectoryMessageT;

/*
 * Structure: Stock Trading Action Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char SecurityClass;
    char CurrentTradingState;
    char Reason[4];
} StockTradingActionMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char EventCode;
} SystemEventMessageT;

