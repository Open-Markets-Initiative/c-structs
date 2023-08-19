/*******************************************************************************
 * C Structs For Nasdaq Ise Itch TopComboQuoteFeed 1.0 Binary Model
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
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_STRATEGY_OPEN_CLOSED_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_STRATEGY_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_STRATEGY_BEST_BID_AND_ASK_UPDATE 'C'
#define ENUM_MESSAGE_TYPE_STRATEGY_BEST_BID_UPDATE 'D'
#define ENUM_MESSAGE_TYPE_STRATEGY_BEST_ASK_UPDATE 'E'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_TICKER_MESSAGE 't'

/*
 * Open State Values
 */ 
#define ENUM_OPEN_STATE_OPEN 'Y'
#define ENUM_OPEN_STATE_CLOSED 'N'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL 'C'
#define ENUM_OPTION_TYPE_PUT 'P'
#define ENUM_OPTION_TYPE_NA ' '

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_REGULAR_QUOTE ' '
#define ENUM_QUOTE_CONDITION_HALTED 'X'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 'B'
#define ENUM_SIDE_SELL 'S'
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
 * Structure: Complex Strategy Ticker Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    int64_t LastPrice;
    uint32_t Size;
    uint32_t Volume;
    uint64_t High;
    uint64_t Low;
    uint64_t First;
    char TradeCondition[1];
} ComplexStrategyTickerMessageT;

/*
 * Structure: Strategy Best Ask Update
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char QuoteCondition;
    int32_t Price;
    uint32_t Size;
    uint32_t CustSize;
    uint32_t ProCustSize;
    uint32_t NttSize;
    uint32_t MarketSize;
    uint32_t NttMarketSize;
} StrategyBestAskUpdateT;

/*
 * Structure: Strategy Best Bid Update
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char QuoteCondition;
    int32_t Price;
    uint32_t Size;
    uint32_t CustSize;
    uint32_t ProCustSize;
    uint32_t NttSize;
    uint32_t MarketSize;
    uint32_t NttMarketSize;
} StrategyBestBidUpdateT;

/*
 * Structure: Strategy Best Bid And Ask Update
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char QuoteCondition;
    int32_t BidPrice;
    uint32_t BidSize;
    uint32_t BidCustSize;
    uint32_t BidProCustSize;
    uint32_t BidNttSize;
    uint32_t BidMarketSize;
    uint32_t BidNttMarketSize;
    int32_t AskPrice;
    uint32_t AskSize;
    uint32_t AskCustSize;
    uint32_t AskProCustSize;
    uint32_t AskNttSize;
    uint32_t AskMarketSize;
    uint32_t AskNttMarketSize;
} StrategyBestBidAndAskUpdateT;

/*
 * Structure: Strategy Trading Action Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char CurrentTradingState;
} StrategyTradingActionMessageT;

/*
 * Structure: Strategy Open Closed Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char OpenState;
} StrategyOpenClosedMessageT;

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
    char Side;
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
   Version: 1.0
   Date: Wednesday, August 23, 2017
   Specification: ISEOrderComboFeedSpecification_tcm5044-41354.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
