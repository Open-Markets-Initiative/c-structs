/*******************************************************************************
 * C Structs For Memx Options Sbe MemoirDepth 1.3 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Closing Only Values
 */ 
#define ENUM_CLOSING_ONLY_FALSE 0
#define ENUM_CLOSING_ONLY_TRUE 1

/*
 * Instrument Trading Status Values
 */ 
#define ENUM_INSTRUMENT_TRADING_STATUS_HALTED 'H'
#define ENUM_INSTRUMENT_TRADING_STATUS_TRADING 'T'

/*
 * Instrument Trading Status Reason Values
 */ 
#define ENUM_INSTRUMENT_TRADING_STATUS_REASON_NONE 'X'
#define ENUM_INSTRUMENT_TRADING_STATUS_REASON_ADMINISTRATIVE 'A'

/*
 * Is Test Symbol Values
 */ 
#define ENUM_IS_TEST_SYMBOL_FALSE 0
#define ENUM_IS_TEST_SYMBOL_TRUE 1

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_HEARTBEAT_MESSAGE 0
#define ENUM_MESSAGE_TYPE_SESSION_SHUTDOWN_MESSAGE 1
#define ENUM_MESSAGE_TYPE_SEQUENCED_MESSAGE 2

/*
 * Options Product Type Values
 */ 
#define ENUM_OPTIONS_PRODUCT_TYPE_EQUITY_UNDERLYING 0
#define ENUM_OPTIONS_PRODUCT_TYPE_INDEX_UNDERLYING 1

/*
 * Order Capacity Values
 */ 
#define ENUM_ORDER_CAPACITY_CUSTOMER 'C'
#define ENUM_ORDER_CAPACITY_NON_CUSTOMER 'N'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 'B'
#define ENUM_SIDE_SELL 'S'

/*
 * Strike Put Or Call Values
 */ 
#define ENUM_STRIKE_PUT_OR_CALL_PUT 0
#define ENUM_STRIKE_PUT_OR_CALL_CALL 1

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_INSTRUMENT_DIRECTORY_MESSAGE 1
#define ENUM_TEMPLATE_ID_INSTRUMENT_TRADING_STATUS_MESSAGE 2
#define ENUM_TEMPLATE_ID_TRADING_SESSION_STATUS_MESSAGE 3
#define ENUM_TEMPLATE_ID_BROKEN_TRADE_MESSAGE 5
#define ENUM_TEMPLATE_ID_CORRECTED_TRADE_MESSAGE 6
#define ENUM_TEMPLATE_ID_SNAPSHOT_COMPLETE_MESSAGE 7
#define ENUM_TEMPLATE_ID_ORDER_ADDED_SHORT_MESSAGE 10
#define ENUM_TEMPLATE_ID_ORDER_ADDED_LONG_MESSAGE 11
#define ENUM_TEMPLATE_ID_ORDER_ADDED_EXTENDED_MESSAGE 12
#define ENUM_TEMPLATE_ID_ORDER_DELETED_MESSAGE 13
#define ENUM_TEMPLATE_ID_ORDER_REDUCED_MESSAGE 14
#define ENUM_TEMPLATE_ID_ORDER_EXECUTED_MESSAGE 15
#define ENUM_TEMPLATE_ID_CLEAR_BOOK_MESSAGE 18

/*
 * Trading Session Values
 */ 
#define ENUM_TRADING_SESSION_TRADING '1'
#define ENUM_TRADING_SESSION_CLOSED '2'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Clear Book Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolClearBookSymbol[8];
    char Padding7[0];
} ClearBookMessageT;

/*
 * Bitfield: Trade Conditions
 */ 
typedef struct {
    uint8_t
    Reserved7 : 7,
    IntermarketSweep : 1;
} TradeConditionsT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolOrderExecutedSymbol[8];
    char OrderCapacity;
    TradeConditionsT TradeConditions;
    uint64_t OrderId;
    uint64_t TradeId;
    uint32_t QuantityUint32;
    int8_t PricePriceType;
    char Padding14[0];
} OrderExecutedMessageT;

/*
 * Structure: Order Reduced Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolOrderReducedSymbol[8];
    char OrderCapacity;
    uint64_t OrderId;
    char Side;
    uint32_t QuantityUint32;
    int8_t PricePriceType;
    uint32_t QuantityReduced;
    char Padding14[0];
} OrderReducedMessageT;

/*
 * Structure: Order Deleted Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolOrderDeletedSymbol[8];
    char OrderCapacity;
    uint64_t OrderId;
    char Padding7[0];
} OrderDeletedMessageT;

/*
 * Structure: Order Added Extended Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolOrderAddedExtendedSymbol[8];
    char OrderCapacity;
    uint64_t OrderId;
    char Side;
    uint32_t QuantityUint32;
    int8_t PricePriceType;
    char Padding14[0];
} OrderAddedExtendedMessageT;

/*
 * Structure: Order Added Long Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolOrderAddedLongSymbol[8];
    uint64_t OrderId;
    char Side;
    uint32_t QuantityUint32;
    int8_t PricePriceType;
    char Padding14[0];
} OrderAddedLongMessageT;

/*
 * Structure: Order Added Short Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolOrderAddedShortSymbol[8];
    uint64_t OrderId;
    char Side;
    uint16_t QuantityUint16;
    int8_t PriceShortPriceType;
    char Padding8[0];
} OrderAddedShortMessageT;

/*
 * Structure: Snapshot Complete Message
 */ 
typedef struct {
    uint8_t Timestamp;
    uint64_t AsOfSequenceNumber;
    char Padding7[0];
} SnapshotCompleteMessageT;

/*
 * Structure: Corrected Trade Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolCorrectedTradeSymbol[8];
    uint64_t TradeId;
    uint32_t OriginalQuantity;
    int8_t OriginalPrice;
    uint32_t CorrectedQuantity;
    int8_t CorrectedPrice;
    char Padding21[0];
} CorrectedTradeMessageT;

/*
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolBrokenTradeSymbol[8];
    uint64_t TradeId;
    uint32_t OriginalQuantity;
    int8_t OriginalPrice;
    char Padding14[0];
} BrokenTradeMessageT;

/*
 * Structure: Trading Session Status Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char TradingSession;
    char Padding7[0];
} TradingSessionStatusMessageT;

/*
 * Structure: Instrument Trading Status Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolInstrumentTradingStatusSymbol[8];
    char InstrumentTradingStatus;
    char InstrumentTradingStatusReason;
    char Padding7[0];
} InstrumentTradingStatusMessageT;

/*
 * Structure: Instrument Directory Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolInstrumentDirectorySymbol[8];
    uint8_t OptionsProductType;
    char Underlier[6];
    char OsiRoot[6];
    char MaturityDate[8];
    uint8_t StrikePutOrCall;
    int8_t StrikePrice;
    uint8_t ClosingOnly;
    uint8_t ClosingTime;
    uint8_t IsTestSymbol;
    char Padding21[0];
} InstrumentDirectoryMessageT;

/*
 * Structure: Sbe Header
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t TemplateId;
    uint8_t SchemaId;
    uint16_t Version;
} SbeHeaderT;

/*
 * Structure: Sbe Message
 */ 
typedef struct {
    SbeHeaderT SbeHeader;
} SbeMessageT;

/*
 * Structure: Message
 */ 
typedef struct {
    uint16_t MessageLength;
} MessageT;

/*
 * Structure: Sequenced Message
 */ 
typedef struct {
    uint16_t MessageCount;
} SequencedMessageT;

/*
 * Structure: Common Header
 */ 
typedef struct {
    uint8_t MessageType;
    uint8_t HeaderLength;
    uint64_t SessionId;
    uint64_t SequenceNumber;
} CommonHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    CommonHeaderT CommonHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Members Exchange
   Version: 1.3
   Date: Thursday, June 29, 2023
   Specification: MEMOIR Depth for US Options-v1_3.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
