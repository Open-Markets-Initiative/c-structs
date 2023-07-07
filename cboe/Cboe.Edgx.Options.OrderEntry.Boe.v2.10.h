/*******************************************************************************
 * C Structs For Cboe Edgx Options Boe OrderEntry 2.10 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Application Message Type Values
 */ 
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT 0x25
#define ENUM_APPLICATION_MESSAGE_TYPE_CROSS_ORDER_ACKNOWLEDGMENT 0x43
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_REJECTED 0x26
#define ENUM_APPLICATION_MESSAGE_TYPE_CROSS_ORDER_REJECTED 0x44
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_MODIFIED 0x27
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_RESTATED 0x28
#define ENUM_APPLICATION_MESSAGE_TYPE_USER_MODIFY_REJECTED 0x29
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_CANCELLED 0x2A
#define ENUM_APPLICATION_MESSAGE_TYPE_CROSS_ORDER_CANCELLED 0x46
#define ENUM_APPLICATION_MESSAGE_TYPE_CANCEL_REJECTED 0x2B
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_EXECUTION 0x2C
#define ENUM_APPLICATION_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT 0x2D
#define ENUM_APPLICATION_MESSAGE_TYPE_PURGE_REJECTED 0x48
#define ENUM_APPLICATION_MESSAGE_TYPE_COMPLEX_INSTRUMENT_ACCEPTED 0x4D
#define ENUM_APPLICATION_MESSAGE_TYPE_COMPLEX_INSTRUMENT_REJECTED 0x4E

/*
 * Attributed Quote Values
 */ 
#define ENUM_ATTRIBUTED_QUOTE_DO_NOT_ATTRIBUTE_FIRM_EXECUTING_BROKER_ID 'N'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_FIRM_EXECUTING_BROKER_ID 'Y'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_CLIENT_ID_ONLY 'C'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_BOTH_CLEARING_FIRM_AND_CLIENT_ID 'Z'

/*
 * Auto Match Values
 */ 
#define ENUM_AUTO_MATCH_DISABLED '0'
#define ENUM_AUTO_MATCH_MARKET '1'
#define ENUM_AUTO_MATCH_LIMIT '1'
#define ENUM_AUTO_MATCH_ATTRIBUTE_BOTH_CLEARING_FIRM_AND_CLIENT_ID 'Z'

/*
 * Base Liquidity Indicator Values
 */ 
#define ENUM_BASE_LIQUIDITY_INDICATOR_ADDED_LIQUIDITY 'A'
#define ENUM_BASE_LIQUIDITY_INDICATOR_REMOVED_LIQUIDITY 'R'
#define ENUM_BASE_LIQUIDITY_INDICATOR_ROUTED_TO_ANOTHER_MARKET 'X'
#define ENUM_BASE_LIQUIDITY_INDICATOR_AUCTION_OR_UNCROSSING 'C'

/*
 * Cancel Orig On Reject Values
 */ 
#define ENUM_CANCEL_ORIG_ON_REJECT_LEAVE_ORIGINAL_ORDER_ALONE 'N'
#define ENUM_CANCEL_ORIG_ON_REJECT_CANCEL_ORIGINAL_ORDER_IF_MODIFICATION_FAILS 'Y'

/*
 * Cancel Reason Values
 */ 
#define ENUM_CANCEL_REASON_ADMIN 'A'
#define ENUM_CANCEL_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_CANCEL_REASON_HALTED 'H'
#define ENUM_CANCEL_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_CANCEL_REASON_TOO_LATE_TO_CANCEL 'J'
#define ENUM_CANCEL_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_CANCEL_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO 'L'
#define ENUM_CANCEL_REASON_ORDER_SIZE_EXCEEDED 'M'
#define ENUM_CANCEL_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_CANCEL_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_CANCEL_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_CANCEL_REASON_WAITING_FOR_FIRST_TRADE 'Q'
#define ENUM_CANCEL_REASON_ROUTING_UNAVAILABLE 'R'
#define ENUM_CANCEL_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO 'T'
#define ENUM_CANCEL_REASON_USER_REQUESTED 'U'
#define ENUM_CANCEL_REASON_WOULD_WASH 'V'
#define ENUM_CANCEL_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE 'W'
#define ENUM_CANCEL_REASON_ORDER_EXPIRED 'X'
#define ENUM_CANCEL_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_CANCEL_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_CANCEL_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED 'c'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_CANCEL_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_CANCEL_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_CANCEL_REASON_RESERVE_RELOAD 'r'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_CANCEL_REASON_WOULD_REMOVE_ON_UNSLIDE 'w'
#define ENUM_CANCEL_REASON_CROSSED_MARKET 'x'
#define ENUM_CANCEL_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY 'y'
#define ENUM_CANCEL_REASON_SESSION_END 'z'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL '+'

/*
 * Cancel Reject Reason Values
 */ 
#define ENUM_CANCEL_REJECT_REASON_ADMIN 'A'
#define ENUM_CANCEL_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_CANCEL_REJECT_REASON_HALTED 'H'
#define ENUM_CANCEL_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_CANCEL_REJECT_REASON_TOO_LATE_TO_CANCEL 'J'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_CANCEL_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO 'L'
#define ENUM_CANCEL_REJECT_REASON_ORDER_SIZE_EXCEEDED 'M'
#define ENUM_CANCEL_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_CANCEL_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_CANCEL_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_CANCEL_REJECT_REASON_WAITING_FOR_FIRST_TRADE 'Q'
#define ENUM_CANCEL_REJECT_REASON_ROUTING_UNAVAILABLE 'R'
#define ENUM_CANCEL_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO 'T'
#define ENUM_CANCEL_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_CANCEL_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_CANCEL_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE 'W'
#define ENUM_CANCEL_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_CANCEL_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_CANCEL_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_CANCEL_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED 'c'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_CANCEL_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_CANCEL_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_CANCEL_REJECT_REASON_RESERVE_RELOAD 'r'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_CANCEL_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE 'w'
#define ENUM_CANCEL_REJECT_REASON_CROSSED_MARKET 'x'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY 'y'
#define ENUM_CANCEL_REJECT_REASON_SESSION_END 'z'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL '+'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_CUSTOMER 'C'
#define ENUM_CAPACITY_MARKET_MAKER 'M'
#define ENUM_CAPACITY_FIRM 'F'
#define ENUM_CAPACITY_PROFESSIONAL_CUSTOMER 'U'
#define ENUM_CAPACITY_NON_CBOE_MARKET_MAKER 'N'
#define ENUM_CAPACITY_BROKER_DEALER 'B'
#define ENUM_CAPACITY_JOINT_BACK_OFFICE 'J'

/*
 * Cross Exclusion Indicator Values
 */ 
#define ENUM_CROSS_EXCLUSION_INDICATOR_NO 'N'
#define ENUM_CROSS_EXCLUSION_INDICATOR_YES 'Y'

/*
 * Cross Prioritization Values
 */ 
#define ENUM_CROSS_PRIORITIZATION_BUY '1'
#define ENUM_CROSS_PRIORITIZATION_SELL '2'

/*
 * Display Indicator Values
 */ 
#define ENUM_DISPLAY_INDICATOR_DETERMINED_BY_PORT_LEVEL_SETTING 'V'
#define ENUM_DISPLAY_INDICATOR_PRICE_ADJUST 'P'
#define ENUM_DISPLAY_INDICATOR_MULTIPLE_PRICE_ADJUST 'm'
#define ENUM_DISPLAY_INDICATOR_REJECT_THE_ORDER_IF_IT_CANNOT_BE_BOOKED_AND_DISPLAYED_WITHOUT_ADJUSTMENT 'm'

/*
 * Equity Ex Destination Values
 */ 
#define ENUM_EQUITY_EX_DESTINATION_COWEN 'C'

/*
 * Equity Leg Short Sell Values
 */ 
#define ENUM_EQUITY_LEG_SHORT_SELL_SELL_SHORT '5'
#define ENUM_EQUITY_LEG_SHORT_SELL_SELL_SHORT_EXEMPT '6'
#define ENUM_EQUITY_LEG_SHORT_SELL_DISABLED '0'
#define ENUM_EQUITY_LEG_SHORT_SELL_ENABLED '1'

/*
 * Equity Trade Venue Values
 */ 
#define ENUM_EQUITY_TRADE_VENUE_NYSE_AMERICAN 'A'
#define ENUM_EQUITY_TRADE_VENUE_NASDAQ_BX 'B'
#define ENUM_EQUITY_TRADE_VENUE_NYSE_NATIONAL 'C'
#define ENUM_EQUITY_TRADE_VENUE_INVESTORS_EXCHANGE 'I'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_EDGA_EXCHANGE 'J'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_EDGX_EXCHANGE 'K'
#define ENUM_EQUITY_TRADE_VENUE_CHX 'M'
#define ENUM_EQUITY_TRADE_VENUE_NYSE 'N'
#define ENUM_EQUITY_TRADE_VENUE_NYSE_ARCA 'P'
#define ENUM_EQUITY_TRADE_VENUE_NASDAQ 'Q'
#define ENUM_EQUITY_TRADE_VENUE_NASDAQ_PSX 'X'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_BYX_EXCHANGE 'Y'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_BZX_EXCHANGE 'Z'

/*
 * Ex Destination Values
 */ 
#define ENUM_EX_DESTINATION_NYSE_ARCA 'A'
#define ENUM_EX_DESTINATION_NASDAQ_ISE 'E'
#define ENUM_EX_DESTINATION_MIAX 'F'
#define ENUM_EX_DESTINATION_MIAX_PEARL 'P'
#define ENUM_EX_DESTINATION_MIAX_EMERALD 'D'
#define ENUM_EX_DESTINATION_EDGX_OPTIONS 'G'
#define ENUM_EX_DESTINATION_C2 'H'
#define ENUM_EX_DESTINATION_BOX 'K'
#define ENUM_EX_DESTINATION_NASDAQ 'N'
#define ENUM_EX_DESTINATION_NASDAQ_BX 'S'
#define ENUM_EX_DESTINATION_NYSE_AMERICAN 'U'
#define ENUM_EX_DESTINATION_C1 'W'
#define ENUM_EX_DESTINATION_NASDAQ_PHLX 'X'
#define ENUM_EX_DESTINATION_BZX_OPTIONS 'Z'
#define ENUM_EX_DESTINATION_NASDAQ_GEMX 'g'

/*
 * Exec Inst Values
 */ 
#define ENUM_EXEC_INST_INTERMARKET_SWEEP 'f'
#define ENUM_EXEC_INST_ALL_OR_NONE 'G'
#define ENUM_EXEC_INST_SWEEP 's'

/*
 * Login Response Status Values
 */ 
#define ENUM_LOGIN_RESPONSE_STATUS_LOGIN_ACCEPTED 'A'
#define ENUM_LOGIN_RESPONSE_STATUS_NOT_AUTHORIZED 'N'
#define ENUM_LOGIN_RESPONSE_STATUS_SESSION_IS_DISABLED 'D'
#define ENUM_LOGIN_RESPONSE_STATUS_SESSION_IN_USE 'B'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_SESSION 'S'
#define ENUM_LOGIN_RESPONSE_STATUS_SEQUENCE_AHEAD_IN_LOGIN_MESSAGE 'Q'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_UNIT_GIVEN_IN_LOGIN_MESSAGE 'I'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_RETURN_BIT_FIELD_IN_LOGIN_MESSAGE 'F'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_LOGIN_REQUEST_MESSAGE_STRUCTURE 'M'

/*
 * Logout Reason Values
 */ 
#define ENUM_LOGOUT_REASON_USER_REQUESTED 'U'
#define ENUM_LOGOUT_REASON_END_OF_DAY 'E'
#define ENUM_LOGOUT_REASON_ADMINISTRATIVE 'A'
#define ENUM_LOGOUT_REASON_PROTOCOL_VIOLATION '!'

/*
 * Mass Cancel Lockout Values
 */ 
#define ENUM_MASS_CANCEL_LOCKOUT_NO_LOCKOUT '0'
#define ENUM_MASS_CANCEL_LOCKOUT_LOCKOUT '0'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_LOGIN_REQUEST_MESSAGE 0x37
#define ENUM_MESSAGE_TYPE_LOGOUT_REQUEST_MESSAGE 0x02
#define ENUM_MESSAGE_TYPE_CLIENT_HEARTBEAT_MESSAGE 0x03
#define ENUM_MESSAGE_TYPE_LOGIN_RESPONSE_MESSAGE 0x24
#define ENUM_MESSAGE_TYPE_LOGOUT_MESSAGE 0x02
#define ENUM_MESSAGE_TYPE_SERVER_HEARTBEAT_MESSAGE 0x09
#define ENUM_MESSAGE_TYPE_REPLAY_COMPLETE_MESSAGE 0x13
#define ENUM_MESSAGE_TYPE_NEW_ORDER_MESSAGE 0x38
#define ENUM_MESSAGE_TYPE_NEW_ORDER_CROSS_MESSAGE 0x41
#define ENUM_MESSAGE_TYPE_NEW_ORDER_COMPLEX_MESSAGE 0x4B
#define ENUM_MESSAGE_TYPE_NEW_ORDER_CROSS_MULTILEG_MESSAGE 0x5A
#define ENUM_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE 0x39
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE 0x3A
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_MESSAGE 0x55
#define ENUM_MESSAGE_TYPE_SHORT_QUOTE_UPDATE_MESSAGE 0x59
#define ENUM_MESSAGE_TYPE_PURGE_ORDER_MESSAGE 0x47
#define ENUM_MESSAGE_TYPE_RISK_RESET_MESSAGE 0x56
#define ENUM_MESSAGE_TYPE_NEW_COMPLEX_INSTRUMENT_MESSAGE 0x4C
#define ENUM_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT_MESSAGE 0x25
#define ENUM_MESSAGE_TYPE_CROSS_ORDER_ACKNOWLEDGMENT_MESSAGE 0x43
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_ACKNOWLEDGMENT_MESSAGE 0x25
#define ENUM_MESSAGE_TYPE_ORDER_REJECTED_MESSAGE 0x26
#define ENUM_MESSAGE_TYPE_CROSS_ORDER_REJECTED_MESSAGE 0x44
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_REJECTED_MESSAGE 0x58
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE 0x27
#define ENUM_MESSAGE_TYPE_ORDER_RESTATED_MESSAGE 0x28
#define ENUM_MESSAGE_TYPE_QUOTE_RESTATED_MESSAGE 0x52
#define ENUM_MESSAGE_TYPE_USER_MODIFY_REJECTED_MESSAGE 0x29
#define ENUM_MESSAGE_TYPE_ORDER_CANCELLED_MESSAGE 0x2a
#define ENUM_MESSAGE_TYPE_QUOTE_CANCELLED_MESSAGE 0x53
#define ENUM_MESSAGE_TYPE_CROSS_ORDER_CANCELLED_MESSAGE 0x46
#define ENUM_MESSAGE_TYPE_CANCEL_REJECTED_MESSAGE 0x2B
#define ENUM_MESSAGE_TYPE_QUOTE_EXECUTION_MESSAGE 0x54
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT_MESSAGE 0x2D
#define ENUM_MESSAGE_TYPE_PURGE_REJECTED_MESSAGE 0x48
#define ENUM_MESSAGE_TYPE_RESET_RISK_ACKNOWLEDGMENT_MESSAGE 0x57
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_ACKNOWLEDGMENT_MESSAGE 0x36
#define ENUM_MESSAGE_TYPE_COMPLEX_INSTRUMENT_ACCEPTED_MESSAGE 0x4D
#define ENUM_MESSAGE_TYPE_COMPLEX_INSTRUMENT_REJECTED_MESSAGE 0x4D

/*
 * Modify Reject Reason Values
 */ 
#define ENUM_MODIFY_REJECT_REASON_ADMIN 'A'
#define ENUM_MODIFY_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_MODIFY_REJECT_REASON_HALTED 'H'
#define ENUM_MODIFY_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_MODIFY_REJECT_REASON_TOO_LATE_TO_CANCEL 'J'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_MODIFY_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO 'L'
#define ENUM_MODIFY_REJECT_REASON_ORDER_SIZE_EXCEEDED 'M'
#define ENUM_MODIFY_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_MODIFY_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_MODIFY_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_MODIFY_REJECT_REASON_WAITING_FOR_FIRST_TRADE 'Q'
#define ENUM_MODIFY_REJECT_REASON_ROUTING_UNAVAILABLE 'R'
#define ENUM_MODIFY_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO 'T'
#define ENUM_MODIFY_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_MODIFY_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_MODIFY_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE 'W'
#define ENUM_MODIFY_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_MODIFY_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_MODIFY_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_MODIFY_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED 'c'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_MODIFY_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_MODIFY_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_MODIFY_REJECT_REASON_RESERVE_RELOAD 'r'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_MODIFY_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE 'w'
#define ENUM_MODIFY_REJECT_REASON_CROSSED_MARKET 'x'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY 'y'
#define ENUM_MODIFY_REJECT_REASON_SESSION_END 'z'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL '+'

/*
 * Multi Class Sprd Values
 */ 
#define ENUM_MULTI_CLASS_SPRD_NO 'N'
#define ENUM_MULTI_CLASS_SPRD_YES 'Y'

/*
 * No Unspecified Unit Replay Values
 */ 
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_FALSE '0'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TRUE '1'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TEST 'T'

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
#define ENUM_ORD_TYPE_STOP '3'
#define ENUM_ORD_TYPE_STOP_LIMIT '4'

/*
 * Order Reject Reason Values
 */ 
#define ENUM_ORDER_REJECT_REASON_ADMIN 'A'
#define ENUM_ORDER_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_ORDER_REJECT_REASON_HALTED 'H'
#define ENUM_ORDER_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_ORDER_REJECT_REASON_TOO_LATE_TO_CANCEL 'J'
#define ENUM_ORDER_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_ORDER_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO 'L'
#define ENUM_ORDER_REJECT_REASON_ORDER_SIZE_EXCEEDED 'M'
#define ENUM_ORDER_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_ORDER_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_ORDER_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_ORDER_REJECT_REASON_WAITING_FOR_FIRST_TRADE 'Q'
#define ENUM_ORDER_REJECT_REASON_ROUTING_UNAVAILABLE 'R'
#define ENUM_ORDER_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO 'T'
#define ENUM_ORDER_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_ORDER_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_ORDER_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE 'W'
#define ENUM_ORDER_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_ORDER_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_ORDER_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_ORDER_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED 'c'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_ORDER_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_ORDER_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_ORDER_REJECT_REASON_RESERVE_RELOAD 'r'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_ORDER_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE 'w'
#define ENUM_ORDER_REJECT_REASON_CROSSED_MARKET 'x'
#define ENUM_ORDER_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY 'y'
#define ENUM_ORDER_REJECT_REASON_SESSION_END 'z'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL '+'

/*
 * Ors Values
 */ 
#define ENUM_ORS_NO 'N'
#define ENUM_ORS_YES 'Y'

/*
 * Param Group Type Values
 */ 
#define ENUM_PARAM_GROUP_TYPE_UNIT_SEQUENCES 0x80
#define ENUM_PARAM_GROUP_TYPE_RETURN_BITFIELDS 0x81

/*
 * Posting Instruction Values
 */ 
#define ENUM_POSTING_INSTRUCTION_POST_ONLY 'P'
#define ENUM_POSTING_INSTRUCTION_BOOK_ONLY 'B'
#define ENUM_POSTING_INSTRUCTION_BOOK_ONLY_NO_SLIDE 'N'
#define ENUM_POSTING_INSTRUCTION_POST_ONLY_NO_SLIDE 'R'

/*
 * Price Type Values
 */ 
#define ENUM_PRICE_TYPE_FIXED_CABINET_TRADE_PRICE '0'
#define ENUM_PRICE_TYPE_PERCENTAGE '1'
#define ENUM_PRICE_TYPE_PRICE_PER_UNIT '2'
#define ENUM_PRICE_TYPE_FIXED_AMOUNT '3'

/*
 * Purge Reject Reason Values
 */ 
#define ENUM_PURGE_REJECT_REASON_ADMIN 'A'
#define ENUM_PURGE_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_PURGE_REJECT_REASON_HALTED 'H'
#define ENUM_PURGE_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_PURGE_REJECT_REASON_TOO_LATE_TO_CANCEL 'J'
#define ENUM_PURGE_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED 'K'
#define ENUM_PURGE_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO 'L'
#define ENUM_PURGE_REJECT_REASON_ORDER_SIZE_EXCEEDED 'M'
#define ENUM_PURGE_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST 'N'
#define ENUM_PURGE_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER 'O'
#define ENUM_PURGE_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL 'P'
#define ENUM_PURGE_REJECT_REASON_WAITING_FOR_FIRST_TRADE 'Q'
#define ENUM_PURGE_REJECT_REASON_ROUTING_UNAVAILABLE 'R'
#define ENUM_PURGE_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO 'T'
#define ENUM_PURGE_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_PURGE_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_PURGE_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE 'W'
#define ENUM_PURGE_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_PURGE_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_PURGE_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_PURGE_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED 'c'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_PURGE_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_PURGE_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_PURGE_REJECT_REASON_RESERVE_RELOAD 'r'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_PURGE_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE 'w'
#define ENUM_PURGE_REJECT_REASON_CROSSED_MARKET 'x'
#define ENUM_PURGE_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY 'y'
#define ENUM_PURGE_REJECT_REASON_SESSION_END 'z'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL '+'

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT '0'
#define ENUM_PUT_OR_CALL_CALL '1'

/*
 * Quote Liquidity Indicator Values
 */ 
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NORMAL 'N'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NBBO_SETTER 'S'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NBBO_JOINER 'J'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_MARKET_TURNER 'U'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NO_QUOTE_ON_BOOK ' '

/*
 * Quote Reject Reason Values
 */ 
#define ENUM_QUOTE_REJECT_REASON_INVALID_EFID 'C'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_ID 'D'
#define ENUM_QUOTE_REJECT_REASON_INVALID_SESSION_ELIGIBILITY 'E'
#define ENUM_QUOTE_REJECT_REASON_NOT_ENABLED_FOR_QUOTES 'F'
#define ENUM_QUOTE_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_QUOTE_REJECT_REASON_INVALID_QUOTE_CNT 'L'
#define ENUM_QUOTE_REJECT_REASON_SYMBOLS_NOT_ON_SAME_MATCHING_ENGINE 'M'
#define ENUM_QUOTE_REJECT_REASON_INVALID_POSTING_INSTRUCTION 'P'
#define ENUM_QUOTE_REJECT_REASON_INVALID_QUOTE_UPDATE_ID 'Q'
#define ENUM_QUOTE_REJECT_REASON_RISK_ROOT_DOES_NOT_MATCH_ACROSS_QUOTES 'R'
#define ENUM_QUOTE_REJECT_REASON_SYMBOL_NOT_FOUND 'S'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_PREVENT_TYPE 'W'
#define ENUM_QUOTE_REJECT_REASON_ADMIN 'a'
#define ENUM_QUOTE_REJECT_REASON_INVALID_CAPACITY 'C'
#define ENUM_QUOTE_REJECT_REASON_CLOSE_ONLY 'd'
#define ENUM_QUOTE_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_METHOD 'm'
#define ENUM_QUOTE_REJECT_REASON_INVALID_OPEN_CLOSE 'p'
#define ENUM_QUOTE_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 'p'
#define ENUM_QUOTE_REJECT_REASON_INVALID_REMOVE 'r'
#define ENUM_QUOTE_REJECT_REASON_INVALID_SIDE 's'
#define ENUM_QUOTE_REJECT_REASON_SYMBOL_RANGE_UNREACHABLE 'u'
#define ENUM_QUOTE_REJECT_REASON_QUOTE_RECEIVED_BY_CBOE_DURING_REPLAY 'y'

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
#define ENUM_QUOTE_RESULT_INVALID_REMOVE 'r'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_QUOTE_RESULT_REJECTED_OTHER_REASON 'u'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_EFID_GROUP_LEVEL '+'
#define ENUM_QUOTE_RESULT_REJECTED_CLOSING_ONLY_SERIES 'c'

/*
 * Restatement Reason Values
 */ 
#define ENUM_RESTATEMENT_REASON_RELOAD 'L'
#define ENUM_RESTATEMENT_REASON_PRICE_SLIDING_REPRICE 'P'
#define ENUM_RESTATEMENT_REASON_LIQUIDITY_UPDATED 'Q'
#define ENUM_RESTATEMENT_REASON_REROUTE 'R'
#define ENUM_RESTATEMENT_REASON_SHIP_AND_POST 'S'
#define ENUM_RESTATEMENT_REASON_WASH 'W'
#define ENUM_RESTATEMENT_REASON_LIQUIDITY 'Q'

/*
 * Revised Legs Values
 */ 
#define ENUM_REVISED_LEGS_NOT_REORDERED '1'
#define ENUM_REVISED_LEGS_REORDERED '2'

/*
 * Risk Reset Result Values
 */ 
#define ENUM_RISK_RESET_RESULT_IGNORED ' '
#define ENUM_RISK_RESET_RESULT_SUCCESS 'Y'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_FIRM_RESET_LIMIT 'F'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_CUSTOM_GROUP_ID_LIMIT 'C'
#define ENUM_RISK_RESET_RESULT_REJECTED_AUTOMATIC_RISK_RESETS_ARE_DISABLED 'D'
#define ENUM_RISK_RESET_RESULT_REJECTED_EMPTY_RESET_RISK_FIELD 'E'
#define ENUM_RISK_RESET_RESULT_REJECTED_INCORRECT_DATA_CENTER 'I'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_RISK_ROOT_RESET_LIMIT 'S'
#define ENUM_RISK_RESET_RESULT_REJECTED_INVALID_RISK_ROOT 'U'
#define ENUM_RISK_RESET_RESULT_REJECTED_INVALID_EFID_OR_CLEARING_FIRM 'c'
#define ENUM_RISK_RESET_RESULT_REJECTED_IN_REPLAY 'y'

/*
 * Session Eligibility Values
 */ 
#define ENUM_SESSION_ELIGIBILITY_ALL 'A'
#define ENUM_SESSION_ELIGIBILITY_RTH 'R'
#define ENUM_SESSION_ELIGIBILITY_BOOK_ONLY_NO_SLIDE 'N'

/*
 * Side Values
 */ 
#define ENUM_SIDE_AIM '1'
#define ENUM_SIDE_QCC '2'
#define ENUM_SIDE_BUY '1'
#define ENUM_SIDE_SELL '2'
#define ENUM_SIDE_SELL_SHORT '5'
#define ENUM_SIDE_SELL_SHORT_EXEMPT '6'

/*
 * Strategy Id Values
 */ 
#define ENUM_STRATEGY_ID_CONVERSION 'C'
#define ENUM_STRATEGY_ID_REVERSAL 'R'
#define ENUM_STRATEGY_ID_MERGER 'M'
#define ENUM_STRATEGY_ID_SHORT_STOCK_INTEREST 'S'
#define ENUM_STRATEGY_ID_JELLY_ROLL 'J'

/*
 * Sub Liquidity Indicator Values
 */ 
#define ENUM_SUB_LIQUIDITY_INDICATOR_EXECUTION_FROM_ORDER_THAT_SET_THE_NBBO 'S'
#define ENUM_SUB_LIQUIDITY_INDICATOR_STEP_UP_MECHANISM 'B'
#define ENUM_SUB_LIQUIDITY_INDICATOR_MARKET_TURNER 'U'
#define ENUM_SUB_LIQUIDITY_INDICATOR_AIM 'b'
#define ENUM_SUB_LIQUIDITY_INDICATOR_CARRIED 'C'
#define ENUM_SUB_LIQUIDITY_INDICATOR_DONE_FOR_DAY 'D'
#define ENUM_SUB_LIQUIDITY_INDICATOR_QCC 'q'
#define ENUM_SUB_LIQUIDITY_INDICATOR_SAM 's'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY '0'
#define ENUM_TIME_IN_FORCE_GTC '1'
#define ENUM_TIME_IN_FORCE_ATO '2'
#define ENUM_TIME_IN_FORCE_IOC '3'
#define ENUM_TIME_IN_FORCE_FOK '4'
#define ENUM_TIME_IN_FORCE_GTD '6'
#define ENUM_TIME_IN_FORCE_ATC '6'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Bitfield: Complex Instrument Rejected Byte 17
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte17T;

/*
 * Bitfield: Complex Instrument Rejected Byte 16
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte16T;

/*
 * Bitfield: Complex Instrument Rejected Byte 15
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte15T;

/*
 * Bitfield: Complex Instrument Rejected Byte 14
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte14T;

/*
 * Bitfield: Complex Instrument Rejected Byte 13
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte13T;

/*
 * Bitfield: Complex Instrument Rejected Byte 12
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte12T;

/*
 * Bitfield: Complex Instrument Rejected Byte 11
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte11T;

/*
 * Bitfield: Complex Instrument Rejected Byte 10
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte10T;

/*
 * Bitfield: Complex Instrument Rejected Byte 9
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte9T;

/*
 * Bitfield: Complex Instrument Rejected Byte 8
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte8T;

/*
 * Bitfield: Complex Instrument Rejected Byte 7
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte7T;

/*
 * Bitfield: Complex Instrument Rejected Byte 6
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte6T;

/*
 * Bitfield: Complex Instrument Rejected Byte 5
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte5T;

/*
 * Bitfield: Complex Instrument Rejected Byte 4
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte4T;

/*
 * Bitfield: Complex Instrument Rejected Byte 3
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte3T;

/*
 * Bitfield: Complex Instrument Rejected Byte 2
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte2T;

/*
 * Bitfield: Complex Instrument Rejected Byte 1
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentRejectedReservedBit8Exists : 1,
    ComplexInstrumentRejectedReservedBit7Exists : 1,
    ComplexInstrumentRejectedReservedBit6Exists : 1,
    ComplexInstrumentRejectedReservedBit5Exists : 1,
    ComplexInstrumentRejectedReservedBit4Exists : 1,
    ComplexInstrumentRejectedReservedBit3Exists : 1,
    ComplexInstrumentRejectedReservedBit2Exists : 1,
    ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte1T;

/*
 * Structure: Complex Instrument Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char OrderRejectReason;
    char Text[60];
    uint32_t NoOfSecurities;
    char ReservedInternal[1];
} ComplexInstrumentRejectedMessageT;

/*
 * Bitfield: Complex Instrument Accepted Byte 17
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte17T;

/*
 * Bitfield: Complex Instrument Accepted Byte 16
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte16T;

/*
 * Bitfield: Complex Instrument Accepted Byte 15
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte15T;

/*
 * Bitfield: Complex Instrument Accepted Byte 14
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedLegStrikePriceExists : 1,
    ComplexInstrumentAcceptedLegMaturityDateExists : 1,
    ComplexInstrumentAcceptedLegCfiCodeExists : 1;
} ComplexInstrumentAcceptedByte14T;

/*
 * Bitfield: Complex Instrument Accepted Byte 13
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte13T;

/*
 * Bitfield: Complex Instrument Accepted Byte 12
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte12T;

/*
 * Bitfield: Complex Instrument Accepted Byte 11
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte11T;

/*
 * Bitfield: Complex Instrument Accepted Byte 10
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte10T;

/*
 * Bitfield: Complex Instrument Accepted Byte 9
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte9T;

/*
 * Bitfield: Complex Instrument Accepted Byte 8
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte8T;

/*
 * Bitfield: Complex Instrument Accepted Byte 7
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte7T;

/*
 * Bitfield: Complex Instrument Accepted Byte 6
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte6T;

/*
 * Bitfield: Complex Instrument Accepted Byte 5
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte5T;

/*
 * Bitfield: Complex Instrument Accepted Byte 4
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte4T;

/*
 * Bitfield: Complex Instrument Accepted Byte 3
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte3T;

/*
 * Bitfield: Complex Instrument Accepted Byte 2
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte2T;

/*
 * Bitfield: Complex Instrument Accepted Byte 1
 */ 
typedef struct {
    uint8_t
    ComplexInstrumentAcceptedReservedBit8Exists : 1,
    ComplexInstrumentAcceptedReservedBit7Exists : 1,
    ComplexInstrumentAcceptedReservedBit6Exists : 1,
    ComplexInstrumentAcceptedReservedBit5Exists : 1,
    ComplexInstrumentAcceptedReservedBit4Exists : 1,
    ComplexInstrumentAcceptedReservedBit3Exists : 1,
    ComplexInstrumentAcceptedReservedBit2Exists : 1,
    ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte1T;

/*
 * Structure: Complex Instrument Accepted Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char Symbol[6];
    char RevisedLegs;
    uint32_t NoOfSecurities;
    char ReservedInternal[1];
} ComplexInstrumentAcceptedMessageT;

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
 * Structure: Reset Risk Acknowledgment Message
 */ 
typedef struct {
    char RiskStatusId[16];
    char RiskResetResult;
} ResetRiskAcknowledgmentMessageT;

/*
 * Bitfield: Purge Rejected Byte 17
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte17T;

/*
 * Bitfield: Purge Rejected Byte 16
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte16T;

/*
 * Bitfield: Purge Rejected Byte 15
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedMassCancelIdExists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte15T;

/*
 * Bitfield: Purge Rejected Byte 14
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte14T;

/*
 * Bitfield: Purge Rejected Byte 13
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte13T;

/*
 * Bitfield: Purge Rejected Byte 12
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte12T;

/*
 * Bitfield: Purge Rejected Byte 11
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte11T;

/*
 * Bitfield: Purge Rejected Byte 10
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte10T;

/*
 * Bitfield: Purge Rejected Byte 9
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte9T;

/*
 * Bitfield: Purge Rejected Byte 8
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte8T;

/*
 * Bitfield: Purge Rejected Byte 7
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte7T;

/*
 * Bitfield: Purge Rejected Byte 6
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte6T;

/*
 * Bitfield: Purge Rejected Byte 5
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte5T;

/*
 * Bitfield: Purge Rejected Byte 4
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte4T;

/*
 * Bitfield: Purge Rejected Byte 3
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte3T;

/*
 * Bitfield: Purge Rejected Byte 2
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte2T;

/*
 * Bitfield: Purge Rejected Byte 1
 */ 
typedef struct {
    uint8_t
    PurgeRejectedReservedBit8Exists : 1,
    PurgeRejectedReservedBit7Exists : 1,
    PurgeRejectedReservedBit6Exists : 1,
    PurgeRejectedReservedBit5Exists : 1,
    PurgeRejectedReservedBit4Exists : 1,
    PurgeRejectedReservedBit3Exists : 1,
    PurgeRejectedReservedBit2Exists : 1,
    PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte1T;

/*
 * Structure: Purge Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char PurgeRejectReason;
    char Text[60];
    char ReservedInternal[1];
} PurgeRejectedMessageT;

/*
 * Bitfield: Trade Cancel Or Correct Byte 17
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte17T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 16
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte16T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 15
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte15T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 14
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte14T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 13
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte13T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 12
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte12T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 11
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte11T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 10
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectCrossExclusionIndicatorExists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectRoutingFirmIdExists : 1,
    TradeCancelOrCorrectGiveUpFirmIdExists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectCrossIdExists : 1;
} TradeCancelOrCorrectByte10T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 9
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectCmtaNumberExists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectAuctionIdExists : 1,
    TradeCancelOrCorrectTargetPartyIdExists : 1,
    TradeCancelOrCorrectMarketingFeeCodeExists : 1;
} TradeCancelOrCorrectByte9T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 8
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte8T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 7
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectSubLiquidityIndicatorExists : 1;
} TradeCancelOrCorrectByte7T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 6
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte6T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 5
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte5T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 4
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectCorrectedSizeExists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectOpenCloseExists : 1,
    TradeCancelOrCorrectPutOrCallExists : 1,
    TradeCancelOrCorrectStrikePriceExists : 1,
    TradeCancelOrCorrectMaturityDateExists : 1;
} TradeCancelOrCorrectByte4T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 3
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte3T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 2
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectCapacityExists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectSymbolExists : 1;
} TradeCancelOrCorrectByte2T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 1
 */ 
typedef struct {
    uint8_t
    TradeCancelOrCorrectReservedBit8Exists : 1,
    TradeCancelOrCorrectReservedBit7Exists : 1,
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte1T;

/*
 * Structure: Trade Cancel Or Correct Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    uint64_t OrderId;
    uint64_t ExecRefId;
    char Side;
    char BaseLiquidityIndicator;
    char ClearingFirm[4];
    char ClearingAccount[4];
    uint32_t LastShares;
    int64_t LastPx;
    int64_t CorrectedPrice;
    uint64_t OrigTime;
    char ReservedInternal[1];
} TradeCancelOrCorrectMessageT;

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
 * Bitfield: Cancel Rejected Byte 17
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte17T;

/*
 * Bitfield: Cancel Rejected Byte 16
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte16T;

/*
 * Bitfield: Cancel Rejected Byte 15
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedMassCancelIdExists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte15T;

/*
 * Bitfield: Cancel Rejected Byte 14
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte14T;

/*
 * Bitfield: Cancel Rejected Byte 13
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte13T;

/*
 * Bitfield: Cancel Rejected Byte 12
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte12T;

/*
 * Bitfield: Cancel Rejected Byte 11
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte11T;

/*
 * Bitfield: Cancel Rejected Byte 10
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedCrossExclusionIndicatorExists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedRoutingFirmIdExists : 1,
    CancelRejectedGiveUpFirmIdExists : 1,
    CancelRejectedAllocQtyExists : 1,
    CancelRejectedCrossIdExists : 1;
} CancelRejectedByte10T;

/*
 * Bitfield: Cancel Rejected Byte 9
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedCmtaNumberExists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedAuctionIdExists : 1,
    CancelRejectedTargetPartyIdExists : 1,
    CancelRejectedMarketingFeeCodeExists : 1;
} CancelRejectedByte9T;

/*
 * Bitfield: Cancel Rejected Byte 8
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedStopPxExists : 1,
    CancelRejectedEchoTextExists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte8T;

/*
 * Bitfield: Cancel Rejected Byte 7
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte7T;

/*
 * Bitfield: Cancel Rejected Byte 6
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte6T;

/*
 * Bitfield: Cancel Rejected Byte 5
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte5T;

/*
 * Bitfield: Cancel Rejected Byte 4
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedCorrectedSizeExists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedOpenCloseExists : 1,
    CancelRejectedPutOrCallExists : 1,
    CancelRejectedStrikePriceExists : 1,
    CancelRejectedMaturityDateExists : 1;
} CancelRejectedByte4T;

/*
 * Bitfield: Cancel Rejected Byte 3
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte3T;

/*
 * Bitfield: Cancel Rejected Byte 2
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedCapacityExists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedSymbolExists : 1;
} CancelRejectedByte2T;

/*
 * Bitfield: Cancel Rejected Byte 1
 */ 
typedef struct {
    uint8_t
    CancelRejectedMaxRemovePctExists : 1,
    CancelRejectedMinQtyExists : 1,
    CancelRejectedTimeInForceExists : 1,
    CancelRejectedOrdTypeExists : 1,
    CancelRejectedExecInstExists : 1,
    CancelRejectedPriceExists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedSideExists : 1;
} CancelRejectedByte1T;

/*
 * Structure: Cancel Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char CancelRejectReason;
    char Text[60];
    char ReservedInternal[1];
} CancelRejectedMessageT;

/*
 * Bitfield: Cross Order Cancelled Byte 17
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte17T;

/*
 * Bitfield: Cross Order Cancelled Byte 16
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledFrequentTraderIdExists : 1;
} CrossOrderCancelledByte16T;

/*
 * Bitfield: Cross Order Cancelled Byte 15
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledEquityPartyIdExists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte15T;

/*
 * Bitfield: Cross Order Cancelled Byte 14
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte14T;

/*
 * Bitfield: Cross Order Cancelled Byte 13
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte13T;

/*
 * Bitfield: Cross Order Cancelled Byte 12
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte12T;

/*
 * Bitfield: Cross Order Cancelled Byte 11
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte11T;

/*
 * Bitfield: Cross Order Cancelled Byte 10
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledRoutingFirmIdExists : 1,
    CrossOrderCancelledGiveUpFirmIdExists : 1,
    CrossOrderCancelledAllocQtyExists : 1,
    CrossOrderCancelledCrossIdExists : 1;
} CrossOrderCancelledByte10T;

/*
 * Bitfield: Cross Order Cancelled Byte 9
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledCrossPrioritizationExists : 1,
    CrossOrderCancelledCrossTypeExists : 1,
    CrossOrderCancelledCmtaNumberExists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledTargetPartyIdExists : 1,
    CrossOrderCancelledTargetPartyIdExists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte9T;

/*
 * Bitfield: Cross Order Cancelled Byte 8
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte8T;

/*
 * Bitfield: Cross Order Cancelled Byte 7
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte7T;

/*
 * Bitfield: Cross Order Cancelled Byte 6
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledAttributedQuoteExists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte6T;

/*
 * Bitfield: Cross Order Cancelled Byte 5
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte5T;

/*
 * Bitfield: Cross Order Cancelled Byte 4
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledPutOrCallExists : 1,
    CrossOrderCancelledStrikePriceExists : 1,
    CrossOrderCancelledMaturityDateExists : 1;
} CrossOrderCancelledByte4T;

/*
 * Bitfield: Cross Order Cancelled Byte 3
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledPreventMatchExists : 1,
    CrossOrderCancelledOrderQtyExists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledClearingFirmExists : 1,
    CrossOrderCancelledAccountExists : 1;
} CrossOrderCancelledByte3T;

/*
 * Bitfield: Cross Order Cancelled Byte 2
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledCapacityExists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledReservedBit4Exists : 1,
    CrossOrderCancelledReservedBit3Exists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledSymbolExists : 1;
} CrossOrderCancelledByte2T;

/*
 * Bitfield: Cross Order Cancelled Byte 1
 */ 
typedef struct {
    uint8_t
    CrossOrderCancelledReservedBit8Exists : 1,
    CrossOrderCancelledReservedBit7Exists : 1,
    CrossOrderCancelledReservedBit6Exists : 1,
    CrossOrderCancelledReservedBit5Exists : 1,
    CrossOrderCancelledExecInstExists : 1,
    CrossOrderCancelledPriceExists : 1,
    CrossOrderCancelledReservedBit2Exists : 1,
    CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte1T;

/*
 * Structure: Cross Order Cancelled Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char CrossId[20];
    char CancelReason;
    char ReservedInternal[1];
} CrossOrderCancelledMessageT;

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
 * Bitfield: Order Cancelled Byte 17
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledStrategyIdExists : 1,
    OrderCancelledPriceTypeExists : 1;
} OrderCancelledByte17T;

/*
 * Bitfield: Order Cancelled Byte 16
 */ 
typedef struct {
    uint8_t
    OrderCancelledOrderOriginExists : 1,
    OrderCancelledMultiClassSprdExists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledFrequentTraderIdExists : 1;
} OrderCancelledByte16T;

/*
 * Bitfield: Order Cancelled Byte 15
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledEquityPartyIdExists : 1,
    OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte15T;

/*
 * Bitfield: Order Cancelled Byte 14
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte14T;

/*
 * Bitfield: Order Cancelled Byte 13
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte13T;

/*
 * Bitfield: Order Cancelled Byte 12
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte12T;

/*
 * Bitfield: Order Cancelled Byte 11
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte11T;

/*
 * Bitfield: Order Cancelled Byte 10
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledCrossExclusionIndicatorExists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledRoutingFirmIdExists : 1,
    OrderCancelledGiveUpFirmIdExists : 1,
    OrderCancelledAllocQtyExists : 1,
    OrderCancelledCrossIdExists : 1;
} OrderCancelledByte10T;

/*
 * Bitfield: Order Cancelled Byte 9
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledCmtaNumberExists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledAuctionIdExists : 1,
    OrderCancelledTargetPartyIdExists : 1,
    OrderCancelledMarketingFeeCodeExists : 1;
} OrderCancelledByte9T;

/*
 * Bitfield: Order Cancelled Byte 8
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledExDestinationExists : 1,
    OrderCancelledRouteDeliveryMethodExists : 1,
    OrderCancelledRoutStrategyExists : 1,
    OrderCancelledRoutingInstExists : 1,
    OrderCancelledStopPxExists : 1,
    OrderCancelledEchoTextExists : 1,
    OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte8T;

/*
 * Bitfield: Order Cancelled Byte 7
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte7T;

/*
 * Bitfield: Order Cancelled Byte 6
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledAttributedQuoteExists : 1,
    OrderCancelledContraCapacityExists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledSecondaryOrderIdExists : 1;
} OrderCancelledByte6T;

/*
 * Bitfield: Order Cancelled Byte 5
 */ 
typedef struct {
    uint8_t
    OrderCancelledExpireTimeExists : 1,
    OrderCancelledBaseLiquidityIndicatorExists : 1,
    OrderCancelledWorkingPriceExists : 1,
    OrderCancelledDisplayPriceExists : 1,
    OrderCancelledLastPxExists : 1,
    OrderCancelledLastSharesExists : 1,
    OrderCancelledLeavesQtyExists : 1,
    OrderCancelledOrigClOrdIdExists : 1;
} OrderCancelledByte5T;

/*
 * Bitfield: Order Cancelled Byte 4
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledCorrectedSizeExists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledOpenCloseExists : 1,
    OrderCancelledPutOrCallExists : 1,
    OrderCancelledStrikePriceExists : 1,
    OrderCancelledMaturityDateExists : 1;
} OrderCancelledByte4T;

/*
 * Bitfield: Order Cancelled Byte 3
 */ 
typedef struct {
    uint8_t
    OrderCancelledPreventMatchExists : 1,
    OrderCancelledOrderQtyExists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledMaxFloorExists : 1,
    OrderCancelledDisplayIndicatorExists : 1,
    OrderCancelledClearingAccountExists : 1,
    OrderCancelledClearingFirmExists : 1,
    OrderCancelledAccountExists : 1;
} OrderCancelledByte3T;

/*
 * Bitfield: Order Cancelled Byte 2
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledCapacityExists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledSymbolExists : 1;
} OrderCancelledByte2T;

/*
 * Bitfield: Order Cancelled Byte 1
 */ 
typedef struct {
    uint8_t
    OrderCancelledMaxRemovePctExists : 1,
    OrderCancelledMinQtyExists : 1,
    OrderCancelledTimeInForceExists : 1,
    OrderCancelledOrdTypeExists : 1,
    OrderCancelledExecInstExists : 1,
    OrderCancelledPriceExists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledSideExists : 1;
} OrderCancelledByte1T;

/*
 * Structure: Order Cancelled Message
 */ 
typedef struct {
    uint64_t TransactTime;
    char ClOrdId[20];
    char CancelReason;
    char ReservedInternal[1];
} OrderCancelledMessageT;

/*
 * Bitfield: User Modify Rejected Byte 17
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte17T;

/*
 * Bitfield: User Modify Rejected Byte 16
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte16T;

/*
 * Bitfield: User Modify Rejected Byte 15
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte15T;

/*
 * Bitfield: User Modify Rejected Byte 14
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte14T;

/*
 * Bitfield: User Modify Rejected Byte 13
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte13T;

/*
 * Bitfield: User Modify Rejected Byte 12
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte12T;

/*
 * Bitfield: User Modify Rejected Byte 11
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte11T;

/*
 * Bitfield: User Modify Rejected Byte 10
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedCrossExclusionIndicatorExists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedRoutingFirmIdExists : 1,
    UserModifyRejectedGiveUpFirmIdExists : 1,
    UserModifyRejectedAllocQtyExists : 1,
    UserModifyRejectedCrossIdExists : 1;
} UserModifyRejectedByte10T;

/*
 * Bitfield: User Modify Rejected Byte 9
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte9T;

/*
 * Bitfield: User Modify Rejected Byte 8
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte8T;

/*
 * Bitfield: User Modify Rejected Byte 7
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte7T;

/*
 * Bitfield: User Modify Rejected Byte 6
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte6T;

/*
 * Bitfield: User Modify Rejected Byte 5
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte5T;

/*
 * Bitfield: User Modify Rejected Byte 4
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte4T;

/*
 * Bitfield: User Modify Rejected Byte 3
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte3T;

/*
 * Bitfield: User Modify Rejected Byte 2
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte2T;

/*
 * Bitfield: User Modify Rejected Byte 1
 */ 
typedef struct {
    uint8_t
    UserModifyRejectedReservedBit8Exists : 1,
    UserModifyRejectedReservedBit7Exists : 1,
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte1T;

/*
 * Structure: User Modify Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char ModifyRejectReason;
    char Text[60];
    char ReservedInternal[1];
} UserModifyRejectedMessageT;

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
 * Bitfield: Order Restated Byte 17
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedStrategyIdExists : 1,
    OrderRestatedPriceTypeExists : 1;
} OrderRestatedByte17T;

/*
 * Bitfield: Order Restated Byte 16
 */ 
typedef struct {
    uint8_t
    OrderRestatedOrderOriginExists : 1,
    OrderRestatedMultiClassSprdExists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedFrequentTraderIdExists : 1;
} OrderRestatedByte16T;

/*
 * Bitfield: Order Restated Byte 15
 */ 
typedef struct {
    uint8_t
    OrderRestatedClientIdAttrExists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte15T;

/*
 * Bitfield: Order Restated Byte 14
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte14T;

/*
 * Bitfield: Order Restated Byte 13
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte13T;

/*
 * Bitfield: Order Restated Byte 12
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte12T;

/*
 * Bitfield: Order Restated Byte 11
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte11T;

/*
 * Bitfield: Order Restated Byte 10
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedCrossExclusionIndicatorExists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedRoutingFirmIdExists : 1,
    OrderRestatedGiveUpFirmIdExists : 1,
    OrderRestatedAllocQtyExists : 1,
    OrderRestatedCrossIdExists : 1;
} OrderRestatedByte10T;

/*
 * Bitfield: Order Restated Byte 9
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedCmtaNumberExists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedAuctionIdExists : 1,
    OrderRestatedTargetPartyIdExists : 1,
    OrderRestatedMarketingFeeCodeExists : 1;
} OrderRestatedByte9T;

/*
 * Bitfield: Order Restated Byte 8
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedExDestinationExists : 1,
    OrderRestatedRouteDeliveryMethodExists : 1,
    OrderRestatedRoutStrategyExists : 1,
    OrderRestatedRoutingInstExists : 1,
    OrderRestatedStopPxExists : 1,
    OrderRestatedEchoTextExists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte8T;

/*
 * Bitfield: Order Restated Byte 7
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte7T;

/*
 * Bitfield: Order Restated Byte 6
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedAttributedQuoteExists : 1,
    OrderRestatedContraCapacityExists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedSecondaryOrderIdExists : 1;
} OrderRestatedByte6T;

/*
 * Bitfield: Order Restated Byte 5
 */ 
typedef struct {
    uint8_t
    OrderRestatedExpireTimeExists : 1,
    OrderRestatedBaseLiquidityIndicatorExists : 1,
    OrderRestatedWorkingPriceExists : 1,
    OrderRestatedDisplayPriceExists : 1,
    OrderRestatedLastPxExists : 1,
    OrderRestatedLastSharesExists : 1,
    OrderRestatedLeavesQtyExists : 1,
    OrderRestatedOrigClOrdIdExists : 1;
} OrderRestatedByte5T;

/*
 * Bitfield: Order Restated Byte 4
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedCorrectedSizeExists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedOpenCloseExists : 1,
    OrderRestatedPutOrCallExists : 1,
    OrderRestatedStrikePriceExists : 1,
    OrderRestatedMaturityDateExists : 1;
} OrderRestatedByte4T;

/*
 * Bitfield: Order Restated Byte 3
 */ 
typedef struct {
    uint8_t
    OrderRestatedPreventMatchExists : 1,
    OrderRestatedOrderQtyExists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedMaxFloorExists : 1,
    OrderRestatedDisplayIndicatorExists : 1,
    OrderRestatedClearingAccountExists : 1,
    OrderRestatedClearingFirmExists : 1,
    OrderRestatedAccountExists : 1;
} OrderRestatedByte3T;

/*
 * Bitfield: Order Restated Byte 2
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedCapacityExists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedSymbolExists : 1;
} OrderRestatedByte2T;

/*
 * Bitfield: Order Restated Byte 1
 */ 
typedef struct {
    uint8_t
    OrderRestatedMaxRemovePctExists : 1,
    OrderRestatedMinQtyExists : 1,
    OrderRestatedTimeInForceExists : 1,
    OrderRestatedOrdTypeExists : 1,
    OrderRestatedExecInstExists : 1,
    OrderRestatedPriceExists : 1,
    OrderRestatedPegDifferenceExists : 1,
    OrderRestatedSideExists : 1;
} OrderRestatedByte1T;

/*
 * Structure: Order Restated Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    uint64_t OrderId;
    char RestatementReason;
    char ReservedInternal[1];
} OrderRestatedMessageT;

/*
 * Bitfield: Order Modified Byte 17
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedStrategyIdExists : 1,
    OrderModifiedPriceTypeExists : 1;
} OrderModifiedByte17T;

/*
 * Bitfield: Order Modified Byte 16
 */ 
typedef struct {
    uint8_t
    OrderModifiedOrderOriginExists : 1,
    OrderModifiedMultiClassSprdExists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedSessionEligibilityExists : 1,
    OrderModifiedFrequentTraderIdExists : 1;
} OrderModifiedByte16T;

/*
 * Bitfield: Order Modified Byte 15
 */ 
typedef struct {
    uint8_t
    OrderModifiedClientIdAttrExists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedEquityPartyIdExists : 1,
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte15T;

/*
 * Bitfield: Order Modified Byte 14
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte14T;

/*
 * Bitfield: Order Modified Byte 13
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedDrillThruProtectionExists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte13T;

/*
 * Bitfield: Order Modified Byte 12
 */ 
typedef struct {
    uint8_t
    OrderModifiedClearingOptionalDataExists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte12T;

/*
 * Bitfield: Order Modified Byte 11
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte11T;

/*
 * Bitfield: Order Modified Byte 10
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedCrossExclusionIndicatorExists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedRoutingFirmIdExists : 1,
    OrderModifiedGiveUpFirmIdExists : 1,
    OrderModifiedAllocQtyExists : 1,
    OrderModifiedCrossIdExists : 1;
} OrderModifiedByte10T;

/*
 * Bitfield: Order Modified Byte 9
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedAuctionIdExists : 1,
    OrderModifiedTargetPartyIdExists : 1,
    OrderModifiedMarketingFeeCodeExists : 1;
} OrderModifiedByte9T;

/*
 * Bitfield: Order Modified Byte 8
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedExDestinationExists : 1,
    OrderModifiedRouteDeliveryMethodExists : 1,
    OrderModifiedRoutStrategyExists : 1,
    OrderModifiedRoutingInstExists : 1,
    OrderModifiedStopPxExists : 1,
    OrderModifiedEchoTextExists : 1,
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte8T;

/*
 * Bitfield: Order Modified Byte 7
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedSubLiquidityIndicatorExists : 1;
} OrderModifiedByte7T;

/*
 * Bitfield: Order Modified Byte 6
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedAttributedQuoteExists : 1,
    OrderModifiedContraCapacityExists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedSecondaryOrderIdExists : 1;
} OrderModifiedByte6T;

/*
 * Bitfield: Order Modified Byte 5
 */ 
typedef struct {
    uint8_t
    OrderModifiedExpireTimeExists : 1,
    OrderModifiedBaseLiquidityIndicatorExists : 1,
    OrderModifiedWorkingPriceExists : 1,
    OrderModifiedDisplayPriceExists : 1,
    OrderModifiedLastPxExists : 1,
    OrderModifiedLastSharesExists : 1,
    OrderModifiedLeavesQtyExists : 1,
    OrderModifiedOrigClOrdIdExists : 1;
} OrderModifiedByte5T;

/*
 * Bitfield: Order Modified Byte 4
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedCorrectedSizeExists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedOpenCloseExists : 1,
    OrderModifiedPutOrCallExists : 1,
    OrderModifiedStrikePriceExists : 1,
    OrderModifiedMaturityDateExists : 1;
} OrderModifiedByte4T;

/*
 * Bitfield: Order Modified Byte 3
 */ 
typedef struct {
    uint8_t
    OrderModifiedPreventMatchExists : 1,
    OrderModifiedOrderQtyExists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedMaxFloorExists : 1,
    OrderModifiedDisplayIndicatorExists : 1,
    OrderModifiedClearingAccountExists : 1,
    OrderModifiedClearingFirmExists : 1,
    OrderModifiedAccountExists : 1;
} OrderModifiedByte3T;

/*
 * Bitfield: Order Modified Byte 2
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedCapacityExists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedSymbolExists : 1;
} OrderModifiedByte2T;

/*
 * Bitfield: Order Modified Byte 1
 */ 
typedef struct {
    uint8_t
    OrderModifiedMaxRemovePctExists : 1,
    OrderModifiedMinQtyExists : 1,
    OrderModifiedTimeInForceExists : 1,
    OrderModifiedOrdTypeExists : 1,
    OrderModifiedExecInstExists : 1,
    OrderModifiedPriceExists : 1,
    OrderModifiedPegDifferenceExists : 1,
    OrderModifiedSideExists : 1;
} OrderModifiedByte1T;

/*
 * Structure: Order Modified Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    uint64_t OrderId;
    char ReservedInternal[1];
} OrderModifiedMessageT;

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
 * Bitfield: Cross Order Rejected Byte 17
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte17T;

/*
 * Bitfield: Cross Order Rejected Byte 16
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedFrequentTraderIdExists : 1;
} CrossOrderRejectedByte16T;

/*
 * Bitfield: Cross Order Rejected Byte 15
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedEquityPartyIdExists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte15T;

/*
 * Bitfield: Cross Order Rejected Byte 14
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte14T;

/*
 * Bitfield: Cross Order Rejected Byte 13
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte13T;

/*
 * Bitfield: Cross Order Rejected Byte 12
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte12T;

/*
 * Bitfield: Cross Order Rejected Byte 11
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte11T;

/*
 * Bitfield: Cross Order Rejected Byte 10
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedRoutingFirmIdExists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedCrossIdExists : 1;
} CrossOrderRejectedByte10T;

/*
 * Bitfield: Cross Order Rejected Byte 9
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedCrossPrioritizationExists : 1,
    CrossOrderRejectedCrossTypeExists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedTargetPartyIdExists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte9T;

/*
 * Bitfield: Cross Order Rejected Byte 8
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte8T;

/*
 * Bitfield: Cross Order Rejected Byte 7
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte7T;

/*
 * Bitfield: Cross Order Rejected Byte 6
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedAttributedQuoteExists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte6T;

/*
 * Bitfield: Cross Order Rejected Byte 5
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte5T;

/*
 * Bitfield: Cross Order Rejected Byte 4
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedPutOrCallExists : 1,
    CrossOrderRejectedStrikePriceExists : 1,
    CrossOrderRejectedMaturityDateExists : 1;
} CrossOrderRejectedByte4T;

/*
 * Bitfield: Cross Order Rejected Byte 3
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedPreventMatchExists : 1,
    CrossOrderRejectedOrderQtyExists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte3T;

/*
 * Bitfield: Cross Order Rejected Byte 2
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedReservedBit4Exists : 1,
    CrossOrderRejectedReservedBit3Exists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedSymbolExists : 1;
} CrossOrderRejectedByte2T;

/*
 * Bitfield: Cross Order Rejected Byte 1
 */ 
typedef struct {
    uint8_t
    CrossOrderRejectedReservedBit8Exists : 1,
    CrossOrderRejectedReservedBit7Exists : 1,
    CrossOrderRejectedReservedBit6Exists : 1,
    CrossOrderRejectedReservedBit5Exists : 1,
    CrossOrderRejectedExecInstExists : 1,
    CrossOrderRejectedPriceExists : 1,
    CrossOrderRejectedReservedBit2Exists : 1,
    CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte1T;

/*
 * Structure: Cross Order Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char CrossId[20];
    char OrderRejectReason;
    char Text[60];
    char ReservedInternal[1];
} CrossOrderRejectedMessageT;

/*
 * Bitfield: Order Rejected Byte 17
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedStrategyIdExists : 1,
    OrderRejectedPriceTypeExists : 1;
} OrderRejectedByte17T;

/*
 * Bitfield: Order Rejected Byte 16
 */ 
typedef struct {
    uint8_t
    OrderRejectedOrderOriginExists : 1,
    OrderRejectedMultiClassSprdExists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedSessionEligibilityExists : 1,
    OrderRejectedFrequentTraderIdExists : 1;
} OrderRejectedByte16T;

/*
 * Bitfield: Order Rejected Byte 15
 */ 
typedef struct {
    uint8_t
    OrderRejectedClientIdAttrExists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedEquityPartyIdExists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte15T;

/*
 * Bitfield: Order Rejected Byte 14
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte14T;

/*
 * Bitfield: Order Rejected Byte 13
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte13T;

/*
 * Bitfield: Order Rejected Byte 12
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte12T;

/*
 * Bitfield: Order Rejected Byte 11
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte11T;

/*
 * Bitfield: Order Rejected Byte 10
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedCrossExclusionIndicatorExists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedRoutingFirmIdExists : 1,
    OrderRejectedGiveUpFirmIdExists : 1,
    OrderRejectedAllocQtyExists : 1,
    OrderRejectedCrossIdExists : 1;
} OrderRejectedByte10T;

/*
 * Bitfield: Order Rejected Byte 9
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedCmtaNumberExists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedAuctionIdExists : 1,
    OrderRejectedTargetPartyIdExists : 1,
    OrderRejectedMarketingFeeCodeExists : 1;
} OrderRejectedByte9T;

/*
 * Bitfield: Order Rejected Byte 8
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedExDestinationExists : 1,
    OrderRejectedRouteDeliveryMethodExists : 1,
    OrderRejectedRoutStrategyExists : 1,
    OrderRejectedRoutingInstExists : 1,
    OrderRejectedStopPxExists : 1,
    OrderRejectedEchoTextExists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte8T;

/*
 * Bitfield: Order Rejected Byte 7
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte7T;

/*
 * Bitfield: Order Rejected Byte 6
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedAttributedQuoteExists : 1,
    OrderRejectedContraCapacityExists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedSecondaryOrderIdExists : 1;
} OrderRejectedByte6T;

/*
 * Bitfield: Order Rejected Byte 5
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte5T;

/*
 * Bitfield: Order Rejected Byte 4
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedCorrectedSizeExists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedOpenCloseExists : 1,
    OrderRejectedPutOrCallExists : 1,
    OrderRejectedStrikePriceExists : 1,
    OrderRejectedMaturityDateExists : 1;
} OrderRejectedByte4T;

/*
 * Bitfield: Order Rejected Byte 3
 */ 
typedef struct {
    uint8_t
    OrderRejectedPreventMatchExists : 1,
    OrderRejectedOrderQtyExists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedMaxFloorExists : 1,
    OrderRejectedDisplayIndicatorExists : 1,
    OrderRejectedClearingAccountExists : 1,
    OrderRejectedClearingFirmExists : 1,
    OrderRejectedAccountExists : 1;
} OrderRejectedByte3T;

/*
 * Bitfield: Order Rejected Byte 2
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedCapacityExists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedSymbolExists : 1;
} OrderRejectedByte2T;

/*
 * Bitfield: Order Rejected Byte 1
 */ 
typedef struct {
    uint8_t
    OrderRejectedMaxRemovePctExists : 1,
    OrderRejectedMinQtyExists : 1,
    OrderRejectedTimeInForceExists : 1,
    OrderRejectedOrdTypeExists : 1,
    OrderRejectedExecInstExists : 1,
    OrderRejectedPriceExists : 1,
    OrderRejectedPegDifferenceExists : 1,
    OrderRejectedSideExists : 1;
} OrderRejectedByte1T;

/*
 * Structure: Order Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    char OrderRejectReason;
    char Text[60];
    char ReservedInternal[1];
} OrderRejectedMessageT;

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
 * Bitfield: Cross Order Acknowledgment Byte 17
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte17T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 16
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentFrequentTraderIdExists : 1;
} CrossOrderAcknowledgmentByte16T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 15
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentClientIdAttrExists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentEquityPartyIdExists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte15T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 14
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte14T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 13
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte13T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 12
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentClearingOptionalDataExists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte12T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 11
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte11T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 10
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentRoutingFirmIdExists : 1,
    CrossOrderAcknowledgmentGiveUpFirmIdExists : 1,
    CrossOrderAcknowledgmentAllocQtyExists : 1,
    CrossOrderAcknowledgmentCrossIdExists : 1;
} CrossOrderAcknowledgmentByte10T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 9
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentCrossPrioritizationExists : 1,
    CrossOrderAcknowledgmentCrossTypeExists : 1,
    CrossOrderAcknowledgmentCmtaNumberExists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentAuctionIdExists : 1,
    CrossOrderAcknowledgmentTargetPartyIdExists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte9T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 8
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte8T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 7
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte7T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 6
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentAttributedQuoteExists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte6T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 5
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte5T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 4
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentOpenCloseExists : 1,
    CrossOrderAcknowledgmentPutOrCallExists : 1,
    CrossOrderAcknowledgmentStrikePriceExists : 1,
    CrossOrderAcknowledgmentMaturityDateExists : 1;
} CrossOrderAcknowledgmentByte4T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 3
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentPreventMatchExists : 1,
    CrossOrderAcknowledgmentOrderQtyExists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentClearingAccountExists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentAccountExists : 1;
} CrossOrderAcknowledgmentByte3T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 2
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentCapacityExists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentReservedBit4Exists : 1,
    CrossOrderAcknowledgmentReservedBit3Exists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentSymbolExists : 1;
} CrossOrderAcknowledgmentByte2T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 1
 */ 
typedef struct {
    uint8_t
    CrossOrderAcknowledgmentReservedBit8Exists : 1,
    CrossOrderAcknowledgmentReservedBit7Exists : 1,
    CrossOrderAcknowledgmentReservedBit6Exists : 1,
    CrossOrderAcknowledgmentReservedBit5Exists : 1,
    CrossOrderAcknowledgmentExecInstExists : 1,
    CrossOrderAcknowledgmentPriceExists : 1,
    CrossOrderAcknowledgmentReservedBit2Exists : 1,
    CrossOrderAcknowledgmentSideExists : 1;
} CrossOrderAcknowledgmentByte1T;

/*
 * Structure: Cross Order Acknowledgment Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char CrossId[20];
    uint64_t AuctionId;
    char ReservedInternal[1];
} CrossOrderAcknowledgmentMessageT;

/*
 * Bitfield: Order Acknowledgment Byte 17
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentStrategyIdExists : 1,
    OrderAcknowledgmentPriceTypeExists : 1;
} OrderAcknowledgmentByte17T;

/*
 * Bitfield: Order Acknowledgment Byte 16
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentOrderOriginExists : 1,
    OrderAcknowledgmentMultiClassSprdExists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentSessionEligibilityExists : 1,
    OrderAcknowledgmentFrequentTraderIdExists : 1;
} OrderAcknowledgmentByte16T;

/*
 * Bitfield: Order Acknowledgment Byte 15
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentClientIdAttrExists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentEquityPartyIdExists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte15T;

/*
 * Bitfield: Order Acknowledgment Byte 14
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte14T;

/*
 * Bitfield: Order Acknowledgment Byte 13
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentDrillThruProtectionExists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte13T;

/*
 * Bitfield: Order Acknowledgment Byte 12
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentClearingOptionalDataExists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte12T;

/*
 * Bitfield: Order Acknowledgment Byte 11
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte11T;

/*
 * Bitfield: Order Acknowledgment Byte 10
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentCrossExclusionIndicatorExists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentRoutingFirmIdExists : 1,
    OrderAcknowledgmentGiveUpFirmIdExists : 1,
    OrderAcknowledgmentAllocQtyExists : 1,
    OrderAcknowledgmentCrossIdExists : 1;
} OrderAcknowledgmentByte10T;

/*
 * Bitfield: Order Acknowledgment Byte 9
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentAuctionIdExists : 1,
    OrderAcknowledgmentTargetPartyIdExists : 1,
    OrderAcknowledgmentMarketingFeeCodeExists : 1;
} OrderAcknowledgmentByte9T;

/*
 * Bitfield: Order Acknowledgment Byte 8
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentExDestinationExists : 1,
    OrderAcknowledgmentRouteDeliveryMethodExists : 1,
    OrderAcknowledgmentRoutStrategyExists : 1,
    OrderAcknowledgmentRoutingInstExists : 1,
    OrderAcknowledgmentStopPxExists : 1,
    OrderAcknowledgmentEchoTextExists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte8T;

/*
 * Bitfield: Order Acknowledgment Byte 7
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentSubLiquidityIndicatorExists : 1;
} OrderAcknowledgmentByte7T;

/*
 * Bitfield: Order Acknowledgment Byte 6
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentAttributedQuoteExists : 1,
    OrderAcknowledgmentContraCapacityExists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentSecondaryOrderIdExists : 1;
} OrderAcknowledgmentByte6T;

/*
 * Bitfield: Order Acknowledgment Byte 5
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentExpireTimeExists : 1,
    OrderAcknowledgmentBaseLiquidityIndicatorExists : 1,
    OrderAcknowledgmentWorkingPriceExists : 1,
    OrderAcknowledgmentDisplayPriceExists : 1,
    OrderAcknowledgmentLastPxExists : 1,
    OrderAcknowledgmentLastSharesExists : 1,
    OrderAcknowledgmentLeavesQtyExists : 1,
    OrderAcknowledgmentOrigClOrdIdExists : 1;
} OrderAcknowledgmentByte5T;

/*
 * Bitfield: Order Acknowledgment Byte 4
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentCorrectedSizeExists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentOpenCloseExists : 1,
    OrderAcknowledgmentPutOrCallExists : 1,
    OrderAcknowledgmentStrikePriceExists : 1,
    OrderAcknowledgmentMaturityDateExists : 1;
} OrderAcknowledgmentByte4T;

/*
 * Bitfield: Order Acknowledgment Byte 3
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentPreventMatchExists : 1,
    OrderAcknowledgmentOrderQtyExists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentMaxFloorExists : 1,
    OrderAcknowledgmentDisplayIndicatorExists : 1,
    OrderAcknowledgmentClearingAccountExists : 1,
    OrderAcknowledgmentClearingFirmExists : 1,
    OrderAcknowledgmentAccountExists : 1;
} OrderAcknowledgmentByte3T;

/*
 * Bitfield: Order Acknowledgment Byte 2
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentCapacityExists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentSymbolExists : 1;
} OrderAcknowledgmentByte2T;

/*
 * Bitfield: Order Acknowledgment Byte 1
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentMaxRemovePctExists : 1,
    OrderAcknowledgmentMinQtyExists : 1,
    OrderAcknowledgmentTimeInForceExists : 1,
    OrderAcknowledgmentOrdTypeExists : 1,
    OrderAcknowledgmentExecInstExists : 1,
    OrderAcknowledgmentPriceExists : 1,
    OrderAcknowledgmentPegDifferenceExists : 1,
    OrderAcknowledgmentSideExists : 1;
} OrderAcknowledgmentByte1T;

/*
 * Structure: Order Acknowledgment Message
 */ 
typedef struct {
    uint64_t TransactTime;
    char ClOrdId[20];
    uint64_t OrderId;
    char ReservedInternal[1];
} OrderAcknowledgmentMessageT;

/*
 * Bitfield: New Complex Instrument Byte 1
 */ 
typedef struct {
    uint8_t
    NewComplexInstrumentReservedBit8Exists : 1,
    NewComplexInstrumentReservedBit7Exists : 1,
    NewComplexInstrumentReservedBit6Exists : 1,
    NewComplexInstrumentReservedBit5Exists : 1,
    NewComplexInstrumentClearingFirmExists : 1,
    NewComplexInstrumentLegStrikePriceExists : 1,
    NewComplexInstrumentLegMaturityDateExists : 1,
    NewComplexInstrumentLegCfiCodeExists : 1;
} NewComplexInstrumentByte1T;

/*
 * Structure: New Complex Instrument Message
 */ 
typedef struct {
    char ClOrdId[20];
} NewComplexInstrumentMessageT;

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
 * Bitfield: Modify Order Byte 2
 */ 
typedef struct {
    uint8_t
    ModifyOrderReservedBit8Exists : 1,
    ModifyOrderReservedBit7Exists : 1,
    ModifyOrderFrequentTraderIdExists : 1,
    ModifyOrderReservedBit5Exists : 1,
    ModifyOrderReservedBit4Exists : 1,
    ModifyOrderRoutingFirmIdExists : 1,
    ModifyOrderStopPxExists : 1,
    ModifyOrderMaxFloorExists : 1;
} ModifyOrderByte2T;

/*
 * Bitfield: Modify Order Byte 1
 */ 
typedef struct {
    uint8_t
    ModifyOrderSideExists : 1,
    ModifyOrderExecInstExists : 1,
    ModifyOrderCancelOrigOnRejectExists : 1,
    ModifyOrderOrdTypeExists : 1,
    ModifyOrderPriceExists : 1,
    ModifyOrderOrderQtyExists : 1,
    ModifyOrderReservedBit2Exists : 1,
    ModifyOrderClearingFirmExists : 1;
} ModifyOrderByte1T;

/*
 * Structure: Purge Order Message
 */ 
typedef struct {
    char MassCancel[1];
} PurgeOrderMessageT;

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
 * Structure: Modify Order Message
 */ 
typedef struct {
    char ClOrdId[20];
    char OrigClOrdId[20];
} ModifyOrderMessageT;

/*
 * Bitfield: Cancel Order Byte 2
 */ 
typedef struct {
    uint8_t
    CancelOrderReservedBit8Exists : 1,
    CancelOrderReservedBit7Exists : 1,
    CancelOrderReservedBit6Exists : 1,
    CancelOrderReservedBit5Exists : 1,
    CancelOrderReservedBit4Exists : 1,
    CancelOrderReservedBit3Exists : 1,
    CancelOrderReservedBit2Exists : 1,
    CancelOrderMassCancelInstExists : 1;
} CancelOrderByte2T;

/*
 * Bitfield: Cancel Order Byte 1
 */ 
typedef struct {
    uint8_t
    CancelOrderReservedBit8Exists : 1,
    CancelOrderReservedBit7Exists : 1,
    CancelOrderRoutingFirmIdExists : 1,
    CancelOrderMassCancelIdExists : 1,
    CancelOrderRiskRootExists : 1,
    CancelOrderMassCancelExists : 1,
    CancelOrderMassCancelLockoutExists : 1,
    CancelOrderClearingFirmExists : 1;
} CancelOrderByte1T;

/*
 * Structure: Cancel Order Message
 */ 
typedef struct {
    char OrigClOrdId[20];
} CancelOrderMessageT;

/*
 * Bitfield: New Order Cross Multileg Byte 5
 */ 
typedef struct {
    uint8_t
    NewOrderCrossMultilegReservedBit8Exists : 1,
    NewOrderCrossMultilegReservedBit7Exists : 1,
    NewOrderCrossMultilegReservedBit6Exists : 1,
    NewOrderCrossMultilegReservedBit5Exists : 1,
    NewOrderCrossMultilegReservedBit4Exists : 1,
    NewOrderCrossMultilegReservedBit3Exists : 1,
    NewOrderCrossMultilegFrequentTraderIdExists : 1,
    NewOrderCrossMultilegOrsExists : 1;
} NewOrderCrossMultilegByte5T;

/*
 * Bitfield: New Order Cross Multileg Byte 4
 */ 
typedef struct {
    uint8_t
    NewOrderCrossMultilegReservedBit8Exists : 1,
    NewOrderCrossMultilegEquityExDestinationExists : 1,
    NewOrderCrossMultilegReservedBit6Exists : 1,
    NewOrderCrossMultilegDrillThruProtectionExists : 1,
    NewOrderCrossMultilegReservedBit4Exists : 1,
    NewOrderCrossMultilegReservedBit3Exists : 1,
    NewOrderCrossMultilegEquityLegShortSellExists : 1,
    NewOrderCrossMultilegEquityPartyIdExists : 1;
} NewOrderCrossMultilegByte4T;

/*
 * Bitfield: New Order Cross Multileg Byte 3
 */ 
typedef struct {
    uint8_t
    NewOrderCrossMultilegSessionEligibilityExists : 1,
    NewOrderCrossMultilegEquitySellClearingFirmExists : 1,
    NewOrderCrossMultilegEquityBuyClearingFirmExists : 1,
    NewOrderCrossMultilegEquityTransactTimeExists : 1,
    NewOrderCrossMultilegEquityTradeVenueExists : 1,
    NewOrderCrossMultilegEquityTradeSizeExists : 1,
    NewOrderCrossMultilegEquityTradePriceExists : 1,
    NewOrderCrossMultilegClientIdAttrExists : 1;
} NewOrderCrossMultilegByte3T;

/*
 * Bitfield: New Order Cross Multileg Byte 2
 */ 
typedef struct {
    uint8_t
    NewOrderCrossMultilegClearingOptionalDataExists : 1,
    NewOrderCrossMultilegRoutingFirmIdExists : 1,
    NewOrderCrossMultilegClearingAccountExists : 1,
    NewOrderCrossMultilegCmtaNumberExists : 1,
    NewOrderCrossMultilegAccountExists : 1,
    NewOrderCrossMultilegLastPriorityExists : 1,
    NewOrderCrossMultilegAutoMatchPriceExists : 1,
    NewOrderCrossMultilegAutoMatchExists : 1;
} NewOrderCrossMultilegByte2T;

/*
 * Bitfield: New Order Cross Multileg Byte 1
 */ 
typedef struct {
    uint8_t
    NewOrderCrossMultilegPreventMatchExists : 1,
    NewOrderCrossMultilegTargetPartyIdExists : 1,
    NewOrderCrossMultilegAttributedQuoteExists : 1,
    NewOrderCrossMultilegExecInstExists : 1,
    NewOrderCrossMultilegReservedBit4Exists : 1,
    NewOrderCrossMultilegReservedBit3Exists : 1,
    NewOrderCrossMultilegReservedBit2Exists : 1,
    NewOrderCrossMultilegSymbolExists : 1;
} NewOrderCrossMultilegByte1T;

/*
 * Structure: New Order Cross Multileg Message
 */ 
typedef struct {
    char CrossId[20];
    char CrossType[1];
    char CrossPrioritization;
    int64_t Price;
    uint32_t OrderQty;
} NewOrderCrossMultilegMessageT;

/*
 * Structure: New Order Complex Message
 */ 
typedef struct {
    char ClOrdId[20];
    char Side;
    uint32_t OrderQty;
} NewOrderComplexMessageT;

/*
 * Bitfield: New Order Cross Byte 4
 */ 
typedef struct {
    uint8_t
    NewOrderCrossReservedBit8Exists : 1,
    NewOrderCrossReservedBit7Exists : 1,
    NewOrderCrossReservedBit6Exists : 1,
    NewOrderCrossReservedBit5Exists : 1,
    NewOrderCrossReservedBit4Exists : 1,
    NewOrderCrossFrequentTraderIdExists : 1,
    NewOrderCrossOrsExists : 1,
    NewOrderCrossReservedBit1Exists : 1;
} NewOrderCrossByte4T;

/*
 * Bitfield: New Order Cross Byte 3
 */ 
typedef struct {
    uint8_t
    NewOrderCrossSessionEligibilityExists : 1,
    NewOrderCrossEquitySellClearingFirmExists : 1,
    NewOrderCrossEquityBuyClearingFirmExists : 1,
    NewOrderCrossEquityTransactTimeExists : 1,
    NewOrderCrossEquityTradeVenueExists : 1,
    NewOrderCrossEquityTradeSizeExists : 1,
    NewOrderCrossEquityTradePriceExists : 1,
    NewOrderCrossClientIdAttrExists : 1;
} NewOrderCrossByte3T;

/*
 * Bitfield: New Order Cross Byte 2
 */ 
typedef struct {
    uint8_t
    NewOrderCrossClearingOptionalDataExists : 1,
    NewOrderCrossRoutingFirmIdExists : 1,
    NewOrderCrossClearingAccountExists : 1,
    NewOrderCrossCmtaNumberExists : 1,
    NewOrderCrossAccountExists : 1,
    NewOrderCrossLastPriorityExists : 1,
    NewOrderCrossAutoMatchPriceExists : 1,
    NewOrderCrossAutoMatchExists : 1;
} NewOrderCrossByte2T;

/*
 * Bitfield: New Order Cross Byte 1
 */ 
typedef struct {
    uint8_t
    NewOrderCrossPreventMatchExists : 1,
    NewOrderCrossTargetPartyIdExists : 1,
    NewOrderCrossAttributedQuoteExists : 1,
    NewOrderCrossExecInstExists : 1,
    NewOrderCrossPutOrCallExists : 1,
    NewOrderCrossStrikePriceExists : 1,
    NewOrderCrossMaturityDateExists : 1,
    NewOrderCrossSymbolExists : 1;
} NewOrderCrossByte1T;

/*
 * Structure: New Order Cross Message
 */ 
typedef struct {
    char CrossId[20];
    char CrossType[1];
    char CrossPrioritization;
    int64_t Price;
    uint32_t OrderQty;
} NewOrderCrossMessageT;

/*
 * Bitfield: New Order Byte 9
 */ 
typedef struct {
    uint8_t
    NewOrderReservedBit8Exists : 1,
    NewOrderReservedBit7Exists : 1,
    NewOrderReservedBit6Exists : 1,
    NewOrderReservedBit5Exists : 1,
    NewOrderReservedBit4Exists : 1,
    NewOrderPriceTypeExists : 1,
    NewOrderOrsExists : 1,
    NewOrderOrderOriginExists : 1;
} NewOrderByte9T;

/*
 * Bitfield: New Order Byte 8
 */ 
typedef struct {
    uint8_t
    NewOrderReservedBit8Exists : 1,
    NewOrderReservedBit7Exists : 1,
    NewOrderReservedBit6Exists : 1,
    NewOrderFrequentTraderIdExists : 1,
    NewOrderClientIdAttrExists : 1,
    NewOrderClearingOptionalDataExists : 1,
    NewOrderCustomGroupIdExists : 1,
    NewOrderReservedBit1Exists : 1;
} NewOrderByte8T;

/*
 * Bitfield: New Order Byte 7
 */ 
typedef struct {
    uint8_t
    NewOrderReservedBit8Exists : 1,
    NewOrderReservedBit7Exists : 1,
    NewOrderReservedBit6Exists : 1,
    NewOrderReservedBit5Exists : 1,
    NewOrderReservedBit4Exists : 1,
    NewOrderReservedBit3Exists : 1,
    NewOrderCustomGroupIdExists : 1,
    NewOrderReservedBit1Exists : 1;
} NewOrderByte7T;

/*
 * Bitfield: New Order Byte 6
 */ 
typedef struct {
    uint8_t
    NewOrderRoutingFirmIdExists : 1,
    NewOrderAuctionIdExists : 1,
    NewOrderEchoTextExists : 1,
    NewOrderExDestinationExists : 1,
    NewOrderRouteDeliveryMethodExists : 1,
    NewOrderRoutStrategyExists : 1,
    NewOrderStopPxExists : 1,
    NewOrderDisplayRangeExists : 1;
} NewOrderByte6T;

/*
 * Bitfield: New Order Byte 5
 */ 
typedef struct {
    uint8_t
    NewOrderReservedBit8Exists : 1,
    NewOrderReservedBit7Exists : 1,
    NewOrderReservedBit6Exists : 1,
    NewOrderReservedBit5Exists : 1,
    NewOrderExtExecInstExists : 1,
    NewOrderReservedBit3Exists : 1,
    NewOrderAttributedQuoteExists : 1,
    NewOrderSessionEligibilityExists : 1;
} NewOrderByte5T;

/*
 * Bitfield: New Order Byte 4
 */ 
typedef struct {
    uint8_t
    NewOrderReservedBit8Exists : 1,
    NewOrderTargetPartyIdExists : 1,
    NewOrderCmtaNumberExists : 1,
    NewOrderOpenCloseExists : 1,
    NewOrderRiskResetExists : 1,
    NewOrderPutOrCallExists : 1,
    NewOrderStrikePriceExists : 1,
    NewOrderMaturityDateExists : 1;
} NewOrderByte4T;

/*
 * Bitfield: New Order Byte 3
 */ 
typedef struct {
    uint8_t
    NewOrderExpireTimeExists : 1,
    NewOrderLocateReqdExists : 1,
    NewOrderPreventMatchExists : 1,
    NewOrderPegDifferenceExists : 1,
    NewOrderDiscretionAmountExists : 1,
    NewOrderMaxRemovePctExists : 1,
    NewOrderDisplayIndicatorExists : 1,
    NewOrderAccountExists : 1;
} NewOrderByte3T;

/*
 * Bitfield: New Order Byte 2
 */ 
typedef struct {
    uint8_t
    NewOrderRoutingInstExists : 1,
    NewOrderCapacityExists : 1,
    NewOrderReservedBit6Exists : 1,
    NewOrderReservedBit5Exists : 1,
    NewOrderReservedBit4Exists : 1,
    NewOrderReservedBit3Exists : 1,
    NewOrderSymbolSfxExists : 1,
    NewOrderSymbolExists : 1;
} NewOrderByte2T;

/*
 * Bitfield: New Order Byte 1
 */ 
typedef struct {
    uint8_t
    NewOrderMaxFloorExists : 1,
    NewOrderMinQtyExists : 1,
    NewOrderTimeInForceExists : 1,
    NewOrderOrdTypeExists : 1,
    NewOrderExecInstExists : 1,
    NewOrderPriceExists : 1,
    NewOrderClearingAccountExists : 1,
    NewOrderClearingFirmExists : 1;
} NewOrderByte1T;

/*
 * Structure: New Order Message
 */ 
typedef struct {
    char ClOrdId[20];
    char Side;
    uint32_t OrderQty;
} NewOrderMessageT;

/*
 * Structure: Unit Sequence
 */ 
typedef struct {
    uint8_t UnitNumber;
    uint32_t SequenceNumber;
} UnitSequenceT;

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
 * Bitfield: Order Execution Byte 17
 */ 
typedef struct {
    uint8_t
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionFloorTraderAcronymExists : 1,
    OrderExecutionSenderLocationIdExists : 1,
    OrderExecutionTradeThroughAlertTypeExists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionStrategyIdExists : 1,
    OrderExecutionPriceTypeExists : 1;
} OrderExecutionByte17T;

/*
 * Bitfield: Order Execution Byte 16
 */ 
typedef struct {
    uint8_t
    OrderExecutionOrderOriginExists : 1,
    OrderExecutionMultiClassSprdExists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionFrequentTraderIdExists : 1;
} OrderExecutionByte16T;

/*
 * Bitfield: Order Execution Byte 15
 */ 
typedef struct {
    uint8_t
    OrderExecutionClientIdAttrExists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionEquityPartyIdExists : 1,
    OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte15T;

/*
 * Bitfield: Order Execution Byte 14
 */ 
typedef struct {
    uint8_t
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionSecondaryExecIdExists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte14T;

/*
 * Bitfield: Order Execution Byte 13
 */ 
typedef struct {
    uint8_t
    OrderExecutionMultilegReportingTypeExists : 1,
    OrderExecutionDrillThruProtectionExists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionDayAvgPxExists : 1,
    OrderExecutionAvgPxExists : 1,
    OrderExecutionDayCumQtyExists : 1,
    OrderExecutionDayOrderQtyExists : 1,
    OrderExecutionCumQtyExists : 1;
} OrderExecutionByte13T;

/*
 * Bitfield: Order Execution Byte 12
 */ 
typedef struct {
    uint8_t
    OrderExecutionClearingOptionalDataExists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte12T;

/*
 * Bitfield: Order Execution Byte 11
 */ 
typedef struct {
    uint8_t
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte11T;

/*
 * Bitfield: Order Execution Byte 10
 */ 
typedef struct {
    uint8_t
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionCrossExclusionIndicatorExists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionRoutingFirmIdExists : 1,
    OrderExecutionGiveUpFirmIdExists : 1,
    OrderExecutionAllocQtyExists : 1,
    OrderExecutionCrossIdExists : 1;
} OrderExecutionByte10T;

/*
 * Bitfield: Order Execution Byte 9
 */ 
typedef struct {
    uint8_t
    OrderExecutionCrossPrioritizationExists : 1,
    OrderExecutionCrossTypeExists : 1,
    OrderExecutionCmtaNumberExists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionAuctionIdExists : 1,
    OrderExecutionTargetPartyIdExists : 1,
    OrderExecutionMarketingFeeCodeExists : 1;
} OrderExecutionByte9T;

/*
 * Bitfield: Order Execution Byte 8
 */ 
typedef struct {
    uint8_t
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionExDestinationExists : 1,
    OrderExecutionRouteDeliveryMethodExists : 1,
    OrderExecutionRoutStrategyExists : 1,
    OrderExecutionRoutingInstExists : 1,
    OrderExecutionStopPxExists : 1,
    OrderExecutionEchoTextExists : 1,
    OrderExecutionFeeCodeExists : 1;
} OrderExecutionByte8T;

/*
 * Bitfield: Order Execution Byte 7
 */ 
typedef struct {
    uint8_t
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte7T;

/*
 * Bitfield: Order Execution Byte 6
 */ 
typedef struct {
    uint8_t
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionAttributedQuoteExists : 1,
    OrderExecutionContraCapacityExists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte6T;

/*
 * Bitfield: Order Execution Byte 5
 */ 
typedef struct {
    uint8_t
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte5T;

/*
 * Bitfield: Order Execution Byte 4
 */ 
typedef struct {
    uint8_t
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionCorrectedSizeExists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionOpenCloseExists : 1,
    OrderExecutionPutOrCallExists : 1,
    OrderExecutionStrikePriceExists : 1,
    OrderExecutionMaturityDateExists : 1;
} OrderExecutionByte4T;

/*
 * Bitfield: Order Execution Byte 3
 */ 
typedef struct {
    uint8_t
    OrderExecutionPreventMatchExists : 1,
    OrderExecutionOrderQtyExists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionMaxFloorExists : 1,
    OrderExecutionDisplayIndicatorExists : 1,
    OrderExecutionClearingAccountExists : 1,
    OrderExecutionClearingFirmExists : 1,
    OrderExecutionAccountExists : 1;
} OrderExecutionByte3T;

/*
 * Bitfield: Order Execution Byte 2
 */ 
typedef struct {
    uint8_t
    OrderExecutionContraTraderExists : 1,
    OrderExecutionCapacityExists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionSymbolExists : 1;
} OrderExecutionByte2T;

/*
 * Bitfield: Order Execution Byte 1
 */ 
typedef struct {
    uint8_t
    OrderExecutionMaxRemovePctExists : 1,
    OrderExecutionMinQtyExists : 1,
    OrderExecutionTimeInForceExists : 1,
    OrderExecutionOrdTypeExists : 1,
    OrderExecutionExecInstExists : 1,
    OrderExecutionPriceExists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionSideExists : 1;
} OrderExecutionByte1T;

/*
 * Structure: Return Bitfields
 */ 
typedef struct {
    uint8_t ApplicationMessageType;
} ReturnBitfieldsT;

/*
 * Structure: Unit Sequences
 */ 
typedef struct {
    char NoUnspecifiedUnitReplay;
    uint8_t NumberOfUnits;
} UnitSequencesT;

/*
 * Structure: Param Header
 */ 
typedef struct {
    uint16_t ParamGroupLength;
    uint8_t ParamGroupType;
} ParamHeaderT;

/*
 * Structure: Param Group
 */ 
typedef struct {
    ParamHeaderT ParamHeader;
} ParamGroupT;

/*
 * Structure: Login Request Message
 */ 
typedef struct {
    char SessionSubId[4];
    char Username[4];
    char Password[10];
    uint8_t NumberOfParamGroups;
} LoginRequestMessageT;

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
 * Structure: Packet
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Chicago Board Options Exchange
   Version: 2.10
   Date: Tuesday, December 3, 2019
   Specification: BATS_US_Options_BOE2_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
