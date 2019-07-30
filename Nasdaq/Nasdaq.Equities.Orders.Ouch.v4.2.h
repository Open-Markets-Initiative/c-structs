/*******************************************************************************
 * C Structs For Nasdaq Ouch Orders 4.2 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Bbo Weight Indicator Values
 */ 
#define ENUM_BBO_WEIGHT_INDICATOR_0020 = '0'
#define ENUM_BBO_WEIGHT_INDICATOR_0211 = '1'
#define ENUM_BBO_WEIGHT_INDICATOR_122 = '2'
#define ENUM_BBO_WEIGHT_INDICATOR_GREATER_THAN_23 = '3'
#define ENUM_BBO_WEIGHT_INDICATOR_SETS_THE_QBBO_S = 'S'
#define ENUM_BBO_WEIGHT_INDICATOR_IMPROVES_THE_NBBO_UPON_ENTRY_N = 'N'

/*
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY_B = 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL_S = 'S'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT_T = 'T'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT_EXEMPT_E = 'E'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_OTHER_O = 'O'
#define ENUM_CAPACITY_AGENCY_A = 'A'
#define ENUM_CAPACITY_PRINCIPAL_P = 'P'
#define ENUM_CAPACITY_RISKLESS_R = 'R'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_NO_CROSS_N = 'N'
#define ENUM_CROSS_TYPE_OPENING_O = 'O'
#define ENUM_CROSS_TYPE_CLOSING_C = 'C'
#define ENUM_CROSS_TYPE_HALT_IPO_CROSS_H = 'H'
#define ENUM_CROSS_TYPE_SUPPLEMENTAL_S = 'S'
#define ENUM_CROSS_TYPE_RETAIL_R = 'R'
#define ENUM_CROSS_TYPE_EXTENDED_E = 'E'

/*
 * Customer Type Values
 */ 
#define ENUM_CUSTOMER_TYPE_RETAIL_DESIGNATED_R = 'R'
#define ENUM_CUSTOMER_TYPE_NOT_A_RETAIL_DESIGNATED_N = 'N'

/*
 * Display Values
 */ 
#define ENUM_DISPLAY_ATTRIBUTABLE_PRICE_A = 'A'
#define ENUM_DISPLAY_ANONYMOUS_PRICE_Y = 'Y'
#define ENUM_DISPLAY_NON_DISPLAY_N = 'N'
#define ENUM_DISPLAY_POST_ONLY_P = 'P'
#define ENUM_DISPLAY_IMBALANCE_ONLY_I = 'I'
#define ENUM_DISPLAY_MID_POINT_M = 'M'
#define ENUM_DISPLAY_MID_POINT_W = 'W'
#define ENUM_DISPLAY_POST_ONLY_AND_ATTRIBUTABLE_L = 'L'
#define ENUM_DISPLAY_RETAIL_ORDER_O = 'O'
#define ENUM_DISPLAY_RETAIL_ORDER_T = 'T'
#define ENUM_DISPLAY_RETAIL_PRICE_Q = 'Q'
#define ENUM_DISPLAY_MID_POINT_M = 'm'
#define ENUM_DISPLAY_NON_DISPLAY_AND_MID_POINT_N = 'n'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_DAY_—_THIS_IS_ALWAYS_THE_FIRST_MESSAGE_EACH_DAY_S = 'S'
#define ENUM_EVENT_CODE_END_OF_DAY_—_THIS_INDICATES_THAT_NASDAQ_IS_NOW_CLOSED_AND_WILL_NOT_ACCEPT_ANY_NEW_ORDERS_OR_REPLACES_IN_THIS_SESSION_E = 'E'

/*
 * Intermarket Sweep Eligibility Values
 */ 
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_ELIGIBLE_Y = 'Y'
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_NOT_ELIGIBLE_N = 'N'
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_TRADEAT_Y = 'y'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_ENTER_ORDER_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_REPLACE_ORDER_MESSAGE_U = 'U'
#define ENUM_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE_X = 'X'
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE_M = 'M'
#define ENUM_MESSAGE_TYPE_TRADE_NOW_MESSAGE_N = 'N'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_ACCEPTED_MESSAGE_A = 'A'
#define ENUM_MESSAGE_TYPE_REPLACED_MESSAGE_U = 'U'
#define ENUM_MESSAGE_TYPE_CANCELED_MESSAGE_C = 'C'
#define ENUM_MESSAGE_TYPE_AIQ_CANCELLED_MESSAGE_C = 'C'
#define ENUM_MESSAGE_TYPE_EXECUTED_MESSAGE_E = 'E'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_EXECUTED_WITH_REFERENCE_PRICE_MESSAGE_G = 'G'
#define ENUM_MESSAGE_TYPE_TRADE_CORRECTION_MESSAGE_F = 'F'
#define ENUM_MESSAGE_TYPE_REJECTED_ORDER_MESSAGE_J = 'J'
#define ENUM_MESSAGE_TYPE_CANCEL_PENDING_MESSAGE_P = 'P'
#define ENUM_MESSAGE_TYPE_CANCEL_REJECT_MESSAGE_I = 'I'
#define ENUM_MESSAGE_TYPE_ORDER_PRIORITY_UPDATE_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE_U = 'U'

/*
 * Order State Values
 */ 
#define ENUM_ORDER_STATE_ORDER_L = 'L'
#define ENUM_ORDER_STATE_ORDER_D = 'D'

/*
 * Packet Type Values
 */ 
#define ENUM_PACKET_TYPE_DEBUG_PACKET_+ = '+'
#define ENUM_PACKET_TYPE_LOGIN_ACCEPTED_PACKET_A = 'A'
#define ENUM_PACKET_TYPE_LOGIN_REJECTED_PACKET_J = 'J'
#define ENUM_PACKET_TYPE_SEQUENCED_DATA_PACKET_S = 'S'
#define ENUM_PACKET_TYPE_SERVER_HEARTBEAT_PACKET_H = 'H'
#define ENUM_PACKET_TYPE_END_OF_SESSION_PACKET_Z = 'Z'
#define ENUM_PACKET_TYPE_LOGIN_REQUEST_PACKET_L = 'L'
#define ENUM_PACKET_TYPE_UNSEQUENCED_DATA_PACKET_U = 'U'
#define ENUM_PACKET_TYPE_CLIENT_HEARTBEAT_PACKET_R = 'R'
#define ENUM_PACKET_TYPE_LOGOUT_REQUEST_PACKET_O = 'O'


/*******************************************************************************
 * Structs
 *******************************************************************************/

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
 * Structure: Aiq Cancelled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t DecrementShares;
    char Reason[1];
    uint32_t QuantityPreventedFromTrading;
    uint32_t ExecutionPrice;
    char LiquidityFlag[1];
} AiqCancelledMessageT;

/*
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint64_t MatchNumber;
    char Reason[1];
} BrokenTradeMessageT;

/*
 * Structure: Cancel Order Message
 */ 
typedef struct {
    char OrderToken[14];
    uint32_t Shares;
} CancelOrderMessageT;

/*
 * Structure: Cancel Pending Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
} CancelPendingMessageT;

/*
 * Structure: Cancel Reject Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
} CancelRejectMessageT;

/*
 * Structure: Canceled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t DecrementShares;
    char Reason[1];
} CanceledMessageT;

/*
 * Structure: Debug Packet
 */ 
typedef struct {
    char Text[1];
} DebugPacketT;

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
 * Structure: Executed Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t ExecutedShares;
    uint32_t ExecutionPrice;
    char LiquidityFlag[1];
    uint64_t MatchNumber;
} ExecutedMessageT;

/*
 * Structure: Executed With Reference Price Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t ExecutedShares;
    uint32_t ExecutionPrice;
    char LiquidityFlag[1];
    uint64_t MatchNumber;
    uint32_t ReferencePrice;
    char ReferencePriceType[1];
} ExecutedWithReferencePriceMessageT;

/*
 * Structure: Login Accepted Packet
 */ 
typedef struct {
    char Session[10];
    char SequenceNumber[20];
} LoginAcceptedPacketT;

/*
 * Structure: Login Rejected Packet
 */ 
typedef struct {
    char RejectReasonCode[1];
} LoginRejectedPacketT;

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
 * Structure: Message
 */ 
typedef struct {
    char MessageType;
} MessageT;

/*
 * Structure: Modify Order Message
 */ 
typedef struct {
    char OrderToken[14];
    char BuySellIndicator;
    uint32_t Shares;
} ModifyOrderMessageT;

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
 * Structure: Packet Header
 */ 
typedef struct {
    uint16_t PacketLength;
    char PacketType;
} PacketHeaderT;

/*
 * Structure: Rejected Order Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    char Reason[1];
} RejectedOrderMessageT;

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
 * Structure: Sequenced Data Packet
 */ 
typedef struct {
} SequencedDataPacketT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char EventCode;
} SystemEventMessageT;

/*
 * Structure: Trade Correction Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t ExecutedShares;
    uint32_t ExecutionPrice;
    char LiquidityFlag[1];
    uint64_t MatchNumber;
    char Reason[1];
} TradeCorrectionMessageT;

/*
 * Structure: Trade Now Message
 */ 
typedef struct {
    char OrderToken[14];
} TradeNowMessageT;

/*
 * Structure: Unsequenced Data Packet
 */ 
typedef struct {
} UnsequencedDataPacketT;

