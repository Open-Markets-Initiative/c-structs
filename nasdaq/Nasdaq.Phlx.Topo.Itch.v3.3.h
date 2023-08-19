/*******************************************************************************
 * C Structs For Nasdaq Phlx Itch Topo 3.3 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

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
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIMESTAMP_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_OPTIONS_DIRECTORY_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_SECURITY_OPEN_CLOSED_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_SHORT_BEST_BID_AND_ASK_UPDATE_MESSAGE 'q'
#define ENUM_MESSAGE_TYPE_LONG_BEST_BID_AND_ASK_UPDATE_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_SHORT_BEST_ASK_UPDATE_MESSAGE 'a'
#define ENUM_MESSAGE_TYPE_SHORT_BEST_BID_UPDATE_MESSAGE 'b'
#define ENUM_MESSAGE_TYPE_LONG_BEST_ASK_UPDATE_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_LONG_BEST_BID_UPDATE_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_TRADE_REPORT_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_REPORT_MESSAGE 'X'

/*
 * Mpv Values
 */ 
#define ENUM_MPV_PENNY_EVERYWHERE 'E'
#define ENUM_MPV_SCALED 'S'
#define ENUM_MPV_PENNY_PILOT 'P'

/*
 * Open State Values
 */ 
#define ENUM_OPEN_STATE_OPEN_FOR_AUTO_EXECUTION 'Y'
#define ENUM_OPEN_STATE_CLOSED_FOR_AUTO_EXECUTION 'N'

/*
 * Option Closing Type Values
 */ 
#define ENUM_OPTION_CLOSING_TYPE_NORMAL 'N'
#define ENUM_OPTION_CLOSING_TYPE_LATE 'L'
#define ENUM_OPTION_CLOSING_TYPE_WCO_EARLY_CLOSING 'W'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL 'C'
#define ENUM_OPTION_TYPE_PUT 'P'

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_REGULAR_QUOTEAUTOX_ELIGIBLE ''
#define ENUM_QUOTE_CONDITION_NON_FIRM_QUOTE 'F'
#define ENUM_QUOTE_CONDITION_ROTATIONAL_QUOTE 'R'
#define ENUM_QUOTE_CONDITION_BID_SIDE_FIRM 'X'
#define ENUM_QUOTE_CONDITION_ASK_SIDE_FIRM 'Y'

/*
 * Tradable Values
 */ 
#define ENUM_TRADABLE_TRADABLE 'Y'
#define ENUM_TRADABLE_NOT_TRADABLE 'N'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Broken Trade Report Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    uint32_t OriginalCrossId;
    int32_t OriginalPrice;
    uint32_t OriginalVolume;
} BrokenTradeReportMessageT;

/*
 * Structure: Trade Report Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    uint32_t CrossId;
    char TradeCondition[1];
    int32_t Price4;
    uint32_t Volume;
} TradeReportMessageT;

/*
 * Structure: Long Best Bid Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int32_t Price4;
    uint32_t Size4;
} LongBestBidUpdateMessageT;

/*
 * Structure: Long Best Ask Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int32_t Price4;
    uint32_t Size4;
} LongBestAskUpdateMessageT;

/*
 * Structure: Short Best Bid Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int16_t Price2;
    uint16_t Size2;
} ShortBestBidUpdateMessageT;

/*
 * Structure: Short Best Ask Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int16_t Price2;
    uint16_t Size2;
} ShortBestAskUpdateMessageT;

/*
 * Structure: Long Best Bid And Ask Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t AskPrice4;
    uint32_t AskSize4;
} LongBestBidAndAskUpdateMessageT;

/*
 * Structure: Short Best Bid And Ask Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t AskPrice2;
    uint16_t AskSize2;
} ShortBestBidAndAskUpdateMessageT;

/*
 * Structure: Security Open Closed Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char OpenState;
} SecurityOpenClosedMessageT;

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char CurrentTradingState;
} TradingActionMessageT;

/*
 * Structure: Options Directory Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[6];
    uint8_t ExpirationYear;
    uint8_t ExpirationMonth;
    uint8_t ExpirationDay;
    int32_t StrikePrice;
    char OptionType;
    uint8_t Source;
    char UnderlyingSymbol[13];
    char OptionClosingType;
    char Tradable;
    char Mpv;
} OptionsDirectoryMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    char EventCode;
    uint8_t Version;
    uint8_t Subversion;
} SystemEventMessageT;

/*
 * Structure: Timestamp Message
 */ 
typedef struct {
    uint32_t Second;
} TimestampMessageT;

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
   Version: 3.3
   Date: Thursday, November 2, 2017
   Specification: topofphlx.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
