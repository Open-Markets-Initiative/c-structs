/*******************************************************************************
 * C Structs For Asx Securities Itch SR8 2.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES 'O'
#define ENUM_EVENT_CODE_END_OF_MESSAGES 'C'

/*
 * Exchange Order Type Values
 */ 
#define ENUM_EXCHANGE_ORDER_TYPE_MARKET_BID 4
#define ENUM_EXCHANGE_ORDER_TYPE_PRICE_STABILISATION 8
#define ENUM_EXCHANGE_ORDER_TYPE_UNDISCLOSED 32

/*
 * Financial Product Values
 */ 
#define ENUM_FINANCIAL_PRODUCT_OPTION 1
#define ENUM_FINANCIAL_PRODUCT_FUTURE 3
#define ENUM_FINANCIAL_PRODUCT_CASH 5
#define ENUM_FINANCIAL_PRODUCT_STANDARD_COMBINATION 11

/*
 * Leg 1 Side Values
 */ 
#define ENUM_LEG_1_SIDE_BUY_LEG 'B'
#define ENUM_LEG_1_SIDE_SELL_LEG 'C'

/*
 * Leg 2 Side Values
 */ 
#define ENUM_LEG_2_SIDE_BUY_LEG 'B'
#define ENUM_LEG_2_SIDE_SELL_LEG 'C'

/*
 * Leg 3 Side Values
 */ 
#define ENUM_LEG_3_SIDE_BUY_LEG 'B'
#define ENUM_LEG_3_SIDE_SELL_LEG 'C'
#define ENUM_LEG_3_SIDE_NOT_DEFINED '?'

/*
 * Leg 4 Side Values
 */ 
#define ENUM_LEG_4_SIDE_BUY_LEG 'B'
#define ENUM_LEG_4_SIDE_SELL_LEG 'C'
#define ENUM_LEG_4_SIDE_NOT_DEFINED '?'

/*
 * Lot Type Values
 */ 
#define ENUM_LOT_TYPE_UNDEFINED 0
#define ENUM_LOT_TYPE_ODD_LOT 1
#define ENUM_LOT_TYPE_ROUND_LOT 2
#define ENUM_LOT_TYPE_BLOCK_LOT 3
#define ENUM_LOT_TYPE_ALL_OR_NONE_LOT 4

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SECONDS_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_ORDER_BOOK_DIRECTORY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_COMBINATION_ORDER_BOOK_DIRECTORY_MESSAGE 'M'
#define ENUM_MESSAGE_TYPE_TICK_SIZE_MESSAGE 'L'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_ORDER_BOOK_STATE_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_NO_PARTICIPANT_ID_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_PARTICIPANT_ID_MESSAGE 'F'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 'E'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_WITH_PRICE_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_ORDER_REPLACE_MESSAGE 'U'
#define ENUM_MESSAGE_TYPE_ORDER_DELETE_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_TRADE_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_EQUILIBRIUM_PRICE_UPDATE_MESSAGE 'Z'

/*
 * Occurred At Cross Values
 */ 
#define ENUM_OCCURRED_AT_CROSS_YES 'Y'
#define ENUM_OCCURRED_AT_CROSS_NO 'N'

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_YES 'Y'
#define ENUM_PRINTABLE_NO 'N'

/*
 * Side Values
 */ 
#define ENUM_SIDE_SELL 'S'
#define ENUM_SIDE_BUY 'B'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Equilibrium Price Update Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint32_t OrderBookId;
    uint64_t BidQuantity;
    uint64_t AskQuantity;
    int32_t EquilibriumPrice;
    int32_t BestBidPrice;
    int32_t BestAskPrice;
    uint64_t BestBidQuantity;
    uint64_t BestAskQuantity;
} EquilibriumPriceUpdateMessageT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    char MatchId[12];
    char Side;
    uint64_t Quantity;
    uint32_t OrderBookId;
    int32_t TradePrice;
    char ParticipantIdOwner[7];
    char ParticipantIdCounterparty[7];
    char Printable;
    char OccurredAtCross;
} TradeMessageT;

/*
 * Structure: Order Delete Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OrderId;
    uint32_t OrderBookId;
    char Side;
} OrderDeleteMessageT;

/*
 * Structure: Order Replace Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OrderId;
    uint32_t OrderBookId;
    char Side;
    uint32_t NewOrderBookPosition;
    uint64_t Quantity;
    int32_t Price;
    uint16_t ExchangeOrderType;
} OrderReplaceMessageT;

/*
 * Structure: Order Executed With Price Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OrderId;
    uint32_t OrderBookId;
    char Side;
    uint64_t ExecutedQuantity;
    char MatchId[12];
    char ParticipantIdOwner[7];
    char ParticipantIdCounterparty[7];
    int32_t TradePrice;
    char OccurredAtCross;
    char Printable;
} OrderExecutedWithPriceMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OrderId;
    uint32_t OrderBookId;
    char Side;
    uint64_t ExecutedQuantity;
    char MatchId[12];
    char ParticipantIdOwner[7];
    char ParticipantIdCounterparty[7];
} OrderExecutedMessageT;

/*
 * Structure: Add Order Participant Id Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OrderId;
    uint32_t OrderBookId;
    char Side;
    uint32_t OrderBookPosition;
    uint64_t Quantity;
    int32_t Price;
    uint16_t ExchangeOrderType;
    uint8_t LotType;
    char ParticipantId[7];
} AddOrderParticipantIdMessageT;

/*
 * Structure: Add Order No Participant Id Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OrderId;
    uint32_t OrderBookId;
    char Side;
    uint32_t OrderBookPosition;
    uint64_t Quantity;
    int32_t Price;
    uint16_t ExchangeOrderType;
    uint8_t LotType;
} AddOrderNoParticipantIdMessageT;

/*
 * Structure: Order Book State Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint32_t OrderBookId;
    char StateName[20];
} OrderBookStateMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    char EventCode;
} SystemEventMessageT;

/*
 * Structure: Tick Size Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint32_t OrderBookId;
    uint64_t TickSize;
    int32_t PriceFrom;
    int32_t PriceTo;
} TickSizeMessageT;

/*
 * Structure: Combination Order Book Directory Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint32_t OrderBookId;
    char Symbol[32];
    char LongName[32];
    char Isin[12];
    uint8_t FinancialProduct;
    char TradingCurrency[3];
    uint16_t NumberOfDecimalsInPrice;
    uint16_t NumberOfDecimalsInNominalValue;
    uint32_t OddLotSize;
    uint32_t RoundLotSize;
    uint32_t BlockLotSize;
    uint64_t NominalValue;
    char Leg1Symbol[32];
    char Leg1Side;
    uint32_t Leg1Ratio;
    char Leg2Symbol[32];
    char Leg2Side;
    uint32_t Leg2Ratio;
    char Leg3Symbol[32];
    char Leg3Side;
    uint32_t Leg3Ratio;
    char Leg4Symbol[32];
    char Leg4Side;
    uint32_t Leg4Ratio;
} CombinationOrderBookDirectoryMessageT;

/*
 * Structure: Order Book Directory Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint32_t OrderBookId;
    char Symbol[32];
    char LongName[32];
    char Isin[12];
    uint8_t FinancialProduct;
    char TradingCurrency[3];
    uint16_t NumberOfDecimalsInPrice;
    uint16_t NumberOfDecimalsInNominalValue;
    uint32_t OddLotSize;
    uint32_t RoundLotSize;
    uint32_t BlockLotSize;
    uint64_t NominalValue;
} OrderBookDirectoryMessageT;

/*
 * Structure: Seconds Message
 */ 
typedef struct {
    uint32_t TimestampSeconds;
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
   Organization: Australian Securities Exchange
   Version: 2.0
   Date: Wednesday, April 1, 2015
   Specification: asx_041177.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
