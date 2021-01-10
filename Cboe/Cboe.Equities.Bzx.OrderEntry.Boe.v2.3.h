/*******************************************************************************
 * C Structs For Cboe Equities Bzx Boe OrderEntry 2.3 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Application Message Type Values
 */ 
#define ENUM_APPLICATION_MESSAGE_TYPE_NEW_ORDER = 0x38
#define ENUM_APPLICATION_MESSAGE_TYPE_CANCEL_ORDER = 0x39
#define ENUM_APPLICATION_MESSAGE_TYPE_MODIFY_ORDER = 0x3A
#define ENUM_APPLICATION_MESSAGE_TYPE_PURGE_ORDER = 0x47
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT = 0x25
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_REJECTED = 0x26
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_MODIFIED = 0x27
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_RESTATED = 0x28
#define ENUM_APPLICATION_MESSAGE_TYPE_USER_MODIFY_REJECTED = 0x29
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_CANCELLED = 0x2A
#define ENUM_APPLICATION_MESSAGE_TYPE_CANCEL_REJECTED = 0x2B
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_EXECUTION = 0x2C
#define ENUM_APPLICATION_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT = 0x2D
#define ENUM_APPLICATION_MESSAGE_TYPE_PURGE_REJECTED = 0x48

/*
 * Attributed Quote Values
 */ 
#define ENUM_ATTRIBUTED_QUOTE_DO_NOT_ATTRIBUTE_FIRM_MPID = 'N'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_FIRM_MPID = 'Y'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_RTAL = 'R'

/*
 * Base Liquidity Indicator Values
 */ 
#define ENUM_BASE_LIQUIDITY_INDICATOR_ADDED_LIQUIDITY = 'A'
#define ENUM_BASE_LIQUIDITY_INDICATOR_REMOVED_LIQUIDITY = 'R'
#define ENUM_BASE_LIQUIDITY_INDICATOR_ROUTED_TO_ANOTHER_MARKET = 'X'
#define ENUM_BASE_LIQUIDITY_INDICATOR_AUCTION_OR_UNCROSSING = 'C'

/*
 * Cancel Reason Values
 */ 
#define ENUM_CANCEL_REASON_ADMIN = 'A'
#define ENUM_CANCEL_REASON_DUPLICATE_IDENTIFIER = 'D'
#define ENUM_CANCEL_REASON_SIZE_REDUCTION_DUE_TO_SWP_RESTATEMENT = 'E'
#define ENUM_CANCEL_REASON_FAILED_TO_QUOTE = 'F'
#define ENUM_CANCEL_REASON_HALTED = 'H'
#define ENUM_CANCEL_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_CANCEL_REASON_TOO_LATE_TO_CANCEL = 'J'
#define ENUM_CANCEL_REASON_ORDER_RATE_THRESHOLD_EXCEEDED = 'K'
#define ENUM_CANCEL_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO = 'L'
#define ENUM_CANCEL_REASON_ORDER_SIZE_EXCEEDED = 'M'
#define ENUM_CANCEL_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST = 'N'
#define ENUM_CANCEL_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER = 'O'
#define ENUM_CANCEL_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL = 'P'
#define ENUM_CANCEL_REASON_WAITING_FOR_FIRST_TRADE = 'Q'
#define ENUM_CANCEL_REASON_ROUTING_UNAVAILABLE = 'R'
#define ENUM_CANCEL_REASON_SHORT_SALE_PRICE_VIOLATION = 'S'
#define ENUM_CANCEL_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO = 'T'
#define ENUM_CANCEL_REASON_USER_REQUESTED = 'U'
#define ENUM_CANCEL_REASON_WOULD_WASH = 'V'
#define ENUM_CANCEL_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE = 'W'
#define ENUM_CANCEL_REASON_ORDER_EXPIRED = 'X'
#define ENUM_CANCEL_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_CANCEL_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_CANCEL_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_CANCEL_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_CANCEL_REASON_RESERVE_RELOAD = 'r'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_CANCEL_REASON_LIMIT_UP_LIMIT_DOWN = 'u'
#define ENUM_CANCEL_REASON_WOULD_REMOVE_ON_UNSLIDE = 'w'
#define ENUM_CANCEL_REASON_CROSSED_MARKET = 'x'
#define ENUM_CANCEL_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'

/*
 * Cancel Reject Reason Values
 */ 
#define ENUM_CANCEL_REJECT_REASON_ADMIN = 'A'
#define ENUM_CANCEL_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
#define ENUM_CANCEL_REJECT_REASON_SIZE_REDUCTION_DUE_TO_SWP_RESTATEMENT = 'E'
#define ENUM_CANCEL_REJECT_REASON_FAILED_TO_QUOTE = 'F'
#define ENUM_CANCEL_REJECT_REASON_HALTED = 'H'
#define ENUM_CANCEL_REJECT_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_CANCEL_REJECT_REASON_TOO_LATE_TO_CANCEL = 'J'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED = 'K'
#define ENUM_CANCEL_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO = 'L'
#define ENUM_CANCEL_REJECT_REASON_ORDER_SIZE_EXCEEDED = 'M'
#define ENUM_CANCEL_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST = 'N'
#define ENUM_CANCEL_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER = 'O'
#define ENUM_CANCEL_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL = 'P'
#define ENUM_CANCEL_REJECT_REASON_WAITING_FOR_FIRST_TRADE = 'Q'
#define ENUM_CANCEL_REJECT_REASON_ROUTING_UNAVAILABLE = 'R'
#define ENUM_CANCEL_REJECT_REASON_SHORT_SALE_PRICE_VIOLATION = 'S'
#define ENUM_CANCEL_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO = 'T'
#define ENUM_CANCEL_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_CANCEL_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_CANCEL_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE = 'W'
#define ENUM_CANCEL_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_CANCEL_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_CANCEL_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_CANCEL_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_CANCEL_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_CANCEL_REJECT_REASON_RESERVE_RELOAD = 'r'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_CANCEL_REJECT_REASON_LIMIT_UP_LIMIT_DOWN = 'u'
#define ENUM_CANCEL_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE = 'w'
#define ENUM_CANCEL_REJECT_REASON_CROSSED_MARKET = 'x'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_AGENCY = 'A'
#define ENUM_CAPACITY_PRINCIPAL = 'P'
#define ENUM_CAPACITY_RISKLESS_PRINCIPAL = 'R'

/*
 * Display Indicator Values
 */ 
#define ENUM_DISPLAY_INDICATOR_DETERMINED_BY_PORT_LEVEL_SETTING = 'V'
#define ENUM_DISPLAY_INDICATOR_PRICE_ADJUST = 'P'
#define ENUM_DISPLAY_INDICATOR_MULTIPLE_PRICE_ADJUST = 'm'
#define ENUM_DISPLAY_INDICATOR_REJECT_THE_ORDER_IF_IT_CANNOT_BE_BOOKED_AND_DISPLAYED_WITHOUT_ADJUSTMENT = 'm'
#define ENUM_DISPLAY_INDICATOR_CANCEL_BACK_THE_ORDER_IF_IT_CANNOT_BE_BOOKED_AND_DISPLAYED_WITHOUT_ADJUSTMENT = 'R'
#define ENUM_DISPLAY_INDICATOR_HIDDEN_CANCEL_BACK_THE_ORDER_IF_IT_CANNOT_BE_BOOKED_WITHOUT_ADJUSTMENT = 'r'
#define ENUM_DISPLAY_INDICATOR_DISPLAY_PRICE_SLIDING = 'S'
#define ENUM_DISPLAY_INDICATOR_DISPLAY_PRICE_SLIDING_BUT_REJECT_IF_ORDER_CROSSES_THE_NBBO_ON_ENTRY = 'L'
#define ENUM_DISPLAY_INDICATOR_MULTIPLE_DISPLAY_PRICE_SLIDING = 'M'
#define ENUM_DISPLAY_INDICATOR_VISIBLE = 'v'
#define ENUM_DISPLAY_INDICATOR_INVISIBLE = 'I'
#define ENUM_DISPLAY_INDICATOR_NO_RESCRAPE_AT_LIMIT = 'N'

/*
 * Ex Destination Values
 */ 
#define ENUM_EX_DESTINATION_NYSE_AMERICAN = 'A'
#define ENUM_EX_DESTINATION_NASDAQ_BX = 'B'
#define ENUM_EX_DESTINATION_NYSE_NATIONAL = 'C'
#define ENUM_EX_DESTINATION_MIAX_PEARL = 'H'
#define ENUM_EX_DESTINATION_INVESTORS_EXCHANGE = 'I'
#define ENUM_EX_DESTINATION_EDGA = 'J'
#define ENUM_EX_DESTINATION_EDGX = 'K'
#define ENUM_EX_DESTINATION_LONG_TERM_STOCK_EXCHANGE = 'L'
#define ENUM_EX_DESTINATION_CHX = 'M'
#define ENUM_EX_DESTINATION_NYSE = 'N'
#define ENUM_EX_DESTINATION_NYSE_ARCA = 'U'
#define ENUM_EX_DESTINATION_NASDAQ = 'Q'
#define ENUM_EX_DESTINATION_MEMX = 'Q'
#define ENUM_EX_DESTINATION_NASDAQ_PSX = 'X'
#define ENUM_EX_DESTINATION_BYX = 'Y'

/*
 * Exec Inst Values
 */ 
#define ENUM_EXEC_INST_INTERMARKET_SWEEP = 'f'
#define ENUM_EXEC_INST_MARKET_PEG = 'P'
#define ENUM_EXEC_INST_MARKET_MARKER_PEG = 'Q'
#define ENUM_EXEC_INST_PRIMARY_PEG = 'Q'
#define ENUM_EXEC_INST_SUPPLEMENTAL_PEG_ORDER = 'U'
#define ENUM_EXEC_INST_MIDPOINT_PEG = 'M'
#define ENUM_EXEC_INST_MIDPOINT_PEG_BUT_NO_MATCH_ON_NBBO_LOCK = 'm'
#define ENUM_EXEC_INST_ALTERNATE_MIDPOINT = 'L'
#define ENUM_EXEC_INST_LATE = 'r'
#define ENUM_EXEC_INST_LISTING_MARKET_OPENING = 'o'
#define ENUM_EXEC_INST_LISTING_MARKET_CLOSE = 'c'
#define ENUM_EXEC_INST_BOTH_LISTING_MARKET_OPEN_AND_CLOSE = 'a'

/*
 * Ext Exec Inst Values
 */ 
#define ENUM_EXT_EXEC_INST_NONE = 'N'
#define ENUM_EXT_EXEC_INST_ORDER_ELIGIBLE_FOR_RETAIL_REBATE = 'R'

/*
 * Login Response Status Values
 */ 
#define ENUM_LOGIN_RESPONSE_STATUS_LOGIN_ACCEPTED = 'A'
#define ENUM_LOGIN_RESPONSE_STATUS_NOT_AUTHORIZED = 'N'
#define ENUM_LOGIN_RESPONSE_STATUS_SESSION_IS_DISABLED = 'D'
#define ENUM_LOGIN_RESPONSE_STATUS_SESSION_IN_USE = 'B'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_SESSION = 'S'
#define ENUM_LOGIN_RESPONSE_STATUS_SEQUENCE_AHEAD_IN_LOGIN_MESSAGE = 'Q'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_UNIT_GIVEN_IN_LOGIN_MESSAGE = 'I'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_RETURN_BIT_FIELD_IN_LOGIN_MESSAGE = 'F'
#define ENUM_LOGIN_RESPONSE_STATUS_INVALID_LOGIN_REQUEST_MESSAGE_STRUCTURE = 'M'

/*
 * Logout Reason Values
 */ 
#define ENUM_LOGOUT_REASON_USER_REQUESTED = 'U'
#define ENUM_LOGOUT_REASON_END_OF_DAY = 'E'
#define ENUM_LOGOUT_REASON_ADMINISTRATIVE = 'A'
#define ENUM_LOGOUT_REASON_PROTOCOL_VIOLATION = '!'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_LOGIN_REQUEST_MESSAGE = 0x37
#define ENUM_MESSAGE_TYPE_LOGOUT_REQUEST_MESSAGE = 0x02
#define ENUM_MESSAGE_TYPE_CLIENT_HEARTBEAT_MESSAGE = 0x03
#define ENUM_MESSAGE_TYPE_LOGIN_RESPONSE_MESSAGE = 0x24
#define ENUM_MESSAGE_TYPE_LOGOUT_MESSAGE = 0x08
#define ENUM_MESSAGE_TYPE_SERVER_HEARTBEAT_MESSAGE = 0x09
#define ENUM_MESSAGE_TYPE_REPLAY_COMPLETE_MESSAGE = 0x13
#define ENUM_MESSAGE_TYPE_NEW_ORDER_MESSAGE = 0x38
#define ENUM_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE = 0x39
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE = 0x3A
#define ENUM_MESSAGE_TYPE_PURGE_ORDER_MESSAGE = 0x47
#define ENUM_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT_MESSAGE = 0x25
#define ENUM_MESSAGE_TYPE_ORDER_REJECTED_MESSAGE = 0x26
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE = 0x27
#define ENUM_MESSAGE_TYPE_ORDER_RESTATED_MESSAGE = 0x28
#define ENUM_MESSAGE_TYPE_USER_MODIFY_REJECTED_MESSAGE = 0x29
#define ENUM_MESSAGE_TYPE_ORDER_CANCELLED_MESSAGE = 0x2A
#define ENUM_MESSAGE_TYPE_CANCEL_REJECTED_MESSAGE = 0x2B
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTION_MESSAGE = 0x2C
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT_MESSAGE = 0x2D
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_ACKNOWLEDGMENT_MESSAGE = 0x36
#define ENUM_MESSAGE_TYPE_PURGE_REJECTED_MESSAGE = 0x48

/*
 * Modify Reject Reason Values
 */ 
#define ENUM_MODIFY_REJECT_REASON_ADMIN = 'A'
#define ENUM_MODIFY_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
#define ENUM_MODIFY_REJECT_REASON_SIZE_REDUCTION_DUE_TO_SWP_RESTATEMENT = 'E'
#define ENUM_MODIFY_REJECT_REASON_FAILED_TO_QUOTE = 'F'
#define ENUM_MODIFY_REJECT_REASON_HALTED = 'H'
#define ENUM_MODIFY_REJECT_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_MODIFY_REJECT_REASON_TOO_LATE_TO_CANCEL = 'J'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED = 'K'
#define ENUM_MODIFY_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO = 'L'
#define ENUM_MODIFY_REJECT_REASON_ORDER_SIZE_EXCEEDED = 'M'
#define ENUM_MODIFY_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST = 'N'
#define ENUM_MODIFY_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER = 'O'
#define ENUM_MODIFY_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL = 'P'
#define ENUM_MODIFY_REJECT_REASON_WAITING_FOR_FIRST_TRADE = 'Q'
#define ENUM_MODIFY_REJECT_REASON_ROUTING_UNAVAILABLE = 'R'
#define ENUM_MODIFY_REJECT_REASON_SHORT_SALE_PRICE_VIOLATION = 'S'
#define ENUM_MODIFY_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO = 'T'
#define ENUM_MODIFY_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_MODIFY_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_MODIFY_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE = 'W'
#define ENUM_MODIFY_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_MODIFY_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_MODIFY_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_MODIFY_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_MODIFY_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_MODIFY_REJECT_REASON_RESERVE_RELOAD = 'r'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_MODIFY_REJECT_REASON_LIMIT_UP_LIMIT_DOWN = 'u'
#define ENUM_MODIFY_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE = 'w'
#define ENUM_MODIFY_REJECT_REASON_CROSSED_MARKET = 'x'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'

/*
 * No Unspecified Unit Replay Values
 */ 
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_FALSE = '0'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TRUE = '1'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TEST = 'T'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET = '1'
#define ENUM_ORD_TYPE_LIMIT = '2'
#define ENUM_ORD_TYPE_STOP = '3'
#define ENUM_ORD_TYPE_STOP_LIMIT = '4'
#define ENUM_ORD_TYPE_PEGGED = 'P'

/*
 * Order Reject Reason Values
 */ 
#define ENUM_ORDER_REJECT_REASON_ADMIN = 'A'
#define ENUM_ORDER_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
#define ENUM_ORDER_REJECT_REASON_SIZE_REDUCTION_DUE_TO_SWP_RESTATEMENT = 'E'
#define ENUM_ORDER_REJECT_REASON_FAILED_TO_QUOTE = 'F'
#define ENUM_ORDER_REJECT_REASON_HALTED = 'H'
#define ENUM_ORDER_REJECT_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_ORDER_REJECT_REASON_TOO_LATE_TO_CANCEL = 'J'
#define ENUM_ORDER_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED = 'K'
#define ENUM_ORDER_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO = 'L'
#define ENUM_ORDER_REJECT_REASON_ORDER_SIZE_EXCEEDED = 'M'
#define ENUM_ORDER_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST = 'N'
#define ENUM_ORDER_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER = 'O'
#define ENUM_ORDER_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL = 'P'
#define ENUM_ORDER_REJECT_REASON_WAITING_FOR_FIRST_TRADE = 'Q'
#define ENUM_ORDER_REJECT_REASON_ROUTING_UNAVAILABLE = 'R'
#define ENUM_ORDER_REJECT_REASON_SHORT_SALE_PRICE_VIOLATION = 'S'
#define ENUM_ORDER_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO = 'T'
#define ENUM_ORDER_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_ORDER_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_ORDER_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE = 'W'
#define ENUM_ORDER_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_ORDER_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_ORDER_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_ORDER_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_ORDER_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_ORDER_REJECT_REASON_RESERVE_RELOAD = 'r'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_ORDER_REJECT_REASON_LIMIT_UP_LIMIT_DOWN = 'u'
#define ENUM_ORDER_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE = 'w'
#define ENUM_ORDER_REJECT_REASON_CROSSED_MARKET = 'x'
#define ENUM_ORDER_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'

/*
 * Param Group Type Values
 */ 
#define ENUM_PARAM_GROUP_TYPE_UNIT_SEQUENCES = 0x80
#define ENUM_PARAM_GROUP_TYPE_RETURN_BITFIELDS = 0x81

/*
 * Purge Reject Reason Values
 */ 
#define ENUM_PURGE_REJECT_REASON_ADMIN = 'A'
#define ENUM_PURGE_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
#define ENUM_PURGE_REJECT_REASON_SIZE_REDUCTION_DUE_TO_SWP_RESTATEMENT = 'E'
#define ENUM_PURGE_REJECT_REASON_FAILED_TO_QUOTE = 'F'
#define ENUM_PURGE_REJECT_REASON_HALTED = 'H'
#define ENUM_PURGE_REJECT_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_PURGE_REJECT_REASON_TOO_LATE_TO_CANCEL = 'J'
#define ENUM_PURGE_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED = 'K'
#define ENUM_PURGE_REJECT_REASON_ORDER_WOULD_LOCK_OR_CROSS_NBBO = 'L'
#define ENUM_PURGE_REJECT_REASON_ORDER_SIZE_EXCEEDED = 'M'
#define ENUM_PURGE_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST = 'N'
#define ENUM_PURGE_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER = 'O'
#define ENUM_PURGE_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL = 'P'
#define ENUM_PURGE_REJECT_REASON_WAITING_FOR_FIRST_TRADE = 'Q'
#define ENUM_PURGE_REJECT_REASON_ROUTING_UNAVAILABLE = 'R'
#define ENUM_PURGE_REJECT_REASON_SHORT_SALE_PRICE_VIOLATION = 'S'
#define ENUM_PURGE_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO = 'T'
#define ENUM_PURGE_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_PURGE_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_PURGE_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE = 'W'
#define ENUM_PURGE_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_PURGE_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_PURGE_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_PURGE_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_PURGE_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_PURGE_REJECT_REASON_RESERVE_RELOAD = 'r'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_PURGE_REJECT_REASON_LIMIT_UP_LIMIT_DOWN = 'u'
#define ENUM_PURGE_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE = 'w'
#define ENUM_PURGE_REJECT_REASON_CROSSED_MARKET = 'x'
#define ENUM_PURGE_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'

/*
 * Restatement Reason Values
 */ 
#define ENUM_RESTATEMENT_REASON_CBOE_MARKET_CLOSE = 'C'
#define ENUM_RESTATEMENT_REASON_RELOAD = 'L'
#define ENUM_RESTATEMENT_REASON_PEG_OR_PRICE_SLIDING_REPRICE = 'P'
#define ENUM_RESTATEMENT_REASON_LIQUIDITY_UPDATED = 'Q'
#define ENUM_RESTATEMENT_REASON_REROUTE = 'R'
#define ENUM_RESTATEMENT_REASON_REDUCTION_OF_QUANTITY = 'S'
#define ENUM_RESTATEMENT_REASON_WASH = 'W'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY = '1'
#define ENUM_SIDE_SELL = '2'
#define ENUM_SIDE_SHORT_SELL = '5'
#define ENUM_SIDE_SHORT_SELL_EXEMPT = '5'

/*
 * Sub Liquidity Indicator Values
 */ 
#define ENUM_SUB_LIQUIDITY_INDICATOR_TRADE_ADDED_RPI_LIQUIDITY = 'E'
#define ENUM_SUB_LIQUIDITY_INDICATOR_TRADE_ADDED_HIDDEN_LIQUIDITY = 'H'
#define ENUM_SUB_LIQUIDITY_INDICATOR_TRADE_ADDED_HIDDEN_LIQUIDITY_THAT_WAS_PRICE_IMPROVED = 'I'
#define ENUM_SUB_LIQUIDITY_INDICATOR_MIDPOINT_PEG = 'm'
#define ENUM_SUB_LIQUIDITY_INDICATOR_EXECUTION_FROM_FIRST_ORDER_TO_JOIN_THE_NBBO = 'J'
#define ENUM_SUB_LIQUIDITY_INDICATOR_EXECUTION_FROM_FIRST_ORDER_THAT_SET_THE_NBBO = 'S'
#define ENUM_SUB_LIQUIDITY_INDICATOR_VISISBLE_LIQUIDITY_ADD_TRADE_THAT_WAS_PRICE_IMPROVED = 'V'
#define ENUM_SUB_LIQUIDITY_INDICATOR_EXECUTION_FROM_ORDER_THAT_SET_THE_NBBO = 'S'
#define ENUM_SUB_LIQUIDITY_INDICATOR_VISIBLE_LIQUIDITY_ADD_TRADE_THAT_WAS_PRICE_IMPROVED = 'V'
#define ENUM_SUB_LIQUIDITY_INDICATOR_MIDPOINT_PEG_ORDER = 'm'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY = '0'
#define ENUM_TIME_IN_FORCE_GTC = '1'
#define ENUM_TIME_IN_FORCE_AT_THE_OPEN = '2'
#define ENUM_TIME_IN_FORCE_IOC = '3'
#define ENUM_TIME_IN_FORCE_FOK = '4'
#define ENUM_TIME_IN_FORCE_GTX = '5'
#define ENUM_TIME_IN_FORCE_GTD = '6'
#define ENUM_TIME_IN_FORCE_AT_THE_CLOSE = '7'
#define ENUM_TIME_IN_FORCE_PRE = 'E'
#define ENUM_TIME_IN_FORCE_RHO = 'R'
#define ENUM_TIME_IN_FORCE_PTD = 'T'
#define ENUM_TIME_IN_FORCE_PTX = 'X'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Bitfield: Purge Rejected Byte 17
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte17T;

/*
 * Bitfield: Purge Rejected Byte 16
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte16T;

/*
 * Bitfield: Purge Rejected Byte 15
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedMassCancelIdExists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte15T;

/*
 * Bitfield: Purge Rejected Byte 14
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte14T;

/*
 * Bitfield: Purge Rejected Byte 13
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte13T;

/*
 * Bitfield: Purge Rejected Byte 12
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte12T;

/*
 * Bitfield: Purge Rejected Byte 11
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte11T;

/*
 * Bitfield: Purge Rejected Byte 10
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte10T;

/*
 * Bitfield: Purge Rejected Byte 9
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte9T;

/*
 * Bitfield: Purge Rejected Byte 8
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte8T;

/*
 * Bitfield: Purge Rejected Byte 7
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedSubLiquidityIndicatorExists : 1;
} PurgeRejectedByte7T;

/*
 * Bitfield: Purge Rejected Byte 6
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte6T;

/*
 * Bitfield: Purge Rejected Byte 5
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte5T;

/*
 * Bitfield: Purge Rejected Byte 4
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte4T;

/*
 * Bitfield: Purge Rejected Byte 3
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte3T;

/*
 * Bitfield: Purge Rejected Byte 2
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte2T;

/*
 * Bitfield: Purge Rejected Byte 1
 */ 
typedef struct {
    unsigned char PurgeRejectedReservedBit8Exists : 1;
    unsigned char PurgeRejectedReservedBit7Exists : 1;
    unsigned char PurgeRejectedReservedBit6Exists : 1;
    unsigned char PurgeRejectedReservedBit5Exists : 1;
    unsigned char PurgeRejectedReservedBit4Exists : 1;
    unsigned char PurgeRejectedReservedBit3Exists : 1;
    unsigned char PurgeRejectedReservedBit2Exists : 1;
    unsigned char PurgeRejectedReservedBit1Exists : 1;
} PurgeRejectedByte1T;

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
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte17T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 16
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte16T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 15
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte15T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 14
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte14T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 13
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte13T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 12
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte12T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 11
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte11T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 10
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte10T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 9
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte9T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 8
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte8T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 7
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectSubLiquidityIndicatorExists : 1;
} TradeCancelOrCorrectByte7T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 6
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte6T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 5
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte5T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 4
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte4T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 3
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte3T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 2
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectCapacityExists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectSymbolSfxExists : 1;
    unsigned char TradeCancelOrCorrectSymbolExists : 1;
} TradeCancelOrCorrectByte2T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 1
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit6Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit4Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
} TradeCancelOrCorrectByte1T;

/*
 * Bitfield: Order Execution Byte 17
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte17T;

/*
 * Bitfield: Order Execution Byte 16
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte16T;

/*
 * Bitfield: Order Execution Byte 15
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte15T;

/*
 * Bitfield: Order Execution Byte 14
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte14T;

/*
 * Bitfield: Order Execution Byte 13
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte13T;

/*
 * Bitfield: Order Execution Byte 12
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte12T;

/*
 * Bitfield: Order Execution Byte 11
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte11T;

/*
 * Bitfield: Order Execution Byte 10
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte10T;

/*
 * Bitfield: Order Execution Byte 9
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte9T;

/*
 * Bitfield: Order Execution Byte 8
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionExDestinationExists : 1;
    unsigned char OrderExecutionRouteDeliveryMethodExists : 1;
    unsigned char OrderExecutionRoutStrategyExists : 1;
    unsigned char OrderExecutionRoutingInstExists : 1;
    unsigned char OrderExecutionStopPxExists : 1;
    unsigned char OrderExecutionEchoTextExists : 1;
    unsigned char OrderExecutionFeeCodeExists : 1;
} OrderExecutionByte8T;

/*
 * Bitfield: Order Execution Byte 7
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte7T;

/*
 * Bitfield: Order Execution Byte 6
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionExtExecInstExists : 1;
    unsigned char OrderExecutionAttributedQuoteExists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte6T;

/*
 * Bitfield: Order Execution Byte 5
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte5T;

/*
 * Bitfield: Order Execution Byte 4
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte4T;

/*
 * Bitfield: Order Execution Byte 3
 */ 
typedef struct {
    unsigned char OrderExecutionPreventMatchExists : 1;
    unsigned char OrderExecutionOrderQtyExists : 1;
    unsigned char OrderExecutionDiscretionAmountExists : 1;
    unsigned char OrderExecutionMaxFloorExists : 1;
    unsigned char OrderExecutionDisplayIndicatorExists : 1;
    unsigned char OrderExecutionClearingAccountExists : 1;
    unsigned char OrderExecutionClearingFirmExists : 1;
    unsigned char OrderExecutionAccountExists : 1;
} OrderExecutionByte3T;

/*
 * Bitfield: Order Execution Byte 2
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionCapacityExists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionSymbolSfxExists : 1;
    unsigned char OrderExecutionSymbolExists : 1;
} OrderExecutionByte2T;

/*
 * Bitfield: Order Execution Byte 1
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionMinQtyExists : 1;
    unsigned char OrderExecutionTimeInForceExists : 1;
    unsigned char OrderExecutionOrdTypeExists : 1;
    unsigned char OrderExecutionExecInstExists : 1;
    unsigned char OrderExecutionPriceExists : 1;
    unsigned char OrderExecutionPegDifferenceExists : 1;
    unsigned char OrderExecutionSideExists : 1;
} OrderExecutionByte1T;

/*
 * Bitfield: Cancel Rejected Byte 17
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte17T;

/*
 * Bitfield: Cancel Rejected Byte 16
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte16T;

/*
 * Bitfield: Cancel Rejected Byte 15
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte15T;

/*
 * Bitfield: Cancel Rejected Byte 14
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte14T;

/*
 * Bitfield: Cancel Rejected Byte 13
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte13T;

/*
 * Bitfield: Cancel Rejected Byte 12
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte12T;

/*
 * Bitfield: Cancel Rejected Byte 11
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte11T;

/*
 * Bitfield: Cancel Rejected Byte 10
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte10T;

/*
 * Bitfield: Cancel Rejected Byte 9
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte9T;

/*
 * Bitfield: Cancel Rejected Byte 8
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedRoutStrategyExists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedStopPxExists : 1;
    unsigned char CancelRejectedEchoTextExists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte8T;

/*
 * Bitfield: Cancel Rejected Byte 7
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte7T;

/*
 * Bitfield: Cancel Rejected Byte 6
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte6T;

/*
 * Bitfield: Cancel Rejected Byte 5
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte5T;

/*
 * Bitfield: Cancel Rejected Byte 4
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte4T;

/*
 * Bitfield: Cancel Rejected Byte 3
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedReservedBit1Exists : 1;
} CancelRejectedByte3T;

/*
 * Bitfield: Cancel Rejected Byte 2
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedCapacityExists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedSymbolSfxExists : 1;
    unsigned char CancelRejectedSymbolExists : 1;
} CancelRejectedByte2T;

/*
 * Bitfield: Cancel Rejected Byte 1
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedMinQtyExists : 1;
    unsigned char CancelRejectedTimeInForceExists : 1;
    unsigned char CancelRejectedOrdTypeExists : 1;
    unsigned char CancelRejectedExecInstExists : 1;
    unsigned char CancelRejectedPriceExists : 1;
    unsigned char CancelRejectedPegDifferenceExists : 1;
    unsigned char CancelRejectedSideExists : 1;
} CancelRejectedByte1T;

/*
 * Bitfield: Order Cancelled Byte 17
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte17T;

/*
 * Bitfield: Order Cancelled Byte 16
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledMassCancelledExists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte16T;

/*
 * Bitfield: Order Cancelled Byte 15
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledMassCancelledExists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte15T;

/*
 * Bitfield: Order Cancelled Byte 14
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte14T;

/*
 * Bitfield: Order Cancelled Byte 13
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte13T;

/*
 * Bitfield: Order Cancelled Byte 12
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte12T;

/*
 * Bitfield: Order Cancelled Byte 11
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte11T;

/*
 * Bitfield: Order Cancelled Byte 10
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte10T;

/*
 * Bitfield: Order Cancelled Byte 9
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte9T;

/*
 * Bitfield: Order Cancelled Byte 8
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledExDestinationExists : 1;
    unsigned char OrderCancelledRouteDeliveryMethodExists : 1;
    unsigned char OrderCancelledRoutStrategyExists : 1;
    unsigned char OrderCancelledRoutingInstExists : 1;
    unsigned char OrderCancelledStopPxExists : 1;
    unsigned char OrderCancelledEchoTextExists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte8T;

/*
 * Bitfield: Order Cancelled Byte 7
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte7T;

/*
 * Bitfield: Order Cancelled Byte 6
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledExtExecInstExists : 1;
    unsigned char OrderCancelledAttributedQuoteExists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledSecondaryOrderIdExists : 1;
} OrderCancelledByte6T;

/*
 * Bitfield: Order Cancelled Byte 5
 */ 
typedef struct {
    unsigned char OrderCancelledExpireTimeExists : 1;
    unsigned char OrderCancelledBaseLiquidityIndicatorExists : 1;
    unsigned char OrderCancelledWorkingPriceExists : 1;
    unsigned char OrderCancelledDisplayPriceExists : 1;
    unsigned char OrderCancelledLastPxExists : 1;
    unsigned char OrderCancelledLastSharesExists : 1;
    unsigned char OrderCancelledLeavesQtyExists : 1;
    unsigned char OrderCancelledOrigClOrdIdExists : 1;
} OrderCancelledByte5T;

/*
 * Bitfield: Order Cancelled Byte 4
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte4T;

/*
 * Bitfield: Order Cancelled Byte 3
 */ 
typedef struct {
    unsigned char OrderCancelledPreventMatchExists : 1;
    unsigned char OrderCancelledOrderQtyExists : 1;
    unsigned char OrderCancelledDiscretionAmountExists : 1;
    unsigned char OrderCancelledMaxFloorExists : 1;
    unsigned char OrderCancelledDisplayIndicatorExists : 1;
    unsigned char OrderCancelledClearingAccountExists : 1;
    unsigned char OrderCancelledClearingFirmExists : 1;
    unsigned char OrderCancelledAccountExists : 1;
} OrderCancelledByte3T;

/*
 * Bitfield: Order Cancelled Byte 2
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledCapacityExists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledSymbolSfxExists : 1;
    unsigned char OrderCancelledSymbolExists : 1;
} OrderCancelledByte2T;

/*
 * Bitfield: Order Cancelled Byte 1
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledMinQtyExists : 1;
    unsigned char OrderCancelledTimeInForceExists : 1;
    unsigned char OrderCancelledOrdTypeExists : 1;
    unsigned char OrderCancelledExecInstExists : 1;
    unsigned char OrderCancelledPriceExists : 1;
    unsigned char OrderCancelledPegDifferenceExists : 1;
    unsigned char OrderCancelledSideExists : 1;
} OrderCancelledByte1T;

/*
 * Bitfield: User Modify Rejected Byte 17
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte17T;

/*
 * Bitfield: User Modify Rejected Byte 16
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte16T;

/*
 * Bitfield: User Modify Rejected Byte 15
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte15T;

/*
 * Bitfield: User Modify Rejected Byte 14
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte14T;

/*
 * Bitfield: User Modify Rejected Byte 13
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte13T;

/*
 * Bitfield: User Modify Rejected Byte 12
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte12T;

/*
 * Bitfield: User Modify Rejected Byte 11
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte11T;

/*
 * Bitfield: User Modify Rejected Byte 10
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte10T;

/*
 * Bitfield: User Modify Rejected Byte 9
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte9T;

/*
 * Bitfield: User Modify Rejected Byte 8
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte8T;

/*
 * Bitfield: User Modify Rejected Byte 7
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedSubLiquidityIndicatorExists : 1;
} UserModifyRejectedByte7T;

/*
 * Bitfield: User Modify Rejected Byte 6
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte6T;

/*
 * Bitfield: User Modify Rejected Byte 5
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte5T;

/*
 * Bitfield: User Modify Rejected Byte 4
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte4T;

/*
 * Bitfield: User Modify Rejected Byte 3
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte3T;

/*
 * Bitfield: User Modify Rejected Byte 2
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte2T;

/*
 * Bitfield: User Modify Rejected Byte 1
 */ 
typedef struct {
    unsigned char UserModifyRejectedReservedBit8Exists : 1;
    unsigned char UserModifyRejectedReservedBit7Exists : 1;
    unsigned char UserModifyRejectedReservedBit6Exists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedReservedBit4Exists : 1;
    unsigned char UserModifyRejectedReservedBit3Exists : 1;
    unsigned char UserModifyRejectedReservedBit2Exists : 1;
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
} UserModifyRejectedByte1T;

/*
 * Bitfield: Order Restated Byte 17
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte17T;

/*
 * Bitfield: Order Restated Byte 16
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedMassCancelledExists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte16T;

/*
 * Bitfield: Order Restated Byte 15
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedMassCancelledExists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte15T;

/*
 * Bitfield: Order Restated Byte 14
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte14T;

/*
 * Bitfield: Order Restated Byte 13
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte13T;

/*
 * Bitfield: Order Restated Byte 12
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte12T;

/*
 * Bitfield: Order Restated Byte 11
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte11T;

/*
 * Bitfield: Order Restated Byte 10
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte10T;

/*
 * Bitfield: Order Restated Byte 9
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte9T;

/*
 * Bitfield: Order Restated Byte 8
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedExDestinationExists : 1;
    unsigned char OrderRestatedRouteDeliveryMethodExists : 1;
    unsigned char OrderRestatedRoutStrategyExists : 1;
    unsigned char OrderRestatedRoutingInstExists : 1;
    unsigned char OrderRestatedStopPxExists : 1;
    unsigned char OrderRestatedEchoTextExists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte8T;

/*
 * Bitfield: Order Restated Byte 7
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte7T;

/*
 * Bitfield: Order Restated Byte 6
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedExtExecInstExists : 1;
    unsigned char OrderRestatedAttributedQuoteExists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedSecondaryOrderIdExists : 1;
} OrderRestatedByte6T;

/*
 * Bitfield: Order Restated Byte 5
 */ 
typedef struct {
    unsigned char OrderRestatedExpireTimeExists : 1;
    unsigned char OrderRestatedBaseLiquidityIndicatorExists : 1;
    unsigned char OrderRestatedWorkingPriceExists : 1;
    unsigned char OrderRestatedDisplayPriceExists : 1;
    unsigned char OrderRestatedLastPxExists : 1;
    unsigned char OrderRestatedLastSharesExists : 1;
    unsigned char OrderRestatedLeavesQtyExists : 1;
    unsigned char OrderRestatedOrigClOrdIdExists : 1;
} OrderRestatedByte5T;

/*
 * Bitfield: Order Restated Byte 4
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte4T;

/*
 * Bitfield: Order Restated Byte 3
 */ 
typedef struct {
    unsigned char OrderRestatedPreventMatchExists : 1;
    unsigned char OrderRestatedOrderQtyExists : 1;
    unsigned char OrderRestatedDiscretionAmountExists : 1;
    unsigned char OrderRestatedMaxFloorExists : 1;
    unsigned char OrderRestatedDisplayIndicatorExists : 1;
    unsigned char OrderRestatedClearingAccountExists : 1;
    unsigned char OrderRestatedClearingFirmExists : 1;
    unsigned char OrderRestatedAccountExists : 1;
} OrderRestatedByte3T;

/*
 * Bitfield: Order Restated Byte 2
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedCapacityExists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedSymbolSfxExists : 1;
    unsigned char OrderRestatedSymbolExists : 1;
} OrderRestatedByte2T;

/*
 * Bitfield: Order Restated Byte 1
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedMinQtyExists : 1;
    unsigned char OrderRestatedTimeInForceExists : 1;
    unsigned char OrderRestatedOrdTypeExists : 1;
    unsigned char OrderRestatedExecInstExists : 1;
    unsigned char OrderRestatedPriceExists : 1;
    unsigned char OrderRestatedPegDifferenceExists : 1;
    unsigned char OrderRestatedSideExists : 1;
} OrderRestatedByte1T;

/*
 * Bitfield: Order Modified Byte 17
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte17T;

/*
 * Bitfield: Order Modified Byte 16
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedMassCancelledExists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte16T;

/*
 * Bitfield: Order Modified Byte 15
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedMassCancelledExists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte15T;

/*
 * Bitfield: Order Modified Byte 14
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte14T;

/*
 * Bitfield: Order Modified Byte 13
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte13T;

/*
 * Bitfield: Order Modified Byte 12
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte12T;

/*
 * Bitfield: Order Modified Byte 11
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte11T;

/*
 * Bitfield: Order Modified Byte 10
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte10T;

/*
 * Bitfield: Order Modified Byte 9
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte9T;

/*
 * Bitfield: Order Modified Byte 8
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedExDestinationExists : 1;
    unsigned char OrderModifiedRouteDeliveryMethodExists : 1;
    unsigned char OrderModifiedRoutStrategyExists : 1;
    unsigned char OrderModifiedRoutingInstExists : 1;
    unsigned char OrderModifiedStopPxExists : 1;
    unsigned char OrderModifiedEchoTextExists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte8T;

/*
 * Bitfield: Order Modified Byte 7
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte7T;

/*
 * Bitfield: Order Modified Byte 6
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedExtExecInstExists : 1;
    unsigned char OrderModifiedAttributedQuoteExists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedSecondaryOrderIdExists : 1;
} OrderModifiedByte6T;

/*
 * Bitfield: Order Modified Byte 5
 */ 
typedef struct {
    unsigned char OrderModifiedExpireTimeExists : 1;
    unsigned char OrderModifiedBaseLiquidityIndicatorExists : 1;
    unsigned char OrderModifiedWorkingPriceExists : 1;
    unsigned char OrderModifiedDisplayPriceExists : 1;
    unsigned char OrderModifiedLastPxExists : 1;
    unsigned char OrderModifiedLastSharesExists : 1;
    unsigned char OrderModifiedLeavesQtyExists : 1;
    unsigned char OrderModifiedOrigClOrdIdExists : 1;
} OrderModifiedByte5T;

/*
 * Bitfield: Order Modified Byte 4
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte4T;

/*
 * Bitfield: Order Modified Byte 3
 */ 
typedef struct {
    unsigned char OrderModifiedPreventMatchExists : 1;
    unsigned char OrderModifiedOrderQtyExists : 1;
    unsigned char OrderModifiedDiscretionAmountExists : 1;
    unsigned char OrderModifiedMaxFloorExists : 1;
    unsigned char OrderModifiedDisplayIndicatorExists : 1;
    unsigned char OrderModifiedClearingAccountExists : 1;
    unsigned char OrderModifiedClearingFirmExists : 1;
    unsigned char OrderModifiedAccountExists : 1;
} OrderModifiedByte3T;

/*
 * Bitfield: Order Modified Byte 2
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedCapacityExists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedSymbolSfxExists : 1;
    unsigned char OrderModifiedSymbolExists : 1;
} OrderModifiedByte2T;

/*
 * Bitfield: Order Modified Byte 1
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedMinQtyExists : 1;
    unsigned char OrderModifiedTimeInForceExists : 1;
    unsigned char OrderModifiedOrdTypeExists : 1;
    unsigned char OrderModifiedExecInstExists : 1;
    unsigned char OrderModifiedPriceExists : 1;
    unsigned char OrderModifiedPegDifferenceExists : 1;
    unsigned char OrderModifiedSideExists : 1;
} OrderModifiedByte1T;

/*
 * Bitfield: Order Rejected Byte 17
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte17T;

/*
 * Bitfield: Order Rejected Byte 16
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte16T;

/*
 * Bitfield: Order Rejected Byte 15
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte15T;

/*
 * Bitfield: Order Rejected Byte 14
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte14T;

/*
 * Bitfield: Order Rejected Byte 13
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte13T;

/*
 * Bitfield: Order Rejected Byte 12
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte12T;

/*
 * Bitfield: Order Rejected Byte 11
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte11T;

/*
 * Bitfield: Order Rejected Byte 10
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte10T;

/*
 * Bitfield: Order Rejected Byte 9
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte9T;

/*
 * Bitfield: Order Rejected Byte 8
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedExDestinationExists : 1;
    unsigned char OrderRejectedRouteDeliveryMethodExists : 1;
    unsigned char OrderRejectedRoutStrategyExists : 1;
    unsigned char OrderRejectedRoutingInstExists : 1;
    unsigned char OrderRejectedStopPxExists : 1;
    unsigned char OrderRejectedEchoTextExists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte8T;

/*
 * Bitfield: Order Rejected Byte 7
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte7T;

/*
 * Bitfield: Order Rejected Byte 6
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedExtExecInstExists : 1;
    unsigned char OrderRejectedAttributedQuoteExists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedSecondaryOrderIdExists : 1;
} OrderRejectedByte6T;

/*
 * Bitfield: Order Rejected Byte 5
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte5T;

/*
 * Bitfield: Order Rejected Byte 4
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte4T;

/*
 * Bitfield: Order Rejected Byte 3
 */ 
typedef struct {
    unsigned char OrderRejectedPreventMatchExists : 1;
    unsigned char OrderRejectedOrderQtyExists : 1;
    unsigned char OrderRejectedDiscretionAmountExists : 1;
    unsigned char OrderRejectedMaxFloorExists : 1;
    unsigned char OrderRejectedDisplayIndicatorExists : 1;
    unsigned char OrderRejectedClearingAccountExists : 1;
    unsigned char OrderRejectedClearingFirmExists : 1;
    unsigned char OrderRejectedAccountExists : 1;
} OrderRejectedByte3T;

/*
 * Bitfield: Order Rejected Byte 2
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedCapacityExists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedSymbolSfxExists : 1;
    unsigned char OrderRejectedSymbolExists : 1;
} OrderRejectedByte2T;

/*
 * Bitfield: Order Rejected Byte 1
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedMinQtyExists : 1;
    unsigned char OrderRejectedTimeInForceExists : 1;
    unsigned char OrderRejectedOrdTypeExists : 1;
    unsigned char OrderRejectedExecInstExists : 1;
    unsigned char OrderRejectedPriceExists : 1;
    unsigned char OrderRejectedPegDifferenceExists : 1;
    unsigned char OrderRejectedSideExists : 1;
} OrderRejectedByte1T;

/*
 * Bitfield: Order Acknowledgment Byte 17
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte17T;

/*
 * Bitfield: Order Acknowledgment Byte 16
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte16T;

/*
 * Bitfield: Order Acknowledgment Byte 15
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentMassCancelledExists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte15T;

/*
 * Bitfield: Order Acknowledgment Byte 14
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte14T;

/*
 * Bitfield: Order Acknowledgment Byte 13
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte13T;

/*
 * Bitfield: Order Acknowledgment Byte 12
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte12T;

/*
 * Bitfield: Order Acknowledgment Byte 11
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte11T;

/*
 * Bitfield: Order Acknowledgment Byte 10
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte10T;

/*
 * Bitfield: Order Acknowledgment Byte 9
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte9T;

/*
 * Bitfield: Order Acknowledgment Byte 8
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentExDestinationExists : 1;
    unsigned char OrderAcknowledgmentRouteDeliveryMethodExists : 1;
    unsigned char OrderAcknowledgmentRoutStrategyExists : 1;
    unsigned char OrderAcknowledgmentRoutingInstExists : 1;
    unsigned char OrderAcknowledgmentStopPxExists : 1;
    unsigned char OrderAcknowledgmentEchoTextExists : 1;
    unsigned char OrderAcknowledgmentFeeCodeExists : 1;
} OrderAcknowledgmentByte8T;

/*
 * Bitfield: Order Acknowledgment Byte 7
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentSubLiquidityIndicatorExists : 1;
} OrderAcknowledgmentByte7T;

/*
 * Bitfield: Order Acknowledgment Byte 6
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentExtExecInstExists : 1;
    unsigned char OrderAcknowledgmentAttributedQuoteExists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentSecondaryOrderIdExists : 1;
} OrderAcknowledgmentByte6T;

/*
 * Bitfield: Order Acknowledgment Byte 5
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentExpireTimeExists : 1;
    unsigned char OrderAcknowledgmentBaseLiquidityIndicatorExists : 1;
    unsigned char OrderAcknowledgmentWorkingPriceExists : 1;
    unsigned char OrderAcknowledgmentDisplayPriceExists : 1;
    unsigned char OrderAcknowledgmentLastPxExists : 1;
    unsigned char OrderAcknowledgmentLastSharesExists : 1;
    unsigned char OrderAcknowledgmentLeavesQtyExists : 1;
    unsigned char OrderAcknowledgmentOrigClOrdIdExists : 1;
} OrderAcknowledgmentByte5T;

/*
 * Bitfield: Order Acknowledgment Byte 4
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte4T;

/*
 * Bitfield: Order Acknowledgment Byte 3
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentPreventMatchExists : 1;
    unsigned char OrderAcknowledgmentOrderQtyExists : 1;
    unsigned char OrderAcknowledgmentDiscretionAmountExists : 1;
    unsigned char OrderAcknowledgmentMaxFloorExists : 1;
    unsigned char OrderAcknowledgmentDisplayIndicatorExists : 1;
    unsigned char OrderAcknowledgmentClearingAccountExists : 1;
    unsigned char OrderAcknowledgmentClearingFirmExists : 1;
    unsigned char OrderAcknowledgmentAccountExists : 1;
} OrderAcknowledgmentByte3T;

/*
 * Bitfield: Order Acknowledgment Byte 2
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentCapacityExists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentSymbolSfxExists : 1;
    unsigned char OrderAcknowledgmentSymbolExists : 1;
} OrderAcknowledgmentByte2T;

/*
 * Bitfield: Order Acknowledgment Byte 1
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentMinQtyExists : 1;
    unsigned char OrderAcknowledgmentTimeInForceExists : 1;
    unsigned char OrderAcknowledgmentOrdTypeExists : 1;
    unsigned char OrderAcknowledgmentExecInstExists : 1;
    unsigned char OrderAcknowledgmentPriceExists : 1;
    unsigned char OrderAcknowledgmentPegDifferenceExists : 1;
    unsigned char OrderAcknowledgmentSideExists : 1;
} OrderAcknowledgmentByte1T;

/*
 * Bitfield: Purge Order Byte 2
 */ 
typedef struct {
    unsigned char PurgeOrderReservedBit8Exists : 1;
    unsigned char PurgeOrderReservedBit7Exists : 1;
    unsigned char PurgeOrderReservedBit6Exists : 1;
    unsigned char PurgeOrderReservedBit5Exists : 1;
    unsigned char PurgeOrderReservedBit4Exists : 1;
    unsigned char PurgeOrderReservedBit3Exists : 1;
    unsigned char PurgeOrderSymbolSfxExists : 1;
    unsigned char PurgeOrderSymbolExists : 1;
} PurgeOrderByte2T;

/*
 * Bitfield: Purge Order Byte 1
 */ 
typedef struct {
    unsigned char PurgeOrderReservedBit8Exists : 1;
    unsigned char PurgeOrderReservedBit7Exists : 1;
    unsigned char PurgeOrderReservedBit6Exists : 1;
    unsigned char PurgeOrderMassCancelIdExists : 1;
    unsigned char PurgeOrderReservedBit4Exists : 1;
    unsigned char PurgeOrderMassCancelInstExists : 1;
    unsigned char PurgeOrderReservedBit2Exists : 1;
    unsigned char PurgeOrderClearingFirmExists : 1;
} PurgeOrderByte1T;

/*
 * Bitfield: Modify Order Byte 2
 */ 
typedef struct {
    unsigned char ModifyOrderReservedBit8Exists : 1;
    unsigned char ModifyOrderReservedBit7Exists : 1;
    unsigned char ModifyOrderReservedBit6Exists : 1;
    unsigned char ModifyOrderReservedBit5Exists : 1;
    unsigned char ModifyOrderReservedBit4Exists : 1;
    unsigned char ModifyOrderReservedBit3Exists : 1;
    unsigned char ModifyOrderStopPxExists : 1;
    unsigned char ModifyOrderMaxFloorExists : 1;
} ModifyOrderByte2T;

/*
 * Bitfield: Modify Order Byte 1
 */ 
typedef struct {
    unsigned char ModifyOrderSideExists : 1;
    unsigned char ModifyOrderExecInstExists : 1;
    unsigned char ModifyOrderCancelOrigOnRejectExists : 1;
    unsigned char ModifyOrderOrdTypeExists : 1;
    unsigned char ModifyOrderPriceExists : 1;
    unsigned char ModifyOrderOrderQtyExists : 1;
    unsigned char ModifyOrderReservedBit2Exists : 1;
    unsigned char ModifyOrderClearingFirmExists : 1;
} ModifyOrderByte1T;

/*
 * Bitfield: Cancel Order Byte 2
 */ 
typedef struct {
    unsigned char CancelOrderReservedBit8Exists : 1;
    unsigned char CancelOrderReservedBit7Exists : 1;
    unsigned char CancelOrderReservedBit6Exists : 1;
    unsigned char CancelOrderReservedBit5Exists : 1;
    unsigned char CancelOrderReservedBit4Exists : 1;
    unsigned char CancelOrderReservedBit3Exists : 1;
    unsigned char CancelOrderReservedBit2Exists : 1;
    unsigned char CancelOrderReservedBit1Exists : 1;
} CancelOrderByte2T;

/*
 * Bitfield: Cancel Order Byte 1
 */ 
typedef struct {
    unsigned char CancelOrderReservedBit8Exists : 1;
    unsigned char CancelOrderReservedBit7Exists : 1;
    unsigned char CancelOrderReservedBit6Exists : 1;
    unsigned char CancelOrderReservedBit5Exists : 1;
    unsigned char CancelOrderReservedBit4Exists : 1;
    unsigned char CancelOrderReservedBit3Exists : 1;
    unsigned char CancelOrderReservedBit2Exists : 1;
    unsigned char CancelOrderClearingFirmExists : 1;
} CancelOrderByte1T;

/*
 * Bitfield: New Order Byte 7
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderReservedBit7Exists : 1;
    unsigned char NewOrderReservedBit6Exists : 1;
    unsigned char NewOrderReservedBit5Exists : 1;
    unsigned char NewOrderReservedBit4Exists : 1;
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderCustomGroupIdExists : 1;
    unsigned char NewOrderReservedBit1Exists : 1;
} NewOrderByte7T;

/*
 * Bitfield: New Order Byte 6
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderReservedBit7Exists : 1;
    unsigned char NewOrderEchoTextExists : 1;
    unsigned char NewOrderExDestinationExists : 1;
    unsigned char NewOrderRouteDeliveryMethodExists : 1;
    unsigned char NewOrderRoutStrategyExists : 1;
    unsigned char NewOrderStopPxExists : 1;
    unsigned char NewOrderDisplayRangeExists : 1;
} NewOrderByte6T;

/*
 * Bitfield: New Order Byte 5
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderReservedBit7Exists : 1;
    unsigned char NewOrderReservedBit6Exists : 1;
    unsigned char NewOrderReservedBit5Exists : 1;
    unsigned char NewOrderExtExecInstExists : 1;
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderAttributedQuoteExists : 1;
    unsigned char NewOrderReservedBit1Exists : 1;
} NewOrderByte5T;

/*
 * Bitfield: New Order Byte 4
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderReservedBit7Exists : 1;
    unsigned char NewOrderReservedBit6Exists : 1;
    unsigned char NewOrderReservedBit5Exists : 1;
    unsigned char NewOrderRiskResetExists : 1;
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderReservedBit2Exists : 1;
    unsigned char NewOrderReservedBit1Exists : 1;
} NewOrderByte4T;

/*
 * Bitfield: New Order Byte 3
 */ 
typedef struct {
    unsigned char NewOrderExpireTimeExists : 1;
    unsigned char NewOrderLocateReqdExists : 1;
    unsigned char NewOrderPreventMatchExists : 1;
    unsigned char NewOrderPegDifferenceExists : 1;
    unsigned char NewOrderDiscretionAmountExists : 1;
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderDisplayIndicatorExists : 1;
    unsigned char NewOrderAccountExists : 1;
} NewOrderByte3T;

/*
 * Bitfield: New Order Byte 2
 */ 
typedef struct {
    unsigned char NewOrderRoutingInstExists : 1;
    unsigned char NewOrderCapacityExists : 1;
    unsigned char NewOrderReservedBit6Exists : 1;
    unsigned char NewOrderReservedBit5Exists : 1;
    unsigned char NewOrderReservedBit4Exists : 1;
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderSymbolSfxExists : 1;
    unsigned char NewOrderSymbolExists : 1;
} NewOrderByte2T;

/*
 * Bitfield: New Order Byte 1
 */ 
typedef struct {
    unsigned char NewOrderMaxFloorExists : 1;
    unsigned char NewOrderMinQtyExists : 1;
    unsigned char NewOrderTimeInForceExists : 1;
    unsigned char NewOrderOrdTypeExists : 1;
    unsigned char NewOrderExecInstExists : 1;
    unsigned char NewOrderPriceExists : 1;
    unsigned char NewOrderClearingAccountExists : 1;
    unsigned char NewOrderClearingFirmExists : 1;
} NewOrderByte1T;

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
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t StartOfMessage;
    uint16_t MessageLength;
    uint8_t MessageType;
    uint8_t MatchingUnit;
    uint32_t SequenceNumber;
} MessageHeaderT;

