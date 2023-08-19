/*******************************************************************************
 * C Structs For Asx Securities Ouch SR8 2.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Capacity Of Participant Values
 */ 
#define ENUM_CAPACITY_OF_PARTICIPANT_AGENCY 'A'
#define ENUM_CAPACITY_OF_PARTICIPANT_PRINCIPAL 'P'
#define ENUM_CAPACITY_OF_PARTICIPANT_MIXED_AGENCY_AND_PRINCIPAL 'M'

/*
 * Directed Wholesale Values
 */ 
#define ENUM_DIRECTED_WHOLESALE_TRUE 'Y'
#define ENUM_DIRECTED_WHOLESALE_FALSE_DEFAULT 'N'

/*
 * Order State Values
 */ 
#define ENUM_ORDER_STATE_ON_BOOK 1
#define ENUM_ORDER_STATE_NOT_ON_BOOK 2
#define ENUM_ORDER_STATE_OUCH_OWNERSHIP_LOST 99

/*
 * Ouch Order Type Values
 */ 
#define ENUM_OUCH_ORDER_TYPE_LIMIT_ORDER 'Y'
#define ENUM_OUCH_ORDER_TYPE_CENTRE_POINT_ORDER 'N'
#define ENUM_OUCH_ORDER_TYPE_CENTRE_POINT_ORDER 'D'
#define ENUM_OUCH_ORDER_TYPE_SWEEP_ORDER 'S'
#define ENUM_OUCH_ORDER_TYPE_DUALPOSTED_SWEEP_ORDER 'P'
#define ENUM_OUCH_ORDER_TYPE_CENTRE_POINT_BLOCK_ORDER_WITH_SINGLE_FILL_MAQ 'B'
#define ENUM_OUCH_ORDER_TYPE_CENTRE_POINT_ORDER_WITH_SINGLE_FILL_MAQ 'F'
#define ENUM_OUCH_ORDER_TYPE_LIMIT_SWEEP_ORDER_WITH_SINGLE_FILL_MAQ 'T = Limit Sweep order (can be dual-posted if entered price is at half-tick) with single fill MAQ'
#define ENUM_OUCH_ORDER_TYPE_ANY_PRICE_BLOCK_ORDER 'C'
#define ENUM_OUCH_ORDER_TYPE_ANY_PRICE_BLOCK_ORDER_WITH_SINGLE_FILL_MAQ 'E'

/*
 * Packet Type Values
 */ 
#define ENUM_PACKET_TYPE_DEBUG_PACKET '+'
#define ENUM_PACKET_TYPE_LOGIN_ACCEPTED_PACKET 'A'
#define ENUM_PACKET_TYPE_LOGIN_REJECTED_PACKET 'J'
#define ENUM_PACKET_TYPE_SEQUENCED_DATA_PACKET 'S'
#define ENUM_PACKET_TYPE_SERVER_HEARTBEAT_PACKET 'H'
#define ENUM_PACKET_TYPE_END_OF_SESSION_PACKET 'Z'
#define ENUM_PACKET_TYPE_LOGIN_REQUEST_PACKET 'L'
#define ENUM_PACKET_TYPE_UNSEQUENCED_DATA_PACKET 'U'
#define ENUM_PACKET_TYPE_CLIENT_HEARTBEAT_PACKET 'R'
#define ENUM_PACKET_TYPE_LOGOUT_REQUEST_PACKET 'O'

/*
 * Reason Values
 */ 
#define ENUM_REASON_CANCELLED_BY_USER 1
#define ENUM_REASON_ORDER_INACTIVATED_DUE_TO_CONNECTION_LOSS 4
#define ENUM_REASON_FILL_AND_KILL_ORDER_THAT_WAS_DELETED_IN_AN_AUCTION 9
#define ENUM_REASON_ORDER_DELETED_BY_ASX_ON_BEHALF_OF_THE_CUSTOMER 10
#define ENUM_REASON_DELETED_BY_SYSTEM_DUE_TO_INSTRUMENT_SESSION_CHANGE 20
#define ENUM_REASON_INACTIVATED_BY_SYSTEM_DUE_TO_INSTRUMENT_SESSION_CHANGE 21
#define ENUM_REASON_INACTIVATED_DAY_ORDER 24

/*
 * Sequenced Message Type Values
 */ 
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_ACCEPTED_MESSAGE 'A'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_REJECTED_MESSAGE 'J'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_REPLACED_MESSAGE 'U'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_CANCELLED_MESSAGE 'C'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 'E'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY_ORDER 'B'
#define ENUM_SIDE_SELL_ORDER 'S'
#define ENUM_SIDE_SHORT_SELL_ORDER 'T'
#define ENUM_SIDE_BUY_ORDER_IN_A_COMBINATION 'C'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY 0
#define ENUM_TIME_IN_FORCE_FILL_AND_KILL 3
#define ENUM_TIME_IN_FORCE_FILL_OR_KILL 4

/*
 * Unsequenced Message Type Values
 */ 
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_ENTER_ORDER_MESSAGE 'O'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_REPLACE_ORDER_MESSAGE 'U'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE 'X'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_CANCEL_BY_ORDER_ID_MESSAGE 'Y'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Cancel By Order Id Message
 */ 
typedef struct {
    uint32_t OrderBookId;
    char Side;
    uint64_t OrderId;
} CancelByOrderIdMessageT;

/*
 * Structure: Cancel Order Message
 */ 
typedef struct {
    char OrderToken[14];
} CancelOrderMessageT;

/*
 * Structure: Replace Order Message
 */ 
typedef struct {
    char ExistingOrderToken[14];
    char ReplacementOrderToken[14];
    uint64_t Quantity;
    int32_t Price;
    uint8_t OpenClose;
    char ClientAccount[10];
    char CustomerInfo[15];
    char ExchangeInfo[32];
    char CapacityOfParticipant;
    char DirectedWholesale;
    char ExecutionVenue[4];
    char IntermediaryId[10];
    char OrderOrigin[20];
    char Filler[8];
    uint64_t ShortSellQuantity;
    uint64_t MinimumAcceptableQuantity;
} ReplaceOrderMessageT;

/*
 * Structure: Enter Order Message
 */ 
typedef struct {
    char OrderToken[14];
    uint32_t OrderBookId;
    char Side;
    uint64_t Quantity;
    int32_t Price;
    uint8_t TimeInForce;
    uint8_t OpenClose;
    char ClientAccount[10];
    char CustomerInfo[15];
    char ExchangeInfo[32];
    char ClearingParticipant[1];
    uint32_t CrossingKey;
    char CapacityOfParticipant;
    char DirectedWholesale;
    char ExecutionVenue[4];
    char IntermediaryId[10];
    char OrderOrigin[20];
    char Filler[8];
    char OuchOrderType;
    uint64_t ShortSellQuantity;
    uint64_t MinimumAcceptableQuantity;
} EnterOrderMessageT;

/*
 * Structure: Unsequenced Data Packet
 */ 
typedef struct {
    char UnsequencedMessageType;
} UnsequencedDataPacketT;

/*
 * Structure: Login Request Packet
 */ 
typedef struct {
    char Username[6];
    char Password[10];
    char RequestedSession[10];
    char RequestedSequenceNumber[20];
} LoginRequestPacketT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint64_t TimestampNanoseconds;
    char OrderToken[14];
    uint32_t OrderBookId;
    uint64_t TradedQuantity;
    int32_t TradePrice;
    char MatchId[12];
    uint16_t DealSource;
    uint8_t MatchAttributes;
} OrderExecutedMessageT;

/*
 * Structure: Order Cancelled Message
 */ 
typedef struct {
    uint64_t TimestampNanoseconds;
    char OrderToken[14];
    uint32_t OrderBookId;
    char Side;
    uint64_t OrderId;
    uint8_t Reason;
} OrderCancelledMessageT;

/*
 * Structure: Order Replaced Message
 */ 
typedef struct {
    uint64_t TimestampNanoseconds;
    char ReplacementOrderToken[14];
    char PreviousOrderToken[14];
    uint32_t OrderBookId;
    char Side;
    uint64_t OrderId;
    uint64_t Quantity;
    int32_t Price;
    uint8_t TimeInForce;
    uint8_t OpenClose;
    char ClientAccount[10];
    uint8_t OrderState;
    char CustomerInfo[15];
    char ExchangeInfo[32];
    char ClearingParticipant[1];
    uint32_t CrossingKey;
    char CapacityOfParticipant;
    char DirectedWholesale;
    char ExecutionVenue[4];
    char IntermediaryId[10];
    char OrderOrigin[20];
    char Filler[8];
    char OuchOrderType;
    uint64_t ShortSellQuantity;
    uint64_t MinimumAcceptableQuantity;
} OrderReplacedMessageT;

/*
 * Structure: Order Rejected Message
 */ 
typedef struct {
    uint64_t TimestampNanoseconds;
    char OrderToken[14];
    uint32_t RejectCode;
} OrderRejectedMessageT;

/*
 * Structure: Order Accepted Message
 */ 
typedef struct {
    uint64_t TimestampNanoseconds;
    char OrderToken[14];
    uint32_t OrderBookId;
    char Side;
    uint64_t OrderId;
    uint64_t Quantity;
    int32_t Price;
    uint8_t TimeInForce;
    uint8_t OpenClose;
    char ClientAccount[10];
    uint8_t OrderState;
    char CustomerInfo[15];
    char ExchangeInfo[32];
    char ClearingParticipant[1];
    uint32_t CrossingKey;
    char CapacityOfParticipant;
    char DirectedWholesale;
    char ExecutionVenue[4];
    char IntermediaryId[10];
    char OrderOrigin[20];
    char Filler[8];
    char OuchOrderType;
    uint64_t ShortSellQuantity;
    uint64_t MinimumAcceptableQuantity;
} OrderAcceptedMessageT;

/*
 * Structure: Sequenced Data Packet
 */ 
typedef struct {
    char SequencedMessageType;
} SequencedDataPacketT;

/*
 * Structure: Login Rejected Packet
 */ 
typedef struct {
    char RejectReasonCode[1];
} LoginRejectedPacketT;

/*
 * Structure: Login Accepted Packet
 */ 
typedef struct {
    char Session[10];
    char SequenceNumber[20];
} LoginAcceptedPacketT;

/*
 * Structure: Debug Packet
 */ 
typedef struct {
    char Text[1];
} DebugPacketT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint16_t PacketLength;
    char PacketType;
} PacketHeaderT;

/*
 * Structure: Soup Bin Tcp Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} SoupBinTcpPacketT;

/*
 * Structure: Packet
 */ 
typedef struct {
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Australian Securities Exchange
   Version: 2.0
   Date: Wednesday, April 1, 2015
   Specification: asx_036435.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
