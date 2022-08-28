/*******************************************************************************
 * C Structs For Cboe C1 Options Pitch AuctionFeed 1.1.1 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_AUCTION_INSTRUCTION_MECHANISM = 'B'
#define ENUM_AUCTION_TYPE_SOLICITATION_AUCTION_MECHANISM = 'S'
#define ENUM_AUCTION_TYPE_STEP_UP_MECHANISM = 'T'
#define ENUM_AUCTION_TYPE_ALL_OR_NONE = 'A'

/*
 * Customer Indicator Values
 */ 
#define ENUM_CUSTOMER_INDICATOR_NON_CUSTOMER = 'N'
#define ENUM_CUSTOMER_INDICATOR_CUSTOMER = 'C'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE = 0x20
#define ENUM_MESSAGE_TYPE_UNIT_CLEAR_MESSAGE = 0x97
#define ENUM_MESSAGE_TYPE_AUCTION_NOTIFICATION_MESSAGE = 0xAD
#define ENUM_MESSAGE_TYPE_AUCTION_CANCEL_MESSAGE = 0xAE
#define ENUM_MESSAGE_TYPE_AUCTION_TRADE_MESSAGE = 0xAF
#define ENUM_MESSAGE_TYPE_AUCTION_UPDATE_MESSAGE = 0xD1
#define ENUM_MESSAGE_TYPE_AUCTION_SUMMARY_MESSAGE = 0x96
#define ENUM_MESSAGE_TYPE_WIDTH_UPDATE_MESSAGE = 0xD2
#define ENUM_MESSAGE_TYPE_SYMBOL_MAPPING_MESSAGE = 0x2E
#define ENUM_MESSAGE_TYPE_END_OF_SESSION_MESSAGE = 0x2D

/*
 * Opening Type Values
 */ 
#define ENUM_OPENING_TYPE_GTH_OPENING = 'G'
#define ENUM_OPENING_TYPE_RTH_OPENING = 'O'
#define ENUM_OPENING_TYPE_HALT_REOPENING = 'H'
#define ENUM_OPENING_TYPE_VOLATILITY_OPENING = 'V'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY = 'B'
#define ENUM_SIDE_SELL = 'S'

/*
 * Symbol Condition Values
 */ 
#define ENUM_SYMBOL_CONDITION_NORMAL = 'N'
#define ENUM_SYMBOL_CONDITION_CLOSING_ONLY = 'C'

/*
 * Width Type Values
 */ 
#define ENUM_WIDTH_TYPE_REGULAR = 'R'
#define ENUM_WIDTH_TYPE_VOLATILITY = 'V'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: End Of Session Message
 */ 
typedef struct {
    uint32_t Timestamp;
} EndOfSessionMessageT;

/*
 * Structure: Symbol Mapping Message
 */ 
typedef struct {
    char FeedSymbol[6];
    char OsiSymbol[21];
    char SymbolCondition;
    char Underlying[8];
} SymbolMappingMessageT;

/*
 * Structure: Width Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Underlying[8];
    char WidthType;
    uint32_t Multiplier;
} WidthUpdateMessageT;

/*
 * Structure: Auction Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol8[8];
    char OpeningType;
    uint64_t Price;
    uint32_t Quantity;
} AuctionSummaryMessageT;

/*
 * Structure: Auction Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol8[8];
    char OpeningType;
    uint64_t ReferencePrice;
    uint32_t BuyContracts;
    uint32_t SellContracts;
    uint64_t IndicativePrice;
    uint64_t AuctionOnlyPrice;
    char OpeningCondition[1];
} AuctionUpdateMessageT;

/*
 * Structure: Auction Trade Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
    uint64_t ExecutionId;
    uint64_t Price;
    uint32_t Contracts;
} AuctionTradeMessageT;

/*
 * Structure: Auction Cancel Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
} AuctionCancelMessageT;

/*
 * Structure: Auction Notification Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol6[6];
    uint64_t AuctionId;
    char AuctionType;
    char Side;
    uint64_t Price;
    uint32_t Contracts;
    char CustomerIndicator;
    char ParticipantId[4];
    uint32_t AuctionEndOffset;
    char ClientId[4];
} AuctionNotificationMessageT;

/*
 * Structure: Unit Clear Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} UnitClearMessageT;

/*
 * Structure: Time Message
 */ 
typedef struct {
    uint32_t Time;
} TimeMessageT;

/*
 * Structure: Payload
 */ 
typedef struct {
    TimeMessageT TimeMessage;
    UnitClearMessageT UnitClearMessage;
    AuctionNotificationMessageT AuctionNotificationMessage;
    AuctionCancelMessageT AuctionCancelMessage;
    AuctionTradeMessageT AuctionTradeMessage;
    AuctionUpdateMessageT AuctionUpdateMessage;
    AuctionSummaryMessageT AuctionSummaryMessage;
    WidthUpdateMessageT WidthUpdateMessage;
    SymbolMappingMessageT SymbolMappingMessage;
    EndOfSessionMessageT EndOfSessionMessage;
} PayloadT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint8_t MessageLength;
    uint8_t MessageType;
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
    uint16_t Length;
    uint8_t Count;
    uint8_t Unit;
    uint32_t Sequence;
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
   Organization: Chicago Board Options Exchange
   Version: 1.1.1
   Date: Thursday, December 6, 2018
   Specification: US_Options_Auction_Feed_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
