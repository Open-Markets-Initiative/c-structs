/*******************************************************************************
 * C Structs For Nasdaq Ouch Orders 4.2 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Bbo Weight Indicator Values
 */ 
#define ENUM_BBO_WEIGHT_INDICATOR_002 = '0'
#define ENUM_BBO_WEIGHT_INDICATOR_021 = '1'
#define ENUM_BBO_WEIGHT_INDICATOR_12 = '2'
#define ENUM_BBO_WEIGHT_INDICATOR_GREATER_THAN_2 = '3'
#define ENUM_BBO_WEIGHT_INDICATOR_SETS_THE_QBBO = 'S'
#define ENUM_BBO_WEIGHT_INDICATOR_IMPROVES_THE_NBBO_UPON_ENTRY = 'N'

/*
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY = 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL = 'S'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT = 'T'
#define ENUM_BUY_SELL_INDICATOR_SELL_SHORT_EXEMPT = 'E'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_OTHER = 'O'
#define ENUM_CAPACITY_AGENCY = 'A'
#define ENUM_CAPACITY_PRINCIPAL = 'P'
#define ENUM_CAPACITY_RISKLESS = 'R'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_NO_CROSS = 'N'
#define ENUM_CROSS_TYPE_OPENING = 'O'
#define ENUM_CROSS_TYPE_CLOSING = 'C'
#define ENUM_CROSS_TYPE_HALT_IPO_CROSS = 'H'
#define ENUM_CROSS_TYPE_SUPPLEMENTAL = 'S'
#define ENUM_CROSS_TYPE_RETAIL = 'R'
#define ENUM_CROSS_TYPE_EXTENDED = 'E'

/*
 * Customer Type Values
 */ 
#define ENUM_CUSTOMER_TYPE_RETAIL_DESIGNATED = 'R'
#define ENUM_CUSTOMER_TYPE_NOT_A_RETAIL_DESIGNATED = 'N'

/*
 * Display Values
 */ 
#define ENUM_DISPLAY_ATTRIBUTABLE_PRICE = 'A'
#define ENUM_DISPLAY_ANONYMOUS_PRICE = 'Y'
#define ENUM_DISPLAY_NON_DISPLAY = 'N'
#define ENUM_DISPLAY_POST_ONLY = 'P'
#define ENUM_DISPLAY_IMBALANCE_ONLY = 'I'
#define ENUM_DISPLAY_MID_POINT = 'M'
#define ENUM_DISPLAY_MID_POINT = 'W'
#define ENUM_DISPLAY_POST_ONLY_AND_ATTRIBUTABLE = 'L'
#define ENUM_DISPLAY_RETAIL_ORDER = 'O'
#define ENUM_DISPLAY_RETAIL_ORDER = 'T'
#define ENUM_DISPLAY_RETAIL_PRICE = 'Q'
#define ENUM_DISPLAY_MID_POINT = 'm'
#define ENUM_DISPLAY_NON_DISPLAY_AND_MID_POINT = 'n'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_DAY_—_THIS_IS_ALWAYS_THE_FIRST_MESSAGE_EACH_DAY = 'S'
#define ENUM_EVENT_CODE_END_OF_DAY_—_THIS_INDICATES_THAT_NASDAQ_IS_NOW_CLOSED_AND_WILL_NOT_ACCEPT_ANY_NEW_ORDERS_OR_REPLACES_IN_THIS_SESSION = 'E'

/*
 * Intermarket Sweep Eligibility Values
 */ 
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_ELIGIBLE = 'Y'
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_NOT_ELIGIBLE = 'N'
#define ENUM_INTERMARKET_SWEEP_ELIGIBILITY_TRADEAT = 'y'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_ENTER_ORDER_MESSAGE = 'O'
#define ENUM_MESSAGE_TYPE_REPLACE_ORDER_MESSAGE = 'U'
#define ENUM_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE = 'X'
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE = 'M'
#define ENUM_MESSAGE_TYPE_TRADE_NOW_MESSAGE = 'N'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE = 'S'
#define ENUM_MESSAGE_TYPE_ACCEPTED_MESSAGE = 'A'
#define ENUM_MESSAGE_TYPE_REPLACED_MESSAGE = 'U'
#define ENUM_MESSAGE_TYPE_CANCELED_MESSAGE = 'C'
#define ENUM_MESSAGE_TYPE_AIQ_CANCELLED_MESSAGE = 'C'
#define ENUM_MESSAGE_TYPE_EXECUTED_MESSAGE = 'E'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_MESSAGE = 'B'
#define ENUM_MESSAGE_TYPE_EXECUTED_WITH_REFERENCE_PRICE_MESSAGE = 'G'
#define ENUM_MESSAGE_TYPE_TRADE_CORRECTION_MESSAGE = 'F'
#define ENUM_MESSAGE_TYPE_REJECTED_ORDER_MESSAGE = 'J'
#define ENUM_MESSAGE_TYPE_CANCEL_PENDING_MESSAGE = 'P'
#define ENUM_MESSAGE_TYPE_CANCEL_REJECT_MESSAGE = 'I'
#define ENUM_MESSAGE_TYPE_ORDER_PRIORITY_UPDATE_MESSAGE = 'T'
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE = 'U'

/*
 * Order State Values
 */ 
#define ENUM_ORDER_STATE_ORDER = 'L'
#define ENUM_ORDER_STATE_ORDER = 'D'

/*
 * Packet Type Values
 */ 
#define ENUM_PACKET_TYPE_DEBUG_PACKET = '+'
#define ENUM_PACKET_TYPE_LOGIN_ACCEPTED_PACKET = 'A'
#define ENUM_PACKET_TYPE_LOGIN_REJECTED_PACKET = 'J'
#define ENUM_PACKET_TYPE_SEQUENCED_DATA_PACKET = 'S'
#define ENUM_PACKET_TYPE_SERVER_HEARTBEAT_PACKET = 'H'
#define ENUM_PACKET_TYPE_END_OF_SESSION_PACKET = 'Z'
#define ENUM_PACKET_TYPE_LOGIN_REQUEST_PACKET = 'L'
#define ENUM_PACKET_TYPE_UNSEQUENCED_DATA_PACKET = 'U'
#define ENUM_PACKET_TYPE_CLIENT_HEARTBEAT_PACKET = 'R'
#define ENUM_PACKET_TYPE_LOGOUT_REQUEST_PACKET = 'O'


/*******************************************************************************
 * Structs
 *******************************************************************************/

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
    char Reason[1];
} RejectedOrderMessageT;

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
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint64_t MatchNumber;
    char Reason[1];
} BrokenTradeMessageT;

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
 * Structure: Canceled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char OrderToken[14];
    uint32_t DecrementShares;
    char Reason[1];
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
 * Structure: Data
 */ 
typedef struct {
    EnterOrderMessageT EnterOrderMessage;
    ReplaceOrderMessageT ReplaceOrderMessage;
    CancelOrderMessageT CancelOrderMessage;
    ModifyOrderMessageT ModifyOrderMessage;
    TradeNowMessageT TradeNowMessage;
    SystemEventMessageT SystemEventMessage;
    AcceptedMessageT AcceptedMessage;
    ReplacedMessageT ReplacedMessage;
    CanceledMessageT CanceledMessage;
    AiqCancelledMessageT AiqCancelledMessage;
    ExecutedMessageT ExecutedMessage;
    BrokenTradeMessageT BrokenTradeMessage;
    ExecutedWithReferencePriceMessageT ExecutedWithReferencePriceMessage;
    TradeCorrectionMessageT TradeCorrectionMessage;
    RejectedOrderMessageT RejectedOrderMessage;
    CancelPendingMessageT CancelPendingMessage;
    CancelRejectMessageT CancelRejectMessage;
    OrderPriorityUpdateMessageT OrderPriorityUpdateMessage;
    OrderModifiedMessageT OrderModifiedMessage;
} DataT;

/*
 * Structure: Message
 */ 
typedef struct {
    char MessageType;
} MessageT;

/*
 * Structure: Unsequenced Data Packet
 */ 
typedef struct {
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
 * Structure: Sequenced Data Packet
 */ 
typedef struct {
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
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

