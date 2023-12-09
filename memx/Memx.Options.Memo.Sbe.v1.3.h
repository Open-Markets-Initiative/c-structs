/*******************************************************************************
 * C Structs For Memx Options Sbe Memo 1.3 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Alloc Rej Code Values
 */ 
#define ENUM_ALLOC_REJ_CODE_INCORRECT_QUANTITY 1
#define ENUM_ALLOC_REJ_CODE_INCORRECT_ALLOCATED_QUANTITY 8
#define ENUM_ALLOC_REJ_CODE_UNKNOWN_OR_STALE_EXEC_ID 10
#define ENUM_ALLOC_REJ_CODE_MISMATCHED_DATA 11
#define ENUM_ALLOC_REJ_CODE_DUPLICATE_OR_MISSING_INDIVIDUAL_ALLOC_ID 14
#define ENUM_ALLOC_REJ_CODE_TRADE_NOT_RECOGNIZED 15
#define ENUM_ALLOC_REJ_CODE_DUPLICATE_TRADE 16
#define ENUM_ALLOC_REJ_CODE_INCORRECT_OR_MISSING_INSTRUMENT 17
#define ENUM_ALLOC_REJ_CODE_UNKNOWN_OR_MISSING_PARTY 23
#define ENUM_ALLOC_REJ_CODE_INCORRECT_OR_MISSING_SIDE 24
#define ENUM_ALLOC_REJ_CODE_INCORRECT_OR_MISSING_TRADE_DATE 26
#define ENUM_ALLOC_REJ_CODE_MISSING_TRADING_CAPACITY 27
#define ENUM_ALLOC_REJ_CODE_INVALID_TRADING_CAPACITY 28
#define ENUM_ALLOC_REJ_CODE_MISSING_OPEN_OR_CLOSE_TYPE 29
#define ENUM_ALLOC_REJ_CODE_INVALID_OPEN_OR_CLOSE_TYPE 30
#define ENUM_ALLOC_REJ_CODE_OTHER 99
#define ENUM_ALLOC_REJ_CODE_NULL_VALUE 65535

/*
 * Alloc Status Values
 */ 
#define ENUM_ALLOC_STATUS_ACCEPTED 0
#define ENUM_ALLOC_STATUS_BLOCK_LEVEL_REJECT 1
#define ENUM_ALLOC_STATUS_ACCOUNT_LEVEL_REJECT 2
#define ENUM_ALLOC_STATUS_NULL_VALUE 255

/*
 * Alloc Trans Type Values
 */ 
#define ENUM_ALLOC_TRANS_TYPE_NEW 0
#define ENUM_ALLOC_TRANS_TYPE_REPLACE 1
#define ENUM_ALLOC_TRANS_TYPE_NULL_VALUE 255

/*
 * Alloc Type Values
 */ 
#define ENUM_ALLOC_TYPE_POST_TRADE_EDIT 100
#define ENUM_ALLOC_TYPE_NULL_VALUE 255

/*
 * Cancel Reason Values
 */ 
#define ENUM_CANCEL_REASON_OTHER 0
#define ENUM_CANCEL_REASON_USER_REQUESTED_CANCEL 1
#define ENUM_CANCEL_REASON_EXECUTION_PRICE_COLLAR 5
#define ENUM_CANCEL_REASON_HALTED 6
#define ENUM_CANCEL_REASON_EXCHANGE_SUPERVISORY 7
#define ENUM_CANCEL_REASON_ORDER_EXPIRED 8
#define ENUM_CANCEL_REASON_MATCH_TRADE_PREVENTION 10
#define ENUM_CANCEL_REASON_PARTICIPANT_DISCONNECT 13
#define ENUM_CANCEL_REASON_ORDER_NOT_BOOKABLE 14
#define ENUM_CANCEL_REASON_FIRM_DISABLED 17
#define ENUM_CANCEL_REASON_EFID_DISABLED 18
#define ENUM_CANCEL_REASON_ACCOUNT_DISABLED 19
#define ENUM_CANCEL_REASON_QUOTE_UPDATE_REJECTED_ORIG_QUOTE_CANCELED 22
#define ENUM_CANCEL_REASON_ACTIVE_RISK_BREACH 23
#define ENUM_CANCEL_REASON_MANUAL_RISK_BREACH 24
#define ENUM_CANCEL_REASON_NUM_CONTRACTS_EXECUTED_EXCEEDS_THRESHOLD 25
#define ENUM_CANCEL_REASON_NOTIONAL_VALUE_OF_EXECUTIONS_EXCEEDS_THRESHOLD 26
#define ENUM_CANCEL_REASON_COUNT_OF_EXECUTIONS_EXCEEDS_THRESHOLD 27
#define ENUM_CANCEL_REASON_OUTSTANDING_PERCENTAGE_THRESHOLD_EXCEEDED 28
#define ENUM_CANCEL_REASON_TRIPS_THRESHOLD_EXCEEDED 29
#define ENUM_CANCEL_REASON_GROSS_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 30
#define ENUM_CANCEL_REASON_NET_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 31
#define ENUM_CANCEL_REASON_DUPLICATE_ORDER_THRESHOLD_EXCEEDED 32
#define ENUM_CANCEL_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 33
#define ENUM_CANCEL_REASON_MARKET_ORDER_GROSS_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 34
#define ENUM_CANCEL_REASON_MARKET_ORDER_NET_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 35
#define ENUM_CANCEL_REASON_NULL_VALUE 255

/*
 * Contra Trading Capacity Values
 */ 
#define ENUM_CONTRA_TRADING_CAPACITY_CUSTOMER 1
#define ENUM_CONTRA_TRADING_CAPACITY_PROFESSIONAL_CUSTOMER 2
#define ENUM_CONTRA_TRADING_CAPACITY_BROKER_DEALER 3
#define ENUM_CONTRA_TRADING_CAPACITY_BROKER_DEALER_CUSTOMER 4
#define ENUM_CONTRA_TRADING_CAPACITY_FIRM 5
#define ENUM_CONTRA_TRADING_CAPACITY_MARKET_MAKER 6
#define ENUM_CONTRA_TRADING_CAPACITY_AWAY_MARKET_MAKER 7
#define ENUM_CONTRA_TRADING_CAPACITY_NULL_VALUE 255

/*
 * Cxl Rej Reason Values
 */ 
#define ENUM_CXL_REJ_REASON_TOO_LATE_TO_CANCEL 0
#define ENUM_CXL_REJ_REASON_UNKNOWN_ORDER 1
#define ENUM_CXL_REJ_REASON_ORDER_ALREADY_PENDING_CANCEL_OR_REPLACE 3
#define ENUM_CXL_REJ_REASON_DUPLICATE_CL_ORD_ID 6
#define ENUM_CXL_REJ_REASON_PRICE_EXCEEDS_CURRENT_PRICE_BAND 8
#define ENUM_CXL_REJ_REASON_INVALID_PRICE_INCREMENT 18
#define ENUM_CXL_REJ_REASON_OTHER 99
#define ENUM_CXL_REJ_REASON_MISSING_SYMBOL 100
#define ENUM_CXL_REJ_REASON_INVALID_SYMBOL 101
#define ENUM_CXL_REJ_REASON_MISSING_CL_ORD_ID 102
#define ENUM_CXL_REJ_REASON_INVALID_CL_ORD_ID 103
#define ENUM_CXL_REJ_REASON_MISSING_SIDE 104
#define ENUM_CXL_REJ_REASON_INVALID_SIDE 105
#define ENUM_CXL_REJ_REASON_MISSING_ORDER_QTY 106
#define ENUM_CXL_REJ_REASON_INVALID_ORDER_QTY 107
#define ENUM_CXL_REJ_REASON_MISSING_ORDER_TYPE 108
#define ENUM_CXL_REJ_REASON_INVALID_ORDER_TYPE 109
#define ENUM_CXL_REJ_REASON_MISSING_LIMIT_PRICE 110
#define ENUM_CXL_REJ_REASON_INVALID_LIMIT_PRICE 111
#define ENUM_CXL_REJ_REASON_MISSING_LIST_SEQ_NO 114
#define ENUM_CXL_REJ_REASON_INVALID_LIST_SEQ_NO 115
#define ENUM_CXL_REJ_REASON_MISSING_ORIG_CL_ORD_ID 116
#define ENUM_CXL_REJ_REASON_INVALID_ORIG_CL_ORD_ID 117
#define ENUM_CXL_REJ_REASON_MISSING_ORDER_ID 118
#define ENUM_CXL_REJ_REASON_INVALID_ORDER_ID 119
#define ENUM_CXL_REJ_REASON_HALTED 200
#define ENUM_CXL_REJ_REASON_FIRM_DISABLED 201
#define ENUM_CXL_REJ_REASON_EFID_DISABLED 202
#define ENUM_CXL_REJ_REASON_ACCOUNT_DISABLED 203
#define ENUM_CXL_REJ_REASON_UNSUPPORTED_ORD_TYPE_CHANGE 204
#define ENUM_CXL_REJ_REASON_UNSUPPORTED_SIDE_CHANGE 205
#define ENUM_CXL_REJ_REASON_SYMBOL_MISMATCH 206
#define ENUM_CXL_REJ_REASON_ORIG_ORDER_ID_MISMATCH 207
#define ENUM_CXL_REJ_REASON_NON_TEST_SYMBOLS_BLOCKED 300
#define ENUM_CXL_REJ_REASON_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 301
#define ENUM_CXL_REJ_REASON_MAX_NOTIONAL_VALUE_PER_ORDER_RISK_RULE_VIOLATED 302
#define ENUM_CXL_REJ_REASON_BLOCK_NON_TEST_SYMBOL_RISK_RULE_VIOLATED 303
#define ENUM_CXL_REJ_REASON_MAX_CONTRACTS_PER_ORDER_RISK_RULE_VIOLATED 304
#define ENUM_CXL_REJ_REASON_NBBO_WIDTH_EXCEEDS_THRESHOLD 305
#define ENUM_CXL_REJ_REASON_EXCHANGE_PRICE_VALUE_COLLAR_RISK_RULE_VIOLATED 306
#define ENUM_CXL_REJ_REASON_EXECUTION_PRICE_HIGHER_THAN_STRIKE_PRICE 307
#define ENUM_CXL_REJ_REASON_MARKET_BUY_WHEN_NBO_IS_ZERO 308
#define ENUM_CXL_REJ_REASON_MARKET_SELL_WHEN_NBB_GREATER_THAN_THRESHOLD 309
#define ENUM_CXL_REJ_REASON_QUOTE_PRICE_OUTSIDE_EXCHANGE_THRESHOLD 310
#define ENUM_CXL_REJ_REASON_NUM_CONTRACTS_EXECUTED_EXCEEDS_THRESHOLD 312
#define ENUM_CXL_REJ_REASON_NOTIONAL_VALUE_OF_EXECUTIONS_EXCEEDS_THRESHOLD 313
#define ENUM_CXL_REJ_REASON_COUNT_OF_EXECUTIONS_EXCEEDS_THRESHOLD 314
#define ENUM_CXL_REJ_REASON_OUTSTANDING_PERCENTAGE_THRESHOLD_EXCEEDED 315
#define ENUM_CXL_REJ_REASON_TRIPS_THRESHOLD_EXCEEDED 316
#define ENUM_CXL_REJ_REASON_ISO_ORDERS_NOT_ALLOWED 317
#define ENUM_CXL_REJ_REASON_MARKET_IS_CROSSED 318
#define ENUM_CXL_REJ_REASON_ACTIVE_RISK_BREACH 319
#define ENUM_CXL_REJ_REASON_MANUAL_RISK_BREACH 320
#define ENUM_CXL_REJ_REASON_GROSS_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 321
#define ENUM_CXL_REJ_REASON_NET_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 322
#define ENUM_CXL_REJ_REASON_DUPLICATE_ORDER_THRESHOLD_EXCEEDED 323
#define ENUM_CXL_REJ_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 324
#define ENUM_CXL_REJ_REASON_MASS_CANCEL_LOCKOUT_IN_EFFECT 325
#define ENUM_CXL_REJ_REASON_MARKET_ORDER_GROSS_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 326
#define ENUM_CXL_REJ_REASON_MARKET_ORDER_NET_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 327
#define ENUM_CXL_REJ_REASON_NULL_VALUE 65535

/*
 * Cxl Rej Response To Values
 */ 
#define ENUM_CXL_REJ_RESPONSE_TO_ORDER_CANCEL_REQUEST '1'
#define ENUM_CXL_REJ_RESPONSE_TO_ORDER_CANCEL_REPLACE_REQUEST '2'

/*
 * Exec Restatement Reason Values
 */ 
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_REPRICE 3
#define ENUM_EXEC_RESTATEMENT_REASON_MATCH_TRADE_PREVENTION 5
#define ENUM_EXEC_RESTATEMENT_REASON_OTHER 99
#define ENUM_EXEC_RESTATEMENT_REASON_NULL_VALUE 255

/*
 * Extended Restatement Reason Values
 */ 
#define ENUM_EXTENDED_RESTATEMENT_REASON_NONE 0
#define ENUM_EXTENDED_RESTATEMENT_REASON_MATCH_TRADE_CANCEL_NEWEST 3
#define ENUM_EXTENDED_RESTATEMENT_REASON_MATCH_TRADE_CANCEL_OLDEST 4
#define ENUM_EXTENDED_RESTATEMENT_REASON_MATCH_TRADE_CANCEL_BOTH 6
#define ENUM_EXTENDED_RESTATEMENT_REASON_NULL_VALUE 255
#define ENUM_EXTENDED_RESTATEMENT_REASON_NO_VALUE 255

/*
 * Last Liquidity Ind Values
 */ 
#define ENUM_LAST_LIQUIDITY_IND_ADDED 1
#define ENUM_LAST_LIQUIDITY_IND_REMOVED 2
#define ENUM_LAST_LIQUIDITY_IND_NULL_VALUE 255

/*
 * Login Reject Code Values
 */ 
#define ENUM_LOGIN_REJECT_CODE_MALFORMED_TOKEN 'T'
#define ENUM_LOGIN_REJECT_CODE_TOKEN_TYPE_UNSUPPORTED 'U'
#define ENUM_LOGIN_REJECT_CODE_TOKEN_TYPE_INVALID 'V'
#define ENUM_LOGIN_REJECT_CODE_AUTHORIZATION_FAILED 'A'

/*
 * Match Trade Prevention Values
 */ 
#define ENUM_MATCH_TRADE_PREVENTION_CANCEL_NEWEST 0
#define ENUM_MATCH_TRADE_PREVENTION_CANCEL_OLDEST 1
#define ENUM_MATCH_TRADE_PREVENTION_CANCEL_BOTH 3
#define ENUM_MATCH_TRADE_PREVENTION_NULL_VALUE 255
#define ENUM_MATCH_TRADE_PREVENTION_NO_VALUE 255

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
 * Open Or Close Values
 */ 
#define ENUM_OPEN_OR_CLOSE_OPEN 'O'
#define ENUM_OPEN_OR_CLOSE_CLOSE 'C'
#define ENUM_OPEN_OR_CLOSE_NULL_VALUE '0'
#define ENUM_OPEN_OR_CLOSE_NO_VALUE '0'

/*
 * Ord Status Values
 */ 
#define ENUM_ORD_STATUS_NEW '0'
#define ENUM_ORD_STATUS_PARTIAL_FILLED '1'
#define ENUM_ORD_STATUS_FILLED '2'
#define ENUM_ORD_STATUS_CANCELED '4'
#define ENUM_ORD_STATUS_PENDING_CANCEL '6'
#define ENUM_ORD_STATUS_REJECTED '8'
#define ENUM_ORD_STATUS_PENDING_REPLACE 'E'
#define ENUM_ORD_STATUS_EXPIRED 'C'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET '1'
#define ENUM_ORD_TYPE_LIMIT '2'

/*
 * Party Role Values
 */ 
#define ENUM_PARTY_ROLE_EXECUTING_FIRM_ID 1
#define ENUM_PARTY_ROLE_ACTIONABLE_IDENTIFIER 3
#define ENUM_PARTY_ROLE_GIVE_UP_CLEARING_FIRM 14
#define ENUM_PARTY_ROLE_CONTRA_EFID 17
#define ENUM_PARTY_ROLE_CONTRA_GIVE_UP 18
#define ENUM_PARTY_ROLE_OPTIONAL_OCC_DATA 24
#define ENUM_PARTY_ROLE_CONTRA_MM_SUB_ACCOUNT 37
#define ENUM_PARTY_ROLE_CMTA 40
#define ENUM_PARTY_ROLE_CONTRA_CMTA 41
#define ENUM_PARTY_ROLE_MARKET_MAKER_SUB_ACCOUNT 66

/*
 * Rej Reason Values
 */ 
#define ENUM_REJ_REASON_OTHER 0
#define ENUM_REJ_REASON_MISSING_CL_ORD_ID 1
#define ENUM_REJ_REASON_INVALID_CL_ORD_ID 2
#define ENUM_REJ_REASON_MISSING_LOCKOUT_ID 3
#define ENUM_REJ_REASON_INVALID_LOCKOUT_ID 4
#define ENUM_REJ_REASON_NULL_VALUE 65535

/*
 * Reject Reason Values
 */ 
#define ENUM_REJECT_REASON_UNKNOWN_SYMBOL 1
#define ENUM_REJECT_REASON_EXCHANGE_CLOSED 2
#define ENUM_REJECT_REASON_DUPLICATE_ORDER 6
#define ENUM_REJECT_REASON_PRICE_EXCEEDS_CURRENT_PRICE_BAND 16
#define ENUM_REJECT_REASON_INVALID_PRICE_INCREMENT 18
#define ENUM_REJECT_REASON_MAX_NOTIONAL_VALUE_PER_ORDER_RISK_RULE_BREACH 27
#define ENUM_REJECT_REASON_OTHER 99
#define ENUM_REJECT_REASON_MISSING_SYMBOL 100
#define ENUM_REJECT_REASON_INVALID_SYMBOL 101
#define ENUM_REJECT_REASON_MISSING_CL_ORD_ID 102
#define ENUM_REJECT_REASON_INVALID_CL_ORD_ID 103
#define ENUM_REJECT_REASON_MISSING_SIDE 104
#define ENUM_REJECT_REASON_INVALID_SIDE 105
#define ENUM_REJECT_REASON_MISSING_ORDER_QTY 106
#define ENUM_REJECT_REASON_INVALID_ORDER_QTY 107
#define ENUM_REJECT_REASON_MISSING_ORDER_TYPE 108
#define ENUM_REJECT_REASON_INVALID_ORDER_TYPE 109
#define ENUM_REJECT_REASON_MISSING_TIME_IN_FORCE 110
#define ENUM_REJECT_REASON_INVALID_TIME_IN_FORCE 111
#define ENUM_REJECT_REASON_MISSING_TRADING_CAPACITY 112
#define ENUM_REJECT_REASON_INVALID_TRADING_CAPACITY 113
#define ENUM_REJECT_REASON_MISSING_EXEC_INST 114
#define ENUM_REJECT_REASON_INVALID_EXEC_INST 115
#define ENUM_REJECT_REASON_MISSING_LIMIT_PRICE 118
#define ENUM_REJECT_REASON_INVALID_LIMIT_PRICE 119
#define ENUM_REJECT_REASON_MISSING_MATCH_TRADE_PREVENTION_TYPE 124
#define ENUM_REJECT_REASON_INVALID_MATCH_TRADE_PREVENTION_TYPE 125
#define ENUM_REJECT_REASON_MISSING_CANCEL_GROUP_ID 126
#define ENUM_REJECT_REASON_INVALID_CANCEL_GROUP_ID 127
#define ENUM_REJECT_REASON_MISSING_MTP_GROUP_ID 128
#define ENUM_REJECT_REASON_INVALID_MTP_GROUP_ID 129
#define ENUM_REJECT_REASON_MISSING_RISK_GROUP_ID 134
#define ENUM_REJECT_REASON_INVALID_RISK_GROUP_ID 135
#define ENUM_REJECT_REASON_MISSING_EFID 136
#define ENUM_REJECT_REASON_INVALID_EFID 137
#define ENUM_REJECT_REASON_MISSING_LIST_SEQ_NO 138
#define ENUM_REJECT_REASON_INVALID_LIST_SEQ_NO 139
#define ENUM_REJECT_REASON_QUOTES_HAVE_DIFFERENT_UNDERLIERS 140
#define ENUM_REJECT_REASON_TWO_SIDED_QUOTES_CROSS 141
#define ENUM_REJECT_REASON_MISSING_OPEN_OR_CLOSE 142
#define ENUM_REJECT_REASON_INVALID_OPEN_OR_CLOSE 143
#define ENUM_REJECT_REASON_MISSING_REPRICE_BEHAVIOR_TYPE 144
#define ENUM_REJECT_REASON_INVALID_REPRICE_BEHAVIOR_TYPE 145
#define ENUM_REJECT_REASON_MISSING_REPRICE_FREQUENCY_TYPE 146
#define ENUM_REJECT_REASON_INVALID_REPRICE_FREQUENCY_TYPE 147
#define ENUM_REJECT_REASON_MISSING_PARTY_ROLE_TYPE 148
#define ENUM_REJECT_REASON_INVALID_PARTY_ROLE_TYPE 149
#define ENUM_REJECT_REASON_MISSING_PARTY_ID 150
#define ENUM_REJECT_REASON_INVALID_PARTY_ID 151
#define ENUM_REJECT_REASON_MISSING_PARTY_ID_SOURCE 152
#define ENUM_REJECT_REASON_INVALID_PARTY_ID_SOURCE 153
#define ENUM_REJECT_REASON_HALTED 200
#define ENUM_REJECT_REASON_FIRM_DISABLED 201
#define ENUM_REJECT_REASON_EFID_DISABLED 202
#define ENUM_REJECT_REASON_ACCOUNT_DISABLED 203
#define ENUM_REJECT_REASON_INVALID_MODIFIER_FOR_ORDER_TYPE 204
#define ENUM_REJECT_REASON_INVALID_TIME_IN_FORCE_FOR_ORDER_TYPE 205
#define ENUM_REJECT_REASON_POST_ONLY_NOT_ALLOWED 207
#define ENUM_REJECT_REASON_QUOTE_MODIFY_REJECTED 208
#define ENUM_REJECT_REASON_QUOTING_DISABLED 209
#define ENUM_REJECT_REASON_INVALID_QUOTE_COMPONENT_COUNT 210
#define ENUM_REJECT_REASON_NON_TEST_SYMBOLS_BLOCKED 300
#define ENUM_REJECT_REASON_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 301
#define ENUM_REJECT_REASON_MAX_NOTIONAL_VALUE_PER_ORDER_RISK_RULE_VIOLATED 302
#define ENUM_REJECT_REASON_BLOCK_NON_TEST_SYMBOL_RISK_RULE_VIOLATED 303
#define ENUM_REJECT_REASON_MAX_CONTRACTS_PER_ORDER_RISK_RULE_VIOLATED 304
#define ENUM_REJECT_REASON_NBBO_WIDTH_EXCEEDS_THRESHOLD 305
#define ENUM_REJECT_REASON_EXCHANGE_PRICE_VALUE_COLLAR_RISK_RULE_VIOLATED 306
#define ENUM_REJECT_REASON_EXECUTION_PRICE_HIGHER_THAN_STRIKE_PRICE 307
#define ENUM_REJECT_REASON_MARKET_BUY_WHEN_NBO_IS_ZERO 308
#define ENUM_REJECT_REASON_MARKET_SELL_WHEN_NBB_GREATER_THAN_THRESHOLD 309
#define ENUM_REJECT_REASON_QUOTE_PRICE_OUTSIDE_EXCHANGE_THRESHOLD 310
#define ENUM_REJECT_REASON_NUM_CONTRACTS_EXECUTED_EXCEEDS_THRESHOLD 312
#define ENUM_REJECT_REASON_NOTIONAL_VALUE_OF_EXECUTIONS_EXCEEDS_THRESHOLD 313
#define ENUM_REJECT_REASON_COUNT_OF_EXECUTIONS_EXCEEDS_THRESHOLD 314
#define ENUM_REJECT_REASON_OUTSTANDING_PERCENTAGE_THRESHOLD_EXCEEDED 315
#define ENUM_REJECT_REASON_TRIPS_THRESHOLD_EXCEEDED 316
#define ENUM_REJECT_REASON_ISO_ORDERS_NOT_ALLOWED 317
#define ENUM_REJECT_REASON_MARKET_IS_CROSSED 318
#define ENUM_REJECT_REASON_ACTIVE_RISK_BREACH 319
#define ENUM_REJECT_REASON_MANUAL_RISK_BREACH 320
#define ENUM_REJECT_REASON_GROSS_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 321
#define ENUM_REJECT_REASON_NET_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 322
#define ENUM_REJECT_REASON_DUPLICATE_ORDER_THRESHOLD_EXCEEDED 323
#define ENUM_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 324
#define ENUM_REJECT_REASON_MASS_CANCEL_LOCKOUT_IN_EFFECT 325
#define ENUM_REJECT_REASON_MARKET_ORDER_GROSS_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 326
#define ENUM_REJECT_REASON_MARKET_ORDER_NET_NOTIONAL_VALUE_EXCEEDS_THRESHOLD 327
#define ENUM_REJECT_REASON_NULL_VALUE 65535
#define ENUM_REJECT_REASON_OTHER 0
#define ENUM_REJECT_REASON_DUPLICATE_CL_ORD_ID 1
#define ENUM_REJECT_REASON_MISSING_CL_ORD_ID 2
#define ENUM_REJECT_REASON_INVALID_CL_ORD_ID 3
#define ENUM_REJECT_REASON_MISSING_EFID 4
#define ENUM_REJECT_REASON_INVALID_EFID 5
#define ENUM_REJECT_REASON_MISSING_UNDERLYING_OR_SERIES 6
#define ENUM_REJECT_REASON_INVALID_UNDERLYING_OR_SERIES 7
#define ENUM_REJECT_REASON_MISSING_UNDERLIER 8
#define ENUM_REJECT_REASON_INVALID_UNDERLIER 9
#define ENUM_REJECT_REASON_MISSING_OPTIONS_SECURITY_ID 10
#define ENUM_REJECT_REASON_INVALID_OPTIONS_SECURITY_ID 11
#define ENUM_REJECT_REASON_MISSING_CANCEL_GROUP_ID 12
#define ENUM_REJECT_REASON_INVALID_CANCEL_GROUP_ID 13
#define ENUM_REJECT_REASON_MISSING_MASS_CANCEL_INST 14
#define ENUM_REJECT_REASON_INVALID_MASS_CANCEL_INST 15
#define ENUM_REJECT_REASON_MASS_CANCEL_IN_PROGRESS 17

/*
 * Replay Reject Code Values
 */ 
#define ENUM_REPLAY_REJECT_CODE_REPLAY_REQUESTS_ARE_NOT_ALLOWED 'R'
#define ENUM_REPLAY_REJECT_CODE_REPLAY_ALL_REQUESTS_ARE_NOT_ALLOWED 'A'
#define ENUM_REPLAY_REJECT_CODE_NOT_THE_ACTIVE_SESSION 'P'
#define ENUM_REPLAY_REJECT_CODE_SEQUENCE_NUMBER_OUT_OF_RANGE 'S'

/*
 * Reprice Behavior Values
 */ 
#define ENUM_REPRICE_BEHAVIOR_REPRICE_LOCK_CANCEL_CROSS 1
#define ENUM_REPRICE_BEHAVIOR_REPRICE_LOCK_REPRICE_CROSS 2
#define ENUM_REPRICE_BEHAVIOR_NULL_VALUE 255
#define ENUM_REPRICE_BEHAVIOR_NO_VALUE 255

/*
 * Reprice Frequency Values
 */ 
#define ENUM_REPRICE_FREQUENCY_SINGLE_REPRICE 0
#define ENUM_REPRICE_FREQUENCY_CONTINUOUS_REPRICE 1
#define ENUM_REPRICE_FREQUENCY_NONE 2
#define ENUM_REPRICE_FREQUENCY_NULL_VALUE 255
#define ENUM_REPRICE_FREQUENCY_NO_VALUE 255

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY '1'
#define ENUM_SIDE_SELL '2'
#define ENUM_SIDE_AS_DEFINED 'B'
#define ENUM_SIDE_NO_VALUE '0'

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
#define ENUM_TEMPLATE_ID_NEW_ORDER_SINGLE_MESSAGE 1
#define ENUM_TEMPLATE_ID_SHORT_TWO_SIDED_BULK_QUOTE_MESSAGE 2
#define ENUM_TEMPLATE_ID_LONG_TWO_SIDED_BULK_QUOTE_MESSAGE 3
#define ENUM_TEMPLATE_ID_SHORT_ONE_SIDED_BULK_QUOTE_MESSAGE 4
#define ENUM_TEMPLATE_ID_LONG_ONE_SIDED_BULK_QUOTE_MESSAGE 5
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REPLACE_REQUEST_MESSAGE 6
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REQUEST_MESSAGE 7
#define ENUM_TEMPLATE_ID_MASS_CANCEL_REQUEST_MESSAGE 8
#define ENUM_TEMPLATE_ID_MASS_CANCEL_CLEAR_LOCKOUT_REQUEST_MESSAGE 9
#define ENUM_TEMPLATE_ID_ALLOCATION_INSTRUCTION_MESSAGE 10
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_NEW_MESSAGE 11
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_BULK_QUOTE_PENDING_NEW_MESSAGE 12
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_BULK_QUOTE_COMPONENT_NEW_MESSAGE 13
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_REJECTED_MESSAGE 14
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_MESSAGE 15
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_PENDING_CANCEL_MESSAGE 16
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_CANCELED_MESSAGE 17
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_PENDING_REPLACE_MESSAGE 18
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_REPLACED_MESSAGE 19
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_CORRECTION_MESSAGE 20
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_BREAK_MESSAGE 21
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_RESTATEMENT_MESSAGE 22
#define ENUM_TEMPLATE_ID_PENDING_MASS_CANCEL_MESSAGE 23
#define ENUM_TEMPLATE_ID_MASS_CANCEL_REJECT_MESSAGE 24
#define ENUM_TEMPLATE_ID_MASS_CANCEL_DONE_MESSAGE 25
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REJECT_MESSAGE 26
#define ENUM_TEMPLATE_ID_ALLOCATION_INSTRUCTION_ACK_MESSAGE 27
#define ENUM_TEMPLATE_ID_ALLOCATION_REPORT_MESSAGE 28
#define ENUM_TEMPLATE_ID_USER_NOTIFICATION_MESSAGE 29
#define ENUM_TEMPLATE_ID_MASS_CANCEL_CLEAR_LOCKOUT_REJECT_MESSAGE 30
#define ENUM_TEMPLATE_ID_MASS_CANCEL_CLEAR_LOCKOUT_DONE_MESSAGE 31

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY '0'
#define ENUM_TIME_IN_FORCE_IMMEDIATE_OR_CANCEL '3'

/*
 * Trading Capacity Values
 */ 
#define ENUM_TRADING_CAPACITY_CUSTOMER 1
#define ENUM_TRADING_CAPACITY_PROFESSIONAL_CUSTOMER 2
#define ENUM_TRADING_CAPACITY_BROKER_DEALER 3
#define ENUM_TRADING_CAPACITY_BROKER_DEALER_CUSTOMER 4
#define ENUM_TRADING_CAPACITY_FIRM 5
#define ENUM_TRADING_CAPACITY_MARKET_MAKER 6
#define ENUM_TRADING_CAPACITY_AWAY_MARKET_MAKER 7
#define ENUM_TRADING_CAPACITY_NULL_VALUE 255

/*
 * Underlying Or Series Values
 */ 
#define ENUM_UNDERLYING_OR_SERIES_CANCEL_ALL_ON_UNDERLYING 0
#define ENUM_UNDERLYING_OR_SERIES_CANCEL_ALL_ON_SERIES 1
#define ENUM_UNDERLYING_OR_SERIES_NULL_VALUE 255
#define ENUM_UNDERLYING_OR_SERIES_NO_VALUE 255

/*
 * User Status Values
 */ 
#define ENUM_USER_STATUS_SESSION_SHUTDOWN_WARNING 8
#define ENUM_USER_STATUS_END_OF_EVENTS_FOR_SESSION 100
#define ENUM_USER_STATUS_NULL_VALUE 255


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Mass Cancel Clear Lockout Done Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint64_t LockoutId;
    uint8_t SendingTime;
    char Padding7[0];
} MassCancelClearLockoutDoneMessageT;

/*
 * Structure: Mass Cancel Clear Lockout Reject Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint64_t LockoutId;
    uint16_t RejReason;
    uint8_t SendingTime;
    char Padding7[0];
} MassCancelClearLockoutRejectMessageT;

/*
 * Structure: User Notification Message
 */ 
typedef struct {
    uint8_t SendingTime;
    uint8_t UserStatus;
    char Padding7[0];
} UserNotificationMessageT;

/*
 * Structure: Allocations Group
 */ 
typedef struct {
    uint32_t AllocQty;
    uint8_t TradingCapacity;
    char OpenOrClose;
} AllocationsGroupT;

/*
 * Structure: Repeating Group Dimensions
 */ 
typedef struct {
    uint8_t BlockLengthUint8;
    uint8_t NumInGroup;
} RepeatingGroupDimensionsT;

/*
 * Structure: Allocations Groups
 */ 
typedef struct {
    RepeatingGroupDimensionsT RepeatingGroupDimensions;
} AllocationsGroupsT;

/*
 * Structure: Allocation Report Message
 */ 
typedef struct {
    uint64_t AllocReportId;
    char AllocId[20];
    uint8_t AllocTransType;
    uint8_t AllocType;
    uint8_t AllocStatus;
    uint64_t ExecRefId;
    uint64_t TrdMatchId;
    char OptionsSecurityId[8];
    char Side;
    uint32_t QuantityUint32;
    char TradeDate[8];
    uint8_t SendingTime;
    char Padding7[0];
} AllocationReportMessageT;

/*
 * Structure: Allocation Instruction Ack Message
 */ 
typedef struct {
    uint64_t AllocReportId;
    char AllocId[20];
    uint8_t AllocStatus;
    uint16_t AllocRejCode;
    uint8_t SendingTime;
    char Padding7[0];
} AllocationInstructionAckMessageT;

/*
 * Structure: Order Cancel Reject Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint8_t ListSeqNo;
    char CxlRejResponseTo;
    uint16_t CxlRejReason;
    char OptionsSecurityId[8];
    char Side;
    uint8_t SendingTime;
    char Padding7[0];
} OrderCancelRejectMessageT;

/*
 * Structure: Mass Cancel Done Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint32_t TotalAffectedOrders;
    uint8_t SendingTime;
    char Padding7[0];
} MassCancelDoneMessageT;

/*
 * Bitfield: Mass Cancel Inst
 */ 
typedef struct {
    uint8_t
    Reserved5 : 5,
    CancelOrdersFromThisPortOnly : 1,
    SendCancels : 1,
    Lockout : 1;
} MassCancelInstT;

/*
 * Structure: Mass Cancel Reject Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint16_t RejectReason;
    char Efid[4];
    uint8_t UnderlyingOrSeries;
    char UnderlierMassCancelRejectUnderlier[6];
    char OptionsSecurityId[8];
    uint16_t CancelGroupId;
    MassCancelInstT MassCancelInst;
    uint8_t SendingTime;
    char Padding7[0];
} MassCancelRejectMessageT;

/*
 * Structure: Pending Mass Cancel Message
 */ 
typedef struct {
    char ClOrdId[20];
    MassCancelInstT MassCancelInst;
    uint64_t LockoutId;
    char Efid[4];
    uint8_t UnderlyingOrSeries;
    char UnderlierPendingMassCancelUnderlier[6];
    char OptionsSecurityId[8];
    uint16_t CancelGroupId;
    uint8_t SendingTime;
    char Padding7[0];
} PendingMassCancelMessageT;

/*
 * Structure: Execution Report Restatement Message
 */ 
typedef struct {
    uint64_t OrderId;
    char ClOrdId[20];
    uint8_t ListSeqNo;
    uint64_t ExecId;
    char OrdStatus;
    char OptionsSecurityId[8];
    uint8_t ExecRestatementReason;
    uint8_t ExtendedRestatementReason;
    char Side;
    int8_t LastPx;
    uint32_t LastQty;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    uint8_t TransactTime;
    char Padding21[0];
} ExecutionReportRestatementMessageT;

/*
 * Structure: Execution Report Trade Break Message
 */ 
typedef struct {
    uint64_t OrderId;
    char ClOrdId[20];
    uint64_t TrdMatchId;
    uint64_t ExecId;
    uint64_t ExecRefId;
    char OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    char Padding7[0];
} ExecutionReportTradeBreakMessageT;

/*
 * Structure: Execution Report Trade Correction Message
 */ 
typedef struct {
    uint64_t OrderId;
    char ClOrdId[20];
    uint64_t TrdMatchId;
    uint64_t ExecId;
    uint64_t ExecRefId;
    char OrdStatus;
    char OptionsSecurityId[8];
    uint32_t LastQty;
    int8_t LastPx;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    char Padding14[0];
} ExecutionReportTradeCorrectionMessageT;

/*
 * Structure: Execution Report Replaced Message
 */ 
typedef struct {
    uint64_t OrderId;
    char ClOrdId[20];
    uint8_t ListSeqNo;
    char OrigClOrdId[20];
    uint64_t ExecId;
    char OrdStatus;
    char OptionsSecurityId[8];
    char Side;
    uint32_t OrderQty;
    char OrdType;
    int8_t PricePriceType;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    uint8_t TransactTime;
    char Padding21[0];
} ExecutionReportReplacedMessageT;

/*
 * Structure: Execution Report Pending Replace Message
 */ 
typedef struct {
    uint64_t OrderId;
    char ClOrdId[20];
    uint8_t ListSeqNo;
    char OrigClOrdId[20];
    uint64_t ExecId;
    char OrdStatus;
    char OptionsSecurityId[8];
    char Side;
    uint32_t OrderQty;
    char OrdType;
    int8_t PricePriceType;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    char Padding14[0];
} ExecutionReportPendingReplaceMessageT;

/*
 * Structure: Execution Report Canceled Message
 */ 
typedef struct {
    uint64_t OrderId;
    char ClOrdId[20];
    uint8_t ListSeqNo;
    char OrigClOrdId[20];
    uint64_t ExecId;
    char OrdStatus;
    uint8_t CancelReason;
    char OptionsSecurityId[8];
    char Side;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    uint8_t TransactTime;
    char Padding14[0];
} ExecutionReportCanceledMessageT;

/*
 * Structure: Execution Report Pending Cancel Message
 */ 
typedef struct {
    uint64_t OrderId;
    char ClOrdId[20];
    uint8_t ListSeqNo;
    char OrigClOrdId[20];
    char OrdStatus;
    char OptionsSecurityId[8];
    char Side;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    char Padding7[0];
} ExecutionReportPendingCancelMessageT;

/*
 * Structure: Parties Group
 */ 
typedef struct {
    char PartyId[16];
    char PartyIdSource[1];
    uint8_t PartyRole;
} PartiesGroupT;

/*
 * Structure: Parties Groups
 */ 
typedef struct {
    RepeatingGroupDimensionsT RepeatingGroupDimensions;
} PartiesGroupsT;

/*
 * Structure: Execution Report Trade Message
 */ 
typedef struct {
    uint64_t OrderId;
    char ClOrdId[20];
    uint8_t ListSeqNo;
    uint64_t TrdMatchId;
    uint64_t ExecId;
    char OrdStatus;
    char OptionsSecurityId[8];
    char Side;
    uint32_t LastQty;
    int8_t LastPx;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    uint8_t TransactTime;
    uint8_t LastLiquidityInd;
    char LastMkt[4];
    char OpenOrClose;
    uint8_t TradingCapacity;
    uint8_t ContraTradingCapacity;
    char Padding21[0];
} ExecutionReportTradeMessageT;

/*
 * Structure: Execution Report Rejected Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint8_t ListSeqNo;
    uint64_t ExecId;
    char OrdStatus;
    uint16_t RejectReason;
    char OptionsSecurityId[8];
    char Side;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    char Padding7[0];
} ExecutionReportRejectedMessageT;

/*
 * Structure: Execution Report Bulk Quote Component New Message
 */ 
typedef struct {
    uint64_t OrderId;
    char ClOrdId[20];
    uint8_t ListSeqNo;
    uint64_t ExecId;
    char OrdStatus;
    char OptionsSecurityId[8];
    char Side;
    uint32_t OrderQty;
    int8_t PricePriceType;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    uint8_t TransactTime;
    char Padding21[0];
} ExecutionReportBulkQuoteComponentNewMessageT;

/*
 * Bitfield: Exec Inst
 */ 
typedef struct {
    uint16_t
    Reserved13 : 13,
    ExternalRoutingNotAllowed : 1,
    IntermarketSweep : 1,
    ParticipateDoNotInitiate : 1;
} ExecInstT;

/*
 * Structure: Execution Report Bulk Quote Pending New Message
 */ 
typedef struct {
    char ClOrdId[20];
    char Symbol[6];
    char TimeInForce;
    ExecInstT ExecInst;
    uint8_t TradingCapacity;
    uint8_t SendingTime;
    uint8_t TransactTime;
    uint16_t MtpGroupId;
    uint8_t MatchTradePrevention;
    uint16_t CancelGroupId;
    uint16_t RiskGroupId;
    uint8_t NumberOfOrders;
    char Padding14[0];
} ExecutionReportBulkQuotePendingNewMessageT;

/*
 * Structure: Execution Report New Message
 */ 
typedef struct {
    uint64_t OrderId;
    char ClOrdId[20];
    uint8_t ListSeqNo;
    uint64_t ExecId;
    char OrdStatus;
    char OptionsSecurityId[8];
    char Side;
    uint32_t OrderQty;
    char OrdType;
    int8_t PricePriceType;
    char TimeInForce;
    char OpenOrClose;
    ExecInstT ExecInst;
    uint8_t TradingCapacity;
    uint8_t RepriceFrequency;
    uint8_t RepriceBehavior;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t SendingTime;
    uint8_t TransactTime;
    uint16_t MtpGroupId;
    uint8_t MatchTradePrevention;
    uint16_t CancelGroupId;
    uint16_t RiskGroupId;
    char Padding21[0];
} ExecutionReportNewMessageT;

/*
 * Structure: Allocation Instruction Message
 */ 
typedef struct {
    uint8_t SendingTime;
    char AllocId[20];
    uint8_t AllocTransType;
    uint8_t AllocType;
    uint64_t RefAllocReportId;
    uint64_t ExecRefId;
    uint64_t TrdMatchId;
    char OptionsSecurityId[8];
    char Side;
    uint32_t QuantityUint32;
    char TradeDate[8];
    char Padding7[0];
} AllocationInstructionMessageT;

/*
 * Structure: Mass Cancel Clear Lockout Request Message
 */ 
typedef struct {
    uint8_t SendingTime;
    char ClOrdId[20];
    uint64_t LockoutId;
    char Padding7[0];
} MassCancelClearLockoutRequestMessageT;

/*
 * Structure: Mass Cancel Request Message
 */ 
typedef struct {
    uint8_t SendingTime;
    char ClOrdId[20];
    char Efid[4];
    uint8_t UnderlyingOrSeries;
    char UnderlierMassCancelRequestUnderlier[6];
    char OptionsSecurityId[8];
    uint16_t CancelGroupId;
    MassCancelInstT MassCancelInst;
    char Padding7[0];
} MassCancelRequestMessageT;

/*
 * Structure: Order Cancel Request Message
 */ 
typedef struct {
    uint8_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[20];
    uint8_t ListSeqNo;
    char OrigClOrdId[20];
    char OptionsSecurityId[8];
    char Side;
    char Padding7[0];
} OrderCancelRequestMessageT;

/*
 * Structure: Order Cancel Replace Request Message
 */ 
typedef struct {
    uint8_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[20];
    uint8_t ListSeqNo;
    char OrigClOrdId[20];
    char OptionsSecurityId[8];
    char Side;
    uint32_t OrderQty;
    char OrdType;
    int8_t PricePriceType;
    char Padding14[0];
} OrderCancelReplaceRequestMessageT;

/*
 * Structure: Quotes Group
 */ 
typedef struct {
    uint8_t ListSeqNo;
    char OptionsSecurityId[8];
    uint16_t BidSize;
    int8_t BidPx;
    uint16_t OfferSize;
    int8_t OfferPx;
} QuotesGroupT;

/*
 * Structure: Quotes Groups
 */ 
typedef struct {
    RepeatingGroupDimensionsT RepeatingGroupDimensions;
} QuotesGroupsT;

/*
 * Structure: New Order Single Message
 */ 
typedef struct {
    uint8_t SendingTime;
    char ClOrdId[20];
    char OptionsSecurityId[8];
    char Side;
    uint32_t OrderQty;
    char OrdType;
    int8_t PricePriceType;
    char TimeInForce;
    char OpenOrClose;
    ExecInstT ExecInst;
    uint8_t TradingCapacity;
    uint8_t RepriceFrequency;
    uint8_t RepriceBehavior;
    uint16_t MtpGroupId;
    uint8_t MatchTradePrevention;
    uint16_t CancelGroupId;
    uint16_t RiskGroupId;
    char Padding14[0];
} NewOrderSingleMessageT;

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
   Specification: MEMO SBE for Options-v1_3

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
