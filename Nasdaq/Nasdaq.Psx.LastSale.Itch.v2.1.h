/*******************************************************************************
 * C Structs For Nasdaq Psx Itch LastSale 2.1 protocol
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
#define ENUM_CURRENT_TRADING_STATE_QUOTATION_ONLY_Q = 'Q'
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
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS_Q = 'Q'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS_S = 'S'
#define ENUM_EVENT_CODE_END_OF_MARKET_HOURS_M = 'M'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS_E = 'E'
#define ENUM_EVENT_CODE_END_OF_TRANSMISSIONS_C = 'C'

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
 * Issue Classification Values
 */ 
#define ENUM_ISSUE_CLASSIFICATION_AMERICAN_DEPOSITARY_SHARE_A = 'A'
#define ENUM_ISSUE_CLASSIFICATION_BOND_B = 'B'
#define ENUM_ISSUE_CLASSIFICATION_COMMON_C = 'C'
#define ENUM_ISSUE_CLASSIFICATION_DEPOSITORY_F = 'F'
#define ENUM_ISSUE_CLASSIFICATION_144AI = 'I'
#define ENUM_ISSUE_CLASSIFICATION_LIMITED_L = 'L'
#define ENUM_ISSUE_CLASSIFICATION_NOTES_N = 'N'
#define ENUM_ISSUE_CLASSIFICATION_ORDINARY_SHARE_O = 'O'
#define ENUM_ISSUE_CLASSIFICATION_PREFERRED_P = 'P'
#define ENUM_ISSUE_CLASSIFICATION_OTHER_Q = 'Q'
#define ENUM_ISSUE_CLASSIFICATION_RIGHT_R = 'R'
#define ENUM_ISSUE_CLASSIFICATION_SHARES_S = 'S'
#define ENUM_ISSUE_CLASSIFICATION_CONVERTIBLE_T = 'T'
#define ENUM_ISSUE_CLASSIFICATION_UNIT_U = 'U'
#define ENUM_ISSUE_CLASSIFICATION_UNITS_BENIF_INT_V = 'V'
#define ENUM_ISSUE_CLASSIFICATION_WARRANT_W = 'W'

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
#define ENUM_MARKET_CATEGORY_NYSE_MKT_A = 'A'
#define ENUM_MARKET_CATEGORY_NYSE_ARCA_P = 'P'
#define ENUM_MARKET_CATEGORY_BATS_ZZ = 'Z'
#define ENUM_MARKET_CATEGORY_INVESTORS_’_EXCHANGE_V = 'V'
#define ENUM_MARKET_CATEGORY_NOT_AVAILABLE = ' '

/*
 * Market Center Identifier Values
 */ 
#define ENUM_MARKET_CENTER_IDENTIFIER_PSX_EXECUTION_SYSTEM_B = 'B'
#define ENUM_MARKET_CENTER_IDENTIFIER_PSX_EXECUTION_SYSTEM_X = 'X'

/*
 * Market Code Values
 */ 
#define ENUM_MARKET_CODE_NASDAQ_Q = 'Q'
#define ENUM_MARKET_CODE_BX_B = 'B'
#define ENUM_MARKET_CODE_PSX_X = 'X'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_TRADE_REPORT_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_NEXT_SHARES_TRADE_REPORT_MESSAGE_M = 'M'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_ERROR_MESSAGE_X = 'X'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_ERROR_FOR_NEXT_SHARES_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_TRADE_CORRECTION_MESSAGE_C = 'C'
#define ENUM_MESSAGE_TYPE_TRADE_CORRECTION_FOR_NEXT_SHARES_MESSAGE_Z = 'Z'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTED_INDICATOR_MESSAGE_Y = 'Y'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_MWCB_DECLINE_LEVEL_MESSAGE_V = 'V'
#define ENUM_MESSAGE_TYPE_MWCB_BREACH_MESSAGE_W = 'W'
#define ENUM_MESSAGE_TYPE_OPERATIONAL_HALT_MESSAGE_H = 'h'

/*
 * Operational Halt Action Values
 */ 
#define ENUM_OPERATIONAL_HALT_ACTION_HALTED_H = 'H'
#define ENUM_OPERATIONAL_HALT_ACTION_RESUMED_T = 'T'

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
#define ENUM_ROUND_LOTS_ONLY_NO_RESTRICTION_N = 'N'

/*
 * Sale Condition Modifier Level 1 Values
 */ 
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_1_PROXY_PRICE_SETTLEMENT_J = 'J'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_1_REGULAR_SETTLEMENT_@ = '@'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_1_CASH_SETTLEMENT_C = 'C'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_1_NEXT_DAY_SETTLEMENT_N = 'N'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_1_SELLER_SETTLEMENT_R = 'R'

/*
 * Sale Condition Modifier Level 2 Values
 */ 
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_INTERMARKET_SWEEP_F = 'F'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_OPENING_PRINT_O = 'O'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_DERIVATIVE_PRICED_4 = '4'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_RE_OPENING_PRINT_5 = '5'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_CLOSING_PRINT_6 = '6'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_NOT_APPLICABLE = ' '

/*
 * Sale Condition Modifier Level 3 Values
 */ 
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_3_EXTENDED_HOURS_TRADE_T = 'T'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_3_REPORTED_LATE_OR_OUT_OF_SEQUENCE_U = 'U'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_3_REPORTED_LATE_BUT_IN_SEQUENCE_L = 'L'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_3_SOLD_OUT_OF_SEQUENCE_Z = 'Z'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_3_NOT_APPLICABLE = ' '

/*
 * Sale Condition Modifier Level 4 Values
 */ 
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_ACQUISITION_A = 'A'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_BUNCHED_B = 'B'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_DISTRIBUTION_D = 'D'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_PRICE_VARIATION_TRANSACTION_H = 'H'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_PSX_OFFICIAL_CLOSE_PRICE_M = 'M'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_PRIOR_REFERENCE_PRICE_P = 'P'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_PSX_OFFICIAL_OPENING_PRICE_Q = 'Q'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_SPLIT_TRADE_S = 'S'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_WEIGHTED_AVERAGE_PRICE_W = 'W'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_CROSS_TRADE_X = 'X'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_ODD_LOT_EXECUTION_O = 'o'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_ODD_LOT_CROSS_EXECUTION_X = 'x'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_NOT_APPLICABLE = ' '

/*
 * Security Class Values
 */ 
#define ENUM_SECURITY_CLASS_NASDAQ_Q = 'Q'
#define ENUM_SECURITY_CLASS_NYSE_N = 'N'
#define ENUM_SECURITY_CLASS_NYSE_AMEX_A = 'A'
#define ENUM_SECURITY_CLASS_NYSE_ARCA_P = 'P'
#define ENUM_SECURITY_CLASS_BATS_Z = 'Z'
#define ENUM_SECURITY_CLASS_INVESTORS_EXCHANGE_V = 'V'

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
    uint16_t TrackingNumber;
    char Timestamp;
    char MessageType;
} MessageHeaderT;

/*
 * Structure: Mwcb Breach Message
 */ 
typedef struct {
    char BreachedLevel;
} MwcbBreachMessageT;

/*
 * Structure: Mwcb Decline Level Message
 */ 
typedef struct {
    int64_t Level1;
    int64_t Level2;
    int64_t Level3;
} MwcbDeclineLevelMessageT;

/*
 * Structure: Next Shares Trade Report Message
 */ 
typedef struct {
    char MarketCenterIdentifier;
    char NextSharesSymbol[8];
    char SecurityClass;
    char TradeControlNumber[10];
    int32_t ProxyPrice;
    uint32_t TradeSize;
    int32_t NavPremiumDiscountAmount;
    char SaleConditionModifierLevel1;
    char SaleConditionModifierLevel2;
    char SaleConditionModifierLevel3;
    char SaleConditionModifierLevel4;
} NextSharesTradeReportMessageT;

/*
 * Structure: Operational Halt Message
 */ 
typedef struct {
    char Stock[8];
    char MarketCode;
    char OperationalHaltAction;
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
 * Structure: Reg Sho Short Sale Price Test Restricted Indicator Message
 */ 
typedef struct {
    char Stock[8];
    char RegShoAction;
} RegShoShortSalePriceTestRestrictedIndicatorMessageT;

/*
 * Structure: Stock Directory Message
 */ 
typedef struct {
    char Stock[8];
    char MarketCategory;
    char FinancialStatusIndicator;
    uint32_t RoundLotSize;
    char RoundLotsOnly;
    char IssueClassification;
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
 * Structure: System Event Message
 */ 
typedef struct {
    char EventCode;
} SystemEventMessageT;

/*
 * Structure: Trade Cancel Error For Next Shares Message
 */ 
typedef struct {
    char MarketCenterIdentifier;
    char IssueSymbol[8];
    char SecurityClass;
    char OriginalTradeControlNumber[10];
    int32_t OriginalTradePrice;
    int32_t OriginalNavPremiumDiscountAmount;
    uint32_t OriginalTradeSize;
    char OriginalSaleConditionModifier[4];
} TradeCancelErrorForNextSharesMessageT;

/*
 * Structure: Trade Cancel Error Message
 */ 
typedef struct {
    char MarketCenterIdentifier;
    char IssueSymbol[8];
    char SecurityClass;
    char OriginalTradeControlNumber[10];
    int32_t OriginalTradePrice;
    uint32_t OriginalTradeSize;
    char OriginalSaleConditionModifier[4];
} TradeCancelErrorMessageT;

/*
 * Structure: Trade Correction For Next Shares Message
 */ 
typedef struct {
    char MarketCenterIdentifier;
    char IssueSymbol[8];
    char SecurityClass;
    char OriginalTradeControlNumber[10];
    int32_t OriginalTradePrice;
    int32_t OriginalNavPremiumDiscountAmount;
    uint32_t OriginalTradeSize;
    char OriginalSaleConditionModifier[4];
    char CorrectedTradeControlNumber[10];
    int32_t CorrectedTradePrice;
    int32_t CorrectedNavPremiumDiscountAmount;
    uint32_t CorrectedTradeSize;
    char CorrectedSaleConditionModifier[4];
} TradeCorrectionForNextSharesMessageT;

/*
 * Structure: Trade Correction Message
 */ 
typedef struct {
    char MarketCenterIdentifier;
    char IssueSymbol[8];
    char SecurityClass;
    char OriginalTradeControlNumber[10];
    int32_t OriginalTradePrice;
    uint32_t OriginalTradeSize;
    char OriginalSaleConditionModifier[4];
    char CorrectedTradeControlNumber[10];
    int32_t CorrectedTradePrice;
    uint32_t CorrectedTradeSize;
    char CorrectedSaleConditionModifier[4];
} TradeCorrectionMessageT;

/*
 * Structure: Trade Report Message
 */ 
typedef struct {
    char MarketCenterIdentifier;
    char IssueSymbol[8];
    char SecurityClass;
    char TradeControlNumber[10];
    int32_t TradePrice;
    uint32_t TradeSize;
    char SaleConditionModifierLevel1;
    char SaleConditionModifierLevel2;
    char SaleConditionModifierLevel3;
    char SaleConditionModifierLevel4;
} TradeReportMessageT;

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    char IssueSymbol[8];
    char SecurityClass;
    char CurrentTradingState;
    char TradingActionReason[4];
} TradingActionMessageT;

