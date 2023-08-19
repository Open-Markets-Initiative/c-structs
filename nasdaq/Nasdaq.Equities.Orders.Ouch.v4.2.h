/*******************************************************************************
 * C Structs For Nasdaq Ouch Orders 4.2 Binary Model
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
#define ENUM_BBO_WEIGHT_INDICATOR_IMPROVES_THE_NBBO_UPON_ENTRY 'N'

/*
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL 'S'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT 'T'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT_EXEMPT 'E'

/*
 * Cancel Order Reason Values
 */ 
#define ENUM_CANCEL_ORDER_REASON_USER_REQUESTED_CANCEL 'U'
#define ENUM_CANCEL_ORDER_REASON_IMMEDIATE_OR_CANCEL_ORDER 'I'
#define ENUM_CANCEL_ORDER_REASON_TIMEOUT 'T'
#define ENUM_CANCEL_ORDER_REASON_SUPERVISORY 'S'
#define ENUM_CANCEL_ORDER_REASON_THIS_ORDER_CANNOT_BE_EXECUTED_BECAUSE_OF_A_REGULATORY_RESTRICTION 'D'
#define ENUM_CANCEL_ORDER_REASON_SELF_MATCH_PREVENTION 'Q'
#define ENUM_CANCEL_ORDER_REASON_SYSTEM_CANCEL 'Z'
#define ENUM_CANCEL_ORDER_REASON_CROSS_CANCELED 'C'
#define ENUM_CANCEL_ORDER_REASON_THIS_ORDER_CANNOT_BE_EXECUTED 'K'
#define ENUM_CANCEL_ORDER_REASON_HALTED 'H'
#define ENUM_CANCEL_ORDER_REASON_OPEN_PROTECTION 'X'
#define ENUM_CANCEL_ORDER_REASON_CLOSED 'E'
#define ENUM_CANCEL_ORDER_REASON_POST_ONLY_CANCEL 'F'
#define ENUM_CANCEL_ORDER_REASON_POST_ONLY_CANCEL 'G'

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
#define ENUM_CROSS_TYPE_HALT_IPO_CROSS 'H'
#define ENUM_CROSS_TYPE_SUPPLEMENTAL 'S'
#define ENUM_CROSS_TYPE_RETAIL 'R'
#define ENUM_CROSS_TYPE_EXTENDED 'E'

/*
 * Customer Type Values
 */ 
#define ENUM_CUSTOMER_TYPE_RETAIL_DESIGNATED 'R'
#define ENUM_CUSTOMER_TYPE_NOT_A_RETAIL_DESIGNATED 'N'
#define ENUM_CUSTOMER_TYPE_DEFAULT ' '

/*
 * Display Values
 */ 
#define ENUM_DISPLAY_ATTRIBUTABLE_PRICE 'A'
#define ENUM_DISPLAY_ANONYMOUS_PRICE 'Y'
#define ENUM_DISPLAY_NON_DISPLAY 'N'
#define ENUM_DISPLAY_POST_ONLY 'P'
#define ENUM_DISPLAY_IMBALANCE_ONLY 'I'
#define ENUM_DISPLAY_MID_POINT 'M'
#define ENUM_DISPLAY_MID_POINT 'W'
#define ENUM_DISPLAY_POST_ONLY_AND_ATTRIBUTABLE 'L'
#define ENUM_DISPLAY_RETAIL_ORDER 'O'
#define ENUM_DISPLAY_RETAIL_ORDER 'T'
#define ENUM_DISPLAY_RETAIL_PRICE 'Q'
#define ENUM_DISPLAY_MID_POINT 'm'
#define ENUM_DISPLAY_NON_DISPLAY_AND_MID_POINT 'n'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_DAY_—_THIS_IS_ALWAYS_THE_FIRST_MESSAGE_EACH_DAY 'S'
#define ENUM_EVENT_CODE_END_OF_DAY_—_THIS_INDICATES_THAT_NASDAQ_IS_NOW_CLOSED_AND_WILL_NOT_ACCEPT_ANY_NEW_ORDERS_OR_REPLACES_IN_THIS_SESSION 'E'

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
#define ENUM_LIQUIDITY_FLAG_ADDED 'W'
#define ENUM_LIQUIDITY_FLAG_REMOVED 'm'
#define ENUM_LIQUIDITY_FLAG_ADDED 'k'
#define ENUM_LIQUIDITY_FLAG_SUPPLEMENTAL '0'
#define ENUM_LIQUIDITY_FLAG_DISPLAYED '7'
#define ENUM_LIQUIDITY_FLAG_DISPLAYED '8'
#define ENUM_LIQUIDITY_FLAG_RETAIL_DESIGNATED 'd'
#define ENUM_LIQUIDITY_FLAG_RETAIL_DESIGNATED 'e'
#define ENUM_LIQUIDITY_FLAG_RETAIL_DESIGNATED 'f'
#define ENUM_LIQUIDITY_FLAG_RPI_RETAIL_PRICE_IMPROVING 'j'
#define ENUM_LIQUIDITY_FLAG_RETAIL_ORDER 'r'
#define ENUM_LIQUIDITY_FLAG_RETAIL_ORDER 't'
#define ENUM_LIQUIDITY_FLAG_ADDED '4'
#define ENUM_LIQUIDITY_FLAG_ADDED '5'
#define ENUM_LIQUIDITY_FLAG_REMOVED '6'
#define ENUM_LIQUIDITY_FLAG_ADDED 'g'
#define ENUM_LIQUIDITY_FLAG_MIDPOINT 'n'

/*
 * Order State Values
 */ 
#define ENUM_ORDER_STATE_ORDER 'L'
#define ENUM_ORDER_STATE_ORDER 'D'

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
#define ENUM_SEQUENCED_MESSAGE_TYPE_ACCEPTED_MESSAGE 'A'
#define ENUM_SEQUENCED_MESSAGE_TYPE_REPLACED_MESSAGE 'U'
#define ENUM_SEQUENCED_MESSAGE_TYPE_CANCELED_MESSAGE 'C'
#define ENUM_SEQUENCED_MESSAGE_TYPE_AIQ_CANCELLED_MESSAGE 'D'
#define ENUM_SEQUENCED_MESSAGE_TYPE_EXECUTED_MESSAGE 'E'
#define ENUM_SEQUENCED_MESSAGE_TYPE_BROKEN_TRADE_MESSAGE 'B'
#define ENUM_SEQUENCED_MESSAGE_TYPE_EXECUTED_WITH_REFERENCE_PRICE_MESSAGE 'G'
#define ENUM_SEQUENCED_MESSAGE_TYPE_TRADE_CORRECTION_MESSAGE 'F'
#define ENUM_SEQUENCED_MESSAGE_TYPE_REJECTED_ORDER_MESSAGE 'J'
#define ENUM_SEQUENCED_MESSAGE_TYPE_CANCEL_PENDING_MESSAGE 'P'
#define ENUM_SEQUENCED_MESSAGE_TYPE_CANCEL_REJECT_MESSAGE 'I'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_PRIORITY_UPDATE_MESSAGE 'T'
#define ENUM_SEQUENCED_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE 'U'
#define ENUM_SEQUENCED_MESSAGE_TYPE_TRADE_NOW_MESSAGE 'N'

/*
 * Unsequenced Message Type Values
 */ 
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_ENTER_ORDER_MESSAGE 'O'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_REPLACE_ORDER_MESSAGE 'U'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE 'X'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE 'M'
#define ENUM_UNSEQUENCED_MESSAGE_TYPE_TRADE_NOW_MESSAGE 'N'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Trade Now Message
 */ 
typedef struct {
    char OrderToken[14];
} TradeNowMessageT;

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
    char CustomerType;
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
 * Structure: Rejected Order Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    char RejectedOrderReason[1];
} RejectedOrderMessageT;

/*
 * Structure: Trade Correction Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t ExecutedShares;
    uint32_t ExecutionPrice;
    char LiquidityFlag;
    uint64_t MatchNumber;
    char Reason[1];
} TradeCorrectionMessageT;

/*
 * Structure: Executed With Reference Price Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t ExecutedShares;
    uint32_t ExecutionPrice;
    char LiquidityFlag;
    uint64_t MatchNumber;
    uint32_t ReferencePrice;
    char ReferencePriceType[1];
} ExecutedWithReferencePriceMessageT;

/*
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint64_t MatchNumber;
    char BrokenTradeReason[1];
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
 * Structure: Aiq Cancelled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t DecrementShares;
    char CancelOrderReason;
    uint32_t QuantityPreventedFromTrading;
    uint32_t ExecutionPrice;
    char LiquidityFlag;
} AiqCancelledMessageT;

/*
 * Structure: Canceled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t DecrementShares;
    char CancelOrderReason;
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
   Specification: OUCH4.2.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
