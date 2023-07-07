/*******************************************************************************
 * C Structs For Nasdaq Equities Itch TotalView 4.1 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_OPENING 'O'
#define ENUM_CROSS_TYPE_CLOSING 'C'
#define ENUM_CROSS_TYPE_CROSS_FOR_IPO_AND_HALTED 'H'
#define ENUM_CROSS_TYPE_NASDAQ_CROSS_NETWORK 'I'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS 'S'
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS 'Q'
#define ENUM_EVENT_CODE_END_OF_MARKET_HOURS 'M'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGE 'C'
#define ENUM_EVENT_CODE_HALT 'A'
#define ENUM_EVENT_CODE_QUOTE_ONLY_PERIOD 'R'
#define ENUM_EVENT_CODE_RESUMPTION 'B'

/*
 * Financial Status Indicator Values
 */ 
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT 'D'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT 'E'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT 'Q'
#define ENUM_FINANCIAL_STATUS_INDICATOR_SUSPENDED 'S'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_BANKRUPT 'G'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_DELINQUENT 'H'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT_AND_BANKRUPT 'J'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_DELINQUENT_AND_BANKRUPT 'K'

/*
 * Imbalance Direction Values
 */ 
#define ENUM_IMBALANCE_DIRECTION_BUY 'B'
#define ENUM_IMBALANCE_DIRECTION_SELL 'S'
#define ENUM_IMBALANCE_DIRECTION_NO 'N'
#define ENUM_IMBALANCE_DIRECTION_INSUFFICIENT_ORDERS 'O'

/*
 * Interest Flag Values
 */ 
#define ENUM_INTEREST_FLAG_RPI_BUY 'B'
#define ENUM_INTEREST_FLAG_RPI_SELL 'S'
#define ENUM_INTEREST_FLAG_RPI_BOTH 'A'
#define ENUM_INTEREST_FLAG_NO_RPI 'N'

/*
 * Market Category Values
 */ 
#define ENUM_MARKET_CATEGORY_NYSE 'N'
#define ENUM_MARKET_CATEGORY_AMEX 'A'
#define ENUM_MARKET_CATEGORY_ARCA 'P'
#define ENUM_MARKET_CATEGORY_NASDAQ_GSM 'Q'
#define ENUM_MARKET_CATEGORY_NASDAQ_GM 'G'
#define ENUM_MARKET_CATEGORY_NASDAQ_CM 'S'
#define ENUM_MARKET_CATEGORY_BATS 'Z'

/*
 * Market Maker Mode Values
 */ 
#define ENUM_MARKET_MAKER_MODE_NORMAL 'N'
#define ENUM_MARKET_MAKER_MODE_PASSIVE 'P'
#define ENUM_MARKET_MAKER_MODE_SYNDICATE 'S'
#define ENUM_MARKET_MAKER_MODE_PENALTY 'L'

/*
 * Market Participant State Values
 */ 
#define ENUM_MARKET_PARTICIPANT_STATE_ACTIVE 'A'
#define ENUM_MARKET_PARTICIPANT_STATE_EXCUSED_WITHDRAWN 'E'
#define ENUM_MARKET_PARTICIPANT_STATE_WITHDRAWN 'W'
#define ENUM_MARKET_PARTICIPANT_STATE_SUSPENDED 'S'
#define ENUM_MARKET_PARTICIPANT_STATE_DELETED 'D'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_STAMP_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTED_INDICATOR_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_MARKET_PARTICIPANT_POSITION_MESSAGE 'L'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_WITH_MPID_MESSAGE 'F'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 'E'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_WITH_PRICE_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_ORDER_CANCEL_MESSAGE 'X'
#define ENUM_MESSAGE_TYPE_ORDER_DELETE_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_ORDER_REPLACE_MESSAGE 'U'
#define ENUM_MESSAGE_TYPE_TRADE_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_CROSS_TRADE_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_NET_ORDER_IMBALANCE_INDICATOR_MESSAGE 'I'
#define ENUM_MESSAGE_TYPE_RETAIL_PRICE_IMPROVEMENT_INDICATOR_MESSAGE 'N'

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
#define ENUM_PRIMARY_MARKET_MAKER_NONPRIMARY 'N'

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_NONPRINTABLE 'N'
#define ENUM_PRINTABLE_PRINTABLE 'Y'

/*
 * Reg Sho Action Values
 */ 
#define ENUM_REG_SHO_ACTION_NO_PRICE '0'
#define ENUM_REG_SHO_ACTION_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTION '1'
#define ENUM_REG_SHO_ACTION_REG_SHO_SHORT_SALE_PRICE_TEST '2'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 'B'
#define ENUM_SIDE_SELL 'S'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Retail Price Improvement Indicator Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char Stock[8];
    char InterestFlag;
} RetailPriceImprovementIndicatorMessageT;

/*
 * Structure: Net Order Imbalance Indicator Message
 */ 
typedef struct {
    uint32_t Timestamp;
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
    uint32_t Timestamp;
    uint64_t MatchNumber;
} BrokenTradeMessageT;

/*
 * Structure: Cross Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t CrossShares;
    char Stock[8];
    uint32_t CrossPrice;
    uint64_t MatchNumber;
    char CrossType;
} CrossTradeMessageT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    char Side;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
    uint64_t MatchNumber;
} TradeMessageT;

/*
 * Structure: Order Replace Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OriginalOrderReferenceNumber;
    uint64_t NewOrderReferenceNumber;
    uint32_t Shares;
    uint32_t Price;
} OrderReplaceMessageT;

/*
 * Structure: Order Delete Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
} OrderDeleteMessageT;

/*
 * Structure: Order Cancel Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t CanceledShares;
} OrderCancelMessageT;

/*
 * Structure: Order Executed With Price Message
 */ 
typedef struct {
    uint32_t Timestamp;
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
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t ExecutedShares;
    uint64_t MatchNumber;
} OrderExecutedMessageT;

/*
 * Structure: Add Order With Mpid Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    char Side;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
    char Attribution[4];
} AddOrderWithMpidMessageT;

/*
 * Structure: Add Order Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    char Side;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
} AddOrderMessageT;

/*
 * Structure: Market Participant Position Message
 */ 
typedef struct {
    uint32_t Timestamp;
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
    uint32_t Timestamp;
    char Stock[8];
    char RegShoAction;
} RegShoShortSalePriceTestRestrictedIndicatorMessageT;

/*
 * Structure: Stock Directory Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char Stock[8];
    char MarketCategory;
    char FinancialStatusIndicator;
} StockDirectoryMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char EventCode;
} SystemEventMessageT;

/*
 * Structure: Time Stamp Message
 */ 
typedef struct {
    uint32_t Second;
} TimeStampMessageT;

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
   Version: 4.1
   Date: Thursday, June 12, 2014
   Specification: NQTV-ITCH-V4_1.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
