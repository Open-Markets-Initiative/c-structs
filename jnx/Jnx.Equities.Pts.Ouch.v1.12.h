/*******************************************************************************
 * C Structs For Jnx Equities Ouch Pts 1.12 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL 'S'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT 'T'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT_EXEMPT 'E'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_AGENCY 'A'
#define ENUM_CAPACITY_PRINCIPAL 'P'

/*
 * Cash Margin Type Values
 */ 
#define ENUM_CASH_MARGIN_TYPE_CASH '1'
#define ENUM_CASH_MARGIN_TYPE_MARGIN_OPEN_NEGOTIABLE '2'
#define ENUM_CASH_MARGIN_TYPE_MARGIN_CLOSE_NEGOTIABLE '3'
#define ENUM_CASH_MARGIN_TYPE_MARGIN_OPEN_STANDARDIZED '4'
#define ENUM_CASH_MARGIN_TYPE_MARGIN_CLOSE_STANDARDIZED '5'

/*
 * Display Values
 */ 
#define ENUM_DISPLAY_UNUSED ' '
#define ENUM_DISPLAY_POSTONLY 'P'

/*
 * Liquidity Indicator Values
 */ 
#define ENUM_LIQUIDITY_INDICATOR_ADDED 'A'
#define ENUM_LIQUIDITY_INDICATOR_REMOVED 'R'

/*
 * Order Canceled Reason Values
 */ 
#define ENUM_ORDER_CANCELED_REASON_USER_REQUESTED_CANCEL 'U'
#define ENUM_ORDER_CANCELED_REASON_USER_LOGGED_OFF 'L'
#define ENUM_ORDER_CANCELED_REASON_SUPERVISORY_TERMINAL_MANUAL_CANCEL 'S'
#define ENUM_ORDER_CANCELED_REASON_IMMEDIATE_OR_CANCEL_ORDER 'I'
#define ENUM_ORDER_CANCELED_REASON_ORDER_EXPIRED 'M'
#define ENUM_ORDER_CANCELED_REASON_INVALID_PRICE 'X'
#define ENUM_ORDER_CANCELED_REASON_INVALID_QUANTITY 'Z'
#define ENUM_ORDER_CANCELED_REASON_INVALID_MINIMUM_QUANTITY 'N'
#define ENUM_ORDER_CANCELED_REASON_INVALID_ORDER_TYPE 'Y'
#define ENUM_ORDER_CANCELED_REASON_INVALID_DISPLAY_TYPE 'D'
#define ENUM_ORDER_CANCELED_REASON_EXCEEDED_ORDER_VALUE_LIMIT 'V'
#define ENUM_ORDER_CANCELED_REASON_ORDER_RESTRICTION 'i'
#define ENUM_ORDER_CANCELED_REASON_NOT_ALLOWED 'R'
#define ENUM_ORDER_CANCELED_REASON_THROTTLED 'F'
#define ENUM_ORDER_CANCELED_REASON_MARGIN_RESTRICTION 'G'
#define ENUM_ORDER_CANCELED_REASON_OTHER 'O'

/*
 * Order Classification Values
 */ 
#define ENUM_ORDER_CLASSIFICATION_NON_HFT '1'
#define ENUM_ORDER_CLASSIFICATION_HFT_MARKET_MAKING_STRATEGY '3'
#define ENUM_ORDER_CLASSIFICATION_HFT_ARBITRAGE_STRATEGY '4'
#define ENUM_ORDER_CLASSIFICATION_HFT_DIRECTIONAL_STRATEGY '5'
#define ENUM_ORDER_CLASSIFICATION_HFT_OTHER_STRATEGY '6'

/*
 * Order Rejected Reason Values
 */ 
#define ENUM_ORDER_REJECTED_REASON_HALTED 'H'
#define ENUM_ORDER_REJECTED_REASON_INVALID_ORDERBOOK_IDENTIFIER 'S'
#define ENUM_ORDER_REJECTED_REASON_INVALID_PRICE 'X'
#define ENUM_ORDER_REJECTED_REASON_INVALID_QUANTITY 'Z'
#define ENUM_ORDER_REJECTED_REASON_INVALID_MINIMUM_QUANTITY 'N'
#define ENUM_ORDER_REJECTED_REASON_INVALID_ORDER_TYPE 'Y'
#define ENUM_ORDER_REJECTED_REASON_INVALID_DISPLAY_TYPE 'D'
#define ENUM_ORDER_REJECTED_REASON_EXCEEDED_ORDER_VALUE_LIMIT 'V'
#define ENUM_ORDER_REJECTED_REASON_SHORT_SELL_ORDER_RESTRICTION 'i'
#define ENUM_ORDER_REJECTED_REASON_ORDER_NOT_ALLOWED 'R'
#define ENUM_ORDER_REJECTED_REASON_FLOW_THROTTLED 'F'
#define ENUM_ORDER_REJECTED_REASON_INVALID_MARGIN_SPECIFICATION 'G'
#define ENUM_ORDER_REJECTED_REASON_MPID_NOT_ALLOWED_FOR_THIS_PORT 'L'
#define ENUM_ORDER_REJECTED_REASON_NO_PERMISSION 'c'
#define ENUM_ORDER_REJECTED_REASON_OTHER 'O'

/*
 * Order State Values
 */ 
#define ENUM_ORDER_STATE_LIVE 'L'
#define ENUM_ORDER_STATE_DEAD 'D'

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
 * Sequenced Message Type Values
 */ 
#define ENUM_SEQUENCED_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_ACCEPTED_MESSAGE 'A'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_REPLACED_MESSAGE 'U'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_CANCELED_MESSAGE 'C'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_AIQ_CANCELED_MESSAGE 'D'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 'E'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_REJECTED_MESSAGE 'J'

/*
 * System Event Values
 */ 
#define ENUM_SYSTEM_EVENT_START_OF_DAY 'S'
#define ENUM_SYSTEM_EVENT_END_OF_DAY 'E'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_IMMEDIATE 0
#define ENUM_TIME_IN_FORCE_DAY 99999

/*
 * Unsequenced Message Type Values
 */ 
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_ENTER_ORDER_MESSAGE 'O'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_REPLACE_ORDER_MESSAGE 'U'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE 'X'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Cancel Order Message
 */ 
typedef struct {
    uint32_t OrderToken;
    uint32_t Quantity;
} CancelOrderMessageT;

/*
 * Structure: Replace Order Message
 */ 
typedef struct {
    uint32_t ExistingOrderToken;
    uint32_t ReplacementOrderToken;
    uint32_t Quantity;
    uint32_t Price;
    uint32_t TimeInForce;
    char Display;
    uint32_t MinimumQuantity;
} ReplaceOrderMessageT;

/*
 * Structure: Enter Order Message
 */ 
typedef struct {
    uint32_t OrderToken;
    char ClientReference[10];
    char BuySellIndicator;
    uint32_t Quantity;
    char OrderbookId[4];
    char Group[4];
    uint32_t Price;
    uint32_t TimeInForce;
    uint32_t FirmId;
    char Display;
    char Capacity;
    uint32_t MinimumQuantity;
    char OrderClassification;
    char CashMarginType;
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
 * Structure: Order Rejected Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t OrderToken;
    char OrderRejectedReason;
} OrderRejectedMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t OrderToken;
    uint32_t ExecutedQuantity;
    uint32_t ExecutionPrice;
    char LiquidityIndicator;
    uint64_t MatchNumber;
} OrderExecutedMessageT;

/*
 * Structure: Order Aiq Canceled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t OrderToken;
    uint32_t DecrementQuantity;
    char OrderCanceledReason;
    uint32_t QuantityPreventedFromTrading;
    uint32_t ExecutionPrice;
    char LiquidityIndicator;
} OrderAiqCanceledMessageT;

/*
 * Structure: Order Canceled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t OrderToken;
    uint32_t DecrementQuantity;
    char OrderCanceledReason;
} OrderCanceledMessageT;

/*
 * Structure: Order Replaced Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t ReplacementOrderToken;
    char BuySellIndicator;
    uint32_t Quantity;
    char OrderbookId[4];
    char Group[4];
    uint32_t Price;
    uint32_t TimeInForce;
    char Display;
    uint64_t OrderNumber;
    uint32_t MinimumQuantity;
    char OrderState;
    uint32_t PreviousOrderToken;
} OrderReplacedMessageT;

/*
 * Structure: Order Accepted Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t OrderToken;
    char ClientReference[10];
    char BuySellIndicator;
    uint32_t Quantity;
    char OrderbookId[4];
    char Group[4];
    uint32_t Price;
    uint32_t TimeInForce;
    uint32_t FirmId;
    char Display;
    char Capacity;
    uint64_t OrderNumber;
    uint32_t MinimumQuantity;
    char OrderState;
    char OrderClassification;
    char CashMarginType;
} OrderAcceptedMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char SystemEvent;
} SystemEventMessageT;

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
   Organization: Japannext
   Version: 1.12
   Date: Wednesday, November 1, 2023
   Specification: Japannext_PTS_OUCH_Equities_v1.12.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
