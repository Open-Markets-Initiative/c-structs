/*******************************************************************************
 * C Structs For Eurex Cash T7 Eti 6.1 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Appl Id Values
 */ 
#define ENUM_APPL_ID_TRADE 1
#define ENUM_APPL_ID_NEWS 2
#define ENUM_APPL_ID_SERVICEAVAILABILITY 3
#define ENUM_APPL_ID_SESSIONDATA 4
#define ENUM_APPL_ID_LISTENERDATA 5
#define ENUM_APPL_ID_RISK_CONTROL 6
#define ENUM_APPL_ID_APPL_ID_MAXIMUM_VALUE 10
#define ENUM_APPL_ID_APPL_ID_MINIMUM_VALUE 0

/*
 * Appl Id Status Values
 */ 
#define ENUM_APPL_ID_STATUS_OUTBOUNDCONVERSIONERROR 105
#define ENUM_APPL_ID_STATUS_APPL_ID_STATUS_MAXIMUM_VALUE 4294967294
#define ENUM_APPL_ID_STATUS_APPL_ID_STATUS_MINIMUM_VALUE 0

/*
 * Appl Resend Flag Values
 */ 
#define ENUM_APPL_RESEND_FLAG_FALSE 0
#define ENUM_APPL_RESEND_FLAG_TRUE 1
#define ENUM_APPL_RESEND_FLAG_APPL_RESEND_FLAG_MAXIMUM_VALUE 1
#define ENUM_APPL_RESEND_FLAG_APPL_RESEND_FLAG_MINIMUM_VALUE 0

/*
 * Appl Seq Indicator Values
 */ 
#define ENUM_APPL_SEQ_INDICATOR_NO_RECOVERY_REQUIRED 0
#define ENUM_APPL_SEQ_INDICATOR_RECOVERY_REQUIRED 1
#define ENUM_APPL_SEQ_INDICATOR_APPL_SEQ_INDICATOR_MAXIMUM_VALUE 1
#define ENUM_APPL_SEQ_INDICATOR_APPL_SEQ_INDICATOR_MINIMUM_VALUE 0

/*
 * Appl Seq Status Values
 */ 
#define ENUM_APPL_SEQ_STATUS_UNAVAILABLE 0
#define ENUM_APPL_SEQ_STATUS_AVAILABLE 1
#define ENUM_APPL_SEQ_STATUS_APPL_SEQ_STATUS_MAXIMUM_VALUE 1
#define ENUM_APPL_SEQ_STATUS_APPL_SEQ_STATUS_MINIMUM_VALUE 0

/*
 * Appl Usage Orders Values
 */ 
#define ENUM_APPL_USAGE_ORDERS_AUTOMATED 'A'
#define ENUM_APPL_USAGE_ORDERS_MANUAL 'M'
#define ENUM_APPL_USAGE_ORDERS_AUTO_SELECT 'B'
#define ENUM_APPL_USAGE_ORDERS_NONE 'N'

/*
 * Appl Usage Quotes Values
 */ 
#define ENUM_APPL_USAGE_QUOTES_AUTOMATED 'A'
#define ENUM_APPL_USAGE_QUOTES_MANUAL 'M'
#define ENUM_APPL_USAGE_QUOTES_AUTO_SELECT 'B'
#define ENUM_APPL_USAGE_QUOTES_NONE 'N'

/*
 * Crossed Indicator Values
 */ 
#define ENUM_CROSSED_INDICATOR_NOCROSSING 0
#define ENUM_CROSSED_INDICATOR_CROSSREJECTED 1
#define ENUM_CROSSED_INDICATOR_CROSSED_INDICATOR_MAXIMUM_VALUE 1
#define ENUM_CROSSED_INDICATOR_CROSSED_INDICATOR_MINIMUM_VALUE 0

/*
 * Delivery Type Values
 */ 
#define ENUM_DELIVERY_TYPE_AKV 1
#define ENUM_DELIVERY_TYPE_GS 2
#define ENUM_DELIVERY_TYPE_STR 3
#define ENUM_DELIVERY_TYPE_WPR 4
#define ENUM_DELIVERY_TYPE_DELIVERY_TYPE_MAXIMUM_VALUE 4
#define ENUM_DELIVERY_TYPE_DELIVERY_TYPE_MINIMUM_VALUE 1

/*
 * Ex Destination Type Values
 */ 
#define ENUM_EX_DESTINATION_TYPE_TRADEONEXCHANGEOR_SI 3
#define ENUM_EX_DESTINATION_TYPE_EX_DESTINATION_TYPE_MAXIMUM_VALUE 3
#define ENUM_EX_DESTINATION_TYPE_EX_DESTINATION_TYPE_MINIMUM_VALUE 3

/*
 * Exec Inst Values
 */ 
#define ENUM_EXEC_INST_H 1
#define ENUM_EXEC_INST_Q 2
#define ENUM_EXEC_INST_HQ 3
#define ENUM_EXEC_INST_H6 5
#define ENUM_EXEC_INST_Q6 6
#define ENUM_EXEC_INST_EXEC_INST_MAXIMUM_VALUE 6
#define ENUM_EXEC_INST_EXEC_INST_MINIMUM_VALUE 1

/*
 * Exec Restatement Reason Values
 */ 
#define ENUM_EXEC_RESTATEMENT_REASON_CORPORATE_ACTION 0
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_BOOK_RESTATEMENT 1
#define ENUM_EXEC_RESTATEMENT_REASON_EXCHANGE_OPTION 8
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_ADDED 101
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_MODIFIED 102
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_CANCELLED 103
#define ENUM_EXEC_RESTATEMENT_REASON_IOC_ORDER_CANCELLED 105
#define ENUM_EXEC_RESTATEMENT_REASON_FOK_ORDER_CANCELLED 107
#define ENUM_EXEC_RESTATEMENT_REASON_BOOK_ORDER_EXECUTED 108
#define ENUM_EXEC_RESTATEMENT_REASON_INSTRUMENT_STATE_CHANGE 122
#define ENUM_EXEC_RESTATEMENT_REASON_END_OF_DAY_PROCESSING 146
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_EXPIRATION 148
#define ENUM_EXEC_RESTATEMENT_REASON_CAO_ORDER_ACTIVATED 149
#define ENUM_EXEC_RESTATEMENT_REASON_CAO_ORDER_INACTIVATED 150
#define ENUM_EXEC_RESTATEMENT_REASON_OAO_ORDER_ACTIVATED 151
#define ENUM_EXEC_RESTATEMENT_REASON_OAO_ORDER_INACTIVATED 152
#define ENUM_EXEC_RESTATEMENT_REASON_AAO_ORDER_ACTIVATED 153
#define ENUM_EXEC_RESTATEMENT_REASON_AAO_ORDER_INACTIVATED 154
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_REFRESHED 155
#define ENUM_EXEC_RESTATEMENT_REASON_OCO_ORDER_TRIGGERED 164
#define ENUM_EXEC_RESTATEMENT_REASON_STOP_ORDER_TRIGGERED 172
#define ENUM_EXEC_RESTATEMENT_REASON_OWNERSHIP_CHANGED 181
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_CANCELLATION_PENDING 197
#define ENUM_EXEC_RESTATEMENT_REASON_PENDING_CANCELLATION_EXECUTED 199
#define ENUM_EXEC_RESTATEMENT_REASON_BOC_ORDER_CANCELLED 212
#define ENUM_EXEC_RESTATEMENT_REASON_TRAILING_STOP_UPDATE 213
#define ENUM_EXEC_RESTATEMENT_REASON_EXCEEDS_MAXIMUM_QUANTITY 237
#define ENUM_EXEC_RESTATEMENT_REASON_INVALID_LIMIT_PRICE 238
#define ENUM_EXEC_RESTATEMENT_REASON_USER_DOES_NOT_EXIST 241
#define ENUM_EXEC_RESTATEMENT_REASON_SESSION_DOES_NOT_EXIST 242
#define ENUM_EXEC_RESTATEMENT_REASON_INVALID_STOP_PRICE 243
#define ENUM_EXEC_RESTATEMENT_REASON_INSTRUMENT_DOES_NOT_EXIST 245
#define ENUM_EXEC_RESTATEMENT_REASON_BUSINESS_UNIT_RISK_EVENT 246
#define ENUM_EXEC_RESTATEMENT_REASON_DIVIDEND_PAYMENT 292
#define ENUM_EXEC_RESTATEMENT_REASON_LAST_TRADING_DAY 294
#define ENUM_EXEC_RESTATEMENT_REASON_TRADING_PARAMETER_CHANGE 295
#define ENUM_EXEC_RESTATEMENT_REASON_CURRENCY_CHANGE 296
#define ENUM_EXEC_RESTATEMENT_REASON_PRODUCT_ASSIGNMENT_CHANGE 297
#define ENUM_EXEC_RESTATEMENT_REASON_REFERENCE_PRICE_CHANGE 298
#define ENUM_EXEC_RESTATEMENT_REASON_TICK_RULE_CHANGE 300
#define ENUM_EXEC_RESTATEMENT_REASON_EXEC_RESTATEMENT_REASON_MAXIMUM_VALUE 300
#define ENUM_EXEC_RESTATEMENT_REASON_EXEC_RESTATEMENT_REASON_MINIMUM_VALUE 0

/*
 * Exec Type Values
 */ 
#define ENUM_EXEC_TYPE_NEW '0'
#define ENUM_EXEC_TYPE_CANCELED '4'
#define ENUM_EXEC_TYPE_REPLACED '5'
#define ENUM_EXEC_TYPE_PENDING_CANCELE '6'
#define ENUM_EXEC_TYPE_SUSPENDED '9'
#define ENUM_EXEC_TYPE_RESTATED 'D'
#define ENUM_EXEC_TYPE_TRIGGERED 'L'
#define ENUM_EXEC_TYPE_TRADE 'F'

/*
 * Executing Trader Qualifier Values
 */ 
#define ENUM_EXECUTING_TRADER_QUALIFIER_ALGO 22
#define ENUM_EXECUTING_TRADER_QUALIFIER_HUMAN 24
#define ENUM_EXECUTING_TRADER_QUALIFIER_EXECUTING_TRADER_QUALIFIER_MAXIMUM_VALUE 24
#define ENUM_EXECUTING_TRADER_QUALIFIER_EXECUTING_TRADER_QUALIFIER_MINIMUM_VALUE 22

/*
 * Fill Liquidity Ind Values
 */ 
#define ENUM_FILL_LIQUIDITY_IND_ADDED_LIQUIDITY 1
#define ENUM_FILL_LIQUIDITY_IND_REMOVED_LIQUIDITY 2
#define ENUM_FILL_LIQUIDITY_IND_AUCTION 4
#define ENUM_FILL_LIQUIDITY_IND_TRIGGERED_STOP_ORDER 5
#define ENUM_FILL_LIQUIDITY_IND_TRIGGERED_OCO_ORDER 6
#define ENUM_FILL_LIQUIDITY_IND_TRIGGERED_MARKET_ORDER 7
#define ENUM_FILL_LIQUIDITY_IND_FILL_LIQUIDITY_IND_MAXIMUM_VALUE 7
#define ENUM_FILL_LIQUIDITY_IND_FILL_LIQUIDITY_IND_MINIMUM_VALUE 1

/*
 * Gateway Status Values
 */ 
#define ENUM_GATEWAY_STATUS_STANDBY 0
#define ENUM_GATEWAY_STATUS_ACTIVE 1
#define ENUM_GATEWAY_STATUS_GATEWAY_STATUS_MAXIMUM_VALUE 1
#define ENUM_GATEWAY_STATUS_GATEWAY_STATUS_MINIMUM_VALUE 0

/*
 * Last Fragment Values
 */ 
#define ENUM_LAST_FRAGMENT_NOT_LAST_MESSAGE 0
#define ENUM_LAST_FRAGMENT_LAST_MESSAGE 1
#define ENUM_LAST_FRAGMENT_LAST_FRAGMENT_MAXIMUM_VALUE 1
#define ENUM_LAST_FRAGMENT_LAST_FRAGMENT_MINIMUM_VALUE 0

/*
 * Last Mkt Values
 */ 
#define ENUM_LAST_MKT_XETR 3
#define ENUM_LAST_MKT_XVIE 4
#define ENUM_LAST_MKT_XDUB 5
#define ENUM_LAST_MKT_LAST_MKT_MAXIMUM_VALUE 255
#define ENUM_LAST_MKT_LAST_MKT_MINIMUM_VALUE 1

/*
 * List Update Action Values
 */ 
#define ENUM_LIST_UPDATE_ACTION_ADD 'A'
#define ENUM_LIST_UPDATE_ACTION_DELETE 'D'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_XETR 3
#define ENUM_MARKET_ID_XVIE 4
#define ENUM_MARKET_ID_XDUB 5
#define ENUM_MARKET_ID_MARKET_ID_MAXIMUM_VALUE 255
#define ENUM_MARKET_ID_MARKET_ID_MINIMUM_VALUE 1

/*
 * Mass Action Reason Values
 */ 
#define ENUM_MASS_ACTION_REASON_NO_SPECIAL_REASON 0
#define ENUM_MASS_ACTION_REASON_STOP_TRADING 1
#define ENUM_MASS_ACTION_REASON_EMERGENCY 2
#define ENUM_MASS_ACTION_REASON_SESSION_LOSS 6
#define ENUM_MASS_ACTION_REASON_DUPLICATE_SESSION_LOGIN 7
#define ENUM_MASS_ACTION_REASON_CLEARING_RISK_CONTROL 8
#define ENUM_MASS_ACTION_REASON_PRODUCT_STATE_HALT 105
#define ENUM_MASS_ACTION_REASON_PRODUCT_STATE_HOLIDAY 106
#define ENUM_MASS_ACTION_REASON_INSTRUMENT_SUSPENDED 107
#define ENUM_MASS_ACTION_REASON_VOLATILITY_INTERRUPTION 110
#define ENUM_MASS_ACTION_REASON_PRODUCTTEMPORARILYNOTTRADEABLE 111
#define ENUM_MASS_ACTION_REASON_INSTRUMENT_STOPPED 113
#define ENUM_MASS_ACTION_REASON_MASS_ACTION_REASON_MAXIMUM_VALUE 200
#define ENUM_MASS_ACTION_REASON_MASS_ACTION_REASON_MINIMUM_VALUE 0

/*
 * Mass Action Type Values
 */ 
#define ENUM_MASS_ACTION_TYPE_SUSPENDQUOTES 1
#define ENUM_MASS_ACTION_TYPE_RELEASEQUOTES 2
#define ENUM_MASS_ACTION_TYPE_MASS_ACTION_TYPE_MAXIMUM_VALUE 2
#define ENUM_MASS_ACTION_TYPE_MASS_ACTION_TYPE_MINIMUM_VALUE 1

/*
 * Match Sub Type Values
 */ 
#define ENUM_MATCH_SUB_TYPE_OPENING_AUCTION 1
#define ENUM_MATCH_SUB_TYPE_CLOSING_AUCTION 2
#define ENUM_MATCH_SUB_TYPE_INTRADAY_AUCTION 3
#define ENUM_MATCH_SUB_TYPE_CIRCUIT_BREAKER_AUCTION 4
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MAXIMUM_VALUE 4
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MINIMUM_VALUE 1

/*
 * Match Type Values
 */ 
#define ENUM_MATCH_TYPE_CONFIRMED_TRADE_REPORT 3
#define ENUM_MATCH_TYPE_AUTOMATCHINCOMING 4
#define ENUM_MATCH_TYPE_CROSS_AUCTION 5
#define ENUM_MATCH_TYPE_CALL_AUCTION 7
#define ENUM_MATCH_TYPE_SYSTEMATIC_INTERNALISER 9
#define ENUM_MATCH_TYPE_AUTOMATCHRESTING 11
#define ENUM_MATCH_TYPE_AUTOMATCHATMIDPOINT 12
#define ENUM_MATCH_TYPE_MATCH_TYPE_MAXIMUM_VALUE 12
#define ENUM_MATCH_TYPE_MATCH_TYPE_MINIMUM_VALUE 0

/*
 * Matching Engine Status Values
 */ 
#define ENUM_MATCHING_ENGINE_STATUS_UNAVAILABLE 0
#define ENUM_MATCHING_ENGINE_STATUS_AVAILABLE 1
#define ENUM_MATCHING_ENGINE_STATUS_MATCHING_ENGINE_STATUS_MAXIMUM_VALUE 1
#define ENUM_MATCHING_ENGINE_STATUS_MATCHING_ENGINE_STATUS_MINIMUM_VALUE 0

/*
 * Ord Status Values
 */ 
#define ENUM_ORD_STATUS_NEW '0'
#define ENUM_ORD_STATUS_PARTIALLYFILLED '1'
#define ENUM_ORD_STATUS_FILLED '2'
#define ENUM_ORD_STATUS_CANCELED '4'
#define ENUM_ORD_STATUS_PENDING_CANCEL '6'
#define ENUM_ORD_STATUS_SUSPENDED '9'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET 1
#define ENUM_ORD_TYPE_LIMIT 2
#define ENUM_ORD_TYPE_STOP 3
#define ENUM_ORD_TYPE_STOP_LIMIT 4
#define ENUM_ORD_TYPE_ORD_TYPE_MAXIMUM_VALUE 4
#define ENUM_ORD_TYPE_ORD_TYPE_MINIMUM_VALUE 1

/*
 * Order Attribute Liquidity Provision Values
 */ 
#define ENUM_ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_Y 1
#define ENUM_ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_N 0
#define ENUM_ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAXIMUM_VALUE 1
#define ENUM_ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MINIMUM_VALUE 0

/*
 * Order Category Values
 */ 
#define ENUM_ORDER_CATEGORY_ORDER '1'
#define ENUM_ORDER_CATEGORY_QUOTE '2'

/*
 * Order Routing Indicator Values
 */ 
#define ENUM_ORDER_ROUTING_INDICATOR_YES 'Y'
#define ENUM_ORDER_ROUTING_INDICATOR_NO 'N'

/*
 * Ownership Indicator Values
 */ 
#define ENUM_OWNERSHIP_INDICATOR_NO_CHANGEOF_OWNERSHIP 0
#define ENUM_OWNERSHIP_INDICATOR_CHANGETO_EXECUTING_TRADER 1
#define ENUM_OWNERSHIP_INDICATOR_OWNERSHIP_INDICATOR_MAXIMUM_VALUE 1
#define ENUM_OWNERSHIP_INDICATOR_OWNERSHIP_INDICATOR_MINIMUM_VALUE 0

/*
 * Party Action Type Values
 */ 
#define ENUM_PARTY_ACTION_TYPE_HALT_TRADING 1
#define ENUM_PARTY_ACTION_TYPE_REINSTATE 2
#define ENUM_PARTY_ACTION_TYPE_PARTY_ACTION_TYPE_MAXIMUM_VALUE 2
#define ENUM_PARTY_ACTION_TYPE_PARTY_ACTION_TYPE_MINIMUM_VALUE 1

/*
 * Party Detail Role Qualifier Values
 */ 
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_TRADER 10
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_HEAD_TRADER 11
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_SUPERVISOR 12
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_PARTY_DETAIL_ROLE_QUALIFIER_MAXIMUM_VALUE 12
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_PARTY_DETAIL_ROLE_QUALIFIER_MINIMUM_VALUE 10

/*
 * Party Detail Status Values
 */ 
#define ENUM_PARTY_DETAIL_STATUS_ACTIVE 0
#define ENUM_PARTY_DETAIL_STATUS_SUSPEND 1
#define ENUM_PARTY_DETAIL_STATUS_PARTY_DETAIL_STATUS_MAXIMUM_VALUE 1
#define ENUM_PARTY_DETAIL_STATUS_PARTY_DETAIL_STATUS_MINIMUM_VALUE 0

/*
 * Party Id Entering Firm Values
 */ 
#define ENUM_PARTY_ID_ENTERING_FIRM_PARTICIPANT 1
#define ENUM_PARTY_ID_ENTERING_FIRM_MARKET_SUPERVISION 2
#define ENUM_PARTY_ID_ENTERING_FIRM_PARTY_ID_ENTERING_FIRM_MAXIMUM_VALUE 2
#define ENUM_PARTY_ID_ENTERING_FIRM_PARTY_ID_ENTERING_FIRM_MINIMUM_VALUE 1

/*
 * Party Id Investment Decision Maker Qualifier Values
 */ 
#define ENUM_PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_ALGO 22
#define ENUM_PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_HUMAN 24
#define ENUM_PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAXIMUM_VALUE 24
#define ENUM_PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MINIMUM_VALUE 22

/*
 * Price Validity Check Type Values
 */ 
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_NONE 0
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_MANDATORY 2
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_PRICE_VALIDITY_CHECK_TYPE_MAXIMUM_VALUE 2
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_PRICE_VALIDITY_CHECK_TYPE_MINIMUM_VALUE 0

/*
 * Quote Entry Reject Reason Values
 */ 
#define ENUM_QUOTE_ENTRY_REJECT_REASON_UNKNOWN_SECURITY 1
#define ENUM_QUOTE_ENTRY_REJECT_REASON_DUPLICATE_QUOTE 6
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_PRICE 8
#define ENUM_QUOTE_ENTRY_REJECT_REASON_NO_REFERENCE_PRICE_AVAILABLE 16
#define ENUM_QUOTE_ENTRY_REJECT_REASON_NO_SINGLE_SIDED_QUOTES 100
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_QUOTING_MODEL 103
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_SIZE 106
#define ENUM_QUOTE_ENTRY_REJECT_REASON_BID_PRICE_NOT_REASONABLE 108
#define ENUM_QUOTE_ENTRY_REJECT_REASON_ASK_PRICE_NOT_REASONABLE 109
#define ENUM_QUOTE_ENTRY_REJECT_REASON_BID_PRICE_EXCEEDS_RANGE 110
#define ENUM_QUOTE_ENTRY_REJECT_REASON_ASK_PRICE_EXCEEDS_RANGE 111
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INSTRUMENT_STATE_FREEZE 115
#define ENUM_QUOTE_ENTRY_REJECT_REASON_DELETION_ALREADY_PENDING 116
#define ENUM_QUOTE_ENTRY_REJECT_REASON_PRE_TRADE_RISK_SESSION_LIMIT_EXCEEDED 117
#define ENUM_QUOTE_ENTRY_REJECT_REASON_PRE_TRADE_RISK_BU_LIMIT_EXCEEDED 118
#define ENUM_QUOTE_ENTRY_REJECT_REASON_BID_VALUE_EXCEEDS_LIMIT 120
#define ENUM_QUOTE_ENTRY_REJECT_REASON_ASK_VALUE_EXCEEDS_LIMIT 121
#define ENUM_QUOTE_ENTRY_REJECT_REASON_NOT_TRADEABLE_FOR_BUSINESS_UNIT 122
#define ENUM_QUOTE_ENTRY_REJECT_REASON_QUANTITY_LIMIT_EXCEEDED 125
#define ENUM_QUOTE_ENTRY_REJECT_REASON_VALUE_LIMIT_EXCEEDED 126
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_QUOTE_SPREAD 127
#define ENUM_QUOTE_ENTRY_REJECT_REASON_CANT_PROC_IN_CURR_INSTR_STATE 131
#define ENUM_QUOTE_ENTRY_REJECT_REASON_QUOTE_ENTRY_REJECT_REASON_MAXIMUM_VALUE 65535
#define ENUM_QUOTE_ENTRY_REJECT_REASON_QUOTE_ENTRY_REJECT_REASON_MINIMUM_VALUE 0

/*
 * Quote Entry Status Values
 */ 
#define ENUM_QUOTE_ENTRY_STATUS_ACCEPTED 0
#define ENUM_QUOTE_ENTRY_STATUS_REJECTED 5
#define ENUM_QUOTE_ENTRY_STATUS_REMOVEDAND_REJECTED 6
#define ENUM_QUOTE_ENTRY_STATUS_PENDING 10
#define ENUM_QUOTE_ENTRY_STATUS_QUOTE_ENTRY_STATUS_MAXIMUM_VALUE 100
#define ENUM_QUOTE_ENTRY_STATUS_QUOTE_ENTRY_STATUS_MINIMUM_VALUE 0

/*
 * Quote Event Liquidity Ind Values
 */ 
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_ADDED_LIQUIDITY 1
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_REMOVED_LIQUIDITY 2
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_QUOTE_EVENT_LIQUIDITY_IND_MAXIMUM_VALUE 2
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_QUOTE_EVENT_LIQUIDITY_IND_MINIMUM_VALUE 1

/*
 * Quote Event Reason Values
 */ 
#define ENUM_QUOTE_EVENT_REASON_PENDINGCANCELLATIONEXECUTED 14
#define ENUM_QUOTE_EVENT_REASON_INVALIDPRICE 15
#define ENUM_QUOTE_EVENT_REASON_CROSSREJECTED 16
#define ENUM_QUOTE_EVENT_REASON_QUOTE_EVENT_REASON_MAXIMUM_VALUE 17
#define ENUM_QUOTE_EVENT_REASON_QUOTE_EVENT_REASON_MINIMUM_VALUE 14

/*
 * Quote Event Side Values
 */ 
#define ENUM_QUOTE_EVENT_SIDE_BUY 1
#define ENUM_QUOTE_EVENT_SIDE_SELL 2
#define ENUM_QUOTE_EVENT_SIDE_QUOTE_EVENT_SIDE_MAXIMUM_VALUE 2
#define ENUM_QUOTE_EVENT_SIDE_QUOTE_EVENT_SIDE_MINIMUM_VALUE 1

/*
 * Quote Event Type Values
 */ 
#define ENUM_QUOTE_EVENT_TYPE_MODIFIEDQUOTESIDE 2
#define ENUM_QUOTE_EVENT_TYPE_REMOVEDQUOTESIDE 3
#define ENUM_QUOTE_EVENT_TYPE_PARTIALLYFILLED 4
#define ENUM_QUOTE_EVENT_TYPE_FILLED 5
#define ENUM_QUOTE_EVENT_TYPE_QUOTE_EVENT_TYPE_MAXIMUM_VALUE 5
#define ENUM_QUOTE_EVENT_TYPE_QUOTE_EVENT_TYPE_MINIMUM_VALUE 0

/*
 * Quote Size Type Values
 */ 
#define ENUM_QUOTE_SIZE_TYPE_TOTAL_SIZE 1
#define ENUM_QUOTE_SIZE_TYPE_OPEN_SIZE 2
#define ENUM_QUOTE_SIZE_TYPE_QUOTE_SIZE_TYPE_MAXIMUM_VALUE 2
#define ENUM_QUOTE_SIZE_TYPE_QUOTE_SIZE_TYPE_MINIMUM_VALUE 1

/*
 * Ref Appl Id Values
 */ 
#define ENUM_REF_APPL_ID_TRADE 1
#define ENUM_REF_APPL_ID_NEWS 2
#define ENUM_REF_APPL_ID_SERVICEAVAILABILITY 3
#define ENUM_REF_APPL_ID_SESSIONDATA 4
#define ENUM_REF_APPL_ID_LISTENERDATA 5
#define ENUM_REF_APPL_ID_RISK_CONTROL 6
#define ENUM_REF_APPL_ID_REF_APPL_ID_MAXIMUM_VALUE 10
#define ENUM_REF_APPL_ID_REF_APPL_ID_MINIMUM_VALUE 0

/*
 * Requesting Party Id Entering Firm Values
 */ 
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_PARTICIPANT 1
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_MARKET_SUPERVISION 2
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_REQUESTING_PARTY_ID_ENTERING_FIRM_MAXIMUM_VALUE 2
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_REQUESTING_PARTY_ID_ENTERING_FIRM_MINIMUM_VALUE 1

/*
 * Requesting Party Id Executing System Values
 */ 
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_T7 2
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_MAXIMUM_VALUE 4294967294
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_MINIMUM_VALUE 0

/*
 * Rfq Publish Indicator Values
 */ 
#define ENUM_RFQ_PUBLISH_INDICATOR_MARKET_DATA 1
#define ENUM_RFQ_PUBLISH_INDICATOR_DESIGNATED_SPONSOR 2
#define ENUM_RFQ_PUBLISH_INDICATOR_MARKET_DATAAND_DESIGNATED_SPONSOR 3
#define ENUM_RFQ_PUBLISH_INDICATOR_MARKET_MAKERAND_DESIGNATED_SPONSOR 4
#define ENUM_RFQ_PUBLISH_INDICATOR_MARKET_DATAAND_MARKET_MAKERAND_DESIGNATED_SPONSOR 5
#define ENUM_RFQ_PUBLISH_INDICATOR_RFQ_PUBLISH_INDICATOR_MAXIMUM_VALUE 5
#define ENUM_RFQ_PUBLISH_INDICATOR_RFQ_PUBLISH_INDICATOR_MINIMUM_VALUE 1

/*
 * Rfq Requester Disclosure Instruction Values
 */ 
#define ENUM_RFQ_REQUESTER_DISCLOSURE_INSTRUCTION_NO 0
#define ENUM_RFQ_REQUESTER_DISCLOSURE_INSTRUCTION_YES 1
#define ENUM_RFQ_REQUESTER_DISCLOSURE_INSTRUCTION_RFQ_REQUESTER_DISCLOSURE_INSTRUCTION_MAXIMUM_VALUE 1
#define ENUM_RFQ_REQUESTER_DISCLOSURE_INSTRUCTION_RFQ_REQUESTER_DISCLOSURE_INSTRUCTION_MINIMUM_VALUE 0

/*
 * Secondary Gateway Status Values
 */ 
#define ENUM_SECONDARY_GATEWAY_STATUS_STANDBY 0
#define ENUM_SECONDARY_GATEWAY_STATUS_ACTIVE 1
#define ENUM_SECONDARY_GATEWAY_STATUS_SECONDARY_GATEWAY_STATUS_MAXIMUM_VALUE 1
#define ENUM_SECONDARY_GATEWAY_STATUS_SECONDARY_GATEWAY_STATUS_MINIMUM_VALUE 0

/*
 * Session Mode Values
 */ 
#define ENUM_SESSION_MODE_HF 1
#define ENUM_SESSION_MODE_LF 2
#define ENUM_SESSION_MODE_GUI 3
#define ENUM_SESSION_MODE_SESSION_MODE_MAXIMUM_VALUE 3
#define ENUM_SESSION_MODE_SESSION_MODE_MINIMUM_VALUE 1

/*
 * Session Reject Reason Values
 */ 
#define ENUM_SESSION_REJECT_REASON_REQUIRED_TAG_MISSING 1
#define ENUM_SESSION_REJECT_REASON_VALUEISINCORRECT 5
#define ENUM_SESSION_REJECT_REASON_DECRYPTIONPROBLEM 7
#define ENUM_SESSION_REJECT_REASON_INVALID_MSG_ID 11
#define ENUM_SESSION_REJECT_REASON_INCORRECT_NUM_IN_GROUPCOUNT 16
#define ENUM_SESSION_REJECT_REASON_OTHER 99
#define ENUM_SESSION_REJECT_REASON_THROTTLE_LIMIT_EXCEEDED 100
#define ENUM_SESSION_REJECT_REASON_EXPOSURE_LIMIT_EXCEEDED 101
#define ENUM_SESSION_REJECT_REASON_SERVICE_TEMPORARILY_NOT_AVAILABLE 102
#define ENUM_SESSION_REJECT_REASON_SERVICE_NOT_AVAILABLE 103
#define ENUM_SESSION_REJECT_REASON_RESULT_OF_TRANSACTION_UNKNOWN 104
#define ENUM_SESSION_REJECT_REASON_OUTBOUNDCONVERSIONERROR 105
#define ENUM_SESSION_REJECT_REASON_HEARTBEAT_VIOLATION 152
#define ENUM_SESSION_REJECT_REASON_INTERNALTECHNICALERROR 200
#define ENUM_SESSION_REJECT_REASON_VALIDATION_ERROR 210
#define ENUM_SESSION_REJECT_REASON_USER_ALREADY_LOGGED_IN 211
#define ENUM_SESSION_REJECT_REASON_SESSION_GATEWAY_ASSIGNMENT_EXPIRED 214
#define ENUM_SESSION_REJECT_REASON_GATEWAY_NOT_RESERVED_TO_SESSION 215
#define ENUM_SESSION_REJECT_REASON_GATEWAY_IS_STANDBY 216
#define ENUM_SESSION_REJECT_REASON_SESSION_LOGIN_LIMIT_REACHED 217
#define ENUM_SESSION_REJECT_REASON_PARTITION_NOT_REACHABLE_BY_HF_GATEWAY 218
#define ENUM_SESSION_REJECT_REASON_PARTITION_NOT_REACHABLE_BY_PS_GATEWAY 219
#define ENUM_SESSION_REJECT_REASON_NO_GATEWAY_AVAILABLE 222
#define ENUM_SESSION_REJECT_REASON_USER_ENTITLEMENT_DATA_TIMEOUT 223
#define ENUM_SESSION_REJECT_REASON_ORDER_NOT_FOUND 10000
#define ENUM_SESSION_REJECT_REASON_PRICE_NOT_REASONABLE 10001
#define ENUM_SESSION_REJECT_REASON_CLIENT_ORDER_ID_NOT_UNIQUE 10002
#define ENUM_SESSION_REJECT_REASON_QUOTE_ACTIVATION_IN_PROGRESS 10003
#define ENUM_SESSION_REJECT_REASON_BU_BOOK_ORDER_LIMIT_EXCEEDED 10004
#define ENUM_SESSION_REJECT_REASON_SESSION_BOOK_ORDER_LIMIT_EXCEEDED 10005
#define ENUM_SESSION_REJECT_REASON_STOP_BID_PRICE_NOT_REASONABLE 10006
#define ENUM_SESSION_REJECT_REASON_STOP_ASK_PRICE_NOT_REASONABLE 10007
#define ENUM_SESSION_REJECT_REASON_ORDER_NOT_EXECUTABLE_WITHIN_VALIDITY 10008
#define ENUM_SESSION_REJECT_REASON_INVALID_TRADING_RESTRICTION_FOR_INSTRUMENT_STATE 10009
#define ENUM_SESSION_REJECT_REASON_TRANSACTION_NOT_ALLOWED_IN_CURRENT_STATE 10011
#define ENUM_SESSION_REJECT_REASON_SESSION_REJECT_REASON_MAXIMUM_VALUE 4294967294
#define ENUM_SESSION_REJECT_REASON_SESSION_REJECT_REASON_MINIMUM_VALUE 0

/*
 * Session Status Values
 */ 
#define ENUM_SESSION_STATUS_ACTIVE 0
#define ENUM_SESSION_STATUS_LOGOUT 4
#define ENUM_SESSION_STATUS_SESSION_STATUS_MAXIMUM_VALUE 4
#define ENUM_SESSION_STATUS_SESSION_STATUS_MINIMUM_VALUE 0

/*
 * Session Sub Mode Values
 */ 
#define ENUM_SESSION_SUB_MODE_REGULARTRADINGSESSION 0
#define ENUM_SESSION_SUB_MODE_FI_XTRADINGSESSION 1
#define ENUM_SESSION_SUB_MODE_REGULAR_BACK_OFFICESESSION 2
#define ENUM_SESSION_SUB_MODE_SESSION_SUB_MODE_MAXIMUM_VALUE 2
#define ENUM_SESSION_SUB_MODE_SESSION_SUB_MODE_MINIMUM_VALUE 0

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 1
#define ENUM_SIDE_SELL 2
#define ENUM_SIDE_SIDE_MAXIMUM_VALUE 2
#define ENUM_SIDE_SIDE_MINIMUM_VALUE 1

/*
 * Side Liquidity Ind Values
 */ 
#define ENUM_SIDE_LIQUIDITY_IND_ADDED_LIQUIDITY 1
#define ENUM_SIDE_LIQUIDITY_IND_REMOVED_LIQUIDITY 2
#define ENUM_SIDE_LIQUIDITY_IND_AUCTION 4
#define ENUM_SIDE_LIQUIDITY_IND_SIDE_LIQUIDITY_IND_MAXIMUM_VALUE 4
#define ENUM_SIDE_LIQUIDITY_IND_SIDE_LIQUIDITY_IND_MINIMUM_VALUE 1

/*
 * Stop Px Indicator Values
 */ 
#define ENUM_STOP_PX_INDICATOR_DONOTOVERWRITE 0
#define ENUM_STOP_PX_INDICATOR_OVERWRITE 1
#define ENUM_STOP_PX_INDICATOR_STOP_PX_INDICATOR_MAXIMUM_VALUE 1
#define ENUM_STOP_PX_INDICATOR_STOP_PX_INDICATOR_MINIMUM_VALUE 0

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY 0
#define ENUM_TIME_IN_FORCE_GTC 1
#define ENUM_TIME_IN_FORCE_IOC 3
#define ENUM_TIME_IN_FORCE_FOK 4
#define ENUM_TIME_IN_FORCE_GTX 5
#define ENUM_TIME_IN_FORCE_GTD 6
#define ENUM_TIME_IN_FORCE_TIME_IN_FORCE_MAXIMUM_VALUE 6
#define ENUM_TIME_IN_FORCE_TIME_IN_FORCE_MINIMUM_VALUE 0

/*
 * Trad Ses Event Values
 */ 
#define ENUM_TRAD_SES_EVENT_STARTOF_SERVICE 101
#define ENUM_TRAD_SES_EVENT_MARKET_RESET 102
#define ENUM_TRAD_SES_EVENT_ENDOF_RESTATEMENT 103
#define ENUM_TRAD_SES_EVENT_ENDOF_DAY_SERVICE 104
#define ENUM_TRAD_SES_EVENT_SERVICE_RESUMED 105
#define ENUM_TRAD_SES_EVENT_TRAD_SES_EVENT_MAXIMUM_VALUE 105
#define ENUM_TRAD_SES_EVENT_TRAD_SES_EVENT_MINIMUM_VALUE 100

/*
 * Trad Ses Mode Values
 */ 
#define ENUM_TRAD_SES_MODE_TESTING 1
#define ENUM_TRAD_SES_MODE_SIMULATED 2
#define ENUM_TRAD_SES_MODE_PRODUCTION 3
#define ENUM_TRAD_SES_MODE_ACCEPTANCE 4
#define ENUM_TRAD_SES_MODE_TRAD_SES_MODE_MAXIMUM_VALUE 4
#define ENUM_TRAD_SES_MODE_TRAD_SES_MODE_MINIMUM_VALUE 1

/*
 * Trade Manager Status Values
 */ 
#define ENUM_TRADE_MANAGER_STATUS_UNAVAILABLE 0
#define ENUM_TRADE_MANAGER_STATUS_AVAILABLE 1
#define ENUM_TRADE_MANAGER_STATUS_TRADE_MANAGER_STATUS_MAXIMUM_VALUE 1
#define ENUM_TRADE_MANAGER_STATUS_TRADE_MANAGER_STATUS_MINIMUM_VALUE 0

/*
 * Trade Report Type Values
 */ 
#define ENUM_TRADE_REPORT_TYPE_SUBMIT 0
#define ENUM_TRADE_REPORT_TYPE_TRADE_BREAK 7
#define ENUM_TRADE_REPORT_TYPE_TRADE_REPORT_TYPE_MAXIMUM_VALUE 13
#define ENUM_TRADE_REPORT_TYPE_TRADE_REPORT_TYPE_MINIMUM_VALUE 0

/*
 * Trading Capacity Values
 */ 
#define ENUM_TRADING_CAPACITY_CUSTOMER 1
#define ENUM_TRADING_CAPACITY_PRINCIPAL 5
#define ENUM_TRADING_CAPACITY_MARKET_MAKER 6
#define ENUM_TRADING_CAPACITY_SYSTEMATIC_INTERNALISER 8
#define ENUM_TRADING_CAPACITY_RISKLESS_PRINCIPAL 9
#define ENUM_TRADING_CAPACITY_TRADING_CAPACITY_MAXIMUM_VALUE 9
#define ENUM_TRADING_CAPACITY_TRADING_CAPACITY_MINIMUM_VALUE 1

/*
 * Trading Session Sub Id Values
 */ 
#define ENUM_TRADING_SESSION_SUB_ID_OPENINGAUCTION 2
#define ENUM_TRADING_SESSION_SUB_ID_CLOSINGAUCTION 4
#define ENUM_TRADING_SESSION_SUB_ID_ANY_AUCTION 8
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MAXIMUM_VALUE 8
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MINIMUM_VALUE 1

/*
 * Transfer Reason Values
 */ 
#define ENUM_TRANSFER_REASON_OWNER 1
#define ENUM_TRANSFER_REASON_CLEARER 2
#define ENUM_TRANSFER_REASON_TRANSFER_REASON_MAXIMUM_VALUE 5
#define ENUM_TRANSFER_REASON_TRANSFER_REASON_MINIMUM_VALUE 1

/*
 * Triggered Values
 */ 
#define ENUM_TRIGGERED_NOTTRIGGERED 0
#define ENUM_TRIGGERED_TRIGGERED_STOP 1
#define ENUM_TRIGGERED_TRIGGERED_OCO 2
#define ENUM_TRIGGERED_TRIGGERED_MAXIMUM_VALUE 2
#define ENUM_TRIGGERED_TRIGGERED_MINIMUM_VALUE 0

/*
 * User Status Values
 */ 
#define ENUM_USER_STATUS_USERFORCEDLOGOUT 7
#define ENUM_USER_STATUS_USERSTOPPED 10
#define ENUM_USER_STATUS_USERRELEASED 11
#define ENUM_USER_STATUS_USER_STATUS_MAXIMUM_VALUE 11
#define ENUM_USER_STATUS_USER_STATUS_MINIMUM_VALUE 7

/*
 * Value Check Type Quantity Values
 */ 
#define ENUM_VALUE_CHECK_TYPE_QUANTITY_DONOTCHECK 0
#define ENUM_VALUE_CHECK_TYPE_QUANTITY_CHECK 1
#define ENUM_VALUE_CHECK_TYPE_QUANTITY_VALUE_CHECK_TYPE_QUANTITY_MAXIMUM_VALUE 1
#define ENUM_VALUE_CHECK_TYPE_QUANTITY_VALUE_CHECK_TYPE_QUANTITY_MINIMUM_VALUE 0

/*
 * Value Check Type Value Values
 */ 
#define ENUM_VALUE_CHECK_TYPE_VALUE_DONOTCHECK 0
#define ENUM_VALUE_CHECK_TYPE_VALUE_CHECK 1
#define ENUM_VALUE_CHECK_TYPE_VALUE_VALUE_CHECK_TYPE_VALUE_MAXIMUM_VALUE 1
#define ENUM_VALUE_CHECK_TYPE_VALUE_VALUE_CHECK_TYPE_VALUE_MINIMUM_VALUE 0


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Response Header Comp
 */ 
typedef struct {
    uint64_t RequestTime;
    uint64_t SendingTime;
    uint32_t MsgSeqNum;
    char Pad4[4];
} ResponseHeaderCompT;

/*
 * Structure: User Logout Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
} UserLogoutResponseT;

/*
 * Structure: Request Header Comp
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    uint32_t SenderSubId;
} RequestHeaderCompT;

/*
 * Structure: User Logout Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint32_t Username;
    char Pad4[4];
} UserLogoutRequestT;

/*
 * Structure: User Login Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
} UserLoginResponseT;

/*
 * Structure: User Login Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint32_t Username;
    char Password[32];
    char Pad4[4];
} UserLoginRequestT;

/*
 * Structure: Unsubscribe Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
} UnsubscribeResponseT;

/*
 * Structure: Unsubscribe Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint32_t RefApplSubId;
    char Pad4[4];
} UnsubscribeRequestT;

/*
 * Structure: Rbc Header Me Comp
 */ 
typedef struct {
    uint64_t TrdRegTsTimeOut;
    uint64_t NotificationIn;
    uint64_t SendingTime;
    uint32_t ApplSubId;
    uint16_t PartitionId;
    char ApplMsgId[16];
    uint8_t ApplId;
    uint8_t ApplResendFlag;
    uint8_t LastFragment;
    char Pad7[7];
} RbcHeaderMeCompT;

/*
 * Structure: Trailing Stop Update Notification
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint64_t StopPx;
    uint32_t OrderIdSfx;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    uint16_t ExecRestatementReason;
    char OrdStatus;
    char ExecType;
    uint8_t Side;
    char FixClOrdId[20];
    char Pad3[3];
} TrailingStopUpdateNotificationT;

/*
 * Structure: Trading Session Status Broadcast
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    int32_t MarketSegmentId;
    uint32_t TradeDate;
    uint8_t TradSesEvent;
    char RefApplLastMsgId[16];
    char Pad7[7];
} TradingSessionStatusBroadcastT;

/*
 * Structure: Rbc Header Comp
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t ApplSeqNum;
    uint32_t ApplSubId;
    uint16_t PartitionId;
    uint8_t ApplResendFlag;
    uint8_t ApplId;
    uint8_t LastFragment;
    char Pad7[7];
} RbcHeaderCompT;

/*
 * Structure: Trade Broadcast
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderCompT RbcHeaderComp;
    int64_t SecurityId;
    uint64_t Price;
    uint64_t LastPx;
    uint64_t SettlCurrAmt;
    uint64_t SettlCurrFxRate;
    uint64_t TransactTime;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint32_t TradeId;
    uint32_t OrigTradeId;
    uint32_t RootPartyIdExecutingUnit;
    uint32_t RootPartyIdSessionId;
    uint32_t RootPartyIdExecutingTrader;
    uint32_t RootPartyIdSettlementUnit;
    uint32_t RootPartyIdClearingUnit;
    uint32_t RootPartyIdContraUnit;
    uint32_t RootPartyIdContraSettlementUnit;
    uint32_t OrderIdSfx;
    int32_t CumQty;
    int32_t LeavesQty;
    int32_t MarketSegmentId;
    int32_t LastQty;
    uint32_t SideTradeId;
    uint32_t SideTradeReportId;
    uint32_t TradeNumber;
    uint32_t MatchDate;
    uint32_t SettlDate;
    uint32_t TrdMatchId;
    uint16_t LastMkt;
    uint8_t TradeReportType;
    uint8_t TransferReason;
    uint8_t MatchType;
    uint8_t MatchSubType;
    uint8_t Side;
    uint8_t SideLiquidityInd;
    uint8_t DeliveryType;
    uint8_t TradingCapacity;
    char Account[2];
    char SettlCurrency[3];
    char Currency[3];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText4[16];
    char OrderCategory;
    uint8_t OrdType;
    char RootPartyExecutingFirm[5];
    char RootPartyExecutingTrader[6];
    char RootPartyClearingFirm[5];
    char RootPartyExecutingFirmKvNumber[4];
    char RootPartySettlementAccount[35];
    char RootPartySettlementLocation[3];
    char RootPartySettlementFirm[5];
    char RootPartyContraFirm[5];
    char RootPartyContraSettlementFirm[5];
    char RootPartyContraFirmKvNumber[4];
    char RootPartyContraSettlementAccount[35];
    char RootPartyContraSettlementLocation[3];
    char Pad1[1];
} TradeBroadcastT;

/*
 * Structure: Notif Header Comp
 */ 
typedef struct {
    uint64_t SendingTime;
} NotifHeaderCompT;

/*
 * Structure: Throttle Update Notification
 */ 
typedef struct {
    char Pad2[2];
    NotifHeaderCompT NotifHeaderComp;
    int64_t ThrottleTimeInterval;
    uint32_t ThrottleNoMsgs;
    uint32_t ThrottleDisconnectLimit;
} ThrottleUpdateNotificationT;

/*
 * Structure: Tm Trading Session Status Broadcast
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderCompT RbcHeaderComp;
    uint8_t TradSesEvent;
    char Pad7[7];
} TmTradingSessionStatusBroadcastT;

/*
 * Structure: Subscribe Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
    uint32_t ApplSubId;
    char Pad4[4];
} SubscribeResponseT;

/*
 * Structure: Subscribe Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint32_t SubscriptionScope;
    uint8_t RefApplId;
    char Pad3[3];
} SubscribeRequestT;

/*
 * Structure: Nrbc Header Comp
 */ 
typedef struct {
    uint64_t SendingTime;
    uint32_t ApplSubId;
    uint8_t ApplId;
    uint8_t LastFragment;
    char Pad2[2];
} NrbcHeaderCompT;

/*
 * Structure: Service Availability Broadcast
 */ 
typedef struct {
    char Pad2[2];
    NrbcHeaderCompT NrbcHeaderComp;
    uint32_t MatchingEngineTradeDate;
    uint32_t TradeManagerTradeDate;
    uint32_t ApplSeqTradeDate;
    uint16_t PartitionId;
    uint8_t MatchingEngineStatus;
    uint8_t TradeManagerStatus;
    uint8_t ApplSeqStatus;
    char Pad7[7];
} ServiceAvailabilityBroadcastT;

/*
 * Structure: Retransmit Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
    uint64_t ApplEndSeqNum;
    uint64_t RefApplLastSeqNum;
    uint16_t ApplTotalMessageCount;
    char Pad6[6];
} RetransmitResponseT;

/*
 * Structure: Retransmit Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint64_t ApplBegSeqNum;
    uint64_t ApplEndSeqNum;
    uint16_t PartitionId;
    uint8_t RefApplId;
    char Pad5[5];
} RetransmitRequestT;

/*
 * Structure: Retransmit Me Message Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
    uint16_t ApplTotalMessageCount;
    char ApplEndMsgId[16];
    char RefApplLastMsgId[16];
    char Pad6[6];
} RetransmitMeMessageResponseT;

/*
 * Structure: Retransmit Me Message Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint32_t SubscriptionScope;
    uint16_t PartitionId;
    uint8_t RefApplId;
    char ApplBegMsgId[16];
    char ApplEndMsgId[16];
    char Pad1[1];
} RetransmitMeMessageRequestT;

/*
 * Structure: Nr Response Header Me Comp
 */ 
typedef struct {
    uint64_t RequestTime;
    uint64_t RequestOut;
    uint64_t TrdRegTsTimeIn;
    uint64_t TrdRegTsTimeOut;
    uint64_t ResponseIn;
    uint64_t SendingTime;
    uint32_t MsgSeqNum;
    uint8_t LastFragment;
    char Pad3[3];
} NrResponseHeaderMeCompT;

/*
 * Structure: Reject
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint32_t SessionRejectReason;
    uint16_t VarTextLen;
    uint8_t SessionStatus;
    char Pad1[1];
} RejectT;

/*
 * Structure: Rfq Response
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t ExecId;
} RfqResponseT;

/*
 * Structure: Rfq Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    int64_t SecurityId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    uint8_t RfqPublishIndicator;
    uint8_t RfqRequesterDisclosureInstruction;
    uint8_t Side;
    char Pad5[5];
} RfqRequestT;

/*
 * Structure: Rfq Broadcast
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    int64_t SecurityId;
    uint64_t ExecId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    uint8_t Side;
    char PartyExecutingFirm[5];
    char Pad2[2];
} RfqBroadcastT;

/*
 * Structure: Quote Event Grp Comp
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t QuoteEventPx;
    uint64_t QuoteMsgId;
    uint32_t QuoteEventMatchId;
    int32_t QuoteEventExecId;
    int32_t QuoteEventQty;
    uint8_t QuoteEventType;
    uint8_t QuoteEventSide;
    uint8_t QuoteEventLiquidityInd;
    uint8_t QuoteEventReason;
} QuoteEventGrpCompT;

/*
 * Structure: Quote Execution Report
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t ExecId;
    int32_t MarketSegmentId;
    uint8_t NoQuoteEvents;
    char Pad3[3];
} QuoteExecutionReportT;

/*
 * Structure: Not Affected Securities Grp Comp
 */ 
typedef struct {
    uint64_t NotAffectedSecurityId;
} NotAffectedSecuritiesGrpCompT;

/*
 * Structure: Quote Activation Response
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t MassActionReportId;
    uint16_t NoNotAffectedSecurities;
    char Pad6[6];
} QuoteActivationResponseT;

/*
 * Structure: Quote Activation Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint64_t PartyIdInvestmentDecisionMaker;
    uint64_t ExecutingTrader;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint8_t MassActionType;
    uint8_t PartyIdInvestmentDecisionMakerQualifier;
    uint8_t ExecutingTraderQualifier;
    char Pad5[5];
} QuoteActivationRequestT;

/*
 * Structure: Quote Activation Notification
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t MassActionReportId;
    int32_t MarketSegmentId;
    uint32_t PartyIdEnteringTrader;
    uint16_t NoNotAffectedSecurities;
    uint8_t PartyIdEnteringFirm;
    uint8_t MassActionType;
    uint8_t MassActionReason;
    char Pad3[3];
} QuoteActivationNotificationT;

/*
 * Structure: Party Entitlements Update Report
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderCompT RbcHeaderComp;
    uint64_t TransactTime;
    uint32_t TradeDate;
    uint32_t PartyDetailIdExecutingUnit;
    uint32_t RequestingPartyIdExecutingSystem;
    uint16_t MarketId;
    char ListUpdateAction;
    char RequestingPartyEnteringFirm[9];
    char RequestingPartyClearingFirm[9];
    uint8_t PartyDetailStatus;
    char Pad6[6];
} PartyEntitlementsUpdateReportT;

/*
 * Structure: Party Action Report
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderCompT RbcHeaderComp;
    uint64_t TransactTime;
    uint32_t TradeDate;
    uint32_t RequestingPartyIdExecutingTrader;
    uint32_t PartyIdExecutingUnit;
    uint32_t PartyIdExecutingTrader;
    uint32_t RequestingPartyIdExecutingSystem;
    uint16_t MarketId;
    uint8_t PartyActionType;
    uint8_t RequestingPartyIdEnteringFirm;
} PartyActionReportT;

/*
 * Structure: Fills Grp Comp
 */ 
typedef struct {
    uint64_t FillPx;
    int32_t FillQty;
    uint32_t FillMatchId;
    int32_t FillExecId;
    uint8_t FillLiquidityInd;
    char Pad3[3];
} FillsGrpCompT;

/*
 * Structure: Response Header Me Comp
 */ 
typedef struct {
    uint64_t RequestTime;
    uint64_t RequestOut;
    uint64_t TrdRegTsTimeIn;
    uint64_t TrdRegTsTimeOut;
    uint64_t ResponseIn;
    uint64_t SendingTime;
    uint32_t MsgSeqNum;
    uint16_t PartitionId;
    uint8_t ApplId;
    char ApplMsgId[16];
    uint8_t LastFragment;
} ResponseHeaderMeCompT;

/*
 * Structure: Order Exec Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderMeCompT ResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint64_t TrdRegTsEntryTime;
    uint64_t TrdRegTsTimePriority;
    int32_t MarketSegmentId;
    uint32_t OrderIdSfx;
    int32_t LeavesQty;
    int32_t CumQty;
    int32_t CxlQty;
    int32_t DisplayQty;
    uint16_t ExecRestatementReason;
    uint8_t Side;
    char OrdStatus;
    char ExecType;
    uint8_t MatchType;
    uint8_t Triggered;
    uint8_t CrossedIndicator;
    uint8_t NoFills;
    char Pad7[7];
} OrderExecResponseT;

/*
 * Structure: Order Exec Report Broadcast
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint64_t TrdRegTsEntryTime;
    uint64_t TrdRegTsTimePriority;
    uint64_t Price;
    uint64_t StopPx;
    uint64_t VolumeDiscoveryPrice;
    uint64_t PegOffsetValueAbs;
    uint64_t PegOffsetValuePct;
    int32_t MarketSegmentId;
    uint32_t OrderIdSfx;
    int32_t LeavesQty;
    int32_t CumQty;
    int32_t CxlQty;
    int32_t OrderQty;
    int32_t DisplayQty;
    int32_t DisplayLowQty;
    int32_t DisplayHighQty;
    uint32_t ExpireDate;
    uint32_t MatchInstCrossId;
    uint32_t PartyIdExecutingUnit;
    uint32_t PartyIdSessionId;
    uint32_t PartyIdExecutingTrader;
    uint32_t PartyIdEnteringTrader;
    uint16_t ExecRestatementReason;
    uint8_t PartyIdEnteringFirm;
    char OrdStatus;
    char ExecType;
    uint8_t MatchType;
    uint8_t Side;
    uint8_t OrdType;
    uint8_t TradingCapacity;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingSessionSubId;
    uint8_t ApplSeqIndicator;
    uint8_t ExDestinationType;
    char FreeText1[12];
    char FreeText2[12];
    char FreeText4[16];
    char FixClOrdId[20];
    uint8_t NoFills;
    uint8_t Triggered;
    uint8_t CrossedIndicator;
    char Pad7[7];
} OrderExecReportBroadcastT;

/*
 * Structure: Order Exec Notification
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    int32_t MarketSegmentId;
    uint32_t OrderIdSfx;
    int32_t LeavesQty;
    int32_t CumQty;
    int32_t CxlQty;
    int32_t DisplayQty;
    uint16_t ExecRestatementReason;
    uint8_t Side;
    char OrdStatus;
    char ExecType;
    uint8_t MatchType;
    uint8_t Triggered;
    uint8_t CrossedIndicator;
    char FixClOrdId[20];
    uint8_t NoFills;
    char Pad3[3];
} OrderExecNotificationT;

/*
 * Structure: News Broadcast
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderCompT RbcHeaderComp;
    uint64_t OrigTime;
    uint16_t VarTextLen;
    char Headline[256];
    char Pad6[6];
} NewsBroadcastT;

/*
 * Structure: New Order Single Short Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    int64_t SecurityId;
    uint64_t Price;
    uint64_t ClOrdId;
    uint64_t PartyIdClientId;
    uint64_t PartyIdInvestmentDecisionMaker;
    uint64_t ExecutingTrader;
    int32_t OrderQty;
    uint32_t MatchInstCrossId;
    uint16_t EnrichmentRuleId;
    uint8_t Side;
    uint8_t ApplSeqIndicator;
    uint8_t PriceValidityCheckType;
    uint8_t ValueCheckTypeValue;
    uint8_t ValueCheckTypeQuantity;
    uint8_t OrderAttributeLiquidityProvision;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingCapacity;
    uint8_t ExDestinationType;
    uint8_t PartyIdInvestmentDecisionMakerQualifier;
    uint8_t ExecutingTraderQualifier;
    char Pad2[2];
} NewOrderSingleShortRequestT;

/*
 * Structure: New Order Single Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint64_t Price;
    uint64_t StopPx;
    uint64_t VolumeDiscoveryPrice;
    uint64_t PegOffsetValueAbs;
    uint64_t PegOffsetValuePct;
    uint64_t ClOrdId;
    int64_t SecurityId;
    uint64_t PartyIdClientId;
    uint64_t PartyIdInvestmentDecisionMaker;
    uint64_t ExecutingTrader;
    int32_t OrderQty;
    int32_t DisplayQty;
    int32_t DisplayLowQty;
    int32_t DisplayHighQty;
    uint32_t ExpireDate;
    int32_t MarketSegmentId;
    uint32_t MatchInstCrossId;
    uint8_t ApplSeqIndicator;
    uint8_t Side;
    uint8_t OrdType;
    uint8_t PriceValidityCheckType;
    uint8_t ValueCheckTypeValue;
    uint8_t ValueCheckTypeQuantity;
    uint8_t OrderAttributeLiquidityProvision;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingSessionSubId;
    uint8_t TradingCapacity;
    uint8_t ExDestinationType;
    uint8_t PartyIdInvestmentDecisionMakerQualifier;
    uint8_t ExecutingTraderQualifier;
    char FreeText1[12];
    char FreeText2[12];
    char FreeText4[16];
    char FixClOrdId[20];
    char Pad2[2];
} NewOrderSingleRequestT;

/*
 * Structure: New Order Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderMeCompT ResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint64_t TrdRegTsEntryTime;
    uint64_t TrdRegTsTimePriority;
    uint32_t OrderIdSfx;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t CrossedIndicator;
    uint8_t Triggered;
    char Pad6[6];
} NewOrderResponseT;

/*
 * Structure: New Order Nr Response
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint32_t OrderIdSfx;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t CrossedIndicator;
    uint8_t Triggered;
    char Pad6[6];
} NewOrderNrResponseT;

/*
 * Structure: Modify Order Single Short Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t Price;
    uint64_t PartyIdClientId;
    uint64_t PartyIdInvestmentDecisionMaker;
    uint64_t ExecutingTrader;
    int32_t OrderQty;
    uint32_t MatchInstCrossId;
    uint16_t EnrichmentRuleId;
    uint8_t Side;
    uint8_t PriceValidityCheckType;
    uint8_t ValueCheckTypeValue;
    uint8_t ValueCheckTypeQuantity;
    uint8_t OrderAttributeLiquidityProvision;
    uint8_t TimeInForce;
    uint8_t ApplSeqIndicator;
    uint8_t ExecInst;
    uint8_t TradingCapacity;
    uint8_t ExDestinationType;
    uint8_t PartyIdInvestmentDecisionMakerQualifier;
    uint8_t ExecutingTraderQualifier;
    char Pad2[2];
} ModifyOrderSingleShortRequestT;

/*
 * Structure: Modify Order Single Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t Price;
    uint64_t StopPx;
    uint64_t VolumeDiscoveryPrice;
    uint64_t PegOffsetValueAbs;
    uint64_t PegOffsetValuePct;
    uint64_t PartyIdClientId;
    uint64_t PartyIdInvestmentDecisionMaker;
    uint64_t ExecutingTrader;
    int32_t OrderQty;
    int32_t DisplayQty;
    int32_t DisplayLowQty;
    int32_t DisplayHighQty;
    uint32_t ExpireDate;
    int32_t MarketSegmentId;
    uint32_t MatchInstCrossId;
    uint32_t TargetPartyIdSessionId;
    uint8_t ApplSeqIndicator;
    uint8_t Side;
    uint8_t OrdType;
    uint8_t PriceValidityCheckType;
    uint8_t ValueCheckTypeValue;
    uint8_t ValueCheckTypeQuantity;
    uint8_t OrderAttributeLiquidityProvision;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingSessionSubId;
    uint8_t StopPxIndicator;
    uint8_t TradingCapacity;
    uint8_t ExDestinationType;
    uint8_t PartyIdInvestmentDecisionMakerQualifier;
    uint8_t ExecutingTraderQualifier;
    uint8_t OwnershipIndicator;
    char FreeText1[12];
    char FreeText2[12];
    char FreeText4[16];
    char FixClOrdId[20];
    char Pad4[4];
} ModifyOrderSingleRequestT;

/*
 * Structure: Modify Order Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderMeCompT ResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint64_t StopPx;
    uint64_t TrdRegTsTimePriority;
    uint32_t OrderIdSfx;
    int32_t LeavesQty;
    int32_t CumQty;
    int32_t CxlQty;
    int32_t DisplayQty;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t CrossedIndicator;
    uint8_t Triggered;
    char Pad6[6];
} ModifyOrderResponseT;

/*
 * Structure: Modify Order Nr Response
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint64_t StopPx;
    uint32_t OrderIdSfx;
    int32_t LeavesQty;
    int32_t CumQty;
    int32_t CxlQty;
    int32_t DisplayQty;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t CrossedIndicator;
    uint8_t Triggered;
    char Pad6[6];
} ModifyOrderNrResponseT;

/*
 * Structure: Quote Entry Ack Grp Comp
 */ 
typedef struct {
    int64_t SecurityId;
    int32_t BidCxlSize;
    int32_t OfferCxlSize;
    uint32_t QuoteEntryRejectReason;
    uint8_t QuoteEntryStatus;
    char Pad3[3];
} QuoteEntryAckGrpCompT;

/*
 * Structure: Mass Quote Response
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t QuoteId;
    uint64_t QuoteResponseId;
    int32_t MarketSegmentId;
    uint8_t NoQuoteEntries;
    char Pad3[3];
} MassQuoteResponseT;

/*
 * Structure: Quote Entry Grp Comp
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t BidPx;
    uint64_t OfferPx;
    int32_t BidSize;
    int32_t OfferSize;
} QuoteEntryGrpCompT;

/*
 * Structure: Mass Quote Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint64_t QuoteId;
    uint64_t PartyIdInvestmentDecisionMaker;
    uint64_t ExecutingTrader;
    int32_t MarketSegmentId;
    uint32_t MatchInstCrossId;
    uint16_t EnrichmentRuleId;
    uint8_t PriceValidityCheckType;
    uint8_t ValueCheckTypeValue;
    uint8_t ValueCheckTypeQuantity;
    uint8_t QuoteSizeType;
    uint8_t OrderAttributeLiquidityProvision;
    uint8_t NoQuoteEntries;
    uint8_t PartyIdInvestmentDecisionMakerQualifier;
    uint8_t ExecutingTraderQualifier;
    char Pad6[6];
} MassQuoteRequestT;

/*
 * Structure: Logout Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
} LogoutResponseT;

/*
 * Structure: Logout Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
} LogoutRequestT;

/*
 * Structure: Logon Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
    int64_t ThrottleTimeInterval;
    uint32_t ThrottleNoMsgs;
    uint32_t ThrottleDisconnectLimit;
    uint32_t HeartBtInt;
    uint32_t SessionInstanceId;
    uint16_t MarketId;
    uint8_t TradSesMode;
    char DefaultCstmApplVerId[30];
    char DefaultCstmApplVerSubId[5];
    char Pad2[2];
} LogonResponseT;

/*
 * Structure: Logon Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint32_t HeartBtInt;
    uint32_t PartyIdSessionId;
    char DefaultCstmApplVerId[30];
    char Password[32];
    char ApplUsageOrders;
    char ApplUsageQuotes;
    char OrderRoutingIndicator;
    char FixEngineName[30];
    char FixEngineVersion[30];
    char FixEngineVendor[30];
    char ApplicationSystemName[30];
    char ApplicationSystemVersion[30];
    char ApplicationSystemVendor[30];
    char Pad3[3];
} LogonRequestT;

/*
 * Structure: Legal Notification Broadcast
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderCompT RbcHeaderComp;
    uint64_t TransactTime;
    uint16_t VarTextLen;
    uint8_t UserStatus;
    char Pad5[5];
} LegalNotificationBroadcastT;

/*
 * Structure: Party Details Grp Comp
 */ 
typedef struct {
    uint32_t PartyDetailIdExecutingTrader;
    char PartyDetailExecutingTrader[6];
    uint8_t PartyDetailRoleQualifier;
    uint8_t PartyDetailStatus;
    char PartyDetailDeskId[3];
    char Pad1[1];
} PartyDetailsGrpCompT;

/*
 * Structure: Inquire User Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
    char LastEntityProcessed[16];
    uint16_t NoPartyDetails;
    char Pad6[6];
} InquireUserResponseT;

/*
 * Structure: Inquire User Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    char LastEntityProcessed[16];
} InquireUserRequestT;

/*
 * Structure: Sessions Grp Comp
 */ 
typedef struct {
    uint32_t PartyIdSessionId;
    uint8_t SessionMode;
    uint8_t SessionSubMode;
    char Pad2[2];
} SessionsGrpCompT;

/*
 * Structure: Inquire Session List Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
    uint16_t NoSessions;
    char Pad6[6];
} InquireSessionListResponseT;

/*
 * Structure: Inquire Session List Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
} InquireSessionListRequestT;

/*
 * Structure: Enrichment Rules Grp Comp
 */ 
typedef struct {
    uint16_t EnrichmentRuleId;
    char FreeText1[12];
    char FreeText2[12];
    char FreeText4[16];
    char Pad6[6];
} EnrichmentRulesGrpCompT;

/*
 * Structure: Inquire Enrichment Rule Id List Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
    char LastEntityProcessed[16];
    uint16_t NoEnrichmentRules;
    char Pad6[6];
} InquireEnrichmentRuleIdListResponseT;

/*
 * Structure: Inquire Enrichment Rule Id List Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    char LastEntityProcessed[16];
} InquireEnrichmentRuleIdListRequestT;

/*
 * Structure: Heartbeat Notification
 */ 
typedef struct {
    char Pad2[2];
    NotifHeaderCompT NotifHeaderComp;
} HeartbeatNotificationT;

/*
 * Structure: Heartbeat
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
} HeartbeatT;

/*
 * Structure: Gateway Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderCompT ResponseHeaderComp;
    uint32_t GatewayId;
    uint32_t GatewaySubId;
    uint32_t SecondaryGatewayId;
    uint32_t SecondaryGatewaySubId;
    uint8_t GatewayStatus;
    uint8_t SecondaryGatewayStatus;
    uint8_t SessionMode;
    uint8_t TradSesMode;
    char Pad4[4];
} GatewayResponseT;

/*
 * Structure: Gateway Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint32_t PartyIdSessionId;
    uint16_t PartitionId;
    char DefaultCstmApplVerId[30];
    char Password[32];
    char Pad4[4];
} GatewayRequestT;

/*
 * Structure: Forced User Logout Notification
 */ 
typedef struct {
    char Pad2[2];
    NotifHeaderCompT NotifHeaderComp;
    uint8_t UserStatus;
    char Pad3[3];
    uint32_t Username;
    uint16_t VarTextLen;
    char Pad6[6];
} ForcedUserLogoutNotificationT;

/*
 * Structure: Forced Logout Notification
 */ 
typedef struct {
    char Pad2[2];
    NotifHeaderCompT NotifHeaderComp;
    uint16_t VarTextLen;
    char Pad6[6];
} ForcedLogoutNotificationT;

/*
 * Structure: Extended Deletion Report
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint64_t TrdRegTsEntryTime;
    uint64_t Price;
    uint64_t StopPx;
    uint64_t VolumeDiscoveryPrice;
    uint64_t PegOffsetValueAbs;
    uint64_t PegOffsetValuePct;
    int32_t MarketSegmentId;
    uint32_t OrderIdSfx;
    int32_t LeavesQty;
    int32_t CumQty;
    int32_t CxlQty;
    int32_t OrderQty;
    int32_t DisplayQty;
    int32_t DisplayLowQty;
    int32_t DisplayHighQty;
    uint32_t ExpireDate;
    uint32_t MatchInstCrossId;
    uint32_t PartyIdExecutingUnit;
    uint32_t PartyIdSessionId;
    uint32_t PartyIdExecutingTrader;
    uint32_t PartyIdEnteringTrader;
    uint16_t ExecRestatementReason;
    char OrdStatus;
    char ExecType;
    uint8_t Side;
    uint8_t OrdType;
    uint8_t TradingCapacity;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingSessionSubId;
    uint8_t ApplSeqIndicator;
    uint8_t ExDestinationType;
    char FreeText1[12];
    char FreeText2[12];
    char FreeText4[16];
    char FixClOrdId[20];
    uint8_t Triggered;
    char Pad3[3];
} ExtendedDeletionReportT;

/*
 * Structure: Enter Best Quote Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint64_t QuoteId;
    int64_t SecurityId;
    uint64_t BidPx;
    uint64_t OfferPx;
    uint64_t PegOffsetValueBidPx;
    uint64_t PegOffsetValueOfferPx;
    uint64_t PartyIdInvestmentDecisionMaker;
    uint64_t ExecutingTrader;
    int32_t BidSize;
    int32_t OfferSize;
    uint32_t ReservedBidSize;
    uint32_t ReservedOfferSize;
    int32_t MarketSegmentId;
    uint16_t EnrichmentRuleId;
    uint8_t OrderAttributeLiquidityProvision;
    uint8_t ValueCheckTypeQuantity;
    uint8_t PartyIdInvestmentDecisionMakerQualifier;
    uint8_t ExecutingTraderQualifier;
    char Pad6[6];
} EnterBestQuoteRequestT;

/*
 * Structure: Delete Order Single Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t PartyIdInvestmentDecisionMaker;
    uint64_t ExecutingTrader;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint8_t PartyIdInvestmentDecisionMakerQualifier;
    uint8_t ExecutingTraderQualifier;
    char FixClOrdId[20];
    char Pad2[2];
} DeleteOrderSingleRequestT;

/*
 * Structure: Delete Order Response
 */ 
typedef struct {
    char Pad2[2];
    ResponseHeaderMeCompT ResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint32_t OrderIdSfx;
    int32_t CumQty;
    int32_t CxlQty;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
} DeleteOrderResponseT;

/*
 * Structure: Delete Order Nr Response
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint32_t OrderIdSfx;
    int32_t CumQty;
    int32_t CxlQty;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
} DeleteOrderNrResponseT;

/*
 * Structure: Delete Order Broadcast
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint32_t OrderIdSfx;
    int32_t CumQty;
    int32_t CxlQty;
    int32_t MarketSegmentId;
    uint32_t PartyIdEnteringTrader;
    uint32_t PartyIdSessionId;
    uint16_t ExecRestatementReason;
    uint8_t PartyIdEnteringFirm;
    char OrdStatus;
    char ExecType;
    uint8_t Side;
    char FixClOrdId[20];
    char Pad6[6];
} DeleteOrderBroadcastT;

/*
 * Structure: Delete All Quote Response
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t MassActionReportId;
    uint16_t NoNotAffectedSecurities;
    char Pad6[6];
} DeleteAllQuoteResponseT;

/*
 * Structure: Delete All Quote Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    uint64_t PartyIdInvestmentDecisionMaker;
    uint64_t ExecutingTrader;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint8_t PartyIdInvestmentDecisionMakerQualifier;
    uint8_t ExecutingTraderQualifier;
    char Pad6[6];
} DeleteAllQuoteRequestT;

/*
 * Structure: Delete All Quote Broadcast
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t MassActionReportId;
    int64_t SecurityId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint32_t PartyIdEnteringTrader;
    uint32_t TargetPartyIdExecutingTrader;
    uint16_t NoNotAffectedSecurities;
    uint8_t MassActionReason;
    uint8_t PartyIdEnteringFirm;
    char TargetPartyIdDeskId[3];
    char Pad1[1];
} DeleteAllQuoteBroadcastT;

/*
 * Structure: Affected Ord Grp Comp
 */ 
typedef struct {
    uint64_t AffectedOrderId;
    uint64_t AffectedOrigClOrdId;
} AffectedOrdGrpCompT;

/*
 * Structure: Not Affected Orders Grp Comp
 */ 
typedef struct {
    uint64_t NotAffectedOrderId;
    uint64_t NotAffOrigClOrdId;
} NotAffectedOrdersGrpCompT;

/*
 * Structure: Delete All Order Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    int64_t SecurityId;
    uint64_t Price;
    uint64_t PartyIdInvestmentDecisionMaker;
    uint64_t ExecutingTrader;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint32_t TargetPartyIdExecutingTrader;
    uint8_t Side;
    uint8_t PartyIdInvestmentDecisionMakerQualifier;
    uint8_t ExecutingTraderQualifier;
    char Pad1[1];
} DeleteAllOrderRequestT;

/*
 * Structure: Delete All Order Quote Event Broadcast
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t MassActionReportId;
    int64_t SecurityId;
    int32_t MarketSegmentId;
    uint8_t MassActionReason;
    uint8_t ExecInst;
    char Pad2[2];
} DeleteAllOrderQuoteEventBroadcastT;

/*
 * Structure: Delete All Order Nr Response
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t MassActionReportId;
} DeleteAllOrderNrResponseT;

/*
 * Structure: Cross Request Response
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t ExecId;
} CrossRequestResponseT;

/*
 * Structure: Cross Request
 */ 
typedef struct {
    char NetworkMsgId[8];
    char Pad2[2];
    RequestHeaderCompT RequestHeaderComp;
    int64_t SecurityId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
} CrossRequestT;

/*
 * Structure: Broadcast Error Notification
 */ 
typedef struct {
    char Pad2[2];
    NotifHeaderCompT NotifHeaderComp;
    uint32_t ApplIdStatus;
    uint32_t RefApplSubId;
    uint16_t VarTextLen;
    uint8_t RefApplId;
    uint8_t SessionStatus;
    char Pad4[4];
} BroadcastErrorNotificationT;

/*
 * Structure: Best Quote Response
 */ 
typedef struct {
    char Pad2[2];
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t QuoteId;
    uint64_t QuoteResponseId;
    int64_t SecurityId;
    int32_t MarketSegmentId;
    int32_t BidCxlSize;
    int32_t OfferCxlSize;
    char Pad4[4];
} BestQuoteResponseT;

/*
 * Structure: Best Quote Execution Report
 */ 
typedef struct {
    char Pad2[2];
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t ExecId;
    uint64_t QuoteMsgId;
    int64_t SecurityId;
    uint64_t QuoteEventPx;
    int32_t MarketSegmentId;
    uint32_t QuoteEventMatchId;
    int32_t QuoteEventExecId;
    int32_t QuoteEventQty;
    uint32_t ReservedSize;
    uint8_t QuoteEventType;
    uint8_t QuoteEventSide;
    char Pad2[2];
} BestQuoteExecutionReportT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint32_t BodyLen;
    uint16_t TemplateId;
} MessageHeaderT;

/*
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Packet
 */ 
typedef struct {
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Eurex Exchange
   Version: 6.1
   Date: Wednesday, May 16, 2018
   Specification: T7-Enhanced-Trading-Interface-Manual.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
