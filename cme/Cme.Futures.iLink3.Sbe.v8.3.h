/*******************************************************************************
 * C Structs For Cme Futures Sbe iLink3 8.3 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Indicator Values
 */ 
#define ENUM_AGGRESSOR_INDICATOR_FALSE 0
#define ENUM_AGGRESSOR_INDICATOR_TRUE 1

/*
 * Auto Quote Request Values
 */ 
#define ENUM_AUTO_QUOTE_REQUEST_FALSE 0
#define ENUM_AUTO_QUOTE_REQUEST_TRUE 1

/*
 * Avg Px Indicator Values
 */ 
#define ENUM_AVG_PX_INDICATOR_NO_VALUE 255
#define ENUM_AVG_PX_INDICATOR_NO_AVERAGE_PRICING 0
#define ENUM_AVG_PX_INDICATOR_TRADEISPARTOFAN_AVERAGE_PRICE_GROUP_IDENTIFIEDBYTHE_AVG_PX_GRP_ID 1
#define ENUM_AVG_PX_INDICATOR_TRADEISPARTOFA_NOTIONAL_VALUE_AVERAGE_PRICE_GROUP 3

/*
 * Clearing Account Type Values
 */ 
#define ENUM_CLEARING_ACCOUNT_TYPE_NO_VALUE 255
#define ENUM_CLEARING_ACCOUNT_TYPE_CUSTOMER 0
#define ENUM_CLEARING_ACCOUNT_TYPE_FIRM 1

/*
 * Clearing Trade Price Type Values
 */ 
#define ENUM_CLEARING_TRADE_PRICE_TYPE_NO_VALUE 255
#define ENUM_CLEARING_TRADE_PRICE_TYPE_TRADE_CLEARINGAT_EXECUTION_PRICE 0
#define ENUM_CLEARING_TRADE_PRICE_TYPE_TRADE_CLEARINGAT_ALTERNATE_CLEARING_PRICE 1

/*
 * Cmta Giveup Cd Values
 */ 
#define ENUM_CMTA_GIVEUP_CD_NO_VALUE 'zeroed'
#define ENUM_CMTA_GIVEUP_CD_GIVE_UP 'G'
#define ENUM_CMTA_GIVEUP_CD_SG_XOFFSET 'S'

/*
 * Cust Order Capacity Values
 */ 
#define ENUM_CUST_ORDER_CAPACITY_NO_VALUE 255
#define ENUM_CUST_ORDER_CAPACITY_MEMBERTRADINGFORTHEIROWNACCOUNT 1
#define ENUM_CUST_ORDER_CAPACITY_CLEARINGFIRMTRADINGFORITSPROPRIETARYACCOUNT 2
#define ENUM_CUST_ORDER_CAPACITY_MEMBERTRADINGFORANOTHERMEMBER 3
#define ENUM_CUST_ORDER_CAPACITY_ALLOTHER 4

/*
 * Cust Order Handling Inst Values
 */ 
#define ENUM_CUST_ORDER_HANDLING_INST_NO_VALUE 'zeroed'
#define ENUM_CUST_ORDER_HANDLING_INST_FC_MPROVIDEDSCREEN 'C'
#define ENUM_CUST_ORDER_HANDLING_INST_OTHERPROVIDEDSCREEN 'D'
#define ENUM_CUST_ORDER_HANDLING_INST_FCMAPI_CTA_IX 'G'
#define ENUM_CUST_ORDER_HANDLING_INST_ALGO_ENGINE 'H'
#define ENUM_CUST_ORDER_HANDLING_INST_DESK_ELECTRONIC 'W'
#define ENUM_CUST_ORDER_HANDLING_INST_CLIENT_ELECTRONIC 'Y'

/*
 * Dk Reason Values
 */ 
#define ENUM_DK_REASON_NO_VALUE 'zeroed'
#define ENUM_DK_REASON_UNKNOWN_SECURITY 'A'
#define ENUM_DK_REASON_WRONG_SIDE 'B'
#define ENUM_DK_REASON_QUANTITY_EXCEEDS_ORDER 'C'
#define ENUM_DK_REASON_NO_MATCHING_ORDER 'D'
#define ENUM_DK_REASON_PRICE_EXCEEDS_LIMIT 'E'
#define ENUM_DK_REASON_CALCULATION_DIFFERENCE 'F'
#define ENUM_DK_REASON_NO_MATCHING_EXECUTION_REPORT 'G'
#define ENUM_DK_REASON_OTHER 'Z'

/*
 * Exec Ack Status Values
 */ 
#define ENUM_EXEC_ACK_STATUS_ACCEPTED 1
#define ENUM_EXEC_ACK_STATUS_REJECTED 2

/*
 * Exec Restatement Reason Values
 */ 
#define ENUM_EXEC_RESTATEMENT_REASON_NO_VALUE 255
#define ENUM_EXEC_RESTATEMENT_REASON_MARKET_EXCHANGE_OPTION 8
#define ENUM_EXEC_RESTATEMENT_REASON_CANCELLED_NOT_BEST 9
#define ENUM_EXEC_RESTATEMENT_REASON_CANCEL_ON_DISCONNECT 100
#define ENUM_EXEC_RESTATEMENT_REASON_SELF_MATCH_PREVENTION_OLDEST_ORDER_CANCELLED 103
#define ENUM_EXEC_RESTATEMENT_REASON_CANCEL_ON_GLOBEX_CREDIT_CONTROLS_VIOLATION 104
#define ENUM_EXEC_RESTATEMENT_REASON_CANCEL_FROM_FIRMSOFT 105
#define ENUM_EXEC_RESTATEMENT_REASON_CANCEL_FROM_RISK_MANAGEMENT_API 106
#define ENUM_EXEC_RESTATEMENT_REASON_SELF_MATCH_PREVENTION_NEWEST_ORDER_CANCELLED 107
#define ENUM_EXEC_RESTATEMENT_REASON_CANCELDUETOVOLQUOTEDOPTIONORDERRESTEDQTYLESSTHANMINORDERSIZE 108

/*
 * Exec Type Values
 */ 
#define ENUM_EXEC_TYPE_TRADE_CORRECTION 'G'
#define ENUM_EXEC_TYPE_TRADE_CANCEL 'H'

/*
 * Execution Mode Values
 */ 
#define ENUM_EXECUTION_MODE_NO_VALUE 'zeroed'
#define ENUM_EXECUTION_MODE_AGGRESSIVE 'A'
#define ENUM_EXECUTION_MODE_PASSIVE 'P'

/*
 * Expiration Cycle Values
 */ 
#define ENUM_EXPIRATION_CYCLE_NO_VALUE 255
#define ENUM_EXPIRATION_CYCLE_EXPIRE_ON_TRADING_SESSION_CLOSE 0
#define ENUM_EXPIRATION_CYCLE_EXPIRATIONATGIVENDATE 2

/*
 * Fault Tolerance Indicator Values
 */ 
#define ENUM_FAULT_TOLERANCE_INDICATOR_NO_VALUE 255
#define ENUM_FAULT_TOLERANCE_INDICATOR_BACKUP 0
#define ENUM_FAULT_TOLERANCE_INDICATOR_PRIMARY 1

/*
 * Keep Alive Interval Lapsed Values
 */ 
#define ENUM_KEEP_ALIVE_INTERVAL_LAPSED_NOT_LAPSED 0
#define ENUM_KEEP_ALIVE_INTERVAL_LAPSED_LAPSED 1

/*
 * Last Fragment Values
 */ 
#define ENUM_LAST_FRAGMENT_FALSE 0
#define ENUM_LAST_FRAGMENT_TRUE 1

/*
 * Last Rpt Requested Values
 */ 
#define ENUM_LAST_RPT_REQUESTED_NO_VALUE 255
#define ENUM_LAST_RPT_REQUESTED_FALSE 0
#define ENUM_LAST_RPT_REQUESTED_TRUE 1

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY 1
#define ENUM_LEG_SIDE_SELL 2

/*
 * Liquidity Flag Values
 */ 
#define ENUM_LIQUIDITY_FLAG_NO_VALUE 255
#define ENUM_LIQUIDITY_FLAG_FALSE 0
#define ENUM_LIQUIDITY_FLAG_TRUE 1

/*
 * List Update Action Values
 */ 
#define ENUM_LIST_UPDATE_ACTION_ADD 'A'
#define ENUM_LIST_UPDATE_ACTION_DELETE 'D'

/*
 * Managed Order Values
 */ 
#define ENUM_MANAGED_ORDER_NO_VALUE 255
#define ENUM_MANAGED_ORDER_FALSE 0
#define ENUM_MANAGED_ORDER_TRUE 1

/*
 * Manual Order Indicator Values
 */ 
#define ENUM_MANUAL_ORDER_INDICATOR_AUTOMATED 0
#define ENUM_MANUAL_ORDER_INDICATOR_MANUAL 1

/*
 * Manual Order Indicator Optional Values
 */ 
#define ENUM_MANUAL_ORDER_INDICATOR_OPTIONAL_NO_VALUE 255
#define ENUM_MANUAL_ORDER_INDICATOR_OPTIONAL_AUTOMATED 0
#define ENUM_MANUAL_ORDER_INDICATOR_OPTIONAL_MANUAL 1

/*
 * Mass Action Ord Typ Values
 */ 
#define ENUM_MASS_ACTION_ORD_TYP_NO_VALUE 'zeroed'
#define ENUM_MASS_ACTION_ORD_TYP_LIMIT '2'
#define ENUM_MASS_ACTION_ORD_TYP_STOP_LIMIT '4'

/*
 * Mass Action Response Values
 */ 
#define ENUM_MASS_ACTION_RESPONSE_REJECTED 0
#define ENUM_MASS_ACTION_RESPONSE_ACCEPTED 1

/*
 * Mass Action Scope Values
 */ 
#define ENUM_MASS_ACTION_SCOPE_INSTRUMENT 1
#define ENUM_MASS_ACTION_SCOPE_ALL 7
#define ENUM_MASS_ACTION_SCOPE_MARKET_SEGMENT_ID 9
#define ENUM_MASS_ACTION_SCOPE_INSTRUMENT_GROUP 10
#define ENUM_MASS_ACTION_SCOPE_QUOTE_SET_ID 100

/*
 * Mass Cancel Request Type Values
 */ 
#define ENUM_MASS_CANCEL_REQUEST_TYPE_NO_VALUE 255
#define ENUM_MASS_CANCEL_REQUEST_TYPE_SENDER_SUB_ID 100
#define ENUM_MASS_CANCEL_REQUEST_TYPE_ACCOUNT 101

/*
 * Mass Cancel Tif Values
 */ 
#define ENUM_MASS_CANCEL_TIF_NO_VALUE 255
#define ENUM_MASS_CANCEL_TIF_DAY 0
#define ENUM_MASS_CANCEL_TIF_GOOD_TILL_CANCEL 1
#define ENUM_MASS_CANCEL_TIF_GOOD_TILL_DATE 6

/*
 * Mass Status Req Type Values
 */ 
#define ENUM_MASS_STATUS_REQ_TYPE_INSTRUMENT 1
#define ENUM_MASS_STATUS_REQ_TYPE_INSTRUMENT_GROUP 3
#define ENUM_MASS_STATUS_REQ_TYPE_MARKET_SEGMENT 100

/*
 * Mass Status Tif Values
 */ 
#define ENUM_MASS_STATUS_TIF_NO_VALUE 255
#define ENUM_MASS_STATUS_TIF_DAY 0
#define ENUM_MASS_STATUS_TIF_GTC 1
#define ENUM_MASS_STATUS_TIF_GTD 6

/*
 * Mm Protection Reset Values
 */ 
#define ENUM_MM_PROTECTION_RESET_FALSE 0
#define ENUM_MM_PROTECTION_RESET_TRUE 1

/*
 * Ofm Override Values
 */ 
#define ENUM_OFM_OVERRIDE_DISABLED 0
#define ENUM_OFM_OVERRIDE_ENABLED 1

/*
 * Ord Status Values
 */ 
#define ENUM_ORD_STATUS_NEW '0'
#define ENUM_ORD_STATUS_PARTIALLY_FILLED '1'
#define ENUM_ORD_STATUS_FILLED '2'
#define ENUM_ORD_STATUS_CANCELLED '4'
#define ENUM_ORD_STATUS_REPLACED '5'
#define ENUM_ORD_STATUS_REJECTED '8'
#define ENUM_ORD_STATUS_EXPIRED 'C'
#define ENUM_ORD_STATUS_UNDEFINED 'U'

/*
 * Ord Status Req Type Values
 */ 
#define ENUM_ORD_STATUS_REQ_TYPE_NO_VALUE 255
#define ENUM_ORD_STATUS_REQ_TYPE_SENDER_SUB_ID 100
#define ENUM_ORD_STATUS_REQ_TYPE_ACCOUNT 101

/*
 * Ord Status Trd Values
 */ 
#define ENUM_ORD_STATUS_TRD_PARTIALLY_FILLED 1
#define ENUM_ORD_STATUS_TRD_FILLED 2

/*
 * Ord Status Trd Cxl Values
 */ 
#define ENUM_ORD_STATUS_TRD_CXL_TRADE_CORRECTION 'G'
#define ENUM_ORD_STATUS_TRD_CXL_TRADE_CANCEL 'H'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKETWITH_PROTECTION '1'
#define ENUM_ORD_TYPE_LIMIT '2'
#define ENUM_ORD_TYPE_STOPWITH_PROTECTION '3'
#define ENUM_ORD_TYPE_STOP_LIMIT '4'
#define ENUM_ORD_TYPE_MARKET_WITH_LEFTOVER_AS_LIMIT 'K'

/*
 * Ord Type Optional Values
 */ 
#define ENUM_ORD_TYPE_OPTIONAL_MARKET_WITH_PROTECTION '1'
#define ENUM_ORD_TYPE_OPTIONAL_LIMIT '2'
#define ENUM_ORD_TYPE_OPTIONAL_STOP_LIMIT '4'
#define ENUM_ORD_TYPE_OPTIONAL_MARKET_WITH_LEFTOVER_AS_LIMIT 'K'

/*
 * Order Event Type Values
 */ 
#define ENUM_ORDER_EVENT_TYPE_NO_VALUE 255
#define ENUM_ORDER_EVENT_TYPE_PARTIALLY_FILLED 4
#define ENUM_ORDER_EVENT_TYPE_FILLED 5

/*
 * Party Detail Role Values
 */ 
#define ENUM_PARTY_DETAIL_ROLE_EXECUTING_FIRM 1
#define ENUM_PARTY_DETAIL_ROLE_CUSTOMER_ACCOUNT 24
#define ENUM_PARTY_DETAIL_ROLE_TAKE_UP_FIRM 96
#define ENUM_PARTY_DETAIL_ROLE_OPERATOR 118
#define ENUM_PARTY_DETAIL_ROLE_TAKE_UP_ACCOUNT 1000

/*
 * Poss Retrans Flag Values
 */ 
#define ENUM_POSS_RETRANS_FLAG_FALSE 0
#define ENUM_POSS_RETRANS_FLAG_TRUE 1

/*
 * Quote Ack Status Values
 */ 
#define ENUM_QUOTE_ACK_STATUS_ACCEPTED 0
#define ENUM_QUOTE_ACK_STATUS_REJECTED 5

/*
 * Quote Cancel Type Values
 */ 
#define ENUM_QUOTE_CANCEL_TYPE_CANCELPER_INSTRUMENT 1
#define ENUM_QUOTE_CANCEL_TYPE_CANCELPER_INSTRUMENTGROUP 3
#define ENUM_QUOTE_CANCEL_TYPE_CANCELALLQUOTES 4
#define ENUM_QUOTE_CANCEL_TYPE_CANCELPER_QUOTE_SET 100

/*
 * Quote Cxl Status Values
 */ 
#define ENUM_QUOTE_CXL_STATUS_CANCELPER_INSTRUMENT 1
#define ENUM_QUOTE_CXL_STATUS_CANCELPER_INSTRUMENTGROUP 3
#define ENUM_QUOTE_CXL_STATUS_CANCELALLQUOTES 4
#define ENUM_QUOTE_CXL_STATUS_REJECTED 5
#define ENUM_QUOTE_CXL_STATUS_CANCELPER_QUOTE_SET 100

/*
 * Quote Type Values
 */ 
#define ENUM_QUOTE_TYPE_NO_VALUE 255
#define ENUM_QUOTE_TYPE_TRADEABLE 1

/*
 * Request Result Values
 */ 
#define ENUM_REQUEST_RESULT_VALID_REQUEST 0
#define ENUM_REQUEST_RESULT_NO_DATA_FOUND_THAT_MATCHED_SELECTION_CRITERIA 2
#define ENUM_REQUEST_RESULT_NOT_AUTHORIZEDTO_RETRIEVE_DATA 3
#define ENUM_REQUEST_RESULT_DATA_TEMPORARILY_UNAVAILABLE 4

/*
 * Rfq Side Values
 */ 
#define ENUM_RFQ_SIDE_BUY 1
#define ENUM_RFQ_SIDE_SELL 2
#define ENUM_RFQ_SIDE_CROSS 8

/*
 * Security Response Type Values
 */ 
#define ENUM_SECURITY_RESPONSE_TYPE_ACCEPT_SECURITY_PROPOSALASIS 1
#define ENUM_SECURITY_RESPONSE_TYPE_ACCEPT_SECURITYPROPOSALWITHREVISIONSASINDICATEDINTHEMESSAGE 2
#define ENUM_SECURITY_RESPONSE_TYPE_REJECT_SECURITY_PROPOSAL 5

/*
 * Self Match Prevention Instruction Values
 */ 
#define ENUM_SELF_MATCH_PREVENTION_INSTRUCTION_NO_VALUE 'zeroed'
#define ENUM_SELF_MATCH_PREVENTION_INSTRUCTION_CANCEL_NEWEST 'N'
#define ENUM_SELF_MATCH_PREVENTION_INSTRUCTION_CANCEL_OLDEST 'O'

/*
 * Short Sale Type Values
 */ 
#define ENUM_SHORT_SALE_TYPE_NO_VALUE 255
#define ENUM_SHORT_SALE_TYPE_LONG_SELL 0
#define ENUM_SHORT_SALE_TYPE_SHORT_SALE_WITH_NO_EXEMPTION_SESH 1
#define ENUM_SHORT_SALE_TYPE_SHORT_SALE_WITH_EXEMPTION_SSEX 2
#define ENUM_SHORT_SALE_TYPE_UNDISCLOSED_SELL_INFORMATION_NOT_AVAILABLE_UNDI 3

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 1
#define ENUM_SIDE_SELL 2

/*
 * Side Optional Values
 */ 
#define ENUM_SIDE_OPTIONAL_NO_VALUE 255
#define ENUM_SIDE_OPTIONAL_BUY 1
#define ENUM_SIDE_OPTIONAL_SELL 2

/*
 * Side Time In Force Values
 */ 
#define ENUM_SIDE_TIME_IN_FORCE_DAY 0
#define ENUM_SIDE_TIME_IN_FORCE_FAK 3

/*
 * Split Msg Values
 */ 
#define ENUM_SPLIT_MSG_NO_VALUE 255
#define ENUM_SPLIT_MSG_SPLIT_MESSAGE_DELAYED 0
#define ENUM_SPLIT_MSG_OUTOF_ORDER_MESSAGE_DELAYED 1
#define ENUM_SPLIT_MSG_COMPLETE_MESSAGE_DELAYED 2

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_NEGOTIATE 500
#define ENUM_TEMPLATE_ID_NEGOTIATION_RESPONSE 501
#define ENUM_TEMPLATE_ID_NEGOTIATION_REJECT 502
#define ENUM_TEMPLATE_ID_ESTABLISH 503
#define ENUM_TEMPLATE_ID_ESTABLISHMENT_ACK 504
#define ENUM_TEMPLATE_ID_ESTABLISHMENT_REJECT 505
#define ENUM_TEMPLATE_ID_SEQUENCE 506
#define ENUM_TEMPLATE_ID_TERMINATE 507
#define ENUM_TEMPLATE_ID_RETRANSMIT_REQUEST 508
#define ENUM_TEMPLATE_ID_RETRANSMISSION 509
#define ENUM_TEMPLATE_ID_RETRANSMIT_REJECT 510
#define ENUM_TEMPLATE_ID_NOT_APPLIED 513
#define ENUM_TEMPLATE_ID_NEW_ORDER_SINGLE 514
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REPLACE_REQUEST 515
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REQUEST 516
#define ENUM_TEMPLATE_ID_MASS_QUOTE 517
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_DEFINITION_REQUEST 518
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_DEFINITION_REQUEST_ACK 519
#define ENUM_TEMPLATE_ID_BUSINESS_REJECT 521
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_NEW 522
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_REJECT 523
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_ELIMINATION 524
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_OUTRIGHT 525
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_SPREAD 526
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_SPREAD_LEG 527
#define ENUM_TEMPLATE_ID_QUOTE_CANCEL 528
#define ENUM_TEMPLATE_ID_ORDER_MASS_ACTION_REQUEST 529
#define ENUM_TEMPLATE_ID_ORDER_MASS_STATUS_REQUEST 530
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_MODIFY 531
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_STATUS 532
#define ENUM_TEMPLATE_ID_ORDER_STATUS_REQUEST 533
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_CANCEL 534
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REJECT 535
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REPLACE_REJECT 536
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_LIST_REQUEST 537
#define ENUM_TEMPLATE_ID_PARTY_DETAILS_LIST_REPORT 538
#define ENUM_TEMPLATE_ID_EXECUTION_ACK 539
#define ENUM_TEMPLATE_ID_REQUEST_FOR_QUOTE 543
#define ENUM_TEMPLATE_ID_NEW_ORDER_CROSS 544
#define ENUM_TEMPLATE_ID_MASS_QUOTE_ACK 545
#define ENUM_TEMPLATE_ID_REQUEST_FOR_QUOTE_ACK 546
#define ENUM_TEMPLATE_ID_QUOTE_CANCEL_ACK 547
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_ADDENDUM_OUTRIGHT 548
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_ADDENDUM_SPREAD 549
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_ADDENDUM_SPREAD_LEG 550
#define ENUM_TEMPLATE_ID_ORDER_MASS_ACTION_REPORT 558
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_REQUEST 560
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_RESPONSE 561

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY 0
#define ENUM_TIME_IN_FORCE_GOOD_TILL_CANCEL 1
#define ENUM_TIME_IN_FORCE_FILL_AND_KILL 3
#define ENUM_TIME_IN_FORCE_FILL_OR_KILL 4
#define ENUM_TIME_IN_FORCE_GOOD_TILL_DATE 6

/*
 * Trade Addendum Values
 */ 
#define ENUM_TRADE_ADDENDUM_PARTIALLY_FILLED 4
#define ENUM_TRADE_ADDENDUM_FILLED 5
#define ENUM_TRADE_ADDENDUM_TRADE_CANCEL 100
#define ENUM_TRADE_ADDENDUM_TRADE_CORRECTION 101


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

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
 * Structure: Security Definition Response
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
    int32_t SecurityIdOptional;
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
} SecurityDefinitionResponseT;

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
 * Structure: Security Definition Request
 */ 
typedef struct {
    uint64_t PartyDetailsListReqId;
    uint64_t SecurityReqId;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderIdOptional[20];
    uint64_t SendingTimeEpoch;
    char SecuritySubType[8];
    char Location[5];
    uint16_t StartDate;
    uint16_t EndDate;
    uint8_t MaxNoOfSubstitutions;
    int32_t SourceRepoId;
} SecurityDefinitionRequestT;

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
 * Structure: Order Mass Action Report
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
    int32_t SecurityIdOptional;
    uint16_t DelayDuration;
    uint8_t MassActionResponse;
    uint8_t ManualOrderIndicator;
    uint8_t MassActionScope;
    uint8_t TotalAffectedOrders;
    uint8_t LastFragment;
    uint8_t MassActionRejectReason;
    uint8_t MarketSegmentId;
    uint8_t MassCancelRequestType;
    uint8_t SideOptional;
    char MassActionOrdTyp;
    uint8_t MassCancelTif;
    uint8_t SplitMsg;
    uint8_t LiquidityFlag;
    uint8_t PossRetransFlag;
} OrderMassActionReportT;

/*
 * Structure: Execution Report Trade Addendum Spread Leg Order Event Group
 */ 
typedef struct {
    int64_t OrderEventPx;
    char OrderEventText[5];
    uint32_t OrderEventExecId;
    uint32_t OrderEventQty;
    uint8_t TradeAddendum;
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
    uint8_t TradeAddendum;
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
    uint8_t TradeAddendum;
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
 * Structure: Request For Quote Ack
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
    uint8_t QuoteAckStatus;
    uint8_t ManualOrderIndicator;
    uint8_t SplitMsg;
    uint8_t PossRetransFlag;
} RequestForQuoteAckT;

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
 * Structure: Mass Quote Ack
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char SenderId[20];
    uint64_t PartyDetailsListReqId;
    uint64_t RequestTime;
    uint64_t SendingTimeEpoch;
    uint64_t QuoteReqIdOptional;
    char Location[5];
    uint32_t QuoteId;
    uint16_t QuoteRejectReason;
    uint16_t DelayDuration;
    uint8_t QuoteAckStatus;
    uint8_t ManualOrderIndicator;
    uint8_t NoProcessedEntries;
    uint8_t MmProtectionReset;
    uint8_t SplitMsg;
    uint8_t LiquidityFlag;
    uint8_t ShortSaleType;
    uint8_t TotNoQuoteEntriesOptional;
    uint8_t PossRetransFlag;
} MassQuoteAckT;

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
 * Structure: New Order Cross
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
} NewOrderCrossT;

/*
 * Structure: Related Sym Group
 */ 
typedef struct {
    int32_t SecurityId;
    uint32_t OrderQtyOptional;
    uint8_t RfqSide;
} RelatedSymGroupT;

/*
 * Structure: Related Sym Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} RelatedSymGroupsT;

/*
 * Structure: Request For Quote
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
} RequestForQuoteT;

/*
 * Structure: Execution Ack
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
} ExecutionAckT;

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
 * Structure: Order Cancel Replace Reject
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
} OrderCancelReplaceRejectT;

/*
 * Structure: Order Cancel Reject
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
} OrderCancelRejectT;

/*
 * Structure: Execution Report Cancel
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
    uint64_t CrossIdOptional;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t OrderQty;
    uint32_t CumQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    uint16_t DelayDuration;
    char OrdTypeOptional;
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t SplitMsg;
    uint8_t ExecRestatementReason;
    uint8_t CrossType;
    ExecInstT ExecInst;
    char ExecutionMode;
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportCancelT;

/*
 * Structure: Order Status Request
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
} OrderStatusRequestT;

/*
 * Structure: Execution Report Status
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
    int64_t PriceOptional;
    int64_t StopPx;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    uint64_t OrdStatusReqIdOptional;
    uint64_t MassStatusReqIdOptional;
    uint64_t CrossIdOptional;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t OrderQty;
    uint32_t CumQty;
    uint32_t LeavesQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    char OrdStatus;
    char OrdTypeOptional;
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t LastRptRequested;
    uint8_t CrossType;
    ExecInstT ExecInst;
    char ExecutionMode;
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportStatusT;

/*
 * Structure: Execution Report Modify
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
    uint64_t CrossIdOptional;
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
    char OrdTypeOptional;
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t SplitMsg;
    uint8_t CrossType;
    ExecInstT ExecInst;
    char ExecutionMode;
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportModifyT;

/*
 * Structure: Order Mass Status Request
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
    int32_t SecurityIdOptional;
    uint8_t MassStatusReqType;
    uint8_t OrdStatusReqType;
    uint8_t MassStatusTif;
    uint8_t MarketSegmentId;
} OrderMassStatusRequestT;

/*
 * Structure: Order Mass Action Request
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
    int32_t SecurityIdOptional;
    uint8_t MassActionScope;
    uint8_t MarketSegmentId;
    uint8_t MassCancelRequestType;
    uint8_t SideOptional;
    char MassActionOrdTyp;
    uint8_t MassCancelTif;
    uint8_t LiquidityFlag;
} OrderMassActionRequestT;

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
    int32_t SecurityIdOptional;
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
    int64_t Mantissa;
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
 * Structure: Execution Report Elimination
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
    uint64_t CrossIdOptional;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t CumQty;
    uint32_t OrderQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    char OrdTypeOptional;
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t CrossType;
    ExecInstT ExecInst;
    char ExecutionMode;
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportEliminationT;

/*
 * Structure: Execution Report Reject
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
    int64_t PriceOptional;
    int64_t StopPx;
    uint64_t TransactTime;
    uint64_t SendingTimeEpoch;
    uint64_t OrderRequestId;
    uint64_t CrossIdOptional;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t OrderQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t OrdRejReason;
    uint16_t ExpireDate;
    uint16_t DelayDuration;
    char OrdTypeOptional;
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t SplitMsg;
    uint8_t CrossType;
    ExecInstT ExecInst;
    char ExecutionMode;
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportRejectT;

/*
 * Structure: Execution Report New
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
    uint64_t CrossIdOptional;
    uint64_t HostCrossId;
    char Location[5];
    int32_t SecurityId;
    uint32_t OrderQty;
    uint32_t MinQty;
    uint32_t DisplayQty;
    uint16_t ExpireDate;
    uint16_t DelayDuration;
    char OrdTypeOptional;
    uint8_t Side;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t PossRetransFlag;
    uint8_t SplitMsg;
    uint8_t CrossType;
    ExecInstT ExecInst;
    char ExecutionMode;
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} ExecutionReportNewT;

/*
 * Structure: Business Reject
 */ 
typedef struct {
    uint32_t SeqNum;
    uint64_t Uuid;
    char Text[256];
    char SenderIdOptional[20];
    uint64_t PartyDetailsListReqIdOptional;
    uint64_t SendingTimeEpoch;
    uint64_t BusinessRejectRefId;
    char LocationOptional[5];
    uint32_t RefSeqNum;
    uint16_t RefTagId;
    uint16_t BusinessRejectReason;
    char RefMsgType[2];
    uint8_t PossRetransFlag;
    uint8_t ManualOrderIndicatorOptional;
    uint8_t SplitMsg;
} BusinessRejectT;

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
 * Structure: Mass Quote
 */ 
typedef struct {
    uint64_t PartyDetailsListReqId;
    uint64_t SendingTimeEpoch;
    uint8_t ManualOrderIndicator;
    uint32_t SeqNum;
    char SenderId[20];
    uint64_t QuoteReqIdOptional;
    char Location[5];
    uint32_t QuoteId;
    uint8_t TotNoQuoteEntries;
    uint8_t MmProtectionReset;
    uint8_t LiquidityFlag;
    uint8_t ShortSaleType;
} MassQuoteT;

/*
 * Structure: Order Cancel Request
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
} OrderCancelRequestT;

/*
 * Structure: Order Cancel Replace Request
 */ 
typedef struct {
    int64_t PriceOptional;
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
    char OrdType;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    uint8_t OfmOverride;
    ExecInstT ExecInst;
    char ExecutionMode;
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} OrderCancelReplaceRequestT;

/*
 * Structure: New Order Single
 */ 
typedef struct {
    int64_t PriceOptional;
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
    char OrdType;
    uint8_t TimeInForce;
    uint8_t ManualOrderIndicator;
    ExecInstT ExecInst;
    char ExecutionMode;
    uint8_t LiquidityFlag;
    uint8_t ManagedOrder;
    uint8_t ShortSaleType;
} NewOrderSingleT;

/*
 * Structure: Not Applied
 */ 
typedef struct {
    uint64_t Uuid;
    uint32_t FromSeqNo;
    uint32_t MsgCount;
    uint8_t SplitMsg;
} NotAppliedT;

/*
 * Structure: Retransmit Reject
 */ 
typedef struct {
    char Reason[48];
    uint64_t Uuid;
    uint64_t LastUuid;
    uint64_t RequestTimestamp;
    uint16_t ErrorCodes;
    uint8_t SplitMsg;
} RetransmitRejectT;

/*
 * Structure: Retransmission
 */ 
typedef struct {
    uint64_t Uuid;
    uint64_t LastUuid;
    uint64_t RequestTimestamp;
    uint32_t FromSeqNo;
    uint16_t MsgCount16;
    uint8_t SplitMsg;
} RetransmissionT;

/*
 * Structure: Retransmit Request
 */ 
typedef struct {
    uint64_t Uuid;
    uint64_t LastUuid;
    uint64_t RequestTimestamp;
    uint32_t FromSeqNo;
    uint16_t MsgCount16;
} RetransmitRequestT;

/*
 * Structure: Terminate
 */ 
typedef struct {
    char Reason[48];
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    uint16_t ErrorCodes;
    uint8_t SplitMsg;
} TerminateT;

/*
 * Structure: Sequence
 */ 
typedef struct {
    uint64_t Uuid;
    uint32_t NextSeqNo;
    uint8_t FaultToleranceIndicator;
    uint8_t KeepAliveIntervalLapsed;
} SequenceT;

/*
 * Structure: Establishment Reject
 */ 
typedef struct {
    char Reason[48];
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    uint32_t NextSeqNo;
    uint16_t ErrorCodes;
    uint8_t FaultToleranceIndicator;
    uint8_t SplitMsg;
} EstablishmentRejectT;

/*
 * Structure: Establishment Ack
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
} EstablishmentAckT;

/*
 * Structure: Credentials
 */ 
typedef struct {
    uint16_t DataLength;
} CredentialsT;

/*
 * Structure: Establish
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
} EstablishT;

/*
 * Structure: Negotiation Reject
 */ 
typedef struct {
    char Reason[48];
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    uint16_t ErrorCodes;
    uint8_t FaultToleranceIndicator;
    uint8_t SplitMsg;
} NegotiationRejectT;

/*
 * Structure: Negotiation Response
 */ 
typedef struct {
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    uint16_t SecretKeySecureIdExpiration;
    uint8_t FaultToleranceIndicator;
    uint8_t SplitMsg;
    uint32_t PreviousSeqNo;
    uint64_t PreviousUuid;
} NegotiationResponseT;

/*
 * Structure: Negotiate
 */ 
typedef struct {
    char HmacSignature[32];
    char AccessKeyId[20];
    uint64_t Uuid;
    uint64_t RequestTimestamp;
    char Session[3];
    char Firm[5];
} NegotiateT;

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

/*
 * Structure: Simple Open Frame
 */ 
typedef struct {
    SimpleOpenFramingHeaderT SimpleOpenFramingHeader;
    MessageHeaderT MessageHeader;
} SimpleOpenFrameT;

/*
 * Structure: Packet
 */ 
typedef struct {
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Chicago Mercantile Exchange
   Version: 8.3
   Date: Thursday, January 9, 2020

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
