/*******************************************************************************
 * C Structs For Nasdaq Ise Itch OrderFeed 1.1 Binary Model
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
 * Closing Only Values
 */ 
#define ENUM_CLOSING_ONLY_CLOSING_POSITION_ONLY 'Y'
#define ENUM_CLOSING_ONLY_NOT_CLOSING_POSITION_ONLY 'N'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT_IN_EFFECT 'H'
#define ENUM_CURRENT_TRADING_STATE_TRADING_ON_THE_OPTIONS_SYSTEM 'T'

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
#define ENUM_EXEC_FLAG_HIDDEN ' '

/*
 * Imbalance Direction Values
 */ 
#define ENUM_IMBALANCE_DIRECTION_BUY_IMBALANCE 'B'
#define ENUM_IMBALANCE_DIRECTION_SELL_IMBALANCE 'S'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_OPTION_DIRECTORY_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_SECURITY_OPEN_CLOSED_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_OPENING_IMBALANCE_MESSAGE 'N'
#define ENUM_MESSAGE_TYPE_ORDER_ON_BOOK_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_AUCTION_MESSAGE 'A'

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

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL 'C'
#define ENUM_OPTION_TYPE_PUT 'P'

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
 * Side Values
 */ 
#define ENUM_SIDE_BID 'B'
#define ENUM_SIDE_OFFER_ASK 'A'
#define ENUM_SIDE_HIDDEN ' '

/*
 * Tradable Values
 */ 
#define ENUM_TRADABLE_TRADABLE 'Y'
#define ENUM_TRADABLE_NOT_TRADABLE 'N'

/*
 * Trading Type Values
 */ 
#define ENUM_TRADING_TYPE_EQUITY 'E'
#define ENUM_TRADING_TYPE_INDEX 'I'
#define ENUM_TRADING_TYPE_ETF 'F'
#define ENUM_TRADING_TYPE_CURRENCY 'C'


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
 * Structure: Auction Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    uint32_t AuctionId;
    char OrderType;
    char Side;
    int32_t Price;
    uint32_t Size;
    char ExecFlag;
    char OrderCapacity;
    char OwnerId[6];
    char Giveup[6];
    char Cmta[6];
    char AuctionEvent;
    uint8_t NumberOfResponses;
} AuctionMessageT;

/*
 * Structure: Order On Book Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    char OrderType;
    char Side;
    int32_t Price;
    uint32_t Size;
    char ExecFlag;
    char OrderCapacity;
    char OwnerId[6];
    char Giveup[6];
    char Cmta[6];
} OrderOnBookMessageT;

/*
 * Structure: Opening Imbalance Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    uint32_t PairedContracts;
    char ImbalanceDirection;
    int32_t ImbalancePrice;
    uint32_t ImbalanceVolume;
} OpeningImbalanceMessageT;

/*
 * Structure: Security Open Closed Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    char OpenState;
} SecurityOpenClosedMessageT;

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    char CurrentTradingState;
} TradingActionMessageT;

/*
 * Structure: Option Directory Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    char SecuritySymbol[6];
    uint8_t ExpirationYear;
    uint8_t ExpirationMonth;
    uint8_t ExpirationDay;
    int64_t StrikePrice;
    char OptionType;
    uint8_t Source;
    char UnderlyingSymbol[13];
    char TradingType;
    uint16_t ContractSize;
    char OptionClosingType;
    char Tradable;
    char Mpv;
    char ClosingOnly;
} OptionDirectoryMessageT;

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
