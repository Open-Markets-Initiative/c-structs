/*******************************************************************************
 * C Structs For Nasdaq Nom Itch Itto 4.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_OPENING 'O'
#define ENUM_AUCTION_TYPE_REOPENING 'R'
#define ENUM_AUCTION_TYPE_PRICE_IMPROVEMENT 'P'
#define ENUM_AUCTION_TYPE_EXPOSURE 'I'

/*
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL 'S'

/*
 * Change Reason Values
 */ 
#define ENUM_CHANGE_REASON_USER 'U'
#define ENUM_CHANGE_REASON_REPRICE 'R'
#define ENUM_CHANGE_REASON_SUSPEND 'S'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_NASDAQ_OPENING_REOPENING 'O'
#define ENUM_CROSS_TYPE_PRICE_IMPROVEMENT 'P'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT 'H'
#define ENUM_CURRENT_TRADING_STATE_TRADING 'T'
#define ENUM_CURRENT_TRADING_STATE_BUY_SIDE_TRADING_SUSPENDED 'B'
#define ENUM_CURRENT_TRADING_STATE_SELL_SIDE_TRADING_SUSPENDED 'S'

/*
 * Customer Firm Indicator Values
 */ 
#define ENUM_CUSTOMER_FIRM_INDICATOR_CUSTOMER 'C'
#define ENUM_CUSTOMER_FIRM_INDICATOR_FIRM_JOINT 'F'
#define ENUM_CUSTOMER_FIRM_INDICATOR_ONFLOOR 'M'
#define ENUM_CUSTOMER_FIRM_INDICATOR_PROFESSIONAL 'P'
#define ENUM_CUSTOMER_FIRM_INDICATOR_BROKER_DEALER_NON_REGISTERED 'B'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES_THIS_IS_ALWAYS_THE_FIRST_MESSAGE_SENT_IN_ANY_TRADING_DAY 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS_THIS_MESSAGE_INDICATES_THAT_NASDAQ_IS_OPEN_AND_READY_TO_START_ACCEPTING_ORDERS 'S'
#define ENUM_EVENT_CODE_START_OF_OPENING_PROCESS_THIS_MESSAGE_IS_INTENDED_TO_INDICATE_THAT_NASDAQ_HAS_STARTED_ITS_OPENING_AUCTION_PROCESS 'Q'
#define ENUM_EVENT_CODE_END_OF_NORMAL_HOURS_PROCESSING_THIS_MESSAGE_IS_INTENDED_TO_INDICATE_THAT_NASDAQ_WILL_NO_LONGER_ACCEPT_ANY_NEW_ORDERS_OR_CHANGES_TO_EXISTING_ORDERS_FOR_OPTIONS_THAT_TRADE_DURING_NORMAL_TRADING_HOURS 'N'
#define ENUM_EVENT_CODE_END_OF_LATE_HOURS_PROCESSING_THIS_MESSAGE_IS_INTENDED_TO_INDICATE_THAT_NASDAQ_WILL_NO_LONGER_ACCEPT_ANY_NEW_ORDERS_OR_CHANGES_TO_EXISTING_ORDERS_FOR_OPTIONS_THAT_TRADE_DURING_EXTENDED_HOURS 'L'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS_THIS_MESSAGE_INDICATES_THAT_NASDAQ_OPTIONS_SYSTEM_IS_NOW_CLOSED 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGES_THIS_IS_ALWAYS_THE_LAST_MESSAGE_SENT_IN_ANY_TRADING_DAY 'C'

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

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_OPTIONS_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_SECURITY_OPEN_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE_SHORT_MESSAGE_FORM 'a'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE_LONG_FORM_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_ADD_QUOTE_MESSAGE_SHORT_FORM_MESSAGE 'j'
#define ENUM_MESSAGE_TYPE_ADD_QUOTE_MESSAGE_LONG_FORM_MESSAGE 'J'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_EXECUTED_MESSAGE 'E'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_EXECUTED_WITH_PRICE_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_ORDER_CANCEL_MESSAGE 'X'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_REPLACE_MESSAGE_SHORT_FORM 'u'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_REPLACE_MESSAGE_LONG_FORM 'U'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_DELETE_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_CHANGE_MESSAGE 'G'
#define ENUM_MESSAGE_TYPE_QUOTE_REPLACE_MESSAGE_SHORT_FORM 'k'
#define ENUM_MESSAGE_TYPE_QUOTE_REPLACE_MESSAGE_LONG_FORM 'K'
#define ENUM_MESSAGE_TYPE_QUOTE_DELETE_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_OPTIONS_TRADE_MESSAGES_NON_AUCTION 'P'
#define ENUM_MESSAGE_TYPE_OPTIONS_CROSS_TRADE_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_ORDER_EXECUTED_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_NOII_MESSAGE 'I'

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

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_NONPRINTABLE 'N'
#define ENUM_PRINTABLE_PRINTABLE 'Y'

/*
 * Tradable Values
 */ 
#define ENUM_TRADABLE_NOT_TRADABLE 'N'
#define ENUM_TRADABLE_IS_TRADABLE 'Y'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Noii Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint32_t AuctionId;
    char AuctionType;
    uint32_t PairedContracts;
    char ImbalanceDirection;
    uint32_t OptionId;
    int32_t ImbalancePrice;
    uint32_t ImbalanceVolume;
    char CustomerFirmIndicator;
    char Reserved;
} NoiiMessageT;

/*
 * Structure: Broken Trade Order Executed Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
} BrokenTradeOrderExecutedMessageT;

/*
 * Structure: Options Cross Trade Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint32_t OptionId;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    char CrossType;
    int32_t PriceLong;
    uint32_t VolumeLong;
} OptionsCrossTradeMessageT;

/*
 * Structure: Options Trade Messages Non Auction
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char BuySellIndicator;
    uint32_t OptionId;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    int32_t PriceLong;
    uint32_t VolumeLong;
} OptionsTradeMessagesNonAuctionT;

/*
 * Structure: Quote Delete Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t BidReferenceNumber;
    uint64_t AskReferenceNumber;
} QuoteDeleteMessageT;

/*
 * Structure: Quote Replace Message Long Form
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OriginalBidReferenceNumber;
    uint64_t BidReferenceNumber;
    uint64_t OriginalAskReferenceNumber;
    uint64_t AskReferenceNumber;
    int32_t BidPriceLong;
    uint32_t BidSizeLong;
    int32_t AskPriceLong;
    uint32_t AskSizeLong;
} QuoteReplaceMessageLongFormT;

/*
 * Structure: Quote Replace Message Short Form
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OriginalBidReferenceNumber;
    uint64_t BidReferenceNumber;
    uint64_t OriginalAskReferenceNumber;
    uint64_t AskReferenceNumber;
    int16_t BidPrice;
    uint16_t BidSize;
    int16_t AskPrice;
    uint16_t AskSize;
} QuoteReplaceMessageShortFormT;

/*
 * Structure: Single Side Change Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t ReferenceNumber;
    char ChangeReason;
    int32_t PriceLong;
    uint32_t VolumeLong;
} SingleSideChangeMessageT;

/*
 * Structure: Single Side Delete Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t ReferenceNumber;
} SingleSideDeleteMessageT;

/*
 * Structure: Single Side Replace Message Long Form
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OriginalReferenceNumber;
    uint64_t NewReferenceNumber;
    int32_t PriceLong;
    uint32_t VolumeLong;
} SingleSideReplaceMessageLongFormT;

/*
 * Structure: Single Side Replace Message Short Form
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OriginalReferenceNumber;
    uint64_t NewReferenceNumber;
    int16_t Price;
    uint16_t Volume;
} SingleSideReplaceMessageShortFormT;

/*
 * Structure: Order Cancel Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t CancelledContracts;
} OrderCancelMessageT;

/*
 * Structure: Single Side Executed With Price Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t ReferenceNumber;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    char Printable;
    int32_t PriceLong;
    uint32_t VolumeLong;
} SingleSideExecutedWithPriceMessageT;

/*
 * Structure: Single Side Executed Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t ReferenceNumber;
    uint32_t ExecutedContracts;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
} SingleSideExecutedMessageT;

/*
 * Structure: Add Quote Message Long Form Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t BidReferenceNumber;
    uint64_t AskReferenceNumber;
    uint32_t OptionId;
    uint32_t Bid;
    uint32_t BidSizeLong;
    uint32_t Ask;
    uint32_t AskSizeLong;
} AddQuoteMessageLongFormMessageT;

/*
 * Structure: Add Quote Message Short Form Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t BidReferenceNumber;
    uint64_t AskReferenceNumber;
    uint32_t OptionId;
    int16_t BidPrice;
    uint16_t BidSize;
    int16_t AskPrice;
    uint16_t AskSize;
} AddQuoteMessageShortFormMessageT;

/*
 * Structure: Add Order Message Long Form Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    char MarketSide;
    uint32_t OptionId;
    int32_t PriceLong;
    uint32_t VolumeLong;
} AddOrderMessageLongFormMessageT;

/*
 * Structure: Add Order Message Short Message Form
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    char MarketSide;
    uint32_t OptionId;
    int16_t Price;
    uint16_t Volume;
} AddOrderMessageShortMessageFormT;

/*
 * Structure: Security Open Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint32_t OptionId;
    char OpenState;
} SecurityOpenMessageT;

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    uint32_t OptionId;
    char CurrentTradingState;
} TradingActionMessageT;

/*
 * Structure: Options Directory Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
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
} OptionsDirectoryMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char EventCode;
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
   Version: 4.0
   Date: Thursday, February 8, 2018
   Specification: itto_spec40.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
