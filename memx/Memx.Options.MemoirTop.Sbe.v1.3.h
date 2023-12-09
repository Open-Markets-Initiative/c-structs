/*******************************************************************************
 * C Structs For Memx Options Sbe MemoirTop 1.3 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_CUSTOMER 'C'
#define ENUM_CAPACITY_NON_CUSTOMER 'N'

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
#define ENUM_TEMPLATE_ID_BEST_BID_OFFER_MESSAGE 10
#define ENUM_TEMPLATE_ID_BEST_BID_MESSAGE 11
#define ENUM_TEMPLATE_ID_BEST_OFFER_MESSAGE 12
#define ENUM_TEMPLATE_ID_BEST_BID_SHORT_MESSAGE 13
#define ENUM_TEMPLATE_ID_BEST_OFFER_SHORT_MESSAGE 14
#define ENUM_TEMPLATE_ID_TRADE_MESSAGE 15
#define ENUM_TEMPLATE_ID_CLEAR_BOOK_MESSAGE 16

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
 * Structure: Trade Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolTradeSymbol[8];
    uint64_t TradeId;
    TradeConditionsT TradeConditions;
    char Side;
    uint32_t Quantity;
    int8_t Price;
    uint32_t CustQuantity;
    char Capacity;
    char Padding14[0];
} TradeMessageT;

/*
 * Structure: Best Offer Short Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolBestOfferShortSymbol[8];
    uint32_t TotalOfferSize;
    uint32_t CustOfferSize;
    int8_t OfferPrice;
    char Padding8[0];
} BestOfferShortMessageT;

/*
 * Structure: Best Bid Short Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolBestBidShortSymbol[8];
    uint32_t TotalBidSize;
    uint32_t CustBidSize;
    int8_t BidPrice;
    char Padding8[0];
} BestBidShortMessageT;

/*
 * Structure: Best Offer Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolBestOfferSymbol[8];
    uint32_t TotalOfferSize;
    uint32_t CustOfferSize;
    int8_t OfferPrice;
    char Padding14[0];
} BestOfferMessageT;

/*
 * Structure: Best Bid Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolBestBidSymbol[8];
    uint32_t TotalBidSize;
    uint32_t CustBidSize;
    int8_t BidPrice;
    char Padding14[0];
} BestBidMessageT;

/*
 * Structure: Best Bid Offer Message
 */ 
typedef struct {
    uint8_t Timestamp;
    char SymbolBestBidOfferSymbol[8];
    uint32_t TotalBidSize;
    uint32_t CustBidSize;
    int8_t BidPrice;
    uint32_t TotalOfferSize;
    uint32_t CustOfferSize;
    int8_t OfferPrice;
    char Padding21[0];
} BestBidOfferMessageT;

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
   Specification: MEMOIR Top for US Options-v1_3.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
