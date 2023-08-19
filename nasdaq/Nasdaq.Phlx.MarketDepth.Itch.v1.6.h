/*******************************************************************************
 * C Structs For Nasdaq Phlx Itch MarketDepth 1.6 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_OPENING 'O'
#define ENUM_AUCTION_TYPE_REOPENING 'R'
#define ENUM_AUCTION_TYPE_EXPOSURE 'I'

/*
 * Change Reason Values
 */ 
#define ENUM_CHANGE_REASON_USER 'U'
#define ENUM_CHANGE_REASON_REPRICE 'R'
#define ENUM_CHANGE_REASON_SUSPEND 'S'
#define ENUM_CHANGE_REASON_EXHAUSTED 'E'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_OPENING_REOPENING 'O'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT 'H'
#define ENUM_CURRENT_TRADING_STATE_TRADING 'T'
#define ENUM_CURRENT_TRADING_STATE_BUY_SIDE_TRADING_SUSPENDED_OR_EXHAUSTED 'B'
#define ENUM_CURRENT_TRADING_STATE_SELL_SIDE_TRADING_SUSPENDED_OR_EXHAUSTED 'S'

/*
 * Customer Indicator Values
 */ 
#define ENUM_CUSTOMER_INDICATOR_CUSTOMER 'C'
#define ENUM_CUSTOMER_INDICATOR_FIRM 'F'
#define ENUM_CUSTOMER_INDICATOR_ONFLOOR 'M'
#define ENUM_CUSTOMER_INDICATOR_PROFESSIONAL 'P'
#define ENUM_CUSTOMER_INDICATOR_NON_PHLX 'B'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES_THIS_IS_ALWAYS_THE_FIRST_MESSAGE_SENT_IN_ANY_TRADING_DAY 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS_THIS_MESSAGE_INDICATES_THAT_PHLX_®_IS_OPEN_AND_READY_TO_START_ACCEPTING_ORDERS 'S'
#define ENUM_EVENT_CODE_START_OF_OPENING_PROCESS_THIS_MESSAGE_IS_INTENDED_TO_INDICATE_THAT_PHLX_®_HAS_STARTED_ITS_OPENING_AUCTION_PROCESS 'Q'
#define ENUM_EVENT_CODE_END_OF_NORMAL_HOURS_PROCESSING_THIS_MESSAGE_IS_INTENDED_TO_INDICATE_THAT_PHLX_®_WILL_NO_LONGER_ACCEPT_ANY_NEW_ORDERS_OR_CHANGES_TO_EXISTING_ORDERS_FOR_OPTIONS_THAT_TRADE_DURING_NORMAL_TRADING_HOURS 'N'
#define ENUM_EVENT_CODE_END_OF_LATE_HOURS_PROCESSING_THIS_MESSAGE_IS_INTENDED_TO_INDICATE_THAT_PHLX_®_WILL_NO_LONGER_ACCEPT_ANY_NEW_ORDERS_OR_CHANGES_TO_EXISTING_ORDERS_FOR_OPTIONS_THAT_TRADE_DURING_EXTENDED_HOURS 'L'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS_THIS_MESSAGE_INDICATES_THAT_PHLX_®_OPTIONS_SYSTEM_IS_NOW_CLOSED 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGES_THIS_IS_ALWAYS_THE_LAST_MESSAGE_SENT_IN_ANY_TRADING_DAY 'C'
#define ENUM_EVENT_CODE_END_OF_WCO_EARLY_CLOSING_THIS_MESSAGE_IS_INTENDED_TO_INDICATE_THAT_THE_EXCHANGE_WILL_NO_LONGER_ACCEPT_ANY_NEW_ORDERS_OR_CHANGES_TO_EXISTING_ORDERS_ON_LAST_TRADING_DATE_OF_WCO_OPTIONS 'W'

/*
 * Imbalance Direction Values
 */ 
#define ENUM_IMBALANCE_DIRECTION_BUY 'B'
#define ENUM_IMBALANCE_DIRECTION_SELL 'S'

/*
 * Market Side Values
 */ 
#define ENUM_MARKET_SIDE_BUY 'B'
#define ENUM_MARKET_SIDE_SELL 'S'
#define ENUM_MARKET_SIDE_BUY 'X'
#define ENUM_MARKET_SIDE_SELL 'Y'
#define ENUM_MARKET_SIDE_BUY 'M'
#define ENUM_MARKET_SIDE_SELL 'N'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SECONDS_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_BASE_REFERENCE_MESSAGE 'L'
#define ENUM_MESSAGE_TYPE_OPTION_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_SECURITY_OPEN_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_SHORT_MESSAGE 'a'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_LONG_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_ADD_QUOTE_SHORT_MESSAGE 'j'
#define ENUM_MESSAGE_TYPE_ADD_QUOTE_LONG_MESSAGE 'J'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_EXECUTED_MESSAGE 'E'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_EXECUTED_WITH_PRICE_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_CANCEL_MESSAGE 'X'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_REPLACE_SHORT_MESSAGE 'u'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_REPLACE_LONG_MESSAGE 'U'
#define ENUM_MESSAGE_TYPE_ORDER_REPLACE_SHORT_MESSAGE 'v'
#define ENUM_MESSAGE_TYPE_ORDER_REPLACE_LONG_MESSAGE 'V'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_DELETE_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_UPDATE_MESSAGE 'G'
#define ENUM_MESSAGE_TYPE_QUOTE_REPLACE_SHORT_MESSAGE 'k'
#define ENUM_MESSAGE_TYPE_QUOTE_REPLACE_LONG_MESSAGE 'K'
#define ENUM_MESSAGE_TYPE_QUOTE_DELETE_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_BLOCK_DELETE_MESSAGE 'Z'
#define ENUM_MESSAGE_TYPE_NON_AUCTION_OPTIONS_TRADE_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_OPTIONS_CROSS_TRADE_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_ORDER_EXECUTED_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_AUCTION_NOTIFICATION_MESSAGE 'I'

/*
 * Mpv Values
 */ 
#define ENUM_MPV_EVERYWHERE 'E'
#define ENUM_MPV_SCALED 'S'
#define ENUM_MPV_PILOT 'P'

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
 * Options Closing Type Values
 */ 
#define ENUM_OPTIONS_CLOSING_TYPE_NORMAL 'N'
#define ENUM_OPTIONS_CLOSING_TYPE_LATE 'L'
#define ENUM_OPTIONS_CLOSING_TYPE_WCO_EARLY_CLOSING 'W'

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_NONPRINTABLE 'N'
#define ENUM_PRINTABLE_PRINTABLE 'Y'

/*
 * Tradable Values
 */ 
#define ENUM_TRADABLE_TRADABLE 'Y'
#define ENUM_TRADABLE_NOT_TRADABLE 'N'

/*
 * Trade Indicator Values
 */ 
#define ENUM_TRADE_INDICATOR_NON_DISPLAYABLE 'O'
#define ENUM_TRADE_INDICATOR_COMPLEX 'C'
#define ENUM_TRADE_INDICATOR_PIXL 'P'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Auction Notification Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t AuctionId;
    char AuctionType;
    uint32_t PairedContracts;
    char ImbalanceDirection;
    uint32_t OptionId;
    int32_t ImbalancePrice;
    uint32_t ImbalanceVolume;
    char CustomerIndicator;
    char Reserved;
} AuctionNotificationMessageT;

/*
 * Structure: Broken Trade Order Executed Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
} BrokenTradeOrderExecutedMessageT;

/*
 * Structure: Options Cross Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OptionId;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    char CrossType;
    int32_t Price;
    uint32_t Volume;
} OptionsCrossTradeMessageT;

/*
 * Structure: Non Auction Options Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char TradeIndicator;
    uint32_t OptionId;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    int32_t Price;
    uint32_t Volume;
} NonAuctionOptionsTradeMessageT;

/*
 * Structure: Block Delete Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t NumberOfReferenceNumberDeltas;
    uint32_t ReferenceNumberDelta;
} BlockDeleteMessageT;

/*
 * Structure: Quote Delete Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t BidReferenceNumberDelta;
    uint32_t AskReferenceNumberDelta;
} QuoteDeleteMessageT;

/*
 * Structure: Quote Replace Long Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalBidReferenceNumberDelta;
    uint32_t BidReferenceNumberDelta;
    uint32_t OriginalAskReferenceNumberDelta;
    uint32_t AskReferenceNumberDelta;
    int32_t BidPrice;
    uint32_t BidSize;
    int32_t AskPrice;
    uint32_t AskSize;
} QuoteReplaceLongMessageT;

/*
 * Structure: Quote Replace Short Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalBidReferenceNumberDelta;
    uint32_t BidReferenceNumberDelta;
    uint32_t OriginalAskReferenceNumberDelta;
    uint32_t AskReferenceNumberDelta;
    int16_t ShortBidPrice;
    uint16_t ShortBidSize;
    int16_t ShortAskPrice;
    uint16_t ShortAskSize;
} QuoteReplaceShortMessageT;

/*
 * Structure: Single Side Update Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
    char ChangeReason;
    int32_t Price;
    uint32_t Volume;
} SingleSideUpdateMessageT;

/*
 * Structure: Single Side Delete Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
} SingleSideDeleteMessageT;

/*
 * Structure: Order Replace Long Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalReferenceNumberDelta;
    uint32_t NewReferenceNumberDelta;
    int32_t Price;
    uint32_t Volume;
    uint32_t OrderId;
} OrderReplaceLongMessageT;

/*
 * Structure: Order Replace Short Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalReferenceNumberDelta;
    uint32_t NewReferenceNumberDelta;
    int16_t ShortPrice;
    uint16_t ShortVolume;
    uint32_t OrderId;
} OrderReplaceShortMessageT;

/*
 * Structure: Single Side Replace Long Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalReferenceNumberDelta;
    uint32_t NewReferenceNumberDelta;
    int32_t Price;
    uint32_t Volume;
} SingleSideReplaceLongMessageT;

/*
 * Structure: Single Side Replace Short Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalReferenceNumberDelta;
    uint32_t NewReferenceNumberDelta;
    int16_t ShortPrice;
    uint16_t ShortVolume;
} SingleSideReplaceShortMessageT;

/*
 * Structure: Single Side Cancel Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
    uint32_t CancelledContracts;
} SingleSideCancelMessageT;

/*
 * Structure: Single Side Executed With Price Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    char Printable;
    int32_t Price;
    uint32_t Volume;
} SingleSideExecutedWithPriceMessageT;

/*
 * Structure: Single Side Executed Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
    uint32_t ExecutedContracts;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
} SingleSideExecutedMessageT;

/*
 * Structure: Add Quote Long Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t BidReferenceNumberDelta;
    uint32_t AskReferenceNumberDelta;
    uint32_t OptionId;
    int32_t BidPrice;
    uint32_t BidSize;
    int32_t AskPrice;
    uint32_t AskSize;
} AddQuoteLongMessageT;

/*
 * Structure: Add Quote Short Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t BidReferenceNumberDelta;
    uint32_t AskReferenceNumberDelta;
    uint32_t OptionId;
    int16_t ShortBidPrice;
    uint16_t ShortBidSize;
    int16_t ShortAskPrice;
    uint16_t ShortAskSize;
} AddQuoteShortMessageT;

/*
 * Structure: Add Order Long Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OrderReferenceNumberDelta;
    char MarketSide;
    uint32_t OptionId;
    int32_t Price;
    uint32_t Volume;
    uint32_t OrderId;
} AddOrderLongMessageT;

/*
 * Structure: Add Order Short Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OrderReferenceNumberDelta;
    char MarketSide;
    uint32_t OptionId;
    int16_t ShortPrice;
    uint16_t ShortVolume;
    uint32_t OrderId;
} AddOrderShortMessageT;

/*
 * Structure: Security Open Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OptionId;
    char OpenState;
} SecurityOpenMessageT;

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OptionId;
    char CurrentTradingState;
} TradingActionMessageT;

/*
 * Structure: Option Directory Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OptionId;
    char SecuritySymbol[6];
    uint8_t ExpirationYear;
    uint8_t ExpirationMonth;
    uint8_t ExpirationDate;
    int32_t ExplicitStrikePrice;
    char OptionType;
    uint8_t Source;
    char UnderlyingSymbol[13];
    char OptionsClosingType;
    char Tradable;
    char Mpv;
} OptionDirectoryMessageT;

/*
 * Structure: Base Reference Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t BaseReferenceNumber;
} BaseReferenceMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char EventCode;
} SystemEventMessageT;

/*
 * Structure: Seconds Message
 */ 
typedef struct {
    uint32_t Second;
} SecondsMessageT;

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
   Version: 1.6
   Date: Thursday, March 8, 2018
   Specification: phlxdepth.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
