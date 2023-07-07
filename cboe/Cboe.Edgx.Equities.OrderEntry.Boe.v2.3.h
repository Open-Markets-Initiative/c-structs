/*******************************************************************************
 * C Structs For Cboe Edgx Equities Boe OrderEntry 2.3 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Application Message Type Values
 */ 
#define ENUM_APPLICATION_MESSAGE_TYPE_NEW_ORDER 0x38
#define ENUM_APPLICATION_MESSAGE_TYPE_CANCEL_ORDER 0x39
#define ENUM_APPLICATION_MESSAGE_TYPE_MODIFY_ORDER 0x3A
#define ENUM_APPLICATION_MESSAGE_TYPE_PURGE_ORDER 0x47
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT 0x25
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_REJECTED 0x26
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_MODIFIED 0x27
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_RESTATED 0x28
#define ENUM_APPLICATION_MESSAGE_TYPE_USER_MODIFY_REJECTED 0x29
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_CANCELLED 0x2A
#define ENUM_APPLICATION_MESSAGE_TYPE_CANCEL_REJECTED 0x2B
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_EXECUTION 0x2C
#define ENUM_APPLICATION_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT 0x2D
#define ENUM_APPLICATION_MESSAGE_TYPE_PURGE_REJECTED 0x48

/*
 * Attributed Quote Values
 */ 
#define ENUM_ATTRIBUTED_QUOTE_DO_NOT_ATTRIBUTE_FIRM_MPID 'N'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_FIRM_MPID 'Y'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_RTAL 'R'

/*
 * Base Liquidity Indicator Values
 */ 
#define ENUM_BASE_LIQUIDITY_INDICATOR_ADDED_LIQUIDITY 'A'
#define ENUM_BASE_LIQUIDITY_INDICATOR_REMOVED_LIQUIDITY 'R'
#define ENUM_BASE_LIQUIDITY_INDICATOR_ROUTED_TO_ANOTHER_MARKET 'X'
#define ENUM_BASE_LIQUIDITY_INDICATOR_AUCTION_OR_UNCROSSING 'C'

/*
 * Cancel Reason Values
 */ 
#define ENUM_CANCEL_REASON_ADMIN 'A'
#define ENUM_CANCEL_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_CANCEL_REASON_SIZE_REDUCTION_DUE_TO_SWP_RESTATEMENT 'E'
#define ENUM_CANCEL_REASON_FAILED_TO_QUOTE 'F'
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
#define ENUM_CANCEL_REASON_SHORT_SALE_PRICE_VIOLATION 'S'
#define ENUM_CANCEL_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO 'T'
#define ENUM_CANCEL_REASON_USER_REQUESTED 'U'
#define ENUM_CANCEL_REASON_WOULD_WASH 'V'
#define ENUM_CANCEL_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE 'W'
#define ENUM_CANCEL_REASON_ORDER_EXPIRED 'X'
#define ENUM_CANCEL_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_CANCEL_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_CANCEL_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_CANCEL_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_CANCEL_REASON_RESERVE_RELOAD 'r'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_CANCEL_REASON_LIMIT_UP_LIMIT_DOWN 'u'
#define ENUM_CANCEL_REASON_WOULD_REMOVE_ON_UNSLIDE 'w'
#define ENUM_CANCEL_REASON_CROSSED_MARKET 'x'
#define ENUM_CANCEL_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY 'y'

/*
 * Cancel Reject Reason Values
 */ 
#define ENUM_CANCEL_REJECT_REASON_ADMIN 'A'
#define ENUM_CANCEL_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_CANCEL_REJECT_REASON_SIZE_REDUCTION_DUE_TO_SWP_RESTATEMENT 'E'
#define ENUM_CANCEL_REJECT_REASON_FAILED_TO_QUOTE 'F'
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
#define ENUM_CANCEL_REJECT_REASON_SHORT_SALE_PRICE_VIOLATION 'S'
#define ENUM_CANCEL_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO 'T'
#define ENUM_CANCEL_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_CANCEL_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_CANCEL_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE 'W'
#define ENUM_CANCEL_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_CANCEL_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_CANCEL_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_CANCEL_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_CANCEL_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_CANCEL_REJECT_REASON_RESERVE_RELOAD 'r'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_CANCEL_REJECT_REASON_LIMIT_UP_LIMIT_DOWN 'u'
#define ENUM_CANCEL_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE 'w'
#define ENUM_CANCEL_REJECT_REASON_CROSSED_MARKET 'x'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY 'y'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_AGENCY 'A'
#define ENUM_CAPACITY_PRINCIPAL 'P'
#define ENUM_CAPACITY_RISKLESS_PRINCIPAL 'R'

/*
 * Display Indicator Values
 */ 
#define ENUM_DISPLAY_INDICATOR_DETERMINED_BY_PORT_LEVEL_SETTING 'V'
#define ENUM_DISPLAY_INDICATOR_PRICE_ADJUST 'P'
#define ENUM_DISPLAY_INDICATOR_MULTIPLE_PRICE_ADJUST 'm'
#define ENUM_DISPLAY_INDICATOR_REJECT_THE_ORDER_IF_IT_CANNOT_BE_BOOKED_AND_DISPLAYED_WITHOUT_ADJUSTMENT 'm'
#define ENUM_DISPLAY_INDICATOR_CANCEL_BACK_THE_ORDER_IF_IT_CANNOT_BE_BOOKED_AND_DISPLAYED_WITHOUT_ADJUSTMENT 'R'
#define ENUM_DISPLAY_INDICATOR_HIDDEN_CANCEL_BACK_THE_ORDER_IF_IT_CANNOT_BE_BOOKED_WITHOUT_ADJUSTMENT 'r'
#define ENUM_DISPLAY_INDICATOR_DISPLAY_PRICE_SLIDING 'S'
#define ENUM_DISPLAY_INDICATOR_DISPLAY_PRICE_SLIDING_BUT_REJECT_IF_ORDER_CROSSES_THE_NBBO_ON_ENTRY 'L'
#define ENUM_DISPLAY_INDICATOR_MULTIPLE_DISPLAY_PRICE_SLIDING 'M'
#define ENUM_DISPLAY_INDICATOR_VISIBLE 'v'
#define ENUM_DISPLAY_INDICATOR_INVISIBLE 'I'
#define ENUM_DISPLAY_INDICATOR_NO_RESCRAPE_AT_LIMIT 'N'

/*
 * Ex Destination Values
 */ 
#define ENUM_EX_DESTINATION_NYSE_AMERICAN 'A'
#define ENUM_EX_DESTINATION_NASDAQ_BX 'B'
#define ENUM_EX_DESTINATION_NYSE_NATIONAL 'C'
#define ENUM_EX_DESTINATION_MIAX_PEARL 'H'
#define ENUM_EX_DESTINATION_INVESTORS_EXCHANGE 'I'
#define ENUM_EX_DESTINATION_EDGA 'J'
#define ENUM_EX_DESTINATION_LONG_TERM_STOCK_EXCHANGE 'L'
#define ENUM_EX_DESTINATION_CHX 'M'
#define ENUM_EX_DESTINATION_NYSE 'N'
#define ENUM_EX_DESTINATION_NYSE_ARCA 'U'
#define ENUM_EX_DESTINATION_NASDAQ 'Q'
#define ENUM_EX_DESTINATION_MEMX 'Q'
#define ENUM_EX_DESTINATION_NASDAQ_PSX 'X'
#define ENUM_EX_DESTINATION_BYX 'Y'
#define ENUM_EX_DESTINATION_BZX 'Y'

/*
 * Exec Inst Values
 */ 
#define ENUM_EXEC_INST_INTERMARKET_SWEEP 'f'
#define ENUM_EXEC_INST_MARKET_PEG 'P'
#define ENUM_EXEC_INST_MARKET_MARKER_PEG 'Q'
#define ENUM_EXEC_INST_PRIMARY_PEG 'Q'
#define ENUM_EXEC_INST_SUPPLEMENTAL_PEG_ORDER 'U'
#define ENUM_EXEC_INST_MIDPOINT_PEG 'M'
#define ENUM_EXEC_INST_MIDPOINT_PEG_BUT_NO_MATCH_ON_NBBO_LOCK 'm'
#define ENUM_EXEC_INST_ALTERNATE_MIDPOINT 'L'
#define ENUM_EXEC_INST_MIDPOINT_DISCRETIONARY_ORDER 'd'
#define ENUM_EXEC_INST_LISTING_MARKET_OPENING 'o'
#define ENUM_EXEC_INST_LISTING_MARKET_CLOSE 'c'
#define ENUM_EXEC_INST_BOTH_LISTING_MARKET_OPEN_AND_CLOSE 'a'

/*
 * Ext Exec Inst Values
 */ 
#define ENUM_EXT_EXEC_INST_NONE 'N'
#define ENUM_EXT_EXEC_INST_ORDER_ELIGIBLE_FOR_RETAIL_REBATE 'R'
#define ENUM_EXT_EXEC_INST_RETAIL_PRIORITY_ORDER 'X'

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
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_LOGIN_REQUEST_MESSAGE 0x37
#define ENUM_MESSAGE_TYPE_LOGOUT_REQUEST_MESSAGE 0x02
#define ENUM_MESSAGE_TYPE_CLIENT_HEARTBEAT_MESSAGE 0x03
#define ENUM_MESSAGE_TYPE_LOGIN_RESPONSE_MESSAGE 0x24
#define ENUM_MESSAGE_TYPE_LOGOUT_MESSAGE 0x08
#define ENUM_MESSAGE_TYPE_SERVER_HEARTBEAT_MESSAGE 0x09
#define ENUM_MESSAGE_TYPE_REPLAY_COMPLETE_MESSAGE 0x13
#define ENUM_MESSAGE_TYPE_NEW_ORDER_MESSAGE 0x38
#define ENUM_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE 0x39
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE 0x3A
#define ENUM_MESSAGE_TYPE_PURGE_ORDER_MESSAGE 0x47
#define ENUM_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT_MESSAGE 0x25
#define ENUM_MESSAGE_TYPE_ORDER_REJECTED_MESSAGE 0x26
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE 0x27
#define ENUM_MESSAGE_TYPE_ORDER_RESTATED_MESSAGE 0x28
#define ENUM_MESSAGE_TYPE_USER_MODIFY_REJECTED_MESSAGE 0x29
#define ENUM_MESSAGE_TYPE_ORDER_CANCELLED_MESSAGE 0x2A
#define ENUM_MESSAGE_TYPE_CANCEL_REJECTED_MESSAGE 0x2B
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTION_MESSAGE 0x2C
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT_MESSAGE 0x2D
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_ACKNOWLEDGMENT_MESSAGE 0x36
#define ENUM_MESSAGE_TYPE_PURGE_REJECTED_MESSAGE 0x48

/*
 * Modify Reject Reason Values
 */ 
#define ENUM_MODIFY_REJECT_REASON_ADMIN 'A'
#define ENUM_MODIFY_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_MODIFY_REJECT_REASON_SIZE_REDUCTION_DUE_TO_SWP_RESTATEMENT 'E'
#define ENUM_MODIFY_REJECT_REASON_FAILED_TO_QUOTE 'F'
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
#define ENUM_MODIFY_REJECT_REASON_SHORT_SALE_PRICE_VIOLATION 'S'
#define ENUM_MODIFY_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO 'T'
#define ENUM_MODIFY_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_MODIFY_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_MODIFY_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE 'W'
#define ENUM_MODIFY_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_MODIFY_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_MODIFY_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_MODIFY_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_MODIFY_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_MODIFY_REJECT_REASON_RESERVE_RELOAD 'r'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_MODIFY_REJECT_REASON_LIMIT_UP_LIMIT_DOWN 'u'
#define ENUM_MODIFY_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE 'w'
#define ENUM_MODIFY_REJECT_REASON_CROSSED_MARKET 'x'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY 'y'

/*
 * No Unspecified Unit Replay Values
 */ 
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_FALSE '0'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TRUE '1'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TEST 'T'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET '1'
#define ENUM_ORD_TYPE_LIMIT '2'
#define ENUM_ORD_TYPE_STOP '3'
#define ENUM_ORD_TYPE_STOP_LIMIT '4'
#define ENUM_ORD_TYPE_PEGGED 'P'

/*
 * Order Reject Reason Values
 */ 
#define ENUM_ORDER_REJECT_REASON_ADMIN 'A'
#define ENUM_ORDER_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_ORDER_REJECT_REASON_SIZE_REDUCTION_DUE_TO_SWP_RESTATEMENT 'E'
#define ENUM_ORDER_REJECT_REASON_FAILED_TO_QUOTE 'F'
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
#define ENUM_ORDER_REJECT_REASON_SHORT_SALE_PRICE_VIOLATION 'S'
#define ENUM_ORDER_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO 'T'
#define ENUM_ORDER_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_ORDER_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_ORDER_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE 'W'
#define ENUM_ORDER_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_ORDER_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_ORDER_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_ORDER_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_ORDER_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_ORDER_REJECT_REASON_RESERVE_RELOAD 'r'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_ORDER_REJECT_REASON_LIMIT_UP_LIMIT_DOWN 'u'
#define ENUM_ORDER_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE 'w'
#define ENUM_ORDER_REJECT_REASON_CROSSED_MARKET 'x'
#define ENUM_ORDER_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY 'y'

/*
 * Param Group Type Values
 */ 
#define ENUM_PARAM_GROUP_TYPE_UNIT_SEQUENCES 0x80
#define ENUM_PARAM_GROUP_TYPE_RETURN_BITFIELDS 0x81

/*
 * Purge Reject Reason Values
 */ 
#define ENUM_PURGE_REJECT_REASON_ADMIN 'A'
#define ENUM_PURGE_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_PURGE_REJECT_REASON_SIZE_REDUCTION_DUE_TO_SWP_RESTATEMENT 'E'
#define ENUM_PURGE_REJECT_REASON_FAILED_TO_QUOTE 'F'
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
#define ENUM_PURGE_REJECT_REASON_SHORT_SALE_PRICE_VIOLATION 'S'
#define ENUM_PURGE_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO 'T'
#define ENUM_PURGE_REJECT_REASON_USER_REQUESTED 'U'
#define ENUM_PURGE_REJECT_REASON_WOULD_WASH 'V'
#define ENUM_PURGE_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE 'W'
#define ENUM_PURGE_REJECT_REASON_ORDER_EXPIRED 'X'
#define ENUM_PURGE_REJECT_REASON_SYMBOL_NOT_SUPPORTED 'Y'
#define ENUM_PURGE_REJECT_REASON_UNFORESEEN_REASON 'Z'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_PURGE_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_PURGE_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_PURGE_REJECT_REASON_RESERVE_RELOAD 'r'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL 's'
#define ENUM_PURGE_REJECT_REASON_LIMIT_UP_LIMIT_DOWN 'u'
#define ENUM_PURGE_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE 'w'
#define ENUM_PURGE_REJECT_REASON_CROSSED_MARKET 'x'
#define ENUM_PURGE_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY 'y'

/*
 * Restatement Reason Values
 */ 
#define ENUM_RESTATEMENT_REASON_CBOE_MARKET_CLOSE 'C'
#define ENUM_RESTATEMENT_REASON_RELOAD 'L'
#define ENUM_RESTATEMENT_REASON_PEG_OR_PRICE_SLIDING_REPRICE 'P'
#define ENUM_RESTATEMENT_REASON_LIQUIDITY_UPDATED 'Q'
#define ENUM_RESTATEMENT_REASON_REROUTE 'R'
#define ENUM_RESTATEMENT_REASON_REDUCTION_OF_QUANTITY 'S'
#define ENUM_RESTATEMENT_REASON_WASH 'W'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY '1'
#define ENUM_SIDE_SELL '2'
#define ENUM_SIDE_SHORT_SELL '5'
#define ENUM_SIDE_SHORT_SELL_EXEMPT '5'

/*
 * Sub Liquidity Indicator Values
 */ 
#define ENUM_SUB_LIQUIDITY_INDICATOR_TRADE_ADDED_HIDDEN_LIQUIDITY 'H'
#define ENUM_SUB_LIQUIDITY_INDICATOR_TRADE_ADDED_HIDDEN_LIQUIDITY_THAT_WAS_PRICE_IMPROVED 'I'
#define ENUM_SUB_LIQUIDITY_INDICATOR_EXECUTION_FROM_FIRST_ORDER_TO_JOIN_THE_NBBO 'J'
#define ENUM_SUB_LIQUIDITY_INDICATOR_EXECUTION_FROM_ORDER_THAT_SET_THE_NBBO 'S'
#define ENUM_SUB_LIQUIDITY_INDICATOR_VISIBLE_LIQUIDITY_ADD_TRADE_THAT_WAS_PRICE_IMPROVED 'V'
#define ENUM_SUB_LIQUIDITY_INDICATOR_MIDPOINT_PEG_ORDER 'm'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY '0'
#define ENUM_TIME_IN_FORCE_GTC '1'
#define ENUM_TIME_IN_FORCE_IOC '3'
#define ENUM_TIME_IN_FORCE_FOK '4'
#define ENUM_TIME_IN_FORCE_GTX '5'
#define ENUM_TIME_IN_FORCE_GTD '6'
#define ENUM_TIME_IN_FORCE_PRE 'E'
#define ENUM_TIME_IN_FORCE_RHO 'R'
#define ENUM_TIME_IN_FORCE_PTD 'T'
#define ENUM_TIME_IN_FORCE_PTX 'X'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

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
    PurgeRejectedSubLiquidityIndicatorExists : 1;
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
 * Structure: Mass Cancel Acknowledgment Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char MassCancelId[20];
    uint32_t CancelledOrderCount;
    char ReservedInternal[1];
} MassCancelAcknowledgmentMessageT;

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
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte10T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 9
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
    TradeCancelOrCorrectReservedBit6Exists : 1,
    TradeCancelOrCorrectReservedBit5Exists : 1,
    TradeCancelOrCorrectReservedBit4Exists : 1,
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
    TradeCancelOrCorrectReservedBit1Exists : 1;
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
    TradeCancelOrCorrectSymbolSfxExists : 1,
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
 * Bitfield: Order Execution Byte 17
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
} OrderExecutionByte17T;

/*
 * Bitfield: Order Execution Byte 16
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
} OrderExecutionByte16T;

/*
 * Bitfield: Order Execution Byte 15
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
} OrderExecutionByte15T;

/*
 * Bitfield: Order Execution Byte 14
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
} OrderExecutionByte14T;

/*
 * Bitfield: Order Execution Byte 13
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
} OrderExecutionByte13T;

/*
 * Bitfield: Order Execution Byte 12
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
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte10T;

/*
 * Bitfield: Order Execution Byte 9
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
    OrderExecutionExtExecInstExists : 1,
    OrderExecutionAttributedQuoteExists : 1,
    OrderExecutionReservedBit3Exists : 1,
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
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte4T;

/*
 * Bitfield: Order Execution Byte 3
 */ 
typedef struct {
    uint8_t
    OrderExecutionPreventMatchExists : 1,
    OrderExecutionOrderQtyExists : 1,
    OrderExecutionDiscretionAmountExists : 1,
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
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionCapacityExists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionSymbolSfxExists : 1,
    OrderExecutionSymbolExists : 1;
} OrderExecutionByte2T;

/*
 * Bitfield: Order Execution Byte 1
 */ 
typedef struct {
    uint8_t
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionMinQtyExists : 1,
    OrderExecutionTimeInForceExists : 1,
    OrderExecutionOrdTypeExists : 1,
    OrderExecutionExecInstExists : 1,
    OrderExecutionPriceExists : 1,
    OrderExecutionPegDifferenceExists : 1,
    OrderExecutionSideExists : 1;
} OrderExecutionByte1T;

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
    char ContraBroker[4];
    char ReservedInternal[1];
} OrderExecutionMessageT;

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
    CancelRejectedReservedBit4Exists : 1,
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
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte10T;

/*
 * Bitfield: Cancel Rejected Byte 9
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
} CancelRejectedByte9T;

/*
 * Bitfield: Cancel Rejected Byte 8
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedReservedBit7Exists : 1,
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedRoutStrategyExists : 1,
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
    CancelRejectedReservedBit6Exists : 1,
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
    CancelRejectedReservedBit1Exists : 1;
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
    CancelRejectedSymbolSfxExists : 1,
    CancelRejectedSymbolExists : 1;
} CancelRejectedByte2T;

/*
 * Bitfield: Cancel Rejected Byte 1
 */ 
typedef struct {
    uint8_t
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedMinQtyExists : 1,
    CancelRejectedTimeInForceExists : 1,
    CancelRejectedOrdTypeExists : 1,
    CancelRejectedExecInstExists : 1,
    CancelRejectedPriceExists : 1,
    CancelRejectedPegDifferenceExists : 1,
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
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte17T;

/*
 * Bitfield: Order Cancelled Byte 16
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledMassCancelledExists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledReservedBit1Exists : 1;
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
    OrderCancelledMassCancelledExists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
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
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte10T;

/*
 * Bitfield: Order Cancelled Byte 9
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
    OrderCancelledExtExecInstExists : 1,
    OrderCancelledAttributedQuoteExists : 1,
    OrderCancelledReservedBit3Exists : 1,
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
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte4T;

/*
 * Bitfield: Order Cancelled Byte 3
 */ 
typedef struct {
    uint8_t
    OrderCancelledPreventMatchExists : 1,
    OrderCancelledOrderQtyExists : 1,
    OrderCancelledDiscretionAmountExists : 1,
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
    OrderCancelledSymbolSfxExists : 1,
    OrderCancelledSymbolExists : 1;
} OrderCancelledByte2T;

/*
 * Bitfield: Order Cancelled Byte 1
 */ 
typedef struct {
    uint8_t
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledMinQtyExists : 1,
    OrderCancelledTimeInForceExists : 1,
    OrderCancelledOrdTypeExists : 1,
    OrderCancelledExecInstExists : 1,
    OrderCancelledPriceExists : 1,
    OrderCancelledPegDifferenceExists : 1,
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
    UserModifyRejectedReservedBit6Exists : 1,
    UserModifyRejectedReservedBit5Exists : 1,
    UserModifyRejectedReservedBit4Exists : 1,
    UserModifyRejectedReservedBit3Exists : 1,
    UserModifyRejectedReservedBit2Exists : 1,
    UserModifyRejectedReservedBit1Exists : 1;
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
    UserModifyRejectedSubLiquidityIndicatorExists : 1;
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
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte17T;

/*
 * Bitfield: Order Restated Byte 16
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedMassCancelledExists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte16T;

/*
 * Bitfield: Order Restated Byte 15
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
    OrderRestatedReservedBit7Exists : 1,
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedMassCancelledExists : 1,
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
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte10T;

/*
 * Bitfield: Order Restated Byte 9
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
    OrderRestatedExtExecInstExists : 1,
    OrderRestatedAttributedQuoteExists : 1,
    OrderRestatedReservedBit3Exists : 1,
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
    OrderRestatedReservedBit6Exists : 1,
    OrderRestatedReservedBit5Exists : 1,
    OrderRestatedReservedBit4Exists : 1,
    OrderRestatedReservedBit3Exists : 1,
    OrderRestatedReservedBit2Exists : 1,
    OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte4T;

/*
 * Bitfield: Order Restated Byte 3
 */ 
typedef struct {
    uint8_t
    OrderRestatedPreventMatchExists : 1,
    OrderRestatedOrderQtyExists : 1,
    OrderRestatedDiscretionAmountExists : 1,
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
    OrderRestatedSymbolSfxExists : 1,
    OrderRestatedSymbolExists : 1;
} OrderRestatedByte2T;

/*
 * Bitfield: Order Restated Byte 1
 */ 
typedef struct {
    uint8_t
    OrderRestatedReservedBit8Exists : 1,
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
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte17T;

/*
 * Bitfield: Order Modified Byte 16
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedMassCancelledExists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte16T;

/*
 * Bitfield: Order Modified Byte 15
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedMassCancelledExists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
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
    OrderModifiedReservedBit7Exists : 1,
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
    OrderModifiedReservedBit8Exists : 1,
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
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedReservedBit1Exists : 1;
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
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedReservedBit1Exists : 1;
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
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte7T;

/*
 * Bitfield: Order Modified Byte 6
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedExtExecInstExists : 1,
    OrderModifiedAttributedQuoteExists : 1,
    OrderModifiedReservedBit3Exists : 1,
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
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte4T;

/*
 * Bitfield: Order Modified Byte 3
 */ 
typedef struct {
    uint8_t
    OrderModifiedPreventMatchExists : 1,
    OrderModifiedOrderQtyExists : 1,
    OrderModifiedDiscretionAmountExists : 1,
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
    OrderModifiedSymbolSfxExists : 1,
    OrderModifiedSymbolExists : 1;
} OrderModifiedByte2T;

/*
 * Bitfield: Order Modified Byte 1
 */ 
typedef struct {
    uint8_t
    OrderModifiedReservedBit8Exists : 1,
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
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte17T;

/*
 * Bitfield: Order Rejected Byte 16
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
} OrderRejectedByte16T;

/*
 * Bitfield: Order Rejected Byte 15
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
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte10T;

/*
 * Bitfield: Order Rejected Byte 9
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
    OrderRejectedExtExecInstExists : 1,
    OrderRejectedAttributedQuoteExists : 1,
    OrderRejectedReservedBit3Exists : 1,
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
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte4T;

/*
 * Bitfield: Order Rejected Byte 3
 */ 
typedef struct {
    uint8_t
    OrderRejectedPreventMatchExists : 1,
    OrderRejectedOrderQtyExists : 1,
    OrderRejectedDiscretionAmountExists : 1,
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
    OrderRejectedSymbolSfxExists : 1,
    OrderRejectedSymbolExists : 1;
} OrderRejectedByte2T;

/*
 * Bitfield: Order Rejected Byte 1
 */ 
typedef struct {
    uint8_t
    OrderRejectedReservedBit8Exists : 1,
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
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte17T;

/*
 * Bitfield: Order Acknowledgment Byte 16
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
} OrderAcknowledgmentByte16T;

/*
 * Bitfield: Order Acknowledgment Byte 15
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentMassCancelledExists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
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
    OrderAcknowledgmentReservedBit7Exists : 1,
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
    OrderAcknowledgmentReservedBit8Exists : 1,
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
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
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
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
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
    OrderAcknowledgmentFeeCodeExists : 1;
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
    OrderAcknowledgmentExtExecInstExists : 1,
    OrderAcknowledgmentAttributedQuoteExists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
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
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte4T;

/*
 * Bitfield: Order Acknowledgment Byte 3
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentPreventMatchExists : 1,
    OrderAcknowledgmentOrderQtyExists : 1,
    OrderAcknowledgmentDiscretionAmountExists : 1,
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
    OrderAcknowledgmentSymbolSfxExists : 1,
    OrderAcknowledgmentSymbolExists : 1;
} OrderAcknowledgmentByte2T;

/*
 * Bitfield: Order Acknowledgment Byte 1
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentReservedBit8Exists : 1,
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
 * Bitfield: Purge Order Byte 2
 */ 
typedef struct {
    uint8_t
    PurgeOrderReservedBit8Exists : 1,
    PurgeOrderReservedBit7Exists : 1,
    PurgeOrderReservedBit6Exists : 1,
    PurgeOrderReservedBit5Exists : 1,
    PurgeOrderReservedBit4Exists : 1,
    PurgeOrderReservedBit3Exists : 1,
    PurgeOrderSymbolSfxExists : 1,
    PurgeOrderSymbolExists : 1;
} PurgeOrderByte2T;

/*
 * Bitfield: Purge Order Byte 1
 */ 
typedef struct {
    uint8_t
    PurgeOrderReservedBit8Exists : 1,
    PurgeOrderReservedBit7Exists : 1,
    PurgeOrderReservedBit6Exists : 1,
    PurgeOrderMassCancelIdExists : 1,
    PurgeOrderReservedBit4Exists : 1,
    PurgeOrderMassCancelInstExists : 1,
    PurgeOrderReservedBit2Exists : 1,
    PurgeOrderClearingFirmExists : 1;
} PurgeOrderByte1T;

/*
 * Structure: Purge Order Message
 */ 
typedef struct {
    char ReservedInternal[1];
} PurgeOrderMessageT;

/*
 * Bitfield: Modify Order Byte 2
 */ 
typedef struct {
    uint8_t
    ModifyOrderReservedBit8Exists : 1,
    ModifyOrderReservedBit7Exists : 1,
    ModifyOrderReservedBit6Exists : 1,
    ModifyOrderReservedBit5Exists : 1,
    ModifyOrderReservedBit4Exists : 1,
    ModifyOrderReservedBit3Exists : 1,
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
    CancelOrderReservedBit1Exists : 1;
} CancelOrderByte2T;

/*
 * Bitfield: Cancel Order Byte 1
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
    CancelOrderClearingFirmExists : 1;
} CancelOrderByte1T;

/*
 * Structure: Cancel Order Message
 */ 
typedef struct {
    char OrigClOrdId[20];
} CancelOrderMessageT;

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
    NewOrderReservedBit8Exists : 1,
    NewOrderReservedBit7Exists : 1,
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
    NewOrderReservedBit1Exists : 1;
} NewOrderByte5T;

/*
 * Bitfield: New Order Byte 4
 */ 
typedef struct {
    uint8_t
    NewOrderReservedBit8Exists : 1,
    NewOrderReservedBit7Exists : 1,
    NewOrderReservedBit6Exists : 1,
    NewOrderReservedBit5Exists : 1,
    NewOrderRiskResetExists : 1,
    NewOrderReservedBit3Exists : 1,
    NewOrderReservedBit2Exists : 1,
    NewOrderReservedBit1Exists : 1;
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
    NewOrderReservedBit3Exists : 1,
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
   Version: 2.3
   Date: Monday, March 11, 2019
   Specification: Cboe_US_Equities_BOE_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
