/*******************************************************************************
 * C Structs For Jnx Equities Itch Pts 1.7 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL 'S'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIMESTAMP_SECONDS_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_PRICE_TICK_SIZE_MESSAGE 'L'
#define ENUM_MESSAGE_TYPE_ORDERBOOK_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_TRADING_STATE_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_SHORT_SELLING_PRICE_RESTRICTION_STATE_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_ORDER_ADDED_WITHOUT_ATTRIBUTES_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_ORDER_ADDED_WITH_ATTRIBUTES_MESSAGE 'F'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 'E'
#define ENUM_MESSAGE_TYPE_ORDER_DELETED_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_ORDER_REPLACED_MESSAGE 'U'

/*
 * Order Type Values
 */ 
#define ENUM_ORDER_TYPE_DLP_ORDER 'Q'

/*
 * Short Selling State Values
 */ 
#define ENUM_SHORT_SELLING_STATE_NO_PRICE_RESTRICTION '0'
#define ENUM_SHORT_SELLING_STATE_PRICE_RESTRICTION_IN_EFFECT '1'

/*
 * Trading State Values
 */ 
#define ENUM_TRADING_STATE_TRADING 'T'
#define ENUM_TRADING_STATE_SUSPENDED 'V'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Order Replaced Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OriginalOrderNumber;
    uint64_t NewOrderNumber;
    uint32_t Quantity;
    uint32_t Price;
} OrderReplacedMessageT;

/*
 * Structure: Order Deleted Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OrderNumber;
} OrderDeletedMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OrderNumber;
    uint32_t ExecutedQuantity;
    uint64_t MatchNumber;
} OrderExecutedMessageT;

/*
 * Structure: Order Added With Attributes Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OrderNumber;
    char BuySellIndicator;
    uint32_t Quantity;
    char OrderbookId[4];
    char Group[4];
    uint32_t Price;
    char Attribution[4];
    char OrderType;
} OrderAddedWithAttributesMessageT;

/*
 * Structure: Order Added Without Attributes Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OrderNumber;
    char BuySellIndicator;
    uint32_t Quantity;
    char OrderbookId[4];
    char Group[4];
    uint32_t Price;
} OrderAddedWithoutAttributesMessageT;

/*
 * Structure: Short Selling Price Restriction State Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    char OrderbookId[4];
    char Group[4];
    char ShortSellingState;
} ShortSellingPriceRestrictionStateMessageT;

/*
 * Structure: Trading State Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    char OrderbookId[4];
    char Group[4];
    char TradingState;
} TradingStateMessageT;

/*
 * Structure: Orderbook Directory Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    char OrderbookId[4];
    char OrderbookCode[12];
    char Group[4];
    uint32_t RoundLotSize;
    uint32_t PriceTickSizeTableId;
    uint32_t PriceDecimals;
    uint32_t UpperPriceLimit;
    uint32_t LowerPriceLimit;
} OrderbookDirectoryMessageT;

/*
 * Structure: Price Tick Size Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint32_t PriceTickSizeTableId;
    uint32_t PriceTickSize;
    uint32_t PriceStart;
} PriceTickSizeMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    char Group[4];
    char SystemEvent[1];
} SystemEventMessageT;

/*
 * Structure: Timestamp Seconds Message
 */ 
typedef struct {
    uint32_t TimestampSeconds;
} TimestampSecondsMessageT;

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
   Organization: Japannext
   Version: 1.7
   Date: Wednesday, November 1, 2023
   Specification: Japannext_PTS_ITCH_Equities_v1.7.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
