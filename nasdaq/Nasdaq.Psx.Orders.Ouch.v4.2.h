/*******************************************************************************
 * C Structs For Nasdaq Psx Ouch Orders 4.2 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Bbo Weight Indicator Values
 */ 
#define ENUM_BBO_WEIGHT_INDICATOR_002 '0'
#define ENUM_BBO_WEIGHT_INDICATOR_021 '1'
#define ENUM_BBO_WEIGHT_INDICATOR_12 '2'
#define ENUM_BBO_WEIGHT_INDICATOR_GREATER_THAN_2 '3'
#define ENUM_BBO_WEIGHT_INDICATOR_SETS_THE_QBBO 'S'
#define ENUM_BBO_WEIGHT_INDICATOR_IMPROVES_THE_NBBO 'N'

/*
 * Broken Trade Reason Values
 */ 
#define ENUM_BROKEN_TRADE_REASON_ERRONEOUS 'E'
#define ENUM_BROKEN_TRADE_REASON_CONSENT 'C'
#define ENUM_BROKEN_TRADE_REASON_SUPERVISORY 'S'
#define ENUM_BROKEN_TRADE_REASON_EXTERNAL 'X'

/*
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL 'S'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT 'T'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT_EXEMPT 'E'

/*
 * Canceled Reason Values
 */ 
#define ENUM_CANCELED_REASON_USER_REQUESTED_CANCEL 'U'
#define ENUM_CANCELED_REASON_IMMEDIATE_OR_CANCEL_ORDER 'I'
#define ENUM_CANCELED_REASON_TIMEOUT 'T'
#define ENUM_CANCELED_REASON_SUPERVISORY 'S'
#define ENUM_CANCELED_REASON_THIS_ORDER_CANNOT_BE_EXECUTED_BECAUSE_OF_A_REGULATORY_RESTRICTION 'D'
#define ENUM_CANCELED_REASON_SELF_MATCH_PREVENTION 'Q'
#define ENUM_CANCELED_REASON_SYSTEM_CANCEL 'Z'
#define ENUM_CANCELED_REASON_CLOSED 'E'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_OTHER 'O'
#define ENUM_CAPACITY_AGENCY 'A'
#define ENUM_CAPACITY_PRINCIPAL 'P'
#define ENUM_CAPACITY_RISKLESS 'R'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_NO_CROSS 'N'
#define ENUM_CROSS_TYPE_OPENING 'O'
#define ENUM_CROSS_TYPE_CLOSING 'C'

/*
 * Display Values
 */ 
#define ENUM_DISPLAY_ATTRIBUTABLE_PRICE 'A'
#define ENUM_DISPLAY_ANONYMOUS_PRICE 'Y'
#define ENUM_DISPLAY_NON_DISPLAY 'N'
#define ENUM_DISPLAY_POST_ONLY 'P'
#define ENUM_DISPLAY_CHANGED_TO_NONDISPLAYED 'Z'
#define ENUM_DISPLAY_IMBALANCE_ONLY 'I'
#define ENUM_DISPLAY_MID_POINT 'M'
#define ENUM_DISPLAY_MID_POINT 'W'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_DAY 'S'
#define ENUM_EVENT_CODE_END_OF_DAY 'E'

/*
 * Intermarket Sweep Eligibility Values
 */ 
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_ELIGIBLE 'Y'
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_NOT_ELIGIBLE 'N'
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_TRADEAT 'y'

/*
 * Liquidity Flag Values
 */ 
#define ENUM_LIQUIDITY_FLAG_ADDED 'A'
#define ENUM_LIQUIDITY_FLAG_REMOVED 'R'
#define ENUM_LIQUIDITY_FLAG_OPENING 'O'
#define ENUM_LIQUIDITY_FLAG_OPENING_CROSS 'M'
#define ENUM_LIQUIDITY_FLAG_CLOSING 'C'
#define ENUM_LIQUIDITY_FLAG_CLOSING_CROSS 'L'
#define ENUM_LIQUIDITY_FLAG_HALT_IPO 'H'
#define ENUM_LIQUIDITY_FLAG_HALT 'K'
#define ENUM_LIQUIDITY_FLAG_NONDISPLAYED 'J'
#define ENUM_LIQUIDITY_FLAG_REMOVED 'm'
#define ENUM_LIQUIDITY_FLAG_ADDED 'k'
#define ENUM_LIQUIDITY_FLAG_DISPLAYED_ADDED_LIQUIDITY 'V'

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
 * Rejected Reason Values
 */ 
#define ENUM_REJECTED_REASON_TEST_MODE 'T'
#define ENUM_REJECTED_REASON_HALTED 'H'
#define ENUM_REJECTED_REASON_SHARES_EXCEEDS_CONFIGURED_SAFETY_THRESHOLD 'Z'
#define ENUM_REJECTED_REASON_INVALID_STOCK 'S'
#define ENUM_REJECTED_REASON_INVALID_DISPLAY_TYPE 'D'
#define ENUM_REJECTED_REASON_NASDAQ_OMX_PSX_IS_CLOSED 'C'
#define ENUM_REJECTED_REASON_REQUESTED_FIRM_NOT_AUTHORIZED_FOR_REQUESTED_CLEARING_TYPE_ON_THIS_ACCOUNT 'L'
#define ENUM_REJECTED_REASON_OUTSIDE_OF_PERMITTED_TIMES 'M'
#define ENUM_REJECTED_REASON_THIS_ORDER_IS_NOT_ALLOWED_IN_THIS_TYPE_OF_CROSS 'R'
#define ENUM_REJECTED_REASON_INVALID_PRICE 'X'
#define ENUM_REJECTED_REASON_INVALID_MINIMUM 'N'
#define ENUM_REJECTED_REASON_INVALID_MIDPOINT 'W'
#define ENUM_REJECTED_REASON_REJECT 'a'
#define ENUM_REJECTED_REASON_EASY_TO_BORROW_ETB 'b'
#define ENUM_REJECTED_REASON_RESTRICTED 'c'
#define ENUM_REJECTED_REASON_ISO 'd'
#define ENUM_REJECTED_REASON_ODD 'e'
#define ENUM_REJECTED_REASON_MID_POINT 'f'
#define ENUM_REJECTED_REASON_PRE_MARKET 'g'
#define ENUM_REJECTED_REASON_POST_MARKET 'h'
#define ENUM_REJECTED_REASON_SHORT_SALE 'i'
#define ENUM_REJECTED_REASON_ON_OPEN 'j'
#define ENUM_REJECTED_REASON_ON_CLOSE 'k'
#define ENUM_REJECTED_REASON_TWO_SIDED 'l'
#define ENUM_REJECTED_REASON_EXCEEDED 'm'
#define ENUM_REJECTED_REASON_EXCEEDED 'n'

/*
 * Sequenced Message Type Values
 */ 
#define ENUM_SEQUENCED_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ACCEPTED_MESSAGE 'A'
#define ENUM_SEQUENCED_MESSAGE_TYPE_REPLACED_MESSAGE 'U'
#define ENUM_SEQUENCED_MESSAGE_TYPE_CANCELED_MESSAGE 'C'
#define ENUM_SEQUENCED_MESSAGE_TYPE_AIQ_CANCELED_MESSAGE 'D'
#define ENUM_SEQUENCED_MESSAGE_TYPE_EXECUTED_MESSAGE 'E'
#define ENUM_SEQUENCED_MESSAGE_TYPE_BROKEN_TRADE_MESSAGE 'B'
#define ENUM_SEQUENCED_MESSAGE_TYPE_REJECTED_MESSAGE 'J'
#define ENUM_SEQUENCED_MESSAGE_TYPE_CANCEL_PENDING_MESSAGE 'P'
#define ENUM_SEQUENCED_MESSAGE_TYPE_CANCEL_REJECT_MESSAGE 'I'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_PRIORITY_UPDATE_MESSAGE 'T'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE 'M'

/*
 * Unsequenced Message Type Values
 */ 
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_ENTER_ORDER_MESSAGE 'O'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_REPLACE_ORDER_MESSAGE 'U'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE 'U'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE 'M'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Modify Order Message
 */ 
typedef struct {
    char OrderToken[14];
    char BuySellIndicator;
    uint32_t Shares;
} ModifyOrderMessageT;

/*
 * Structure: Cancel Order Message
 */ 
typedef struct {
    char OrderToken[14];
    uint32_t Shares;
} CancelOrderMessageT;

/*
 * Structure: Replace Order Message
 */ 
typedef struct {
    char ExistingOrderToken[14];
    char ReplacementOrderToken[14];
    uint32_t Shares;
    uint32_t Price;
    uint32_t TimeInForce;
    char Display;
    char IntermarketSweepEligibility;
    uint32_t MinimumQuantity;
} ReplaceOrderMessageT;

/*
 * Structure: Enter Order Message
 */ 
typedef struct {
    char OrderToken[14];
    char BuySellIndicator;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
    uint32_t TimeInForce;
    char Firm[4];
    char Display;
    char Capacity;
    char IntermarketSweepEligibility;
    uint32_t MinimumQuantity;
    char CrossType;
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
 * Structure: Order Modified Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    char BuySellIndicator;
    uint32_t Shares;
} OrderModifiedMessageT;

/*
 * Structure: Order Priority Update Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t Price;
    char Display;
    uint64_t OrderReferenceNumber;
} OrderPriorityUpdateMessageT;

/*
 * Structure: Cancel Reject Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
} CancelRejectMessageT;

/*
 * Structure: Cancel Pending Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
} CancelPendingMessageT;

/*
 * Structure: Rejected Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    char RejectedReason;
} RejectedMessageT;

/*
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint64_t MatchNumber;
    char BrokenTradeReason;
} BrokenTradeMessageT;

/*
 * Structure: Executed Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t ExecutedShares;
    uint32_t ExecutionPrice;
    char LiquidityFlag;
    uint64_t MatchNumber;
} ExecutedMessageT;

/*
 * Structure: Aiq Canceled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t DecrementShares;
    char AiqCanceledReason[1];
    uint32_t QuantityPreventedFromTrading;
    uint32_t ExecutionPrice;
    char LiquidityFlag;
} AiqCanceledMessageT;

/*
 * Structure: Canceled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t DecrementShares;
    char CanceledReason;
} CanceledMessageT;

/*
 * Structure: Replaced Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char ReplacementOrderToken[14];
    char BuySellIndicator;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
    uint32_t TimeInForce;
    char Firm[4];
    char Display;
    uint64_t OrderReferenceNumber;
    char Capacity;
    char IntermarketSweepEligibility;
    uint32_t MinimumQuantity;
    char CrossType;
    char OrderState;
    char PreviousOrderToken[14];
    char BboWeightIndicator;
} ReplacedMessageT;

/*
 * Structure: Accepted Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    char BuySellIndicator;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
    uint32_t TimeInForce;
    char Firm[4];
    char Display;
    uint64_t OrderReferenceNumber;
    char Capacity;
    char IntermarketSweepEligibility;
    uint32_t MinimumQuantity;
    char CrossType;
    char OrderState;
    char BboWeightIndicator;
} AcceptedMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char EventCode;
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
   Organization: National Association of Securities Dealers Automated Quotations
   Version: 4.2
   Date: Monday, July 8, 2019
   Specification: psxouch42.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
