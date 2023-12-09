/*******************************************************************************
 * C Structs For Memx Equities Sbe Memo 1.11 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Cancel Reason Values
 */ 
#define ENUM_CANCEL_REASON_OTHER 0
#define ENUM_CANCEL_REASON_USER_REQUESTED_CANCEL 1
#define ENUM_CANCEL_REASON_END_OF_TRADING 4
#define ENUM_CANCEL_REASON_LIMIT_UP_LIMIT_DOWN 5
#define ENUM_CANCEL_REASON_HALTED 6
#define ENUM_CANCEL_REASON_EXCHANGE_SUPERVISORY 7
#define ENUM_CANCEL_REASON_ORDER_EXPIRED 8
#define ENUM_CANCEL_REASON_LOCK_OR_CROSS_BOOK 9
#define ENUM_CANCEL_REASON_SELF_TRADE_PREVENTION 10
#define ENUM_CANCEL_REASON_INSUFFICIENT_QUOTES 11
#define ENUM_CANCEL_REASON_NON_COMPLIANT_PRICE 12
#define ENUM_CANCEL_REASON_PARTICIPANT_DISCONNECT 13
#define ENUM_CANCEL_REASON_ORDER_NOT_BOOKABLE 14
#define ENUM_CANCEL_REASON_TRADE_PROTECTION_LIMITS 15
#define ENUM_CANCEL_REASON_UNABLE_TO_ROUTE 16
#define ENUM_CANCEL_REASON_FIRM_DISABLED 17
#define ENUM_CANCEL_REASON_MPID_DISABLED 18
#define ENUM_CANCEL_REASON_ACCOUNT_DISABLED 19
#define ENUM_CANCEL_REASON_NOTIONAL_EXPOSURE_RISK_BREACHED 20
#define ENUM_CANCEL_REASON_NULL_VALUE 255
#define ENUM_CANCEL_REASON_NO_VALUE 255

/*
 * Cust Order Capacity Values
 */ 
#define ENUM_CUST_ORDER_CAPACITY_MEMBER_TRADING_ON_THEIR_OWN_ACCOUNT 1
#define ENUM_CUST_ORDER_CAPACITY_RETAIL_CUSTOMER 5
#define ENUM_CUST_ORDER_CAPACITY_NULL_VALUE 255

/*
 * Cxl Rej Reason Values
 */ 
#define ENUM_CXL_REJ_REASON_UNKNOWN_ORIG_ORDER 1
#define ENUM_CXL_REJ_REASON_ORDER_IN_PENDING_STATE 3
#define ENUM_CXL_REJ_REASON_DUPLICATE_CL_ORD_ID 6
#define ENUM_CXL_REJ_REASON_INVALID_LIMIT_PRICE_INCREMENT 18
#define ENUM_CXL_REJ_REASON_OTHER 99
#define ENUM_CXL_REJ_REASON_MISSING_SYMBOL 100
#define ENUM_CXL_REJ_REASON_MISSING_LOCATE 101
#define ENUM_CXL_REJ_REASON_MISSING_CL_ORD_ID 102
#define ENUM_CXL_REJ_REASON_INVALID_ORDER_QUANTITY 103
#define ENUM_CXL_REJ_REASON_INVALID_SYMBOL 104
#define ENUM_CXL_REJ_REASON_INVALID_LIMIT_PRICE 105
#define ENUM_CXL_REJ_REASON_SYMBOL_HALTED_OR_PAUSED 107
#define ENUM_CXL_REJ_REASON_ORDER_SIZE_EXCEEDS_LIMIT 108
#define ENUM_CXL_REJ_REASON_EXCEEDED_MAX_NOTIONAL_ORDER_AMT 109
#define ENUM_CXL_REJ_REASON_MISSING_ORIG_ORDER_IDENTIFIERS 110
#define ENUM_CXL_REJ_REASON_AMBIGUOUS_ORIG_ORDER_IDENTIFIERS 111
#define ENUM_CXL_REJ_REASON_ORIG_ORDER_SYMBOL_NOT_MATCHING_REQUEST_SYMBOL 112
#define ENUM_CXL_REJ_REASON_UNSUPPORTED_DISPLAY_QUANTITY_CHANGE 113
#define ENUM_CXL_REJ_REASON_UNSUPPORTED_ORD_TYPE_CHANGE 114
#define ENUM_CXL_REJ_REASON_UNSUPPORTED_SIDE_CHANGE 115
#define ENUM_CXL_REJ_REASON_UNSUPPORTED_QUANTITY_CHANGE 116
#define ENUM_CXL_REJ_REASON_INVALID_LOCATE 117
#define ENUM_CXL_REJ_REASON_EXCHANGE_CLOSED 118
#define ENUM_CXL_REJ_REASON_BLOCK_SESSION_RISK_RULE_VIOLATED 119
#define ENUM_CXL_REJ_REASON_BLOCK_SELL_SHORT_RISK_RULE_VIOLATED 120
#define ENUM_CXL_REJ_REASON_MAX_SHARES_PER_ORDER_RISK_RULE_BREACH 121
#define ENUM_CXL_REJ_REASON_NO_NBBO_AVAILABLE 122
#define ENUM_CXL_REJ_REASON_MAX_NOTIONAL_VALUE_PER_ORDER_RISK_RULE_BREACH 123
#define ENUM_CXL_REJ_REASON_MAX_ADV_PERCENT_PER_ORDER_RISK_RULE_BREACH 124
#define ENUM_CXL_REJ_REASON_PRICE_PERCENT_COLLAR_RISK_RULE_VIOLATED 125
#define ENUM_CXL_REJ_REASON_PRICE_VALUE_COLLAR_RISK_RULE_VIOLATED 126
#define ENUM_CXL_REJ_REASON_HARD_TO_BORROW_SECURITY_RISK_RULE_VIOLATED 127
#define ENUM_CXL_REJ_REASON_INVALID_SIDE 128
#define ENUM_CXL_REJ_REASON_INVALID_ORD_TYPE 129
#define ENUM_CXL_REJ_REASON_INVALID_CL_ORD_ID 130
#define ENUM_CXL_REJ_REASON_INVALID_LNK_ID 131
#define ENUM_CXL_REJ_REASON_NULL_VALUE 255

/*
 * Cxl Rej Response To Values
 */ 
#define ENUM_CXL_REJ_RESPONSE_TO_ORDER_CANCEL_REQUEST '1'
#define ENUM_CXL_REJ_RESPONSE_TO_ORDER_CANCEL_REPLACE_REQUEST '2'

/*
 * Display Method Values
 */ 
#define ENUM_DISPLAY_METHOD_INITIAL '1'
#define ENUM_DISPLAY_METHOD_RANDOM '3'
#define ENUM_DISPLAY_METHOD_UNDISCLOSED '4'
#define ENUM_DISPLAY_METHOD_NO_VALUE '0'

/*
 * Exec Restatement Reason Values
 */ 
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_REPRICE 3
#define ENUM_EXEC_RESTATEMENT_REASON_SELF_TRADE_PREVENTION 5
#define ENUM_EXEC_RESTATEMENT_REASON_OTHER 99
#define ENUM_EXEC_RESTATEMENT_REASON_NULL_VALUE 255

/*
 * Extended Restatement Reason Values
 */ 
#define ENUM_EXTENDED_RESTATEMENT_REASON_NONE 0
#define ENUM_EXTENDED_RESTATEMENT_REASON_SET_NBBO 1
#define ENUM_EXTENDED_RESTATEMENT_REASON_JOINED_NBBO 2
#define ENUM_EXTENDED_RESTATEMENT_REASON_SELF_TRADE_CANCEL_NEWEST 3
#define ENUM_EXTENDED_RESTATEMENT_REASON_SELF_TRADE_CANCEL_OLDEST 4
#define ENUM_EXTENDED_RESTATEMENT_REASON_SELF_TRADE_DECREMENT_AND_CANCEL 5
#define ENUM_EXTENDED_RESTATEMENT_REASON_SELF_TRADE_CANCEL_BOTH 6
#define ENUM_EXTENDED_RESTATEMENT_REASON_SELF_TRADE_CANCEL_SMALLEST 7
#define ENUM_EXTENDED_RESTATEMENT_REASON_NULL_VALUE 255
#define ENUM_EXTENDED_RESTATEMENT_REASON_NO_VALUE 255

/*
 * Last Liquidity Ind Values
 */ 
#define ENUM_LAST_LIQUIDITY_IND_ADD_DISPLAYED 1
#define ENUM_LAST_LIQUIDITY_IND_REMOVED 2
#define ENUM_LAST_LIQUIDITY_IND_ROUTED 3
#define ENUM_LAST_LIQUIDITY_IND_CROSS 4
#define ENUM_LAST_LIQUIDITY_IND_ADD_HIDDEN 51
#define ENUM_LAST_LIQUIDITY_IND_ADD_MIDPOINT_PEG 52
#define ENUM_LAST_LIQUIDITY_IND_ADD_DISPLAYED_NBBO_IMPROVE 53
#define ENUM_LAST_LIQUIDITY_IND_ADD_DISPLAYED_NBBO_JOIN 54
#define ENUM_LAST_LIQUIDITY_IND_IMMEDIATE_MIDPOINT_REMOVE_ON_ENTRY 61
#define ENUM_LAST_LIQUIDITY_IND_ADD_DISPLAYED_PRICE_IMPROVEMENT 62
#define ENUM_LAST_LIQUIDITY_IND_ADD_HIDDEN_PRICE_IMPROVEMENT 63
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_ADD_DISPLAYED 101
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_REMOVED 102
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_ROUTED 103
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_CROSS 104
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_ADD_HIDDEN 151
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_ADD_MIDPOINT_PEG 152
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_ADD_DISPLAYED_NBBO_IMPROVE 153
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_ADD_DISPLAYED_NBBO_JOIN 154
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_REMOVED_ON_ENTRY 160
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_IMMEDIATE_MIDPOINT_REMOVE_ON_ENTRY 161
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_ADD_DISPLAYED_PRICE_IMPROVEMENT 162
#define ENUM_LAST_LIQUIDITY_IND_RETAIL_ADD_HIDDEN_PRICE_IMPROVEMENT 163
#define ENUM_LAST_LIQUIDITY_IND_NULL_VALUE 255

/*
 * Last Mkt Values
 */ 
#define ENUM_LAST_MKT_MEMX 'U'
#define ENUM_LAST_MKT_NASDAQ 'Q'
#define ENUM_LAST_MKT_NASDAQ_BX 'B'
#define ENUM_LAST_MKT_NASDAQ_PSX 'X'
#define ENUM_LAST_MKT_NYSE 'N'
#define ENUM_LAST_MKT_ARCA 'P'
#define ENUM_LAST_MKT_NYSE_AMERICAN 'A'
#define ENUM_LAST_MKT_NYSE_CHICAGO 'M'
#define ENUM_LAST_MKT_NYSE_NATIONAL 'C'
#define ENUM_LAST_MKT_EDGX 'K'
#define ENUM_LAST_MKT_EDGA 'J'
#define ENUM_LAST_MKT_BATS 'Z'
#define ENUM_LAST_MKT_BATSY 'Y'
#define ENUM_LAST_MKT_IEX 'V'
#define ENUM_LAST_MKT_LTSE 'L'
#define ENUM_LAST_MKT_EPRL 'H'

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
 * Ord Status Values
 */ 
#define ENUM_ORD_STATUS_NEW '0'
#define ENUM_ORD_STATUS_PARTIAL_FILLED '1'
#define ENUM_ORD_STATUS_FILLED '2'
#define ENUM_ORD_STATUS_CANCELED '4'
#define ENUM_ORD_STATUS_PENDING_CANCEL '6'
#define ENUM_ORD_STATUS_REJECTED '8'
#define ENUM_ORD_STATUS_PENDING_NEW 'A'
#define ENUM_ORD_STATUS_PENDING_REPLACE 'E'
#define ENUM_ORD_STATUS_EXPIRED 'C'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET '1'
#define ENUM_ORD_TYPE_LIMIT '2'
#define ENUM_ORD_TYPE_PEGGED 'P'

/*
 * Order Capacity Values
 */ 
#define ENUM_ORDER_CAPACITY_AGENCY 'A'
#define ENUM_ORDER_CAPACITY_PRINCIPAL 'P'
#define ENUM_ORDER_CAPACITY_RISKLESS_PRINCIPAL 'R'

/*
 * Peg Price Type Values
 */ 
#define ENUM_PEG_PRICE_TYPE_MID_PRICE_PEG 2
#define ENUM_PEG_PRICE_TYPE_PRIMARY_PEG 5
#define ENUM_PEG_PRICE_TYPE_NULL_VALUE 255
#define ENUM_PEG_PRICE_TYPE_NO_VALUE 255

/*
 * Reject Reason Values
 */ 
#define ENUM_REJECT_REASON_INVALID_SYMBOL 1
#define ENUM_REJECT_REASON_EXCHANGE_CLOSED 2
#define ENUM_REJECT_REASON_ORDER_SIZE_EXCEEDS_LIMIT 3
#define ENUM_REJECT_REASON_DUPLICATE_CL_ORD_ID 6
#define ENUM_REJECT_REASON_INVALID_LIMIT_PRICE_INCREMENT 18
#define ENUM_REJECT_REASON_NO_NBBO_AVAILABLE 19
#define ENUM_REJECT_REASON_ORDER_NOTIONAL_EXCEEDS_LIMIT 20
#define ENUM_REJECT_REASON_BLOCK_SELL_SHORT_RISK_RULE_VIOLATED 22
#define ENUM_REJECT_REASON_HARD_TO_BORROW_SECURITY_RISK_RULE_VIOLATED 23
#define ENUM_REJECT_REASON_MAX_NOTIONAL_VALUE_PER_ORDER_RISK_RULE_BREACH 27
#define ENUM_REJECT_REASON_OTHER 99
#define ENUM_REJECT_REASON_MISSING_SYMBOL 100
#define ENUM_REJECT_REASON_MISSING_LOCATE 101
#define ENUM_REJECT_REASON_INVALID_LOCATE 102
#define ENUM_REJECT_REASON_MISSING_CL_ORD_ID 103
#define ENUM_REJECT_REASON_INVALID_CL_ORD_ID 104
#define ENUM_REJECT_REASON_MISSING_SIDE 105
#define ENUM_REJECT_REASON_INVALID_SIDE 106
#define ENUM_REJECT_REASON_MISSING_ORDER_QUANTITY 107
#define ENUM_REJECT_REASON_INVALID_ORDER_QUANTITY 108
#define ENUM_REJECT_REASON_MISSING_ORDER_TYPE 109
#define ENUM_REJECT_REASON_INVALID_ORDER_TYPE 110
#define ENUM_REJECT_REASON_MISSING_TIME_IN_FORCE 111
#define ENUM_REJECT_REASON_INVALID_TIME_IN_FORCE 112
#define ENUM_REJECT_REASON_MISSING_ORDER_CAPACITY 113
#define ENUM_REJECT_REASON_INVALID_ORDER_CAPACITY 114
#define ENUM_REJECT_REASON_MISSING_EXEC_INST 115
#define ENUM_REJECT_REASON_MISSING_LIMIT_PRICE 116
#define ENUM_REJECT_REASON_INVALID_LIMIT_PRICE 117
#define ENUM_REJECT_REASON_MISSING_MAX_FLOOR 118
#define ENUM_REJECT_REASON_INVALID_MAX_FLOOR 119
#define ENUM_REJECT_REASON_MISSING_RESERVE_REPLENISH_AMOUNT_TYPE 120
#define ENUM_REJECT_REASON_INVALID_RESERVE_REPLENISH_AMOUNT_TYPE 121
#define ENUM_REJECT_REASON_MISSING_RESERVE_REPLENISH_TIME_TYPE 122
#define ENUM_REJECT_REASON_INVALID_RESERVE_REPLENISH_TIME_TYPE 123
#define ENUM_REJECT_REASON_MISSING_RANDOM_REPLENISH_VALUE 124
#define ENUM_REJECT_REASON_INVALID_RANDOM_REPLENISH_VALUE 125
#define ENUM_REJECT_REASON_INVALID_RANDOM_REPLENISH_VALUE_FOR_RESERVE_TYPE 126
#define ENUM_REJECT_REASON_MISSING_REPRICE_FREQUENCY_TYPE 127
#define ENUM_REJECT_REASON_INVALID_REPRICE_FREQUENCY_TYPE 128
#define ENUM_REJECT_REASON_MISSING_REPRICE_BEHAVIOR_TYPE 129
#define ENUM_REJECT_REASON_INVALID_REPRICE_BEHAVIOR_TYPE 130
#define ENUM_REJECT_REASON_INVALID_REPRICE_BEHAVIOR_FOR_REPRICE_FREQUENCY 131
#define ENUM_REJECT_REASON_MISSING_CUSTOMER_CAPACITY_TYPE 132
#define ENUM_REJECT_REASON_INVALID_CUSTOMER_CAPACITY 133
#define ENUM_REJECT_REASON_MISSING_EXPIRE_TIME 134
#define ENUM_REJECT_REASON_INVALID_EXPIRE_TIME 135
#define ENUM_REJECT_REASON_MISSING_PEG_TYPE 136
#define ENUM_REJECT_REASON_INVALID_PEG_TYPE 137
#define ENUM_REJECT_REASON_INVALID_MODIFIER_FOR_ORDER_TYPE 138
#define ENUM_REJECT_REASON_INVALID_MODIFIERS_COMBINATION 139
#define ENUM_REJECT_REASON_INVALID_TRADING_SESSION_FOR_ORDER_TYPE 140
#define ENUM_REJECT_REASON_INVALID_TIME_IN_FORCE_FOR_ORDER_TYPE 141
#define ENUM_REJECT_REASON_INVALID_MODIFIER_FOR_PEG_TYPE 142
#define ENUM_REJECT_REASON_INVALID_MIN_QUANTITY 143
#define ENUM_REJECT_REASON_INVALID_MPID_VALUE 145
#define ENUM_REJECT_REASON_SYMBOL_HALTED_OR_PAUSED 146
#define ENUM_REJECT_REASON_BLOCK_ISO_RISK_RULE_VIOLATED 147
#define ENUM_REJECT_REASON_BLOCK_SESSION_RISK_RULE_VIOLATED 148
#define ENUM_REJECT_REASON_BLOCK_NON_TEST_SYMBOLS_RISK_RULE_VIOLATED 149
#define ENUM_REJECT_REASON_MAX_SHARES_PER_ORDER_RISK_RULE_BREACH 150
#define ENUM_REJECT_REASON_PRICE_PERCENT_COLLAR_RISK_RULE_VIOLATED 151
#define ENUM_REJECT_REASON_PRICE_VALUE_COLLAR_RISK_RULE_VIOLATED 152
#define ENUM_REJECT_REASON_MAX_ADV_PERCENT_PER_ORDER_RISK_RULE_BREACH 153
#define ENUM_REJECT_REASON_DAILY_GROSS_NOTIONAL_EXPOSURE_RISK_RULE_BREACH 154
#define ENUM_REJECT_REASON_DAILY_NET_NOTIONAL_EXPOSURE_RISK_RULE_BREACH 155
#define ENUM_REJECT_REASON_MAX_NUM_DUPLICATE_ORDERS_RISK_RULE_BREACH 156
#define ENUM_REJECT_REASON_MAX_ORDER_RATE_RISK_RULE_BREACH 157
#define ENUM_REJECT_REASON_RESTRICTED_SECURITY_RISK_RULE_VIOLATED 158
#define ENUM_REJECT_REASON_INVALID_SELF_TRADE_PREVENTION_CONFIGURATION 159
#define ENUM_REJECT_REASON_INVALID_SELF_TRADE_PREVENTION_TYPE 160
#define ENUM_REJECT_REASON_INVALID_RISK_GROUP_ID 161
#define ENUM_REJECT_REASON_FIRM_DISABLED 162
#define ENUM_REJECT_REASON_MPID_DISABLED 163
#define ENUM_REJECT_REASON_ACCOUNT_DISABLED 164
#define ENUM_REJECT_REASON_CANNOT_TRADE_NON_TEST_SYMBOL 165
#define ENUM_REJECT_REASON_MISSING_FIRM 166
#define ENUM_REJECT_REASON_MISSING_ACCOUNT 167
#define ENUM_REJECT_REASON_MISSING_MPID 168
#define ENUM_REJECT_REASON_MISSING_RISK_GROUP 169
#define ENUM_REJECT_REASON_DAILY_MARKET_ORDER_GROSS_NOTIONAL_EXPOSURE_RISK_RULE_BREACH 170
#define ENUM_REJECT_REASON_DAILY_MARKET_ORDER_NET_NOTIONAL_EXPOSURE_RISK_RULE_BREACH 171
#define ENUM_REJECT_REASON_MISSING_DISP_METHOD_TYPE 172
#define ENUM_REJECT_REASON_MISSING_FIRM_RISK_SETTING 173
#define ENUM_REJECT_REASON_INVALID_ACCOUNT_MPID_TO_FIRM 174
#define ENUM_REJECT_REASON_INVALID_PEG_OFFSET_VALUE 175
#define ENUM_REJECT_REASON_INVALID_DISP_METHOD_TYPE 176
#define ENUM_REJECT_REASON_MISSING_CANCEL_GROUP_ID 177
#define ENUM_REJECT_REASON_INVALID_CANCEL_GROUP_ID 178
#define ENUM_REJECT_REASON_MISSING_STP_GROUP_ID 179
#define ENUM_REJECT_REASON_INVALID_STP_GROUP_ID 180
#define ENUM_REJECT_REASON_INVALID_LNK_ID 181
#define ENUM_REJECT_REASON_NULL_VALUE 255
#define ENUM_REJECT_REASON_OTHER 0
#define ENUM_REJECT_REASON_UNKNOWN_PRODUCT 1
#define ENUM_REJECT_REASON_UNKNOWN_SIDE 2
#define ENUM_REJECT_REASON_UNKNOWN_GROUP_ID 3
#define ENUM_REJECT_REASON_HIGHER_PRICE_LOWER_OR_EQUAL_TO_LOWER_PRICE 4
#define ENUM_REJECT_REASON_PRODUCT_MISSING_FOR_PRICE_RESTRICTION 5
#define ENUM_REJECT_REASON_MALFORMED_REQUEST_MISSING_CL_ORD_ID_FIELD 7
#define ENUM_REJECT_REASON_INVALID_CANCEL_GROUP_ID 8
#define ENUM_REJECT_REASON_INVALID_CL_ORD_ID 9
#define ENUM_REJECT_REASON_INVALID_LOWER_PRICE 10
#define ENUM_REJECT_REASON_INVALID_HIGHER_PRICE 11

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
 * Reserve Replenish Timing Values
 */ 
#define ENUM_RESERVE_REPLENISH_TIMING_IMMEDIATE 1
#define ENUM_RESERVE_REPLENISH_TIMING_RANDOM 2
#define ENUM_RESERVE_REPLENISH_TIMING_NULL_VALUE 255
#define ENUM_RESERVE_REPLENISH_TIMING_NO_VALUE 255

/*
 * Self Trade Prevention Values
 */ 
#define ENUM_SELF_TRADE_PREVENTION_CANCEL_NEWEST 0
#define ENUM_SELF_TRADE_PREVENTION_CANCEL_OLDEST 1
#define ENUM_SELF_TRADE_PREVENTION_DECREMENT_AND_CANCEL 2
#define ENUM_SELF_TRADE_PREVENTION_CANCEL_BOTH 3
#define ENUM_SELF_TRADE_PREVENTION_CANCEL_SMALLEST 4
#define ENUM_SELF_TRADE_PREVENTION_NULL_VALUE 255
#define ENUM_SELF_TRADE_PREVENTION_NO_VALUE 255

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY '1'
#define ENUM_SIDE_SELL '2'
#define ENUM_SIDE_SELL_SHORT '5'
#define ENUM_SIDE_SELL_SHORT_EXEMPT '6'
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
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REPLACE_REQUEST_MESSAGE 2
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REQUEST_MESSAGE 3
#define ENUM_TEMPLATE_ID_MASS_CANCEL_REQUEST_MESSAGE 4
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_PENDING_NEW_MESSAGE 5
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_NEW_MESSAGE 6
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_REJECTED_MESSAGE 7
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_MESSAGE 8
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_PENDING_CANCEL_MESSAGE 9
#define ENUM_TEMPLATE_ID_PENDING_MASS_CANCEL_MESSAGE 10
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_CANCELED_MESSAGE 11
#define ENUM_TEMPLATE_ID_MASS_CANCEL_DONE_MESSAGE 12
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_PENDING_REPLACE_MESSAGE 13
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_REPLACED_MESSAGE 14
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_CORRECTION_MESSAGE 15
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_TRADE_BREAK_MESSAGE 16
#define ENUM_TEMPLATE_ID_EXECUTION_REPORT_RESTATEMENT_MESSAGE 17
#define ENUM_TEMPLATE_ID_ORDER_CANCEL_REJECT_MESSAGE 18
#define ENUM_TEMPLATE_ID_MASS_CANCEL_REJECT_MESSAGE 20

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY '0'
#define ENUM_TIME_IN_FORCE_IMMEDIATE_OR_CANCEL '3'
#define ENUM_TIME_IN_FORCE_FILL_OR_KILL '4'
#define ENUM_TIME_IN_FORCE_GOOD_FOR_TIME 'A'
#define ENUM_TIME_IN_FORCE_REGULAR_HOURS_ONLY 'F'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Mass Cancel Reject Message
 */ 
typedef struct {
    uint64_t SendingTime;
    char ClOrdId[16];
    char SymbolMassCancelRejectSymbol[6];
    char SymbolSfx[6];
    char Side;
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
    char CxlRejResponseTo;
    uint8_t CxlRejReason;
    char LnkId[4];
} OrderCancelRejectMessageT;

/*
 * Structure: Execution Report Restatement Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    uint64_t ExecId;
    char OrdStatus;
    int64_t LastPx;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint32_t LastShares;
    uint8_t ExecRestatementReason;
    uint64_t TransactTime;
    uint8_t ExtendedRestatementReason;
    char LnkId[4];
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
    char OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
    char LnkId[4];
    char SecurityGroup[1];
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
    char OrdStatus;
    int64_t LastPx;
    uint32_t LastQty;
    uint32_t LeavesQty;
    uint32_t CumQty;
    char LnkId[4];
    char SecurityGroup[1];
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
    char SymbolExecutionReportReplacedSymbol[6];
    char SymbolSfx[6];
    char Side;
    uint32_t OrderQty;
    char OrdType;
    int64_t Price;
    uint32_t DisplayQty;
    char LocateReqd[1];
    char OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint64_t TransactTime;
    char LnkId[4];
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
    char SymbolExecutionReportPendingReplaceSymbol[6];
    char SymbolSfx[6];
    char Side;
    uint32_t OrderQty;
    char OrdType;
    int64_t Price;
    uint32_t DisplayQty;
    char LocateReqd[1];
    char OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
    char LnkId[4];
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
    char OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t CancelReason;
    uint64_t TransactTime;
    char LnkId[4];
} ExecutionReportCanceledMessageT;

/*
 * Structure: Pending Mass Cancel Message
 */ 
typedef struct {
    uint64_t SendingTime;
    char ClOrdId[16];
    char SymbolPendingMassCancelSymbol[6];
    char SymbolSfx[6];
    char Side;
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
    char SymbolExecutionReportPendingCancelSymbol[6];
    char SymbolSfx[6];
    char OrdStatus;
    uint32_t LeavesQty;
    uint32_t CumQty;
    char LnkId[4];
} ExecutionReportPendingCancelMessageT;

/*
 * Structure: Execution Report Trade Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    uint64_t ExecId;
    char OrdStatus;
    uint32_t LastQty;
    int64_t LastPx;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint64_t TransactTime;
    uint8_t LastLiquidityInd;
    char LastMkt;
    uint64_t TrdMatchingId;
    char LnkId[4];
    char SecurityGroup[1];
} ExecutionReportTradeMessageT;

/*
 * Structure: Execution Report Rejected Message
 */ 
typedef struct {
    uint64_t SendingTime;
    char ClOrdId[16];
    uint64_t ExecId;
    char OrdStatus;
    char SymbolExecutionReportRejectedSymbol[6];
    char SymbolSfx[6];
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint8_t RejectReason;
    char LnkId[4];
} ExecutionReportRejectedMessageT;

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
 * Structure: Execution Report New Message
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t OrderId;
    char ClOrdId[16];
    uint64_t ExecId;
    char Mpid[4];
    char OrdStatus;
    char SymbolExecutionReportNewSymbol[6];
    char SymbolSfx[6];
    char Side;
    char OrdType;
    uint32_t OrderQty;
    int64_t Price;
    char TimeInForce;
    char OrderCapacity;
    uint8_t CustOrderCapacity;
    ExecInstT ExecInst;
    int64_t PegOffsetValue;
    uint8_t PegPriceType;
    uint64_t ExpireTime;
    uint32_t MinQty;
    uint32_t DisplayQty;
    char DisplayMethod;
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
    char LnkId[4];
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
    char OrdStatus;
    char SymbolExecutionReportPendingNewSymbol[6];
    char SymbolSfx[6];
    char Side;
    char OrdType;
    uint32_t OrderQty;
    int64_t Price;
    char TimeInForce;
    char OrderCapacity;
    uint8_t CustOrderCapacity;
    ExecInstT ExecInst;
    int64_t PegOffsetValue;
    uint8_t PegPriceType;
    uint64_t ExpireTime;
    uint32_t MinQty;
    uint32_t DisplayQty;
    char DisplayMethod;
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
    char LnkId[4];
} ExecutionReportPendingNewMessageT;

/*
 * Structure: Mass Cancel Request Message
 */ 
typedef struct {
    char ClOrdId[16];
    char SymbolMassCancelRequestSymbol[6];
    char SymbolSfx[6];
    char Side;
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
    char SymbolOrderCancelRequestSymbol[6];
    char SymbolSfx[6];
} OrderCancelRequestMessageT;

/*
 * Structure: Order Cancel Replace Request Message
 */ 
typedef struct {
    char OrigClOrdId[16];
    char ClOrdId[16];
    char SymbolOrderCancelReplaceRequestSymbol[6];
    char SymbolSfx[6];
    char Side;
    uint32_t OrderQty;
    char OrdType;
    int64_t Price;
    uint32_t DisplayQty;
    char LocateReqd[1];
    char LnkId[4];
} OrderCancelReplaceRequestMessageT;

/*
 * Structure: New Order Single Message
 */ 
typedef struct {
    char ClOrdId[16];
    char Mpid[4];
    char SymbolNewOrderSingleSymbol[6];
    char SymbolSfx[6];
    char Side;
    uint32_t OrderQty;
    char OrdType;
    int64_t Price;
    char TimeInForce;
    char OrderCapacity;
    uint8_t CustOrderCapacity;
    ExecInstT ExecInst;
    int64_t PegOffsetValue;
    uint8_t PegPriceType;
    uint64_t ExpireTime;
    uint32_t MinQty;
    uint32_t DisplayQty;
    char DisplayMethod;
    uint8_t ReserveReplenishTiming;
    uint32_t DisplayMinIncr;
    char LocateReqd[1];
    uint8_t RepriceFrequency;
    uint8_t RepriceBehavior;
    uint16_t CancelGroupId;
    uint16_t StpGroupId;
    uint8_t SelfTradePrevention;
    uint16_t RiskGroupId;
    char LnkId[4];
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
   Version: 1.11
   Date: Friday, January 13, 2023
   Specification: MEMO SBE-v1_11.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
