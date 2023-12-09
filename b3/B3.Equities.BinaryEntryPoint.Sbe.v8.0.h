/*******************************************************************************
 * C Structs For B3 Equities Sbe BinaryEntryPoint 8.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Account Type Values
 */ 
#define ENUM_ACCOUNT_TYPE_REMOVEACCOUNTINFORMATION 38
#define ENUM_ACCOUNT_TYPE_REGULARACCOUNT 39
#define ENUM_ACCOUNT_TYPE_NO_VALUE 0

/*
 * Aggressor Indicator Values
 */ 
#define ENUM_AGGRESSOR_INDICATOR_FALSEVALUE 0
#define ENUM_AGGRESSOR_INDICATOR_TRUEVALUE 1

/*
 * Alloc No Orders Type Values
 */ 
#define ENUM_ALLOC_NO_ORDERS_TYPE_NOTSPECIFIED '0'

/*
 * Alloc Report Type Values
 */ 
#define ENUM_ALLOC_REPORT_TYPE_REQUESTTOINTERMEDIARY '8'

/*
 * Alloc Status Values
 */ 
#define ENUM_ALLOC_STATUS_ACCEPTED '0'
#define ENUM_ALLOC_STATUS_REJECTEDBYINTERMEDIARY '5'

/*
 * Alloc Trans Type Values
 */ 
#define ENUM_ALLOC_TRANS_TYPE_NEW '0'
#define ENUM_ALLOC_TRANS_TYPE_CANCEL '2'

/*
 * Alloc Type Values
 */ 
#define ENUM_ALLOC_TYPE_REQUESTTOINTERMEDIARY '8'

/*
 * Cancel On Disconnect Type Values
 */ 
#define ENUM_CANCEL_ON_DISCONNECT_TYPE_DONOTCANCELONDISCONNECTORTERMINATE 0
#define ENUM_CANCEL_ON_DISCONNECT_TYPE_CANCELONDISCONNECTONLY 1
#define ENUM_CANCEL_ON_DISCONNECT_TYPE_CANCELONTERMINATEONLY 2
#define ENUM_CANCEL_ON_DISCONNECT_TYPE_CANCELONDISCONNECTORTERMINATE 3

/*
 * Contrary Instruction Indicator Values
 */ 
#define ENUM_CONTRARY_INSTRUCTION_INDICATOR_FALSEVALUE 0
#define ENUM_CONTRARY_INSTRUCTION_INDICATOR_TRUEVALUE 1

/*
 * Crossed Indicator Values
 */ 
#define ENUM_CROSSED_INDICATOR_STRUCTUREDTRANSACTION 1001
#define ENUM_CROSSED_INDICATOR_OPERATIONALERROR 1002
#define ENUM_CROSSED_INDICATOR_TWAPVWAP 1003
#define ENUM_CROSSED_INDICATOR_NO_VALUE 0

/*
 * Cxl Rej Response To Values
 */ 
#define ENUM_CXL_REJ_RESPONSE_TO_NEW 0
#define ENUM_CXL_REJ_RESPONSE_TO_CANCEL 1
#define ENUM_CXL_REJ_RESPONSE_TO_REPLACE 2

/*
 * Establishment Reject Code Values
 */ 
#define ENUM_ESTABLISHMENT_REJECT_CODE_UNSPECIFIED 0
#define ENUM_ESTABLISHMENT_REJECT_CODE_CREDENTIALS 1
#define ENUM_ESTABLISHMENT_REJECT_CODE_UNNEGOTIATED 2
#define ENUM_ESTABLISHMENT_REJECT_CODE_ALREADYESTABLISHED 3
#define ENUM_ESTABLISHMENT_REJECT_CODE_SESSIONBLOCKED 4
#define ENUM_ESTABLISHMENT_REJECT_CODE_INVALIDSESSIONID 5
#define ENUM_ESTABLISHMENT_REJECT_CODE_INVALIDSESSIONVERID 6
#define ENUM_ESTABLISHMENT_REJECT_CODE_INVALIDTIMESTAMP 7
#define ENUM_ESTABLISHMENT_REJECT_CODE_INVALIDKEEPALIVEINTERVAL 8
#define ENUM_ESTABLISHMENT_REJECT_CODE_INVALIDNEXTSEQNO 9
#define ENUM_ESTABLISHMENT_REJECT_CODE_ESTABLISHATTEMPTSEXCEEDED 10
#define ENUM_ESTABLISHMENT_REJECT_CODE_ESTABLISHNOTALLOWED 20
#define ENUM_ESTABLISHMENT_REJECT_CODE_DUPLICATESESSIONCONNECTION 21
#define ENUM_ESTABLISHMENT_REJECT_CODE_AUTHENTICATIONINPROGRESS 22
#define ENUM_ESTABLISHMENT_REJECT_CODE_PROTOCOLVERSIONNOTSUPPORTED 23

/*
 * Exec Restatement Reason Values
 */ 
#define ENUM_EXEC_RESTATEMENT_REASON_CANCELORDERDUETOOPERATIONALERROR 203
#define ENUM_EXEC_RESTATEMENT_REASON_MARKETOPTION 8
#define ENUM_EXEC_RESTATEMENT_REASON_CANCELONHARDDISCONNECTION 100
#define ENUM_EXEC_RESTATEMENT_REASON_CANCELONTERMINATE 101
#define ENUM_EXEC_RESTATEMENT_REASON_CANCELONDISCONNECTANDTERMINATE 102
#define ENUM_EXEC_RESTATEMENT_REASON_SELFTRADINGPREVENTION 103
#define ENUM_EXEC_RESTATEMENT_REASON_CANCELFROMFIRMSOFT 105
#define ENUM_EXEC_RESTATEMENT_REASON_CANCELRESTINGORDERONSELFTRADE 107
#define ENUM_EXEC_RESTATEMENT_REASON_MARKETMAKERPROTECTION 200
#define ENUM_EXEC_RESTATEMENT_REASON_RISKMANAGEMENTCANCELLATION 201
#define ENUM_EXEC_RESTATEMENT_REASON_ORDERMASSACTIONFROMCLIENTREQUEST 202
#define ENUM_EXEC_RESTATEMENT_REASON_ORDERCANCELLEDDUETOOPERATIONALERROR 204
#define ENUM_EXEC_RESTATEMENT_REASON_CANCELORDERFIRMSOFTDUETOOPERATIONALERROR 205
#define ENUM_EXEC_RESTATEMENT_REASON_ORDERCANCELLEDFIRMSOFTDUETOOPERATIONALERROR 206
#define ENUM_EXEC_RESTATEMENT_REASON_MASSCANCELORDERDUETOOPERATIONALERRORREQUEST 207
#define ENUM_EXEC_RESTATEMENT_REASON_MASSCANCELORDERDUETOOPERATIONALERROREFFECTIVE 208
#define ENUM_EXEC_RESTATEMENT_REASON_CANCELONMIDPOINTBROKERONLYREMOVAL 209
#define ENUM_EXEC_RESTATEMENT_REASON_NO_VALUE 0

/*
 * Exec Type Values
 */ 
#define ENUM_EXEC_TYPE_TRADE 'F'
#define ENUM_EXEC_TYPE_TRADECANCEL 'H'

/*
 * Execute Underlying Trade Values
 */ 
#define ENUM_EXECUTE_UNDERLYING_TRADE_NOUNDERLYINGTRADE '0'
#define ENUM_EXECUTE_UNDERLYING_TRADE_UNDERLYINGOPPOSINGTRADE '1'
#define ENUM_EXECUTE_UNDERLYING_TRADE_NO_VALUE '0'

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY '1'
#define ENUM_LEG_SIDE_SELL '2'
#define ENUM_LEG_SIDE_NO_VALUE '0'

/*
 * Mass Action Reject Reason Values
 */ 
#define ENUM_MASS_ACTION_REJECT_REASON_MASSACTIONNOTSUPPORTED 0
#define ENUM_MASS_ACTION_REJECT_REASON_INVALIDORUNKNOWNMARKETSEGMENT 8
#define ENUM_MASS_ACTION_REJECT_REASON_OTHER 99
#define ENUM_MASS_ACTION_REJECT_REASON_NO_VALUE 255

/*
 * Mass Action Response Values
 */ 
#define ENUM_MASS_ACTION_RESPONSE_REJECTED '0'
#define ENUM_MASS_ACTION_RESPONSE_ACCEPTED '1'

/*
 * Mass Action Scope Values
 */ 
#define ENUM_MASS_ACTION_SCOPE_ALLORDERSFORATRADINGSESSION 6
#define ENUM_MASS_ACTION_SCOPE_NO_VALUE 0

/*
 * Mass Action Type Values
 */ 
#define ENUM_MASS_ACTION_TYPE_RELEASEORDERSFROMSUSPENSION 2
#define ENUM_MASS_ACTION_TYPE_CANCELORDERS 3
#define ENUM_MASS_ACTION_TYPE_CANCELANDSUSPENDORDERS 4

/*
 * Mm Protection Reset Values
 */ 
#define ENUM_MM_PROTECTION_RESET_FALSEVALUE 0
#define ENUM_MM_PROTECTION_RESET_TRUEVALUE 1

/*
 * Multi Leg Reporting Type Values
 */ 
#define ENUM_MULTI_LEG_REPORTING_TYPE_SINGLESECURITY '1'
#define ENUM_MULTI_LEG_REPORTING_TYPE_INDIVIDUALLEGOFMULTILEGSECURITY '2'
#define ENUM_MULTI_LEG_REPORTING_TYPE_MULTILEGSECURITY '3'
#define ENUM_MULTI_LEG_REPORTING_TYPE_NO_VALUE '0'

/*
 * Negotiation Reject Code Values
 */ 
#define ENUM_NEGOTIATION_REJECT_CODE_UNSPECIFIED 0
#define ENUM_NEGOTIATION_REJECT_CODE_CREDENTIALS 1
#define ENUM_NEGOTIATION_REJECT_CODE_FLOWTYPENOTSUPPORTED 2
#define ENUM_NEGOTIATION_REJECT_CODE_ALREADYNEGOTIATED 3
#define ENUM_NEGOTIATION_REJECT_CODE_SESSIONBLOCKED 4
#define ENUM_NEGOTIATION_REJECT_CODE_INVALIDSESSIONID 5
#define ENUM_NEGOTIATION_REJECT_CODE_INVALIDSESSIONVERID 6
#define ENUM_NEGOTIATION_REJECT_CODE_INVALIDTIMESTAMP 7
#define ENUM_NEGOTIATION_REJECT_CODE_INVALIDFIRM 8
#define ENUM_NEGOTIATION_REJECT_CODE_NEGOTIATENOTALLOWED 20
#define ENUM_NEGOTIATION_REJECT_CODE_DUPLICATESESSIONCONNECTION 21
#define ENUM_NEGOTIATION_REJECT_CODE_AUTHENTICATIONINPROGRESS 22
#define ENUM_NEGOTIATION_REJECT_CODE_PROTOCOLVERSIONNOTSUPPORTED 23

/*
 * Ord Status Values
 */ 
#define ENUM_ORD_STATUS_NEW '0'
#define ENUM_ORD_STATUS_PARTIALLYFILLED '1'
#define ENUM_ORD_STATUS_FILLED '2'
#define ENUM_ORD_STATUS_CANCELED '4'
#define ENUM_ORD_STATUS_REPLACED '5'
#define ENUM_ORD_STATUS_REJECTED '8'
#define ENUM_ORD_STATUS_EXPIRED 'C'
#define ENUM_ORD_STATUS_RESTATED 'R'
#define ENUM_ORD_STATUS_PREVIOUSFINALSTATE 'Z'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET '1'
#define ENUM_ORD_TYPE_LIMIT '2'
#define ENUM_ORD_TYPE_STOPLOSS '3'
#define ENUM_ORD_TYPE_STOPLIMIT '4'
#define ENUM_ORD_TYPE_MARKETWITHLEFTOVERASLIMIT 'K'
#define ENUM_ORD_TYPE_RLP 'W'
#define ENUM_ORD_TYPE_PEGGEDMIDPOINT 'P'

/*
 * Order Category Values
 */ 
#define ENUM_ORDER_CATEGORY_RESULTOFOPTIONSEXERCISE 'B'
#define ENUM_ORDER_CATEGORY_RESULTOFASSIGNMENTFROMANOPTIONSEXERCISE 'C'
#define ENUM_ORDER_CATEGORY_RESULTOFAUTOMATICOPTIONSEXERCISE 'D'
#define ENUM_ORDER_CATEGORY_RESULTOFMIDPOINTORDER 'E'
#define ENUM_ORDER_CATEGORY_RESULTOFBLOCKBOOKTRADE 'F'
#define ENUM_ORDER_CATEGORY_RESULTOFTRADEATCLOSE 'G'
#define ENUM_ORDER_CATEGORY_RESULTOFTRADEATAVERAGE 'H'
#define ENUM_ORDER_CATEGORY_NO_VALUE '0'

/*
 * Pos Maint Action Values
 */ 
#define ENUM_POS_MAINT_ACTION_NEW '1'
#define ENUM_POS_MAINT_ACTION_CANCEL '3'

/*
 * Pos Maint Status Values
 */ 
#define ENUM_POS_MAINT_STATUS_ACCEPTED '0'
#define ENUM_POS_MAINT_STATUS_REJECTED '2'
#define ENUM_POS_MAINT_STATUS_COMPLETED '3'
#define ENUM_POS_MAINT_STATUS_NOTEXECUTED '9'

/*
 * Pos Trans Type Values
 */ 
#define ENUM_POS_TRANS_TYPE_EXERCISE 1
#define ENUM_POS_TRANS_TYPE_AUTOMATICEXERCISE 105
#define ENUM_POS_TRANS_TYPE_EXERCISENOTAUTOMATIC 106

/*
 * Pos Type Values
 */ 
#define ENUM_POS_TYPE_TRANSACTIONQUANTITY 'T'
#define ENUM_POS_TYPE_STARTOFDAYQTY 'S'
#define ENUM_POS_TYPE_OPTIONEXERCISEQTY 'E'
#define ENUM_POS_TYPE_BLOCKEDQTY 'B'
#define ENUM_POS_TYPE_UNCOVEREDQTY 'U'
#define ENUM_POS_TYPE_COVEREDQTY 'C'

/*
 * Quote Status Values
 */ 
#define ENUM_QUOTE_STATUS_EXPIRED 7
#define ENUM_QUOTE_STATUS_ACCEPTED 0
#define ENUM_QUOTE_STATUS_REJECTED 5
#define ENUM_QUOTE_STATUS_QUOTENOTFOUND 9
#define ENUM_QUOTE_STATUS_PENDING 10
#define ENUM_QUOTE_STATUS_PASS 11
#define ENUM_QUOTE_STATUS_CANCELED 17

/*
 * Quote Status Response To Values
 */ 
#define ENUM_QUOTE_STATUS_RESPONSE_TO_QUOTE '0'
#define ENUM_QUOTE_STATUS_RESPONSE_TO_QUOTEREQUEST '1'
#define ENUM_QUOTE_STATUS_RESPONSE_TO_QUOTECANCEL '2'
#define ENUM_QUOTE_STATUS_RESPONSE_TO_QUOTEREQUESTREJECT '3'
#define ENUM_QUOTE_STATUS_RESPONSE_TO_NO_VALUE '0'

/*
 * Ref Msg Type Values
 */ 
#define ENUM_REF_MSG_TYPE_NEGOTIATE 0
#define ENUM_REF_MSG_TYPE_NEGOTIATE_RESPONSE 1
#define ENUM_REF_MSG_TYPE_NEGOTIATE_REJECT 2
#define ENUM_REF_MSG_TYPE_ESTABLISH 3
#define ENUM_REF_MSG_TYPE_ESTABLISH_ACK 4
#define ENUM_REF_MSG_TYPE_ESTABLISH_REJECT 5
#define ENUM_REF_MSG_TYPE_TERMINATE 6
#define ENUM_REF_MSG_TYPE_NOT_APPLIED 9
#define ENUM_REF_MSG_TYPE_RETRANSMIT_REQUEST 10
#define ENUM_REF_MSG_TYPE_RETRANSMISSION 11
#define ENUM_REF_MSG_TYPE_RETRANSMIT_REJECT 12
#define ENUM_REF_MSG_TYPE_SEQUENCE 13
#define ENUM_REF_MSG_TYPE_BUSINESS_MESSAGE_REJECT 14
#define ENUM_REF_MSG_TYPE_SIMPLE_NEW_ORDER 15
#define ENUM_REF_MSG_TYPE_SIMPLE_MODIFY_ORDER 16
#define ENUM_REF_MSG_TYPE_NEW_ORDER_SINGLE 17
#define ENUM_REF_MSG_TYPE_ORDER_CANCEL_REPLACE_REQUEST 18
#define ENUM_REF_MSG_TYPE_ORDER_CANCEL_REQUEST 19
#define ENUM_REF_MSG_TYPE_NEW_ORDER_CROSS 20
#define ENUM_REF_MSG_TYPE_EXECUTION_REPORT_NEW 21
#define ENUM_REF_MSG_TYPE_EXECUTION_REPORT_MODIFY 22
#define ENUM_REF_MSG_TYPE_EXECUTION_REPORT_CANCEL 23
#define ENUM_REF_MSG_TYPE_EXECUTION_REPORT_TRADE 24
#define ENUM_REF_MSG_TYPE_EXECUTION_REPORT_REJECT 25
#define ENUM_REF_MSG_TYPE_EXECUTION_REPORT_FORWARD 26
#define ENUM_REF_MSG_TYPE_SECURITY_DEFINITION_REQUEST 27
#define ENUM_REF_MSG_TYPE_SECURITY_DEFINITION_RESPONSE 28
#define ENUM_REF_MSG_TYPE_ORDER_MASS_ACTION_REQUEST 29
#define ENUM_REF_MSG_TYPE_ORDER_MASS_ACTION_REPORT 30
#define ENUM_REF_MSG_TYPE_QUOTE_REQUEST 31
#define ENUM_REF_MSG_TYPE_QUOTE_STATUS_REPORT 32
#define ENUM_REF_MSG_TYPE_QUOTE 33
#define ENUM_REF_MSG_TYPE_QUOTE_CANCEL 34
#define ENUM_REF_MSG_TYPE_QUOTE_REQUEST_REJECT 35
#define ENUM_REF_MSG_TYPE_POSITION_MAINTENANCE_CANCEL_REQUEST 36
#define ENUM_REF_MSG_TYPE_POSITION_MAINTENANCE_REQUEST 37
#define ENUM_REF_MSG_TYPE_POSITION_MAINTENANCE_REPORT 38
#define ENUM_REF_MSG_TYPE_ALLOCATION_INSTRUCTION 39
#define ENUM_REF_MSG_TYPE_ALLOCATION_REPORT 40

/*
 * Retransmit Reject Code Values
 */ 
#define ENUM_RETRANSMIT_REJECT_CODE_OUTOFRANGE 0
#define ENUM_RETRANSMIT_REJECT_CODE_INVALIDSESSION 1
#define ENUM_RETRANSMIT_REJECT_CODE_REQUESTLIMITEXCEEDED 2
#define ENUM_RETRANSMIT_REJECT_CODE_RETRANSMITINPROGRESS 3
#define ENUM_RETRANSMIT_REJECT_CODE_INVALIDTIMESTAMP 4
#define ENUM_RETRANSMIT_REJECT_CODE_INVALIDFROMSEQNO 5
#define ENUM_RETRANSMIT_REJECT_CODE_INVALIDCOUNT 9
#define ENUM_RETRANSMIT_REJECT_CODE_THROTTLEREJECT 10
#define ENUM_RETRANSMIT_REJECT_CODE_SYSTEMBUSY 11

/*
 * Routing Instruction Values
 */ 
#define ENUM_ROUTING_INSTRUCTION_RETAILLIQUIDITYTAKER 1
#define ENUM_ROUTING_INSTRUCTION_WAIVEDPRIORITY 2
#define ENUM_ROUTING_INSTRUCTION_BROKERONLY 3
#define ENUM_ROUTING_INSTRUCTION_BROKERONLYREMOVAL 4
#define ENUM_ROUTING_INSTRUCTION_NO_VALUE 0

/*
 * Security Response Type Values
 */ 
#define ENUM_SECURITY_RESPONSE_TYPE_ACCEPTSECURITYPROPOSALASIS 1
#define ENUM_SECURITY_RESPONSE_TYPE_REJECTSECURITYPROPOSAL 5
#define ENUM_SECURITY_RESPONSE_TYPE_ACCEPTSECURITYASPROPOSALWITHREVISIONS 2

/*
 * Self Trade Prevention Instruction Values
 */ 
#define ENUM_SELF_TRADE_PREVENTION_INSTRUCTION_NONE 0
#define ENUM_SELF_TRADE_PREVENTION_INSTRUCTION_CANCELAGGRESSORORDER 1
#define ENUM_SELF_TRADE_PREVENTION_INSTRUCTION_CANCELRESTINGORDER 2
#define ENUM_SELF_TRADE_PREVENTION_INSTRUCTION_CANCELBOTHORDERS 3

/*
 * Settl Type Values
 */ 
#define ENUM_SETTL_TYPE_BUYERSDISCRETION '0'
#define ENUM_SETTL_TYPE_SELLERSDISCRETION '8'
#define ENUM_SETTL_TYPE_MUTUAL 'X'
#define ENUM_SETTL_TYPE_NO_VALUE '0'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY '1'
#define ENUM_SIDE_SELL '2'
#define ENUM_SIDE_NO_VALUE '0'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_NEGOTIATE_MESSAGE 1
#define ENUM_TEMPLATE_ID_NEGOTIATE_RESPONSE_MESSAGE 2
#define ENUM_TEMPLATE_ID_NEGOTIATE_REJECT_MESSAGE 3
#define ENUM_TEMPLATE_ID_ESTABLISH_MESSAGE 4
#define ENUM_TEMPLATE_ID_ESTABLISH_ACK_MESSAGE 5
#define ENUM_TEMPLATE_ID_ESTABLISH_REJECT_MESSAGE 6
#define ENUM_TEMPLATE_ID_TERMINATE_MESSAGE 7
#define ENUM_TEMPLATE_ID_NOT_APPLIED_MESSAGE 8
#define ENUM_TEMPLATE_ID_SEQUENCE_MESSAGE 9
#define ENUM_TEMPLATE_ID_RETRANSMIT_REQUEST_MESSAGE 12
#define ENUM_TEMPLATE_ID_RETRANSMISSION_MESSAGE 13
#define ENUM_TEMPLATE_ID_RETRANSMIT_REJECT_MESSAGE 14
#define ENUM_TEMPLATE_ID_SIMPLE_NEW_ORDER_MESSAGE 100
#define ENUM_TEMPLATE_ID_SIMPLE_MODIFY_ORDER_MESSAGE 101
#define ENUM_TEMPLATE_ID_NEW_ORDER_SINGLE_MESSAGE 102
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REPLACE_REQUEST_MESSAGE 104
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REQUEST_MESSAGE 105
#define ENUM_TEMPLATE_ID_NEW_ORDER_CROSS_MESSAGE 106
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_NEW_MESSAGE 200
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_MODIFY_MESSAGE 201
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_CANCEL_MESSAGE 202
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_MESSAGE 203
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_REJECT_MESSAGE 204
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_FORWARD_MESSAGE 205
#define ENUM_TEMPLATE_ID_BUSINESS_MESSAGE_REJECT 206
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_REQUEST_MESSAGE 300
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_RESPONSE_MESSAGE 301
#define ENUM_TEMPLATE_ID_QUOTE_REQUEST_MESSAGE 401
#define ENUM_TEMPLATE_ID_QUOTE_STATUS_REPORT_MESSAGE 402
#define ENUM_TEMPLATE_ID_QUOTE_MESSAGE 403
#define ENUM_TEMPLATE_ID_QUOTE_CANCEL_MESSAGE 404
#define ENUM_TEMPLATE_ID_QUOTE_REQUEST_REJECT_MESSAGE 405
#define ENUM_TEMPLATE_ID_POSITION_MAINTENANCE_CANCEL_REQUEST_MESSAGE 501
#define ENUM_TEMPLATE_ID_POSITION_MAINTENANCE_REQUEST_MESSAGE 502
#define ENUM_TEMPLATE_ID_POSITION_MAINTENANCE_REPORT_MESSAGE 503
#define ENUM_TEMPLATE_ID_ALLOCATION_INSTRUCTION_MESSAGE 601
#define ENUM_TEMPLATE_ID_ALLOCATION_REPORT_MESSAGE 602
#define ENUM_TEMPLATE_ID_ORDER_MASS_ACTION_REQUEST_MESSAGE 701
#define ENUM_TEMPLATE_ID_ORDER_MASS_ACTION_REPORT_MESSAGE 702
#define ENUM_TEMPLATE_ID_HEADER_MESSAGE 0

/*
 * Termination Code Values
 */ 
#define ENUM_TERMINATION_CODE_UNSPECIFIED 0
#define ENUM_TERMINATION_CODE_FINISHED 1
#define ENUM_TERMINATION_CODE_UNNEGOTIATED 2
#define ENUM_TERMINATION_CODE_NOTESTABLISHED 3
#define ENUM_TERMINATION_CODE_SESSIONBLOCKED 4
#define ENUM_TERMINATION_CODE_NEGOTIATIONINPROGRESS 5
#define ENUM_TERMINATION_CODE_ESTABLISHINPROGRESS 6
#define ENUM_TERMINATION_CODE_KEEPALIVEINTERVALLAPSED 10
#define ENUM_TERMINATION_CODE_INVALIDSESSIONID 11
#define ENUM_TERMINATION_CODE_INVALIDSESSIONVERID 12
#define ENUM_TERMINATION_CODE_INVALIDTIMESTAMP 13
#define ENUM_TERMINATION_CODE_INVALIDNEXTSEQNO 14
#define ENUM_TERMINATION_CODE_UNRECOGNIZEDMESSAGE 15
#define ENUM_TERMINATION_CODE_INVALIDSOFH 16
#define ENUM_TERMINATION_CODE_DECODINGERROR 17
#define ENUM_TERMINATION_CODE_TERMINATENOTALLOWED 20
#define ENUM_TERMINATION_CODE_TERMINATEINPROGRESS 21
#define ENUM_TERMINATION_CODE_PROTOCOLVERSIONNOTSUPPORTED 23
#define ENUM_TERMINATION_CODE_BACKUPTAKEOVERINPROGRESS 30

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY '0'
#define ENUM_TIME_IN_FORCE_IMMEDIATEORCANCEL '3'
#define ENUM_TIME_IN_FORCE_FILLORKILL '4'
#define ENUM_TIME_IN_FORCE_GOODTILLCANCEL '1'
#define ENUM_TIME_IN_FORCE_GOODTILLDATE '6'
#define ENUM_TIME_IN_FORCE_ATTHECLOSE '7'
#define ENUM_TIME_IN_FORCE_GOODFORAUCTION 'A'
#define ENUM_TIME_IN_FORCE_NO_VALUE '0'

/*
 * Working Indicator Values
 */ 
#define ENUM_WORKING_INDICATOR_FALSEVALUE 0
#define ENUM_WORKING_INDICATOR_TRUEVALUE 1


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Framing Header
 */ 
typedef struct {
    uint16_t MessageLength;
    uint16_t EncodingType;
} FramingHeaderT;

/*
 * Structure: Header Message
 */ 
typedef struct {
    FramingHeaderT FramingHeader;
} HeaderMessageT;

/*
 * Structure: Text
 */ 
typedef struct {
    uint8_t Length;
    char VarData[0];
} TextT;

/*
 * Structure: Investor Id
 */ 
typedef struct {
    uint16_t Prefix;
    uint32_t Document;
} InvestorIdT;

/*
 * Structure: Order Mass Action Report Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint8_t MassActionType;
    uint8_t MassActionScope;
    uint64_t ClOrdId;
    uint64_t MassActionReportId;
    uint64_t TransactTime;
    char MassActionResponse;
    uint8_t MassActionRejectReason;
    uint8_t ExecRestatementReason;
    uint8_t OrdTagId;
    char Side;
    char Asset[6];
    uint64_t SecurityId;
    char SecurityExchange[4];
    InvestorIdT InvestorId;
    TextT Text;
} OrderMassActionReportMessageT;

/*
 * Structure: Order Mass Action Request Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint8_t MassActionType;
    uint8_t MassActionScope;
    uint64_t ClOrdId;
    uint8_t ExecRestatementReason;
    uint8_t OrdTagId;
    char Side;
    char Asset[6];
    uint64_t SecurityId;
    char SecurityExchange[4];
    InvestorIdT InvestorId;
} OrderMassActionRequestMessageT;

/*
 * Structure: Allocation Report Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint64_t AllocId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint64_t AllocReportId;
    char AllocTransType;
    char AllocReportType;
    char AllocNoOrdersType;
    uint32_t AllocRejCode;
    uint64_t Quantity;
    char AllocStatus;
    uint16_t TradeDate;
    uint64_t TransactTime;
    char Side;
    char SenderLocation[10];
    char EnteringTrader[5];
} AllocationReportMessageT;

/*
 * Structure: Memo
 */ 
typedef struct {
    uint8_t Length;
    char VarData[0];
} MemoT;

/*
 * Structure: Desk Id
 */ 
typedef struct {
    uint8_t Length;
    char VarData[0];
} DeskIdT;

/*
 * Structure: Allocation Instruction Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint64_t AllocId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    char AllocTransType;
    char AllocType;
    char AllocNoOrdersType;
    uint64_t Quantity;
    char SenderLocation[10];
    char EnteringTrader[5];
    uint32_t TradeId;
    uint16_t TradeDate;
    uint64_t IndividualAllocId;
    uint32_t AllocAccount;
    uint64_t AllocQty;
    DeskIdT DeskId;
    MemoT Memo;
} AllocationInstructionMessageT;

/*
 * Structure: No Positions Group
 */ 
typedef struct {
    char PosType;
    uint64_t LongQty;
    uint64_t ShortQty;
} NoPositionsGroupT;

/*
 * Structure: Group Size Encoding
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeEncodingT;

/*
 * Structure: No Positions Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} NoPositionsGroupsT;

/*
 * Structure: Position Maintenance Request Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint64_t PosReqId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    int64_t ThresholdAmount;
    uint32_t Account;
    char SenderLocation[10];
    uint8_t PosTransType;
    uint16_t ClearingBusinessDate;
    uint8_t ContraryInstructionIndicator;
    char EnteringTrader[5];
    uint64_t LongQty;
    DeskIdT DeskId;
    MemoT Memo;
} PositionMaintenanceRequestMessageT;

/*
 * Structure: Position Maintenance Cancel Request Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint64_t PosReqId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint64_t OrigPosReqRefId;
    uint64_t PosMaintRptRefId;
    char SenderLocation[10];
    char EnteringTrader[5];
} PositionMaintenanceCancelRequestMessageT;

/*
 * Structure: Quote Req Id
 */ 
typedef struct {
    uint8_t Length;
    char VarData[0];
} QuoteReqIdT;

/*
 * Structure: No Sides Group
 */ 
typedef struct {
    char Side;
    uint32_t Account;
    uint32_t EnteringFirm;
    uint64_t ClOrdId;
} NoSidesGroupT;

/*
 * Structure: No Sides Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} NoSidesGroupsT;

/*
 * Structure: Quote Cancel Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint64_t QuoteId;
    uint32_t Account;
    char SenderLocation[10];
    char EnteringTrader[5];
    char ExecutingTrader[5];
    QuoteReqIdT QuoteReqId;
    DeskIdT DeskId;
    MemoT Memo;
} QuoteCancelMessageT;

/*
 * Structure: Quote Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint64_t QuoteId;
    uint64_t TransactTime;
    int64_t Price;
    uint64_t OrderQty;
    char Side;
    char SettlType;
    uint32_t Account;
    char SenderLocation[10];
    char EnteringTrader[5];
    char ExecutingTrader[5];
    int64_t FixedRate;
    char ExecuteUnderlyingTrade;
    uint16_t DaysToSettlement;
    QuoteReqIdT QuoteReqId;
    DeskIdT DeskId;
    MemoT Memo;
} QuoteMessageT;

/*
 * Structure: Quote Status Report Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint32_t QuoteRejectReason;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint64_t QuoteId;
    uint32_t TradeId;
    uint32_t ContraBroker;
    uint64_t TransactTime;
    uint8_t QuoteStatus;
    char QuoteStatusResponseTo;
    uint32_t Account;
    char Side;
    char SettlType;
    int64_t Price;
    uint64_t OrderQty;
    char SenderLocation[10];
    char EnteringTrader[5];
    char ExecutingTrader[5];
    int64_t FixedRate;
    char ExecuteUnderlyingTrade;
    uint16_t DaysToSettlement;
    QuoteReqIdT QuoteReqId;
    DeskIdT DeskId;
    MemoT Memo;
    TextT Text;
} QuoteStatusReportMessageT;

/*
 * Structure: Security Definition Response Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint64_t SecurityReqId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint8_t SecurityResponseType;
    char SecurityStrategyType[3];
    char Symbol[20];
    uint64_t SecurityResponseId;
    char SenderLocation[10];
    char EnteringTrader[5];
} SecurityDefinitionResponseMessageT;

/*
 * Structure: No Legs Group
 */ 
typedef struct {
    char LegSymbol[20];
    char LegSecurityExchange[4];
    int64_t LegRatioQty;
    char LegSide;
} NoLegsGroupT;

/*
 * Structure: No Legs Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} NoLegsGroupsT;

/*
 * Structure: Security Definition Request Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint64_t SecurityReqId;
    char SenderLocation[10];
    char EnteringTrader[5];
} SecurityDefinitionRequestMessageT;

/*
 * Structure: Business Message Reject
 */ 
typedef struct {
    char BusinessHeader[1];
    uint8_t RefMsgType;
    uint32_t RefSeqNum;
    uint64_t BusinessRejectRefId;
    uint32_t BusinessRejectReason;
    MemoT Memo;
    TextT Text;
} BusinessMessageRejectT;

/*
 * Structure: Execution Report Forward Message
 */ 
typedef struct {
    char BusinessHeader[1];
    char Side;
    char OrdStatus;
    uint64_t ClOrdId;
    uint64_t SecondaryOrderId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint32_t Account;
    uint64_t LastQty;
    int64_t LastPx;
    uint64_t ExecId;
    uint64_t TransactTime;
    uint64_t LeavesQty;
    uint64_t CumQty;
    uint32_t TradeId;
    uint32_t ContraBroker;
    uint64_t OrderId;
    uint8_t AggressorIndicator;
    char SettlType;
    uint16_t TradeDate;
    uint16_t DaysToSettlement;
    uint64_t SecondaryExecId;
    uint64_t ExecRefId;
    int64_t FixedRate;
    uint64_t OrderQty;
    DeskIdT DeskId;
    MemoT Memo;
} ExecutionReportForwardMessageT;

/*
 * Structure: Execution Report Reject Message
 */ 
typedef struct {
    char BusinessHeader[1];
    char Side;
    uint8_t CxlRejResponseTo;
    uint64_t ClOrdId;
    uint64_t SecondaryOrderId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint32_t OrdRejReason;
    uint64_t TransactTime;
    uint64_t ExecId;
    uint64_t OrderId;
    uint64_t OrigClOrdId;
    uint32_t Account;
    char OrdType;
    char TimeInForce;
    uint16_t ExpireDate;
    uint64_t OrderQty;
    int64_t Price;
    int64_t StopPx;
    uint64_t MinQty;
    uint64_t MaxFloor;
    uint64_t CrossId;
    uint16_t CrossedIndicator;
    DeskIdT DeskId;
    MemoT Memo;
    TextT Text;
} ExecutionReportRejectMessageT;

/*
 * Structure: Execution Report Trade Message
 */ 
typedef struct {
    char BusinessHeader[1];
    char Side;
    char OrdStatus;
    uint64_t ClOrdId;
    uint64_t SecondaryOrderId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint32_t Account;
    uint64_t LastQty;
    int64_t LastPx;
    uint64_t ExecId;
    uint64_t TransactTime;
    uint64_t LeavesQty;
    uint64_t CumQty;
    uint8_t AggressorIndicator;
    char ExecType;
    char OrderCategory;
    char MultiLegReportingType;
    uint32_t TradeId;
    uint32_t ContraBroker;
    uint64_t OrderId;
    uint16_t TradeDate;
    uint8_t TotNoRelatedSym;
    uint64_t SecondaryExecId;
    uint64_t ExecRefId;
    uint64_t CrossId;
    uint16_t CrossedIndicator;
    uint64_t OrderQty;
    DeskIdT DeskId;
    MemoT Memo;
} ExecutionReportTradeMessageT;

/*
 * Structure: Execution Report Cancel Message
 */ 
typedef struct {
    char BusinessHeader[1];
    char Side;
    char OrdStatus;
    uint64_t ClOrdId;
    uint64_t SecondaryOrderId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint64_t CumQty;
    uint32_t Account;
    uint64_t ExecId;
    uint64_t TransactTime;
    uint64_t MarketSegmentReceivedTime;
    uint64_t OrderId;
    uint64_t OrigClOrdId;
    uint16_t TradeDate;
    uint8_t WorkingIndicator;
    uint8_t ExecRestatementReason;
    uint64_t MassActionReportId;
    char OrdType;
    char TimeInForce;
    uint16_t ExpireDate;
    uint64_t OrderQty;
    int64_t Price;
    int64_t StopPx;
    uint64_t MinQty;
    uint64_t MaxFloor;
    DeskIdT DeskId;
    MemoT Memo;
} ExecutionReportCancelMessageT;

/*
 * Structure: Execution Report Modify Message
 */ 
typedef struct {
    char BusinessHeader[1];
    char Side;
    char OrdStatus;
    uint64_t ClOrdId;
    uint64_t SecondaryOrderId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint64_t LeavesQty;
    uint32_t Account;
    uint64_t ExecId;
    uint64_t TransactTime;
    uint64_t CumQty;
    uint64_t MarketSegmentReceivedTime;
    uint64_t OrderId;
    uint64_t OrigClOrdId;
    int64_t ProtectionPrice;
    uint16_t TradeDate;
    uint8_t WorkingIndicator;
    char MultiLegReportingType;
    char OrdType;
    char TimeInForce;
    uint16_t ExpireDate;
    uint64_t OrderQty;
    int64_t Price;
    int64_t StopPx;
    uint64_t MinQty;
    uint64_t MaxFloor;
    DeskIdT DeskId;
    MemoT Memo;
} ExecutionReportModifyMessageT;

/*
 * Structure: Execution Report New Message
 */ 
typedef struct {
    char BusinessHeader[1];
    char Side;
    char OrdStatus;
    uint64_t ClOrdId;
    uint64_t SecondaryOrderId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint64_t OrderId;
    uint32_t Account;
    uint64_t ExecId;
    uint64_t TransactTime;
    uint64_t MarketSegmentReceivedTime;
    int64_t ProtectionPrice;
    uint16_t TradeDate;
    uint8_t WorkingIndicator;
    char MultiLegReportingType;
    char OrdType;
    char TimeInForce;
    uint16_t ExpireDate;
    uint64_t OrderQty;
    int64_t Price;
    int64_t StopPx;
    uint64_t MinQty;
    uint64_t MaxFloor;
    uint64_t CrossId;
    DeskIdT DeskId;
    MemoT Memo;
} ExecutionReportNewMessageT;

/*
 * Structure: Order Cancel Request Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint64_t ClOrdId;
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint64_t OrderId;
    uint64_t OrigClOrdId;
    char Side;
    uint8_t ExecRestatementReason;
    char SenderLocation[10];
    char EnteringTrader[5];
    char ExecutingTrader[5];
    DeskIdT DeskId;
    MemoT Memo;
} OrderCancelRequestMessageT;

/*
 * Structure: Custodian Info
 */ 
typedef struct {
    uint32_t Custodian;
    uint32_t CustodyAccount;
    uint32_t CustodyAllocationType;
} CustodianInfoT;

/*
 * Structure: Order Cancel Replace Request Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint8_t OrdTagId;
    uint8_t MmProtectionReset;
    uint64_t ClOrdId;
    uint32_t Account;
    char SenderLocation[10];
    char EnteringTrader[5];
    uint8_t SelfTradePreventionInstruction;
    uint64_t SecurityId;
    char SecurityExchange[4];
    char Side;
    char OrdType;
    char TimeInForce;
    uint8_t RoutingInstruction;
    uint64_t OrderQty;
    int64_t Price;
    uint64_t OrderId;
    uint64_t OrigClOrdId;
    int64_t StopPx;
    uint64_t MinQty;
    uint64_t MaxFloor;
    char ExecutingTrader[5];
    uint8_t AccountType;
    uint16_t ExpireDate;
    CustodianInfoT CustodianInfo;
    InvestorIdT InvestorId;
    DeskIdT DeskId;
    MemoT Memo;
} OrderCancelReplaceRequestMessageT;

/*
 * Structure: New Order Single Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint8_t OrdTagId;
    uint8_t MmProtectionReset;
    uint64_t ClOrdId;
    uint32_t Account;
    char SenderLocation[10];
    char EnteringTrader[5];
    uint8_t SelfTradePreventionInstruction;
    uint64_t SecurityId;
    char SecurityExchange[4];
    char Side;
    char OrdType;
    char TimeInForce;
    uint8_t RoutingInstruction;
    uint64_t OrderQty;
    int64_t Price;
    int64_t StopPx;
    uint64_t MinQty;
    uint64_t MaxFloor;
    char ExecutingTrader[5];
    uint16_t ExpireDate;
    CustodianInfoT CustodianInfo;
    InvestorIdT InvestorId;
    DeskIdT DeskId;
    MemoT Memo;
} NewOrderSingleMessageT;

/*
 * Structure: Simple Modify Order Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint8_t OrdTagId;
    uint8_t MmProtectionReset;
    uint64_t ClOrdId;
    uint32_t Account;
    char SenderLocation[10];
    char EnteringTrader[5];
    uint8_t SelfTradePreventionInstruction;
    uint64_t SecurityId;
    char SecurityExchange[4];
    char Side;
    char OrdType;
    char TimeInForce;
    uint8_t RoutingInstruction;
    uint64_t OrderQty;
    int64_t Price;
    uint64_t OrderId;
    uint64_t OrigClOrdId;
    InvestorIdT InvestorId;
    MemoT Memo;
} SimpleModifyOrderMessageT;

/*
 * Structure: Simple New Order Message
 */ 
typedef struct {
    char BusinessHeader[1];
    uint8_t OrdTagId;
    uint8_t MmProtectionReset;
    uint64_t ClOrdId;
    uint32_t Account;
    char SenderLocation[10];
    char EnteringTrader[5];
    uint8_t SelfTradePreventionInstruction;
    uint64_t SecurityId;
    char SecurityExchange[4];
    char Side;
    char OrdType;
    char TimeInForce;
    uint8_t RoutingInstruction;
    uint64_t OrderQty;
    int64_t Price;
    InvestorIdT InvestorId;
    MemoT Memo;
} SimpleNewOrderMessageT;

/*
 * Structure: Retransmit Reject Message
 */ 
typedef struct {
    uint32_t SessionId;
    uint64_t RequestTimestamp;
    uint8_t RetransmitRejectCode;
} RetransmitRejectMessageT;

/*
 * Structure: Retransmission Message
 */ 
typedef struct {
    uint32_t SessionId;
    uint64_t RequestTimestamp;
    uint32_t NextSeqNo;
    uint32_t Count;
} RetransmissionMessageT;

/*
 * Structure: Retransmit Request Message
 */ 
typedef struct {
    uint32_t SessionId;
    uint64_t Timestamp;
    uint32_t FromSeqNo;
    uint32_t Count;
} RetransmitRequestMessageT;

/*
 * Structure: Sequence Message
 */ 
typedef struct {
    uint32_t NextSeqNo;
} SequenceMessageT;

/*
 * Structure: Not Applied Message
 */ 
typedef struct {
    uint32_t FromSeqNo;
    uint32_t Count;
} NotAppliedMessageT;

/*
 * Structure: Terminate Message
 */ 
typedef struct {
    uint32_t SessionId;
    uint64_t SessionVerId;
    uint8_t TerminationCode;
} TerminateMessageT;

/*
 * Structure: Establish Reject Message
 */ 
typedef struct {
    uint32_t SessionId;
    uint64_t SessionVerId;
    uint64_t RequestTimestamp;
    uint8_t EstablishmentRejectCode;
    uint32_t LastIncomingSeqNo;
} EstablishRejectMessageT;

/*
 * Structure: Establish Ack Message
 */ 
typedef struct {
    uint32_t SessionId;
    uint64_t SessionVerId;
    uint64_t RequestTimestamp;
    uint64_t KeepAliveInterval;
    uint32_t NextSeqNo;
    uint32_t LastIncomingSeqNo;
} EstablishAckMessageT;

/*
 * Structure: Credentials
 */ 
typedef struct {
    uint8_t Length;
    char VarData[0];
} CredentialsT;

/*
 * Structure: Establish Message
 */ 
typedef struct {
    uint32_t SessionId;
    uint64_t SessionVerId;
    uint64_t Timestamp;
    uint64_t KeepAliveInterval;
    uint32_t NextSeqNo;
    uint8_t CancelOnDisconnectType;
    uint64_t CodTimeoutWindow;
    CredentialsT Credentials;
} EstablishMessageT;

/*
 * Structure: Negotiate Reject Message
 */ 
typedef struct {
    uint32_t SessionId;
    uint64_t SessionVerId;
    uint64_t RequestTimestamp;
    uint32_t EnteringFirm;
    uint8_t NegotiationRejectCode;
    uint64_t CurrentSessionVerId;
} NegotiateRejectMessageT;

/*
 * Structure: Negotiate Response Message
 */ 
typedef struct {
    uint32_t SessionId;
    uint64_t SessionVerId;
    uint64_t RequestTimestamp;
    uint32_t EnteringFirm;
} NegotiateResponseMessageT;

/*
 * Structure: Client App Version
 */ 
typedef struct {
    uint8_t Length;
    char VarData[0];
} ClientAppVersionT;

/*
 * Structure: Client App Name
 */ 
typedef struct {
    uint8_t Length;
    char VarData[0];
} ClientAppNameT;

/*
 * Structure: Client Ip
 */ 
typedef struct {
    uint8_t Length;
    char VarData[0];
} ClientIpT;

/*
 * Structure: Negotiate Message
 */ 
typedef struct {
    uint32_t SessionId;
    uint64_t SessionVerId;
    uint64_t Timestamp;
    uint32_t EnteringFirm;
    uint32_t OnbehalfFirm;
    CredentialsT Credentials;
    ClientIpT ClientIp;
    ClientAppNameT ClientAppName;
    ClientAppVersionT ClientAppVersion;
} NegotiateMessageT;

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
   Organization: B3
   Version: 8.0
   Date: Monday, September 18, 2023
   Specification: BinaryEntryPoint-MessageReference-8.0.0-enUS.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
