/*******************************************************************************
 * C Structs For Nasdaq Ise Itch OrderComboFeed 1.1 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Event Values
 */ 
#define ENUM_AUCTION_EVENT_START 'S'
#define ENUM_AUCTION_EVENT_AUCTION_UPDATE 'U'
#define ENUM_AUCTION_EVENT_END_OF_AUCTION 'E'

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_EXPOSURE 'E'
#define ENUM_AUCTION_TYPE_FACILITATION 'C'
#define ENUM_AUCTION_TYPE_SOLICITATION 'S'
#define ENUM_AUCTION_TYPE_PIM 'P'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT_IN_EFFECT 'H'
#define ENUM_CURRENT_TRADING_STATE_TRADING_RESUMED 'T'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS 'S'
#define ENUM_EVENT_CODE_START_OF_OPENING_PROCESS 'Q'
#define ENUM_EVENT_CODE_START_OF_NORMAL_HOURS_CLOSING_PROCESS 'N'
#define ENUM_EVENT_CODE_START_OF_LATE_HOURS_CLOSING_PROCESS 'L'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGES 'C'
#define ENUM_EVENT_CODE_END_OF_WCO_EARLY_CLOSING 'W'

/*
 * Exec Flag Values
 */ 
#define ENUM_EXEC_FLAG_NONE 'N'
#define ENUM_EXEC_FLAG_AON 'A'

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY 'B'
#define ENUM_LEG_SIDE_SELL 'S'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_STRATEGY_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_STRATEGY_OPEN_CLOSED_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_ORDER_ON_BOOK_MESSAGE 'L'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_AUCTION_MESSAGE 'J'

/*
 * Open State Values
 */ 
#define ENUM_OPEN_STATE_OPEN_FOR_AUTO_EXECUTION 'Y'
#define ENUM_OPEN_STATE_CLOSED_FOR_AUTO_EXECUTION 'N'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL 'C'
#define ENUM_OPTION_TYPE_PUT 'P'
#define ENUM_OPTION_TYPE_STOCK ' '

/*
 * Order Capacity Values
 */ 
#define ENUM_ORDER_CAPACITY_CUSTOMER 'C'
#define ENUM_ORDER_CAPACITY_CUSTOMER_PROFESSIONAL 'D'
#define ENUM_ORDER_CAPACITY_FIRM 'F'
#define ENUM_ORDER_CAPACITY_BROKER_DEALER_CUSTOMER 'B'
#define ENUM_ORDER_CAPACITY_BROKER_DEALER_FIRM 'K'
#define ENUM_ORDER_CAPACITY_PROPRIETARY 'E'
#define ENUM_ORDER_CAPACITY_AWAY_MARKET_MAKER 'N'
#define ENUM_ORDER_CAPACITY_MARKET_MAKER 'M'

/*
 * Order Type Values
 */ 
#define ENUM_ORDER_TYPE_MARKET 'M'
#define ENUM_ORDER_TYPE_LIMIT 'L'

/*
 * Scope Values
 */ 
#define ENUM_SCOPE_LOCAL 'L'
#define ENUM_SCOPE_NATIONAL 'N'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BID 'B'
#define ENUM_SIDE_OFFER_ASK 'A'
#define ENUM_SIDE_HIDDEN ' '

/*
 * Strategy Type Values
 */ 
#define ENUM_STRATEGY_TYPE_VERTICAL_SPREAD 'V'
#define ENUM_STRATEGY_TYPE_TIME_SPREAD 'T'
#define ENUM_STRATEGY_TYPE_DIAGONAL_SPREAD 'D'
#define ENUM_STRATEGY_TYPE_STRADDLE 'S'
#define ENUM_STRATEGY_TYPE_STRANGLE 'G'
#define ENUM_STRATEGY_TYPE_COMBO 'C'
#define ENUM_STRATEGY_TYPE_RISK_REVERSAL 'R'
#define ENUM_STRATEGY_TYPE_RATIO_SPREAD 'A'
#define ENUM_STRATEGY_TYPE_CUSTOM 'U'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Auction Response
 */ 
typedef struct {
    int32_t ResponsePrice;
    uint32_t ResponseSize;
} AuctionResponseT;

/*
 * Structure: Complex Strategy Auction Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    uint32_t AuctionId;
    char OrderType;
    char Side;
    int32_t Price;
    uint32_t Size;
    char ExecFlag;
    char OrderCapacity;
    char Scope;
    char OwnerId[6];
    char Giveup[6];
    char Cmta[6];
    char AuctionEvent;
    char AuctionType;
    uint8_t NumberOfResponses;
} ComplexStrategyAuctionMessageT;

/*
 * Structure: Complex Strategy Order On Book Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char OrderType;
    char Side;
    int32_t Price;
    uint32_t Size;
    char ExecFlag;
    char OrderCapacity;
    char Scope;
    char OwnerId[6];
    char Giveup[6];
    char Cmta[6];
} ComplexStrategyOrderOnBookMessageT;

/*
 * Structure: Strategy Open Closed Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char OpenState;
} StrategyOpenClosedMessageT;

/*
 * Structure: Strategy Trading Action Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char CurrentTradingState;
} StrategyTradingActionMessageT;

/*
 * Structure: Leg Information
 */ 
typedef struct {
    uint32_t OptionId;
    char SecuritySymbol[6];
    uint8_t LegId;
    uint8_t ExpirationYear;
    uint8_t ExpirationMonth;
    uint8_t ExpirationDay;
    int64_t ExplicitStrikePrice;
    char OptionType;
    char LegSide;
    uint32_t LegRatio;
} LegInformationT;

/*
 * Structure: Complex Strategy Directory Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char StrategyType;
    uint8_t Source;
    char UnderlyingSymbol[13];
    uint8_t NumberOfLegs;
} ComplexStrategyDirectoryMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    char Timestamp;
    char EventCode;
    uint16_t CurrentYear;
    uint8_t CurrentMonth;
    uint8_t CurrentDay;
    uint8_t Version;
    uint8_t Subversion;
} SystemEventMessageT;

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
   Version: 1.1
   Date: Tuesday, June 13, 2017
   Specification: ISE-GEMX-MRX-Order-Feed-Specification_tcm5044-42717.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
