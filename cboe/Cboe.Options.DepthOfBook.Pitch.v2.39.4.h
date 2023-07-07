/*******************************************************************************
 * C Structs For Cboe Options Pitch DepthOfBook 2.39.4 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_OPENING 'O'
#define ENUM_AUCTION_TYPE_CLOSING 'C'
#define ENUM_AUCTION_TYPE_HALT 'H'
#define ENUM_AUCTION_TYPE_IPO 'I'
#define ENUM_AUCTION_TYPE_CLOSE 'M'
#define ENUM_AUCTION_TYPE_SUM 'T'
#define ENUM_AUCTION_TYPE_BAM 'B'

/*
 * Customer Indicator Values
 */ 
#define ENUM_CUSTOMER_INDICATOR_NON_CUSTOMER 'N'
#define ENUM_CUSTOMER_INDICATOR_CUSTOMER 'C'

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
#define ENUM_MESSAGE_TYPE_END_OF_SESSION_MESSAGE 0x2D
#define ENUM_MESSAGE_TYPE_SYMBOL_MAPPING_MESSAGE 0x2E
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE 0x31
#define ENUM_MESSAGE_TYPE_AUCTION_UPDATE_MESSAGE 0x95
#define ENUM_MESSAGE_TYPE_AUCTION_SUMMARY_MESSAGE 0x96
#define ENUM_MESSAGE_TYPE_AUCTION_NOTIFICATION_MESSAGE 0xAD
#define ENUM_MESSAGE_TYPE_AUCTION_CANCEL_MESSAGE 0xAE
#define ENUM_MESSAGE_TYPE_AUCTION_TRADE_MESSAGE 0xAF
#define ENUM_MESSAGE_TYPE_RETAIL_PRICE_IMPROVEMENT_MESSAGE 0x98

/*
 * Reg Sho Action Values
 */ 
#define ENUM_REG_SHO_ACTION_NO_PRICE_TEST_IN_EFFECT '0'
#define ENUM_REG_SHO_ACTION_REG_SHO_PRICE_TEST_RESTRICTION_IN_EFFECT '1'

/*
 * Retail Price Improvement Values
 */ 
#define ENUM_RETAIL_PRICE_IMPROVEMENT_BUY_SIDE 'B'
#define ENUM_RETAIL_PRICE_IMPROVEMENT_SELL_SIDE 'S'
#define ENUM_RETAIL_PRICE_IMPROVEMENT_BUY_AND_SELL 'A'
#define ENUM_RETAIL_PRICE_IMPROVEMENT_NO_RPI 'N'

/*
 * Side Indicator Values
 */ 
#define ENUM_SIDE_INDICATOR_BUY_ORDER 'B'
#define ENUM_SIDE_INDICATOR_SELL_ORDER 'S'

/*
 * Symbol Condition Values
 */ 
#define ENUM_SYMBOL_CONDITION_NORMAL 'N'
#define ENUM_SYMBOL_CONDITION_CLOSING_ONLY 'C'

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_NORMAL_TRADE ' '
#define ENUM_TRADE_CONDITION_SPREAD_TRADE 'S'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_ACCEPTING_ORDERS 'A'
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
    char ExpandedSymbol[8];
    char RetailPriceImprovement;
} RetailPriceImprovementMessageT;

/*
 * Structure: Auction Trade Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
    uint64_t ExecutionId;
    uint64_t LongPrice;
    uint32_t Contracts;
} AuctionTradeMessageT;

/*
 * Structure: Auction Cancel Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
} AuctionCancelMessageT;

/*
 * Structure: Auction Notification Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol[6];
    uint64_t AuctionId;
    char AuctionType;
    char SideIndicator;
    uint64_t LongPrice;
    uint32_t Contracts;
    char CustomerIndicator;
    char ParticipantId[4];
    uint32_t AuctionEndOffset;
} AuctionNotificationMessageT;

/*
 * Structure: Auction Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char StockSymbol[8];
    char AuctionType;
    uint64_t LongPrice;
    uint32_t Shares;
} AuctionSummaryMessageT;

/*
 * Structure: Auction Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char StockSymbol[8];
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
    char ExpandedSymbol[8];
    char TradingStatus;
    char RegShoAction;
    char Reserved1[1];
    char Reserved2[1];
} TradingStatusMessageT;

/*
 * Structure: Symbol Mapping Message
 */ 
typedef struct {
    char FeedSymbol[6];
    char OsiSymbol[21];
    char SymbolCondition;
} SymbolMappingMessageT;

/*
 * Structure: End Of Session Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} EndOfSessionMessageT;

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
    uint32_t LongQuantity;
    char ExpandedSymbol[8];
    uint64_t LongPrice;
    uint64_t ExecutionId;
    char TradeCondition;
} TradeExpandedMessageT;

/*
 * Structure: Trade Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t ShortQuantity;
    char Symbol[6];
    uint16_t ShortPrice;
    uint64_t ExecutionId;
    char TradeCondition;
} TradeShortMessageT;

/*
 * Structure: Trade Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t LongQuantity;
    char Symbol[6];
    uint64_t LongPrice;
    uint64_t ExecutionId;
    char TradeCondition;
} TradeLongMessageT;

/*
 * Structure: Delete Order Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
} DeleteOrderMessageT;

/*
 * Bitfield: Modify Flags
 */ 
typedef struct {
    uint8_t
    Reserved6 : 6,
    MaintainPriority : 1,
    Display : 1;
} ModifyFlagsT;

/*
 * Structure: Modify Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t ShortQuantity;
    uint16_t ShortPrice;
    ModifyFlagsT ModifyFlags;
} ModifyOrderShortMessageT;

/*
 * Structure: Modify Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t LongQuantity;
    uint64_t LongPrice;
    ModifyFlagsT ModifyFlags;
} ModifyOrderLongMessageT;

/*
 * Structure: Reduce Size Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t CanceledShortQuantity;
} ReduceSizeShortMessageT;

/*
 * Structure: Reduce Size Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t CanceledLongQuantity;
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
    uint64_t LongPrice;
    char TradeCondition;
} OrderExecutedAtPriceSizeMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t ExecutedQuantity;
    uint64_t ExecutionId;
    char TradeCondition;
} OrderExecutedMessageT;

/*
 * Bitfield: Add Flags
 */ 
typedef struct {
    uint8_t
    Reserved7 : 7,
    Display : 1;
} AddFlagsT;

/*
 * Structure: Add Order Expanded Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t LongQuantity;
    char ExpandedSymbol[8];
    uint64_t LongPrice;
    AddFlagsT AddFlags;
    char ParticipantId[4];
    char CustomerIndicator;
} AddOrderExpandedMessageT;

/*
 * Structure: Add Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t ShortQuantity;
    char Symbol[6];
    uint16_t ShortPrice;
    AddFlagsT AddFlags;
} AddOrderShortMessageT;

/*
 * Structure: Add Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t LongQuantity;
    char Symbol[6];
    uint64_t LongPrice;
    AddFlagsT AddFlags;
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
   Version: 2.39.4
   Date: Tuesday, August 21, 2018
   Specification: BATS_US_EQUITIES_OPTIONS_MULTICAST_PITCH_SPECIFICATION.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
