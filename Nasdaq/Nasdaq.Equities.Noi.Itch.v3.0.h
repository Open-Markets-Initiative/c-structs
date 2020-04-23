/*******************************************************************************
 * C Structs For Nasdaq Equities Itch Noi 3.0 protocol
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
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_OPENING_CROSS_O = 'O'
#define ENUM_CROSS_TYPE_CLOSING_CROSS_C = 'C'
#define ENUM_CROSS_TYPE_CROSS_HALTED_OR_PAUSED_H = 'H'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALTED_H = 'H'
#define ENUM_CURRENT_TRADING_STATE_PAUSED_P = 'P'
#define ENUM_CURRENT_TRADING_STATE_TRADING_T = 'T'

/*
 * Etp Flag Values
 */ 
#define ENUM_ETP_FLAG_ETP_Y = 'Y'
#define ENUM_ETP_FLAG_NOT_ETP_N = 'N'
#define ENUM_ETP_FLAG_NOT_AVAILABLE = ' '

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES_O = 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS_S = 'S'
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS_Q = 'Q'
#define ENUM_EVENT_CODE_CLEAR_NOII_OPENING_CROSS_DATA_X = 'X'
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
 * Imbalance Direction Values
 */ 
#define ENUM_IMBALANCE_DIRECTION_BUY_IMBALANCE_B = 'B'
#define ENUM_IMBALANCE_DIRECTION_SELL_IMBALANCE_S = 'S'
#define ENUM_IMBALANCE_DIRECTION_NO_IMBALANCE_N = 'N'
#define ENUM_IMBALANCE_DIRECTION_INSUFFICIENT_ORDERS_O = 'O'

/*
 * Inverse Indicator Values
 */ 
#define ENUM_INVERSE_INDICATOR_INVERSE_ETP_Y = 'Y'
#define ENUM_INVERSE_INDICATOR_NOT_INVERSE_ETP_N = 'N'

/*
 * Ipo Flag Values
 */ 
#define ENUM_IPO_FLAG_SET_UP_FOR_IPO_RELEASE_Y = 'Y'
#define ENUM_IPO_FLAG_NOT_SET_UP_FOR_IPO_RELEASE_N = 'N'
#define ENUM_IPO_FLAG_NOT_AVAILABLE = ' '

/*
 * Ipo Quotation Release Qualifier Values
 */ 
#define ENUM_IPO_QUOTATION_RELEASE_QUALIFIER_ANTICIPATED_QUOTATION_RELEASE_TIME_A = 'A'
#define ENUM_IPO_QUOTATION_RELEASE_QUALIFIER_IPO_RELEASE_CANCELED_OR_POSTPONED_C = 'C'

/*
 * Luld Reference Price Tier Values
 */ 
#define ENUM_LULD_REFERENCE_PRICE_TIER_TIER_11 = '1'
#define ENUM_LULD_REFERENCE_PRICE_TIER_TIER_22 = '2'
#define ENUM_LULD_REFERENCE_PRICE_TIER_NOT_APPLICABLE = ' '

/*
 * Market Category Values
 */ 
#define ENUM_MARKET_CATEGORY_NASDAQ_GLOBAL_SELECT_MARKET_Q = 'Q'
#define ENUM_MARKET_CATEGORY_NASDAQ_GLOBAL_MARKET_G = 'G'
#define ENUM_MARKET_CATEGORY_NASDAQ_CAPITAL_MARKET_S = 'S'
#define ENUM_MARKET_CATEGORY_NYSE_N = 'N'
#define ENUM_MARKET_CATEGORY_NYSE_MKT_A = 'A'
#define ENUM_MARKET_CATEGORY_NYSE_ARCA_P = 'P'
#define ENUM_MARKET_CATEGORY_BATS_ZZ = 'Z'
#define ENUM_MARKET_CATEGORY_INVESTORS_EXCHANGE_V = 'V'
#define ENUM_MARKET_CATEGORY_NA = ' '

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_STOCK_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_REG_SHO_RESTRICTION_MESSAGE_Y = 'Y'
#define ENUM_MESSAGE_TYPE_NOII_MESSAGE_I = 'I'
#define ENUM_MESSAGE_TYPE_CROSS_TRADE_MESSAGE_Q = 'Q'
#define ENUM_MESSAGE_TYPE_IPO_QUOTING_PERIOD_UPDATE_MESSAGE_K = 'K'

/*
 * Price Variation Indicator Values
 */ 
#define ENUM_PRICE_VARIATION_INDICATOR_LESS_L = 'L'
#define ENUM_PRICE_VARIATION_INDICATOR_1_TO_1991 = '1'
#define ENUM_PRICE_VARIATION_INDICATOR_2_TO_2992 = '2'
#define ENUM_PRICE_VARIATION_INDICATOR_3_TO_3993 = '3'
#define ENUM_PRICE_VARIATION_INDICATOR_4_TO_4994 = '4'
#define ENUM_PRICE_VARIATION_INDICATOR_5_TO_5995 = '5'
#define ENUM_PRICE_VARIATION_INDICATOR_6_TO_6996 = '6'
#define ENUM_PRICE_VARIATION_INDICATOR_7_TO_7997 = '7'
#define ENUM_PRICE_VARIATION_INDICATOR_8_TO_8998 = '8'
#define ENUM_PRICE_VARIATION_INDICATOR_9_TO_9999 = '9'
#define ENUM_PRICE_VARIATION_INDICATOR_10_TO_1999A = 'A'
#define ENUM_PRICE_VARIATION_INDICATOR_20_TO_2999B = 'B'
#define ENUM_PRICE_VARIATION_INDICATOR_30_OR_GREATER_C = 'C'

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
#define ENUM_ROUND_LOTS_ONLY_NO_RESTRICTIONS_N = 'N'

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
 * Structure: Cross Trade Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t Shares;
    char Stock[8];
    int32_t CrossPrice;
    uint64_t MatchNumber;
    char CrossType;
} CrossTradeMessageT;

/*
 * Structure: Ipo Quoting Period Update Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    uint32_t IpoQuotationReleaseTime;
    char IpoQuotationReleaseQualifier;
    int32_t IpoPrice;
} IpoQuotingPeriodUpdateMessageT;

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
 * Structure: Noii Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t PairedShares;
    uint64_t ImbalanceShares;
    char ImbalanceDirection;
    char Stock[8];
    int32_t FarPrice;
    int32_t NearPrice;
    int32_t CurrentReferencePrice;
    char CrossType;
    char PriceVariationIndicator;
} NoiiMessageT;

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
 * Structure: Reg Sho Restriction Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char RegShoAction;
} RegShoRestrictionMessageT;

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

