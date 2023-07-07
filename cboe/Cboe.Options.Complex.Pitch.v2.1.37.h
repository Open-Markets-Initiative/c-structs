/*******************************************************************************
 * C Structs For Cboe Options Pitch Complex 2.1.37 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Opening Type Values
 */ 
#define ENUM_AUCTION_OPENING_TYPE_GTH 'G'
#define ENUM_AUCTION_OPENING_TYPE_RTH 'O'
#define ENUM_AUCTION_OPENING_TYPE_HALT_REOPENING 'H'

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_COMPLEX_AUCTION 'C'
#define ENUM_AUCTION_TYPE_COMPLEX_SOLICITATION_AUCTION 'S'
#define ENUM_AUCTION_TYPE_COMPLEX_AIM 'B'

/*
 * Customer Indicator Values
 */ 
#define ENUM_CUSTOMER_INDICATOR_NON_CUSTOMER 'N'
#define ENUM_CUSTOMER_INDICATOR_CUSTOMER 'C'

/*
 * Gth Trading Status Values
 */ 
#define ENUM_GTH_TRADING_STATUS_HALTED 'H'
#define ENUM_GTH_TRADING_STATUS_QUOTE_ONLY 'Q'
#define ENUM_GTH_TRADING_STATUS_TRADING 'T'

/*
 * Leg Security Type Values
 */ 
#define ENUM_LEG_SECURITY_TYPE_OPTION 'O'
#define ENUM_LEG_SECURITY_TYPE_EQUITY 'E'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE 0x20
#define ENUM_MESSAGE_TYPE_UNIT_CLEAR_MESSAGE 0x97
#define ENUM_MESSAGE_TYPE_TRANSACTION_BEGIN 0xBC
#define ENUM_MESSAGE_TYPE_TRANSACTION_END_MESSAGE 0xBD
#define ENUM_MESSAGE_TYPE_COMPLEX_INSTRUMENT_DEFINITION_EXPANDED_MESSAGE 0x9A
#define ENUM_MESSAGE_TYPE_SYMBOL_MAPPING_MESSAGE 0x2E
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
#define ENUM_MESSAGE_TYPE_AUCTION_NOTIFICATION_MESSAGE 0xAD
#define ENUM_MESSAGE_TYPE_AUCTION_CANCEL_MESSAGE 0xAE
#define ENUM_MESSAGE_TYPE_AUCTION_TRADE_MESSAGE 0xAF
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE 0x31
#define ENUM_MESSAGE_TYPE_AUCTION_UPDATE_MESSAGE 0xD1
#define ENUM_MESSAGE_TYPE_AUCTION_SUMMARY_MESSAGE 0x96
#define ENUM_MESSAGE_TYPE_END_OF_SESSION_MESSAGE 0x2D

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
#define ENUM_TRADE_CONDITION_COMPLEX_TO_COMPLEX_ELECTRONIC_TRADE 'f'
#define ENUM_TRADE_CONDITION_COMPLEX_AUCTION_TRADE 'g'
#define ENUM_TRADE_CONDITION_COMPLEX 'h'
#define ENUM_TRADE_CONDITION_COMPLEX_ELECTRONIC_TRADE_AGAINST_SINGLE 'j'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_OPTIONS_AUCTION_TRADE 'k'
#define ENUM_TRADE_CONDITION_COMPLEX_FLOOR_TRADE_AGAINST_SINGLE_LEG 'm'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_ELECTRONIC_TRADE 'n'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_CROSS 'o'
#define ENUM_TRADE_CONDITION_ELECTRONIC_TRADE 'l'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_FLOOR_TRADE 'p'
#define ENUM_TRADE_CONDITION_COMPLEX_COMBO_ORDER_FLOOR_TRADE 't'
#define ENUM_TRADE_CONDITION_EXTENDED_HOURS_TRADE 'v'
#define ENUM_TRADE_CONDITION_ELECTRONIC_TRADE 'I'
#define ENUM_TRADE_CONDITION_OPENING_TRADE 'O'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_HALTED 'H'
#define ENUM_TRADING_STATUS_QUOTE_ONLY 'Q'
#define ENUM_TRADING_STATUS_RTH_TRADING 'T'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: End Of Session Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} EndOfSessionMessageT;

/*
 * Structure: Auction Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ComplexInstrumentId8[8];
    char AuctionOpeningType;
    int64_t Price;
    uint32_t Quantity;
} AuctionSummaryMessageT;

/*
 * Structure: Auction Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ComplexInstrumentId8[8];
    char AuctionOpeningType;
    uint64_t ReferencePrice;
    uint32_t BuyContracts;
    uint32_t SellContracts;
    int64_t IndicativePrice;
    int64_t AuctionOnlyPrice;
    char OpeningCondition[1];
    int64_t CompositeMarketBidPrice;
    int64_t CompositeMarketOfferPrice;
} AuctionUpdateMessageT;

/*
 * Structure: Trading Status Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ComplexSymbolId[6];
    char Unused[2];
    char TradingStatus;
    char Reserved[1];
    char GthTradingStatus;
    char Padding[1];
} TradingStatusMessageT;

/*
 * Structure: Auction Trade Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
    uint64_t ExecutionId;
    int64_t Price;
    uint32_t Quantity;
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
    char ComplexInstrumentId[6];
    uint64_t AuctionId;
    char AuctionType;
    char SideIndicator;
    int64_t Price;
    uint32_t Quantity;
    char CustomerIndicator;
    char ParticipantId[4];
    uint32_t AuctionEndOffset;
    char ClientId[4];
} AuctionNotificationMessageT;

/*
 * Structure: Trade Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t QuantityShort;
    char ComplexInstrumentId[6];
    int16_t PriceShort;
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
    char ComplexInstrumentId[6];
    int64_t Price;
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
    int16_t PriceShort;
    char Padding[1];
} ModifyOrderShortMessageT;

/*
 * Structure: Modify Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t Quantity;
    int64_t Price;
    char Padding[1];
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
    int64_t Price;
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
 * Structure: Add Order Expanded Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char ComplexInstrumentId8[8];
    int64_t Price;
    char Reserved[1];
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
    char ComplexInstrumentId[6];
    int16_t PriceShort;
    char Padding[1];
} AddOrderShortMessageT;

/*
 * Structure: Add Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char ComplexInstrumentId[6];
    int64_t Price;
    char Padding[1];
} AddOrderLongMessageT;

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
 * Structure: Complex Instrument Leg
 */ 
typedef struct {
    char LegSymbol[8];
    int32_t LegRatio;
    char LegSecurityType;
} ComplexInstrumentLegT;

/*
 * Structure: Complex Instrument Type
 */ 
typedef struct {
    char ComplexAuctionType[1];
    char ComplexAuctionReservedBytes[3];
} ComplexInstrumentTypeT;

/*
 * Structure: Complex Instrument Definition Expanded Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ComplexInstrumentId[6];
    char ComplexInstrumentUnderlying[8];
    ComplexInstrumentTypeT ComplexInstrumentType;
    uint8_t LegCount;
} ComplexInstrumentDefinitionExpandedMessageT;

/*
 * Structure: Transaction End Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} TransactionEndMessageT;

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
   Version: 2.1.37
   Date: Tuesday, March 1, 2022
   Specification: US_OPTIONS_COMPLEX_MULTICAST_PITCH_SPECIFICATION.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
