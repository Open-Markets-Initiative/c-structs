/*******************************************************************************
 * C Structs For Nasdaq Bx Options Itch TopOfMarket 1.2 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT 'H'
#define ENUM_CURRENT_TRADING_STATE_TRADING 'T'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS 'S'
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS 'Q'
#define ENUM_EVENT_CODE_END_OF_MARKET_HOURS 'M'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGES 'C'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIMESTAMP_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_OPTIONS_DIRECTORY_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_SECURITY_OPEN_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_BEST_BID_AND_ASK_UPDATE_SHORT_FORM_MESSAGE 'q'
#define ENUM_MESSAGE_TYPE_BEST_BID_AND_ASK_UPDATE_LONG_FORM_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_BEST_BID_UPDATE_SHORT_FORM_MESSAGE 'b'
#define ENUM_MESSAGE_TYPE_BEST_ASK_UPDATE_SHORT_FORM_MESSAGE 'a'
#define ENUM_MESSAGE_TYPE_BEST_BID_UPDATE_LONG_FORM_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_BEST_ASK_UPDATE_LONG_FORM_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_TRADE_REPORT_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_REPORT_MESSAGE 'X'

/*
 * Minimum Price Variation Values
 */ 
#define ENUM_MINIMUM_PRICE_VARIATION_PENNY_EVERYWHERE 'E'
#define ENUM_MINIMUM_PRICE_VARIATION_SCALED 'S'
#define ENUM_MINIMUM_PRICE_VARIATION_PENNY_PILOT 'P'

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

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_NONFIRM_QUOTE 'F'
#define ENUM_QUOTE_CONDITION_ROTATIONAL_QUOTE 'R'
#define ENUM_QUOTE_CONDITION_BID_SIDE_FIRM 'X'
#define ENUM_QUOTE_CONDITION_ASK_SIDE_FIRM 'Y'
#define ENUM_QUOTE_CONDITION_REGULAR_QUOTE ' '

/*
 * Tradable Values
 */ 
#define ENUM_TRADABLE_YES 'Y'
#define ENUM_TRADABLE_NO 'N'


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
    int32_t PriceLong;
    uint32_t Volume;
} TradeReportMessageT;

/*
 * Structure: Best Ask Update Long Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int32_t PriceLong;
    uint32_t SizeLong;
} BestAskUpdateLongFormMessageT;

/*
 * Structure: Best Bid Update Long Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int32_t PriceLong;
    uint32_t SizeLong;
} BestBidUpdateLongFormMessageT;

/*
 * Structure: Best Ask Update Short Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int16_t Price;
    uint16_t Size;
} BestAskUpdateShortFormMessageT;

/*
 * Structure: Best Bid Update Short Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int16_t Price;
    uint16_t Size;
} BestBidUpdateShortFormMessageT;

/*
 * Structure: Best Bid And Ask Update Long Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int32_t BidPriceLong;
    uint32_t BidSizeLong;
    int32_t AskPriceLong;
    uint32_t AskSizeLong;
} BestBidAndAskUpdateLongFormMessageT;

/*
 * Structure: Best Bid And Ask Update Short Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    int16_t BidPrice;
    uint16_t BidSize;
    int16_t AskPrice;
    uint16_t AskSize;
} BestBidAndAskUpdateShortFormMessageT;

/*
 * Structure: Security Open Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char OpenState;
} SecurityOpenMessageT;

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
    char OptionClosingType[1];
    char Tradable;
    char MinimumPriceVariation;
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
    uint32_t Seconds;
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
   Version: 1.2
   Date: Thursday, November 2, 2017
   Specification: BXOptions_TopofMarket.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
