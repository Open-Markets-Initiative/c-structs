/*******************************************************************************
 * C Structs For Nasdaq Equities Itch Noi 3.0 Binary Model
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
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_OPENING_CROSS 'O'
#define ENUM_CROSS_TYPE_CLOSING_CROSS 'C'
#define ENUM_CROSS_TYPE_CROSS_HALTED_OR_PAUSED 'H'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALTED 'H'
#define ENUM_CURRENT_TRADING_STATE_PAUSED 'P'
#define ENUM_CURRENT_TRADING_STATE_TRADING 'T'

/*
 * Etp Flag Values
 */ 
#define ENUM_ETP_FLAG_ETP 'Y'
#define ENUM_ETP_FLAG_NOT_ETP 'N'
#define ENUM_ETP_FLAG_NOT_AVAILABLE ' '

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS 'S'
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS 'Q'
#define ENUM_EVENT_CODE_CLEAR_NOII_OPENING_CROSS_DATA 'X'
#define ENUM_EVENT_CODE_END_OF_MARKET_HOURS 'M'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGES 'C'

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
 * Imbalance Direction Values
 */ 
#define ENUM_IMBALANCE_DIRECTION_BUY_IMBALANCE 'B'
#define ENUM_IMBALANCE_DIRECTION_SELL_IMBALANCE 'S'
#define ENUM_IMBALANCE_DIRECTION_NO_IMBALANCE 'N'
#define ENUM_IMBALANCE_DIRECTION_INSUFFICIENT_ORDERS 'O'

/*
 * Inverse Indicator Values
 */ 
#define ENUM_INVERSE_INDICATOR_INVERSE_ETP 'Y'
#define ENUM_INVERSE_INDICATOR_NOT_INVERSE_ETP 'N'

/*
 * Ipo Flag Values
 */ 
#define ENUM_IPO_FLAG_SET_UP_FOR_IPO_RELEASE 'Y'
#define ENUM_IPO_FLAG_NOT_SET_UP_FOR_IPO_RELEASE 'N'
#define ENUM_IPO_FLAG_NOT_AVAILABLE ' '

/*
 * Ipo Quotation Release Qualifier Values
 */ 
#define ENUM_IPO_QUOTATION_RELEASE_QUALIFIER_ANTICIPATED_QUOTATION_RELEASE_TIME 'A'
#define ENUM_IPO_QUOTATION_RELEASE_QUALIFIER_IPO_RELEASE_CANCELED_OR_POSTPONED 'C'

/*
 * Luld Reference Price Tier Values
 */ 
#define ENUM_LULD_REFERENCE_PRICE_TIER_TIER_1 '1'
#define ENUM_LULD_REFERENCE_PRICE_TIER_TIER_2 '2'
#define ENUM_LULD_REFERENCE_PRICE_TIER_NOT_APPLICABLE ' '

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
#define ENUM_MARKET_CATEGORY_NA ' '

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_STOCK_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_REG_SHO_RESTRICTION_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_NOII_MESSAGE 'I'
#define ENUM_MESSAGE_TYPE_CROSS_TRADE_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_IPO_QUOTING_PERIOD_UPDATE_MESSAGE 'K'

/*
 * Price Variation Indicator Values
 */ 
#define ENUM_PRICE_VARIATION_INDICATOR_LESS 'L'
#define ENUM_PRICE_VARIATION_INDICATOR_1_TO_199 '1'
#define ENUM_PRICE_VARIATION_INDICATOR_2_TO_299 '2'
#define ENUM_PRICE_VARIATION_INDICATOR_3_TO_399 '3'
#define ENUM_PRICE_VARIATION_INDICATOR_4_TO_499 '4'
#define ENUM_PRICE_VARIATION_INDICATOR_5_TO_599 '5'
#define ENUM_PRICE_VARIATION_INDICATOR_6_TO_699 '6'
#define ENUM_PRICE_VARIATION_INDICATOR_7_TO_799 '7'
#define ENUM_PRICE_VARIATION_INDICATOR_8_TO_899 '8'
#define ENUM_PRICE_VARIATION_INDICATOR_9_TO_999 '9'
#define ENUM_PRICE_VARIATION_INDICATOR_10_TO_1999 'A'
#define ENUM_PRICE_VARIATION_INDICATOR_20_TO_2999 'B'
#define ENUM_PRICE_VARIATION_INDICATOR_30_OR_GREATER 'C'

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
#define ENUM_ROUND_LOTS_ONLY_NO_RESTRICTIONS 'N'

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
 * Structure: Ipo Quoting Period Update Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    uint32_t IpoQuotationReleaseTime;
    char IpoQuotationReleaseQualifier;
    uint32_t IpoPrice;
} IpoQuotingPeriodUpdateMessageT;

/*
 * Structure: Cross Trade Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t Shares;
    char Stock[8];
    uint32_t CrossPrice;
    uint64_t MatchNumber;
    char CrossType;
} CrossTradeMessageT;

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
    uint32_t FarPrice;
    uint32_t NearPrice;
    uint32_t CurrentReferencePrice;
    char CrossType;
    char PriceVariationIndicator;
} NoiiMessageT;

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
 * Structure: System Event Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char EventCode;
} SystemEventMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t Length;
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
   Version: 3.0
   Date: Tuesday, September 12, 2017
   Specification: NOIViewSpecification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
