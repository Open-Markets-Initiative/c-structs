/*******************************************************************************
 * C Structs For Nasdaq Ouch Orders 5.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Broken Trade Reason Values
 */ 
#define ENUM_BROKEN_TRADE_REASON_ERRONEOUS = 'E'
#define ENUM_BROKEN_TRADE_REASON_CONSENT = 'C'
#define ENUM_BROKEN_TRADE_REASON_SUPERVISORY = 'S'
#define ENUM_BROKEN_TRADE_REASON_EXTERNAL = 'X'

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
#define ENUM_CROSS_TYPE_CONTINUOUS_MARKET = 'N'
#define ENUM_CROSS_TYPE_OPENING_CROSS = 'O'
#define ENUM_CROSS_TYPE_CLOSING = 'C'
#define ENUM_CROSS_TYPE_HALT_IPO = 'H'
#define ENUM_CROSS_TYPE_SUPPLEMENTAL = 'S'
#define ENUM_CROSS_TYPE_RETAIL = 'R'
#define ENUM_CROSS_TYPE_EXTENDED = 'E'
#define ENUM_CROSS_TYPE_AFTER_HOURS_CLOSE = 'A'

/*
 * Display Values
 */ 
#define ENUM_DISPLAY_ATTRIBUTABLE = 'A'
#define ENUM_DISPLAY_VISIBLE = 'Y'
#define ENUM_DISPLAY_HIDDEN = 'N'
#define ENUM_DISPLAY_POST_ONLY = 'P'
#define ENUM_DISPLAY_IMBALANCE_ONLY = 'I'
#define ENUM_DISPLAY_MID_POINT = 'M'
#define ENUM_DISPLAY_MID_POINT = 'W'
#define ENUM_DISPLAY_POST_ONLY_AND_ATTRIBUTABLE = 'L'
#define ENUM_DISPLAY_RETAIL_ORDER = 'O'
#define ENUM_DISPLAY_RETAIL_ORDER = 'T'
#define ENUM_DISPLAY_RETAIL_PRICE = 'Q'
#define ENUM_DISPLAY_CONFORMANT = 'Z'
#define ENUM_DISPLAY_MID_POINT = 'm'
#define ENUM_DISPLAY_NON_DISPLAY_AND_MID_POINT = 'n'

/*
 * Enter Order Optional Tag Values
 */ 
#define ENUM_ENTER_ORDER_OPTIONAL_TAG_FIRM = 2
#define ENUM_ENTER_ORDER_OPTIONAL_TAG_MIN_QTY = 3
#define ENUM_ENTER_ORDER_OPTIONAL_TAG_CUSTOMER_TYPE = 4
#define ENUM_ENTER_ORDER_OPTIONAL_TAG_MAX_FLOOR = 5

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_DAY = 'S'
#define ENUM_EVENT_CODE_END_OF_DAY = 'E'

/*
 * Inter Market Sweep Eligibility Values
 */ 
#define ENUM_INTER_MARKET_SWEEP_ELIGIBILITY_ELIGIBLE = 'Y'
#define ENUM_INTER_MARKET_SWEEP_ELIGIBILITY_NOT_ELIGIBLE = 'N'

/*
 * Liquidity Flag Values
 */ 
#define ENUM_LIQUIDITY_FLAG_ADDED = 'A'
#define ENUM_LIQUIDITY_FLAG_CLOSING_CROSS = 'C'
#define ENUM_LIQUIDITY_FLAG_RETAIL_DESIGNATED = 'e'
#define ENUM_LIQUIDITY_FLAG_HALT_IPO = 'H'
#define ENUM_LIQUIDITY_FLAG_AFTER_HOURS_CLOSING = 'i'
#define ENUM_LIQUIDITY_FLAG_NONDISPLAYED_ADDING_LIQUIDITY = 'J'
#define ENUM_LIQUIDITY_FLAG_RPI_ORDER_PROVIDES_LIQUIDITY = 'j'
#define ENUM_LIQUIDITY_FLAG_ADDED_LIQUIDITY_VIA_A_MIDPOINT_ORDER = 'k'
#define ENUM_LIQUIDITY_FLAG_HALT_CROSS = 'K'
#define ENUM_LIQUIDITY_FLAG_CLOSING_CROSS = 'L'
#define ENUM_LIQUIDITY_FLAG_OPENING_CROSS = 'M'
#define ENUM_LIQUIDITY_FLAG_REMOVED = 'm'
#define ENUM_LIQUIDITY_FLAG_PASSIVE_MIDPOINT_EXECUTION = 'N'
#define ENUM_LIQUIDITY_FLAG_MIDPOINT_EXTENDED_LIFE_ORDER_EXECUTION = 'n'
#define ENUM_LIQUIDITY_FLAG_OPENING = 'O'
#define ENUM_LIQUIDITY_FLAG_REMOVED_PRICE_IMPROVING_NONDISPLAYED_LIQUIDITY = 'p'
#define ENUM_LIQUIDITY_FLAG_RMO_RETAIL_ORDER_REMOVES_NON_RPI_MIDPOINT_LIQUIDITY = 'q'
#define ENUM_LIQUIDITY_FLAG_REMOVED = 'R'
#define ENUM_LIQUIDITY_FLAG_RETAIL_ORDER_REMOVES_RPI_LIQUIDITY = 'r'
#define ENUM_LIQUIDITY_FLAG_RETAIL_ORDER_REMOVES_PRICE_IMPROVING_NONDISPLAYED_LIQUIDITY_OTHER_THAN_RPI_LIQUIDITY = 't'
#define ENUM_LIQUIDITY_FLAG_ADDED = 'k'
#define ENUM_LIQUIDITY_FLAG_SUPPLEMENTAL = '0'
#define ENUM_LIQUIDITY_FLAG_DISPLAYED_LIQUIDITYADDING_ORDER_IMPROVES_THE_NBBO = '7'
#define ENUM_LIQUIDITY_FLAG_DISPLAYED_LIQUIDITYADDING_ORDER_SETS_THE_QBBO_WHILE_JOINING_THE_NBBO = '8'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_ENTER_ORDER_MESSAGE = 'O'
#define ENUM_MESSAGE_TYPE_REPLACE_ORDER_MESSAGE = 'U'
#define ENUM_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE = 'X'
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE = 'M'
#define ENUM_MESSAGE_TYPE_ACCOUNT_QUERY_MESSAGE = 'Q'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE = 'S'
#define ENUM_MESSAGE_TYPE_ORDER_ACCEPTED_MESSAGE = 'A'
#define ENUM_MESSAGE_TYPE_REPLACED_MESSAGE = 'U'
#define ENUM_MESSAGE_TYPE_CANCELED_MESSAGE = 'C'
#define ENUM_MESSAGE_TYPE_AIQ_CANCELED_MESSAGE = 'C'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE = 'E'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_MESSAGE = 'B'
#define ENUM_MESSAGE_TYPE_TRADE_CORRECTION_MESSAGE = 'F'
#define ENUM_MESSAGE_TYPE_REJECTED_ORDER_MESSAGE = 'J'
#define ENUM_MESSAGE_TYPE_CANCEL_PENDING_MESSAGE = 'P'
#define ENUM_MESSAGE_TYPE_CANCEL_REJECT_MESSAGE = 'I'
#define ENUM_MESSAGE_TYPE_ORDER_PRIORITY_UPDATE_MESSAGE = 'T'
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE = 'M'
#define ENUM_MESSAGE_TYPE_ORDER_RESTATED_MESSAGE = 'R'
#define ENUM_MESSAGE_TYPE_ACCOUNT_QUERY_RESPONSE_MESSAGE = 'Q'

/*
 * Order Accepted Optional Tag Values
 */ 
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_FIRM = 2
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_MIN_QTY = 3
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_CUSTOMER_TYPE = 4
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_MAX_FLOOR = 5
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_PRICE_TYPE = 6
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_PEG_OFFSET = 7
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_DISCRETION = 8
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_DISCRETION_PRICE = 9
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_DISCRETION_PEG_TYPE = 10
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_DISCRETION_PEG_OFFSET = 11
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_POST_ONLY = 12
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_RANDOM_RESERVES = 13
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_ROUTE = 14
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_EXPIRE_TIME = 15
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_TRADE_NOW = 16
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_HANDLE_INST = 17
#define ENUM_ORDER_ACCEPTED_OPTIONAL_TAG_BBO_WEIGHT_INDICATOR = 18

/*
 * Order Executed Optional Tag Values
 */ 
#define ENUM_ORDER_EXECUTED_OPTIONAL_TAG_REFERENCE_PRICE = 19
#define ENUM_ORDER_EXECUTED_OPTIONAL_TAG_REFERENCE_PRICE_TYPE = 20

/*
 * Order Restated Optional Tag Values
 */ 
#define ENUM_ORDER_RESTATED_OPTIONAL_TAG_DISPLAY_QUANTITY = 22
#define ENUM_ORDER_RESTATED_OPTIONAL_TAG_DISPLAY_PRICE = 23
#define ENUM_ORDER_RESTATED_OPTIONAL_TAG_SECONDARY_ORD_REF_NUM = 1

/*
 * Order Restated Reason Values
 */ 
#define ENUM_ORDER_RESTATED_REASON_REFRESH_OF_DISPLAY = 'R'
#define ENUM_ORDER_RESTATED_REASON_UPDATE_OF_DISPLAYED_PRICE = 'P'

/*
 * Order State Values
 */ 
#define ENUM_ORDER_STATE_ORDER_LIVE = 'L'
#define ENUM_ORDER_STATE_ORDER_DEAD = 'D'

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

/*
 * Rejected Order Reason Values
 */ 
#define ENUM_REJECTED_ORDER_REASON_QUOTE_UNAVAILABLE = 0x0001
#define ENUM_REJECTED_ORDER_REASON_DESTINATION_CLOSED = 0x0002
#define ENUM_REJECTED_ORDER_REASON_INVALID_DISPLAY = 0x0003
#define ENUM_REJECTED_ORDER_REASON_INVALID_MAX_FLOOR = 0x0004
#define ENUM_REJECTED_ORDER_REASON_INVALID_PEG_TYPE = 0x0005
#define ENUM_REJECTED_ORDER_REASON_FAT_FINGER = 0x0006
#define ENUM_REJECTED_ORDER_REASON_HALTED = 0x0007
#define ENUM_REJECTED_ORDER_REASON_ISO_NOT_ALLOWED = 0x0008
#define ENUM_REJECTED_ORDER_REASON_INVALID_SIDE = 0x0009
#define ENUM_REJECTED_ORDER_REASON_PROCESSING_ERROR = 0x000A
#define ENUM_REJECTED_ORDER_REASON_CANCEL_PENDING = 0x000B
#define ENUM_REJECTED_ORDER_REASON_FIRM_NOT_AUTHORIZED = 0x000C
#define ENUM_REJECTED_ORDER_REASON_INVALID_MIN_QUANTITY = 0x000D
#define ENUM_REJECTED_ORDER_REASON_NO_CLOSING_REFERENCE_PRICE = 0x000E
#define ENUM_REJECTED_ORDER_REASON_OTHER = 0x000F
#define ENUM_REJECTED_ORDER_REASON_CANCEL_NOT_ALLOWED = 0x0010
#define ENUM_REJECTED_ORDER_REASON_PEGGING_NOT_ALLOWED = 0x0011
#define ENUM_REJECTED_ORDER_REASON_CROSSED_MARKET = 0x0012
#define ENUM_REJECTED_ORDER_REASON_INVALID_QUANTITY = 0x0013
#define ENUM_REJECTED_ORDER_REASON_INVALID_CROSS_ORDER = 0x0014
#define ENUM_REJECTED_ORDER_REASON_REPLACE_NOT_ALLOWED = 0x0015
#define ENUM_REJECTED_ORDER_REASON_ROUTING_NOT_ALLOWED = 0x0016
#define ENUM_REJECTED_ORDER_REASON_INVALID_SYMBOL = 0x0017
#define ENUM_REJECTED_ORDER_REASON_TEST = 0x0018
#define ENUM_REJECTED_ORDER_REASON_LATE_LOC_TOO_AGGRESSIVE = 0x0019
#define ENUM_REJECTED_ORDER_REASON_RETAIL_NOT_ALLOWED = 0x001A
#define ENUM_REJECTED_ORDER_REASON_INVALID_MIDPOINT_POST_ONLY_PRICE = 0x001B
#define ENUM_REJECTED_ORDER_REASON_INVALID_DESTINATION = 0x001C
#define ENUM_REJECTED_ORDER_REASON_INVALID_PRICE = 0x001D
#define ENUM_REJECTED_ORDER_REASON_SHARES_EXCEED_THRESHOLD = 0x001E
#define ENUM_REJECTED_ORDER_REASON_EXCEEDS_MAXIMUM_ALLOWED_NOTIONAL_VALUE = 0x001F

/*
 * Replace Order Optional Tag Values
 */ 
#define ENUM_REPLACE_ORDER_OPTIONAL_TAG_MIN_QTY = 3
#define ENUM_REPLACE_ORDER_OPTIONAL_TAG_MAX_FLOOR = 5
#define ENUM_REPLACE_ORDER_OPTIONAL_TAG_PRICE_TYPE = 6
#define ENUM_REPLACE_ORDER_OPTIONAL_TAG_POST_ONLY = 12
#define ENUM_REPLACE_ORDER_OPTIONAL_TAG_EXPIRE_TIME = 15
#define ENUM_REPLACE_ORDER_OPTIONAL_TAG_TRADE_NOW = 16
#define ENUM_REPLACE_ORDER_OPTIONAL_TAG_HANDLE_INST = 17

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY = 'B'
#define ENUM_SIDE_SELL = 'S'
#define ENUM_SIDE_SELL_SHORT = 'T'
#define ENUM_SIDE_SELL_SHORT_EXEMPT = 'E'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY = '0'
#define ENUM_TIME_IN_FORCE_IOC = '3'
#define ENUM_TIME_IN_FORCE_GTX_EXTENDED_HOURS = '5'
#define ENUM_TIME_IN_FORCE_GTT = '6'
#define ENUM_TIME_IN_FORCE_AFTER_HOURS = 'E'

/*
 * Trade Correction Reason Values
 */ 
#define ENUM_TRADE_CORRECTION_REASON_ADJUSTED_TO_NAV = 'N'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Account Query Response Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t NextUserRefNum;
} AccountQueryResponseMessageT;

/*
 * Structure: Order Restated Appendage
 */ 
typedef struct {
    int8_t OrderRestatedOptionalFieldLength;
    int8_t OrderRestatedOptionalTag;
} OrderRestatedAppendageT;

/*
 * Structure: Order Restated Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
    char OrderRestatedReason;
    uint16_t AppendageLength;
} OrderRestatedMessageT;

/*
 * Structure: Order Modified Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
    char Side;
    uint32_t Quantity;
} OrderModifiedMessageT;

/*
 * Structure: Order Priority Update Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
    int64_t Price;
    char Display;
    uint64_t OrderReferenceNumber;
} OrderPriorityUpdateMessageT;

/*
 * Structure: Cancel Reject Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
} CancelRejectMessageT;

/*
 * Structure: Cancel Pending Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
} CancelPendingMessageT;

/*
 * Structure: Rejected Order Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
    uint16_t RejectedOrderReason;
    char ClOrdId[14];
} RejectedOrderMessageT;

/*
 * Structure: Trade Correction Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
    uint32_t Quantity;
    int64_t Price;
    char LiquidityFlag;
    uint64_t MatchNumber;
    char TradeCorrectionReason;
    char ClOrdId[14];
} TradeCorrectionMessageT;

/*
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
    uint64_t MatchNumber;
    char BrokenTradeReason;
    char ClOrdId[14];
} BrokenTradeMessageT;

/*
 * Structure: Order Executed Appendage
 */ 
typedef struct {
    int8_t OrderExecutedOptionalFieldLength;
    int8_t OrderExecutedOptionalTag;
} OrderExecutedAppendageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
    uint32_t Quantity;
    int64_t Price;
    char LiquidityFlag;
    uint64_t MatchNumber;
    uint16_t AppendageLength;
} OrderExecutedMessageT;

/*
 * Structure: Aiq Canceled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
    uint32_t DecrementShares;
    uint8_t Reason;
    uint32_t QuantityPreventedFromTrading;
    int64_t ExecutionPrice;
    char LiquidityFlag;
} AiqCanceledMessageT;

/*
 * Structure: Canceled Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UserRefNum;
    uint32_t Quantity;
    uint8_t Reason;
} CanceledMessageT;

/*
 * Structure: Replaced Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t OrigUserRefNum;
    uint32_t UserRefNum;
    char Side;
    uint32_t Quantity;
    char Symbol[8];
    int64_t Price;
    char TimeInForce;
    char Display;
    uint64_t OrderReferenceNumber;
    char Capacity;
    char InterMarketSweepEligibility;
    char CrossType;
    char OrderState;
    char ClOrdId[14];
    uint16_t AppendageLength;
    char ReplacedMessageAppendage[0];
} ReplacedMessageT;

/*
 * Structure: Order Accepted Appendage
 */ 
typedef struct {
    int8_t OrderAcceptedOptionalFieldLength;
    int8_t OrderAcceptedOptionalTag;
} OrderAcceptedAppendageT;

/*
 * Structure: Order Accepted Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint32_t UesrRefNum;
    char Side;
    uint32_t Quantity;
    char Symbol[8];
    int64_t Price;
    char TimeInForce;
    char Display;
    uint64_t OrderReferenceNumber;
    char Capacity;
    char InterMarketSweepEligibility;
    char CrossType;
    char OrderState;
    char ClOrdId[14];
    uint16_t AppendageLength;
} OrderAcceptedMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char EventCode;
} SystemEventMessageT;

/*
 * Structure: Modify Order Message
 */ 
typedef struct {
    uint32_t UserRefNum;
    char Side;
    uint32_t Quantity;
} ModifyOrderMessageT;

/*
 * Structure: Cancel Order Message
 */ 
typedef struct {
    uint32_t UserRefNum;
    uint32_t Quantity;
} CancelOrderMessageT;

/*
 * Structure: Replace Order Appendage
 */ 
typedef struct {
    int8_t ReplaceOrderOptionalFieldLength;
    int8_t ReplaceOrderOptionalTag;
} ReplaceOrderAppendageT;

/*
 * Structure: Replace Order Message
 */ 
typedef struct {
    uint32_t OrigUserRefNum;
    uint32_t UserRefNum;
    uint32_t Quantity;
    int64_t Price;
    char TimeInForce;
    char Display;
    char InterMarketSweepEligibility;
    char ClOrdId[14];
    uint16_t AppendageLength;
} ReplaceOrderMessageT;

/*
 * Structure: Enter Order Appendage
 */ 
typedef struct {
    int8_t EnterOrderOptionalFieldLength;
    int8_t EnterOrderOptionalTag;
} EnterOrderAppendageT;

/*
 * Structure: Enter Order Message
 */ 
typedef struct {
    uint32_t UserRefNum;
    char Side;
    uint32_t Quantity;
    char Symbol[8];
    int64_t Price;
    char TimeInForce;
    char Display;
    char Capacity;
    char InterMarketSweepEligibility;
    char CrossType;
    char ClOrdId[14];
    uint16_t AppendageLength;
} EnterOrderMessageT;

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
   Version: 5.0
   Date: Thursday, July 1, 2021
   Specification: OUCH5.0.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
