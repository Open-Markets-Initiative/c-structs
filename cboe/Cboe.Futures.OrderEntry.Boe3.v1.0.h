/*******************************************************************************
 * C Structs For Cboe Futures Boe3 OrderEntry 1.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Acknowledgement Style Values
 */ 
#define ENUM_ACKNOWLEDGEMENT_STYLE_ORDER_CANCELLED_MESSAGES_ARE_SENT_FOR_EACH_CANCELLED_ORDER 'M'
#define ENUM_ACKNOWLEDGEMENT_STYLE_A_SINGLE_MASS_CANCEL_ACKNOWLEDGEMENT_MESSAGE_IS_SENT 'S'
#define ENUM_ACKNOWLEDGEMENT_STYLE_BOTH_INDIVIDUAL_ORDER_CANCELLED_AND_MASS_CANCEL_ACKNOWLEDGEMENT_MESSAGES_WILL_BE_SENT 'B'

/*
 * Base Liquidity Indicator Values
 */ 
#define ENUM_BASE_LIQUIDITY_INDICATOR_ADDED_LIQUIDITY 'A'
#define ENUM_BASE_LIQUIDITY_INDICATOR_REMOVED_LIQUIDITY 'R'
#define ENUM_BASE_LIQUIDITY_INDICATOR_MARKET_OPENING_OR_REOPENING_TRADE 'C'

/*
 * Cancel Orig On Reject Values
 */ 
#define ENUM_CANCEL_ORIG_ON_REJECT_LEAVE_ORIGINAL_ORDER_ALONE 'N'
#define ENUM_CANCEL_ORIG_ON_REJECT_CANCEL_ORIGINAL_ORDER_IF_MODIFICATION_FAILS 'Y'

/*
 * Cancel Reason Values
 */ 
#define ENUM_CANCEL_REASON_ADMIN 'A'
#define ENUM_CANCEL_REASON_UNKNOWN_MATURITY_DATE 'B'
#define ENUM_CANCEL_REASON_UNKNOWN_PRODUCT_NAME 'C'
#define ENUM_CANCEL_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_CANCEL_REASON_HALTED 'H'
#define ENUM_CANCEL_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_CANCEL_REASON_TOO_LATE_TO_CANCEL 'J'
#define ENUM_CANCEL_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_CANCEL_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE 'M'
#define ENUM_CANCEL_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_CANCEL_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_CANCEL_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_CANCEL_REASON_USER_REQUESTED 'U'
#define ENUM_CANCEL_REASON_WOULD_WASH 'V'
#define ENUM_CANCEL_REASON_ORDER_EXPIRED 'X'
#define ENUM_CANCEL_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_CANCEL_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_CANCEL_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT 'n'
#define ENUM_CANCEL_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL 's'
#define ENUM_CANCEL_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY 'y'
#define ENUM_CANCEL_REASON_SESSION_END 'z'

/*
 * Cancel Reject Reason Values
 */ 
#define ENUM_CANCEL_REJECT_REASON_ADMIN 'A'
#define ENUM_CANCEL_REJECT_REASON_UNKNOWN_MATURITY_DATE 'B'
#define ENUM_CANCEL_REJECT_REASON_UNKNOWN_PRODUCT_NAME 'C'
#define ENUM_CANCEL_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_CANCEL_REJECT_REASON_HALTED 'H'
#define ENUM_CANCEL_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_CANCEL_REJECT_REASON_TOO_LATE_TO_CANCEL 'J'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_CANCEL_REJECT_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE 'M'
#define ENUM_CANCEL_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_CANCEL_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_CANCEL_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_CANCEL_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_CANCEL_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_CANCEL_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_CANCEL_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_CANCEL_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_CANCEL_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT 'n'
#define ENUM_CANCEL_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL 's'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY 'y'
#define ENUM_CANCEL_REJECT_REASON_SESSION_END 'z'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_CUSTOMER 'C'
#define ENUM_CAPACITY_FIRM 'F'

/*
 * Clearing Firm Filter Values
 */ 
#define ENUM_CLEARING_FIRM_FILTER_NO_FILTERING_BY_CLEARING_FIRM 'A'
#define ENUM_CLEARING_FIRM_FILTER_SPECIFIED_CLEARING_FIRM_OPTIONAL_FIELD 'F'

/*
 * Cti Code Values
 */ 
#define ENUM_CTI_CODE_CTI_2 '1'
#define ENUM_CTI_CODE_CTI_2 '2'
#define ENUM_CTI_CODE_CTI_3 '3'
#define ENUM_CTI_CODE_CTI_4 '4'

/*
 * Cust Order Handling Inst Values
 */ 
#define ENUM_CUST_ORDER_HANDLING_INST_DESK 'W'
#define ENUM_CUST_ORDER_HANDLING_INST_ELECTRONIC 'Y'
#define ENUM_CUST_ORDER_HANDLING_INST_VENDORPROVIDED_PLATFORM 'C'
#define ENUM_CUST_ORDER_HANDLING_INST_SPONSORED_ACCESS_VIA_EXCHANGE_API_OR_FIX 'G'
#define ENUM_CUST_ORDER_HANDLING_INST_PREMIUM_ALGORITHMIC_TRADING_PROVIDER 'H'
#define ENUM_CUST_ORDER_HANDLING_INST_OTHER 'D'

/*
 * Gtc Order Filter Values
 */ 
#define ENUM_GTC_ORDER_FILTER_CANCEL_GTC_AND_GTD_ORDERS 'C'
#define ENUM_GTC_ORDER_FILTER_PRESERVE_GTC_AND_GTD_ORDERS 'P'

/*
 * Instrument Type Filter Values
 */ 
#define ENUM_INSTRUMENT_TYPE_FILTER_BOTH_SIMPLE_AND_COMPLEX_ORDERS 'B'
#define ENUM_INSTRUMENT_TYPE_FILTER_SIMPLE_ORDERS_ONLY 'S'
#define ENUM_INSTRUMENT_TYPE_FILTER_SPREAD_ORDERS_ONLY 'C'

/*
 * Lockout Instruction Values
 */ 
#define ENUM_LOCKOUT_INSTRUCTION_NO_LOCKOUT 'N'
#define ENUM_LOCKOUT_INSTRUCTION_LOCKOUT_UNTIL_CORRESPONDING_RESET_RISK_RECEIVED 'L'

/*
 * Login Response Status Values
 */ 
#define ENUM_LOGIN_RESPONSE_STATUS_ACCEPTED 'A'
#define ENUM_LOGIN_RESPONSE_STATUS_SESSION_IN_USE 'B'
#define ENUM_LOGIN_RESPONSE_STATUS_DISABLED 'D'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_UNIT 'I'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_MESSAGE 'M'
#define ENUM_LOGIN_RESPONSE_STATUS_NOT_AUTHORIZED 'N'
#define ENUM_LOGIN_RESPONSE_STATUS_SEQUENCE_AHEAD 'Q'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_SESSION 'S'

/*
 * Logout Reason Values
 */ 
#define ENUM_LOGOUT_REASON_USER_REQUESTED 'U'
#define ENUM_LOGOUT_REASON_ADMINISTRATIVE 'A'
#define ENUM_LOGOUT_REASON_PROTOCOL_VIOLATION '!'

/*
 * Manual Order Indicator Values
 */ 
#define ENUM_MANUAL_ORDER_INDICATOR_MANUAL_ORDER_ENTRY 'Y'
#define ENUM_MANUAL_ORDER_INDICATOR_AUTOMATED_ORDER_ENTRY 'N'

/*
 * Mass Cancel Reject Reason Values
 */ 
#define ENUM_MASS_CANCEL_REJECT_REASON_ADMIN 'A'
#define ENUM_MASS_CANCEL_REJECT_REASON_UNKNOWN_MATURITY_DATE 'B'
#define ENUM_MASS_CANCEL_REJECT_REASON_UNKNOWN_PRODUCT_NAME 'C'
#define ENUM_MASS_CANCEL_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_MASS_CANCEL_REJECT_REASON_HALTED 'H'
#define ENUM_MASS_CANCEL_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_MASS_CANCEL_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_MASS_CANCEL_REJECT_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE 'M'
#define ENUM_MASS_CANCEL_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_MASS_CANCEL_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_MASS_CANCEL_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_MASS_CANCEL_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_MASS_CANCEL_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_MASS_CANCEL_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_MASS_CANCEL_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_MASS_CANCEL_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_MASS_CANCEL_REJECT_REASON_ORDER_PERSISTED 'h'
#define ENUM_MASS_CANCEL_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_MASS_CANCEL_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_MASS_CANCEL_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT 'n'
#define ENUM_MASS_CANCEL_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_MASS_CANCEL_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL 's'
#define ENUM_MASS_CANCEL_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY 'y'
#define ENUM_MASS_CANCEL_REJECT_REASON_SESSION_END 'z'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_LOGIN_REQUEST_MESSAGE 1
#define ENUM_MESSAGE_TYPE_LOGOUT_REQUEST_MESSAGE 2
#define ENUM_MESSAGE_TYPE_CLIENT_HEARTBEAT_MESSAGE 3
#define ENUM_MESSAGE_TYPE_LOGIN_RESPONSE_MESSAGE 501
#define ENUM_MESSAGE_TYPE_REPLAY_COMPLETE_MESSAGE 502
#define ENUM_MESSAGE_TYPE_LOGOUT_RESPONSE_MESSAGE 503
#define ENUM_MESSAGE_TYPE_REPLAY_COMPLETE_MESSAGE 504
#define ENUM_MESSAGE_TYPE_NEW_ORDER_MESSAGE 1001
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE 1002
#define ENUM_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE 1003
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_ORDER_MESSAGE 1004
#define ENUM_MESSAGE_TYPE_PURGE_ORDERS_MESSAGE 1005
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_MESSAGE 1006
#define ENUM_MESSAGE_TYPE_RESET_RISK_MESSAGE 1007
#define ENUM_MESSAGE_TYPE_ORDER_ACKNOWLEDGEMENT_MESSAGE 1501
#define ENUM_MESSAGE_TYPE_ORDER_REJECTED_MESSAGE 1502
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE 1503
#define ENUM_MESSAGE_TYPE_MODIFY_REJECTED_MESSAGE 1504
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTION_MESSAGE 1505
#define ENUM_MESSAGE_TYPE_ORDER_CANCELLED_MESSAGE 1506
#define ENUM_MESSAGE_TYPE_CANCEL_REJECTED_MESSAGE 1507
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_ACKNOWLEDGEMENT_MESSAGE 1508
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_REJECTED_MESSAGE 1509
#define ENUM_MESSAGE_TYPE_PURGE_ACKNOWLEDGEMENT_MESSAGE 1510
#define ENUM_MESSAGE_TYPE_PURGE_REJECTED_MESSAGE 1511
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT_MESSAGE 1512
#define ENUM_MESSAGE_TYPE_TAS_RESTATEMENT_MESSAGE 1513
#define ENUM_MESSAGE_TYPE_VARIANCE_RESTATEMENT_MESSAGE 1514
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_ACKNOWLEDGMENT_MESSAGE 1515
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_REJECTED_MESSAGE 1516
#define ENUM_MESSAGE_TYPE_QUOTE_RESTATED_MESSAGE 1517
#define ENUM_MESSAGE_TYPE_QUOTE_EXECUTION_MESSAGE 1518
#define ENUM_MESSAGE_TYPE_QUOTE_CANCELLED_MESSAGE 1519
#define ENUM_MESSAGE_TYPE_TAS_QUOTE_RESTATEMENT_MESSAGE 1520
#define ENUM_MESSAGE_TYPE_VARIANCE_QUOTE_RESTATEMENT_MESSAGE 1521
#define ENUM_MESSAGE_TYPE_RESET_RISK_ACKNOWLEDGEMENT_MESSAGE 1522

/*
 * Modify Reject Reason Values
 */ 
#define ENUM_MODIFY_REJECT_REASON_ADMIN 'A'
#define ENUM_MODIFY_REJECT_REASON_UNKNOWN_MATURITY_DATE 'B'
#define ENUM_MODIFY_REJECT_REASON_UNKNOWN_PRODUCT_NAME 'C'
#define ENUM_MODIFY_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_MODIFY_REJECT_REASON_HALTED 'H'
#define ENUM_MODIFY_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_MODIFY_REJECT_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE 'M'
#define ENUM_MODIFY_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_MODIFY_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_MODIFY_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_MODIFY_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_MODIFY_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_MODIFY_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_MODIFY_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_MODIFY_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_MODIFY_REJECT_REASON_ORDER_PERSISTED 'h'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_MODIFY_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT 'n'
#define ENUM_MODIFY_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL 's'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY 'y'
#define ENUM_MODIFY_REJECT_REASON_SESSION_END 'z'

/*
 * Mtp Modifier Values
 */ 
#define ENUM_MTP_MODIFIER_CANCEL_NEWEST 'N'
#define ENUM_MTP_MODIFIER_CANCEL_OLDEST 'O'
#define ENUM_MTP_MODIFIER_CANCEL_BOTH 'B'

/*
 * Multileg Reporting Type Values
 */ 
#define ENUM_MULTILEG_REPORTING_TYPE_SIMPLE_INSTRUMENT_EXECUTION '1'
#define ENUM_MULTILEG_REPORTING_TYPE_SIMPLE_INSTRUMENT_EXECUTION_THAT_IS_PART_OF_A_SPREAD_EXECUTION '2'
#define ENUM_MULTILEG_REPORTING_TYPE_SPREAD_INSTRUMENT_EXECUTION '3'

/*
 * Open Close Values
 */ 
#define ENUM_OPEN_CLOSE_OPEN 'O'
#define ENUM_OPEN_CLOSE_CLOSE 'C'
#define ENUM_OPEN_CLOSE_NONE 'N'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET '1'
#define ENUM_ORD_TYPE_LIMIT '2'
#define ENUM_ORD_TYPE_STOP_LIMIT '4'

/*
 * Order Reject Reason Values
 */ 
#define ENUM_ORDER_REJECT_REASON_ADMIN 'A'
#define ENUM_ORDER_REJECT_REASON_UNKNOWN_MATURITY_DATE 'B'
#define ENUM_ORDER_REJECT_REASON_UNKNOWN_PRODUCT_NAME 'C'
#define ENUM_ORDER_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_ORDER_REJECT_REASON_HALTED 'H'
#define ENUM_ORDER_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_ORDER_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_ORDER_REJECT_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE 'M'
#define ENUM_ORDER_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_ORDER_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_ORDER_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_ORDER_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_ORDER_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_ORDER_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_ORDER_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_ORDER_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_ORDER_REJECT_REASON_ORDER_PERSISTED 'h'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_ORDER_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT 'n'
#define ENUM_ORDER_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL 's'
#define ENUM_ORDER_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY 'y'
#define ENUM_ORDER_REJECT_REASON_SESSION_END 'z'

/*
 * Pending Status Values
 */ 
#define ENUM_PENDING_STATUS_NOT_APPLICABLE 'N'
#define ENUM_PENDING_STATUS_PENDING 'P'

/*
 * Purge Reject Reason Values
 */ 
#define ENUM_PURGE_REJECT_REASON_ADMIN 'A'
#define ENUM_PURGE_REJECT_REASON_UNKNOWN_MATURITY_DATE 'B'
#define ENUM_PURGE_REJECT_REASON_UNKNOWN_PRODUCT_NAME 'C'
#define ENUM_PURGE_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_PURGE_REJECT_REASON_HALTED 'H'
#define ENUM_PURGE_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_PURGE_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_PURGE_REJECT_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE 'M'
#define ENUM_PURGE_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_PURGE_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_PURGE_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_PURGE_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_PURGE_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_PURGE_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_PURGE_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_PURGE_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_PURGE_REJECT_REASON_ORDER_PERSISTED 'h'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_PURGE_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT 'n'
#define ENUM_PURGE_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL 's'
#define ENUM_PURGE_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY 'y'
#define ENUM_PURGE_REJECT_REASON_SESSION_END 'z'

/*
 * Quote Reject Reason Values
 */ 
#define ENUM_QUOTE_REJECT_REASON_INVALID_EFID 'C'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_ID 'D'
#define ENUM_QUOTE_REJECT_REASON_NOT_ENABLED_FOR_QUOTES 'F'
#define ENUM_QUOTE_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_QUOTE_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_QUOTE_REJECT_REASON_INVALID_QUOTE_CNT 'L'
#define ENUM_QUOTE_REJECT_REASON_SYMBOLS_NOT_ON_SAME_MATCHING_ENGINE 'M'
#define ENUM_QUOTE_REJECT_REASON_INVALID_MANUAL_ORDER_INDICATOR 'O'
#define ENUM_QUOTE_REJECT_REASON_INVALID_QUOTE_UPDATE_ID 'Q'
#define ENUM_QUOTE_REJECT_REASON_FUTURES_ROOT_DOES_NOT_MATCH_ACROSS_QUOTES 'R'
#define ENUM_QUOTE_REJECT_REASON_SYMBOL_NOT_FOUND 'S'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_PREVENT_TYPE 'W'
#define ENUM_QUOTE_REJECT_REASON_ADMIN 'a'
#define ENUM_QUOTE_REJECT_REASON_INVALID_CAPACITY 'c'
#define ENUM_QUOTE_REJECT_REASON_INVALID_OEOID 'e'
#define ENUM_QUOTE_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_QUOTE_REJECT_REASON_INVALID_CTI_CODE 'i'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_METHOD 'm'
#define ENUM_QUOTE_REJECT_REASON_EXCEEDS_MAX_NOTIONAL_VALUE_PER_ORDER 'n'
#define ENUM_QUOTE_REJECT_REASON_INVALID_OPEN_CLOSE 'o'
#define ENUM_QUOTE_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL 'p'
#define ENUM_QUOTE_REJECT_REASON_INVALID_REMOVE 'r'
#define ENUM_QUOTE_REJECT_REASON_INVALID_SIDE 's'
#define ENUM_QUOTE_REJECT_REASON_SYMBOL_RANGE_UNREACHABLE 'u'
#define ENUM_QUOTE_REJECT_REASON_EXCEEDS_MAX_SIZE_PER_ORDER 'x'
#define ENUM_QUOTE_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY 'y'
#define ENUM_QUOTE_REJECT_REASON_INVALID_SIZE_MODIFIER 'z'

/*
 * Quote Result Values
 */ 
#define ENUM_QUOTE_RESULT_NEW_QUOTE 'A'
#define ENUM_QUOTE_RESULT_MODIFIED_LOSS_OF_PRIORITY 'L'
#define ENUM_QUOTE_RESULT_MODIFIED_RETAINS_PRIORITY 'R'
#define ENUM_QUOTE_RESULT_NO_CHANGE_MATCHES_EXISTING_QUOTE 'N'
#define ENUM_QUOTE_RESULT_NEW_QUOTE_BUT_MAY_REMOVE_LIQUIDITY 'D'
#define ENUM_QUOTE_RESULT_MODIFIED_BUT_MAY_REMOVE_LIQUIDITY 'd'
#define ENUM_QUOTE_RESULT_USER_CANCELLED 'U'
#define ENUM_QUOTE_RESULT_ADMIN_REJECTION 'a'
#define ENUM_QUOTE_RESULT_REJECTED_CANT_POST 'P'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_FIRM_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_QUOTE_RESULT_REJECTED_SYMBOL_NOT_FOUND 'S'
#define ENUM_QUOTE_RESULT_REJECTED_INVALID_PRICE 'p'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT 'n'
#define ENUM_QUOTE_RESULT_REJECTED_OTHER_REASON 'u'

/*
 * Replay Unspecified Unit Values
 */ 
#define ENUM_REPLAY_UNSPECIFIED_UNIT_FAIL_IF_UNIT_NOT_SPECIFIED 'F'
#define ENUM_REPLAY_UNSPECIFIED_UNIT_REPLAY_ANY_UNSPECIFIED_UNIT_FROM_ZERO 'R'
#define ENUM_REPLAY_UNSPECIFIED_UNIT_SKIP_REPLAY_OF_UNSPECIFIED_UNITS 'S'

/*
 * Restatement Reason Values
 */ 
#define ENUM_RESTATEMENT_REASON_LIQUIDITY 'Q'
#define ENUM_RESTATEMENT_REASON_WASH 'W'

/*
 * Risk Reset Result Values
 */ 
#define ENUM_RISK_RESET_RESULT_IGNORED ' '
#define ENUM_RISK_RESET_RESULT_SUCCESS 'Y'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_FIRM_RESET_LIMIT 'F'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_CUSTOM_GROUP_ID_LIMIT 'C'
#define ENUM_RISK_RESET_RESULT_REJECTED_EMPTY_RESET_RISK_FIELD 'E'
#define ENUM_RISK_RESET_RESULT_REJECTED_INCORRECT_DATA_CENTER 'I'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_PRODUCT_LEVEL_RESET_LIMIT 'S'
#define ENUM_RISK_RESET_RESULT_REJECTED_INVALID_RISK_ROOT 'U'
#define ENUM_RISK_RESET_RESULT_REJECTED_INVALID_EFID_OR_CLEARING_FIRM 'c'
#define ENUM_RISK_RESET_RESULT_REJECTED_IN_REPLAY 'y'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY '1'
#define ENUM_SIDE_SELL '2'

/*
 * Size Modifier Values
 */ 
#define ENUM_SIZE_MODIFIER_REDUCE 'R'

/*
 * Sub Liquidity Indicator Values
 */ 
#define ENUM_SUB_LIQUIDITY_INDICATOR_CARRIED_ORDER_INDICATOR 'C'
#define ENUM_SUB_LIQUIDITY_INDICATOR_QUALIFYING_MARKET_TURNER_ORDER 'U'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY '0'
#define ENUM_TIME_IN_FORCE_GTC '1'
#define ENUM_TIME_IN_FORCE_IOC '3'
#define ENUM_TIME_IN_FORCE_FOK '4'
#define ENUM_TIME_IN_FORCE_GTD '6'

/*
 * Unique Id Level Values
 */ 
#define ENUM_UNIQUE_ID_LEVEL_CANCEL_NEWEST 'N'
#define ENUM_UNIQUE_ID_LEVEL_TPH 'F'
#define ENUM_UNIQUE_ID_LEVEL_EFID 'M'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Reset Risk Acknowledgement Message
 */ 
typedef struct {
    char RiskStatusId[16];
    char RiskResetResult;
    uint64_t RequestReceivedTime;
} ResetRiskAcknowledgementMessageT;

/*
 * Structure: Variance Quote Restatement Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t ExecId;
    char QuoteSymbol[6];
    char ClearingSymbol[8];
    int64_t ClearingPrice;
    uint32_t ClearingSize;
} VarianceQuoteRestatementMessageT;

/*
 * Structure: Tas Quote Restatement Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t ExecId;
    char QuoteSymbol[6];
    char ClearingSymbol[8];
    int64_t ClearingPrice;
} TasQuoteRestatementMessageT;

/*
 * Structure: Quote Cancelled Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t OrderId;
    char QuoteSymbol[6];
    char Side;
    char CancelReason;
} QuoteCancelledMessageT;

/*
 * Structure: Quote Execution Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t OrderId;
    uint64_t ExecId;
    char QuoteSymbol[6];
    char ClearingFirm[4];
    uint32_t LastShares;
    int64_t LastPx;
    uint32_t LeavesQty;
    char Side;
    char BaseLiquidityIndicator;
    char SubLiquidityIndicator;
    char FeeCode[2];
} QuoteExecutionMessageT;

/*
 * Structure: Quote Restated Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t OrderId;
    uint32_t LeavesQty;
    int64_t WorkingPrice;
    char QuoteSymbol[6];
    char Side;
    char RestatementReason;
} QuoteRestatedMessageT;

/*
 * Structure: Quote Update Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    char QuoteRejectReason;
} QuoteUpdateRejectedMessageT;

/*
 * Structure: Quote Update
 */ 
typedef struct {
    uint64_t OrderId;
    char QuoteResult;
    char SubLiquidityIndicator;
} QuoteUpdateT;

/*
 * Structure: Quote Update Acknowledgment Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t RequestReceivedTime;
    uint8_t QuoteCnt;
} QuoteUpdateAcknowledgmentMessageT;

/*
 * Structure: Variance Restatement Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char ClearingFirm[4];
    uint64_t ExecId;
    char Side;
    int64_t Price;
    char Symbol[8];
    uint32_t MaturityDate;
    uint32_t LastShares;
    int64_t LastPx;
    char FeeCode[2];
    uint32_t TradeDate;
    int64_t ClearingPrice;
    uint32_t ClearingSize;
    char ClearingSymbol[8];
    char MultilegReportingType;
    uint64_t SecondaryExecId;
} VarianceRestatementMessageT;

/*
 * Structure: Tas Restatement Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char ClearingFirm[4];
    uint64_t ExecId;
    char Side;
    int64_t Price;
    char Symbol[8];
    uint32_t MaturityDate;
    uint32_t LastShares;
    int64_t LastPx;
    char FeeCode[2];
    uint32_t TradeDate;
    int64_t ClearingPrice;
    char ClearingSymbol[8];
    char MultilegReportingType;
    uint64_t SecondaryExecId;
} TasRestatementMessageT;

/*
 * Structure: Trade Cancel Or Correct Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    uint64_t ExecRefId;
    char Side;
    char BaseLiquidityIndicator;
    char ClearingFirm[4];
    char ClearingAccount[4];
    uint32_t LastShares;
    int64_t LastPx;
    int64_t CorrectedPrice;
    uint64_t OrigTime;
    char Symbol[8];
    char Capacity;
    uint32_t MaturityDate;
    char OpenClose;
    uint32_t CmtaNumber;
} TradeCancelOrCorrectMessageT;

/*
 * Structure: Purge Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char MassCancelId[20];
    char PurgeRejectReason;
    char Text[60];
} PurgeRejectedMessageT;

/*
 * Structure: Purge Acknowledgement Message
 */ 
typedef struct {
    char MassCancelId[20];
    uint32_t CancelledOrderCount;
    uint64_t RequestReceivedTime;
} PurgeAcknowledgementMessageT;

/*
 * Structure: Mass Cancel Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char MassCancelId[20];
    char MassCancelRejectReason;
    char Text[60];
} MassCancelRejectedMessageT;

/*
 * Structure: Mass Cancel Acknowledgement Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char MassCancelId[20];
    uint32_t CancelledOrderCount;
    uint64_t RequestReceivedTime;
} MassCancelAcknowledgementMessageT;

/*
 * Structure: Cancel Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char ClearingFirm[4];
    char CancelRejectReason;
    char Text[60];
} CancelRejectedMessageT;

/*
 * Structure: Order Cancelled Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char ClearingFirm[4];
    char CancelReason;
    uint64_t RequestReceivedTime;
} OrderCancelledMessageT;

/*
 * Structure: Order Execution Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    uint64_t ExecId;
    uint32_t LastShares;
    int64_t LastPx;
    uint32_t LeavesQty;
    char BaseLiquidityIndicator;
    char SubLiquidityIndicator;
    char Side;
    char Symbol[8];
    char ClearingFirm[4];
    uint32_t MaturityDate;
    char FeeCode[2];
    uint32_t TradeDate;
    uint32_t ClearingSize;
    char PendingStatus;
    char MultilegReportingType;
    uint64_t SecondaryExecId;
} OrderExecutionMessageT;

/*
 * Structure: Modify Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char OrigClOrdId[20];
    char ClearingFirm[4];
    char ModifyRejectReason;
    char Text[60];
} ModifyRejectedMessageT;

/*
 * Structure: Order Modified Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char OrigClOrdId[20];
    uint64_t OrderId;
    char ClearingFirm[4];
    int64_t Price;
    char OrdType;
    uint32_t OrderQty;
    uint32_t LeavesQty;
    char BaseLiquidityIndicator;
    int64_t StopPx;
    char FrequentTraderId[6];
    char CustOrderHandlingInst;
    uint64_t RequestReceivedTime;
} OrderModifiedMessageT;

/*
 * Structure: Order Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char ClearingFirm[4];
    char OrderRejectReason;
    char Text[60];
} OrderRejectedMessageT;

/*
 * Structure: Prevent Match
 */ 
typedef struct {
    char MtpModifier;
    char UniqueIdLevel;
    char TradingGroupId[1];
} PreventMatchT;

/*
 * Structure: Order Acknowledgement Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    uint64_t OrderId;
    char Side;
    int64_t Price;
    char OrdType;
    char TimeInForce;
    uint32_t MinQty;
    char Symbol[8];
    char Capacity;
    char Account[16];
    char ClearingFirm[4];
    char ClearingAccount[4];
    uint32_t OrderQty;
    PreventMatchT PreventMatch;
    uint32_t MaturityDate;
    char OpenClose;
    uint32_t LeavesQty;
    char BaseLiquidityIndicator;
    uint64_t ExpireTime;
    char SubLiquidityIndicator;
    int64_t StopPx;
    uint32_t CmtaNumber;
    char CtiCode;
    char ManualOrderIndicator;
    char Oeoid[18];
    uint32_t CumQty;
    char FrequentTraderId[6];
    char CustOrderHandlingInst;
    uint64_t RequestReceivedTime;
} OrderAcknowledgementMessageT;

/*
 * Structure: Reset Risk Message
 */ 
typedef struct {
    char RiskStatusId[16];
    char RiskReset[8];
    char ClearingFirm[4];
    char ProductName[6];
    uint16_t CustomGroupId;
} ResetRiskMessageT;

/*
 * Structure: Quote
 */ 
typedef struct {
    char QuoteSymbol[6];
    char Side;
    char OpenClose;
    int64_t Price;
    uint32_t OrderQty;
} QuoteT;

/*
 * Structure: Quote Update Message
 */ 
typedef struct {
    char QuoteUpdateId[16];
    char ClearingFirm[4];
    char ClearingAccount[4];
    uint32_t CmtaNumber;
    char Account[16];
    uint16_t CustomGroupId;
    char Capacity;
    char CtiCode;
    char ManualOrderIndicator;
    char Oeoid[18];
    char SizeModifier;
    uint8_t QuoteCnt;
} QuoteUpdateMessageT;

/*
 * Structure: Mass Cancel Inst
 */ 
typedef struct {
    char ClearingFirmFilter;
    char AcknowledgementStyle;
    char LockoutInstruction;
    char InstrumentTypeFilter;
    char GtcOrderFilter;
    char InstructionDetails[11];
} MassCancelInstT;

/*
 * Structure: Purge Orders Message
 */ 
typedef struct {
    char MassCancelId[20];
    char ClearingFirm[4];
    char ProductName[6];
    MassCancelInstT MassCancelInst;
    char ManualOrderIndicator;
    char Oeoid[18];
    uint8_t CustomGroupIdCnt;
} PurgeOrdersMessageT;

/*
 * Structure: Mass Cancel Order Message
 */ 
typedef struct {
    char MassCancelId[20];
    char ClearingFirm[4];
    char ProductName[6];
    MassCancelInstT MassCancelInst;
    char ManualOrderIndicator;
    char Oeoid[18];
} MassCancelOrderMessageT;

/*
 * Structure: Cancel Order Message
 */ 
typedef struct {
    char OrigClOrdId[20];
    char ClearingFirm[4];
    char ManualOrderIndicator;
    char Oeoid[18];
} CancelOrderMessageT;

/*
 * Structure: Modify Order Message
 */ 
typedef struct {
    char ClOrdId[20];
    char OrigClOrdId[20];
    char ClearingFirm[4];
    uint32_t OrderQty;
    int64_t Price;
    char OrdType;
    char CancelOrigOnReject;
    int64_t StopPx;
    char ManualOrderIndicator;
    char Oeoid[18];
    char FrequentTraderId[6];
    char CustOrderHandlingInst;
} ModifyOrderMessageT;

/*
 * Structure: New Order Message
 */ 
typedef struct {
    char ClOrdId[20];
    char Side;
    uint32_t OrderQty;
    char ClearingFirm[4];
    char ClearingAccount[4];
    int64_t Price;
    char OrdType;
    char TimeInForce;
    uint32_t MinQty;
    char Symbol[8];
    char Capacity;
    char Account[16];
    PreventMatchT PreventMatch;
    uint64_t ExpireTime;
    uint32_t MaturityDate;
    char OpenClose;
    uint32_t CmtaNumber;
    int64_t StopPx;
    uint16_t CustomGroupId;
    char CtiCode;
    char ManualOrderIndicator;
    char Oeoid[18];
    char FrequentTraderId[6];
    char CustOrderHandlingInst;
} NewOrderMessageT;

/*
 * Structure: Logout Response Message
 */ 
typedef struct {
    char LogoutReason;
    char LogoutReasonText[60];
} LogoutResponseMessageT;

/*
 * Structure: Unit Sequence
 */ 
typedef struct {
    uint8_t UnitNumber;
    uint32_t SequenceNumber;
} UnitSequenceT;

/*
 * Structure: Login Response Message
 */ 
typedef struct {
    char LoginResponseStatus;
    char LoginResponseText[60];
    uint32_t ClientSequence;
    uint8_t NumberOfUnits;
} LoginResponseMessageT;

/*
 * Structure: Login Request Message
 */ 
typedef struct {
    char SessionId[4];
    char SessionSubId[4];
    char Password[10];
    char ReplayUnspecifiedUnit;
    uint8_t NumberOfUnits;
} LoginRequestMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t StartOfMessage;
    uint16_t MessageLength;
    uint16_t MessageType;
    uint8_t MatchingUnit;
    uint8_t ReservedField;
    uint32_t SequenceNumber;
} MessageHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Chicago Board Options Exchange
   Version: 1.0
   Date: Friday, May 21, 2021
   Specification: CBOE_FUTURES_EXCHANGE_BOE3_SPECIFICATION.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
