/*******************************************************************************
 * C Structs For Nasdaq Bx Equities Ouch Orders 4.2 protocol
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
#define ENUM_BBO_WEIGHT_INDICATOR_IMPROVES_THE_NBBO_N = 'N'

/*
 * Broken Trade Reason Values
 */ 
#define ENUM_BROKEN_TRADE_REASON_ERRONEOUS_E = 'E'
#define ENUM_BROKEN_TRADE_REASON_CONSENT_C = 'C'
#define ENUM_BROKEN_TRADE_REASON_SUPERVISORY_S = 'S'
#define ENUM_BROKEN_TRADE_REASON_EXTERNAL_X = 'X'

/*
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY_B = 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL_S = 'S'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT_T = 'T'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT_EXEMPT_E = 'E'

/*
 * Canceled Reason Values
 */ 
#define ENUM_CANCELED_REASON_USER_REQUESTED_CANCEL_U = 'U'
#define ENUM_CANCELED_REASON_IMMEDIATE_OR_CANCEL_ORDER_I = 'I'
#define ENUM_CANCELED_REASON_TIMEOUT_T = 'T'
#define ENUM_CANCELED_REASON_SUPERVISORY_S = 'S'
#define ENUM_CANCELED_REASON_THIS_ORDER_CANNOT_BE_EXECUTED_BECAUSE_OF_A_REGULATORY_RESTRICTION_D = 'D'
#define ENUM_CANCELED_REASON_SELF_MATCH_PREVENTION_Q = 'Q'
#define ENUM_CANCELED_REASON_SYSTEM_CANCEL_Z = 'Z'
#define ENUM_CANCELED_REASON_CLOSED_E = 'E'

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
#define ENUM_CROSS_TYPE_RETAIL_R = 'R'

/*
 * Display Values
 */ 
#define ENUM_DISPLAY_ATTRIBUTABLE_PRICE_A = 'A'
#define ENUM_DISPLAY_ANONYMOUS_PRICE_Y = 'Y'
#define ENUM_DISPLAY_NON_DISPLAY_N = 'N'
#define ENUM_DISPLAY_POST_ONLY_P = 'P'
#define ENUM_DISPLAY_IMBALANCE_ONLY_I = 'I'
#define ENUM_DISPLAY_CHANGED_TO_NONDISPLAYED_Z = 'Z'
#define ENUM_DISPLAY_MID_POINT_M = 'M'
#define ENUM_DISPLAY_RETAIL_ORDER_TYPE_1O = 'O'
#define ENUM_DISPLAY_RETAIL_ORDER_TYPE_2T = 'T'
#define ENUM_DISPLAY_RETAIL_PRICE_IMPROVEMENT_ORDER_Q = 'Q'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_DAY_S = 'S'
#define ENUM_EVENT_CODE_END_OF_DAY_E = 'E'

/*
 * Intermarket Sweep Eligibility Values
 */ 
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_ELIGIBLE_Y = 'Y'
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_NOT_ELIGIBLE_N = 'N'
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_TRADEAT_Y = 'y'

/*
 * Liquidity Flag Values
 */ 
#define ENUM_LIQUIDITY_FLAG_ADDED_A = 'A'
#define ENUM_LIQUIDITY_FLAG_REMOVED_R = 'R'
#define ENUM_LIQUIDITY_FLAG_NONDISPLAYED_J = 'J'
#define ENUM_LIQUIDITY_FLAG_REMOVED_M = 'm'
#define ENUM_LIQUIDITY_FLAG_ADDED_K = 'k'
#define ENUM_LIQUIDITY_FLAG_RPI_J = 'j'
#define ENUM_LIQUIDITY_FLAG_RMO_RETAIL_ORDER_REMOVES_RPI_LIQUIDITY_R = 'r'
#define ENUM_LIQUIDITY_FLAG_RMO_RETAIL_ORDER_REMOVES_PRICE_IMPROVING_NONDISPLAYED_LIQUIDITY_OTHER_THAN_RPI_LIQUIDITY_T = 't'
#define ENUM_LIQUIDITY_FLAG_RMO_RETAIL_ORDER_REMOVES_NON_RPI_MIDPOINT_LIQUIDITY_Q = 'q'
#define ENUM_LIQUIDITY_FLAG_DISPLAYED_LIQUIDITYADDING_ORDER_IMPROVES_THE_NBBO_7 = '7'
#define ENUM_LIQUIDITY_FLAG_DISPLAYED_LIQUIDITYADDING_ORDER_SETS_THE_BXBBO_WHILE_JOINING_THE_NBBO_8 = '8'
#define ENUM_LIQUIDITY_FLAG_REMOVED_PRICE_IMPROVING_NONDISPLAYED_LIQUIDITY_P = 'p'
#define ENUM_LIQUIDITY_FLAG_PASSIVE_MIDPOINT_EXECUTION_N = 'N'

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
#define ENUM_MESSAGE_TYPE_AIQ_CANCELED_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_EXECUTED_MESSAGE_E = 'E'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_REJECTED_MESSAGE_J = 'J'
#define ENUM_MESSAGE_TYPE_CANCEL_PENDING_MESSAGE_P = 'P'
#define ENUM_MESSAGE_TYPE_CANCEL_REJECT_MESSAGE_I = 'I'
#define ENUM_MESSAGE_TYPE_ORDER_PRIORITY_UPDATE_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE_M = 'M'

/*
 * Order State Values
 */ 
#define ENUM_ORDER_STATE_LIVE_L = 'L'
#define ENUM_ORDER_STATE_DEAD_D = 'D'

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

/*
 * Rejected Reason Values
 */ 
#define ENUM_REJECTED_REASON_TEST_MODE_T = 'T'
#define ENUM_REJECTED_REASON_HALTED_H = 'H'
#define ENUM_REJECTED_REASON_SHARES_EXCEEDS_CONFIGURED_SAFETY_THRESHOLD_Z = 'Z'
#define ENUM_REJECTED_REASON_INVALID_STOCK_S = 'S'
#define ENUM_REJECTED_REASON_INVALID_DISPLAY_TYPE_D = 'D'
#define ENUM_REJECTED_REASON_NASDAQ_OMX_BX_IS_CLOSED_C = 'C'
#define ENUM_REJECTED_REASON_REQUESTED_FIRM_NOT_AUTHORIZED_FOR_REQUESTED_CLEARING_TYPE_ON_THIS_ACCOUNT_L = 'L'
#define ENUM_REJECTED_REASON_OUTSIDE_OF_PERMITTED_TIMES_M = 'M'
#define ENUM_REJECTED_REASON_THIS_ORDER_IS_NOT_ALLOWED_IN_THIS_TYPE_OF_CROSS_R = 'R'
#define ENUM_REJECTED_REASON_INVALID_PRICE_X = 'X'
#define ENUM_REJECTED_REASON_INVALID_MINIMUM_N = 'N'
#define ENUM_REJECTED_REASON_INVALID_MIDPOINT_W = 'W'
#define ENUM_REJECTED_REASON_MIDPOINT_PEG_ORDERS_ARE_NOT_ACCEPTED_Q = 'q'
#define ENUM_REJECTED_REASON_REJECT_A = 'a'
#define ENUM_REJECTED_REASON_EASY_TO_BORROW_ETB_B = 'b'
#define ENUM_REJECTED_REASON_RESTRICTED_C = 'c'
#define ENUM_REJECTED_REASON_ISO_D = 'd'
#define ENUM_REJECTED_REASON_ODD_E = 'e'
#define ENUM_REJECTED_REASON_MID_POINT_F = 'f'
#define ENUM_REJECTED_REASON_PRE_MARKET_G = 'g'
#define ENUM_REJECTED_REASON_POST_MARKET_H = 'h'
#define ENUM_REJECTED_REASON_SHORT_SALE_I = 'i'
#define ENUM_REJECTED_REASON_ON_OPEN_J = 'j'
#define ENUM_REJECTED_REASON_ON_CLOSE_K = 'k'
#define ENUM_REJECTED_REASON_TWO_SIDED_L = 'l'
#define ENUM_REJECTED_REASON_EXCEEDED_M = 'm'
#define ENUM_REJECTED_REASON_EXCEEDED_N = 'n'


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
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint64_t MatchNumber;
    char BrokenTradeReason;
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
    char CanceledReason;
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
} EnterOrderMessageT;

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
 * Structure: Rejected Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    char RejectedReason;
} RejectedMessageT;

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

