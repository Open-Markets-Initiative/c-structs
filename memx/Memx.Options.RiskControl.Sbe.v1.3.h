/*******************************************************************************
 * C Structs For Memx Options Sbe RiskControl 1.3 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Allow Iso Orders Values
 */ 
#define ENUM_ALLOW_ISO_ORDERS_FALSE 0
#define ENUM_ALLOW_ISO_ORDERS_TRUE 1

/*
 * Allow Orders Values
 */ 
#define ENUM_ALLOW_ORDERS_FALSE 0
#define ENUM_ALLOW_ORDERS_TRUE 1

/*
 * Login Reject Code Values
 */ 
#define ENUM_LOGIN_REJECT_CODE_MALFORMED_TOKEN 'T'
#define ENUM_LOGIN_REJECT_CODE_TOKEN_TYPE_UNSUPPORTED 'U'
#define ENUM_LOGIN_REJECT_CODE_TOKEN_TYPE_INVALID 'V'
#define ENUM_LOGIN_REJECT_CODE_AUTHORIZATION_FAILED 'A'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_LOGIN_REQUEST 100
#define ENUM_MESSAGE_TYPE_REPLAY_REQUEST 101
#define ENUM_MESSAGE_TYPE_REPLAY_ALL_REQUEST 102
#define ENUM_MESSAGE_TYPE_STREAM_REQUEST 103
#define ENUM_MESSAGE_TYPE_UNSEQUENCED_MESSAGE 104
#define ENUM_MESSAGE_TYPE_LOGIN_ACCEPTED 1
#define ENUM_MESSAGE_TYPE_LOGIN_REJECTED 2
#define ENUM_MESSAGE_TYPE_START_OF_SESSION 3
#define ENUM_MESSAGE_TYPE_END_OF_SESSION 3
#define ENUM_MESSAGE_TYPE_REPLAY_BEGIN 5
#define ENUM_MESSAGE_TYPE_REPLAY_REJECTED 6
#define ENUM_MESSAGE_TYPE_REPLAY_COMPLETE 7
#define ENUM_MESSAGE_TYPE_STREAM_BEGIN 8
#define ENUM_MESSAGE_TYPE_STREAM_REJECTED 9
#define ENUM_MESSAGE_TYPE_STREAM_COMPLETE 10
#define ENUM_MESSAGE_TYPE_SEQUENCED_MESSAGE 11

/*
 * Reject Reason Values
 */ 
#define ENUM_REJECT_REASON_OTHER 0
#define ENUM_REJECT_REASON_MISSING_CL_ORD_ID 1
#define ENUM_REJECT_REASON_INVALID_CL_ORD_ID 2
#define ENUM_REJECT_REASON_DUPLICATE_CL_ORD_ID 3
#define ENUM_REJECT_REASON_MISSING_TIME_PERIOD 4
#define ENUM_REJECT_REASON_INVALID_TIME_PERIOD 5
#define ENUM_REJECT_REASON_MISSING_RISK_GROUP_ID 6
#define ENUM_REJECT_REASON_INVALID_RISK_GROUP_ID 7
#define ENUM_REJECT_REASON_MISSING_UNDERLIER 8
#define ENUM_REJECT_REASON_INVALID_UNDERLIER 9
#define ENUM_REJECT_REASON_MISSING_EFID 10
#define ENUM_REJECT_REASON_INVALID_EFID 11
#define ENUM_REJECT_REASON_MISSING_THRESHOLD 12
#define ENUM_REJECT_REASON_INVALID_THRESHOLD 13
#define ENUM_REJECT_REASON_MISSING_QUANTITY 14
#define ENUM_REJECT_REASON_INVALID_QUANTITY 15
#define ENUM_REJECT_REASON_MISSING_BREACH_ID 16
#define ENUM_REJECT_REASON_INVALID_BREACH_ID 17
#define ENUM_REJECT_REASON_MISSING_VOLUME 18
#define ENUM_REJECT_REASON_INVALID_VOLUME 19
#define ENUM_REJECT_REASON_MISSING_PERIOD_IN_MILLI_SECONDS 20
#define ENUM_REJECT_REASON_INVALID_PERIOD_IN_MILLI_SECONDS 21
#define ENUM_REJECT_REASON_MISSING_PRICE_IN_DOLLARS 22
#define ENUM_REJECT_REASON_INVALID_PRICE_IN_DOLLARS 23
#define ENUM_REJECT_REASON_MISSING_TOTAL_EXECUTIONS 24
#define ENUM_REJECT_REASON_INVALID_TOTAL_EXECUTIONS 25
#define ENUM_REJECT_REASON_MISSING_PERCENT 26
#define ENUM_REJECT_REASON_INVALID_PERCENT 27
#define ENUM_REJECT_REASON_MISSING_COUNT 28
#define ENUM_REJECT_REASON_INVALID_COUNT 29
#define ENUM_REJECT_REASON_MISSING_ALLOW_ISO_ORDERS 30
#define ENUM_REJECT_REASON_INVALID_ALLOW_ISO_ORDERS 31
#define ENUM_REJECT_REASON_MISSING_ALLOW_ORDERS 32
#define ENUM_REJECT_REASON_INVALID_ALLOW_ORDERS 33
#define ENUM_REJECT_REASON_MISSING_MAX_NOTIONAL_IN_DOLLARS 34
#define ENUM_REJECT_REASON_INVALID_MAX_NOTIONAL_IN_DOLLARS 35
#define ENUM_REJECT_REASON_MISSING_MAX_CONTRACTS 36
#define ENUM_REJECT_REASON_INVALID_MAX_CONTRACTS 37
#define ENUM_REJECT_REASON_OVER_CONFIRM 38
#define ENUM_REJECT_REASON_INVALID_RISK_COMBINATION 39
#define ENUM_REJECT_REASON_UNKNOWN_RISK_RULE 40
#define ENUM_REJECT_REASON_MISSING_MAX_DUP_ORDERS 41
#define ENUM_REJECT_REASON_INVALID_MAX_DUP_ORDERS 42
#define ENUM_REJECT_REASON_MISSING_MAX_ORDER_MSGS 43
#define ENUM_REJECT_REASON_INVALID_MAX_ORDER_MSGS 44
#define ENUM_REJECT_REASON_BREACH_IN_PROGRESS 45
#define ENUM_REJECT_REASON_EXCHANGE_CLOSED 100
#define ENUM_REJECT_REASON_NULL_VALUE 65535

/*
 * Replay Reject Code Values
 */ 
#define ENUM_REPLAY_REJECT_CODE_REPLAY_REQUESTS_ARE_NOT_ALLOWED 'R'
#define ENUM_REPLAY_REJECT_CODE_REPLAY_ALL_REQUESTS_ARE_NOT_ALLOWED 'A'
#define ENUM_REPLAY_REJECT_CODE_NOT_THE_ACTIVE_SESSION 'P'
#define ENUM_REPLAY_REJECT_CODE_SEQUENCE_NUMBER_OUT_OF_RANGE 'S'

/*
 * Risk Type Values
 */ 
#define ENUM_RISK_TYPE_CONTRACT_VOLUME 1
#define ENUM_RISK_TYPE_NOTIONAL_EXECUTED 2
#define ENUM_RISK_TYPE_TOTAL_TRADES_EXECUTED 3
#define ENUM_RISK_TYPE_PERCENT_EXECUTED 4
#define ENUM_RISK_TYPE_NUMBER_OF_BREACHES 5
#define ENUM_RISK_TYPE_ALLOW_ISO_ORDERS 6
#define ENUM_RISK_TYPE_ALLOW_ORDERS_IN_CROSSED_MARKET 7
#define ENUM_RISK_TYPE_MAX_NOTIONAL 8
#define ENUM_RISK_TYPE_MAX_CONTRACTS 9
#define ENUM_RISK_TYPE_GROSS_NOTIONAL 10
#define ENUM_RISK_TYPE_MARKET_ORDER_GROSS_NOTIONAL 11
#define ENUM_RISK_TYPE_NET_NOTIONAL 12
#define ENUM_RISK_TYPE_MARKET_ORDER_NET_NOTIONAL 13
#define ENUM_RISK_TYPE_DUPLICATE_ORDER 14
#define ENUM_RISK_TYPE_ORDER_RATE 15
#define ENUM_RISK_TYPE_TRIGGERED_BREACH 254

/*
 * Rule Type Values
 */ 
#define ENUM_RULE_TYPE_CONTRACT_VOLUME 1
#define ENUM_RULE_TYPE_NOTIONAL_EXECUTED 2
#define ENUM_RULE_TYPE_TOTAL_TRADES_EXECUTED 3
#define ENUM_RULE_TYPE_PERCENT_EXECUTED 4
#define ENUM_RULE_TYPE_NUMBER_OF_BREACHES 5
#define ENUM_RULE_TYPE_ALLOW_ISO_ORDERS 6
#define ENUM_RULE_TYPE_ALLOW_ORDERS_IN_CROSSED_MARKET 7
#define ENUM_RULE_TYPE_MAX_NOTIONAL 8
#define ENUM_RULE_TYPE_MAX_CONTRACTS 9
#define ENUM_RULE_TYPE_GROSS_NOTIONAL 10
#define ENUM_RULE_TYPE_MARKET_ORDER_GROSS_NOTIONAL 11
#define ENUM_RULE_TYPE_NET_NOTIONAL 12
#define ENUM_RULE_TYPE_MARKET_ORDER_NET_NOTIONAL 13
#define ENUM_RULE_TYPE_DUPLICATE_ORDER 14
#define ENUM_RULE_TYPE_ORDER_RATE 15
#define ENUM_RULE_TYPE_TRIGGERED_BREACH 254

/*
 * Send Cancels Values
 */ 
#define ENUM_SEND_CANCELS_FALSE 0
#define ENUM_SEND_CANCELS_TRUE 1
#define ENUM_SEND_CANCELS_NO_VALUE 255

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY '1'
#define ENUM_SIDE_SELL '2'

/*
 * Stream Reject Code Values
 */ 
#define ENUM_STREAM_REJECT_CODE_STREAM_REQUESTS_ARE_NOT_ALLOWED 'R'
#define ENUM_STREAM_REJECT_CODE_NOT_THE_ACTIVE_SESSION 'P'
#define ENUM_STREAM_REJECT_CODE_SEQUENCE_NUMBER_OUT_OF_RANGE 'S'

/*
 * Supported Request Mode Values
 */ 
#define ENUM_SUPPORTED_REQUEST_MODE_STREAM 'S'
#define ENUM_SUPPORTED_REQUEST_MODE_REPLAY 'R'
#define ENUM_SUPPORTED_REQUEST_MODE_SNAPSHOT_MODE 'T'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_RISK_SETTINGS_QUERY_MESSAGE 1
#define ENUM_TEMPLATE_ID_ACTIVE_RISK_THRESHOLD_CHANGE_REQ_MESSAGE 2
#define ENUM_TEMPLATE_ID_ACTIVE_RISK_ACKNOWLEDGEMENT_REQ_MESSAGE 3
#define ENUM_TEMPLATE_ID_CP_VOLUME_THRESHOLD_CHANGE_REQ_MESSAGE 4
#define ENUM_TEMPLATE_ID_CP_EXECUTED_NOTIONAL_THRESHOLD_CHANGE_REQ_MESSAGE 5
#define ENUM_TEMPLATE_ID_CP_TOTAL_EXECUTIONS_THRESHOLD_CHANGE_REQ_MESSAGE 6
#define ENUM_TEMPLATE_ID_CP_PERCENT_OUTSTANDING_CONTRACTS_THRESHOLD_CHANGE_REQ_MESSAGE 7
#define ENUM_TEMPLATE_ID_CP_BREACH_COUNT_THRESHOLD_CHANGE_REQ_MESSAGE 8
#define ENUM_TEMPLATE_ID_MANUAL_CP_BREACH_TRIGGER_REQ_MESSAGE 9
#define ENUM_TEMPLATE_ID_CP_CLEAR_BREACH_REQ_MESSAGE 10
#define ENUM_TEMPLATE_ID_SINGLE_ORDER_ALLOW_ISO_ORDERS_CHANGE_REQ_MESSAGE 11
#define ENUM_TEMPLATE_ID_SINGLE_ORDER_ALLOW_ORDERS_IN_CROSSED_MARKET_CHANGE_REQ_MESSAGE 12
#define ENUM_TEMPLATE_ID_SINGLE_ORDER_MAX_NOTIONAL_CHANGE_REQ_MESSAGE 13
#define ENUM_TEMPLATE_ID_SINGLE_ORDER_MAX_CONTRACTS_CHANGE_REQ_MESSAGE 14
#define ENUM_TEMPLATE_ID_CP_GROSS_NOTIONAL_THRESHOLD_CHANGE_REQ_MESSAGE 18
#define ENUM_TEMPLATE_ID_CP_MARKET_ORDER_GROSS_NOTIONAL_THRESHOLD_CHANGE_REQ_MESSAGE 19
#define ENUM_TEMPLATE_ID_CP_NET_NOTIONAL_THRESHOLD_CHANGE_REQ_MESSAGE 20
#define ENUM_TEMPLATE_ID_CP_MARKET_ORDER_NET_NOTIONAL_THRESHOLD_CHANGE_REQ_MESSAGE 21
#define ENUM_TEMPLATE_ID_CP_DUPLICATE_ORDER_THRESHOLD_CHANGE_REQ_MESSAGE 22
#define ENUM_TEMPLATE_ID_CP_ORDER_RATE_THRESHOLD_CHANGE_REQ_MESSAGE 23
#define ENUM_TEMPLATE_ID_ACTIVE_RISK_THRESHOLD_STATE_MESSAGE 30
#define ENUM_TEMPLATE_ID_ACTIVE_RISK_THRESHOLD_CHANGE_REJ_MESSAGE 31
#define ENUM_TEMPLATE_ID_ACTIVE_RISK_ACKNOWLEDGED_MESSAGE 32
#define ENUM_TEMPLATE_ID_ACTIVE_RISK_ACKNOWLEDGE_REJ_MESSAGE 33
#define ENUM_TEMPLATE_ID_ACTIVE_RISK_QUANTITY_UPDATE_NOTIFICATION_MESSAGE 34
#define ENUM_TEMPLATE_ID_CP_VOLUME_THRESHOLD_STATE_MESSAGE 35
#define ENUM_TEMPLATE_ID_CP_EXECUTED_NOTIONAL_THRESHOLD_STATE_MESSAGE 36
#define ENUM_TEMPLATE_ID_CP_TOTAL_EXECUTIONS_THRESHOLD_STATE_MESSAGE 37
#define ENUM_TEMPLATE_ID_CP_PERCENT_OUTSTANDING_CONTRACTS_THRESHOLD_STATE_MESSAGE 38
#define ENUM_TEMPLATE_ID_CP_BREACH_COUNT_THRESHOLD_STATE_MESSAGE 39
#define ENUM_TEMPLATE_ID_MANUAL_CP_BREACH_TRIGGER_PENDING_MESSAGE 40
#define ENUM_TEMPLATE_ID_MANUAL_CP_BREACH_TRIGGER_DONE_MESSAGE 41
#define ENUM_TEMPLATE_ID_RISK_THRESHOLD_UPDATE_REJ_MESSAGE 42
#define ENUM_TEMPLATE_ID_PASSIVE_RISK_THRESHOLD_NOTIFICATION_MESSAGE 43
#define ENUM_TEMPLATE_ID_SINGLE_ORDER_ALLOW_ISO_ORDERS_STATE_MESSAGE 44
#define ENUM_TEMPLATE_ID_SINGLE_ORDER_ALLOW_ORDERS_IN_CROSSED_MARKET_STATE_MESSAGE 45
#define ENUM_TEMPLATE_ID_SINGLE_ORDER_MAX_NOTIONAL_THRESHOLD_STATE_MESSAGE 46
#define ENUM_TEMPLATE_ID_SINGLE_ORDER_MAX_CONTRACTS_THRESHOLD_STATE_MESSAGE 47
#define ENUM_TEMPLATE_ID_RISK_SETTINGS_QUERY_DONE_MESSAGE 48
#define ENUM_TEMPLATE_ID_RISK_SETTINGS_QUERY_REJ_MESSAGE 49
#define ENUM_TEMPLATE_ID_MANUAL_CP_BREACH_TRIGGER_REJ_MESSAGE 50
#define ENUM_TEMPLATE_ID_BREACH_CLEAR_REJ_MESSAGE 51
#define ENUM_TEMPLATE_ID_BREACH_CLEARED_MESSAGE 52
#define ENUM_TEMPLATE_ID_CP_GROSS_NOTIONAL_THRESHOLD_STATE_MESSAGE 60
#define ENUM_TEMPLATE_ID_CP_MARKET_ORDER_GROSS_NOTIONAL_THRESHOLD_STATE_MESSAGE 61
#define ENUM_TEMPLATE_ID_CP_NET_NOTIONAL_THRESHOLD_STATE_MESSAGE 62
#define ENUM_TEMPLATE_ID_CP_MARKET_ORDER_NET_NOTIONAL_THRESHOLD_STATE_MESSAGE 63
#define ENUM_TEMPLATE_ID_CP_DUPLICATE_ORDER_THRESHOLD_STATE_MESSAGE 64
#define ENUM_TEMPLATE_ID_CP_ORDER_RATE_THRESHOLD_STATE_MESSAGE 65

/*
 * Use Order Price In Dup Check Values
 */ 
#define ENUM_USE_ORDER_PRICE_IN_DUP_CHECK_FALSE 0
#define ENUM_USE_ORDER_PRICE_IN_DUP_CHECK_TRUE 1
#define ENUM_USE_ORDER_PRICE_IN_DUP_CHECK_NO_VALUE 255


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Cp Order Rate Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpOrderRateThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t MaxOrderMsgs;
    uint32_t PeriodInMilliSeconds;
} CpOrderRateThresholdStateMessageT;

/*
 * Structure: Cp Duplicate Order Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpDuplicateOrderThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t MaxDupOrders;
    uint8_t UseOrderPriceInDupCheck;
    uint32_t PeriodInMilliSeconds;
} CpDuplicateOrderThresholdStateMessageT;

/*
 * Structure: Cp Market Order Net Notional Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpMarketOrderNetNotionalThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t PriceInDollars;
} CpMarketOrderNetNotionalThresholdStateMessageT;

/*
 * Structure: Cp Net Notional Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpNetNotionalThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t PriceInDollars;
} CpNetNotionalThresholdStateMessageT;

/*
 * Structure: Cp Market Order Gross Notional Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpMarketOrderGrossNotionalThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t PriceInDollars;
} CpMarketOrderGrossNotionalThresholdStateMessageT;

/*
 * Structure: Cp Gross Notional Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpGrossNotionalThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t PriceInDollars;
} CpGrossNotionalThresholdStateMessageT;

/*
 * Structure: Breach Cleared Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint64_t BreachId;
} BreachClearedMessageT;

/*
 * Structure: Breach Clear Rej Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint64_t BreachId;
    uint16_t RejectReason;
} BreachClearRejMessageT;

/*
 * Structure: Manual Cp Breach Trigger Rej Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierManualCpBreachTriggerRejUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint16_t RejectReason;
} ManualCpBreachTriggerRejMessageT;

/*
 * Structure: Risk Settings Query Rej Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint16_t RejectReason;
} RiskSettingsQueryRejMessageT;

/*
 * Structure: Risk Settings Query Done Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint32_t NumberMsgsSent;
} RiskSettingsQueryDoneMessageT;

/*
 * Structure: Single Order Max Contracts Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierSingleOrderMaxContractsThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t MaxContracts;
} SingleOrderMaxContractsThresholdStateMessageT;

/*
 * Structure: Single Order Max Notional Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierSingleOrderMaxNotionalThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t MaxNotionalInDollars;
} SingleOrderMaxNotionalThresholdStateMessageT;

/*
 * Structure: Single Order Allow Orders In Crossed Market State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierSingleOrderAllowOrdersInCrossedMarketStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint8_t AllowOrders;
} SingleOrderAllowOrdersInCrossedMarketStateMessageT;

/*
 * Structure: Single Order Allow Iso Orders State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierSingleOrderAllowIsoOrdersStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint8_t AllowIsoOrders;
} SingleOrderAllowIsoOrdersStateMessageT;

/*
 * Structure: Passive Risk Threshold Notification Message
 */ 
typedef struct {
    char UnderlierPassiveRiskThresholdNotificationUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint8_t RuleType;
    uint8_t LatestPercentage;
    uint64_t BreachId;
    uint8_t TransactTime;
    char Padding7[0];
} PassiveRiskThresholdNotificationMessageT;

/*
 * Structure: Risk Threshold Update Rej Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint8_t RiskType;
    uint16_t RejectReason;
} RiskThresholdUpdateRejMessageT;

/*
 * Structure: Manual Cp Breach Trigger Done Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierManualCpBreachTriggerDoneUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint64_t BreachId;
    uint32_t TotalAffectedOrders;
} ManualCpBreachTriggerDoneMessageT;

/*
 * Structure: Manual Cp Breach Trigger Pending Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierManualCpBreachTriggerPendingUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint64_t BreachId;
} ManualCpBreachTriggerPendingMessageT;

/*
 * Structure: Cp Breach Count Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpBreachCountThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t Count;
    uint32_t PeriodInMilliSeconds;
} CpBreachCountThresholdStateMessageT;

/*
 * Structure: Cp Percent Outstanding Contracts Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpPercentOutstandingContractsThresholdStateUnderlier[6];
    char Efid[4];
    uint32_t PercentUint32;
    uint32_t PeriodInMilliSeconds;
} CpPercentOutstandingContractsThresholdStateMessageT;

/*
 * Structure: Cp Total Executions Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpTotalExecutionsThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t TotalExecutions;
    uint32_t PeriodInMilliSeconds;
} CpTotalExecutionsThresholdStateMessageT;

/*
 * Structure: Cp Executed Notional Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpExecutedNotionalThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t PriceInDollars;
    uint32_t PeriodInMilliSeconds;
} CpExecutedNotionalThresholdStateMessageT;

/*
 * Structure: Cp Volume Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpVolumeThresholdStateUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint64_t Volume;
    uint32_t PeriodInMilliSeconds;
} CpVolumeThresholdStateMessageT;

/*
 * Structure: Active Risk Quantity Update Notification Message
 */ 
typedef struct {
    uint8_t SendingTime;
    uint8_t TransactTime;
    uint64_t OrderId;
    uint64_t TrdMatchId;
    char Efid[4];
    char UnderlierActiveRiskQuantityUpdateNotificationUnderlier[6];
    char OptionSecurityId[8];
    char Side;
    int8_t LastPx;
    uint32_t LastQty;
    uint32_t UnAckedQuantity;
    char Padding21[0];
} ActiveRiskQuantityUpdateNotificationMessageT;

/*
 * Structure: Active Risk Acknowledge Rej Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierActiveRiskAcknowledgeRejUnderlier[6];
    char Efid[4];
    uint32_t ThresholdQuantity;
    uint16_t RejectReason;
} ActiveRiskAcknowledgeRejMessageT;

/*
 * Structure: Active Risk Acknowledged Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierActiveRiskAcknowledgedUnderlier[6];
    char Efid[4];
    uint32_t Quantity;
    uint32_t UnAckedQuantity;
} ActiveRiskAcknowledgedMessageT;

/*
 * Structure: Active Risk Threshold Change Rej Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierActiveRiskThresholdChangeRejUnderlier[6];
    char Efid[4];
    uint32_t ThresholdQuantity;
    uint16_t RejectReason;
} ActiveRiskThresholdChangeRejMessageT;

/*
 * Structure: Active Risk Threshold State Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierActiveRiskThresholdStateUnderlier[6];
    char Efid[4];
    uint32_t ThresholdQuantity;
} ActiveRiskThresholdStateMessageT;

/*
 * Structure: Cp Order Rate Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpOrderRateThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t MaxOrderMsgs;
    uint32_t PeriodInMilliSeconds;
} CpOrderRateThresholdChangeReqMessageT;

/*
 * Structure: Cp Duplicate Order Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpDuplicateOrderThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t MaxDupOrders;
    uint8_t UseOrderPriceInDupCheck;
    uint32_t PeriodInMilliSeconds;
} CpDuplicateOrderThresholdChangeReqMessageT;

/*
 * Structure: Cp Market Order Net Notional Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpMarketOrderNetNotionalThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t PriceInDollars;
} CpMarketOrderNetNotionalThresholdChangeReqMessageT;

/*
 * Structure: Cp Net Notional Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpNetNotionalThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t PriceInDollars;
} CpNetNotionalThresholdChangeReqMessageT;

/*
 * Structure: Cp Market Order Gross Notional Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpMarketOrderGrossNotionalThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t PriceInDollars;
} CpMarketOrderGrossNotionalThresholdChangeReqMessageT;

/*
 * Structure: Cp Gross Notional Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpGrossNotionalThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t PriceInDollars;
} CpGrossNotionalThresholdChangeReqMessageT;

/*
 * Structure: Single Order Max Contracts Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierSingleOrderMaxContractsChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t MaxContracts;
} SingleOrderMaxContractsChangeReqMessageT;

/*
 * Structure: Single Order Max Notional Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierSingleOrderMaxNotionalChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t MaxNotionalInDollars;
} SingleOrderMaxNotionalChangeReqMessageT;

/*
 * Structure: Single Order Allow Orders In Crossed Market Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierSingleOrderAllowOrdersInCrossedMarketChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint8_t AllowOrders;
} SingleOrderAllowOrdersInCrossedMarketChangeReqMessageT;

/*
 * Structure: Single Order Allow Iso Orders Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierSingleOrderAllowIsoOrdersChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint8_t AllowIsoOrders;
} SingleOrderAllowIsoOrdersChangeReqMessageT;

/*
 * Structure: Cp Clear Breach Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint64_t BreachId;
} CpClearBreachReqMessageT;

/*
 * Structure: Manual Cp Breach Trigger Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierManualCpBreachTriggerReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint8_t SendCancels;
} ManualCpBreachTriggerReqMessageT;

/*
 * Structure: Cp Breach Count Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpBreachCountThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t Count;
    uint32_t PeriodInMilliSeconds;
} CpBreachCountThresholdChangeReqMessageT;

/*
 * Structure: Cp Percent Outstanding Contracts Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpPercentOutstandingContractsThresholdChangeReqUnderlier[6];
    char Efid[4];
    int32_t PercentInt32;
    uint32_t PeriodInMilliSeconds;
} CpPercentOutstandingContractsThresholdChangeReqMessageT;

/*
 * Structure: Cp Total Executions Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpTotalExecutionsThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t TotalExecutions;
    uint32_t PeriodInMilliSeconds;
} CpTotalExecutionsThresholdChangeReqMessageT;

/*
 * Structure: Cp Executed Notional Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpExecutedNotionalThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint32_t PriceInDollars;
    uint32_t PeriodInMilliSeconds;
} CpExecutedNotionalThresholdChangeReqMessageT;

/*
 * Structure: Cp Volume Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierCpVolumeThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint16_t RiskGroupId;
    uint64_t Volume;
    uint32_t PeriodInMilliSeconds;
} CpVolumeThresholdChangeReqMessageT;

/*
 * Structure: Active Risk Acknowledgement Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierActiveRiskAcknowledgementReqUnderlier[6];
    char Efid[4];
    uint32_t Quantity;
} ActiveRiskAcknowledgementReqMessageT;

/*
 * Structure: Active Risk Threshold Change Req Message
 */ 
typedef struct {
    char ClOrdId[20];
    char UnderlierActiveRiskThresholdChangeReqUnderlier[6];
    char Efid[4];
    uint32_t ThresholdQuantity;
} ActiveRiskThresholdChangeReqMessageT;

/*
 * Structure: Risk Settings Query Message
 */ 
typedef struct {
    char ClOrdId[20];
} RiskSettingsQueryMessageT;

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

/*
 * Structure: Packet
 */ 
typedef struct {
    CommonHeaderT CommonHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Members Exchange
   Version: 1.3
   Date: Thursday, June 29, 2023
   Specification: Risk Control for US Options SBE-v1_3.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
