/*******************************************************************************
 * C Structs For Cme Futures Sbe iLink3 8.2 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Cmta Giveup Cd Values
 */ 
#define ENUM_CMTA_GIVEUP_CD_NO_VALUE_0 = '0'
#define ENUM_CMTA_GIVEUP_CD_GIVE_UP_G = 'G'
#define ENUM_CMTA_GIVEUP_CD_SG_XOFFSET_S = 'S'

/*
 * Cust Order Capacity Values
 */ 
#define ENUM_CUST_ORDER_CAPACITY_NO_VALUE_255 = 255
#define ENUM_CUST_ORDER_CAPACITY_MEMBERTRADINGFORTHEIROWNACCOUNT_1 = 1
#define ENUM_CUST_ORDER_CAPACITY_CLEARINGFIRMTRADINGFORITSPROPRIETARYACCOUNT_2 = 2
#define ENUM_CUST_ORDER_CAPACITY_MEMBERTRADINGFORANOTHERMEMBER_3 = 3
#define ENUM_CUST_ORDER_CAPACITY_ALLOTHER_4 = 4

/*
 * Dk Reason Values
 */ 
#define ENUM_DK_REASON_NO_VALUE_0 = '0'
#define ENUM_DK_REASON_UNKNOWN_SECURITY_A = 'A'
#define ENUM_DK_REASON_WRONG_SIDE_B = 'B'
#define ENUM_DK_REASON_QUANTITY_EXCEEDS_ORDER_C = 'C'
#define ENUM_DK_REASON_NO_MATCHING_ORDER_D = 'D'
#define ENUM_DK_REASON_PRICE_EXCEEDS_LIMIT_E = 'E'
#define ENUM_DK_REASON_CALCULATION_DIFFERENCE_F = 'F'
#define ENUM_DK_REASON_NO_MATCHING_EXECUTION_REPORT_G = 'G'
#define ENUM_DK_REASON_OTHER_Z = 'Z'

/*
 * Exec Ack Status Values
 */ 
#define ENUM_EXEC_ACK_STATUS_ACCEPTED_1 = 1
#define ENUM_EXEC_ACK_STATUS_REJECTED_2 = 2

/*
 * Mass Action Response Values
 */ 
#define ENUM_MASS_ACTION_RESPONSE_REJECTED_0 = 0
#define ENUM_MASS_ACTION_RESPONSE_ACCEPTED_1 = 1

/*
 * Mass Action Scope Values
 */ 
#define ENUM_MASS_ACTION_SCOPE_INSTRUMENT_1 = 1
#define ENUM_MASS_ACTION_SCOPE_ALL_7 = 7
#define ENUM_MASS_ACTION_SCOPE_MARKET_SEGMENT_ID_9 = 9
#define ENUM_MASS_ACTION_SCOPE_INSTRUMENT_GROUP_10 = 10
#define ENUM_MASS_ACTION_SCOPE_QUOTE_SET_ID_100 = 100

/*
 * Order Event Type Values
 */ 
#define ENUM_ORDER_EVENT_TYPE_NO_VALUE_255 = 255
#define ENUM_ORDER_EVENT_TYPE_PARTIALLY_FILLED_4 = 4
#define ENUM_ORDER_EVENT_TYPE_FILLED_5 = 5

/*
 * Party Detail Role Values
 */ 
#define ENUM_PARTY_DETAIL_ROLE_EXECUTING_FIRM_1 = 1
#define ENUM_PARTY_DETAIL_ROLE_CUSTOMER_ACCOUNT_24 = 24
#define ENUM_PARTY_DETAIL_ROLE_TAKE_UP_FIRM_96 = 96
#define ENUM_PARTY_DETAIL_ROLE_OPERATOR_118 = 118
#define ENUM_PARTY_DETAIL_ROLE_TAKE_UP_ACCOUNT_1000 = 1000

/*
 * Short Sale Type Values
 */ 
#define ENUM_SHORT_SALE_TYPE_NO_VALUE_255 = 255
#define ENUM_SHORT_SALE_TYPE_LONG_SELL_0 = 0
#define ENUM_SHORT_SALE_TYPE_SHORT_SALE_WITH_NO_EXEMPTION_SESH_1 = 1
#define ENUM_SHORT_SALE_TYPE_SHORT_SALE_WITH_EXEMPTION_SSEX_2 = 2
#define ENUM_SHORT_SALE_TYPE_UNDISCLOSED_SELL_INFORMATION_NOT_AVAILABLE_UNDI_3 = 3

/*
 * Side Time In Force Values
 */ 
#define ENUM_SIDE_TIME_IN_FORCE_DAY_0 = 0
#define ENUM_SIDE_TIME_IN_FORCE_FAK_3 = 3

/*
 * Split Msg Values
 */ 
#define ENUM_SPLIT_MSG_NO_VALUE_255 = 255
#define ENUM_SPLIT_MSG_SPLIT_MESSAGE_DELAYED_0 = 0
#define ENUM_SPLIT_MSG_OUTOF_ORDER_MESSAGE_DELAYED_1 = 1
#define ENUM_SPLIT_MSG_COMPLETE_MESSAGE_DELAYED_2 = 2

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_NEGOTIATE_500 = 500
#define ENUM_TEMPLATE_ID_NEGOTIATION_RESPONSE_501 = 501
#define ENUM_TEMPLATE_ID_NEGOTIATION_REJECT_502 = 502
#define ENUM_TEMPLATE_ID_ESTABLISH_503 = 503
#define ENUM_TEMPLATE_ID_ESTABLISHMENT_ACK_504 = 504
#define ENUM_TEMPLATE_ID_ESTABLISHMENT_REJECT_505 = 505
#define ENUM_TEMPLATE_ID_SEQUENCE_506 = 506
#define ENUM_TEMPLATE_ID_TERMINATE_507 = 507
#define ENUM_TEMPLATE_ID_RETRANSMIT_REQUEST_508 = 508
#define ENUM_TEMPLATE_ID_RETRANSMISSION_509 = 509
#define ENUM_TEMPLATE_ID_RETRANSMIT_REJECT_510 = 510
#define ENUM_TEMPLATE_ID_NOT_APPLIED_513 = 513
#define ENUM_TEMPLATE_ID_NEW_ORDER_SINGLE_514 = 514
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REPLACE_REQUEST_515 = 515
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REQUEST_516 = 516
#define ENUM_TEMPLATE_ID_MASS_QUOTE_517 = 517
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_DEFINITION_REQUEST_518 = 518
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_DEFINITION_REQUEST_ACK_519 = 519
#define ENUM_TEMPLATE_ID_BUSINESS_REJECT_521 = 521
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_NEW_522 = 522
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_REJECT_523 = 523
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_ELIMINATION_524 = 524
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_OUTRIGHT_525 = 525
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_SPREAD_526 = 526
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_SPREAD_LEG_527 = 527
#define ENUM_TEMPLATE_ID_QUOTE_CANCEL_528 = 528
#define ENUM_TEMPLATE_ID_ORDER_MASS_ACTION_REQUEST_529 = 529
#define ENUM_TEMPLATE_ID_ORDER_MASS_STATUS_REQUEST_530 = 530
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_MODIFY_531 = 531
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_STATUS_532 = 532
#define ENUM_TEMPLATE_ID_ORDER_STATUS_REQUEST_533 = 533
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_CANCEL_534 = 534
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REJECT_535 = 535
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REPLACE_REJECT_536 = 536
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_LIST_REQUEST_537 = 537
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_LIST_REPORT_538 = 538
#define ENUM_TEMPLATE_ID_EXECUTION_ACK_539 = 539
#define ENUM_TEMPLATE_ID_REQUEST_FOR_QUOTE_543 = 543
#define ENUM_TEMPLATE_ID_NEW_ORDER_CROSS_544 = 544
#define ENUM_TEMPLATE_ID_MASS_QUOTE_ACK_545 = 545
#define ENUM_TEMPLATE_ID_REQUEST_FOR_QUOTE_ACK_546 = 546
#define ENUM_TEMPLATE_ID_QUOTE_CANCEL_ACK_547 = 547
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_ADDENDUM_OUTRIGHT_548 = 548
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_ADDENDUM_SPREAD_549 = 549
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_ADDENDUM_SPREAD_LEG_550 = 550
#define ENUM_TEMPLATE_ID_ORDER_MASS_ACTION_REPORT_558 = 558
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_REQUEST_560 = 560
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_RESPONSE_561 = 561

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY_0 = 0
#define ENUM_TIME_IN_FORCE_GOOD_TILL_CANCEL_1 = 1
#define ENUM_TIME_IN_FORCE_FILL_AND_KILL_3 = 3
#define ENUM_TIME_IN_FORCE_FILL_OR_KILL_4 = 4
#define ENUM_TIME_IN_FORCE_GOOD_TILL_DATE_6 = 6


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Affected Orders Group
 */ 
typedef struct {
    char OrigCiOrdId[20];
    uint64_t AffectedOrderId;
    uint32_t CxlQuantity;
} AffectedOrdersGroupT;

/*
 * Structure: Affected Orders Groups
 */ 
typedef struct {
    char GroupSize[0];
} AffectedOrdersGroupsT;

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
 * Structure: Credentials
 */ 
typedef struct {
    uint16_t Length;
} CredentialsT;

/*
 * Structure: Establish 503
 */ 
typedef struct {
    char HmacSignature[32];
    char AccessKeyId[20];
    char TradingSystemName[30];
    char TradingSystemVersion[10];
    char TradingSystemVendor[10];
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    uint32_t NextSeqNo;
    char Session[3];
    char Firm[5];
    uint16_t KeepAliveInterval;
} Establish503T;

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
 * Structure: Exec Inst
 */ 
typedef struct {
    char Reserved5[1];
    char Reserved4[1];
    char Reserved3[1];
    char Reserved2[1];
    char Reserved1[1];
    char Nh[1];
    char Ob[1];
    char Aon[1];
} ExecInstT;

/*
 * Structure: Execution Ack 539
 */ 
typedef struct {
    uint64_t PartyDetailsListReqId;
    uint64_t OrderId;
    uint8_t ExecAckStatus;
    uint32_t SeqNum;
    char ClOrdId[20];
    uint64_t SecExecId;
    int64_t LastPx;
    int32_t SecurityId;
    uint32_t LastQty;
    char DkReason;
    uint8_t Side;
} ExecutionAck539T;

/*
 * Structure: Execution Report Cancel 534
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char ExecId[40];
    char SenderId[20];
    char ClOrdId[20];
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
    char ExecInst[0];
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportCancel534T;

/*
 * Structure: Execution Report Elimination 524
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char ExecId[40];
    char SenderId[20];
    char ClOrdId[20];
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
    char ExecInst[0];
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportElimination524T;

/*
 * Structure: Execution Report Modify 531
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char ExecId[40];
    char SenderId[20];
    char ClOrdId[20];
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
    char ExecInst[0];
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportModify531T;

/*
 * Structure: Execution Report New 522
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char ExecId[40];
    char SenderId[20];
    char ClOrdId[20];
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
    char ExecInst[0];
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportNew522T;

/*
 * Structure: Execution Report Reject 523
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char ExecId[40];
    char SenderId[20];
    char ClOrdId[20];
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
    char ExecInst[0];
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportReject523T;

/*
 * Structure: Execution Report Status 532
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char ExecId[40];
    char SenderId[20];
    char ClOrdId[20];
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
    char ExecInst[0];
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportStatus532T;

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
} ExecutionReportTradeAddendumOutrightOrderEventGroupT;

/*
 * Structure: Execution Report Trade Addendum Outright Order Event Groups
 */ 
typedef struct {
    char GroupSize[0];
} ExecutionReportTradeAddendumOutrightOrderEventGroupsT;

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
    char GroupSize[0];
} ExecutionReportTradeAddendumSpreadLegGroupsT;

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
} ExecutionReportTradeAddendumSpreadLegOrderEventGroupT;

/*
 * Structure: Execution Report Trade Addendum Spread Leg Order Event Groups
 */ 
typedef struct {
    char GroupSize[0];
} ExecutionReportTradeAddendumSpreadLegOrderEventGroupsT;

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
} ExecutionReportTradeAddendumSpreadOrderEventGroupT;

/*
 * Structure: Execution Report Trade Addendum Spread Order Event Groups
 */ 
typedef struct {
    char GroupSize[0];
} ExecutionReportTradeAddendumSpreadOrderEventGroupsT;

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
    char GroupSize[0];
} ExecutionReportTradeOutrightOrderEventGroupsT;

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
    char GroupSize[0];
} ExecutionReportTradeSpreadLegGroupsT;

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
    char GroupSize[0];
} ExecutionReportTradeSpreadLegOrderEventGroupsT;

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
    char GroupSize[0];
} ExecutionReportTradeSpreadOrderEventGroupsT;

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
    char GroupSize[0];
} FillsGroupsT;

/*
 * Structure: Group Size
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeT;

/*
 * Structure: Leg Option Delta
 */ 
typedef struct {
    int32_t Mantissa;
    int8_t Exponent;
} LegOptionDeltaT;

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
} MassQuoteAck545T;

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
    char GroupSize[0];
} MassQuoteAckEntryGroupsT;

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
 * Structure: Maturity Month Year
 */ 
typedef struct {
    uint16_t Year;
    uint8_t Month;
    uint8_t Day;
    uint8_t Week;
} MaturityMonthYearT;

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
 * Structure: Negotiate 500
 */ 
typedef struct {
    char HmacSignature[32];
    char AccessKeyId[20];
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    char Session[3];
    char Firm[5];
} Negotiate500T;

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
 * Structure: Negotiation Response 501
 */ 
typedef struct {
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    uint16_t SecretKeySecureIdExpiration;
    uint8_t FaultToleranceIndicator;
    uint8_t SplitMsg;
    uint32_t PreviousSeqNo;
    uint64_t PreviousUuid;
} NegotiationResponse501T;

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
 * Structure: New Order Single 514
 */ 
typedef struct {
    int64_t Price;
    uint32_t OrderQty;
    int32_t SecurityId;
    uint8_t Side;
    uint32_t SeqNum;
    char SenderId[20];
    char ClOrdId[20];
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
 * Structure: Option Delta
 */ 
typedef struct {
    int32_t Mantissa;
    int8_t Exponent;
} OptionDeltaT;

/*
 * Structure: Order Cancel Reject 535
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char ExecId[40];
    char SenderId[20];
    char ClOrdId[20];
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
} OrderCancelReject535T;

/*
 * Structure: Order Cancel Replace Reject 536
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char ExecId[40];
    char SenderId[20];
    char ClOrdId[20];
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
} OrderCancelReplaceReject536T;

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
    char ClOrdId[20];
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
    char ExecInst[0];
    char ExecutionMode[1];
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} OrderCancelReplaceRequest515T;

/*
 * Structure: Order Cancel Request 516
 */ 
typedef struct {
    uint64_t OrderId;
    uint64_t PartyDetailsListReqId;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderId[20];
    char ClOrdId[20];
    uint64_t OrderRequestId;
    uint64_t SendingTimeEpoch;
    char Location[5];
    int32_t SecurityId;
    uint8_t Side;
    uint8_t LiquidityFlag;
} OrderCancelRequest516T;

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
} OrderMassActionReport558T;

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
    char GroupSize[0];
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
    char GroupSize[0];
} PartyIDsGroupsT;

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
    char GroupSize[0];
} QuoteCancelAckEntryGroupsT;

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
    char GroupSize[0];
} QuoteCancelAckSetGroupsT;

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
    char GroupSize[0];
} QuoteCancelEntryGroupsT;

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
    char GroupSize[0];
} QuoteCancelSetGroupsT;

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
    char GroupSize[0];
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
} RequestForQuoteAck546T;

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
    char GroupSize[0];
} RequestingPartyIDsGroupsT;

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
 * Structure: Risk Free Rate
 */ 
typedef struct {
    int32_t Mantissa;
    int8_t Exponent;
} RiskFreeRateT;

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
    char GroupSize[0];
} SecurityDefinitionRequestLegGroupsT;

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
 * Structure: Security Definition Response Leg Group
 */ 
typedef struct {
    int64_t LegPrice;
    char LegOptionDelta[0];
    int32_t LegSecurityId;
    uint8_t LegSide;
    uint8_t LegRatioQty;
} SecurityDefinitionResponseLegGroupT;

/*
 * Structure: Security Definition Response Leg Groups
 */ 
typedef struct {
    char GroupSize[0];
} SecurityDefinitionResponseLegGroupsT;

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
 * Structure: Sides Group
 */ 
typedef struct {
    char ClOrdId[20];
    uint64_t PartyDetailsListReqId;
    uint32_t OrderQty;
    uint8_t Side;
    uint8_t SideTimeInForce;
} SidesGroupT;

/*
 * Structure: Sides Groups
 */ 
typedef struct {
    char GroupSize[0];
} SidesGroupsT;

/*
 * Structure: Simple Open Framing Header
 */ 
typedef struct {
    uint16_t MessageLength;
    uint16_t EncodingType;
} SimpleOpenFramingHeaderT;

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
 * Structure: Time To Expiration
 */ 
typedef struct {
    int32_t Mantissa;
    int8_t Exponent;
} TimeToExpirationT;

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
    char GroupSize[0];
} TrdRegPublicationsGroupsT;

/*
 * Structure: Volatility
 */ 
typedef struct {
    int32_t Mantissa;
    int8_t Exponent;
} VolatilityT;

