/*******************************************************************************
 * C Structs For Nasdaq Equities Itch TotalView 5.0 Binary Model
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
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL 'S'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_OPENING_CROSS 'O'
#define ENUM_CROSS_TYPE_CLOSING_CROSS 'C'
#define ENUM_CROSS_TYPE_CROSS_HALTED_OR_PAUSED 'H'
#define ENUM_CROSS_TYPE_INTRADAY_CROSS_AND_POST_CLOSE_CROSS 'I'

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
#define ENUM_FINANCIAL_STATUS_INDICATOR_NA ' '

/*
 * Imbalance Direction Values
 */ 
#define ENUM_IMBALANCE_DIRECTION_BUY 'B'
#define ENUM_IMBALANCE_DIRECTION_SELL 'S'
#define ENUM_IMBALANCE_DIRECTION_NO_IMBALANCE 'N'
#define ENUM_IMBALANCE_DIRECTION_INSUFFICIENT_ORDERS 'O'

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
#define ENUM_IPO_FLAG_SET_UP_FOR_IPO_REALEASE 'Y'
#define ENUM_IPO_FLAG_NOT_SET_UP_FOR_IPO_REALEASE 'N'
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
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_STOCK_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTED_INDICATOR_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_MARKET_PARTICIPANT_POSITION_MESSAGE 'L'
#define ENUM_MESSAGE_TYPE_MWCB_DECLINE_LEVEL_MESSAGE 'V'
#define ENUM_MESSAGE_TYPE_MWCB_STATUS_LEVEL_MESSAGE 'W'
#define ENUM_MESSAGE_TYPE_IPO_QUOTING_PERIOD_UPDATE 'K'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_NO_MPID_ATTRIBUTION_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_LULD_AUCTION_COLLAR_MESSAGE 'J'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_WITH_MPID_ATTRIBUTION_MESSAGE 'F'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 'E'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_WITH_PRICE_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_ORDER_CANCEL_MESSAGE 'X'
#define ENUM_MESSAGE_TYPE_ORDER_DELETE_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_ORDER_REPLACE_MESSAGE 'U'
#define ENUM_MESSAGE_TYPE_NON_CROSS_TRADE_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_CROSS_TRADE_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_NET_ORDER_IMBALANCE_INDICATOR_MESSAGE 'I'
#define ENUM_MESSAGE_TYPE_RETAIL_INTEREST_MESSAGE 'N'

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
#define ENUM_PRICE_VARIATION_INDICATOR_NO_CALCULATION ' '

/*
 * Primary Market Maker Values
 */ 
#define ENUM_PRIMARY_MARKET_MAKER_PRIMARY 'Y'
#define ENUM_PRIMARY_MARKET_MAKER_NON_PRIMARY 'N'

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_NON_PRINTABLE 'N'
#define ENUM_PRINTABLE_PRINTABLE 'Y'

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

/*
 * Trading State Values
 */ 
#define ENUM_TRADING_STATE_HALTED 'H'
#define ENUM_TRADING_STATE_PAUSED 'P'
#define ENUM_TRADING_STATE_QUOTATION_ONLY_PERIOD 'Q'
#define ENUM_TRADING_STATE_TRADING 'T'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Retail Interest Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char InterestFlag;
} RetailInterestMessageT;

/*
 * Structure: Net Order Imbalance Indicator Message
 */ 
typedef struct {
    uint16_t StockLocate;
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
} NetOrderImbalanceIndicatorMessageT;

/*
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t MatchNumber;
} BrokenTradeMessageT;

/*
 * Structure: Cross Trade Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t CrossShares;
    char Stock[8];
    uint32_t CrossPrice;
    uint64_t MatchNumber;
    char CrossType;
} CrossTradeMessageT;

/*
 * Structure: Non Cross Trade Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    char BuySellIndicator;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
    uint64_t MatchNumber;
} NonCrossTradeMessageT;

/*
 * Structure: Order Replace Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OriginalOrderReferenceNumber;
    uint64_t NewOrderReferenceNumber;
    uint32_t Shares;
    uint32_t Price;
} OrderReplaceMessageT;

/*
 * Structure: Order Delete Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
} OrderDeleteMessageT;

/*
 * Structure: Order Cancel Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t CanceledShares;
} OrderCancelMessageT;

/*
 * Structure: Order Executed With Price Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t ExecutedShares;
    uint64_t MatchNumber;
    char Printable;
    uint32_t ExecutionPrice;
} OrderExecutedWithPriceMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t ExecutedShares;
    uint64_t MatchNumber;
} OrderExecutedMessageT;

/*
 * Structure: Add Order With Mpid Attribution Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    char BuySellIndicator;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
    char Attribution[4];
} AddOrderWithMpidAttributionMessageT;

/*
 * Structure: Luld Auction Collar Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    uint32_t AuctionCollarReferencePrice;
    uint32_t UpperAuctionCollarPrice;
    uint32_t LowerAuctionCollarPrice;
    uint32_t AuctionCollarExtension;
} LuldAuctionCollarMessageT;

/*
 * Structure: Add Order No Mpid Attribution Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    char BuySellIndicator;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
} AddOrderNoMpidAttributionMessageT;

/*
 * Structure: Ipo Quoting Period Update
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    uint32_t IpoQuotationReleaseTime;
    char IpoQuotationReleaseQualifier;
    uint32_t IpoPrice;
} IpoQuotingPeriodUpdateT;

/*
 * Structure: Mwcb Status Level Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char BreachedLevel;
} MwcbStatusLevelMessageT;

/*
 * Structure: Mwcb Decline Level Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t Level1;
    uint64_t Level2;
    uint64_t Level3;
} MwcbDeclineLevelMessageT;

/*
 * Structure: Market Participant Position Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Mpid[4];
    char Stock[8];
    char PrimaryMarketMaker;
    char MarketMakerMode;
    char MarketParticipantState;
} MarketParticipantPositionMessageT;

/*
 * Structure: Reg Sho Short Sale Price Test Restricted Indicator Message
 */ 
typedef struct {
    uint16_t LocateCode;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char RegShoAction;
} RegShoShortSalePriceTestRestrictedIndicatorMessageT;

/*
 * Structure: Stock Trading Action Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char TradingState;
    char Reserved[1];
    char Reason[4];
} StockTradingActionMessageT;

/*
 * Structure: Stock Directory Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
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
    uint16_t StockLocate;
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
   Version: 5.0
   Date: Tuesday, September 12, 2017
   Specification: NQTVITCHSpecification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
