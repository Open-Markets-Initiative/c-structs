/*******************************************************************************
 * C Structs For Cboe Options Edgx Boe OrderEntry 2.10 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Application Message Type Values
 */ 
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT_0X25 = 0x25
#define ENUM_APPLICATION_MESSAGE_TYPE_CROSS_ORDER_ACKNOWLEDGMENT_0X43 = 0x43
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_REJECTED_0X26 = 0x26
#define ENUM_APPLICATION_MESSAGE_TYPE_CROSS_ORDER_REJECTED_0X44 = 0x44
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_MODIFIED_0X27 = 0x27
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_RESTATED_0X28 = 0x28
#define ENUM_APPLICATION_MESSAGE_TYPE_USER_MODIFY_REJECTED_0X29 = 0x29
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_CANCELLED_0X_2A = 0x2A
#define ENUM_APPLICATION_MESSAGE_TYPE_CROSS_ORDER_CANCELLED_0X46 = 0x46
#define ENUM_APPLICATION_MESSAGE_TYPE_CANCEL_REJECTED_0X_2B = 0x2B
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_EXECUTION_0X_2C = 0x2C
#define ENUM_APPLICATION_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT_0X_2D = 0x2D
#define ENUM_APPLICATION_MESSAGE_TYPE_PURGE_REJECTED_0X48 = 0x48
#define ENUM_APPLICATION_MESSAGE_TYPE_COMPLEX_INSTRUMENT_ACCEPTED_0X_4D = 0x4D
#define ENUM_APPLICATION_MESSAGE_TYPE_COMPLEX_INSTRUMENT_REJECTED_0X_4E = 0x4E

/*
 * Attributed Quote Values
 */ 
#define ENUM_ATTRIBUTED_QUOTE_DO_NOT_ATTRIBUTE_FIRM_EXECUTING_BROKER_ID_N = 'N'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_FIRM_EXECUTING_BROKER_ID_Y = 'Y'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_CLIENT_ID_ONLY_C = 'C'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_BOTH_CLEARING_FIRM_AND_CLIENT_ID_Z = 'Z'

/*
 * Auto Match Values
 */ 
#define ENUM_AUTO_MATCH_DISABLED_0 = '0'
#define ENUM_AUTO_MATCH_MARKET_1 = '1'
#define ENUM_AUTO_MATCH_LIMIT_1 = '1'
#define ENUM_AUTO_MATCH_ATTRIBUTE_BOTH_CLEARING_FIRM_AND_CLIENT_ID_Z = 'Z'

/*
 * Base Liquidity Indicator Values
 */ 
#define ENUM_BASE_LIQUIDITY_INDICATOR_ADDED_LIQUIDITY_A = 'A'
#define ENUM_BASE_LIQUIDITY_INDICATOR_REMOVED_LIQUIDITY_R = 'R'
#define ENUM_BASE_LIQUIDITY_INDICATOR_ROUTED_TO_ANOTHER_MARKET_X = 'X'
#define ENUM_BASE_LIQUIDITY_INDICATOR_AUCTION_OR_UNCROSSING_C = 'C'

/*
 * Cancel Orig On Reject Values
 */ 
#define ENUM_CANCEL_ORIG_ON_REJECT_LEAVE_ORIGINAL_ORDER_ALONE_N = 'N'
#define ENUM_CANCEL_ORIG_ON_REJECT_CANCEL_ORIGINAL_ORDER_IF_MODIFICATION_FAILS_Y = 'Y'

/*
 * Cancel Reason Values
 */ 
#define ENUM_CANCEL_REASON_ADMIN_A = 'A'
#define ENUM_CANCEL_REASON_DUPLICATE_IDENTIFIER_D = 'D'
#define ENUM_CANCEL_REASON_HALTED_H = 'H'
#define ENUM_CANCEL_REASON_INCORRECT_DATA_CENTER_I = 'I'
#define ENUM_CANCEL_REASON_TOO_LATE_TO_CANCEL_J = 'J'
#define ENUM_CANCEL_REASON_ORDER_RATE_THRESHOLD_EXCEEDED_K = 'K'
#define ENUM_CANCEL_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO_L = 'L'
#define ENUM_CANCEL_REASON_ORDER_SIZE_EXCEEDED_M = 'M'
#define ENUM_CANCEL_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST_N = 'N'
#define ENUM_CANCEL_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER_O = 'O'
#define ENUM_CANCEL_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL_P = 'P'
#define ENUM_CANCEL_REASON_WAITING_FOR_FIRST_TRADE_Q = 'Q'
#define ENUM_CANCEL_REASON_ROUTING_UNAVAILABLE_R = 'R'
#define ENUM_CANCEL_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO_T = 'T'
#define ENUM_CANCEL_REASON_USER_REQUESTED_U = 'U'
#define ENUM_CANCEL_REASON_WOULD_WASH_V = 'V'
#define ENUM_CANCEL_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE_W = 'W'
#define ENUM_CANCEL_REASON_ORDER_EXPIRED_X = 'X'
#define ENUM_CANCEL_REASON_SYMBOL_NOT_SUPPORTED_Y = 'Y'
#define ENUM_CANCEL_REASON_UNFORESEEN_REASON_Z = 'Z'
#define ENUM_CANCEL_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED_C = 'c'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL_F = 'f'
#define ENUM_CANCEL_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED_M = 'm'
#define ENUM_CANCEL_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED_O = 'o'
#define ENUM_CANCEL_REASON_RESERVE_RELOAD_R = 'r'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL_S = 's'
#define ENUM_CANCEL_REASON_WOULD_REMOVE_ON_UNSLIDE_W = 'w'
#define ENUM_CANCEL_REASON_CROSSED_MARKET_X = 'x'
#define ENUM_CANCEL_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY_Y = 'y'
#define ENUM_CANCEL_REASON_SESSION_END_Z = 'z'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL_+ = '+'

/*
 * Cancel Reject Reason Values
 */ 
#define ENUM_CANCEL_REJECT_REASON_ADMIN_A = 'A'
#define ENUM_CANCEL_REJECT_REASON_DUPLICATE_IDENTIFIER_D = 'D'
#define ENUM_CANCEL_REJECT_REASON_HALTED_H = 'H'
#define ENUM_CANCEL_REJECT_REASON_INCORRECT_DATA_CENTER_I = 'I'
#define ENUM_CANCEL_REJECT_REASON_TOO_LATE_TO_CANCEL_J = 'J'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED_K = 'K'
#define ENUM_CANCEL_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO_L = 'L'
#define ENUM_CANCEL_REJECT_REASON_ORDER_SIZE_EXCEEDED_M = 'M'
#define ENUM_CANCEL_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST_N = 'N'
#define ENUM_CANCEL_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER_O = 'O'
#define ENUM_CANCEL_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL_P = 'P'
#define ENUM_CANCEL_REJECT_REASON_WAITING_FOR_FIRST_TRADE_Q = 'Q'
#define ENUM_CANCEL_REJECT_REASON_ROUTING_UNAVAILABLE_R = 'R'
#define ENUM_CANCEL_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO_T = 'T'
#define ENUM_CANCEL_REJECT_REASON_USER_REQUESTED_U = 'U'
#define ENUM_CANCEL_REJECT_REASON_WOULD_WASH_V = 'V'
#define ENUM_CANCEL_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE_W = 'W'
#define ENUM_CANCEL_REJECT_REASON_ORDER_EXPIRED_X = 'X'
#define ENUM_CANCEL_REJECT_REASON_SYMBOL_NOT_SUPPORTED_Y = 'Y'
#define ENUM_CANCEL_REJECT_REASON_UNFORESEEN_REASON_Z = 'Z'
#define ENUM_CANCEL_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED_C = 'c'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL_F = 'f'
#define ENUM_CANCEL_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED_M = 'm'
#define ENUM_CANCEL_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED_O = 'o'
#define ENUM_CANCEL_REJECT_REASON_RESERVE_RELOAD_R = 'r'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL_S = 's'
#define ENUM_CANCEL_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE_W = 'w'
#define ENUM_CANCEL_REJECT_REASON_CROSSED_MARKET_X = 'x'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY_Y = 'y'
#define ENUM_CANCEL_REJECT_REASON_SESSION_END_Z = 'z'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL_+ = '+'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_CUSTOMER_C = 'C'
#define ENUM_CAPACITY_MARKET_MAKER_M = 'M'
#define ENUM_CAPACITY_FIRM_F = 'F'
#define ENUM_CAPACITY_PROFESSIONAL_CUSTOMER_U = 'U'
#define ENUM_CAPACITY_NON_CBOE_MARKET_MAKER_N = 'N'
#define ENUM_CAPACITY_BROKER_DEALER_B = 'B'
#define ENUM_CAPACITY_JOINT_BACK_OFFICE_J = 'J'

/*
 * Cross Exclusion Indicator Values
 */ 
#define ENUM_CROSS_EXCLUSION_INDICATOR_NO_N = 'N'
#define ENUM_CROSS_EXCLUSION_INDICATOR_YES_Y = 'Y'

/*
 * Cross Prioritization Values
 */ 
#define ENUM_CROSS_PRIORITIZATION_BUY_1 = '1'
#define ENUM_CROSS_PRIORITIZATION_SELL_2 = '2'

/*
 * Display Indicator Values
 */ 
#define ENUM_DISPLAY_INDICATOR_DETERMINED_BY_PORT_LEVEL_SETTING_V = 'V'
#define ENUM_DISPLAY_INDICATOR_PRICE_ADJUST_P = 'P'
#define ENUM_DISPLAY_INDICATOR_MULTIPLE_PRICE_ADJUST_M = 'm'
#define ENUM_DISPLAY_INDICATOR_REJECT_THE_ORDER_IF_IT_CANNOT_BE_BOOKED_AND_DISPLAYED_WITHOUT_ADJUSTMENT_M = 'm'

/*
 * Equity Ex Destination Values
 */ 
#define ENUM_EQUITY_EX_DESTINATION_COWEN_C = 'C'

/*
 * Equity Leg Short Sell Values
 */ 
#define ENUM_EQUITY_LEG_SHORT_SELL_SELL_SHORT_5 = '5'
#define ENUM_EQUITY_LEG_SHORT_SELL_SELL_SHORT_EXEMPT_6 = '6'
#define ENUM_EQUITY_LEG_SHORT_SELL_DISABLED_0 = '0'
#define ENUM_EQUITY_LEG_SHORT_SELL_ENABLED_1 = '1'

/*
 * Equity Trade Venue Values
 */ 
#define ENUM_EQUITY_TRADE_VENUE_NYSE_AMERICAN_A = 'A'
#define ENUM_EQUITY_TRADE_VENUE_NASDAQ_BX_B = 'B'
#define ENUM_EQUITY_TRADE_VENUE_NYSE_NATIONAL_C = 'C'
#define ENUM_EQUITY_TRADE_VENUE_INVESTORS_EXCHANGE_I = 'I'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_EDGA_EXCHANGE_J = 'J'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_EDGX_EXCHANGE_K = 'K'
#define ENUM_EQUITY_TRADE_VENUE_CHX_M = 'M'
#define ENUM_EQUITY_TRADE_VENUE_NYSE_N = 'N'
#define ENUM_EQUITY_TRADE_VENUE_NYSE_ARCA_P = 'P'
#define ENUM_EQUITY_TRADE_VENUE_NASDAQ_Q = 'Q'
#define ENUM_EQUITY_TRADE_VENUE_NASDAQ_PSX_X = 'X'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_BYX_EXCHANGE_Y = 'Y'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_BZX_EXCHANGE_Z = 'Z'

/*
 * Ex Destination Values
 */ 
#define ENUM_EX_DESTINATION_NYSE_ARCA_A = 'A'
#define ENUM_EX_DESTINATION_NASDAQ_ISE_E = 'E'
#define ENUM_EX_DESTINATION_MIAX_F = 'F'
#define ENUM_EX_DESTINATION_MIAX_PEARL_P = 'P'
#define ENUM_EX_DESTINATION_MIAX_EMERALD_D = 'D'
#define ENUM_EX_DESTINATION_EDGX_OPTIONS_G = 'G'
#define ENUM_EX_DESTINATION_C2H = 'H'
#define ENUM_EX_DESTINATION_BOX_K = 'K'
#define ENUM_EX_DESTINATION_NASDAQ_N = 'N'
#define ENUM_EX_DESTINATION_NASDAQ_BX_S = 'S'
#define ENUM_EX_DESTINATION_NYSE_AMERICAN_U = 'U'
#define ENUM_EX_DESTINATION_C1W = 'W'
#define ENUM_EX_DESTINATION_NASDAQ_PHLX_X = 'X'
#define ENUM_EX_DESTINATION_BZX_OPTIONS_Z = 'Z'
#define ENUM_EX_DESTINATION_NASDAQ_GEMX_G = 'g'

/*
 * Exec Inst Values
 */ 
#define ENUM_EXEC_INST_INTERMARKET_SWEEP_F = 'f'
#define ENUM_EXEC_INST_ALL_OR_NONE_G = 'G'
#define ENUM_EXEC_INST_SWEEP_S = 's'

/*
 * Login Response Status Values
 */ 
#define ENUM_LOGIN_RESPONSE_STATUS_LOGIN_ACCEPTED_A = 'A'
#define ENUM_LOGIN_RESPONSE_STATUS_NOT_AUTHORIZED_N = 'N'
#define ENUM_LOGIN_RESPONSE_STATUS_SESSION_IS_DISABLED_D = 'D'
#define ENUM_LOGIN_RESPONSE_STATUS_SESSION_IN_USE_B = 'B'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_SESSION_S = 'S'
#define ENUM_LOGIN_RESPONSE_STATUS_SEQUENCE_AHEAD_IN_LOGIN_MESSAGE_Q = 'Q'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_UNIT_GIVEN_IN_LOGIN_MESSAGE_I = 'I'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_RETURN_BIT_FIELD_IN_LOGIN_MESSAGE_F = 'F'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_LOGIN_REQUEST_MESSAGE_STRUCTURE_M = 'M'

/*
 * Logout Reason Values
 */ 
#define ENUM_LOGOUT_REASON_USER_REQUESTED_U = 'U'
#define ENUM_LOGOUT_REASON_END_OF_DAY_E = 'E'
#define ENUM_LOGOUT_REASON_ADMINISTRATIVE_A = 'A'
#define ENUM_LOGOUT_REASON_PROTOCOL_VIOLATION_! = '!'

/*
 * Mass Cancel Lockout Values
 */ 
#define ENUM_MASS_CANCEL_LOCKOUT_NO_LOCKOUT_0 = '0'
#define ENUM_MASS_CANCEL_LOCKOUT_LOCKOUT_0 = '0'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_LOGIN_REQUEST_MESSAGE_0X37 = 0x37
#define ENUM_MESSAGE_TYPE_LOGOUT_REQUEST_MESSAGE_0X02 = 0x02
#define ENUM_MESSAGE_TYPE_CLIENT_HEARTBEAT_MESSAGE_0X03 = 0x03
#define ENUM_MESSAGE_TYPE_LOGIN_RESPONSE_MESSAGE_0X24 = 0x24
#define ENUM_MESSAGE_TYPE_LOGOUT_MESSAGE_0X02 = 0x02
#define ENUM_MESSAGE_TYPE_SERVER_HEARTBEAT_MESSAGE_0X09 = 0x09
#define ENUM_MESSAGE_TYPE_REPLAY_COMPLETE_MESSAGE_0X13 = 0x13
#define ENUM_MESSAGE_TYPE_NEW_ORDER_MESSAGE_0X38 = 0x38
#define ENUM_MESSAGE_TYPE_NEW_ORDER_CROSS_MESSAGE_0X41 = 0x41
#define ENUM_MESSAGE_TYPE_NEW_ORDER_COMPLEX_MESSAGE_0X_4B = 0x4B
#define ENUM_MESSAGE_TYPE_NEW_ORDER_CROSS_MULTILEG_MESSAGE_0X_5A = 0x5A
#define ENUM_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE_0X39 = 0x39
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE_0X_3A = 0x3A
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_MESSAGE_0X55 = 0x55
#define ENUM_MESSAGE_TYPE_SHORT_QUOTE_UPDATE_MESSAGE_0X59 = 0x59
#define ENUM_MESSAGE_TYPE_PURGE_ORDER_MESSAGE_0X47 = 0x47
#define ENUM_MESSAGE_TYPE_RISK_RESET_MESSAGE_0X56 = 0x56
#define ENUM_MESSAGE_TYPE_NEW_COMPLEX_INSTRUMENT_MESSAGE_0X_4C = 0x4C
#define ENUM_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT_MESSAGE_0X25 = 0x25
#define ENUM_MESSAGE_TYPE_CROSS_ORDER_ACKNOWLEDGMENT_MESSAGE_0X43 = 0x43
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_ACKNOWLEDGMENT_MESSAGE_0X25 = 0x25
#define ENUM_MESSAGE_TYPE_ORDER_REJECTED_MESSAGE_0X26 = 0x26
#define ENUM_MESSAGE_TYPE_CROSS_ORDER_REJECTED_MESSAGE_0X44 = 0x44
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_REJECTED_MESSAGE_0X58 = 0x58
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE_0X27 = 0x27
#define ENUM_MESSAGE_TYPE_ORDER_RESTATED_MESSAGE_0X28 = 0x28
#define ENUM_MESSAGE_TYPE_QUOTE_RESTATED_MESSAGE_0X52 = 0x52
#define ENUM_MESSAGE_TYPE_USER_MODIFY_REJECTED_MESSAGE_0X29 = 0x29
#define ENUM_MESSAGE_TYPE_ORDER_CANCELLED_MESSAGE_0X_2A = 0x2a
#define ENUM_MESSAGE_TYPE_QUOTE_CANCELLED_MESSAGE_0X53 = 0x53
#define ENUM_MESSAGE_TYPE_CROSS_ORDER_CANCELLED_MESSAGE_0X46 = 0x46
#define ENUM_MESSAGE_TYPE_CANCEL_REJECTED_MESSAGE_0X_2B = 0x2B
#define ENUM_MESSAGE_TYPE_QUOTE_EXECUTION_MESSAGE_0X54 = 0x54
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT_MESSAGE_0X_2D = 0x2D
#define ENUM_MESSAGE_TYPE_PURGE_REJECTED_MESSAGE_0X48 = 0x48
#define ENUM_MESSAGE_TYPE_RESET_RISK_ACKNOWLEDGMENT_MESSAGE_0X57 = 0x57
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_ACKNOWLEDGMENT_MESSAGE_0X36 = 0x36
#define ENUM_MESSAGE_TYPE_COMPLEX_INSTRUMENT_ACCEPTED_MESSAGE_0X_4D = 0x4D
#define ENUM_MESSAGE_TYPE_COMPLEX_INSTRUMENT_REJECTED_MESSAGE_0X_4D = 0x4D

/*
 * Modify Reject Reason Values
 */ 
#define ENUM_MODIFY_REJECT_REASON_ADMIN_A = 'A'
#define ENUM_MODIFY_REJECT_REASON_DUPLICATE_IDENTIFIER_D = 'D'
#define ENUM_MODIFY_REJECT_REASON_HALTED_H = 'H'
#define ENUM_MODIFY_REJECT_REASON_INCORRECT_DATA_CENTER_I = 'I'
#define ENUM_MODIFY_REJECT_REASON_TOO_LATE_TO_CANCEL_J = 'J'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED_K = 'K'
#define ENUM_MODIFY_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO_L = 'L'
#define ENUM_MODIFY_REJECT_REASON_ORDER_SIZE_EXCEEDED_M = 'M'
#define ENUM_MODIFY_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST_N = 'N'
#define ENUM_MODIFY_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER_O = 'O'
#define ENUM_MODIFY_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL_P = 'P'
#define ENUM_MODIFY_REJECT_REASON_WAITING_FOR_FIRST_TRADE_Q = 'Q'
#define ENUM_MODIFY_REJECT_REASON_ROUTING_UNAVAILABLE_R = 'R'
#define ENUM_MODIFY_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO_T = 'T'
#define ENUM_MODIFY_REJECT_REASON_USER_REQUESTED_U = 'U'
#define ENUM_MODIFY_REJECT_REASON_WOULD_WASH_V = 'V'
#define ENUM_MODIFY_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE_W = 'W'
#define ENUM_MODIFY_REJECT_REASON_ORDER_EXPIRED_X = 'X'
#define ENUM_MODIFY_REJECT_REASON_SYMBOL_NOT_SUPPORTED_Y = 'Y'
#define ENUM_MODIFY_REJECT_REASON_UNFORESEEN_REASON_Z = 'Z'
#define ENUM_MODIFY_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED_C = 'c'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL_F = 'f'
#define ENUM_MODIFY_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED_M = 'm'
#define ENUM_MODIFY_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED_O = 'o'
#define ENUM_MODIFY_REJECT_REASON_RESERVE_RELOAD_R = 'r'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL_S = 's'
#define ENUM_MODIFY_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE_W = 'w'
#define ENUM_MODIFY_REJECT_REASON_CROSSED_MARKET_X = 'x'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY_Y = 'y'
#define ENUM_MODIFY_REJECT_REASON_SESSION_END_Z = 'z'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL_+ = '+'

/*
 * Multi Class Sprd Values
 */ 
#define ENUM_MULTI_CLASS_SPRD_NO_N = 'N'
#define ENUM_MULTI_CLASS_SPRD_YES_Y = 'Y'

/*
 * No Unspecified Unit Replay Values
 */ 
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_FALSE_0 = '0'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TRUE_1 = '1'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TEST_T = 'T'

/*
 * Open Close Values
 */ 
#define ENUM_OPEN_CLOSE_OPEN_O = 'O'
#define ENUM_OPEN_CLOSE_CLOSE_C = 'C'
#define ENUM_OPEN_CLOSE_NONE_N = 'N'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET_1 = '1'
#define ENUM_ORD_TYPE_LIMIT_2 = '2'
#define ENUM_ORD_TYPE_STOP_3 = '3'
#define ENUM_ORD_TYPE_STOP_LIMIT_4 = '4'

/*
 * Order Reject Reason Values
 */ 
#define ENUM_ORDER_REJECT_REASON_ADMIN_A = 'A'
#define ENUM_ORDER_REJECT_REASON_DUPLICATE_IDENTIFIER_D = 'D'
#define ENUM_ORDER_REJECT_REASON_HALTED_H = 'H'
#define ENUM_ORDER_REJECT_REASON_INCORRECT_DATA_CENTER_I = 'I'
#define ENUM_ORDER_REJECT_REASON_TOO_LATE_TO_CANCEL_J = 'J'
#define ENUM_ORDER_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED_K = 'K'
#define ENUM_ORDER_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO_L = 'L'
#define ENUM_ORDER_REJECT_REASON_ORDER_SIZE_EXCEEDED_M = 'M'
#define ENUM_ORDER_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST_N = 'N'
#define ENUM_ORDER_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER_O = 'O'
#define ENUM_ORDER_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL_P = 'P'
#define ENUM_ORDER_REJECT_REASON_WAITING_FOR_FIRST_TRADE_Q = 'Q'
#define ENUM_ORDER_REJECT_REASON_ROUTING_UNAVAILABLE_R = 'R'
#define ENUM_ORDER_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO_T = 'T'
#define ENUM_ORDER_REJECT_REASON_USER_REQUESTED_U = 'U'
#define ENUM_ORDER_REJECT_REASON_WOULD_WASH_V = 'V'
#define ENUM_ORDER_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE_W = 'W'
#define ENUM_ORDER_REJECT_REASON_ORDER_EXPIRED_X = 'X'
#define ENUM_ORDER_REJECT_REASON_SYMBOL_NOT_SUPPORTED_Y = 'Y'
#define ENUM_ORDER_REJECT_REASON_UNFORESEEN_REASON_Z = 'Z'
#define ENUM_ORDER_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED_C = 'c'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL_F = 'f'
#define ENUM_ORDER_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED_M = 'm'
#define ENUM_ORDER_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED_O = 'o'
#define ENUM_ORDER_REJECT_REASON_RESERVE_RELOAD_R = 'r'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL_S = 's'
#define ENUM_ORDER_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE_W = 'w'
#define ENUM_ORDER_REJECT_REASON_CROSSED_MARKET_X = 'x'
#define ENUM_ORDER_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY_Y = 'y'
#define ENUM_ORDER_REJECT_REASON_SESSION_END_Z = 'z'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL_+ = '+'

/*
 * Ors Values
 */ 
#define ENUM_ORS_NO_N = 'N'
#define ENUM_ORS_YES_Y = 'Y'

/*
 * Param Group Type Values
 */ 
#define ENUM_PARAM_GROUP_TYPE_UNIT_SEQUENCES_0X80 = 0x80
#define ENUM_PARAM_GROUP_TYPE_RETURN_BITFIELDS_0X81 = 0x81

/*
 * Posting Instruction Values
 */ 
#define ENUM_POSTING_INSTRUCTION_POST_ONLY_P = 'P'
#define ENUM_POSTING_INSTRUCTION_BOOK_ONLY_B = 'B'
#define ENUM_POSTING_INSTRUCTION_BOOK_ONLY_NO_SLIDE_N = 'N'
#define ENUM_POSTING_INSTRUCTION_POST_ONLY_NO_SLIDE_R = 'R'

/*
 * Price Type Values
 */ 
#define ENUM_PRICE_TYPE_FIXED_CABINET_TRADE_PRICE_0 = '0'
#define ENUM_PRICE_TYPE_PERCENTAGE_1 = '1'
#define ENUM_PRICE_TYPE_PRICE_PER_UNIT_2 = '2'
#define ENUM_PRICE_TYPE_FIXED_AMOUNT_3 = '3'

/*
 * Purge Reject Reason Values
 */ 
#define ENUM_PURGE_REJECT_REASON_ADMIN_A = 'A'
#define ENUM_PURGE_REJECT_REASON_DUPLICATE_IDENTIFIER_D = 'D'
#define ENUM_PURGE_REJECT_REASON_HALTED_H = 'H'
#define ENUM_PURGE_REJECT_REASON_INCORRECT_DATA_CENTER_I = 'I'
#define ENUM_PURGE_REJECT_REASON_TOO_LATE_TO_CANCEL_J = 'J'
#define ENUM_PURGE_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED_K = 'K'
#define ENUM_PURGE_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO_L = 'L'
#define ENUM_PURGE_REJECT_REASON_ORDER_SIZE_EXCEEDED_M = 'M'
#define ENUM_PURGE_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST_N = 'N'
#define ENUM_PURGE_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER_O = 'O'
#define ENUM_PURGE_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL_P = 'P'
#define ENUM_PURGE_REJECT_REASON_WAITING_FOR_FIRST_TRADE_Q = 'Q'
#define ENUM_PURGE_REJECT_REASON_ROUTING_UNAVAILABLE_R = 'R'
#define ENUM_PURGE_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO_T = 'T'
#define ENUM_PURGE_REJECT_REASON_USER_REQUESTED_U = 'U'
#define ENUM_PURGE_REJECT_REASON_WOULD_WASH_V = 'V'
#define ENUM_PURGE_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE_W = 'W'
#define ENUM_PURGE_REJECT_REASON_ORDER_EXPIRED_X = 'X'
#define ENUM_PURGE_REJECT_REASON_SYMBOL_NOT_SUPPORTED_Y = 'Y'
#define ENUM_PURGE_REJECT_REASON_UNFORESEEN_REASON_Z = 'Z'
#define ENUM_PURGE_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED_C = 'c'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL_F = 'f'
#define ENUM_PURGE_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED_M = 'm'
#define ENUM_PURGE_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED_O = 'o'
#define ENUM_PURGE_REJECT_REASON_RESERVE_RELOAD_R = 'r'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL_S = 's'
#define ENUM_PURGE_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE_W = 'w'
#define ENUM_PURGE_REJECT_REASON_CROSSED_MARKET_X = 'x'
#define ENUM_PURGE_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY_Y = 'y'
#define ENUM_PURGE_REJECT_REASON_SESSION_END_Z = 'z'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL_+ = '+'

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT_0 = '0'
#define ENUM_PUT_OR_CALL_CALL_1 = '1'

/*
 * Quote Liquidity Indicator Values
 */ 
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NORMAL_N = 'N'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NBBO_SETTER_S = 'S'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NBBO_JOINER_J = 'J'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_MARKET_TURNER_U = 'U'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NO_QUOTE_ON_BOOK = ' '

/*
 * Quote Reject Reason Values
 */ 
#define ENUM_QUOTE_REJECT_REASON_INVALID_EFID_C = 'C'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_ID_D = 'D'
#define ENUM_QUOTE_REJECT_REASON_INVALID_SESSION_ELIGIBILITY_E = 'E'
#define ENUM_QUOTE_REJECT_REASON_NOT_ENABLED_FOR_QUOTES_F = 'F'
#define ENUM_QUOTE_REJECT_REASON_INCORRECT_DATA_CENTER_I = 'I'
#define ENUM_QUOTE_REJECT_REASON_INVALID_QUOTE_CNT_L = 'L'
#define ENUM_QUOTE_REJECT_REASON_SYMBOLS_NOT_ON_SAME_MATCHING_ENGINE_M = 'M'
#define ENUM_QUOTE_REJECT_REASON_INVALID_POSTING_INSTRUCTION_P = 'P'
#define ENUM_QUOTE_REJECT_REASON_INVALID_QUOTE_UPDATE_ID_Q = 'Q'
#define ENUM_QUOTE_REJECT_REASON_RISK_ROOT_DOES_NOT_MATCH_ACROSS_QUOTES_R = 'R'
#define ENUM_QUOTE_REJECT_REASON_SYMBOL_NOT_FOUND_S = 'S'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_PREVENT_TYPE_W = 'W'
#define ENUM_QUOTE_REJECT_REASON_ADMIN_A = 'a'
#define ENUM_QUOTE_REJECT_REASON_INVALID_CAPACITY_C = 'C'
#define ENUM_QUOTE_REJECT_REASON_CLOSE_ONLY_D = 'd'
#define ENUM_QUOTE_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL_F = 'f'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_METHOD_M = 'm'
#define ENUM_QUOTE_REJECT_REASON_INVALID_OPEN_CLOSE_P = 'p'
#define ENUM_QUOTE_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL_P = 'p'
#define ENUM_QUOTE_REJECT_REASON_INVALID_REMOVE_R = 'r'
#define ENUM_QUOTE_REJECT_REASON_INVALID_SIDE_S = 's'
#define ENUM_QUOTE_REJECT_REASON_SYMBOL_RANGE_UNREACHABLE_U = 'u'
#define ENUM_QUOTE_REJECT_REASON_QUOTE_RECEIVED_BY_CBOE_DURING_REPLAY_Y = 'y'

/*
 * Quote Result Values
 */ 
#define ENUM_QUOTE_RESULT_NEW_QUOTE_A = 'A'
#define ENUM_QUOTE_RESULT_MODIFIED_LOSS_OF_PRIORITY_L = 'L'
#define ENUM_QUOTE_RESULT_MODIFIED_RETAINS_PRIORITY_R = 'R'
#define ENUM_QUOTE_RESULT_NO_CHANGE_MATCHES_EXISTING_QUOTE_N = 'N'
#define ENUM_QUOTE_RESULT_NEW_QUOTE_BUT_MAY_REMOVE_LIQUIDITY_D = 'D'
#define ENUM_QUOTE_RESULT_MODIFIED_BUT_MAY_REMOVE_LIQUIDITY_D = 'd'
#define ENUM_QUOTE_RESULT_USER_CANCELLED_U = 'U'
#define ENUM_QUOTE_RESULT_ADMIN_REJECTION_A = 'a'
#define ENUM_QUOTE_RESULT_REJECTED_CAN_’T_POST_P = 'P'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_FIRM_OR_CUSTOM_GROUP_ID_LEVEL_F = 'f'
#define ENUM_QUOTE_RESULT_REJECTED_SYMBOL_NOT_FOUND_S = 'S'
#define ENUM_QUOTE_RESULT_REJECTED_INVALID_PRICE_P = 'p'
#define ENUM_QUOTE_RESULT_INVALID_REMOVE_R = 'r'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_RISK_ROOT_LEVEL_S = 's'
#define ENUM_QUOTE_RESULT_REJECTED_OTHER_REASON_U = 'u'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_EFID_GROUP_LEVEL_+ = '+'
#define ENUM_QUOTE_RESULT_REJECTED_CLOSING_ONLY_SERIES_C = 'c'

/*
 * Restatement Reason Values
 */ 
#define ENUM_RESTATEMENT_REASON_RELOAD_L = 'L'
#define ENUM_RESTATEMENT_REASON_PRICE_SLIDING_REPRICE_P = 'P'
#define ENUM_RESTATEMENT_REASON_LIQUIDITY_UPDATED_Q = 'Q'
#define ENUM_RESTATEMENT_REASON_REROUTE_R = 'R'
#define ENUM_RESTATEMENT_REASON_SHIP_AND_POST_S = 'S'
#define ENUM_RESTATEMENT_REASON_WASH_W = 'W'
#define ENUM_RESTATEMENT_REASON_LIQUIDITY_Q = 'Q'

/*
 * Revised Legs Values
 */ 
#define ENUM_REVISED_LEGS_NOT_REORDERED_1 = '1'
#define ENUM_REVISED_LEGS_REORDERED_2 = '2'

/*
 * Risk Reset Result Values
 */ 
#define ENUM_RISK_RESET_RESULT_IGNORED = ' '
#define ENUM_RISK_RESET_RESULT_SUCCESS_Y = 'Y'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_FIRM_RESET_LIMIT_F = 'F'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_CUSTOM_GROUP_ID_LIMIT_C = 'C'
#define ENUM_RISK_RESET_RESULT_REJECTED_AUTOMATIC_RISK_RESETS_ARE_DISABLED_D = 'D'
#define ENUM_RISK_RESET_RESULT_REJECTED_EMPTY_RESET_RISK_FIELD_E = 'E'
#define ENUM_RISK_RESET_RESULT_REJECTED_INCORRECT_DATA_CENTER_I = 'I'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_RISK_ROOT_RESET_LIMIT_S = 'S'
#define ENUM_RISK_RESET_RESULT_REJECTED_INVALID_RISK_ROOT_U = 'U'
#define ENUM_RISK_RESET_RESULT_REJECTED_INVALID_EFID_OR_CLEARING_FIRM_C = 'c'
#define ENUM_RISK_RESET_RESULT_REJECTED_IN_REPLAY_Y = 'y'

/*
 * Session Eligibility Values
 */ 
#define ENUM_SESSION_ELIGIBILITY_ALL_A = 'A'
#define ENUM_SESSION_ELIGIBILITY_RTH_R = 'R'
#define ENUM_SESSION_ELIGIBILITY_BOOK_ONLY_NO_SLIDE_N = 'N'

/*
 * Side Values
 */ 
#define ENUM_SIDE_AIM_1 = '1'
#define ENUM_SIDE_QCC_2 = '2'
#define ENUM_SIDE_BUY_1 = '1'
#define ENUM_SIDE_SELL_2 = '2'
#define ENUM_SIDE_SELL_SHORT_5 = '5'
#define ENUM_SIDE_SELL_SHORT_EXEMPT_6 = '6'

/*
 * Strategy Id Values
 */ 
#define ENUM_STRATEGY_ID_CONVERSION_C = 'C'
#define ENUM_STRATEGY_ID_REVERSAL_R = 'R'
#define ENUM_STRATEGY_ID_MERGER_M = 'M'
#define ENUM_STRATEGY_ID_SHORT_STOCK_INTEREST_S = 'S'
#define ENUM_STRATEGY_ID_JELLY_ROLL_J = 'J'

/*
 * Sub Liquidity Indicator Values
 */ 
#define ENUM_SUB_LIQUIDITY_INDICATOR_EXECUTION_FROM_ORDER_THAT_SET_THE_NBBO_S = 'S'
#define ENUM_SUB_LIQUIDITY_INDICATOR_STEP_UP_MECHANISM_B = 'B'
#define ENUM_SUB_LIQUIDITY_INDICATOR_MARKET_TURNER_U = 'U'
#define ENUM_SUB_LIQUIDITY_INDICATOR_AIM_B = 'b'
#define ENUM_SUB_LIQUIDITY_INDICATOR_CARRIED_C = 'C'
#define ENUM_SUB_LIQUIDITY_INDICATOR_DONE_FOR_DAY_D = 'D'
#define ENUM_SUB_LIQUIDITY_INDICATOR_QCC_Q = 'q'
#define ENUM_SUB_LIQUIDITY_INDICATOR_SAM_S = 's'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY_0 = '0'
#define ENUM_TIME_IN_FORCE_GTC_1 = '1'
#define ENUM_TIME_IN_FORCE_ATO_2 = '2'
#define ENUM_TIME_IN_FORCE_IOC_3 = '3'
#define ENUM_TIME_IN_FORCE_FOK_4 = '4'
#define ENUM_TIME_IN_FORCE_GTD_6 = '6'
#define ENUM_TIME_IN_FORCE_ATC_6 = '6'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Cancel Order Byte 1
 */ 
typedef struct {
    char CancelOrderReservedBit8Exists[1];
    char CancelOrderReservedBit7Exists[1];
    char CancelOrderRoutingFirmIdExists[1];
    char CancelOrderMassCancelIdExists[1];
    char CancelOrderRiskRootExists[1];
    char CancelOrderMassCancelExists[1];
    char CancelOrderMassCancelLockoutExists[1];
    char CancelOrderClearingFirmExists[1];
} CancelOrderByte1T;

/*
 * Structure: Cancel Order Byte 2
 */ 
typedef struct {
    char CancelOrderReservedBit8Exists[1];
    char CancelOrderReservedBit7Exists[1];
    char CancelOrderReservedBit6Exists[1];
    char CancelOrderReservedBit5Exists[1];
    char CancelOrderReservedBit4Exists[1];
    char CancelOrderReservedBit3Exists[1];
    char CancelOrderReservedBit2Exists[1];
    char CancelOrderMassCancelInstExists[1];
} CancelOrderByte2T;

/*
 * Structure: Cancel Rejected Byte 1
 */ 
typedef struct {
    char CancelRejectedMaxRemovePctExists[1];
    char CancelRejectedMinQtyExists[1];
    char CancelRejectedTimeInForceExists[1];
    char CancelRejectedOrdTypeExists[1];
    char CancelRejectedExecInstExists[1];
    char CancelRejectedPriceExists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedSideExists[1];
} CancelRejectedByte1T;

/*
 * Structure: Cancel Rejected Byte 10
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedCrossExclusionIndicatorExists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedRoutingFirmIdExists[1];
    char CancelRejectedGiveUpFirmIdExists[1];
    char CancelRejectedAllocQtyExists[1];
    char CancelRejectedCrossIdExists[1];
} CancelRejectedByte10T;

/*
 * Structure: Cancel Rejected Byte 11
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte11T;

/*
 * Structure: Cancel Rejected Byte 12
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte12T;

/*
 * Structure: Cancel Rejected Byte 13
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte13T;

/*
 * Structure: Cancel Rejected Byte 14
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte14T;

/*
 * Structure: Cancel Rejected Byte 15
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedMassCancelIdExists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte15T;

/*
 * Structure: Cancel Rejected Byte 16
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte16T;

/*
 * Structure: Cancel Rejected Byte 17
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte17T;

/*
 * Structure: Cancel Rejected Byte 2
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedCapacityExists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedSymbolExists[1];
} CancelRejectedByte2T;

/*
 * Structure: Cancel Rejected Byte 3
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte3T;

/*
 * Structure: Cancel Rejected Byte 4
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedCorrectedSizeExists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedOpenCloseExists[1];
    char CancelRejectedPutOrCallExists[1];
    char CancelRejectedStrikePriceExists[1];
    char CancelRejectedMaturityDateExists[1];
} CancelRejectedByte4T;

/*
 * Structure: Cancel Rejected Byte 5
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte5T;

/*
 * Structure: Cancel Rejected Byte 6
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte6T;

/*
 * Structure: Cancel Rejected Byte 7
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedReservedBit3Exists[1];
    char CancelRejectedReservedBit2Exists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte7T;

/*
 * Structure: Cancel Rejected Byte 8
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedReservedBit6Exists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedStopPxExists[1];
    char CancelRejectedEchoTextExists[1];
    char CancelRejectedReservedBit1Exists[1];
} CancelRejectedByte8T;

/*
 * Structure: Cancel Rejected Byte 9
 */ 
typedef struct {
    char CancelRejectedReservedBit8Exists[1];
    char CancelRejectedReservedBit7Exists[1];
    char CancelRejectedCmtaNumberExists[1];
    char CancelRejectedReservedBit5Exists[1];
    char CancelRejectedReservedBit4Exists[1];
    char CancelRejectedAuctionIdExists[1];
    char CancelRejectedTargetPartyIdExists[1];
    char CancelRejectedMarketFeeCodeExists[1];
} CancelRejectedByte9T;

/*
 * Structure: Complex Instrument Accepted Byte 1
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte1T;

/*
 * Structure: Complex Instrument Accepted Byte 10
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte10T;

/*
 * Structure: Complex Instrument Accepted Byte 11
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte11T;

/*
 * Structure: Complex Instrument Accepted Byte 12
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte12T;

/*
 * Structure: Complex Instrument Accepted Byte 13
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte13T;

/*
 * Structure: Complex Instrument Accepted Byte 14
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedLegStrikePriceExists[1];
    char ComplexInstrumentAcceptedLegMaturityDateExists[1];
    char ComplexInstrumentAcceptedLegCfiCodeExists[1];
} ComplexInstrumentAcceptedByte14T;

/*
 * Structure: Complex Instrument Accepted Byte 15
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte15T;

/*
 * Structure: Complex Instrument Accepted Byte 16
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte16T;

/*
 * Structure: Complex Instrument Accepted Byte 17
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte17T;

/*
 * Structure: Complex Instrument Accepted Byte 2
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte2T;

/*
 * Structure: Complex Instrument Accepted Byte 3
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte3T;

/*
 * Structure: Complex Instrument Accepted Byte 4
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte4T;

/*
 * Structure: Complex Instrument Accepted Byte 5
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte5T;

/*
 * Structure: Complex Instrument Accepted Byte 6
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte6T;

/*
 * Structure: Complex Instrument Accepted Byte 7
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte7T;

/*
 * Structure: Complex Instrument Accepted Byte 8
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte8T;

/*
 * Structure: Complex Instrument Accepted Byte 9
 */ 
typedef struct {
    char ComplexInstrumentAcceptedReservedBit8Exists[1];
    char ComplexInstrumentAcceptedReservedBit7Exists[1];
    char ComplexInstrumentAcceptedReservedBit6Exists[1];
    char ComplexInstrumentAcceptedReservedBit5Exists[1];
    char ComplexInstrumentAcceptedReservedBit4Exists[1];
    char ComplexInstrumentAcceptedReservedBit3Exists[1];
    char ComplexInstrumentAcceptedReservedBit2Exists[1];
    char ComplexInstrumentAcceptedReservedBit1Exists[1];
} ComplexInstrumentAcceptedByte9T;

/*
 * Structure: Complex Instrument Rejected Byte 1
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte1T;

/*
 * Structure: Complex Instrument Rejected Byte 10
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte10T;

/*
 * Structure: Complex Instrument Rejected Byte 11
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte11T;

/*
 * Structure: Complex Instrument Rejected Byte 12
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte12T;

/*
 * Structure: Complex Instrument Rejected Byte 13
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte13T;

/*
 * Structure: Complex Instrument Rejected Byte 14
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte14T;

/*
 * Structure: Complex Instrument Rejected Byte 15
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte15T;

/*
 * Structure: Complex Instrument Rejected Byte 16
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte16T;

/*
 * Structure: Complex Instrument Rejected Byte 17
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte17T;

/*
 * Structure: Complex Instrument Rejected Byte 2
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte2T;

/*
 * Structure: Complex Instrument Rejected Byte 3
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte3T;

/*
 * Structure: Complex Instrument Rejected Byte 4
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte4T;

/*
 * Structure: Complex Instrument Rejected Byte 5
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte5T;

/*
 * Structure: Complex Instrument Rejected Byte 6
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte6T;

/*
 * Structure: Complex Instrument Rejected Byte 7
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte7T;

/*
 * Structure: Complex Instrument Rejected Byte 8
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte8T;

/*
 * Structure: Complex Instrument Rejected Byte 9
 */ 
typedef struct {
    char ComplexInstrumentRejectedReservedBit8Exists[1];
    char ComplexInstrumentRejectedReservedBit7Exists[1];
    char ComplexInstrumentRejectedReservedBit6Exists[1];
    char ComplexInstrumentRejectedReservedBit5Exists[1];
    char ComplexInstrumentRejectedReservedBit4Exists[1];
    char ComplexInstrumentRejectedReservedBit3Exists[1];
    char ComplexInstrumentRejectedReservedBit2Exists[1];
    char ComplexInstrumentRejectedReservedBit1Exists[1];
} ComplexInstrumentRejectedByte9T;

/*
 * Structure: Cross Order Acknowledgment Byte 1
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentExecInstExists[1];
    char CrossOrderAcknowledgmentPriceExists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentSideExists[1];
} CrossOrderAcknowledgmentByte1T;

/*
 * Structure: Cross Order Acknowledgment Byte 10
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentRoutingFirmIdExists[1];
    char CrossOrderAcknowledgmentGiveUpFirmIdExists[1];
    char CrossOrderAcknowledgmentAllocQtyExists[1];
    char CrossOrderAcknowledgmentCrossIdExists[1];
} CrossOrderAcknowledgmentByte10T;

/*
 * Structure: Cross Order Acknowledgment Byte 11
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte11T;

/*
 * Structure: Cross Order Acknowledgment Byte 12
 */ 
typedef struct {
    char CrossOrderAcknowledgmentClearingOptionalDataExists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte12T;

/*
 * Structure: Cross Order Acknowledgment Byte 13
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte13T;

/*
 * Structure: Cross Order Acknowledgment Byte 14
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte14T;

/*
 * Structure: Cross Order Acknowledgment Byte 15
 */ 
typedef struct {
    char CrossOrderAcknowledgmentClientIdAttrExists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentEquityPartyIdExists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte15T;

/*
 * Structure: Cross Order Acknowledgment Byte 16
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentFrequentTraderIdExists[1];
} CrossOrderAcknowledgmentByte16T;

/*
 * Structure: Cross Order Acknowledgment Byte 17
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte17T;

/*
 * Structure: Cross Order Acknowledgment Byte 2
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentCapacityExists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentSymbolExists[1];
} CrossOrderAcknowledgmentByte2T;

/*
 * Structure: Cross Order Acknowledgment Byte 3
 */ 
typedef struct {
    char CrossOrderAcknowledgmentPreventMatchExists[1];
    char CrossOrderAcknowledgmentOrderQtyExists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentClearingAccountExists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentAccountExists[1];
} CrossOrderAcknowledgmentByte3T;

/*
 * Structure: Cross Order Acknowledgment Byte 4
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentOpenCloseExists[1];
    char CrossOrderAcknowledgmentPutOrCallExists[1];
    char CrossOrderAcknowledgmentStrikePriceExists[1];
    char CrossOrderAcknowledgmentMaturityDateExists[1];
} CrossOrderAcknowledgmentByte4T;

/*
 * Structure: Cross Order Acknowledgment Byte 5
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte5T;

/*
 * Structure: Cross Order Acknowledgment Byte 6
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentAttributedQuoteExists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte6T;

/*
 * Structure: Cross Order Acknowledgment Byte 7
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte7T;

/*
 * Structure: Cross Order Acknowledgment Byte 8
 */ 
typedef struct {
    char CrossOrderAcknowledgmentReservedBit8Exists[1];
    char CrossOrderAcknowledgmentReservedBit7Exists[1];
    char CrossOrderAcknowledgmentReservedBit6Exists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentReservedBit3Exists[1];
    char CrossOrderAcknowledgmentReservedBit2Exists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte8T;

/*
 * Structure: Cross Order Acknowledgment Byte 9
 */ 
typedef struct {
    char CrossOrderAcknowledgmentCrossPrioritizationExists[1];
    char CrossOrderAcknowledgmentCrossTypeExists[1];
    char CrossOrderAcknowledgmentCmtaNumberExists[1];
    char CrossOrderAcknowledgmentReservedBit5Exists[1];
    char CrossOrderAcknowledgmentReservedBit4Exists[1];
    char CrossOrderAcknowledgmentAuctionIdExists[1];
    char CrossOrderAcknowledgmentTargetPartyIdExists[1];
    char CrossOrderAcknowledgmentReservedBit1Exists[1];
} CrossOrderAcknowledgmentByte9T;

/*
 * Structure: Cross Order Cancelled Byte 1
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledExecInstExists[1];
    char CrossOrderCancelledPriceExists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte1T;

/*
 * Structure: Cross Order Cancelled Byte 10
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledRoutingFirmIdExists[1];
    char CrossOrderCancelledGiveUpFirmIdExists[1];
    char CrossOrderCancelledAllocQtyExists[1];
    char CrossOrderCancelledCrossIdExists[1];
} CrossOrderCancelledByte10T;

/*
 * Structure: Cross Order Cancelled Byte 11
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte11T;

/*
 * Structure: Cross Order Cancelled Byte 12
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte12T;

/*
 * Structure: Cross Order Cancelled Byte 13
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte13T;

/*
 * Structure: Cross Order Cancelled Byte 14
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte14T;

/*
 * Structure: Cross Order Cancelled Byte 15
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledEquityPartyIdExists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte15T;

/*
 * Structure: Cross Order Cancelled Byte 16
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledFrequentTraderIdExists[1];
} CrossOrderCancelledByte16T;

/*
 * Structure: Cross Order Cancelled Byte 17
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte17T;

/*
 * Structure: Cross Order Cancelled Byte 2
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledCapacityExists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledSymbolExists[1];
} CrossOrderCancelledByte2T;

/*
 * Structure: Cross Order Cancelled Byte 3
 */ 
typedef struct {
    char CrossOrderCancelledPreventMatchExists[1];
    char CrossOrderCancelledOrderQtyExists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledClearingFirmExists[1];
    char CrossOrderCancelledAccountExists[1];
} CrossOrderCancelledByte3T;

/*
 * Structure: Cross Order Cancelled Byte 4
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledPutOrCallExists[1];
    char CrossOrderCancelledStrikePriceExists[1];
    char CrossOrderCancelledMaturityDateExists[1];
} CrossOrderCancelledByte4T;

/*
 * Structure: Cross Order Cancelled Byte 5
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte5T;

/*
 * Structure: Cross Order Cancelled Byte 6
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledAttributedQuoteExists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte6T;

/*
 * Structure: Cross Order Cancelled Byte 7
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte7T;

/*
 * Structure: Cross Order Cancelled Byte 8
 */ 
typedef struct {
    char CrossOrderCancelledReservedBit8Exists[1];
    char CrossOrderCancelledReservedBit7Exists[1];
    char CrossOrderCancelledReservedBit6Exists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledReservedBit3Exists[1];
    char CrossOrderCancelledReservedBit2Exists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte8T;

/*
 * Structure: Cross Order Cancelled Byte 9
 */ 
typedef struct {
    char CrossOrderCancelledCrossPrioritizationExists[1];
    char CrossOrderCancelledCrossTypeExists[1];
    char CrossOrderCancelledCmtaNumberExists[1];
    char CrossOrderCancelledReservedBit5Exists[1];
    char CrossOrderCancelledReservedBit4Exists[1];
    char CrossOrderCancelledTargetPartyIdExists[1];
    char CrossOrderCancelledTargetPartyIdExists[1];
    char CrossOrderCancelledReservedBit1Exists[1];
} CrossOrderCancelledByte9T;

/*
 * Structure: Cross Order Rejected Byte 1
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedExecInstExists[1];
    char CrossOrderRejectedPriceExists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte1T;

/*
 * Structure: Cross Order Rejected Byte 10
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedRoutingFirmIdExists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedCrossIdExists[1];
} CrossOrderRejectedByte10T;

/*
 * Structure: Cross Order Rejected Byte 11
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte11T;

/*
 * Structure: Cross Order Rejected Byte 12
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte12T;

/*
 * Structure: Cross Order Rejected Byte 13
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte13T;

/*
 * Structure: Cross Order Rejected Byte 14
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte14T;

/*
 * Structure: Cross Order Rejected Byte 15
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedEquityPartyIdExists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte15T;

/*
 * Structure: Cross Order Rejected Byte 16
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedFrequentTraderIdExists[1];
} CrossOrderRejectedByte16T;

/*
 * Structure: Cross Order Rejected Byte 17
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte17T;

/*
 * Structure: Cross Order Rejected Byte 2
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedSymbolExists[1];
} CrossOrderRejectedByte2T;

/*
 * Structure: Cross Order Rejected Byte 3
 */ 
typedef struct {
    char CrossOrderRejectedPreventMatchExists[1];
    char CrossOrderRejectedOrderQtyExists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte3T;

/*
 * Structure: Cross Order Rejected Byte 4
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedPutOrCallExists[1];
    char CrossOrderRejectedStrikePriceExists[1];
    char CrossOrderRejectedMaturityDateExists[1];
} CrossOrderRejectedByte4T;

/*
 * Structure: Cross Order Rejected Byte 5
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte5T;

/*
 * Structure: Cross Order Rejected Byte 6
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedAttributedQuoteExists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte6T;

/*
 * Structure: Cross Order Rejected Byte 7
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte7T;

/*
 * Structure: Cross Order Rejected Byte 8
 */ 
typedef struct {
    char CrossOrderRejectedReservedBit8Exists[1];
    char CrossOrderRejectedReservedBit7Exists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedReservedBit2Exists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte8T;

/*
 * Structure: Cross Order Rejected Byte 9
 */ 
typedef struct {
    char CrossOrderRejectedCrossPrioritizationExists[1];
    char CrossOrderRejectedCrossTypeExists[1];
    char CrossOrderRejectedReservedBit6Exists[1];
    char CrossOrderRejectedReservedBit5Exists[1];
    char CrossOrderRejectedReservedBit4Exists[1];
    char CrossOrderRejectedReservedBit3Exists[1];
    char CrossOrderRejectedTargetPartyIdExists[1];
    char CrossOrderRejectedReservedBit1Exists[1];
} CrossOrderRejectedByte9T;

/*
 * Structure: Logout Message
 */ 
typedef struct {
    char LogoutReason;
    char LogoutReasonText[60];
    uint32_t LastReceivedSequenceNumber;
    uint8_t NumberOfUnits;
} LogoutMessageT;

/*
 * Structure: Mass Cancel Acknowledgment Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char MassCancelId[20];
    uint32_t CancelledOrderCount;
    char ReservedInternal[1];
} MassCancelAcknowledgmentMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t StartOfMessage;
    uint16_t MessageLength;
    uint8_t MessageType;
    uint8_t MatchingUnit;
    uint32_t SequenceNumber;
} MessageHeaderT;

/*
 * Structure: Modify Order Byte 1
 */ 
typedef struct {
    char ModifyOrderSideExists[1];
    char ModifyOrderExecInstExists[1];
    char ModifyOrderCancelOrigOnRejectExists[1];
    char ModifyOrderOrdTypeExists[1];
    char ModifyOrderPriceExists[1];
    char ModifyOrderOrderQtyExists[1];
    char ModifyOrderReservedBit2Exists[1];
    char ModifyOrderClearingFirmExists[1];
} ModifyOrderByte1T;

/*
 * Structure: Modify Order Byte 2
 */ 
typedef struct {
    char ModifyOrderReservedBit8Exists[1];
    char ModifyOrderReservedBit7Exists[1];
    char ModifyOrderFrequentTraderIdExists[1];
    char ModifyOrderReservedBit5Exists[1];
    char ModifyOrderReservedBit4Exists[1];
    char ModifyOrderRoutingFirmIdExists[1];
    char ModifyOrderStopPxExists[1];
    char ModifyOrderMaxFloorExists[1];
} ModifyOrderByte2T;

/*
 * Structure: New Complex Instrument Byte 1
 */ 
typedef struct {
    char NewComplexInstrumentReservedBit8Exists[1];
    char NewComplexInstrumentReservedBit7Exists[1];
    char NewComplexInstrumentReservedBit6Exists[1];
    char NewComplexInstrumentReservedBit5Exists[1];
    char NewComplexInstrumentClearingFirmExists[1];
    char NewComplexInstrumentLegStrikePriceExists[1];
    char NewComplexInstrumentLegMaturityDateExists[1];
    char NewComplexInstrumentLegCfiCodeExists[1];
} NewComplexInstrumentByte1T;

/*
 * Structure: New Order Byte 1
 */ 
typedef struct {
    char NewOrderMaxFloorExists[1];
    char NewOrderMinQtyExists[1];
    char NewOrderTimeInForceExists[1];
    char NewOrderOrdTypeExists[1];
    char NewOrderExecInstExists[1];
    char NewOrderPriceExists[1];
    char NewOrderClearingAccountExists[1];
    char NewOrderClearingFirmExists[1];
} NewOrderByte1T;

/*
 * Structure: New Order Byte 2
 */ 
typedef struct {
    char NewOrderRoutingInstExists[1];
    char NewOrderCapacityExists[1];
    char NewOrderReservedBit6Exists[1];
    char NewOrderReservedBit5Exists[1];
    char NewOrderReservedBit4Exists[1];
    char NewOrderReservedBit3Exists[1];
    char NewOrderSymbolSfxExists[1];
    char NewOrderSymbolExists[1];
} NewOrderByte2T;

/*
 * Structure: New Order Byte 3
 */ 
typedef struct {
    char NewOrderExpireTimeExists[1];
    char NewOrderLocateReqdExists[1];
    char NewOrderPreventMatchExists[1];
    char NewOrderPegDifferenceExists[1];
    char NewOrderDiscretionAmountExists[1];
    char NewOrderMaxRemovePctExists[1];
    char NewOrderDisplayIndicatorExists[1];
    char NewOrderAccountExists[1];
} NewOrderByte3T;

/*
 * Structure: New Order Byte 4
 */ 
typedef struct {
    char NewOrderReservedBit8Exists[1];
    char NewOrderTargetPartyIdExists[1];
    char NewOrderCmtaNumberExists[1];
    char NewOrderOpenCloseExists[1];
    char NewOrderRiskResetExists[1];
    char NewOrderPutOrCallExists[1];
    char NewOrderStrikePriceExists[1];
    char NewOrderMaturityDateExists[1];
} NewOrderByte4T;

/*
 * Structure: New Order Byte 5
 */ 
typedef struct {
    char NewOrderReservedBit8Exists[1];
    char NewOrderReservedBit7Exists[1];
    char NewOrderReservedBit6Exists[1];
    char NewOrderReservedBit5Exists[1];
    char NewOrderExtExecInstExists[1];
    char NewOrderReservedBit3Exists[1];
    char NewOrderAttributedQuoteExists[1];
    char NewOrderSessionEligibilityExists[1];
} NewOrderByte5T;

/*
 * Structure: New Order Byte 6
 */ 
typedef struct {
    char NewOrderRoutingFirmIdExists[1];
    char NewOrderAuctionIdExists[1];
    char NewOrderEchoTextExists[1];
    char NewOrderExDestinationExists[1];
    char NewOrderRouteDeliveryMethodExists[1];
    char NewOrderRouteStrategyExists[1];
    char NewOrderStopPxExists[1];
    char NewOrderDisplayRangeExists[1];
} NewOrderByte6T;

/*
 * Structure: New Order Byte 7
 */ 
typedef struct {
    char NewOrderReservedBit8Exists[1];
    char NewOrderReservedBit7Exists[1];
    char NewOrderReservedBit6Exists[1];
    char NewOrderReservedBit5Exists[1];
    char NewOrderReservedBit4Exists[1];
    char NewOrderReservedBit3Exists[1];
    char NewOrderCustomGroupIdExists[1];
    char NewOrderReservedBit1Exists[1];
} NewOrderByte7T;

/*
 * Structure: New Order Byte 8
 */ 
typedef struct {
    char NewOrderReservedBit8Exists[1];
    char NewOrderReservedBit7Exists[1];
    char NewOrderReservedBit6Exists[1];
    char NewOrderFrequentTraderIdExists[1];
    char NewOrderClientIdAttrExists[1];
    char NewOrderClearingOptionalDataExists[1];
    char NewOrderCustomGroupIdExists[1];
    char NewOrderReservedBit1Exists[1];
} NewOrderByte8T;

/*
 * Structure: New Order Byte 9
 */ 
typedef struct {
    char NewOrderReservedBit8Exists[1];
    char NewOrderReservedBit7Exists[1];
    char NewOrderReservedBit6Exists[1];
    char NewOrderReservedBit5Exists[1];
    char NewOrderReservedBit4Exists[1];
    char NewOrderPriceTypeExists[1];
    char NewOrderOrsExists[1];
    char NewOrderOrderOriginExists[1];
} NewOrderByte9T;

/*
 * Structure: New Order Complex Message
 */ 
typedef struct {
    char ClOrdId[20];
    char Side;
    uint32_t OrderQty;
} NewOrderComplexMessageT;

/*
 * Structure: New Order Cross Byte 1
 */ 
typedef struct {
    char NewOrderCrossPreventMatchExists[1];
    char NewOrderCrossTargetPartyIdExists[1];
    char NewOrderCrossAttributeQuoteExists[1];
    char NewOrderCrossExecInstExists[1];
    char NewOrderCrossPutOrCallExists[1];
    char NewOrderCrossStrikePriceExists[1];
    char NewOrderCrossMaturityDateExists[1];
    char NewOrderCrossSymbolExists[1];
} NewOrderCrossByte1T;

/*
 * Structure: New Order Cross Byte 2
 */ 
typedef struct {
    char NewOrderCrossClearingOptionalDataExists[1];
    char NewOrderCrossRoutingFirmIdExists[1];
    char NewOrderCrossClearingAccountExists[1];
    char NewOrderCrossCmtaNumberExists[1];
    char NewOrderCrossAccountExists[1];
    char NewOrderCrossLastPriorityExists[1];
    char NewOrderCrossAutoMatchPriceExists[1];
    char NewOrderCrossAutoMatchExists[1];
} NewOrderCrossByte2T;

/*
 * Structure: New Order Cross Byte 3
 */ 
typedef struct {
    char NewOrderCrossSessionEligibilityExists[1];
    char NewOrderCrossEquitySellClearingFirmExists[1];
    char NewOrderCrossEquityBuyClearingFirmExists[1];
    char NewOrderCrossEquityTransactTimeExists[1];
    char NewOrderCrossEquityTradeVenueExists[1];
    char NewOrderCrossEquityTradeSizeExists[1];
    char NewOrderCrossEquityTradePriceExists[1];
    char NewOrderCrossClientIdAttrExists[1];
} NewOrderCrossByte3T;

/*
 * Structure: New Order Cross Byte 4
 */ 
typedef struct {
    char NewOrderCrossReservedBit8Exists[1];
    char NewOrderCrossReservedBit7Exists[1];
    char NewOrderCrossReservedBit6Exists[1];
    char NewOrderCrossReservedBit5Exists[1];
    char NewOrderCrossReservedBit4Exists[1];
    char NewOrderCrossFrequentTraderIdExists[1];
    char NewOrderCrossOrsExists[1];
    char NewOrderCrossReservedBit1Exists[1];
} NewOrderCrossByte4T;

/*
 * Structure: New Order Cross Multileg Byte 1
 */ 
typedef struct {
    char NewOrderCrossMultilegPreventMatchExists[1];
    char NewOrderCrossMultilegTargetPartyIdExists[1];
    char NewOrderCrossMultilegAttributeQuoteExists[1];
    char NewOrderCrossMultilegExecInstExists[1];
    char NewOrderCrossMultilegReservedBit4Exists[1];
    char NewOrderCrossMultilegReservedBit3Exists[1];
    char NewOrderCrossMultilegReservedBit2Exists[1];
    char NewOrderCrossMultilegSymbolExists[1];
} NewOrderCrossMultilegByte1T;

/*
 * Structure: New Order Cross Multileg Byte 2
 */ 
typedef struct {
    char NewOrderCrossMultilegClearingOptionalDataExists[1];
    char NewOrderCrossMultilegRoutingFirmIdExists[1];
    char NewOrderCrossMultilegClearingAccountExists[1];
    char NewOrderCrossMultilegCmtaNumberExists[1];
    char NewOrderCrossMultilegAccountExists[1];
    char NewOrderCrossMultilegLastPriorityExists[1];
    char NewOrderCrossMultilegAutoMatchPriceExists[1];
    char NewOrderCrossMultilegAutoMatchExists[1];
} NewOrderCrossMultilegByte2T;

/*
 * Structure: New Order Cross Multileg Byte 3
 */ 
typedef struct {
    char NewOrderCrossMultilegSessionEligibilityExists[1];
    char NewOrderCrossMultilegEquitySellClearingFirmExists[1];
    char NewOrderCrossMultilegEquityBuyClearingFirmExists[1];
    char NewOrderCrossMultilegEquityTransactTimeExists[1];
    char NewOrderCrossMultilegEquityTradeVenueExists[1];
    char NewOrderCrossMultilegEquityTradeSizeExists[1];
    char NewOrderCrossMultilegEquityTradePriceExists[1];
    char NewOrderCrossMultilegClientIdAttrExists[1];
} NewOrderCrossMultilegByte3T;

/*
 * Structure: New Order Cross Multileg Byte 4
 */ 
typedef struct {
    char NewOrderCrossMultilegReservedBit8Exists[1];
    char NewOrderCrossMultilegEquityExDestinationExists[1];
    char NewOrderCrossMultilegReservedBit6Exists[1];
    char NewOrderCrossMultilegDrillThruProtectionExists[1];
    char NewOrderCrossMultilegReservedBit4Exists[1];
    char NewOrderCrossMultilegReservedBit3Exists[1];
    char NewOrderCrossMultilegEquityLegShortSellExists[1];
    char NewOrderCrossMultilegEquityPartyIdExists[1];
} NewOrderCrossMultilegByte4T;

/*
 * Structure: New Order Cross Multileg Byte 5
 */ 
typedef struct {
    char NewOrderCrossMultilegReservedBit8Exists[1];
    char NewOrderCrossMultilegReservedBit7Exists[1];
    char NewOrderCrossMultilegReservedBit6Exists[1];
    char NewOrderCrossMultilegReservedBit5Exists[1];
    char NewOrderCrossMultilegReservedBit4Exists[1];
    char NewOrderCrossMultilegReservedBit3Exists[1];
    char NewOrderCrossMultilegFrequentTraderIdExists[1];
    char NewOrderCrossMultilegOrsExists[1];
} NewOrderCrossMultilegByte5T;

/*
 * Structure: Order Acknowledgment Byte 1
 */ 
typedef struct {
    char OrderAcknowledgmentMaxRemovePctExists[1];
    char OrderAcknowledgmentMinQtyExists[1];
    char OrderAcknowledgmentTimeInForceExists[1];
    char OrderAcknowledgmentOrdTypeExists[1];
    char OrderAcknowledgmentExecInstExists[1];
    char OrderAcknowledgmentPriceExists[1];
    char OrderAcknowledgmentPegDifferenceExists[1];
    char OrderAcknowledgmentSideExists[1];
} OrderAcknowledgmentByte1T;

/*
 * Structure: Order Acknowledgment Byte 10
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentReservedBit7Exists[1];
    char OrderAcknowledgmentCrossExclusionIndicatorExists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentRoutingFirmIdExists[1];
    char OrderAcknowledgmentGiveUpFirmIdExists[1];
    char OrderAcknowledgmentAllocQtyExists[1];
    char OrderAcknowledgmentCrossIdExists[1];
} OrderAcknowledgmentByte10T;

/*
 * Structure: Order Acknowledgment Byte 11
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentReservedBit7Exists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentReservedBit4Exists[1];
    char OrderAcknowledgmentReservedBit3Exists[1];
    char OrderAcknowledgmentReservedBit2Exists[1];
    char OrderAcknowledgmentReservedBit1Exists[1];
} OrderAcknowledgmentByte11T;

/*
 * Structure: Order Acknowledgment Byte 12
 */ 
typedef struct {
    char OrderAcknowledgmentClearingOptionalDataExists[1];
    char OrderAcknowledgmentReservedBit7Exists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentReservedBit4Exists[1];
    char OrderAcknowledgmentReservedBit3Exists[1];
    char OrderAcknowledgmentReservedBit2Exists[1];
    char OrderAcknowledgmentReservedBit1Exists[1];
} OrderAcknowledgmentByte12T;

/*
 * Structure: Order Acknowledgment Byte 13
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentDrillThruProtectionExists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentReservedBit4Exists[1];
    char OrderAcknowledgmentReservedBit3Exists[1];
    char OrderAcknowledgmentReservedBit2Exists[1];
    char OrderAcknowledgmentReservedBit1Exists[1];
} OrderAcknowledgmentByte13T;

/*
 * Structure: Order Acknowledgment Byte 14
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentReservedBit7Exists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentReservedBit4Exists[1];
    char OrderAcknowledgmentReservedBit3Exists[1];
    char OrderAcknowledgmentReservedBit2Exists[1];
    char OrderAcknowledgmentReservedBit1Exists[1];
} OrderAcknowledgmentByte14T;

/*
 * Structure: Order Acknowledgment Byte 15
 */ 
typedef struct {
    char OrderAcknowledgmentClientIdAttrExists[1];
    char OrderAcknowledgmentReservedBit7Exists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentReservedBit4Exists[1];
    char OrderAcknowledgmentReservedBit3Exists[1];
    char OrderAcknowledgmentEquityPartyIdExists[1];
    char OrderAcknowledgmentReservedBit1Exists[1];
} OrderAcknowledgmentByte15T;

/*
 * Structure: Order Acknowledgment Byte 16
 */ 
typedef struct {
    char OrderAcknowledgmentOrderOriginExists[1];
    char OrderAcknowledgmentMultiClassSprdExists[1];
    char OrderAcknowledgmentFloorRoutingInstExists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentReservedBit4Exists[1];
    char OrderAcknowledgmentReservedBit3Exists[1];
    char OrderAcknowledgmentSessionEligibilityExists[1];
    char OrderAcknowledgmentFrequentTraderIdExists[1];
} OrderAcknowledgmentByte16T;

/*
 * Structure: Order Acknowledgment Byte 17
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentReservedBit7Exists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentReservedBit4Exists[1];
    char OrderAcknowledgmentReservedBit3Exists[1];
    char OrderAcknowledgmentStrategyIdExists[1];
    char OrderAcknowledgmentPriceTypeExists[1];
} OrderAcknowledgmentByte17T;

/*
 * Structure: Order Acknowledgment Byte 2
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentCapacityExists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentReservedBit4Exists[1];
    char OrderAcknowledgmentReservedBit3Exists[1];
    char OrderAcknowledgmentReservedBit2Exists[1];
    char OrderAcknowledgmentSymbolExists[1];
} OrderAcknowledgmentByte2T;

/*
 * Structure: Order Acknowledgment Byte 3
 */ 
typedef struct {
    char OrderAcknowledgmentPreventMatchExists[1];
    char OrderAcknowledgmentOrderQtyExists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentMaxFloorExists[1];
    char OrderAcknowledgmentDisplayIndicatorExists[1];
    char OrderAcknowledgmentClearingAccountExists[1];
    char OrderAcknowledgmentClearingFirmExists[1];
    char OrderAcknowledgmentAccountExists[1];
} OrderAcknowledgmentByte3T;

/*
 * Structure: Order Acknowledgment Byte 4
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentReservedBit7Exists[1];
    char OrderAcknowledgmentCorrectedSizeExists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentOpenCloseExists[1];
    char OrderAcknowledgmentPutOrCallExists[1];
    char OrderAcknowledgmentStrikePriceExists[1];
    char OrderAcknowledgmentMaturityDateExists[1];
} OrderAcknowledgmentByte4T;

/*
 * Structure: Order Acknowledgment Byte 5
 */ 
typedef struct {
    char OrderAcknowledgmentExpireTimeExists[1];
    char OrderAcknowledgmentBaseLiquidityIndicatorExists[1];
    char OrderAcknowledgmentWorkingPriceExists[1];
    char OrderAcknowledgmentDisplayPriceExists[1];
    char OrderAcknowledgmentLastPxExists[1];
    char OrderAcknowledgmentLastSharesExists[1];
    char OrderAcknowledgmentLeavesQtyExists[1];
    char OrderAcknowledgmentOrigClOrdIdExists[1];
} OrderAcknowledgmentByte5T;

/*
 * Structure: Order Acknowledgment Byte 6
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentReservedBit7Exists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentAttributedQuoteExists[1];
    char OrderAcknowledgmentContraCapacityExists[1];
    char OrderAcknowledgmentReservedBit2Exists[1];
    char OrderAcknowledgmentSecondaryOrderIdExists[1];
} OrderAcknowledgmentByte6T;

/*
 * Structure: Order Acknowledgment Byte 7
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentReservedBit7Exists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentReservedBit4Exists[1];
    char OrderAcknowledgmentReservedBit3Exists[1];
    char OrderAcknowledgmentReservedBit2Exists[1];
    char OrderAcknowledgmentSubLiquidityIndicatorExists[1];
} OrderAcknowledgmentByte7T;

/*
 * Structure: Order Acknowledgment Byte 8
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentExDestinationExists[1];
    char OrderAcknowledgmentRouteDeliveryMethodExists[1];
    char OrderAcknowledgmentRouteStrategyExists[1];
    char OrderAcknowledgmentRoutingInstExists[1];
    char OrderAcknowledgmentStopPxExists[1];
    char OrderAcknowledgmentEchoTextExists[1];
    char OrderAcknowledgmentReservedBit1Exists[1];
} OrderAcknowledgmentByte8T;

/*
 * Structure: Order Acknowledgment Byte 9
 */ 
typedef struct {
    char OrderAcknowledgmentReservedBit8Exists[1];
    char OrderAcknowledgmentReservedBit7Exists[1];
    char OrderAcknowledgmentReservedBit6Exists[1];
    char OrderAcknowledgmentReservedBit5Exists[1];
    char OrderAcknowledgmentReservedBit4Exists[1];
    char OrderAcknowledgmentAuctionIdExists[1];
    char OrderAcknowledgmentTargetPartyIdExists[1];
    char OrderAcknowledgmentMarketFeeCodeExists[1];
} OrderAcknowledgmentByte9T;

/*
 * Structure: Order Cancelled Byte 1
 */ 
typedef struct {
    char OrderCancelledMaxRemovePctExists[1];
    char OrderCancelledMinQtyExists[1];
    char OrderCancelledTimeInForceExists[1];
    char OrderCancelledOrdTypeExists[1];
    char OrderCancelledExecInstExists[1];
    char OrderCancelledPriceExists[1];
    char OrderCancelledReservedBit2Exists[1];
    char OrderCancelledSideExists[1];
} OrderCancelledByte1T;

/*
 * Structure: Order Cancelled Byte 10
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledCrossExclusionIndicatorExists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledRoutingFirmIdExists[1];
    char OrderCancelledGiveUpFirmIdExists[1];
    char OrderCancelledAllocQtyExists[1];
    char OrderCancelledCrossIdExists[1];
} OrderCancelledByte10T;

/*
 * Structure: Order Cancelled Byte 11
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledReservedBit6Exists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledReservedBit4Exists[1];
    char OrderCancelledReservedBit3Exists[1];
    char OrderCancelledReservedBit2Exists[1];
    char OrderCancelledReservedBit1Exists[1];
} OrderCancelledByte11T;

/*
 * Structure: Order Cancelled Byte 12
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledReservedBit6Exists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledReservedBit4Exists[1];
    char OrderCancelledReservedBit3Exists[1];
    char OrderCancelledReservedBit2Exists[1];
    char OrderCancelledReservedBit1Exists[1];
} OrderCancelledByte12T;

/*
 * Structure: Order Cancelled Byte 13
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledReservedBit6Exists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledReservedBit4Exists[1];
    char OrderCancelledReservedBit3Exists[1];
    char OrderCancelledReservedBit2Exists[1];
    char OrderCancelledReservedBit1Exists[1];
} OrderCancelledByte13T;

/*
 * Structure: Order Cancelled Byte 14
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledReservedBit6Exists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledReservedBit4Exists[1];
    char OrderCancelledReservedBit3Exists[1];
    char OrderCancelledReservedBit2Exists[1];
    char OrderCancelledReservedBit1Exists[1];
} OrderCancelledByte14T;

/*
 * Structure: Order Cancelled Byte 15
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledReservedBit6Exists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledReservedBit4Exists[1];
    char OrderCancelledReservedBit3Exists[1];
    char OrderCancelledEquityPartyIdExists[1];
    char OrderCancelledReservedBit1Exists[1];
} OrderCancelledByte15T;

/*
 * Structure: Order Cancelled Byte 16
 */ 
typedef struct {
    char OrderCancelledOrderOriginExists[1];
    char OrderCancelledMultiClassSprdExists[1];
    char OrderCancelledFloorRoutingInstExists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledReservedBit4Exists[1];
    char OrderCancelledReservedBit3Exists[1];
    char OrderCancelledReservedBit2Exists[1];
    char OrderCancelledFrequentTraderIdExists[1];
} OrderCancelledByte16T;

/*
 * Structure: Order Cancelled Byte 17
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledReservedBit6Exists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledReservedBit4Exists[1];
    char OrderCancelledReservedBit3Exists[1];
    char OrderCancelledStrategyIdExists[1];
    char OrderCancelledPriceTypeExists[1];
} OrderCancelledByte17T;

/*
 * Structure: Order Cancelled Byte 2
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledCapacityExists[1];
    char OrderCancelledReservedBit6Exists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledReservedBit4Exists[1];
    char OrderCancelledReservedBit3Exists[1];
    char OrderCancelledReservedBit2Exists[1];
    char OrderCancelledSymbolExists[1];
} OrderCancelledByte2T;

/*
 * Structure: Order Cancelled Byte 3
 */ 
typedef struct {
    char OrderCancelledPreventMatchExists[1];
    char OrderCancelledOrderQtyExists[1];
    char OrderCancelledReservedBit6Exists[1];
    char OrderCancelledMaxFloorExists[1];
    char OrderCancelledDisplayIndicatorExists[1];
    char OrderCancelledClearingAccountExists[1];
    char OrderCancelledClearingFirmExists[1];
    char OrderCancelledAccountExists[1];
} OrderCancelledByte3T;

/*
 * Structure: Order Cancelled Byte 4
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledCorrectedSizeExists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledOpenCloseExists[1];
    char OrderCancelledPutOrCallExists[1];
    char OrderCancelledStrikePriceExists[1];
    char OrderCancelledMaturityDateExists[1];
} OrderCancelledByte4T;

/*
 * Structure: Order Cancelled Byte 5
 */ 
typedef struct {
    char OrderCancelledExpireTimeExists[1];
    char OrderCancelledBaseLiquidityIndicatorExists[1];
    char OrderCancelledWorkingPriceExists[1];
    char OrderCancelledDisplayPriceExists[1];
    char OrderCancelledLastPxExists[1];
    char OrderCancelledLastSharesExists[1];
    char OrderCancelledLeavesQtyExists[1];
    char OrderCancelledOrigClOrdIdExists[1];
} OrderCancelledByte5T;

/*
 * Structure: Order Cancelled Byte 6
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledReservedBit6Exists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledAttributedQuoteExists[1];
    char OrderCancelledContraCapacityExists[1];
    char OrderCancelledReservedBit2Exists[1];
    char OrderCancelledSecondaryOrderIdExists[1];
} OrderCancelledByte6T;

/*
 * Structure: Order Cancelled Byte 7
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledReservedBit6Exists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledReservedBit4Exists[1];
    char OrderCancelledReservedBit3Exists[1];
    char OrderCancelledReservedBit2Exists[1];
    char OrderCancelledReservedBit1Exists[1];
} OrderCancelledByte7T;

/*
 * Structure: Order Cancelled Byte 8
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledExDestinationExists[1];
    char OrderCancelledRouteDeliveryMethodExists[1];
    char OrderCancelledRouteStrategyExists[1];
    char OrderCancelledRoutingInstExists[1];
    char OrderCancelledStopPxExists[1];
    char OrderCancelledEchoTextExists[1];
    char OrderCancelledReservedBit1Exists[1];
} OrderCancelledByte8T;

/*
 * Structure: Order Cancelled Byte 9
 */ 
typedef struct {
    char OrderCancelledReservedBit8Exists[1];
    char OrderCancelledReservedBit7Exists[1];
    char OrderCancelledCmtaNumberExists[1];
    char OrderCancelledReservedBit5Exists[1];
    char OrderCancelledReservedBit4Exists[1];
    char OrderCancelledAuctionIdExists[1];
    char OrderCancelledTargetPartyIdExists[1];
    char OrderCancelledMarketFeeCodeExists[1];
} OrderCancelledByte9T;

/*
 * Structure: Order Execution Byte 1
 */ 
typedef struct {
    char OrderExecutionMaxRemovePctExists[1];
    char OrderExecutionMinQtyExists[1];
    char OrderExecutionTimeInForceExists[1];
    char OrderExecutionOrdTypeExists[1];
    char OrderExecutionExecInstExists[1];
    char OrderExecutionPriceExists[1];
    char OrderExecutionReservedBit2Exists[1];
    char OrderExecutionSideExists[1];
} OrderExecutionByte1T;

/*
 * Structure: Order Execution Byte 10
 */ 
typedef struct {
    char OrderExecutionReservedBit8Exists[1];
    char OrderExecutionReservedBit7Exists[1];
    char OrderExecutionCrossExclusionIndicatorExists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionRoutingFirmIdExists[1];
    char OrderExecutionGiveUpFirmIdExists[1];
    char OrderExecutionAllocQtyExists[1];
    char OrderExecutionCrossIdExists[1];
} OrderExecutionByte10T;

/*
 * Structure: Order Execution Byte 11
 */ 
typedef struct {
    char OrderExecutionReservedBit8Exists[1];
    char OrderExecutionReservedBit7Exists[1];
    char OrderExecutionReservedBit6Exists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionReservedBit4Exists[1];
    char OrderExecutionReservedBit3Exists[1];
    char OrderExecutionReservedBit2Exists[1];
    char OrderExecutionReservedBit1Exists[1];
} OrderExecutionByte11T;

/*
 * Structure: Order Execution Byte 12
 */ 
typedef struct {
    char OrderExecutionClearingOptionalDataExists[1];
    char OrderExecutionReservedBit7Exists[1];
    char OrderExecutionReservedBit6Exists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionReservedBit4Exists[1];
    char OrderExecutionReservedBit3Exists[1];
    char OrderExecutionReservedBit2Exists[1];
    char OrderExecutionReservedBit1Exists[1];
} OrderExecutionByte12T;

/*
 * Structure: Order Execution Byte 13
 */ 
typedef struct {
    char OrderExecutionMultilegReportingTypeExists[1];
    char OrderExecutionDrillThruProtectionExists[1];
    char OrderExecutionReservedBit6Exists[1];
    char OrderExecutionDayAvgPxExists[1];
    char OrderExecutionAvgPxExists[1];
    char OrderExecutionDayCumQtyExists[1];
    char OrderExecutionDayOrderQtyExists[1];
    char OrderExecutionCumQtyExists[1];
} OrderExecutionByte13T;

/*
 * Structure: Order Execution Byte 14
 */ 
typedef struct {
    char OrderExecutionReservedBit8Exists[1];
    char OrderExecutionReservedBit7Exists[1];
    char OrderExecutionReservedBit6Exists[1];
    char OrderExecutionSecondaryExecIdExists[1];
    char OrderExecutionReservedBit4Exists[1];
    char OrderExecutionReservedBit3Exists[1];
    char OrderExecutionReservedBit2Exists[1];
    char OrderExecutionReservedBit1Exists[1];
} OrderExecutionByte14T;

/*
 * Structure: Order Execution Byte 15
 */ 
typedef struct {
    char OrderExecutionClientIdAttrExists[1];
    char OrderExecutionReservedBit7Exists[1];
    char OrderExecutionReservedBit6Exists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionReservedBit4Exists[1];
    char OrderExecutionReservedBit3Exists[1];
    char OrderExecutionEquityPartyIdExists[1];
    char OrderExecutionReservedBit1Exists[1];
} OrderExecutionByte15T;

/*
 * Structure: Order Execution Byte 16
 */ 
typedef struct {
    char OrderExecutionOrderOriginExists[1];
    char OrderExecutionMultiClassSprdExists[1];
    char OrderExecutionFloorRoutingInstExists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionReservedBit4Exists[1];
    char OrderExecutionReservedBit3Exists[1];
    char OrderExecutionReservedBit2Exists[1];
    char OrderExecutionFrequentTraderIdExists[1];
} OrderExecutionByte16T;

/*
 * Structure: Order Execution Byte 17
 */ 
typedef struct {
    char OrderExecutionReservedBit8Exists[1];
    char OrderExecutionReservedBit7Exists[1];
    char OrderExecutionFloorTraderAcronymExists[1];
    char OrderExecutionSenderLocationIdExists[1];
    char OrderExecutionTradeThroughAlertTypeExists[1];
    char OrderExecutionReservedBit3Exists[1];
    char OrderExecutionStrategyIdExists[1];
    char OrderExecutionPriceTypeExists[1];
} OrderExecutionByte17T;

/*
 * Structure: Order Execution Byte 2
 */ 
typedef struct {
    char OrderExecutionContraTraderExists[1];
    char OrderExecutionCapacityExists[1];
    char OrderExecutionReservedBit6Exists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionReservedBit4Exists[1];
    char OrderExecutionReservedBit3Exists[1];
    char OrderExecutionReservedBit2Exists[1];
    char OrderExecutionSymbolExists[1];
} OrderExecutionByte2T;

/*
 * Structure: Order Execution Byte 3
 */ 
typedef struct {
    char OrderExecutionPreventMatchExists[1];
    char OrderExecutionOrderQtyExists[1];
    char OrderExecutionReservedBit6Exists[1];
    char OrderExecutionMaxFloorExists[1];
    char OrderExecutionDisplayIndicatorExists[1];
    char OrderExecutionClearingAccountExists[1];
    char OrderExecutionClearingFirmExists[1];
    char OrderExecutionAccountExists[1];
} OrderExecutionByte3T;

/*
 * Structure: Order Execution Byte 4
 */ 
typedef struct {
    char OrderExecutionReservedBit8Exists[1];
    char OrderExecutionReservedBit7Exists[1];
    char OrderExecutionCorrectedSizeExists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionOpenCloseExists[1];
    char OrderExecutionPutOrCallExists[1];
    char OrderExecutionStrikePriceExists[1];
    char OrderExecutionMaturityDateExists[1];
} OrderExecutionByte4T;

/*
 * Structure: Order Execution Byte 5
 */ 
typedef struct {
    char OrderExecutionReservedBit8Exists[1];
    char OrderExecutionReservedBit7Exists[1];
    char OrderExecutionReservedBit6Exists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionReservedBit4Exists[1];
    char OrderExecutionReservedBit3Exists[1];
    char OrderExecutionReservedBit2Exists[1];
    char OrderExecutionReservedBit1Exists[1];
} OrderExecutionByte5T;

/*
 * Structure: Order Execution Byte 6
 */ 
typedef struct {
    char OrderExecutionReservedBit8Exists[1];
    char OrderExecutionReservedBit7Exists[1];
    char OrderExecutionReservedBit6Exists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionAttributedQuoteExists[1];
    char OrderExecutionContraCapacityExists[1];
    char OrderExecutionReservedBit2Exists[1];
    char OrderExecutionReservedBit1Exists[1];
} OrderExecutionByte6T;

/*
 * Structure: Order Execution Byte 7
 */ 
typedef struct {
    char OrderExecutionReservedBit8Exists[1];
    char OrderExecutionReservedBit7Exists[1];
    char OrderExecutionReservedBit6Exists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionReservedBit4Exists[1];
    char OrderExecutionReservedBit3Exists[1];
    char OrderExecutionReservedBit2Exists[1];
    char OrderExecutionReservedBit1Exists[1];
} OrderExecutionByte7T;

/*
 * Structure: Order Execution Byte 8
 */ 
typedef struct {
    char OrderExecutionReservedBit8Exists[1];
    char OrderExecutionExDestinationExists[1];
    char OrderExecutionRouteDeliveryMethodExists[1];
    char OrderExecutionRouteStrategyExists[1];
    char OrderExecutionRoutingInstExists[1];
    char OrderExecutionStopPxExists[1];
    char OrderExecutionEchoTextExists[1];
    char OrderExecutionFeeCodeExists[1];
} OrderExecutionByte8T;

/*
 * Structure: Order Execution Byte 9
 */ 
typedef struct {
    char OrderExecutionCrossPrioritizationExists[1];
    char OrderExecutionCrossTypeExists[1];
    char OrderExecutionCmtaNumberExists[1];
    char OrderExecutionReservedBit5Exists[1];
    char OrderExecutionReservedBit4Exists[1];
    char OrderExecutionAuctionIdExists[1];
    char OrderExecutionTargetPartyIdExists[1];
    char OrderExecutionMarketFeeCodeExists[1];
} OrderExecutionByte9T;

/*
 * Structure: Order Modified Byte 1
 */ 
typedef struct {
    char OrderModifiedMaxRemovePctExists[1];
    char OrderModifiedMinQtyExists[1];
    char OrderModifiedTimeInForceExists[1];
    char OrderModifiedOrdTypeExists[1];
    char OrderModifiedExecInstExists[1];
    char OrderModifiedPriceExists[1];
    char OrderModifiedPegDifferenceExists[1];
    char OrderModifiedSideExists[1];
} OrderModifiedByte1T;

/*
 * Structure: Order Modified Byte 10
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedReservedBit7Exists[1];
    char OrderModifiedCrossExclusionIndicatorExists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedRoutingFirmIdExists[1];
    char OrderModifiedGiveUpFirmIdExists[1];
    char OrderModifiedAllocQtyExists[1];
    char OrderModifiedCrossIdExists[1];
} OrderModifiedByte10T;

/*
 * Structure: Order Modified Byte 11
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedReservedBit7Exists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedReservedBit4Exists[1];
    char OrderModifiedReservedBit3Exists[1];
    char OrderModifiedReservedBit2Exists[1];
    char OrderModifiedReservedBit1Exists[1];
} OrderModifiedByte11T;

/*
 * Structure: Order Modified Byte 12
 */ 
typedef struct {
    char OrderModifiedClearingOptionalDataExists[1];
    char OrderModifiedReservedBit7Exists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedReservedBit4Exists[1];
    char OrderModifiedReservedBit3Exists[1];
    char OrderModifiedReservedBit2Exists[1];
    char OrderModifiedReservedBit1Exists[1];
} OrderModifiedByte12T;

/*
 * Structure: Order Modified Byte 13
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedDrillThruProtectionExists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedReservedBit4Exists[1];
    char OrderModifiedReservedBit3Exists[1];
    char OrderModifiedReservedBit2Exists[1];
    char OrderModifiedReservedBit1Exists[1];
} OrderModifiedByte13T;

/*
 * Structure: Order Modified Byte 14
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedReservedBit7Exists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedReservedBit4Exists[1];
    char OrderModifiedReservedBit3Exists[1];
    char OrderModifiedReservedBit2Exists[1];
    char OrderModifiedReservedBit1Exists[1];
} OrderModifiedByte14T;

/*
 * Structure: Order Modified Byte 15
 */ 
typedef struct {
    char OrderModifiedClientIdAttrExists[1];
    char OrderModifiedReservedBit7Exists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedReservedBit4Exists[1];
    char OrderModifiedReservedBit3Exists[1];
    char OrderModifiedEquityPartyIdExists[1];
    char OrderModifiedReservedBit1Exists[1];
} OrderModifiedByte15T;

/*
 * Structure: Order Modified Byte 16
 */ 
typedef struct {
    char OrderModifiedOrderOriginExists[1];
    char OrderModifiedMultiClassSprdExists[1];
    char OrderModifiedFloorRoutingInstExists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedReservedBit4Exists[1];
    char OrderModifiedReservedBit3Exists[1];
    char OrderModifiedSessionEligibilityExists[1];
    char OrderModifiedFrequentTraderIdExists[1];
} OrderModifiedByte16T;

/*
 * Structure: Order Modified Byte 17
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedReservedBit7Exists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedReservedBit4Exists[1];
    char OrderModifiedReservedBit3Exists[1];
    char OrderModifiedStrategyIdExists[1];
    char OrderModifiedPriceTypeExists[1];
} OrderModifiedByte17T;

/*
 * Structure: Order Modified Byte 2
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedCapacityExists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedReservedBit4Exists[1];
    char OrderModifiedReservedBit3Exists[1];
    char OrderModifiedReservedBit2Exists[1];
    char OrderModifiedSymbolExists[1];
} OrderModifiedByte2T;

/*
 * Structure: Order Modified Byte 3
 */ 
typedef struct {
    char OrderModifiedPreventMatchExists[1];
    char OrderModifiedOrderQtyExists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedMaxFloorExists[1];
    char OrderModifiedDisplayIndicatorExists[1];
    char OrderModifiedClearingAccountExists[1];
    char OrderModifiedClearingFirmExists[1];
    char OrderModifiedAccountExists[1];
} OrderModifiedByte3T;

/*
 * Structure: Order Modified Byte 4
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedReservedBit7Exists[1];
    char OrderModifiedCorrectedSizeExists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedOpenCloseExists[1];
    char OrderModifiedPutOrCallExists[1];
    char OrderModifiedStrikePriceExists[1];
    char OrderModifiedMaturityDateExists[1];
} OrderModifiedByte4T;

/*
 * Structure: Order Modified Byte 5
 */ 
typedef struct {
    char OrderModifiedExpireTimeExists[1];
    char OrderModifiedBaseLiquidityIndicatorExists[1];
    char OrderModifiedWorkingPriceExists[1];
    char OrderModifiedDisplayPriceExists[1];
    char OrderModifiedLastPxExists[1];
    char OrderModifiedLastSharesExists[1];
    char OrderModifiedLeavesQtyExists[1];
    char OrderModifiedOrigClOrdIdExists[1];
} OrderModifiedByte5T;

/*
 * Structure: Order Modified Byte 6
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedReservedBit7Exists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedAttributedQuoteExists[1];
    char OrderModifiedContraCapacityExists[1];
    char OrderModifiedReservedBit2Exists[1];
    char OrderModifiedSecondaryOrderIdExists[1];
} OrderModifiedByte6T;

/*
 * Structure: Order Modified Byte 7
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedReservedBit7Exists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedReservedBit4Exists[1];
    char OrderModifiedReservedBit3Exists[1];
    char OrderModifiedReservedBit2Exists[1];
    char OrderModifiedSubLiquidityIndicatorExists[1];
} OrderModifiedByte7T;

/*
 * Structure: Order Modified Byte 8
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedExDestinationExists[1];
    char OrderModifiedRouteDeliveryMethodExists[1];
    char OrderModifiedRouteStrategyExists[1];
    char OrderModifiedRoutingInstExists[1];
    char OrderModifiedStopPxExists[1];
    char OrderModifiedEchoTextExists[1];
    char OrderModifiedReservedBit1Exists[1];
} OrderModifiedByte8T;

/*
 * Structure: Order Modified Byte 9
 */ 
typedef struct {
    char OrderModifiedReservedBit8Exists[1];
    char OrderModifiedReservedBit7Exists[1];
    char OrderModifiedReservedBit6Exists[1];
    char OrderModifiedReservedBit5Exists[1];
    char OrderModifiedReservedBit4Exists[1];
    char OrderModifiedAuctionIdExists[1];
    char OrderModifiedTargetPartyIdExists[1];
    char OrderModifiedMarketFeeCodeExists[1];
} OrderModifiedByte9T;

/*
 * Structure: Order Rejected Byte 1
 */ 
typedef struct {
    char OrderRejectedMaxRemovePctExists[1];
    char OrderRejectedMinQtyExists[1];
    char OrderRejectedTimeInForceExists[1];
    char OrderRejectedOrdTypeExists[1];
    char OrderRejectedExecInstExists[1];
    char OrderRejectedPriceExists[1];
    char OrderRejectedPegDifferenceExists[1];
    char OrderRejectedSideExists[1];
} OrderRejectedByte1T;

/*
 * Structure: Order Rejected Byte 10
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedCrossExclusionIndicatorExists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedRoutingFirmIdExists[1];
    char OrderRejectedGiveUpFirmIdExists[1];
    char OrderRejectedAllocQtyExists[1];
    char OrderRejectedCrossIdExists[1];
} OrderRejectedByte10T;

/*
 * Structure: Order Rejected Byte 11
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedReservedBit3Exists[1];
    char OrderRejectedReservedBit2Exists[1];
    char OrderRejectedReservedBit1Exists[1];
} OrderRejectedByte11T;

/*
 * Structure: Order Rejected Byte 12
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedReservedBit3Exists[1];
    char OrderRejectedReservedBit2Exists[1];
    char OrderRejectedReservedBit1Exists[1];
} OrderRejectedByte12T;

/*
 * Structure: Order Rejected Byte 13
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedReservedBit3Exists[1];
    char OrderRejectedReservedBit2Exists[1];
    char OrderRejectedReservedBit1Exists[1];
} OrderRejectedByte13T;

/*
 * Structure: Order Rejected Byte 14
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedReservedBit3Exists[1];
    char OrderRejectedReservedBit2Exists[1];
    char OrderRejectedReservedBit1Exists[1];
} OrderRejectedByte14T;

/*
 * Structure: Order Rejected Byte 15
 */ 
typedef struct {
    char OrderRejectedClientIdAttrExists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedReservedBit3Exists[1];
    char OrderRejectedEquityPartyIdExists[1];
    char OrderRejectedReservedBit1Exists[1];
} OrderRejectedByte15T;

/*
 * Structure: Order Rejected Byte 16
 */ 
typedef struct {
    char OrderRejectedOrderOriginExists[1];
    char OrderRejectedMultiClassSprdExists[1];
    char OrderRejectedFloorRoutingInstExists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedReservedBit3Exists[1];
    char OrderRejectedSessionEligibilityExists[1];
    char OrderRejectedFrequentTraderIdExists[1];
} OrderRejectedByte16T;

/*
 * Structure: Order Rejected Byte 17
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedReservedBit3Exists[1];
    char OrderRejectedStrategyIdExists[1];
    char OrderRejectedPriceTypeExists[1];
} OrderRejectedByte17T;

/*
 * Structure: Order Rejected Byte 2
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedCapacityExists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedReservedBit3Exists[1];
    char OrderRejectedReservedBit2Exists[1];
    char OrderRejectedSymbolExists[1];
} OrderRejectedByte2T;

/*
 * Structure: Order Rejected Byte 3
 */ 
typedef struct {
    char OrderRejectedPreventMatchExists[1];
    char OrderRejectedOrderQtyExists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedMaxFloorExists[1];
    char OrderRejectedDisplayIndicatorExists[1];
    char OrderRejectedClearingAccountExists[1];
    char OrderRejectedClearingFirmExists[1];
    char OrderRejectedAccountExists[1];
} OrderRejectedByte3T;

/*
 * Structure: Order Rejected Byte 4
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedCorrectedSizeExists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedOpenCloseExists[1];
    char OrderRejectedPutOrCallExists[1];
    char OrderRejectedStrikePriceExists[1];
    char OrderRejectedMaturityDateExists[1];
} OrderRejectedByte4T;

/*
 * Structure: Order Rejected Byte 5
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedReservedBit3Exists[1];
    char OrderRejectedReservedBit2Exists[1];
    char OrderRejectedReservedBit1Exists[1];
} OrderRejectedByte5T;

/*
 * Structure: Order Rejected Byte 6
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedAttributedQuoteExists[1];
    char OrderRejectedContraCapacityExists[1];
    char OrderRejectedReservedBit2Exists[1];
    char OrderRejectedSecondaryOrderIdExists[1];
} OrderRejectedByte6T;

/*
 * Structure: Order Rejected Byte 7
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedReservedBit6Exists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedReservedBit3Exists[1];
    char OrderRejectedReservedBit2Exists[1];
    char OrderRejectedReservedBit1Exists[1];
} OrderRejectedByte7T;

/*
 * Structure: Order Rejected Byte 8
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedExDestinationExists[1];
    char OrderRejectedRouteDeliveryMethodExists[1];
    char OrderRejectedRouteStrategyExists[1];
    char OrderRejectedRoutingInstExists[1];
    char OrderRejectedStopPxExists[1];
    char OrderRejectedEchoTextExists[1];
    char OrderRejectedReservedBit1Exists[1];
} OrderRejectedByte8T;

/*
 * Structure: Order Rejected Byte 9
 */ 
typedef struct {
    char OrderRejectedReservedBit8Exists[1];
    char OrderRejectedReservedBit7Exists[1];
    char OrderRejectedCmtaNumberExists[1];
    char OrderRejectedReservedBit5Exists[1];
    char OrderRejectedReservedBit4Exists[1];
    char OrderRejectedAuctionIdExists[1];
    char OrderRejectedTargetPartyIdExists[1];
    char OrderRejectedMarketFeeCodeExists[1];
} OrderRejectedByte9T;

/*
 * Structure: Order Restated Byte 1
 */ 
typedef struct {
    char OrderRestatedMaxRemovePctExists[1];
    char OrderRestatedMinQtyExists[1];
    char OrderRestatedTimeInForceExists[1];
    char OrderRestatedOrdTypeExists[1];
    char OrderRestatedExecInstExists[1];
    char OrderRestatedPriceExists[1];
    char OrderRestatedPegDifferenceExists[1];
    char OrderRestatedSideExists[1];
} OrderRestatedByte1T;

/*
 * Structure: Order Restated Byte 10
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedCrossExclusionIndicatorExists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedRoutingFirmIdExists[1];
    char OrderRestatedGiveUpFirmIdExists[1];
    char OrderRestatedAllocQtyExists[1];
    char OrderRestatedCrossIdExists[1];
} OrderRestatedByte10T;

/*
 * Structure: Order Restated Byte 11
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedReservedBit6Exists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedReservedBit4Exists[1];
    char OrderRestatedReservedBit3Exists[1];
    char OrderRestatedReservedBit2Exists[1];
    char OrderRestatedReservedBit1Exists[1];
} OrderRestatedByte11T;

/*
 * Structure: Order Restated Byte 12
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedReservedBit6Exists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedReservedBit4Exists[1];
    char OrderRestatedReservedBit3Exists[1];
    char OrderRestatedReservedBit2Exists[1];
    char OrderRestatedReservedBit1Exists[1];
} OrderRestatedByte12T;

/*
 * Structure: Order Restated Byte 13
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedReservedBit6Exists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedReservedBit4Exists[1];
    char OrderRestatedReservedBit3Exists[1];
    char OrderRestatedReservedBit2Exists[1];
    char OrderRestatedReservedBit1Exists[1];
} OrderRestatedByte13T;

/*
 * Structure: Order Restated Byte 14
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedReservedBit6Exists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedReservedBit4Exists[1];
    char OrderRestatedReservedBit3Exists[1];
    char OrderRestatedReservedBit2Exists[1];
    char OrderRestatedReservedBit1Exists[1];
} OrderRestatedByte14T;

/*
 * Structure: Order Restated Byte 15
 */ 
typedef struct {
    char OrderRestatedClientIdAttrExists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedReservedBit6Exists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedReservedBit4Exists[1];
    char OrderRestatedReservedBit3Exists[1];
    char OrderRestatedReservedBit2Exists[1];
    char OrderRestatedReservedBit1Exists[1];
} OrderRestatedByte15T;

/*
 * Structure: Order Restated Byte 16
 */ 
typedef struct {
    char OrderRestatedOrderOriginExists[1];
    char OrderRestatedMultiClassSprdExists[1];
    char OrderRestatedFloorRoutingInstExists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedReservedBit4Exists[1];
    char OrderRestatedReservedBit3Exists[1];
    char OrderRestatedReservedBit2Exists[1];
    char OrderRestatedFrequentTraderIdExists[1];
} OrderRestatedByte16T;

/*
 * Structure: Order Restated Byte 17
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedReservedBit6Exists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedReservedBit4Exists[1];
    char OrderRestatedReservedBit3Exists[1];
    char OrderRestatedStrategyIdExists[1];
    char OrderRestatedPriceTypeExists[1];
} OrderRestatedByte17T;

/*
 * Structure: Order Restated Byte 2
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedCapacityExists[1];
    char OrderRestatedReservedBit6Exists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedReservedBit4Exists[1];
    char OrderRestatedReservedBit3Exists[1];
    char OrderRestatedReservedBit2Exists[1];
    char OrderRestatedSymbolExists[1];
} OrderRestatedByte2T;

/*
 * Structure: Order Restated Byte 3
 */ 
typedef struct {
    char OrderRestatedPreventMatchExists[1];
    char OrderRestatedOrderQtyExists[1];
    char OrderRestatedReservedBit6Exists[1];
    char OrderRestatedMaxFloorExists[1];
    char OrderRestatedDisplayIndicatorExists[1];
    char OrderRestatedClearingAccountExists[1];
    char OrderRestatedClearingFirmExists[1];
    char OrderRestatedAccountExists[1];
} OrderRestatedByte3T;

/*
 * Structure: Order Restated Byte 4
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedCorrectedSizeExists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedOpenCloseExists[1];
    char OrderRestatedPutOrCallExists[1];
    char OrderRestatedStrikePriceExists[1];
    char OrderRestatedMaturityDateExists[1];
} OrderRestatedByte4T;

/*
 * Structure: Order Restated Byte 5
 */ 
typedef struct {
    char OrderRestatedExpireTimeExists[1];
    char OrderRestatedBaseLiquidityIndicatorExists[1];
    char OrderRestatedWorkingPriceExists[1];
    char OrderRestatedDisplayPriceExists[1];
    char OrderRestatedLastPxExists[1];
    char OrderRestatedLastSharesExists[1];
    char OrderRestatedLeavesQtyExists[1];
    char OrderRestatedOrigClOrdIdExists[1];
} OrderRestatedByte5T;

/*
 * Structure: Order Restated Byte 6
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedReservedBit6Exists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedAttributedQuoteExists[1];
    char OrderRestatedContraCapacityExists[1];
    char OrderRestatedReservedBit2Exists[1];
    char OrderRestatedSecondaryOrderIdExists[1];
} OrderRestatedByte6T;

/*
 * Structure: Order Restated Byte 7
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedReservedBit6Exists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedReservedBit4Exists[1];
    char OrderRestatedReservedBit3Exists[1];
    char OrderRestatedReservedBit2Exists[1];
    char OrderRestatedReservedBit1Exists[1];
} OrderRestatedByte7T;

/*
 * Structure: Order Restated Byte 8
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedExDestinationExists[1];
    char OrderRestatedRouteDeliveryMethodExists[1];
    char OrderRestatedRouteStrategyExists[1];
    char OrderRestatedRoutingInstExists[1];
    char OrderRestatedStopPxExists[1];
    char OrderRestatedEchoTextExists[1];
    char OrderRestatedReservedBit1Exists[1];
} OrderRestatedByte8T;

/*
 * Structure: Order Restated Byte 9
 */ 
typedef struct {
    char OrderRestatedReservedBit8Exists[1];
    char OrderRestatedReservedBit7Exists[1];
    char OrderRestatedCmtaNumberExists[1];
    char OrderRestatedReservedBit5Exists[1];
    char OrderRestatedReservedBit4Exists[1];
    char OrderRestatedAuctionIdExists[1];
    char OrderRestatedTargetPartyIdExists[1];
    char OrderRestatedMarketFeeCodeExists[1];
} OrderRestatedByte9T;

/*
 * Structure: Param Header
 */ 
typedef struct {
    uint16_t ParamGroupLength;
    uint8_t ParamGroupType;
} ParamHeaderT;

/*
 * Structure: Purge Rejected Byte 1
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte1T;

/*
 * Structure: Purge Rejected Byte 10
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte10T;

/*
 * Structure: Purge Rejected Byte 11
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte11T;

/*
 * Structure: Purge Rejected Byte 12
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte12T;

/*
 * Structure: Purge Rejected Byte 13
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte13T;

/*
 * Structure: Purge Rejected Byte 14
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte14T;

/*
 * Structure: Purge Rejected Byte 15
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedMassCancelIdExists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte15T;

/*
 * Structure: Purge Rejected Byte 16
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte16T;

/*
 * Structure: Purge Rejected Byte 17
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte17T;

/*
 * Structure: Purge Rejected Byte 2
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte2T;

/*
 * Structure: Purge Rejected Byte 3
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte3T;

/*
 * Structure: Purge Rejected Byte 4
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte4T;

/*
 * Structure: Purge Rejected Byte 5
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte5T;

/*
 * Structure: Purge Rejected Byte 6
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte6T;

/*
 * Structure: Purge Rejected Byte 7
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte7T;

/*
 * Structure: Purge Rejected Byte 8
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte8T;

/*
 * Structure: Purge Rejected Byte 9
 */ 
typedef struct {
    char PurgeRejectedReservedBit8Exists[1];
    char PurgeRejectedReservedBit7Exists[1];
    char PurgeRejectedReservedBit6Exists[1];
    char PurgeRejectedReservedBit5Exists[1];
    char PurgeRejectedReservedBit4Exists[1];
    char PurgeRejectedReservedBit3Exists[1];
    char PurgeRejectedReservedBit2Exists[1];
    char PurgeRejectedReservedBit1Exists[1];
} PurgeRejectedByte9T;

/*
 * Structure: Quote Cancelled Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t OrderId;
    char Symbol[6];
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
    char Symbol[6];
    char ClearingFirm[4];
    uint32_t LastShares;
    int64_t LastPx;
    uint32_t LeavesQty;
    char ContraTrader[4];
    char ContraCapacity[1];
    char Side;
    char BaseLiquidityIndicator;
    char SubLiquidityIndicator;
    char FeeCode[2];
    char MarketingFeeCode[2];
} QuoteExecutionMessageT;

/*
 * Structure: Quote Restated Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t OrderId;
    uint32_t LeavesQty;
    uint64_t WorkingPrice;
    char Symbol[6];
    char Side;
    char QuoteRestatementReason[1];
} QuoteRestatedMessageT;

/*
 * Structure: Quote Result Group
 */ 
typedef struct {
    uint64_t OrderId;
    char QuoteResult;
    char QuoteLiquidityIndicator;
    char Reserved6[6];
} QuoteResultGroupT;

/*
 * Structure: Quote Update
 */ 
typedef struct {
    char Symbol[6];
    char Side;
    char OpenClose;
    int64_t Price;
    uint32_t OrderQty;
    char Reserved12[12];
} QuoteUpdateT;

/*
 * Structure: Quote Update Acknowledgment Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    char QuoteRejectReason;
    char Reserved17[17];
    uint8_t NumberOfQuoteResults;
} QuoteUpdateAcknowledgmentMessageT;

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
    char Reserved15[15];
    uint64_t SendTime;
    char PostingInstruction;
    char SessionEligibility;
    uint8_t NumberOfQuoteUpdates;
} QuoteUpdateMessageT;

/*
 * Structure: Quote Update Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    char QuoteRejectReason;
    char Reserved17[17];
} QuoteUpdateRejectedMessageT;

/*
 * Structure: Reset Risk Acknowledgment Message
 */ 
typedef struct {
    char RiskStatusId[16];
    char RiskResetResult;
} ResetRiskAcknowledgmentMessageT;

/*
 * Structure: Risk Reset Message
 */ 
typedef struct {
    char RiskStatusId[16];
    char RiskReset[8];
    char Reserved4[4];
    char ClearingFirm[4];
    char RiskRoot[6];
    uint16_t CustomGroupId;
} RiskResetMessageT;

/*
 * Structure: Short Quote Update
 */ 
typedef struct {
    char Symbol[6];
    char Side;
    char OpenClose;
    int64_t Price;
    uint32_t OrderQty;
    char Reserved2[2];
} ShortQuoteUpdateT;

/*
 * Structure: Short Quote Update Message
 */ 
typedef struct {
    char QuoteUpdateId[16];
    char ClearingFirm[4];
    char ClearingAccount[4];
    uint16_t CustomGroupId;
    char Capacity;
    char Reserved3[3];
    uint64_t SendTime;
    char PostingInstruction;
    char SessionEligibility;
    uint8_t NumberOfShortQuoteUpdates;
} ShortQuoteUpdateMessageT;

/*
 * Structure: Trade Cancel Or Correct Byte 1
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte1T;

/*
 * Structure: Trade Cancel Or Correct Byte 10
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectCrossExclusionIndicatorExists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectRoutingFirmIdExists[1];
    char TradeCancelOrCorrectGiveUpFirmIdExists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectCrossIdExists[1];
} TradeCancelOrCorrectByte10T;

/*
 * Structure: Trade Cancel Or Correct Byte 11
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte11T;

/*
 * Structure: Trade Cancel Or Correct Byte 12
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte12T;

/*
 * Structure: Trade Cancel Or Correct Byte 13
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte13T;

/*
 * Structure: Trade Cancel Or Correct Byte 14
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte14T;

/*
 * Structure: Trade Cancel Or Correct Byte 15
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte15T;

/*
 * Structure: Trade Cancel Or Correct Byte 16
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte16T;

/*
 * Structure: Trade Cancel Or Correct Byte 17
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte17T;

/*
 * Structure: Trade Cancel Or Correct Byte 2
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectCapacityExists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectSymbolExists[1];
} TradeCancelOrCorrectByte2T;

/*
 * Structure: Trade Cancel Or Correct Byte 3
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte3T;

/*
 * Structure: Trade Cancel Or Correct Byte 4
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectCorrectedSizeExists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectOpenCloseExists[1];
    char TradeCancelOrCorrectPutOrCallExists[1];
    char TradeCancelOrCorrectStrikePriceExists[1];
    char TradeCancelOrCorrectMaturityDateExists[1];
} TradeCancelOrCorrectByte4T;

/*
 * Structure: Trade Cancel Or Correct Byte 5
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte5T;

/*
 * Structure: Trade Cancel Or Correct Byte 6
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte6T;

/*
 * Structure: Trade Cancel Or Correct Byte 7
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectSubLiquidityIndicatorExists[1];
} TradeCancelOrCorrectByte7T;

/*
 * Structure: Trade Cancel Or Correct Byte 8
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectReservedBit6Exists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectReservedBit3Exists[1];
    char TradeCancelOrCorrectReservedBit2Exists[1];
    char TradeCancelOrCorrectReservedBit1Exists[1];
} TradeCancelOrCorrectByte8T;

/*
 * Structure: Trade Cancel Or Correct Byte 9
 */ 
typedef struct {
    char TradeCancelOrCorrectReservedBit8Exists[1];
    char TradeCancelOrCorrectReservedBit7Exists[1];
    char TradeCancelOrCorrectCmtaNumberExists[1];
    char TradeCancelOrCorrectReservedBit5Exists[1];
    char TradeCancelOrCorrectReservedBit4Exists[1];
    char TradeCancelOrCorrectAuctionIdExists[1];
    char TradeCancelOrCorrectTargetPartyIdExists[1];
    char TradeCancelOrCorrectMarketingFeeCodeExists[1];
} TradeCancelOrCorrectByte9T;

/*
 * Structure: Unit Sequence
 */ 
typedef struct {
    uint8_t UnitNumber;
    uint32_t SequenceNumber;
} UnitSequenceT;

/*
 * Structure: Unit Sequences
 */ 
typedef struct {
    char NoUnspecifiedUnitReplay;
    uint8_t NumberOfUnits;
} UnitSequencesT;

/*
 * Structure: User Modify Rejected Byte 1
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte1T;

/*
 * Structure: User Modify Rejected Byte 10
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedCrossExclusionIndicatorExists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedRoutingFirmIdExists[1];
    char UserModifyRejectedGiveUpFirmIdExists[1];
    char UserModifyRejectedAllocQtyExists[1];
    char UserModifyRejectedCrossIdExists[1];
} UserModifyRejectedByte10T;

/*
 * Structure: User Modify Rejected Byte 11
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte11T;

/*
 * Structure: User Modify Rejected Byte 12
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte12T;

/*
 * Structure: User Modify Rejected Byte 13
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte13T;

/*
 * Structure: User Modify Rejected Byte 14
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte14T;

/*
 * Structure: User Modify Rejected Byte 15
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte15T;

/*
 * Structure: User Modify Rejected Byte 16
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte16T;

/*
 * Structure: User Modify Rejected Byte 17
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte17T;

/*
 * Structure: User Modify Rejected Byte 2
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte2T;

/*
 * Structure: User Modify Rejected Byte 3
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte3T;

/*
 * Structure: User Modify Rejected Byte 4
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte4T;

/*
 * Structure: User Modify Rejected Byte 5
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte5T;

/*
 * Structure: User Modify Rejected Byte 6
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte6T;

/*
 * Structure: User Modify Rejected Byte 7
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte7T;

/*
 * Structure: User Modify Rejected Byte 8
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte8T;

/*
 * Structure: User Modify Rejected Byte 9
 */ 
typedef struct {
    char UserModifyRejectedReservedBit8Exists[1];
    char UserModifyRejectedReservedBit7Exists[1];
    char UserModifyRejectedReservedBit6Exists[1];
    char UserModifyRejectedReservedBit5Exists[1];
    char UserModifyRejectedReservedBit4Exists[1];
    char UserModifyRejectedReservedBit3Exists[1];
    char UserModifyRejectedReservedBit2Exists[1];
    char UserModifyRejectedReservedBit1Exists[1];
} UserModifyRejectedByte9T;

