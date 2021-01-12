/*******************************************************************************
 * C Structs For Cme Futures Sbe iLink3 8.4 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Cmta Give Up Cd Values
 */ 
#define ENUM_CMTA_GIVE_UP_CD_NO_VALUE = '0'
#define ENUM_CMTA_GIVE_UP_CD_GIVE_UP = 'G'
#define ENUM_CMTA_GIVE_UP_CD_SG_XOFFSET = 'S'

/*
 * Cust Order Capacity Values
 */ 
#define ENUM_CUST_ORDER_CAPACITY_NO_VALUE = 255
#define ENUM_CUST_ORDER_CAPACITY_MEMBERTRADINGFORTHEIROWNACCOUNT = 1
#define ENUM_CUST_ORDER_CAPACITY_CLEARINGFIRMTRADINGFORITSPROPRIETARYACCOUNT = 2
#define ENUM_CUST_ORDER_CAPACITY_MEMBERTRADINGFORANOTHERMEMBER = 3
#define ENUM_CUST_ORDER_CAPACITY_ALLOTHER = 4

/*
 * Dk Reason Values
 */ 
#define ENUM_DK_REASON_NO_VALUE = '0'
#define ENUM_DK_REASON_UNKNOWN_SECURITY = 'A'
#define ENUM_DK_REASON_WRONG_SIDE = 'B'
#define ENUM_DK_REASON_QUANTITY_EXCEEDS_ORDER = 'C'
#define ENUM_DK_REASON_NO_MATCHING_ORDER = 'D'
#define ENUM_DK_REASON_PRICE_EXCEEDS_LIMIT = 'E'
#define ENUM_DK_REASON_CALCULATION_DIFFERENCE = 'F'
#define ENUM_DK_REASON_NO_MATCHING_EXECUTION_REPORT = 'G'
#define ENUM_DK_REASON_OTHER = 'Z'

/*
 * Exec Ack Status Values
 */ 
#define ENUM_EXEC_ACK_STATUS_ACCEPTED = 1
#define ENUM_EXEC_ACK_STATUS_REJECTED = 2

/*
 * Mass Action Response Values
 */ 
#define ENUM_MASS_ACTION_RESPONSE_REJECTED = 0
#define ENUM_MASS_ACTION_RESPONSE_ACCEPTED = 1

/*
 * Mass Action Scope Values
 */ 
#define ENUM_MASS_ACTION_SCOPE_INSTRUMENT = 1
#define ENUM_MASS_ACTION_SCOPE_ALL = 7
#define ENUM_MASS_ACTION_SCOPE_MARKET_SEGMENT_ID = 9
#define ENUM_MASS_ACTION_SCOPE_INSTRUMENT_GROUP = 10
#define ENUM_MASS_ACTION_SCOPE_QUOTE_SET_ID = 100

/*
 * Order Event Type Values
 */ 
#define ENUM_ORDER_EVENT_TYPE_NO_VALUE = 255
#define ENUM_ORDER_EVENT_TYPE_PARTIALLY_FILLED = 4
#define ENUM_ORDER_EVENT_TYPE_FILLED = 5

/*
 * Party Detail Role Values
 */ 
#define ENUM_PARTY_DETAIL_ROLE_EXECUTING_FIRM = 1
#define ENUM_PARTY_DETAIL_ROLE_CUSTOMER_ACCOUNT = 24
#define ENUM_PARTY_DETAIL_ROLE_TAKE_UP_FIRM = 96
#define ENUM_PARTY_DETAIL_ROLE_OPERATOR = 118
#define ENUM_PARTY_DETAIL_ROLE_TAKE_UP_ACCOUNT = 1000

/*
 * Short Sale Type Values
 */ 
#define ENUM_SHORT_SALE_TYPE_NO_VALUE = 255
#define ENUM_SHORT_SALE_TYPE_LONG_SELL = 0
#define ENUM_SHORT_SALE_TYPE_SHORT_SALE_WITH_NO_EXEMPTION_SESH = 1
#define ENUM_SHORT_SALE_TYPE_SHORT_SALE_WITH_EXEMPTION_SSEX = 2
#define ENUM_SHORT_SALE_TYPE_UNDISCLOSED_SELL_INFORMATION_NOT_AVAILABLE_UNDI = 3

/*
 * Side Time In Force Values
 */ 
#define ENUM_SIDE_TIME_IN_FORCE_DAY = 0
#define ENUM_SIDE_TIME_IN_FORCE_FAK = 3

/*
 * Split Msg Values
 */ 
#define ENUM_SPLIT_MSG_NO_VALUE = 255
#define ENUM_SPLIT_MSG_SPLIT_MESSAGE_DELAYED = 0
#define ENUM_SPLIT_MSG_OUTOF_ORDER_MESSAGE_DELAYED = 1
#define ENUM_SPLIT_MSG_COMPLETE_MESSAGE_DELAYED = 2

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_NEGOTIATE = 500
#define ENUM_TEMPLATE_ID_NEGOTIATION_RESPONSE = 501
#define ENUM_TEMPLATE_ID_NEGOTIATION_REJECT = 502
#define ENUM_TEMPLATE_ID_ESTABLISH = 503
#define ENUM_TEMPLATE_ID_ESTABLISHMENT_ACK = 504
#define ENUM_TEMPLATE_ID_ESTABLISHMENT_REJECT = 505
#define ENUM_TEMPLATE_ID_SEQUENCE = 506
#define ENUM_TEMPLATE_ID_TERMINATE = 507
#define ENUM_TEMPLATE_ID_RETRANSMIT_REQUEST = 508
#define ENUM_TEMPLATE_ID_RETRANSMISSION = 509
#define ENUM_TEMPLATE_ID_RETRANSMIT_REJECT = 510
#define ENUM_TEMPLATE_ID_NOT_APPLIED = 513
#define ENUM_TEMPLATE_ID_NEW_ORDER_SINGLE = 514
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REPLACE_REQUEST = 515
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REQUEST = 516
#define ENUM_TEMPLATE_ID_MASS_QUOTE = 517
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_DEFINITION_REQUEST = 518
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_DEFINITION_REQUEST_ACK = 519
#define ENUM_TEMPLATE_ID_BUSINESS_REJECT = 521
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_NEW = 522
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_REJECT = 523
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_ELIMINATION = 524
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_OUTRIGHT = 525
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_SPREAD = 526
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_SPREAD_LEG = 527
#define ENUM_TEMPLATE_ID_QUOTE_CANCEL = 528
#define ENUM_TEMPLATE_ID_ORDER_MASS_ACTION_REQUEST = 529
#define ENUM_TEMPLATE_ID_ORDER_MASS_STATUS_REQUEST = 530
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_MODIFY = 531
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_STATUS = 532
#define ENUM_TEMPLATE_ID_ORDER_STATUS_REQUEST = 533
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_CANCEL = 534
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REJECT = 535
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REPLACE_REJECT = 536
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_LIST_REQUEST = 537
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_LIST_REPORT = 538
#define ENUM_TEMPLATE_ID_EXECUTION_ACK = 539
#define ENUM_TEMPLATE_ID_REQUEST_FOR_QUOTE = 543
#define ENUM_TEMPLATE_ID_NEW_ORDER_CROSS = 544
#define ENUM_TEMPLATE_ID_MASS_QUOTE_ACK = 545
#define ENUM_TEMPLATE_ID_REQUEST_FOR_QUOTE_ACK = 546
#define ENUM_TEMPLATE_ID_QUOTE_CANCEL_ACK = 547
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_ADDENDUM_OUTRIGHT = 548
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_ADDENDUM_SPREAD = 549
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_ADDENDUM_SPREAD_LEG = 550
#define ENUM_TEMPLATE_ID_ORDER_MASS_ACTION_REPORT = 558
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_REQUEST = 560
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_RESPONSE = 561

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY = 0
#define ENUM_TIME_IN_FORCE_GOOD_TILL_CANCEL = 1
#define ENUM_TIME_IN_FORCE_FILL_AND_KILL = 3
#define ENUM_TIME_IN_FORCE_FILL_OR_KILL = 4
#define ENUM_TIME_IN_FORCE_GOOD_TILL_DATE = 6


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Leg Option Delta
 */ 
typedef struct {
    int32_t Mantissa32;
    int8_t Exponent;
} LegOptionDeltaT;

/*
 * Structure: Security Definition Response Leg Group
 */ 
typedef struct {
    int64_t LegPrice;
    LegOptionDeltaT LegOptionDelta;
    int32_t LegSecurityId;
    uint8_t LegSide;
    uint8_t LegRatioQty;
} SecurityDefinitionResponseLegGroupT;

/*
 * Structure: Group Size
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeT;

/*
 * Structure: Security Definition Response Leg Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} SecurityDefinitionResponseLegGroupsT;

/*
 * Structure: Maturity Month Year
 */ 
typedef struct {
    uint16_t Year;
    uint8_t Month;
    uint8_t Day;
    uint8_t Week;
} MaturityMonthYearT;

/*
 * Structure: Security Definition Response 561
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char FinancialInstrumentFullName[35];
    char SenderId[20];
    char Symbol[20];
    uint64_t PartyDetailsListReqId;
    uint64_t SecurityReqId;
    uint64_t SecurityResponseId;
    uint64_t SendingTimeEpoch;
    char SecurityGroup[6];
    char SecurityType[6];
    char Location[5];
    int32_t SecurityId;
    char Currency[3];
    MaturityMonthYearT MaturityMonthYear;
    uint16_t DelayDuration;
    uint16_t StartDate;
    uint16_t EndDate;
    uint8_t MaxNoOfSubstitutions;
    int32_t SourceRepoId;
    char TerminationType[8];
    uint8_t SecurityResponseType;
    uint8_t ExpirationCycle;
    uint8_t ManualOrderIndicator;
    uint8_t SplitMsg;
    uint8_t AutoQuoteRequest;
    uint8_t PossRetransFlag;
} SecurityDefinitionResponse561T;

/*
 * Structure: Security Definition Request Leg Group
 */ 
typedef struct {
    int64_t LegPrice;
    int32_t LegSecurityId;
    LegOptionDeltaT LegOptionDelta;
    uint8_t LegSide;
    uint8_t LegRatioQty;
} SecurityDefinitionRequestLegGroupT;

/*
 * Structure: Security Definition Request Leg Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} SecurityDefinitionRequestLegGroupsT;

/*
 * Structure: Security Definition Request 560
 */ 
typedef struct {
    uint64_t PartyDetailsListReqId;
    uint64_t SecurityReqId;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderId[20];
    uint64_t SendingTimeEpoch;
    char SecuritySubType[8];
    char Location[5];
    uint16_t StartDate;
    uint16_t EndDate;
    uint8_t MaxNoOfSubstitutions;
    int32_t SourceRepoId;
} SecurityDefinitionRequest560T;

/*
 * Structure: Affected Orders Group
 */ 
typedef struct {
    char Origclordid[20];
    uint64_t AffectedOrderId;
    uint32_t CxlQuantity;
} AffectedOrdersGroupT;

/*
 * Structure: Affected Orders Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} AffectedOrdersGroupsT;

/*
 * Structure: Order Mass Action Report 558
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char SenderId[20];
    uint64_t PartyDetailsListReqId;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    uint64_t MassActionReportId;
    char SecurityGroup[6];
    char Location[5];
    int32_t SecurityId;
    uint16_t DelayDuration;
    uint8_t MassActionResponse;
    uint8_t ManualOrderIndicator;
    uint8_t MassActionScope;
    uint8_t TotalAffectedOrders;
    uint8_t LastFragment;
    uint8_t MassActionRejectReason;
    uint8_t MarketSegmentId;
    uint8_t MassCancelRequestType;
    uint8_t Side;
    char OrdType[1];
    uint8_t TimeInForce;
    uint8_t SplitMsg;
    uint8_t LiquidityFlag;
    uint8_t PossRetransFlag;
    uint64_t DelayToTime;
} OrderMassActionReport558T;

/*
 * Structure: Execution Report Trade Addendum Spread Leg Order Event Group
 */ 
typedef struct {
    int64_t OrderEventPx;
    char OrderEventText[5];
    uint32_t OrderEventExecId;
    uint32_t OrderEventQty;
    uint8_t OrderEventType;
    uint8_t OrderEventReason;
    uint32_t OriginalOrderEventExecId;
} ExecutionReportTradeAddendumSpreadLegOrderEventGroupT;

/*
 * Structure: Execution Report Trade Addendum Spread Leg Order Event Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} ExecutionReportTradeAddendumSpreadLegOrderEventGroupsT;

/*
 * Structure: Fills Group
 */ 
typedef struct {
    int64_t FillPx;
    uint32_t FillQty;
    char FillExecId[2];
    uint8_t FillYieldType;
} FillsGroupT;

/*
 * Structure: Fills Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} FillsGroupsT;

/*
 * Structure: Execution Report Trade Addendum Spread Order Event Group
 */ 
typedef struct {
    int64_t OrderEventPx;
    char OrderEventText[5];
    uint32_t OrderEventExecId;
    uint32_t OrderEventQty;
    uint8_t OrderEventType;
    uint8_t OrderEventReason;
    uint32_t OriginalOrderEventExecId;
} ExecutionReportTradeAddendumSpreadOrderEventGroupT;

/*
 * Structure: Execution Report Trade Addendum Spread Order Event Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} ExecutionReportTradeAddendumSpreadOrderEventGroupsT;

/*
 * Structure: Execution Report Trade Addendum Spread Leg Group
 */ 
typedef struct {
    uint64_t LegExecId;
    int64_t LegLastPx;
    uint64_t LegExecRefId;
    uint32_t LegTradeId;
    uint32_t LegTradeRefId;
    int32_t LegSecurityId;
    uint32_t LegLastQty;
    uint8_t LegSide;
} ExecutionReportTradeAddendumSpreadLegGroupT;

/*
 * Structure: Execution Report Trade Addendum Spread Leg Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} ExecutionReportTradeAddendumSpreadLegGroupsT;

/*
 * Bitfield: Exec Inst
 */ 
typedef struct {
    uint8_t
    Reserved5 : 1,
    Reserved4 : 1,
    Reserved3 : 1,
    Reserved2 : 1,
    Reserved1 : 1,
    Nh : 1,
    Ob : 1,
    Aon : 1;
} ExecInstT;

/*
 * Structure: Execution Report Trade Addendum Outright Order Event Group
 */ 
typedef struct {
    int64_t OrderEventPx;
    char OrderEventText[5];
    uint32_t OrderEventExecId;
    uint32_t OrderEventQty;
    uint8_t OrderEventType;
    uint8_t OrderEventReason;
    uint32_t OriginalOrderEventExecId;
} ExecutionReportTradeAddendumOutrightOrderEventGroupT;

/*
 * Structure: Execution Report Trade Addendum Outright Order Event Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} ExecutionReportTradeAddendumOutrightOrderEventGroupsT;

/*
 * Structure: Quote Cancel Ack Set Group
 */ 
typedef struct {
    uint16_t QuoteSetId;
    uint16_t QuoteErrorCode;
} QuoteCancelAckSetGroupT;

/*
 * Structure: Quote Cancel Ack Set Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} QuoteCancelAckSetGroupsT;

/*
 * Structure: Quote Cancel Ack Entry Group
 */ 
typedef struct {
    uint32_t QuoteEntryId;
    int32_t SecurityId;
    uint8_t QuoteEntryRejectReason;
} QuoteCancelAckEntryGroupT;

/*
 * Structure: Quote Cancel Ack Entry Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} QuoteCancelAckEntryGroupsT;

/*
 * Structure: Request For Quote Ack 546
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char SenderId[20];
    char ExchangeQuoteReqId[17];
    uint64_t PartyDetailsListReqId;
    uint64_t RequestTime;
    uint64_t SendingTimeEpoch;
    uint64_t QuoteReqId;
    char Location[5];
    uint16_t QuoteRejectReason;
    uint16_t DelayDuration;
    uint8_t QuoteStatus;
    uint8_t ManualOrderIndicator;
    uint8_t SplitMsg;
    uint8_t PossRetransFlag;
    uint64_t DelayToTime;
} RequestForQuoteAck546T;

/*
 * Structure: Mass Quote Ack Entry Group
 */ 
typedef struct {
    uint32_t QuoteEntryId;
    int32_t SecurityId;
    uint16_t QuoteSetId;
    uint8_t QuoteEntryRejectReason;
} MassQuoteAckEntryGroupT;

/*
 * Structure: Mass Quote Ack Entry Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MassQuoteAckEntryGroupsT;

/*
 * Structure: Mass Quote Ack 545
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char SenderId[20];
    uint64_t PartyDetailsListReqId;
    uint64_t RequestTime;
    uint64_t SendingTimeEpoch;
    uint64_t QuoteReqId;
    char Location[5];
    uint32_t QuoteId;
    uint16_t QuoteRejectReason;
    uint16_t DelayDuration;
    uint8_t QuoteStatus;
    uint8_t ManualOrderIndicator;
    uint8_t NoProcessedEntries;
    uint8_t MmProtectionReset;
    uint8_t SplitMsg;
    uint8_t LiquidityFlag;
    uint8_t ShortSaleType;
    uint8_t TotNoQuoteEntries;
    uint8_t PossRetransFlag;
    uint64_t DelayToTime;
} MassQuoteAck545T;

/*
 * Structure: Sides Group
 */ 
typedef struct {
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint32_t OrderQty;
    uint8_t Side;
    uint8_t SideTimeInForce;
} SidesGroupT;

/*
 * Structure: Sides Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} SidesGroupsT;

/*
 * Structure: New Order Cross 544
 */ 
typedef struct {
    uint64_t CrossId;
    uint64_t OrderRequestId;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderId[20];
    int64_t Price;
    uint64_t TransBkdTime;
    uint64_t SendingTimeEpoch;
    char Location[5];
    int32_t SecurityId;
} NewOrderCross544T;

/*
 * Structure: Related Sym Group
 */ 
typedef struct {
    int32_t SecurityId;
    uint32_t OrderQty;
    uint8_t Side;
} RelatedSymGroupT;

/*
 * Structure: Related Sym Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} RelatedSymGroupsT;

/*
 * Structure: Request For Quote 543
 */ 
typedef struct {
    uint64_t PartyDetailsListReqId;
    uint64_t QuoteReqId;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderId[20];
    uint64_t SendingTimeEpoch;
    char Location[5];
    uint8_t QuoteType;
} RequestForQuote543T;

/*
 * Structure: Execution Ack 539
 */ 
typedef struct {
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    uint8_t ExecAckStatus;
    uint32_t SeqNum;
    char Clordid[20];
    uint64_t SecExecId;
    int64_t LastPx;
    int32_t SecurityId;
    uint32_t LastQty;
    char DkReason;
    uint8_t Side;
    char SenderId[20];
} ExecutionAck539T;

/*
 * Structure: Trd Reg Publications Group
 */ 
typedef struct {
    uint8_t TrdRegPublicationType;
    uint8_t TrdRegPublicationReason;
} TrdRegPublicationsGroupT;

/*
 * Structure: Trd Reg Publications Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} TrdRegPublicationsGroupsT;

/*
 * Structure: Party Details Group
 */ 
typedef struct {
    char PartyDetailId[20];
    uint16_t PartyDetailRole;
} PartyDetailsGroupT;

/*
 * Structure: Party Details Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} PartyDetailsGroupsT;

/*
 * Structure: Party I Ds Group
 */ 
typedef struct {
    uint64_t PartyId;
    char PartyIdSource[1];
    uint16_t PartyRole;
} PartyIDsGroupT;

/*
 * Structure: Party I Ds Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} PartyIDsGroupsT;

/*
 * Structure: Requesting Party I Ds Group
 */ 
typedef struct {
    char RequestingPartyId[5];
    char RequestingPartyIdSource[1];
    char RequestingPartyRole[1];
} RequestingPartyIDsGroupT;

/*
 * Structure: Requesting Party I Ds Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} RequestingPartyIDsGroupsT;

/*
 * Structure: Order Cancel Replace Reject 536
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char ExecId[40];
    char SenderId[20];
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    char Location[5];
    uint16_t CxlRejReason;
    uint16_t DelayDuration;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t SplitMsg;
    uint8_t LiquidityFlag;
    uint64_t DelayToTime;
} OrderCancelReplaceReject536T;

/*
 * Structure: Order Cancel Reject 535
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char ExecId[40];
    char SenderId[20];
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    char Location[5];
    uint16_t CxlRejReason;
    uint16_t DelayDuration;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t SplitMsg;
    uint8_t LiquidityFlag;
    uint64_t DelayToTime;
} OrderCancelReject535T;

/*
 * Structure: Execution Report Cancel 534
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char ExecId[40];
    char SenderId[20];
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    int64_t Price;
    int64_t StopPx;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    uint64_t CrossId;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t OrderQty;
    uint32_t CumQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    uint16_t DelayDuration;
    char OrdType[1];
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t SplitMsg;
    uint8_t ExecRestatementReason;
    char CrossType[1];
    ExecInstT ExecInst;
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
    uint64_t DelayToTime;
} ExecutionReportCancel534T;

/*
 * Structure: Order Status Request 533
 */ 
typedef struct {
    uint64_t PartyDetailsListReqId;
    uint64_t OrdStatusReqId;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderId[20];
    uint64_t OrderId;
    uint64_t SendingTimeEpoch;
    char Location[5];
} OrderStatusRequest533T;

/*
 * Structure: Execution Report Status 532
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char ExecId[40];
    char SenderId[20];
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    int64_t Price;
    int64_t StopPx;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    uint64_t OrdStatusReqId;
    uint64_t MassStatusReqId;
    uint64_t CrossId;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t OrderQty;
    uint32_t CumQty;
    uint32_t LeavesQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    char OrdStatus[1];
    char OrdType[1];
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t LastRptRequested;
    char CrossType[1];
    ExecInstT ExecInst;
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportStatus532T;

/*
 * Structure: Execution Report Modify 531
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char ExecId[40];
    char SenderId[20];
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    int64_t Price;
    int64_t StopPx;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    uint64_t CrossId;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t OrderQty;
    uint32_t CumQty;
    uint32_t LeavesQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    uint16_t DelayDuration;
    char OrdType[1];
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t SplitMsg;
    char CrossType[1];
    ExecInstT ExecInst;
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
    uint64_t DelayToTime;
} ExecutionReportModify531T;

/*
 * Structure: Order Mass Status Request 530
 */ 
typedef struct {
    uint64_t PartyDetailsListReqId;
    uint64_t MassStatusReqId;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderId[20];
    uint64_t SendingTimeEpoch;
    char SecurityGroup[6];
    char Location[5];
    int32_t SecurityId;
    uint8_t MassStatusReqType;
    uint8_t OrdStatusReqType;
    uint8_t TimeInForce;
    uint8_t MarketSegmentId;
} OrderMassStatusRequest530T;

/*
 * Structure: Order Mass Action Request 529
 */ 
typedef struct {
    uint64_t PartyDetailsListReqId;
    uint64_t OrderRequestId;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderId[20];
    uint64_t SendingTimeEpoch;
    char SecurityGroup[6];
    char Location[5];
    int32_t SecurityId;
    uint8_t MassActionScope;
    uint8_t MarketSegmentId;
    uint8_t MassCancelRequestType;
    uint8_t Side;
    char OrdType[1];
    uint8_t TimeInForce;
    uint8_t LiquidityFlag;
} OrderMassActionRequest529T;

/*
 * Structure: Quote Cancel Set Group
 */ 
typedef struct {
    uint32_t BidSize;
    uint32_t OfferSize;
    uint16_t QuoteSetId;
} QuoteCancelSetGroupT;

/*
 * Structure: Quote Cancel Set Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} QuoteCancelSetGroupsT;

/*
 * Structure: Quote Cancel Entry Group
 */ 
typedef struct {
    char SecurityGroup[6];
    int32_t SecurityId;
} QuoteCancelEntryGroupT;

/*
 * Structure: Quote Cancel Entry Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} QuoteCancelEntryGroupsT;

/*
 * Structure: Execution Report Trade Spread Leg Order Event Group
 */ 
typedef struct {
    int64_t OrderEventPx;
    char OrderEventText[5];
    uint32_t OrderEventExecId;
    uint32_t OrderEventQty;
    uint8_t OrderEventType;
    uint8_t OrderEventReason;
} ExecutionReportTradeSpreadLegOrderEventGroupT;

/*
 * Structure: Execution Report Trade Spread Leg Order Event Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} ExecutionReportTradeSpreadLegOrderEventGroupsT;

/*
 * Structure: Risk Free Rate
 */ 
typedef struct {
    int32_t Mantissa32;
    int8_t Exponent;
} RiskFreeRateT;

/*
 * Structure: Time To Expiration
 */ 
typedef struct {
    int32_t Mantissa32;
    int8_t Exponent;
} TimeToExpirationT;

/*
 * Structure: Option Delta
 */ 
typedef struct {
    int32_t Mantissa32;
    int8_t Exponent;
} OptionDeltaT;

/*
 * Structure: Volatility
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} VolatilityT;

/*
 * Structure: Execution Report Trade Spread Order Event Group
 */ 
typedef struct {
    int64_t OrderEventPx;
    char OrderEventText[5];
    uint32_t OrderEventExecId;
    uint32_t OrderEventQty;
    uint8_t OrderEventType;
    uint8_t OrderEventReason;
} ExecutionReportTradeSpreadOrderEventGroupT;

/*
 * Structure: Execution Report Trade Spread Order Event Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} ExecutionReportTradeSpreadOrderEventGroupsT;

/*
 * Structure: Execution Report Trade Spread Leg Group
 */ 
typedef struct {
    uint64_t LegExecId;
    int64_t LegLastPx;
    int32_t LegSecurityId;
    uint32_t LegTradeId;
    uint32_t LegLastQty;
    uint8_t LegSide;
} ExecutionReportTradeSpreadLegGroupT;

/*
 * Structure: Execution Report Trade Spread Leg Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} ExecutionReportTradeSpreadLegGroupsT;

/*
 * Structure: Execution Report Trade Outright Order Event Group
 */ 
typedef struct {
    int64_t OrderEventPx;
    char OrderEventText[5];
    uint32_t OrderEventExecId;
    uint32_t OrderEventQty;
    uint8_t OrderEventType;
    uint8_t OrderEventReason;
} ExecutionReportTradeOutrightOrderEventGroupT;

/*
 * Structure: Execution Report Trade Outright Order Event Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} ExecutionReportTradeOutrightOrderEventGroupsT;

/*
 * Structure: Execution Report Elimination 524
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char ExecId[40];
    char SenderId[20];
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    int64_t Price;
    int64_t StopPx;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    uint64_t CrossId;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t CumQty;
    uint32_t OrderQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    char OrdType[1];
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    char CrossType[1];
    ExecInstT ExecInst;
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportElimination524T;

/*
 * Structure: Execution Report Reject 523
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char ExecId[40];
    char SenderId[20];
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    int64_t Price;
    int64_t StopPx;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    uint64_t CrossId;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t OrderQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t OrdRejReason;
    uint16_t ExpireDate;
    uint16_t DelayDuration;
    char OrdType[1];
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t SplitMsg;
    char CrossType[1];
    ExecInstT ExecInst;
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
    uint64_t DelayToTime;
} ExecutionReportReject523T;

/*
 * Structure: Execution Report New 522
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char ExecId[40];
    char SenderId[20];
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    int64_t Price;
    int64_t StopPx;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    uint64_t CrossId;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t OrderQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    uint16_t DelayDuration;
    char OrdType[1];
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t SplitMsg;
    char CrossType[1];
    ExecInstT ExecInst;
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
    uint64_t DelayToTime;
} ExecutionReportNew522T;

/*
 * Structure: Business Reject 521
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char SenderId[20];
    uint64_t PartyDetailsListReqId;
    uint64_t SendingTimeEpoch;
    uint64_t BusinessRejectRefId;
    char Location[5];
    uint32_t RefSeqNum;
    uint16_t RefTagId;
    uint16_t BusinessRejectReason;
    char RefMsgType[2];
    uint8_t PossRetransFlag;
    uint8_t ManualOrderIndicator;
    uint8_t SplitMsg;
} BusinessReject521T;

/*
 * Structure: Mass Quote Entry Group
 */ 
typedef struct {
    int64_t BidPx;
    int64_t OfferPx;
    uint32_t QuoteEntryId;
    int32_t SecurityId;
    uint32_t BidSize;
    uint32_t OfferSize;
    int32_t UnderlyingSecurityId;
    uint16_t QuoteSetId;
} MassQuoteEntryGroupT;

/*
 * Structure: Mass Quote Entry Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MassQuoteEntryGroupsT;

/*
 * Structure: Mass Quote 517
 */ 
typedef struct {
    uint64_t PartyDetailsListReqId;
    uint64_t SendingTimeEpoch;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderId[20];
    uint64_t QuoteReqId;
    char Location[5];
    uint32_t QuoteId;
    uint8_t TotNoQuoteEntries;
    uint8_t MmProtectionReset;
    uint8_t LiquidityFlag;
    uint8_t ShortSaleType;
} MassQuote517T;

/*
 * Structure: Order Cancel Request 516
 */ 
typedef struct {
    uint64_t OrderId;
    uint64_t PartyDetailsListReqId;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderId[20];
    char Clordid[20];
    uint64_t OrderRequestId;
    uint64_t SendingTimeEpoch;
    char Location[5];
    int32_t SecurityId;
    uint8_t Side;
    uint8_t LiquidityFlag;
} OrderCancelRequest516T;

/*
 * Structure: Order Cancel Replace Request 515
 */ 
typedef struct {
    int64_t Price;
    uint32_t OrderQty;
    int32_t SecurityId;
    uint8_t Side;
    uint32_t SeqNum;
    char SenderId[20];
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    int64_t StopPx;
    uint64_t OrderRequestId;
    uint64_t SendingTimeEpoch;
    char Location[5];
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    char OrdType[1];
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t OfmOverride;
    ExecInstT ExecInst;
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} OrderCancelReplaceRequest515T;

/*
 * Structure: New Order Single 514
 */ 
typedef struct {
    int64_t Price;
    uint32_t OrderQty;
    int32_t SecurityId;
    uint8_t Side;
    uint32_t SeqNum;
    char SenderId[20];
    char Clordid[20];
    uint64_t PartyDetailsListReqId;
    uint64_t OrderRequestId;
    uint64_t SendingTimeEpoch;
    int64_t StopPx;
    char Location[5];
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    char OrdType[1];
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    ExecInstT ExecInst;
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} NewOrderSingle514T;

/*
 * Structure: Not Applied 513
 */ 
typedef struct {
    uint64_t Uuid;
    uint32_t FromSeqNo;
    uint16_t MsgCount;
    uint8_t SplitMsg;
} NotApplied513T;

/*
 * Structure: Retransmit Reject 510
 */ 
typedef struct {
    char Reason[48];
    uint64_t Uuid;
    uint64_t LastUuid;
    uint64_t RequestTimestamp;
    uint16_t ErrorCodes;
    uint8_t SplitMsg;
} RetransmitReject510T;

/*
 * Structure: Retransmission 509
 */ 
typedef struct {
    uint64_t Uuid;
    uint64_t LastUuid;
    uint64_t RequestTimestamp;
    uint32_t FromSeqNo;
    uint16_t MsgCount;
    uint8_t SplitMsg;
} Retransmission509T;

/*
 * Structure: Retransmit Request 508
 */ 
typedef struct {
    uint64_t Uuid;
    uint64_t LastUuid;
    uint64_t RequestTimestamp;
    uint32_t FromSeqNo;
    uint16_t MsgCount;
} RetransmitRequest508T;

/*
 * Structure: Terminate 507
 */ 
typedef struct {
    char Reason[48];
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    uint16_t ErrorCodes;
    uint8_t SplitMsg;
} Terminate507T;

/*
 * Structure: Sequence 506
 */ 
typedef struct {
    uint64_t Uuid;
    uint32_t NextSeqNo;
    uint8_t FaultToleranceIndicator;
    uint8_t KeepAliveIntervalLapsed;
} Sequence506T;

/*
 * Structure: Establishment Reject 505
 */ 
typedef struct {
    char Reason[48];
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    uint32_t NextSeqNo;
    uint16_t ErrorCodes;
    uint8_t FaultToleranceIndicator;
    uint8_t SplitMsg;
} EstablishmentReject505T;

/*
 * Structure: Establishment Ack 504
 */ 
typedef struct {
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    uint32_t NextSeqNo;
    uint32_t PreviousSeqNo;
    uint64_t PreviousUuid;
    uint16_t KeepAliveInterval;
    uint16_t SecretKeySecureIdExpiration;
    uint8_t FaultToleranceIndicator;
    uint8_t SplitMsg;
} EstablishmentAck504T;

/*
 * Structure: Negotiation Reject 502
 */ 
typedef struct {
    char Reason[48];
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    uint16_t ErrorCodes;
    uint8_t FaultToleranceIndicator;
    uint8_t SplitMsg;
} NegotiationReject502T;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t BlockLength;
    uint16_t TemplateId;
    uint16_t SchemaId;
    uint16_t Version;
} MessageHeaderT;

/*
 * Structure: Simple Open Framing Header
 */ 
typedef struct {
    uint16_t MessageLength;
    uint16_t EncodingType;
} SimpleOpenFramingHeaderT;

