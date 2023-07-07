/*******************************************************************************
 * C Structs For Lse Millennium Mitch Level2 11.9 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_CLOSING_AUCTION 'C'
#define ENUM_AUCTION_TYPE_OPENING_AUCTION 'O'
#define ENUM_AUCTION_TYPE_AESP 'A'
#define ENUM_AUCTION_TYPE_EDSP 'B'
#define ENUM_AUCTION_TYPE_RESUME_AUCTION 'E'
#define ENUM_AUCTION_TYPE_PERIODIC_AUCTION 'F'
#define ENUM_AUCTION_TYPE_SCHEDULED_LEVEL_1_ONLY_AUCTION 'G'

/*
 * Book Type Values
 */ 
#define ENUM_BOOK_TYPE_ON_BOOK 1
#define ENUM_BOOK_TYPE_OFF_BOOK 2
#define ENUM_BOOK_TYPE_PRIVATE_RFQ 3

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_MEANING Value
#define ENUM_CROSS_TYPE_INTERNAL_CROSS 5
#define ENUM_CROSS_TYPE_INTERNAL_BTF 6
#define ENUM_CROSS_TYPE_COMMITTED_CROSS 7
#define ENUM_CROSS_TYPE_COMMITTED_BTF 8

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_END_OF_DAY 'C'
#define ENUM_EVENT_CODE_START_OF_DAY 'O'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE 0x54
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 0x53
#define ENUM_MESSAGE_TYPE_SYMBOL_DIRECTORY_MESSAGE 0x52
#define ENUM_MESSAGE_TYPE_SYMBOL_STATUS_MESSAGE 0x48
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE 0x41
#define ENUM_MESSAGE_TYPE_ADD_ATTRIBUTED_ORDER_MESSAGE 0x46
#define ENUM_MESSAGE_TYPE_ORDER_DELETED_MESSAGE 0x44
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE 0x55
#define ENUM_MESSAGE_TYPE_ORDER_BOOK_CLEAR_MESSAGE 0x79
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 0x45
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_WITH_PRICE_SIZE_MESSAGE 0x43
#define ENUM_MESSAGE_TYPE_TRADE_MESSAGE 0x50
#define ENUM_MESSAGE_TYPE_AUCTION_TRADE_MESSAGE 0x51
#define ENUM_MESSAGE_TYPE_AUCTION_INFO_MESSAGE 0x49
#define ENUM_MESSAGE_TYPE_STATISTICS_MESSAGE 0x77
#define ENUM_MESSAGE_TYPE_TOP_OF_BOOK_MESSAGE 0x71

/*
 * Open Close Price Indicator Values
 */ 
#define ENUM_OPEN_CLOSE_PRICE_INDICATOR_MEANING 'Value'
#define ENUM_OPEN_CLOSE_PRICE_INDICATOR_UT 'A'
#define ENUM_OPEN_CLOSE_PRICE_INDICATOR_AT 'B'
#define ENUM_OPEN_CLOSE_PRICE_INDICATOR_MID_OF_BBO 'C'
#define ENUM_OPEN_CLOSE_PRICE_INDICATOR_LAST_AT 'D'
#define ENUM_OPEN_CLOSE_PRICE_INDICATOR_LAST_UT 'E'
#define ENUM_OPEN_CLOSE_PRICE_INDICATOR_MANUAL 'F'
#define ENUM_OPEN_CLOSE_PRICE_INDICATOR_DERIVED_FROM_PREVIOUS_CLOSE 'I'

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_NON_PRINTABLE 'N'
#define ENUM_PRINTABLE_PRINTABLE 'Y'

/*
 * Session Change Reason Values
 */ 
#define ENUM_SESSION_CHANGE_REASON_SCHEDULED_TRANSITION 0
#define ENUM_SESSION_CHANGE_REASON_EXTENDED_BY_MARKET_OPS 1
#define ENUM_SESSION_CHANGE_REASON_SHORTENED_BY_MARKET_OPS 2
#define ENUM_SESSION_CHANGE_REASON_MARKET_ORDER_IMBALANCE 3
#define ENUM_SESSION_CHANGE_REASON_PRICE_OUTSIDE_RANGE 4
#define ENUM_SESSION_CHANGE_REASON_UNAVAILABLE_RECOVERY_SERVICE_ONLY 9

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY_ORDER 'B'
#define ENUM_SIDE_SELL_ORDER 'S'

/*
 * Statistic Type Values
 */ 
#define ENUM_STATISTIC_TYPE_OPENING_PRICE 'O'
#define ENUM_STATISTIC_TYPE_CLOSING_PRICE 'C'

/*
 * Sub Book Values
 */ 
#define ENUM_SUB_BOOK_REGULAR_TRADES 0
#define ENUM_SUB_BOOK_RFQ_TRADES 11

/*
 * Symbol Status Values
 */ 
#define ENUM_SYMBOL_STATUS_ACTIVE ' '
#define ENUM_SYMBOL_STATUS_SUSPENDED 'S'
#define ENUM_SYMBOL_STATUS_INACTIVE 'a'
#define ENUM_SYMBOL_STATUS_HALT 'H'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_ACTIVE ' '
#define ENUM_TRADING_STATUS_MEANING 'Value'
#define ENUM_TRADING_STATUS_HALT 'H'
#define ENUM_TRADING_STATUS_REGULAR_TRADING_START_OF_TRADE_REPORTING 'T'
#define ENUM_TRADING_STATUS_OPENING_FIRST_AUCTION_CALL 'a'
#define ENUM_TRADING_STATUS_POST_CLOSE 'b'
#define ENUM_TRADING_STATUS_MARKET_CLOSE_SYSTEM_SHUTDOWN 'c'
#define ENUM_TRADING_STATUS_CLOSING_AUCTION_CALL 'd'
#define ENUM_TRADING_STATUS_AESP_AUCTION_CALL 'e'
#define ENUM_TRADING_STATUS_RESUME_AUCTION_CALL 'f'
#define ENUM_TRADING_STATUS_PAUSE 'l'
#define ENUM_TRADING_STATUS_PRE_MANDATORY 'm'
#define ENUM_TRADING_STATUS_MANDATORY 'n'
#define ENUM_TRADING_STATUS_POST_MANDATORY 'o'
#define ENUM_TRADING_STATUS_EDSP_AUCTION_CALL 'q'
#define ENUM_TRADING_STATUS_PERIODIC_AUCTION_CALL 'r'
#define ENUM_TRADING_STATUS_END_TRADE_REPORTING 't'
#define ENUM_TRADING_STATUS_NO_ACTIVE_SESSION 'w'
#define ENUM_TRADING_STATUS_END_OF_POST_CLOSE 'x'
#define ENUM_TRADING_STATUS_CLOSING_PRICE_CROSSING 'u'
#define ENUM_TRADING_STATUS_SCHEDULED_LEVEL_1_ONLY_AUCTION 'G'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Top Of Book Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint32_t InstrumentId;
    int64_t BuyLimitPrice;
    uint32_t BuyLimitSize;
    int64_t SellLimitPrice;
    uint32_t SellLimitSize;
} TopOfBookMessageT;

/*
 * Structure: Statistics Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint32_t InstrumentId;
    char ReservedA[1];
    char ReservedB[1];
    char StatisticType;
    int64_t Price;
    char OpenClosePriceIndicator;
    char ReservedByte[1];
} StatisticsMessageT;

/*
 * Structure: Auction Info Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint32_t PairedQuantity;
    uint32_t ReservedUint32;
    char ReservedByte[1];
    uint32_t InstrumentId;
    char ReservedA[1];
    char ReservedB[1];
    int64_t Price;
    char AuctionType;
} AuctionInfoMessageT;

/*
 * Bitfield: Pt Mod Flags
 */ 
typedef struct {
    uint8_t
    Canc : 1,
    Amnd : 1,
    Unused6 : 6;
} PtModFlagsT;

/*
 * Structure: Auction Trade Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint32_t Quantity;
    uint32_t InstrumentId;
    char ReservedA[1];
    char ReservedB[1];
    int64_t Price;
    uint64_t TradeMatchId;
    char AuctionType;
    PtModFlagsT PtModFlags;
} AuctionTradeMessageT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint32_t ExecutedQuantity;
    uint32_t InstrumentId;
    char ReservedA[1];
    char ReservedB[1];
    int64_t Price;
    uint64_t TradeMatchId;
    uint8_t CrossType;
    uint8_t SubBook;
    PtModFlagsT PtModFlags;
} TradeMessageT;

/*
 * Structure: Order Executed With Price Size Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint64_t OrderId;
    uint32_t ExecutedQuantity;
    uint32_t DisplayQuantity;
    uint64_t TradeMatchId;
    char Printable;
    int64_t Price;
} OrderExecutedWithPriceSizeMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint64_t OrderId;
    uint32_t ExecutedQuantity;
    uint64_t TradeMatchId;
} OrderExecutedMessageT;

/*
 * Bitfield: Flags
 */ 
typedef struct {
    uint8_t
    PriorityFlag : 1,
    Unused3 : 3,
    MarketOrder : 1,
    FirmQuote : 1,
    PrivateRfq : 1,
    Unused1 : 1;
} FlagsT;

/*
 * Structure: Order Book Clear Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint32_t InstrumentId;
    char ReservedA[1];
    char ReservedB[1];
    FlagsT Flags;
} OrderBookClearMessageT;

/*
 * Structure: Order Modified Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint64_t OrderId;
    uint32_t NewQuantity;
    int64_t NewPrice;
    FlagsT Flags;
} OrderModifiedMessageT;

/*
 * Structure: Order Deleted Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint64_t OrderId;
    FlagsT Flags;
    uint32_t InstrumentId;
} OrderDeletedMessageT;

/*
 * Structure: Add Attributed Order Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint64_t OrderId;
    char Side;
    uint32_t Quantity;
    uint32_t InstrumentId;
    char ReservedA[1];
    char ReservedB[1];
    int64_t Price;
    char Attribution[11];
    FlagsT Flags;
} AddAttributedOrderMessageT;

/*
 * Structure: Add Order Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint64_t OrderId;
    char Side;
    uint32_t Quantity;
    uint32_t InstrumentId;
    char ReservedA[1];
    char ReservedB[1];
    int64_t Price;
    FlagsT Flags;
    char ReservedAlpha[4];
} AddOrderMessageT;

/*
 * Structure: Symbol Status Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint32_t InstrumentId;
    char ReservedA[1];
    char ReservedB[1];
    char TradingStatus;
    char SymbolStatusFlags[0];
    char Reason[4];
    uint8_t SessionChangeReason;
    char NewEndTime[8];
    uint8_t BookType;
} SymbolStatusMessageT;

/*
 * Structure: Symbol Directory Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    uint32_t InstrumentId;
    char ReservedA[1];
    char ReservedB[1];
    char SymbolStatus;
    char Isin[12];
    char Sedol[12];
    char Segment[6];
    char Underlying[6];
    char Currency[3];
    char ReservedByte[1];
    char ReservedAlpha[4];
    int64_t PreviousClosePrice;
} SymbolDirectoryMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t Nanosecond;
    char EventCode;
} SystemEventMessageT;

/*
 * Structure: Time Message
 */ 
typedef struct {
    uint32_t Seconds;
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
 * Structure: Unit Header
 */ 
typedef struct {
    uint16_t Length;
    uint8_t MessageCount;
    char MarketDataGroup[1];
    uint32_t SequenceNumber;
} UnitHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    UnitHeaderT UnitHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: London Stock Exchange
   Version: 11.9
   Date: Tuesday, August 28, 2018
   Specification: mit303issue119.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
