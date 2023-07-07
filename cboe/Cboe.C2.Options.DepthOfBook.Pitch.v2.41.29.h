/*******************************************************************************
 * C Structs For Cboe C2 Options Pitch DepthOfBook 2.41.29 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_HALT_RE_OPENING 'H'
#define ENUM_AUCTION_TYPE_VOLITILITY_OPENING 'V'
#define ENUM_AUCTION_TYPE_CLOSING_AUCTION 'C'
#define ENUM_AUCTION_TYPE_HALT_AUCTION 'H'
#define ENUM_AUCTION_TYPE_IPO_AUCTION 'I'
#define ENUM_AUCTION_TYPE_CBOE_MARKET_CLOSE 'M'

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
#define ENUM_MESSAGE_TYPE_TRANSACTION_BEGIN 0xBC
#define ENUM_MESSAGE_TYPE_TRANSACTION_END 0xBD
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
#define ENUM_MESSAGE_TYPE_SYMBOL_MAPPING_MESSAGE 0x2E
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE 0x31
#define ENUM_MESSAGE_TYPE_WIDTH_UPDATE 0xD2
#define ENUM_MESSAGE_TYPE_AUCTION_UPDATE_MESSAGE 0xD1
#define ENUM_MESSAGE_TYPE_AUCTION_SUMMARY_MESSAGE 0x96

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
#define ENUM_TRADE_CONDITION_SINGLE_LEG_AUCTION_NON_ISO 'a'
#define ENUM_TRADE_CONDITION_SINGLE_LEG_AUCTION_ISO 'b'
#define ENUM_TRADE_CONDITION_SINGLE_LEG_CROSS_NON_ISO 'c'
#define ENUM_TRADE_CONDITION_SINGLE_LEG_CROSS_ISO 'd'
#define ENUM_TRADE_CONDITION_SINGLE_LEG_FLOOR_TRADE 'e'
#define ENUM_TRADE_CONDITION_COMPLEX_TO_COMPLEX_ELECTRONIC_TRADE 'f'
#define ENUM_TRADE_CONDITION_COMPLEX_AUCTION_TRADE 'g'
#define ENUM_TRADE_CONDITION_COMPLEX_CROSS 'h'
#define ENUM_TRADE_CONDITION_COMPLEX_ELECTRONIC_TRADE_AGAINST_SINGLE_LEGS 'j'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_OPTIONS_AUCTION_TRADE 'k'
#define ENUM_TRADE_CONDITION_COMPLEX_FLOOR_TRADE_AGAINST_SINGLE_LEGS 'm'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_ELECTRONIC_TRADE 'n'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_CROSS 'o'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_FLOOR_TRADE 'p'
#define ENUM_TRADE_CONDITION_COMPLEX_FLOOR_TRADE_OF_PROPRIETARY_PRODUCTS_MARKED_AS_COMBO_ORDER 't'
#define ENUM_TRADE_CONDITION_MULTILATERAL_COMPRESSION_TRADE_OF_PROPRIETARY_PRODUCTS 'u'
#define ENUM_TRADE_CONDITION_EXTENDED_HOURS_TRADE 'v'
#define ENUM_TRADE_CONDITION_ELECTRONIC_TRADE 'I'
#define ENUM_TRADE_CONDITION_CABINET_ORDER 'K'
#define ENUM_TRADE_CONDITION_OPENING_TRADE 'O'
#define ENUM_TRADE_CONDITION_ISO 'S'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_HALTED 'H'
#define ENUM_TRADING_STATUS_CURB_TRADING 'L'
#define ENUM_TRADING_STATUS_QUOTE_ONLY 'Q'
#define ENUM_TRADING_STATUS_OPENING_ROTATION 'R'
#define ENUM_TRADING_STATUS_RTH_TRADING 'T'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Auction Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolExtended[8];
    char AuctionSummaryType[1];
    uint64_t Price;
    uint32_t SharesContracts;
} AuctionSummaryMessageT;

/*
 * Structure: Auction Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolExtended[8];
    char AuctionType;
    uint64_t ReferencePrice;
    uint32_t BuyContracts;
    uint32_t SellContracts;
    uint64_t IndicativePrice;
    uint64_t AuctionOnlyPrice;
    char OpeningCondition[1];
    uint64_t CompositeMarketBidPrice;
    uint64_t CompositeMarketOfferPrice;
} AuctionUpdateMessageT;

/*
 * Structure: Width Update
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Underlying[8];
    char WidthType[1];
    uint32_t Multiplier;
} WidthUpdateT;

/*
 * Structure: Trading Status Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol[6];
    char Reserved2[2];
    char TradingStatus;
    char Reserved3[3];
} TradingStatusMessageT;

/*
 * Structure: Symbol Mapping Message
 */ 
typedef struct {
    char FeedSymbol[6];
    char OsiSymbol[21];
    char SymbolCondition;
    char Underlying[8];
} SymbolMappingMessageT;

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
    char SymbolExtended[8];
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
    char Symbol[6];
    uint16_t PriceShort;
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
    uint32_t Quantity;
    char Symbol[6];
    uint64_t Price;
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
 * Bitfield: Add Order Flags
 */ 
typedef struct {
    uint8_t
    ReservedFlags : 4,
    Aon : 1,
    ReservedBit2 : 1,
    ReservedBit1 : 1,
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
    char SymbolExtended[8];
    uint64_t Price;
    AddOrderFlagsT AddOrderFlags;
    char ParticipantId[4];
    char CustomerIndicator;
    char ClientId[4];
} AddOrderExpandedMessageT;

/*
 * Structure: Add Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t QuantityShort;
    char Symbol[6];
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
    char Symbol[6];
    uint64_t Price;
    AddOrderFlagsT AddOrderFlags;
} AddOrderLongMessageT;

/*
 * Structure: Transaction End
 */ 
typedef struct {
    uint32_t TimeOffset;
} TransactionEndT;

/*
 * Structure: Transaction Begin
 */ 
typedef struct {
    uint32_t TimeOffset;
} TransactionBeginT;

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
   Version: 2.41.29
   Date: Wednesday, April 20, 2022
   Specification: US_EQUITIES_OPTIONS_MULTICAST_PITCH_SPECIFICATION.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
