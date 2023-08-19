/*******************************************************************************
 * C Structs For Nasdaq Equities Itch Level2 2.0 Binary Model
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
#define ENUM_ETP_FLAG_NOT_AVAILABLE ' '

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES 'O'
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
#define ENUM_FINANCIAL_STATUS_INDICATOR_IN_COMPLIANCE ' '

/*
 * Interest Flag Values
 */ 
#define ENUM_INTEREST_FLAG_BUY_SIDE_RPI_ORDERS_AVAILABLE 'B'
#define ENUM_INTEREST_FLAG_SELL_SIDE_RPI_ORDERS_AVAILABLE 'S'
#define ENUM_INTEREST_FLAG_BOTH_SIDES_RPI_ORDERS_AVAILABLE 'A'
#define ENUM_INTEREST_FLAG_NO_RPI_ORDERS_AVAILABLE 'N'

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
#define ENUM_LULD_REFERENCE_PRICE_TIER_NOT_AVAILABLE ' '

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
 * Market Code Values
 */ 
#define ENUM_MARKET_CODE_NASDAQ 'Q'
#define ENUM_MARKET_CODE_BX 'B'
#define ENUM_MARKET_CODE_PSX 'X'

/*
 * Market Maker Mode Values
 */ 
#define ENUM_MARKET_MAKER_MODE_NORMAL 'N'
#define ENUM_MARKET_MAKER_MODE_PASSIVE 'P'
#define ENUM_MARKET_MAKER_MODE_SYNDICATE 'S'
#define ENUM_MARKET_MAKER_MODE_PRE_SYNDICATE 'R'
#define ENUM_MARKET_MAKER_MODE_PENALTY 'L'

/*
 * Market Participant State Values
 */ 
#define ENUM_MARKET_PARTICIPANT_STATE_ACTIVE 'A'
#define ENUM_MARKET_PARTICIPANT_STATE_EXCUSED 'E'
#define ENUM_MARKET_PARTICIPANT_STATE_WITHDRAWN 'W'
#define ENUM_MARKET_PARTICIPANT_STATE_SUSPENDED 'S'
#define ENUM_MARKET_PARTICIPANT_STATE_DELETED 'D'

/*
 * Market Side Values
 */ 
#define ENUM_MARKET_SIDE_BID_UPDATE 'B'
#define ENUM_MARKET_SIDE_OFFER_ASK_UPDATE 'S'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_STOCK_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_REG_SHO_RESTRICTION_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_PARTICIPANT_POSITION_SUMMARY_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_OPERATIONAL_HALT_MESSAGE 'h'
#define ENUM_MESSAGE_TYPE_MARKET_PARTICIPANT_BIDASK_UPDATE_MESSAGE 'U'
#define ENUM_MESSAGE_TYPE_RETAIL_PRICE_INTEREST_INDICATOR_MESSAGE 'N'
#define ENUM_MESSAGE_TYPE_MWCB_DECLINE_LEVEL_MESSAGE 'V'
#define ENUM_MESSAGE_TYPE_MWCB_STATUS_MESSAGE 'W'
#define ENUM_MESSAGE_TYPE_IPO_QUOTING_PERIOD_UPDATE_MESSAGE 'K'

/*
 * Operational Halt Action Values
 */ 
#define ENUM_OPERATIONAL_HALT_ACTION_TRADING_HALTED 'H'
#define ENUM_OPERATIONAL_HALT_ACTION_TRADING_RESUMED 'T'

/*
 * Primary Market Maker Values
 */ 
#define ENUM_PRIMARY_MARKET_MAKER_PRIMARY 'Y'
#define ENUM_PRIMARY_MARKET_MAKER_NON_PRIMARY 'N'

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
    char IpoPrice[10];
} IpoQuotingPeriodUpdateMessageT;

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
 * Structure: Retail Price Interest Indicator Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char InterestFlag;
} RetailPriceInterestIndicatorMessageT;

/*
 * Structure: Market Participant Bidask Update Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char MarketSide;
    uint32_t ParticipantShares;
    char Stock[8];
    uint32_t Price;
    char Mpid[4];
} MarketParticipantBidaskUpdateMessageT;

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
 * Structure: Participant Position Summary Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Mpid[4];
    char Stock[8];
    char PrimaryMarketMaker;
    char MarketMakerMode;
    char MarketParticipantState;
} ParticipantPositionSummaryMessageT;

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
    char TradingActionReason[4];
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
    char IssueClassification;
    char IssueSubtype[2];
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
   Version: 2.0
   Date: Thursday, May 3, 2018
   Specification: Level2Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
