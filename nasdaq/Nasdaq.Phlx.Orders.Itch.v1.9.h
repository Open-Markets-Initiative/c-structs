/*******************************************************************************
 * C Structs For Nasdaq Phlx Itch Orders 1.9 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Action Values
 */ 
#define ENUM_ACTION_ADD 'A'
#define ENUM_ACTION_DELETE 'D'

/*
 * All Or None Values
 */ 
#define ENUM_ALL_OR_NONE_ALL_OR_NONE_ORDER 'Y'
#define ENUM_ALL_OR_NONE_NOT_ALL_OR_NONE_ORDER 'N'

/*
 * Auction Side Values
 */ 
#define ENUM_AUCTION_SIDE_BUY 'B'
#define ENUM_AUCTION_SIDE_SELL 'S'
#define ENUM_AUCTION_SIDE_SOLICITATION_AUCTION '*'

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_COLA 'C'
#define ENUM_AUCTION_TYPE_OPENING 'O'
#define ENUM_AUCTION_TYPE_REOPENING 'R'
#define ENUM_AUCTION_TYPE_PIXL 'P'
#define ENUM_AUCTION_TYPE_SOLICITATION 'S'
#define ENUM_AUCTION_TYPE_ORDER_EXPOSURE 'I'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT_IN_EFFECT 'H'
#define ENUM_CURRENT_TRADING_STATE_PHLX_TRADING_RESUMED 'T'

/*
 * Customer Firm Indicator Values
 */ 
#define ENUM_CUSTOMER_FIRM_INDICATOR_CUSTOMER_ORDER 'C'
#define ENUM_CUSTOMER_FIRM_INDICATOR_FIRM_ORDER 'F'
#define ENUM_CUSTOMER_FIRM_INDICATOR_ONFLOOR_MARKET_MAKER 'M'
#define ENUM_CUSTOMER_FIRM_INDICATOR_BROKER_DEALER_ORDER 'B'
#define ENUM_CUSTOMER_FIRM_INDICATOR_PROFESSIONAL_ORDER 'P'
#define ENUM_CUSTOMER_FIRM_INDICATOR_NA_FOR_IMPLIED_ORDER ' '

/*
 * Debit Or Credit Values
 */ 
#define ENUM_DEBIT_OR_CREDIT_NET_DEBIT 'D'
#define ENUM_DEBIT_OR_CREDIT_NET_CREDIT 'C'
#define ENUM_DEBIT_OR_CREDIT_EVEN_OR_MARKET_ORDER ' '
#define ENUM_DEBIT_OR_CREDIT_ANONYMOUS '*'

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
 * Leg Open Close Indicator Values
 */ 
#define ENUM_LEG_OPEN_CLOSE_INDICATOR_OPENS_POSITION 'O'
#define ENUM_LEG_OPEN_CLOSE_INDICATOR_CLOSES_POSITION 'C'
#define ENUM_LEG_OPEN_CLOSE_INDICATOR_STOCK_LEG ' '

/*
 * Market Qualifier Values
 */ 
#define ENUM_MARKET_QUALIFIER_OPENING_ORDER 'O'
#define ENUM_MARKET_QUALIFIER_IMPLIED_ORDER 'I'
#define ENUM_MARKET_QUALIFIER_NA ' '

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_OPTIONS_DIRECTORY_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_COMPLEX_ORDER_STRATEGY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_SECURITY_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_COMPLEX_TRADING_ACTION_MESSAGE 'I'
#define ENUM_MESSAGE_TYPE_SECURITY_OPEN_CLOSED_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_STRATEGY_OPEN_CLOSED_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_SIMPLE_ORDER_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_COMPLEX_ORDER_MESSAGE 'X'
#define ENUM_MESSAGE_TYPE_AUCTION_NOTIFICATION_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_COMPLEX_AUCTION_NOTIFICATION_MESSAGE 'C'

/*
 * Open Close Indicator Values
 */ 
#define ENUM_OPEN_CLOSE_INDICATOR_OPENS_POSITION 'O'
#define ENUM_OPEN_CLOSE_INDICATOR_CLOSES_POSITION 'C'
#define ENUM_OPEN_CLOSE_INDICATOR_NA ' '

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
#define ENUM_OPTION_TYPE_STOCK ' '

/*
 * Order Status Values
 */ 
#define ENUM_ORDER_STATUS_OPEN 'O'
#define ENUM_ORDER_STATUS_FILLED 'F'
#define ENUM_ORDER_STATUS_CANCELLED 'C'
#define ENUM_ORDER_STATUS_RENOTIFICATION 'R'

/*
 * Order Type Values
 */ 
#define ENUM_ORDER_TYPE_MARKET 'M'
#define ENUM_ORDER_TYPE_LIMIT 'L'
#define ENUM_ORDER_TYPE_ANONYMOUS '*'

/*
 * Phlx Tradable Values
 */ 
#define ENUM_PHLX_TRADABLE_TRADABLE 'Y'
#define ENUM_PHLX_TRADABLE_NOT_TRADABLE 'N'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 'B'
#define ENUM_SIDE_SELL 'S'
#define ENUM_SIDE_HIDDEN '*'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY_ORDER 'D'
#define ENUM_TIME_IN_FORCE_GTC 'G'
#define ENUM_TIME_IN_FORCE_IOC 'I'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Complex Auction Notification Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t StrategyId;
    uint32_t AuctionId;
    char AuctionType;
    int32_t Price;
    char AuctionSide;
    char DebitOrCredit;
    uint32_t Volume;
} ComplexAuctionNotificationMessageT;

/*
 * Bitfield: Expiration
 */ 
typedef struct {
    uint16_t
    Year : 7,
    Month : 4,
    Day : 5;
} ExpirationT;

/*
 * Structure: Auction Notification Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[5];
    ExpirationT Expiration;
    int32_t ExplicitStrikePrice;
    char OptionType;
    uint32_t AuctionId;
    char AuctionType;
    int32_t Price;
    char AuctionSide;
    uint32_t MatchedVolume;
    uint32_t ImbalanceVolume;
    uint32_t Reserved;
} AuctionNotificationMessageT;

/*
 * Structure: Complex Order Leg
 */ 
typedef struct {
    char LegOpenCloseIndicator;
    uint32_t OptionId;
    char SecuritySymbol[5];
    ExpirationT Expiration;
    int32_t ExplicitStrikePrice;
    char OptionType;
    char Side;
    uint32_t LegRatio;
} ComplexOrderLegT;

/*
 * Structure: Complex Order Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t StrategyId;
    uint32_t OrderId;
    char Side;
    uint32_t OriginalOrderVolume;
    uint32_t ExecutableOrderVolume;
    char OrderStatus;
    char OrderType;
    int32_t LimitPrice;
    char DebitOrCredit;
    char AllOrNone;
    char TimeInForce;
    char CustomerFirmIndicator;
    char UnderlyingSymbol[13];
    uint8_t NumberOfLegs;
} ComplexOrderMessageT;

/*
 * Structure: Simple Order Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[5];
    ExpirationT Expiration;
    int32_t ExplicitStrikePrice;
    char OptionType;
    uint32_t OrderId;
    char Side;
    uint32_t OriginalOrderVolume;
    uint32_t ExecutableOrderVolume;
    char OrderStatus;
    char OrderType;
    char MarketQualifier;
    int32_t LimitPrice;
    char AllOrNone;
    char TimeInForce;
    char CustomerFirmIndicator;
    char OpenCloseIndicator;
} SimpleOrderMessageT;

/*
 * Structure: Strategy Open Closed Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t StrategyId;
    char OpenState;
} StrategyOpenClosedMessageT;

/*
 * Structure: Security Open Closed Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[5];
    ExpirationT Expiration;
    int32_t ExplicitStrikePrice;
    char OptionType;
    char OpenState;
} SecurityOpenClosedMessageT;

/*
 * Structure: Complex Trading Action Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t StrategyId;
    char CurrentTradingState;
} ComplexTradingActionMessageT;

/*
 * Structure: Security Trading Action Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[5];
    ExpirationT Expiration;
    int32_t ExplicitStrikePrice;
    char OptionType;
    char CurrentTradingState;
} SecurityTradingActionMessageT;

/*
 * Structure: Complex Order Strategy Leg
 */ 
typedef struct {
    uint32_t OptionId;
    char SecuritySymbol[5];
    ExpirationT Expiration;
    int32_t ExplicitStrikePrice;
    char OptionType;
    char Side;
    uint32_t LegRatio;
} ComplexOrderStrategyLegT;

/*
 * Structure: Complex Order Strategy Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t StrategyId;
    uint8_t Source;
    char UnderlyingSymbol[13];
    char Action;
    uint8_t NumberOfLegs;
} ComplexOrderStrategyMessageT;

/*
 * Structure: Options Directory Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[5];
    ExpirationT Expiration;
    int32_t ExplicitStrikePrice;
    char OptionType;
    uint8_t Source;
    char UnderlyingSymbol[13];
    char OptionClosingType;
    char PhlxTradable;
} OptionsDirectoryMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    char EventCode;
    uint8_t Version;
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
    uint32_t Sequence;
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
   Version: 1.9
   Date: Monday, August 10, 2015
   Specification: topoplusorders.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
