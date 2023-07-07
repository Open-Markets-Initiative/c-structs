/*******************************************************************************
 * C Structs For Miax Pearl Equities Mach DepthOfMarket 1.3.a Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Market State Values
 */ 
#define ENUM_MARKET_STATE_PRE_OPENING 1
#define ENUM_MARKET_STATE_EARLY_TRADING 2
#define ENUM_MARKET_STATE_REGULAR_TRADING 3
#define ENUM_MARKET_STATE_AFTER_HOURS_TRADING 4

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_TIME_MESSAGE '49'
#define ENUM_MESSAGE_TYPE_SYMBOL_UPDATE_MESSAGE '1'
#define ENUM_MESSAGE_TYPE_SYSTEM_STATE_MESSAGE '83'
#define ENUM_MESSAGE_TYPE_SECURITY_TRADING_STATUS_NOTIFICATION_MESSAGE '4'
#define ENUM_MESSAGE_TYPE_SYMBOL_CLEAR_MESSAGE '5'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE '20'
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE '21'
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE '23'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTION_MESSAGE '24'
#define ENUM_MESSAGE_TYPE_TRADE_MESSAGE '10'
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_MESSAGE '11'

/*
 * Order Side Values
 */ 
#define ENUM_ORDER_SIDE_BUY 'B'
#define ENUM_ORDER_SIDE_SELL 'S'

/*
 * Packet Type Values
 */ 
#define ENUM_PACKET_TYPE_HEARTBEAT 0
#define ENUM_PACKET_TYPE_START_OF_SESSION 1
#define ENUM_PACKET_TYPE_END_OF_SESSION 2
#define ENUM_PACKET_TYPE_APPLICATION_MESSAGE 3

/*
 * Primary Market Code Values
 */ 
#define ENUM_PRIMARY_MARKET_CODE_NYSE_AMERICAN 'A'
#define ENUM_PRIMARY_MARKET_CODE_NASDAQ_BX 'B'
#define ENUM_PRIMARY_MARKET_CODE_NYSE_NATIONAL 'C'
#define ENUM_PRIMARY_MARKET_CODE_MIAX_PEARL_EQUITIES 'H'
#define ENUM_PRIMARY_MARKET_CODE_NASDAQ_ISE 'I'
#define ENUM_PRIMARY_MARKET_CODE_CBOE_EDGA_EXCHANGE 'J'
#define ENUM_PRIMARY_MARKET_CODE_CBOE_EDGX_EXCHANGE 'K'
#define ENUM_PRIMARY_MARKET_CODE_LONG_TERM_STOCK_EXCHANGE 'L'
#define ENUM_PRIMARY_MARKET_CODE_NYSE_CHICAGO 'M'
#define ENUM_PRIMARY_MARKET_CODE_NEW_YORK_STOCK_EXCHANGE 'N'
#define ENUM_PRIMARY_MARKET_CODE_NYSE_ARCA 'P'
#define ENUM_PRIMARY_MARKET_CODE_NASDAQ 'Q'
#define ENUM_PRIMARY_MARKET_CODE_MEMBERS_EXCHANGE 'U'
#define ENUM_PRIMARY_MARKET_CODE_INVESTORS_EXCHANGE 'V'
#define ENUM_PRIMARY_MARKET_CODE_CBOE_STOCK_EXCHANGE 'W'
#define ENUM_PRIMARY_MARKET_CODE_NASDAQ_PHLX 'X'
#define ENUM_PRIMARY_MARKET_CODE_CBOE_BYX_EXCHANGE 'Y'
#define ENUM_PRIMARY_MARKET_CODE_CBOE_BZX_EXCHANGE 'Z'

/*
 * Short Sale Restriction Values
 */ 
#define ENUM_SHORT_SALE_RESTRICTION_SSR_IN_EFFECT 'Y'
#define ENUM_SHORT_SALE_RESTRICTION_SSR_NOT_IN_EFFECT 'N'

/*
 * System Status Values
 */ 
#define ENUM_SYSTEM_STATUS_START 'S'
#define ENUM_SYSTEM_STATUS_END 'C'
#define ENUM_SYSTEM_STATUS_START '1'
#define ENUM_SYSTEM_STATUS_END '2'

/*
 * Test Security Indicator Values
 */ 
#define ENUM_TEST_SECURITY_INDICATOR_YES 'Y'
#define ENUM_TEST_SECURITY_INDICATOR_NO 'N'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_PRE_OPEN 1
#define ENUM_TRADING_STATUS_TRADING 2
#define ENUM_TRADING_STATUS_HALT 3
#define ENUM_TRADING_STATUS_OPERATIONAL_HALT 4
#define ENUM_TRADING_STATUS_CLOSED 5


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Trade Cancel Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t SymbolId;
    uint64_t TradeId;
    uint8_t CorrectionNumber;
    uint64_t Price;
    uint32_t Size;
} TradeCancelMessageT;

/*
 * Bitfield: Trade Flags
 */ 
typedef struct {
    uint8_t
    Undefined : 7,
    Reportable : 1;
} TradeFlagsT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t SymbolId;
    uint64_t TradeId;
    uint8_t CorrectionNumber;
    uint64_t Price;
    uint32_t Size;
    TradeFlagsT TradeFlags;
} TradeMessageT;

/*
 * Bitfield: Order Execution Flags
 */ 
typedef struct {
    uint8_t
    Undefined : 7,
    Reportable : 1;
} OrderExecutionFlagsT;

/*
 * Structure: Order Execution Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t SymbolId;
    uint64_t OrderId;
    uint64_t TradeId;
    uint64_t Price;
    uint32_t Size;
    OrderExecutionFlagsT OrderExecutionFlags;
} OrderExecutionMessageT;

/*
 * Structure: Delete Order Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t SymbolId;
    uint64_t OrderId;
} DeleteOrderMessageT;

/*
 * Bitfield: Modify Order Flags
 */ 
typedef struct {
    uint8_t
    Undefined : 7,
    OrderPosition : 1;
} ModifyOrderFlagsT;

/*
 * Structure: Modify Order Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t SymbolId;
    uint64_t OrderId;
    uint64_t Price;
    uint32_t Size;
    ModifyOrderFlagsT ModifyOrderFlags;
} ModifyOrderMessageT;

/*
 * Structure: Add Order Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t SymbolId;
    uint64_t OrderId;
    char OrderSide;
    uint64_t Price;
    uint32_t Size;
    char AttributableId[4];
} AddOrderMessageT;

/*
 * Structure: Symbol Clear Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t SymbolId;
} SymbolClearMessageT;

/*
 * Structure: Security Trading Status Notification Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t SymbolId;
    uint8_t TradingStatus;
    uint8_t MarketState;
    char ShortSaleRestriction;
} SecurityTradingStatusNotificationMessageT;

/*
 * Structure: System State Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char DoMVersion[8];
    uint8_t SessionId;
    char SystemStatus;
} SystemStateMessageT;

/*
 * Structure: Symbol Update Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t SymbolId;
    char TickerSymbol[11];
    uint8_t Reserved;
    char TestSecurityIndicator;
    uint8_t Reserved;
    uint16_t LotSize;
    char OpeningTime[8];
    char ClosingTime[8];
    char PrimaryMarketCode;
} SymbolUpdateMessageT;

/*
 * Structure: System Time Message
 */ 
typedef struct {
    uint32_t Timestamp;
} SystemTimeMessageT;

/*
 * Structure: Application Message
 */ 
typedef struct {
    char MessageType;
} ApplicationMessageT;

/*
 * Structure: Message
 */ 
typedef struct {
    uint64_t SequenceNumber;
    uint16_t PacketLength;
    uint8_t PacketType;
    uint8_t SessionNumber;
} MessageT;

/*
 * Structure: Packet
 */ 
typedef struct {
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Miami International Securities Exchange
   Version: 1.3.a
   Date: Thursday, November 5, 2020
   Specification: MIAX_PEARL_Equities_DoM_Feed_v1.3a.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
