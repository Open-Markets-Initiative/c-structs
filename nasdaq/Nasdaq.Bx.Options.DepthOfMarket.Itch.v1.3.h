/*******************************************************************************
 * C Structs For Nasdaq Bx Options Itch DepthOfMarket 1.3 Binary Model
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
#define ENUM_AUCTION_TYPE_PRICE_IMPROVEMENT 'P'

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
#define ENUM_CROSS_TYPE_BX_OPENING_REOPENING 'O'
#define ENUM_CROSS_TYPE_BX_OPENING_REOPENING 'P'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT 'H'
#define ENUM_CURRENT_TRADING_STATE_TRADING 'T'
#define ENUM_CURRENT_TRADING_STATE_BUY_SIDE_TRADING_SUSPENDED 'B'
#define ENUM_CURRENT_TRADING_STATE_SELL_SIDE_TRADING_SUSPENDED 'S'
#define ENUM_CURRENT_TRADING_STATE_OPEN 'Y'
#define ENUM_CURRENT_TRADING_STATE_CLOSED 'N'

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
#define ENUM_EVENT_CODE_START_OF_MESSAGES 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS 'S'
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS 'Q'
#define ENUM_EVENT_CODE_END_OF_MARKET_HOURS 'M'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGES 'C'

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
#define ENUM_MESSAGE_TYPE_SECONDS_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_BASE_REFERENCE_MESSAGE 'L'
#define ENUM_MESSAGE_TYPE_OPTION_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_OPTION_OPEN_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE_SHORT_FORM 'a'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE_LONG_FORM 'A'
#define ENUM_MESSAGE_TYPE_ADD_QUOTE_MESSAGE_SHORT_FORM 'j'
#define ENUM_MESSAGE_TYPE_ADD_QUOTE_MESSAGE_LONG_FORM 'J'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_EXECUTED_MESSAGE 'E'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_ORDER_EXECUTED_WITH_PRICE_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_ORDER_CANCEL_MESSAGE 'X'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_REPLACE_MESSAGE_SHORT_FORM 'u'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_REPLACE_MESSAGE_LONG_FORM 'U'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_DELETE_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_UPDATE_MESSAGE 'G'
#define ENUM_MESSAGE_TYPE_QUOTE_REPLACE_MESSAGE_SHORT_FORM 'k'
#define ENUM_MESSAGE_TYPE_QUOTE_REPLACE_MESSAGE_LONG_FORM 'K'
#define ENUM_MESSAGE_TYPE_QUOTE_DELETE_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_BLOCK_DELETE_MESSAGE 'Z'
#define ENUM_MESSAGE_TYPE_NON_AUCTION_OPTIONS_TRADE_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_OPTIONS_CROSS_TRADE_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_OR_ORDER_EXECUTION_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_NET_ORDER_IMBALANCE_INDICATOR_MESSAGE 'I'

/*
 * Mpv Values
 */ 
#define ENUM_MPV_EVERYWHERE 'E'
#define ENUM_MPV_SCALED 'S'
#define ENUM_MPV_PILOT 'P'

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
 * Structure: Net Order Imbalance Indicator Message
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
    char CustomerFirmIndicator;
    char Reserved;
} NetOrderImbalanceIndicatorMessageT;

/*
 * Structure: Broken Trade Or Order Execution Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
} BrokenTradeOrOrderExecutionMessageT;

/*
 * Structure: Options Cross Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OptionId;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    char CrossType;
    int32_t PriceLong;
    uint32_t VolumeLong;
} OptionsCrossTradeMessageT;

/*
 * Structure: Non Auction Options Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char BuySellIndicator;
    uint32_t OptionId;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    int32_t PriceLong;
    uint32_t VolumeLong;
} NonAuctionOptionsTradeMessageT;

/*
 * Structure: Block Delete Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TotalNumberOfReferenceNumberDeltas;
    uint32_t ReferenceNumberDeltan;
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
 * Structure: Quote Replace Message Long Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalBidReferenceNumberDelta;
    uint32_t BidReferenceNumberDelta;
    uint32_t OriginalAskReferenceNumberDelta;
    uint32_t AskReferenceDeltaNumber;
    int32_t BidPriceLong;
    uint32_t BidSizeLong;
    int32_t AskPriceLong;
    uint32_t AskSizeLong;
} QuoteReplaceMessageLongFormT;

/*
 * Structure: Quote Replace Message Short Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalBidReferenceNumberDelta;
    uint32_t BidReferenceNumberDelta;
    uint32_t OriginalAskReferenceNumberDelta;
    uint32_t AskReferenceDeltaNumber;
    int16_t BidPrice;
    uint16_t BidSize;
    int16_t AskPrice;
    uint16_t AskSize;
} QuoteReplaceMessageShortFormT;

/*
 * Structure: Single Side Update Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
    char ChangeReason;
    int32_t PriceLong;
    uint32_t VolumeLong;
} SingleSideUpdateMessageT;

/*
 * Structure: Single Side Delete Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
} SingleSideDeleteMessageT;

/*
 * Structure: Single Side Replace Message Long Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalReferenceNumberDelta;
    uint32_t NewReferenceNumberDelta;
    int32_t PriceLong;
    uint32_t VolumeLong;
} SingleSideReplaceMessageLongFormT;

/*
 * Structure: Single Side Replace Message Short Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalReferenceNumberDelta;
    uint32_t NewReferenceNumberDelta;
    int16_t Price;
    uint16_t Volume;
} SingleSideReplaceMessageShortFormT;

/*
 * Structure: Order Cancel Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OrderReferenceNumberDelta;
    uint32_t CancelledContracts;
} OrderCancelMessageT;

/*
 * Structure: Single Side Order Executed With Price Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    char Printable;
    int32_t PriceLong;
    uint32_t VolumeLong;
} SingleSideOrderExecutedWithPriceMessageT;

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
 * Structure: Add Quote Message Long Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t BidReferenceNumberDelta;
    uint32_t AskReferenceNumberDelta;
    uint32_t OptionId;
    uint32_t Bid;
    uint32_t BidSizeLong;
    uint32_t Ask;
    uint32_t AskSizeLong;
} AddQuoteMessageLongFormT;

/*
 * Structure: Add Quote Message Short Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t BidReferenceNumberDelta;
    uint32_t AskReferenceNumberDelta;
    uint32_t OptionId;
    int16_t BidPrice;
    uint16_t BidSize;
    int16_t AskPrice;
    uint16_t AskSize;
} AddQuoteMessageShortFormT;

/*
 * Structure: Add Order Message Long Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OrderReferenceNumberDelta;
    char MarketSide;
    uint32_t OptionId;
    int32_t PriceLong;
    uint32_t VolumeLong;
} AddOrderMessageLongFormT;

/*
 * Structure: Add Order Message Short Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OrderReferenceNumberDelta;
    char MarketSide;
    uint32_t OptionId;
    int16_t Price;
    uint16_t Volume;
} AddOrderMessageShortFormT;

/*
 * Structure: Option Open Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OptionId;
    char OpenState[1];
} OptionOpenMessageT;

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
   Version: 1.3
   Date: Thursday, November 2, 2017
   Specification: BXOptions_DepthofMarket.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
