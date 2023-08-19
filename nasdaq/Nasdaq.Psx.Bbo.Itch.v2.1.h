/*******************************************************************************
 * C Structs For Nasdaq Psx Itch Bbo 2.1 Binary Model
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
#define ENUM_CURRENT_TRADING_STATE_PAUSED 'P'
#define ENUM_CURRENT_TRADING_STATE_QUOTATION_ONLY_PERIOD 'Q'
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
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS 'S'
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS 'Q'
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
#define ENUM_MARKET_CATEGORY_NYSE_AMEX 'A'
#define ENUM_MARKET_CATEGORY_NYSE_ARCA 'P'
#define ENUM_MARKET_CATEGORY_BATS_BZX 'Z'
#define ENUM_MARKET_CATEGORY_INVESTORS_EXCHANGE 'V'
#define ENUM_MARKET_CATEGORY_NA ' '

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
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_STOCK_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTED_INDICATOR_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_MWCB_DECLINE_LEVEL_MESSAGE 'V'
#define ENUM_MESSAGE_TYPE_MWCB_STATUS_MESSAGE 'W'
#define ENUM_MESSAGE_TYPE_OPERATIONAL_HALT_MESSAGE 'h'
#define ENUM_MESSAGE_TYPE_QUOTATION_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_NEXT_SHARES_QUOTATION_MESSAGE 'A'

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
#define ENUM_ROUND_LOTS_ONLY_ODD_MIXED_ALLOWED 'N'

/*
 * Security Class Values
 */ 
#define ENUM_SECURITY_CLASS_NASDAQ_LISTED_ISSUE 'Q'
#define ENUM_SECURITY_CLASS_NYSE 'N'
#define ENUM_SECURITY_CLASS_NYSE_MKT 'A'
#define ENUM_SECURITY_CLASS_NYSE_ARCA 'P'
#define ENUM_SECURITY_CLASS_BATS 'Z'
#define ENUM_SECURITY_CLASS_IEXG 'V'
#define ENUM_SECURITY_CLASS_NA ' '

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
 * Structure: Next Shares Quotation Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char NextSharesSymbol[8];
    char SecurityClass;
    uint32_t NasdaqBestBid;
} NextSharesQuotationMessageT;

/*
 * Structure: Quotation Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char SecurityClass;
    uint32_t PsxBestBidPrice;
    uint32_t PsxBestBidSize;
    uint32_t PsxBestOfferPrice;
    uint32_t PsxBestOfferSize;
} QuotationMessageT;

/*
 * Structure: Operational Halt Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char MarketCode;
    char OperationalHaltAction;
} OperationalHaltMessageT;

/*
 * Structure: Mwcb Status Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char BreachedLevel;
} MwcbStatusMessageT;

/*
 * Structure: Mwcb Decline Level Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t Level1;
    uint64_t Level2;
    uint64_t Level3;
} MwcbDeclineLevelMessageT;

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
   Version: 2.1
   Date: Thursday, May 3, 2018
   Specification: PSXbboSpecification2.1.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
