/*******************************************************************************
 * C Structs For Cboe Byx Equities Pitch TopOfBook 1.3.2 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_OPENING_AUCTION 'O'
#define ENUM_AUCTION_TYPE_CLOSING_AUCTION 'C'
#define ENUM_AUCTION_TYPE_HALT_AUCTION 'H'
#define ENUM_AUCTION_TYPE_IPO_AUCTION 'I'
#define ENUM_AUCTION_TYPE_CBOE_MARKET_CLOSE 'M'
#define ENUM_AUCTION_TYPE_VOLITILITY_AUCTION 'V'
#define ENUM_AUCTION_TYPE_PERIODIC_AUCTION 'P'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE 0x20
#define ENUM_MESSAGE_TYPE_UNIT_CLEAR_MESSAGE 0x97
#define ENUM_MESSAGE_TYPE_ADD_ORDER_LONG_MESSAGE 0x21
#define ENUM_MESSAGE_TYPE_ADD_ORDER_SHORT_MESSAGE 0x22
#define ENUM_MESSAGE_TYPE_ADD_ORDER_EXPANDED_MESSAGE 0x2F
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 0x23
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_AT_PRICE_SIZE_MESSAGE 0x24
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_LONG_MESSAGE 0x25
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_SHORT_MESSAGE 0x26
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_LONG_MESSAGE 0x27
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_SHORT_MESSAGE 0x28
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE 0x29
#define ENUM_MESSAGE_TYPE_TRADE_LONG_MESSAGE 0x2A
#define ENUM_MESSAGE_TYPE_TRADE_SHORT_MESSAGE 0x2B
#define ENUM_MESSAGE_TYPE_TRADE_EXPANDED_MESSAGE 0x30
#define ENUM_MESSAGE_TYPE_TRADE_BREAK_MESSAGE 0x2C
#define ENUM_MESSAGE_TYPE_END_OF_SESSION 0x2D
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE 0x31
#define ENUM_MESSAGE_TYPE_AUCTION_UPDATE_MESSAGE 0x95
#define ENUM_MESSAGE_TYPE_AUCTION_SUMMARY_MESSAGE 0x96
#define ENUM_MESSAGE_TYPE_RETAIL_PRICE_IMPROVEMENT_MESSAGE 0x98

/*
 * Reg Sho Action Values
 */ 
#define ENUM_REG_SHO_ACTION_NO_PRICE_TEST_IN_EFFECT '0'
#define ENUM_REG_SHO_ACTION_REG_SHO_PRICE_TEST_RESTRICTION_IN_EFFECT '1'

/*
 * Retail Price Improvement Values
 */ 
#define ENUM_RETAIL_PRICE_IMPROVEMENT_BUY_SIDE_RPI 'B'
#define ENUM_RETAIL_PRICE_IMPROVEMENT_SELL_SIDE_RPI 'S'
#define ENUM_RETAIL_PRICE_IMPROVEMENT_BUY_AND_SELL_RPI 'A'
#define ENUM_RETAIL_PRICE_IMPROVEMENT_NO_RPI 'N'

/*
 * Side Indicator Values
 */ 
#define ENUM_SIDE_INDICATOR_BUY_ORDER 'B'
#define ENUM_SIDE_INDICATOR_SELL_ORDER 'S'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_ACCEPTING_ORDERS_FOR_QUEUING 'A'
#define ENUM_TRADING_STATUS_HALTED 'H'
#define ENUM_TRADING_STATUS_QUOTE_ONLY 'Q'
#define ENUM_TRADING_STATUS_EXCHANGE_SPECIFIC_SUSPENSION 'S'
#define ENUM_TRADING_STATUS_TRADING 'T'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Retail Price Improvement Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolPrintableAscii8[8];
    char RetailPriceImprovement;
} RetailPriceImprovementMessageT;

/*
 * Structure: Auction Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolPrintableAscii8[8];
    char AuctionOpeningType[1];
    uint64_t Price;
    uint32_t SharesContracts;
} AuctionSummaryMessageT;

/*
 * Structure: Auction Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolPrintableAscii8[8];
    char AuctionType;
    uint64_t ReferencePrice;
    uint32_t BuyShares;
    uint32_t SellShares;
    uint64_t IndicativePrice;
    uint64_t AuctionOnlyPrice;
} AuctionUpdateMessageT;

/*
 * Structure: Trading Status Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolPrintableAscii8[8];
    char TradingStatus;
    char RegShoAction;
    char Padding[2];
} TradingStatusMessageT;

/*
 * Structure: End Of Session
 */ 
typedef struct {
    uint32_t Timestamp;
} EndOfSessionT;

/*
 * Structure: Trade Break Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t ExecutionId;
} TradeBreakMessageT;

/*
 * Structure: Trade Expanded Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char SymbolPrintableAscii8[8];
    uint64_t Price;
    uint64_t ExecutionId;
} TradeExpandedMessageT;

/*
 * Structure: Trade Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t QuantityShort;
    char SymbolPrintableAscii6[6];
    uint16_t PriceShort;
    uint64_t ExecutionId;
} TradeShortMessageT;

/*
 * Structure: Trade Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char SymbolPrintableAscii6[6];
    uint64_t Price;
    uint64_t ExecutionId;
} TradeLongMessageT;

/*
 * Structure: Delete Order Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
} DeleteOrderMessageT;

/*
 * Structure: Modify Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t QuantityShort;
    uint16_t PriceShort;
    char ModifyOrderFlags[0];
} ModifyOrderShortMessageT;

/*
 * Structure: Modify Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t Quantity;
    uint64_t Price;
    char ModifyOrderFlags[0];
} ModifyOrderLongMessageT;

/*
 * Structure: Reduce Size Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t CanceledQuantityShort;
} ReduceSizeShortMessageT;

/*
 * Structure: Reduce Size Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t CanceledQuantity;
} ReduceSizeLongMessageT;

/*
 * Structure: Order Executed At Price Size Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t ExecutedQuantity;
    uint32_t RemainingQuantity;
    uint64_t ExecutionId;
    uint64_t Price;
} OrderExecutedAtPriceSizeMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t ExecutedQuantity;
    uint64_t ExecutionId;
} OrderExecutedMessageT;

/*
 * Bitfield: Add Order Flags
 */ 
typedef struct {
    uint8_t
    ReservedFlags : 7,
    Display : 1;
} AddOrderFlagsT;

/*
 * Structure: Add Order Expanded Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char SymbolPrintableAscii8[8];
    uint64_t Price;
    AddOrderFlagsT AddOrderFlags;
    char ParticipantId[4];
    char CustomerIndicator[1];
} AddOrderExpandedMessageT;

/*
 * Structure: Add Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t QuantityShort;
    char SymbolPrintableAscii6[6];
    uint16_t PriceShort;
    AddOrderFlagsT AddOrderFlags;
} AddOrderShortMessageT;

/*
 * Structure: Add Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char SymbolPrintableAscii6[6];
    uint64_t Price;
    AddOrderFlagsT AddOrderFlags;
} AddOrderLongMessageT;

/*
 * Structure: Unit Clear Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} UnitClearMessageT;

/*
 * Structure: Time Message
 */ 
typedef struct {
    uint32_t Time;
} TimeMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint8_t MessageLength;
    uint8_t MessageType;
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
    uint16_t Length;
    uint8_t Count;
    uint8_t Unit;
    uint32_t Sequence;
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
   Organization: Chicago Board Options Exchange
   Version: 1.3.2
   Date: Wednesday, July 14, 2021
   Specification: Cboe_US_Equities_TOP_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
