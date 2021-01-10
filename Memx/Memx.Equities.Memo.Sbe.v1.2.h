/*******************************************************************************
 * C Structs For Memx Equities Sbe Memo 1.2 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Login Reject Code Values
 */ 
#define ENUM_LOGIN_REJECT_CODE_MALFORMED_TOKEN = 'T'
#define ENUM_LOGIN_REJECT_CODE_TOKEN_TYPE_UNSUPPORTED = 'U'
#define ENUM_LOGIN_REJECT_CODE_TOKEN_TYPE_INVALID = 'V'
#define ENUM_LOGIN_REJECT_CODE_AUTHORIZATION_FAILED = 'A'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_LOGIN_REQUEST = 100
#define ENUM_MESSAGE_TYPE_REPLAY_REQUEST = 101
#define ENUM_MESSAGE_TYPE_REPLAY_ALL_REQUEST = 102
#define ENUM_MESSAGE_TYPE_STREAM_REQUEST = 103
#define ENUM_MESSAGE_TYPE_UNSEQUENCED_MESSAGE = 104
#define ENUM_MESSAGE_TYPE_LOGIN_ACCEPTED = 1
#define ENUM_MESSAGE_TYPE_LOGIN_REJECTED = 2
#define ENUM_MESSAGE_TYPE_START_OF_SESSION = 3
#define ENUM_MESSAGE_TYPE_END_OF_SESSION = 3
#define ENUM_MESSAGE_TYPE_REPLAY_BEGIN = 5
#define ENUM_MESSAGE_TYPE_REPLAY_REJECTED = 6
#define ENUM_MESSAGE_TYPE_REPLAY_COMPLETE = 7
#define ENUM_MESSAGE_TYPE_STREAM_BEGIN = 8
#define ENUM_MESSAGE_TYPE_STREAM_REJECTED = 9
#define ENUM_MESSAGE_TYPE_STREAM_COMPLETE = 10
#define ENUM_MESSAGE_TYPE_SEQUENCED_MESSAGE = 11

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET = 1
#define ENUM_ORD_TYPE_LIMIT = 2
#define ENUM_ORD_TYPE_PEGGED = 3
#define ENUM_ORD_TYPE_NULL_VALUE = 255

/*
 * Replay Reject Code Values
 */ 
#define ENUM_REPLAY_REJECT_CODE_REPLAY_REQUESTS_ARE_NOT_ALLOWED = 'R'
#define ENUM_REPLAY_REJECT_CODE_REPLAY_ALL_REQUESTS_ARE_NOT_ALLOWED = 'A'
#define ENUM_REPLAY_REJECT_CODE_NOT_THE_ACTIVE_SESSION = 'P'
#define ENUM_REPLAY_REJECT_CODE_SEQUENCE_NUMBER_OUT_OF_RANGE = 'S'

/*
 * Stream Reject Code Values
 */ 
#define ENUM_STREAM_REJECT_CODE_STREAM_REQUESTS_ARE_NOT_ALLOWED = 'R'
#define ENUM_STREAM_REJECT_CODE_NOT_THE_ACTIVE_SESSION = 'P'
#define ENUM_STREAM_REJECT_CODE_SEQUENCE_NUMBER_OUT_OF_RANGE = 'S'

/*
 * Supported Request Mode Values
 */ 
#define ENUM_SUPPORTED_REQUEST_MODE_STREAM = 'S'
#define ENUM_SUPPORTED_REQUEST_MODE_REPLAY = 'R'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_NEW_ORDER_SINGLE_MESSAGE = 1
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REPLACE_REQUEST_MESSAGE = 2
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REQUEST_MESSAGE = 3
#define ENUM_TEMPLATE_ID_MASS_CANCEL_REQUEST_MESSAGE = 4
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_PENDING_NEW_MESSAGE = 5
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_NEW_MESSAGE = 6
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_REJECTED_MESSAGE = 7
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_MESSAGE = 8
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_PENDING_CANCEL_MESSAGE = 9
#define ENUM_TEMPLATE_ID_PENDING_MASS_CANCEL_MESSAGE = 10
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_CANCELED_MESSAGE = 11
#define ENUM_TEMPLATE_ID_MASS_CANCEL_DONE_MESSAGE = 12
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_PENDING_REPLACE_MESSAGE = 13
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_REPLACED_MESSAGE = 14
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_CORRECTION_MESSAGE = 15
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_BREAK_MESSAGE = 16
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_RESTATEMENT_MESSAGE = 17
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REJECT_MESSAGE = 18
#define ENUM_TEMPLATE_ID_MASS_CANCEL_REJECT_MESSAGE = 20


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Mass Cancel Reject Message
 */ 
typedef struct {
    uint64_t SendingTime;
    char ClOrdId[16];
    char Symbol[6];
    char SymbolSfx[6];
    uint8_t Side;
    int64_t LowerThanPrice;
    int64_t HigherThanPrice;
    uint16_t CancelGroupId;
    uint8_t RejectReason;
} MassCancelRejectMessageT;

/*
 * Structure: Order Cancel Reject Message
 */ 
typedef struct {
    uint64_t SendingTime;
    char ClOrdId[16];
    uint8_t CxlRejResponseTo;
    uint8_t CxlRejReason;
} OrderCancelRejectMessageT;

/*
 * Structure: Execution Report Restatement Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    uint64_t ExecId;
    uint8_t OrdStatus;
    int64_t LastPx;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint32_t LastShares;
    uint8_t ExecRestatementReason;
    uint64_t TransactTime;
} ExecutionReportRestatementMessageT;

/*
 * Structure: Execution Report Trade Break Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    uint64_t ExecId;
    uint64_t ExecRefId;
    uint64_t TrdMatchId;
    uint8_t OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
} ExecutionReportTradeBreakMessageT;

/*
 * Structure: Execution Report Trade Correction Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    uint64_t ExecId;
    uint64_t ExecRefId;
    uint64_t TrdMatchId;
    uint8_t OrdStatus;
    int64_t LastPx;
    uint32_t LastQty;
    uint32_t LeavesQty;
    uint32_t CumQty;
} ExecutionReportTradeCorrectionMessageT;

/*
 * Structure: Execution Report Replaced Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    char OrigClOrdId[16];
    uint64_t ExecId;
    char Symbol[6];
    char SymbolSfx[6];
    uint8_t Side;
    uint32_t OrderQty;
    uint8_t OrdType;
    int64_t Price;
    uint32_t DisplayQty;
    char LocateReqd[1];
    uint8_t OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint64_t TransactTime;
} ExecutionReportReplacedMessageT;

/*
 * Structure: Execution Report Pending Replace Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    char OrigClOrdId[16];
    uint64_t ExecId;
    char Symbol[6];
    char SymbolSfx[6];
    uint8_t Side;
    uint32_t OrderQty;
    uint8_t OrdType;
    int64_t Price;
    uint32_t DisplayQty;
    char LocateReqd[1];
    uint8_t OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
} ExecutionReportPendingReplaceMessageT;

/*
 * Structure: Mass Cancel Done Message
 */ 
typedef struct {
    uint64_t SendingTime;
    char ClOrdId[16];
} MassCancelDoneMessageT;

/*
 * Structure: Execution Report Canceled Message
 */ 
typedef struct {
    uint64_t SendingTime;
    char ClOrdId[16];
    char OrigClOrdId[16];
    uint64_t OrderId;
    uint64_t ExecId;
    uint8_t OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t CancelReason;
    uint64_t TransactTime;
} ExecutionReportCanceledMessageT;

/*
 * Structure: Pending Mass Cancel Message
 */ 
typedef struct {
    uint64_t SendingTime;
    char ClOrdId[16];
    char Symbol[6];
    char SymbolSfx[6];
    uint8_t Side;
    int64_t LowerThanPrice;
    int64_t HigherThanPrice;
    uint16_t CancelGroupId;
} PendingMassCancelMessageT;

/*
 * Structure: Execution Report Pending Cancel Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    char OrigClOrdId[16];
    uint64_t ExecId;
    char Symbol[6];
    char SymbolSfx[6];
    uint8_t OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
} ExecutionReportPendingCancelMessageT;

/*
 * Structure: Execution Report Trade Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    uint64_t ExecId;
    uint8_t OrdStatus;
    uint32_t LastQty;
    int64_t LastPx;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint64_t TransactTime;
    uint8_t LastLiquidityInd;
    char LastMkt[1];
    uint64_t TrdMatchingId;
} ExecutionReportTradeMessageT;

/*
 * Structure: Execution Report Rejected Message
 */ 
typedef struct {
    uint64_t SendingTime;
    char ClOrdId[16];
    uint64_t ExecId;
    uint8_t OrdStatus;
    char Symbol[6];
    char SymbolSfx[6];
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t RejectReason;
} ExecutionReportRejectedMessageT;

/*
 * Structure: Execution Report New Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    uint64_t ExecId;
    char Mpid[4];
    uint8_t OrdStatus;
    char Symbol[6];
    char SymbolSfx[6];
    uint8_t Side;
    uint8_t OrdType;
    uint32_t OrderQty;
    int64_t Price;
    uint8_t TimeInForce;
    uint8_t OrderCapacity;
    uint8_t CustOrderCapacity;
    uint16_t ExecInst;
    int64_t PegOffsetValue;
    uint8_t PegPriceType;
    uint64_t ExpireTime;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint8_t DisplayMethod;
    uint8_t ReserveReplenishTiming;
    uint32_t DisplayMinIncr;
    char LocateReqd[1];
    uint8_t RepriceFrequency;
    uint8_t RepriceBehavior;
    uint16_t CancelGroupId;
    uint16_t StpGroupId;
    uint8_t SelfTradePrevention;
    uint16_t RiskGroupId;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint64_t TransactTime;
} ExecutionReportNewMessageT;

/*
 * Structure: Execution Report Pending New Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    uint64_t ExecId;
    char Mpid[4];
    uint8_t OrdStatus;
    char Symbol[6];
    char SymbolSfx[6];
    uint8_t Side;
    uint8_t OrdType;
    uint32_t OrderQty;
    int64_t Price;
    uint8_t TimeInForce;
    uint8_t OrderCapacity;
    uint8_t CustOrderCapacity;
    uint16_t ExecInst;
    int64_t PegOffsetValue;
    uint8_t PegPriceType;
    uint64_t ExpireTime;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint8_t DisplayMethod;
    uint8_t ReserveReplenishTiming;
    uint32_t DisplayMinIncr;
    char LocateReqd[1];
    uint8_t RepriceFrequency;
    uint8_t RepriceBehavior;
    uint16_t CancelGroupId;
    uint16_t StpGroupId;
    uint8_t SelfTradePrevention;
    uint16_t RiskGroupId;
    uint32_t LeavesQty;
    uint32_t CumQty;
} ExecutionReportPendingNewMessageT;

/*
 * Structure: Mass Cancel Request Message
 */ 
typedef struct {
    char ClOrdId[16];
    char Symbol[6];
    char SymbolSfx[6];
    uint8_t Side;
    int64_t LowerThanPrice;
    int64_t HigherThanPrice;
    uint16_t CancelGroupId;
} MassCancelRequestMessageT;

/*
 * Structure: Order Cancel Request Message
 */ 
typedef struct {
    char OrigClOrdId[16];
    uint64_t OrderId;
    char ClOrdId[16];
    char Symbol[6];
    char SymbolSfx[6];
} OrderCancelRequestMessageT;

/*
 * Structure: Order Cancel Replace Request Message
 */ 
typedef struct {
    char OrigClOrdId[16];
    char ClOrdId[16];
    char Symbol[6];
    char SymbolSfx[6];
    uint8_t Side;
    uint32_t OrderQty;
    uint8_t OrdType;
    int64_t Price;
    uint32_t DisplayQty;
    char LocateReqd[1];
} OrderCancelReplaceRequestMessageT;

/*
 * Structure: New Order Single Message
 */ 
typedef struct {
    char ClOrdId[16];
    char Mpid[4];
    char Symbol[6];
    char SymbolSfx[6];
    uint8_t Side;
    uint32_t OrderQty;
    uint8_t OrdType;
    int64_t Price;
    uint8_t TimeInForce;
    uint8_t OrderCapacity;
    uint8_t CustOrderCapacity;
    uint16_t ExecInst;
    int64_t PegOffsetValue;
    uint8_t PegPriceType;
    uint64_t ExpireTime;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint8_t DisplayMethod;
    uint8_t ReserveReplenishTiming;
    uint32_t DisplayMinIncr;
    char LocateReqd[1];
    uint8_t RepriceFrequency;
    uint8_t RepriceBehavior;
    uint16_t CancelGroupId;
    uint16_t StpGroupId;
    uint8_t SelfTradePrevention;
    uint16_t RiskGroupId;
} NewOrderSingleMessageT;

/*
 * Structure: Payload
 */ 
typedef struct {
    NewOrderSingleMessageT NewOrderSingleMessage;
    OrderCancelReplaceRequestMessageT OrderCancelReplaceRequestMessage;
    OrderCancelRequestMessageT OrderCancelRequestMessage;
    MassCancelRequestMessageT MassCancelRequestMessage;
    ExecutionReportPendingNewMessageT ExecutionReportPendingNewMessage;
    ExecutionReportNewMessageT ExecutionReportNewMessage;
    ExecutionReportRejectedMessageT ExecutionReportRejectedMessage;
    ExecutionReportTradeMessageT ExecutionReportTradeMessage;
    ExecutionReportPendingCancelMessageT ExecutionReportPendingCancelMessage;
    PendingMassCancelMessageT PendingMassCancelMessage;
    ExecutionReportCanceledMessageT ExecutionReportCanceledMessage;
    MassCancelDoneMessageT MassCancelDoneMessage;
    ExecutionReportPendingReplaceMessageT ExecutionReportPendingReplaceMessage;
    ExecutionReportReplacedMessageT ExecutionReportReplacedMessage;
    ExecutionReportTradeCorrectionMessageT ExecutionReportTradeCorrectionMessage;
    ExecutionReportTradeBreakMessageT ExecutionReportTradeBreakMessage;
    ExecutionReportRestatementMessageT ExecutionReportRestatementMessage;
    OrderCancelRejectMessageT OrderCancelRejectMessage;
    MassCancelRejectMessageT MassCancelRejectMessage;
} PayloadT;

/*
 * Structure: Sbe Header
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t TemplateId;
    uint8_t SchemaId;
    uint16_t Version;
} SbeHeaderT;

/*
 * Structure: Sbe Message
 */ 
typedef struct {
    SbeHeaderT SbeHeader;
} SbeMessageT;

/*
 * Structure: Sequenced Message
 */ 
typedef struct {
} SequencedMessageT;

/*
 * Structure: Stream Complete Message
 */ 
typedef struct {
    uint64_t TotalSequenceCount;
} StreamCompleteMessageT;

/*
 * Structure: Stream Rejected Message
 */ 
typedef struct {
    char StreamRejectCode;
} StreamRejectedMessageT;

/*
 * Structure: Stream Begin Message
 */ 
typedef struct {
    uint64_t NextSequenceNumber;
    char MaxSequenceNumber[0];
} StreamBeginMessageT;

/*
 * Structure: Replay Complete Message
 */ 
typedef struct {
    uint64_t MessageCount;
} ReplayCompleteMessageT;

/*
 * Structure: Replay Rejected Message
 */ 
typedef struct {
    char ReplayRejectCode;
} ReplayRejectedMessageT;

/*
 * Structure: Replay Begin Message
 */ 
typedef struct {
    uint64_t NextSequenceNumber;
    uint32_t PendingMessageCount;
} ReplayBeginMessageT;

/*
 * Structure: Start Of Session Message
 */ 
typedef struct {
    uint64_t SessionId;
} StartOfSessionMessageT;

/*
 * Structure: Login Rejected Message
 */ 
typedef struct {
    char LoginRejectCode;
} LoginRejectedMessageT;

/*
 * Structure: Login Accepted Message
 */ 
typedef struct {
    char SupportedRequestMode;
} LoginAcceptedMessageT;

/*
 * Structure: Unsequenced Message
 */ 
typedef struct {
} UnsequencedMessageT;

/*
 * Structure: Stream Request Message
 */ 
typedef struct {
    uint64_t SessionId;
    uint64_t NextSequenceNumber;
} StreamRequestMessageT;

/*
 * Structure: Replay All Request Message
 */ 
typedef struct {
    uint64_t SessionId;
} ReplayAllRequestMessageT;

/*
 * Structure: Replay Request Message
 */ 
typedef struct {
    uint64_t SessionId;
    uint64_t NextSequenceNumber;
    uint32_t Count;
} ReplayRequestMessageT;

/*
 * Structure: Login Request Message
 */ 
typedef struct {
    char TokenType[1];
    char Token[1];
} LoginRequestMessageT;

/*
 * Structure: Common Header
 */ 
typedef struct {
    uint8_t MessageType;
    uint16_t MessageLength;
} CommonHeaderT;

