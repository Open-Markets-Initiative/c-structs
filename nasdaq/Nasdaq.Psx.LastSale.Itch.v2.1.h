/*******************************************************************************
 * C Structs For Nasdaq Psx Itch LastSale 2.1 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Authenticity Values
 */ 
#define ENUM_AUTHENTICITY_LIVE_PRODUCTION 'P'
#define ENUM_AUTHENTICITY_TEST 'T'

/*
 * Breached Level Values
 */ 
#define ENUM_BREACHED_LEVEL_LEVEL_1 '1'
#define ENUM_BREACHED_LEVEL_LEVEL_2 '2'
#define ENUM_BREACHED_LEVEL_LEVEL_3 '3'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALTED 'H'
#define ENUM_CURRENT_TRADING_STATE_QUOTATION_ONLY 'Q'
#define ENUM_CURRENT_TRADING_STATE_TRADING 'T'

/*
 * Etp Flag Values
 */ 
#define ENUM_ETP_FLAG_ETP 'Y'
#define ENUM_ETP_FLAG_NOT_ETP 'N'
#define ENUM_ETP_FLAG_NA ' '

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_TRANSMISSIONS 'O'
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS 'Q'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS 'S'
#define ENUM_EVENT_CODE_END_OF_MARKET_HOURS 'M'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS 'E'
#define ENUM_EVENT_CODE_END_OF_TRANSMISSIONS 'C'

/*
 * Financial Status Indicator Values
 */ 
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT 'D'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT 'E'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT 'Q'
#define ENUM_FINANCIAL_STATUS_INDICATOR_SUSPENDED 'S'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_BANKRUPT 'G'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_DELINQUENT 'H'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT_AND_BANKRUPT 'J'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_DELINQUENT_AND_BANKRUPT 'K'
#define ENUM_FINANCIAL_STATUS_INDICATOR_CREATIONS_AND_REDEMPTIONS_SUSPENDED 'C'
#define ENUM_FINANCIAL_STATUS_INDICATOR_NORMAL 'N'
#define ENUM_FINANCIAL_STATUS_INDICATOR_NA ' '

/*
 * Inverse Indicator Values
 */ 
#define ENUM_INVERSE_INDICATOR_INVERSE_ETP 'Y'
#define ENUM_INVERSE_INDICATOR_NOT_INVERSE_ETP 'N'

/*
 * Ipo Flag Values
 */ 
#define ENUM_IPO_FLAG_NASDAQ_LISTED_INSTRUMENT 'Y'
#define ENUM_IPO_FLAG_NASDAQ_LISTED_INSTRUMENT 'N'
#define ENUM_IPO_FLAG_NA ' '

/*
 * Issue Classification Values
 */ 
#define ENUM_ISSUE_CLASSIFICATION_AMERICAN_DEPOSITARY_SHARE 'A'
#define ENUM_ISSUE_CLASSIFICATION_BOND 'B'
#define ENUM_ISSUE_CLASSIFICATION_COMMON 'C'
#define ENUM_ISSUE_CLASSIFICATION_DEPOSITORY 'F'
#define ENUM_ISSUE_CLASSIFICATION_144A 'I'
#define ENUM_ISSUE_CLASSIFICATION_LIMITED 'L'
#define ENUM_ISSUE_CLASSIFICATION_NOTES 'N'
#define ENUM_ISSUE_CLASSIFICATION_ORDINARY_SHARE 'O'
#define ENUM_ISSUE_CLASSIFICATION_PREFERRED 'P'
#define ENUM_ISSUE_CLASSIFICATION_OTHER 'Q'
#define ENUM_ISSUE_CLASSIFICATION_RIGHT 'R'
#define ENUM_ISSUE_CLASSIFICATION_SHARES 'S'
#define ENUM_ISSUE_CLASSIFICATION_CONVERTIBLE 'T'
#define ENUM_ISSUE_CLASSIFICATION_UNIT 'U'
#define ENUM_ISSUE_CLASSIFICATION_UNITS_BENIF_INT 'V'
#define ENUM_ISSUE_CLASSIFICATION_WARRANT 'W'

/*
 * Luld Reference Price Tier Values
 */ 
#define ENUM_LULD_REFERENCE_PRICE_TIER_TIER_1 '1'
#define ENUM_LULD_REFERENCE_PRICE_TIER_TIER_2 '2'
#define ENUM_LULD_REFERENCE_PRICE_TIER_NA ' '

/*
 * Market Category Values
 */ 
#define ENUM_MARKET_CATEGORY_NASDAQ_GLOBAL_SELECT_MARKET 'Q'
#define ENUM_MARKET_CATEGORY_NASDAQ_GLOBAL_MARKET 'G'
#define ENUM_MARKET_CATEGORY_NASDAQ_CAPITAL_MARKET 'S'
#define ENUM_MARKET_CATEGORY_NYSE 'N'
#define ENUM_MARKET_CATEGORY_NYSE_MKT 'A'
#define ENUM_MARKET_CATEGORY_NYSE_ARCA 'P'
#define ENUM_MARKET_CATEGORY_BATS_Z 'Z'
#define ENUM_MARKET_CATEGORY_INVESTORS_EXCHANGE 'V'
#define ENUM_MARKET_CATEGORY_NOT_AVAILABLE ' '

/*
 * Market Center Identifier Values
 */ 
#define ENUM_MARKET_CENTER_IDENTIFIER_PSX_EXECUTION_SYSTEM 'B'
#define ENUM_MARKET_CENTER_IDENTIFIER_PSX_EXECUTION_SYSTEM 'X'

/*
 * Market Code Values
 */ 
#define ENUM_MARKET_CODE_NASDAQ 'Q'
#define ENUM_MARKET_CODE_BX 'B'
#define ENUM_MARKET_CODE_PSX 'X'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_TRADE_REPORT_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_NEXT_SHARES_TRADE_REPORT_MESSAGE 'M'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_ERROR_MESSAGE 'X'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_ERROR_FOR_NEXT_SHARES_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_TRADE_CORRECTION_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_TRADE_CORRECTION_FOR_NEXT_SHARES_MESSAGE 'Z'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTED_INDICATOR_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_MWCB_DECLINE_LEVEL_MESSAGE 'V'
#define ENUM_MESSAGE_TYPE_MWCB_BREACH_MESSAGE 'W'
#define ENUM_MESSAGE_TYPE_OPERATIONAL_HALT_MESSAGE 'h'

/*
 * Operational Halt Action Values
 */ 
#define ENUM_OPERATIONAL_HALT_ACTION_HALTED 'H'
#define ENUM_OPERATIONAL_HALT_ACTION_RESUMED 'T'

/*
 * Reg Sho Action Values
 */ 
#define ENUM_REG_SHO_ACTION_NO_PRICE_TEST '0'
#define ENUM_REG_SHO_ACTION_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTION '1'
#define ENUM_REG_SHO_ACTION_TEST_RESTRICTION_REMAINS '2'

/*
 * Round Lots Only Values
 */ 
#define ENUM_ROUND_LOTS_ONLY_ROUND_LOTS_ONLY 'Y'
#define ENUM_ROUND_LOTS_ONLY_NO_RESTRICTION 'N'

/*
 * Sale Condition Modifier Level 1 Values
 */ 
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_1_PROXY_PRICE_SETTLEMENT 'J'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_1_REGULAR_SETTLEMENT '@'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_1_CASH_SETTLEMENT 'C'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_1_NEXT_DAY_SETTLEMENT 'N'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_1_SELLER_SETTLEMENT 'R'

/*
 * Sale Condition Modifier Level 2 Values
 */ 
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_INTERMARKET_SWEEP 'F'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_OPENING_PRINT 'O'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_DERIVATIVE_PRICED '4'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_RE_OPENING_PRINT '5'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_CLOSING_PRINT '6'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_2_NOT_APPLICABLE ' '

/*
 * Sale Condition Modifier Level 3 Values
 */ 
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_3_EXTENDED_HOURS_TRADE 'T'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_3_REPORTED_LATE_OR_OUT_OF_SEQUENCE 'U'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_3_REPORTED_LATE_BUT_IN_SEQUENCE 'L'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_3_SOLD_OUT_OF_SEQUENCE 'Z'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_3_NOT_APPLICABLE ' '

/*
 * Sale Condition Modifier Level 4 Values
 */ 
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_ACQUISITION 'A'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_BUNCHED 'B'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_DISTRIBUTION 'D'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_PRICE_VARIATION_TRANSACTION 'H'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_PSX_OFFICIAL_CLOSE_PRICE 'M'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_PRIOR_REFERENCE_PRICE 'P'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_PSX_OFFICIAL_OPENING_PRICE 'Q'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_SPLIT_TRADE 'S'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_WEIGHTED_AVERAGE_PRICE 'W'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_CROSS_TRADE 'X'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_ODD_LOT_EXECUTION 'o'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_ODD_LOT_CROSS_EXECUTION 'x'
#define ENUM_SALE_CONDITION_MODIFIER_LEVEL_4_NOT_APPLICABLE ' '

/*
 * Security Class Values
 */ 
#define ENUM_SECURITY_CLASS_NASDAQ 'Q'
#define ENUM_SECURITY_CLASS_NYSE 'N'
#define ENUM_SECURITY_CLASS_NYSE_AMEX 'A'
#define ENUM_SECURITY_CLASS_NYSE_ARCA 'P'
#define ENUM_SECURITY_CLASS_BATS 'Z'
#define ENUM_SECURITY_CLASS_INVESTORS_EXCHANGE 'V'

/*
 * Short Sale Threshold Indicator Values
 */ 
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_RESTRICTED 'Y'
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_NOT_RESTRICTED 'N'
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_NA ' '


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Operational Halt Message
 */ 
typedef struct {
    char Stock[8];
    char MarketCode;
    char OperationalHaltAction;
} OperationalHaltMessageT;

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
    uint64_t Level1;
    uint64_t Level2;
    uint64_t Level3;
} MwcbDeclineLevelMessageT;

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
 * Structure: Reg Sho Short Sale Price Test Restricted Indicator Message
 */ 
typedef struct {
    char Stock[8];
    char RegShoAction;
} RegShoShortSalePriceTestRestrictedIndicatorMessageT;

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    char IssueSymbol[8];
    char SecurityClass;
    char CurrentTradingState;
    char TradingActionReason[4];
} TradingActionMessageT;

/*
 * Structure: Trade Correction For Next Shares Message
 */ 
typedef struct {
    char MarketCenterIdentifier;
    char IssueSymbol[8];
    char SecurityClass;
    char OriginalTradeControlNumber[10];
    uint32_t OriginalTradePrice;
    uint32_t OriginalNavPremiumDiscountAmount;
    uint32_t OriginalTradeSize;
    char OriginalSaleConditionModifier[4];
    char CorrectedTradeControlNumber[10];
    uint32_t CorrectedTradePrice;
    uint32_t CorrectedNavPremiumDiscountAmount;
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
    uint32_t OriginalTradePrice;
    uint32_t OriginalTradeSize;
    char OriginalSaleConditionModifier[4];
    char CorrectedTradeControlNumber[10];
    uint32_t CorrectedTradePrice;
    uint32_t CorrectedTradeSize;
    char CorrectedSaleConditionModifier[4];
} TradeCorrectionMessageT;

/*
 * Structure: Trade Cancel Error For Next Shares Message
 */ 
typedef struct {
    char MarketCenterIdentifier;
    char IssueSymbol[8];
    char SecurityClass;
    char OriginalTradeControlNumber[10];
    uint32_t OriginalTradePrice;
    uint32_t OriginalNavPremiumDiscountAmount;
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
    uint32_t OriginalTradePrice;
    uint32_t OriginalTradeSize;
    char OriginalSaleConditionModifier[4];
} TradeCancelErrorMessageT;

/*
 * Structure: Next Shares Trade Report Message
 */ 
typedef struct {
    char MarketCenterIdentifier;
    char NextSharesSymbol[8];
    char SecurityClass;
    char TradeControlNumber[10];
    uint32_t ProxyPrice;
    uint32_t TradeSize;
    uint32_t NavPremiumDiscountAmount;
    char SaleConditionModifierLevel1;
    char SaleConditionModifierLevel2;
    char SaleConditionModifierLevel3;
    char SaleConditionModifierLevel4;
} NextSharesTradeReportMessageT;

/*
 * Structure: Trade Report Message
 */ 
typedef struct {
    char MarketCenterIdentifier;
    char IssueSymbol[8];
    char SecurityClass;
    char TradeControlNumber[10];
    uint32_t TradePrice;
    uint32_t TradeSize;
    char SaleConditionModifierLevel1;
    char SaleConditionModifierLevel2;
    char SaleConditionModifierLevel3;
    char SaleConditionModifierLevel4;
} TradeReportMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    char EventCode;
} SystemEventMessageT;

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
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    char Session[10];
    uint64_t Sequence;
    uint16_t Count;
} PacketHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: National Association of Securities Dealers Automated Quotations
   Version: 2.1
   Date: Thursday, May 3, 2018
   Specification: PLSSpecification2.1.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
