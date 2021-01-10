/*******************************************************************************
 * C Structs For Cboe Options Bzx Boe OrderEntry 2.10 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Application Message Type Values
 */ 
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
#define ENUM_ATTRIBUTED_QUOTE_DO_NOT_ATTRIBUTE_FIRM_EXECUTING_BROKER_ID = 'N'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_FIRM_EXECUTING_BROKER_ID = 'Y'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_CLIENT_ID_ONLY = 'C'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_BOTH_CLEARING_FIRM_AND_CLIENT_ID = 'Z'

/*
 * Base Liquidity Indicator Values
 */ 
#define ENUM_BASE_LIQUIDITY_INDICATOR_ADDED_LIQUIDITY = 'A'
#define ENUM_BASE_LIQUIDITY_INDICATOR_REMOVED_LIQUIDITY = 'R'
#define ENUM_BASE_LIQUIDITY_INDICATOR_ROUTED_TO_ANOTHER_MARKET = 'X'
#define ENUM_BASE_LIQUIDITY_INDICATOR_AUCTION_OR_UNCROSSING = 'C'

/*
 * Cancel Orig On Reject Values
 */ 
#define ENUM_CANCEL_ORIG_ON_REJECT_LEAVE_ORIGINAL_ORDER_ALONE = 'N'
#define ENUM_CANCEL_ORIG_ON_REJECT_CANCEL_ORIGINAL_ORDER_IF_MODIFICATION_FAILS = 'Y'

/*
 * Cancel Reason Values
 */ 
#define ENUM_CANCEL_REASON_ADMIN = 'A'
#define ENUM_CANCEL_REASON_DUPLICATE_IDENTIFIER = 'D'
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
#define ENUM_CANCEL_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO = 'T'
#define ENUM_CANCEL_REASON_USER_REQUESTED = 'U'
#define ENUM_CANCEL_REASON_WOULD_WASH = 'V'
#define ENUM_CANCEL_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE = 'W'
#define ENUM_CANCEL_REASON_ORDER_EXPIRED = 'X'
#define ENUM_CANCEL_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_CANCEL_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_CANCEL_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED = 'c'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_CANCEL_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_CANCEL_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_CANCEL_REASON_RESERVE_RELOAD = 'r'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_CANCEL_REASON_WOULD_REMOVE_ON_UNSLIDE = 'w'
#define ENUM_CANCEL_REASON_CROSSED_MARKET = 'x'
#define ENUM_CANCEL_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'
#define ENUM_CANCEL_REASON_SESSION_END = 'z'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL = '+'

/*
 * Cancel Reject Reason Values
 */ 
#define ENUM_CANCEL_REJECT_REASON_ADMIN = 'A'
#define ENUM_CANCEL_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
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
#define ENUM_CANCEL_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO = 'T'
#define ENUM_CANCEL_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_CANCEL_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_CANCEL_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE = 'W'
#define ENUM_CANCEL_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_CANCEL_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_CANCEL_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_CANCEL_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED = 'c'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_CANCEL_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_CANCEL_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_CANCEL_REJECT_REASON_RESERVE_RELOAD = 'r'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_CANCEL_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE = 'w'
#define ENUM_CANCEL_REJECT_REASON_CROSSED_MARKET = 'x'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'
#define ENUM_CANCEL_REJECT_REASON_SESSION_END = 'z'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL = '+'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_CUSTOMER = 'C'
#define ENUM_CAPACITY_MARKET_MAKER = 'M'
#define ENUM_CAPACITY_FIRM = 'F'
#define ENUM_CAPACITY_PROFESSIONAL_CUSTOMER = 'U'
#define ENUM_CAPACITY_NON_CBOE_MARKET_MAKER = 'N'
#define ENUM_CAPACITY_BROKER_DEALER = 'B'
#define ENUM_CAPACITY_JOINT_BACK_OFFICE = 'J'

/*
 * Display Indicator Values
 */ 
#define ENUM_DISPLAY_INDICATOR_DETERMINED_BY_PORT_LEVEL_SETTING = 'V'
#define ENUM_DISPLAY_INDICATOR_PRICE_ADJUST = 'P'
#define ENUM_DISPLAY_INDICATOR_MULTIPLE_PRICE_ADJUST = 'm'
#define ENUM_DISPLAY_INDICATOR_REJECT_THE_ORDER_IF_IT_CANNOT_BE_BOOKED_AND_DISPLAYED_WITHOUT_ADJUSTMENT = 'm'

/*
 * Ex Destination Values
 */ 
#define ENUM_EX_DESTINATION_NYSE_ARCA = 'A'
#define ENUM_EX_DESTINATION_NASDAQ_ISE = 'E'
#define ENUM_EX_DESTINATION_MIAX = 'F'
#define ENUM_EX_DESTINATION_MIAX_PEARL = 'P'
#define ENUM_EX_DESTINATION_MIAX_EMERALD = 'D'
#define ENUM_EX_DESTINATION_EDGX_OPTIONS = 'G'
#define ENUM_EX_DESTINATION_C2 = 'H'
#define ENUM_EX_DESTINATION_BOX = 'K'
#define ENUM_EX_DESTINATION_NASDAQ = 'N'
#define ENUM_EX_DESTINATION_NASDAQ_BX = 'S'
#define ENUM_EX_DESTINATION_NYSE_AMERICAN = 'U'
#define ENUM_EX_DESTINATION_C1 = 'W'
#define ENUM_EX_DESTINATION_NASDAQ_PHLX = 'X'
#define ENUM_EX_DESTINATION_BZX_OPTIONS = 'Z'
#define ENUM_EX_DESTINATION_NASDAQ_GEMX = 'g'

/*
 * Exec Inst Values
 */ 
#define ENUM_EXEC_INST_INTERMARKET_SWEEP = 'f'

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
 * Mass Cancel Lockout Values
 */ 
#define ENUM_MASS_CANCEL_LOCKOUT_NO_LOCKOUT = '0'
#define ENUM_MASS_CANCEL_LOCKOUT_LOCKOUT = '0'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_LOGIN_REQUEST_MESSAGE = 0x37
#define ENUM_MESSAGE_TYPE_LOGOUT_REQUEST_MESSAGE = 0x02
#define ENUM_MESSAGE_TYPE_CLIENT_HEARTBEAT_MESSAGE = 0x03
#define ENUM_MESSAGE_TYPE_LOGIN_RESPONSE_MESSAGE = 0x24
#define ENUM_MESSAGE_TYPE_LOGOUT_MESSAGE = 0x02
#define ENUM_MESSAGE_TYPE_SERVER_HEARTBEAT_MESSAGE = 0x09
#define ENUM_MESSAGE_TYPE_REPLAY_COMPLETE_MESSAGE = 0x13
#define ENUM_MESSAGE_TYPE_NEW_ORDER_MESSAGE = 0x38
#define ENUM_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE = 0x39
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE = 0x3A
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_MESSAGE = 0x55
#define ENUM_MESSAGE_TYPE_SHORT_QUOTE_UPDATE_MESSAGE = 0x59
#define ENUM_MESSAGE_TYPE_PURGE_ORDER_MESSAGE = 0x47
#define ENUM_MESSAGE_TYPE_RISK_RESET_MESSAGE = 0x56
#define ENUM_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT_MESSAGE = 0x25
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_ACKNOWLEDGMENT_MESSAGE = 0x25
#define ENUM_MESSAGE_TYPE_ORDER_REJECTED_MESSAGE = 0x26
#define ENUM_MESSAGE_TYPE_CROSS_ORDER_REJECTED_MESSAGE = 0x44
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_REJECTED_MESSAGE = 0x58
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE = 0x27
#define ENUM_MESSAGE_TYPE_ORDER_RESTATED_MESSAGE = 0x28
#define ENUM_MESSAGE_TYPE_QUOTE_RESTATED_MESSAGE = 0x52
#define ENUM_MESSAGE_TYPE_USER_MODIFY_REJECTED_MESSAGE = 0x29
#define ENUM_MESSAGE_TYPE_ORDER_CANCELLED_MESSAGE = 0x2a
#define ENUM_MESSAGE_TYPE_QUOTE_CANCELLED_MESSAGE = 0x53
#define ENUM_MESSAGE_TYPE_CANCEL_REJECTED_MESSAGE = 0x2B
#define ENUM_MESSAGE_TYPE_QUOTE_EXECUTION_MESSAGE = 0x54
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT_MESSAGE = 0x2D
#define ENUM_MESSAGE_TYPE_PURGE_REJECTED_MESSAGE = 0x48
#define ENUM_MESSAGE_TYPE_RESET_RISK_ACKNOWLEDGMENT_MESSAGE = 0x57
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_ACKNOWLEDGMENT_MESSAGE = 0x36

/*
 * Modify Reject Reason Values
 */ 
#define ENUM_MODIFY_REJECT_REASON_ADMIN = 'A'
#define ENUM_MODIFY_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
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
#define ENUM_MODIFY_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO = 'T'
#define ENUM_MODIFY_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_MODIFY_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_MODIFY_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE = 'W'
#define ENUM_MODIFY_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_MODIFY_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_MODIFY_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_MODIFY_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED = 'c'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_MODIFY_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_MODIFY_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_MODIFY_REJECT_REASON_RESERVE_RELOAD = 'r'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_MODIFY_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE = 'w'
#define ENUM_MODIFY_REJECT_REASON_CROSSED_MARKET = 'x'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'
#define ENUM_MODIFY_REJECT_REASON_SESSION_END = 'z'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL = '+'

/*
 * No Unspecified Unit Replay Values
 */ 
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_FALSE = '0'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TRUE = '1'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TEST = 'T'

/*
 * Open Close Values
 */ 
#define ENUM_OPEN_CLOSE_OPEN = 'O'
#define ENUM_OPEN_CLOSE_CLOSE = 'C'
#define ENUM_OPEN_CLOSE_NONE = 'N'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET = '1'
#define ENUM_ORD_TYPE_LIMIT = '2'
#define ENUM_ORD_TYPE_STOP = '3'
#define ENUM_ORD_TYPE_STOP_LIMIT = '4'

/*
 * Order Reject Reason Values
 */ 
#define ENUM_ORDER_REJECT_REASON_ADMIN = 'A'
#define ENUM_ORDER_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
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
#define ENUM_ORDER_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO = 'T'
#define ENUM_ORDER_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_ORDER_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_ORDER_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE = 'W'
#define ENUM_ORDER_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_ORDER_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_ORDER_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_ORDER_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED = 'c'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_ORDER_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_ORDER_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_ORDER_REJECT_REASON_RESERVE_RELOAD = 'r'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_ORDER_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE = 'w'
#define ENUM_ORDER_REJECT_REASON_CROSSED_MARKET = 'x'
#define ENUM_ORDER_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'
#define ENUM_ORDER_REJECT_REASON_SESSION_END = 'z'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL = '+'

/*
 * Param Group Type Values
 */ 
#define ENUM_PARAM_GROUP_TYPE_UNIT_SEQUENCES = 0x80
#define ENUM_PARAM_GROUP_TYPE_RETURN_BITFIELDS = 0x81

/*
 * Posting Instruction Values
 */ 
#define ENUM_POSTING_INSTRUCTION_POST_ONLY = 'P'
#define ENUM_POSTING_INSTRUCTION_BOOK_ONLY = 'B'
#define ENUM_POSTING_INSTRUCTION_BOOK_ONLY_NO_SLIDE = 'N'
#define ENUM_POSTING_INSTRUCTION_POST_ONLY_NO_SLIDE = 'R'

/*
 * Purge Reject Reason Values
 */ 
#define ENUM_PURGE_REJECT_REASON_ADMIN = 'A'
#define ENUM_PURGE_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
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
#define ENUM_PURGE_REJECT_REASON_FILL_WOULD_TRADE_THROUGH_THE_NBBO = 'T'
#define ENUM_PURGE_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_PURGE_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_PURGE_REJECT_REASON_ADD_LIQUIDITY_ONLY_ORDER_WOULD_REMOVE = 'W'
#define ENUM_PURGE_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_PURGE_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_PURGE_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_PURGE_REJECT_REASON_ONLY_CLOSE_TRANSACTIONS_ACCEPTED = 'c'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_PURGE_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_PURGE_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_PURGE_REJECT_REASON_RESERVE_RELOAD = 'r'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_PURGE_REJECT_REASON_WOULD_REMOVE_ON_UNSLIDE = 'w'
#define ENUM_PURGE_REJECT_REASON_CROSSED_MARKET = 'x'
#define ENUM_PURGE_REJECT_REASON_ORDER_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'
#define ENUM_PURGE_REJECT_REASON_SESSION_END = 'z'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_EFID_GROUP_LEVEL = '+'

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT = '0'
#define ENUM_PUT_OR_CALL_CALL = '1'

/*
 * Quote Liquidity Indicator Values
 */ 
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NORMAL = 'N'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NBBO_SETTER = 'S'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NBBO_JOINER = 'J'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_MARKET_TURNER = 'U'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NO_QUOTE_ON_BOOK = ' '

/*
 * Quote Reject Reason Values
 */ 
#define ENUM_QUOTE_REJECT_REASON_INVALID_EFID = 'C'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_ID = 'D'
#define ENUM_QUOTE_REJECT_REASON_INVALID_SESSION_ELIGIBILITY = 'E'
#define ENUM_QUOTE_REJECT_REASON_NOT_ENABLED_FOR_QUOTES = 'F'
#define ENUM_QUOTE_REJECT_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_QUOTE_REJECT_REASON_INVALID_QUOTE_CNT = 'L'
#define ENUM_QUOTE_REJECT_REASON_SYMBOLS_NOT_ON_SAME_MATCHING_ENGINE = 'M'
#define ENUM_QUOTE_REJECT_REASON_INVALID_POSTING_INSTRUCTION = 'P'
#define ENUM_QUOTE_REJECT_REASON_INVALID_QUOTE_UPDATE_ID = 'Q'
#define ENUM_QUOTE_REJECT_REASON_RISK_ROOT_DOES_NOT_MATCH_ACROSS_QUOTES = 'R'
#define ENUM_QUOTE_REJECT_REASON_SYMBOL_NOT_FOUND = 'S'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_PREVENT_TYPE = 'W'
#define ENUM_QUOTE_REJECT_REASON_ADMIN = 'a'
#define ENUM_QUOTE_REJECT_REASON_INVALID_CAPACITY = 'C'
#define ENUM_QUOTE_REJECT_REASON_CLOSE_ONLY = 'd'
#define ENUM_QUOTE_REJECT_REASON_RISK_MANAGEMENT_EFID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_QUOTE_REJECT_REASON_INVALID_WASH_METHOD = 'm'
#define ENUM_QUOTE_REJECT_REASON_INVALID_OPEN_CLOSE = 'p'
#define ENUM_QUOTE_REJECT_REASON_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 'p'
#define ENUM_QUOTE_REJECT_REASON_INVALID_REMOVE = 'r'
#define ENUM_QUOTE_REJECT_REASON_INVALID_SIDE = 's'
#define ENUM_QUOTE_REJECT_REASON_SYMBOL_RANGE_UNREACHABLE = 'u'
#define ENUM_QUOTE_REJECT_REASON_QUOTE_RECEIVED_BY_CBOE_DURING_REPLAY = 'y'

/*
 * Quote Result Values
 */ 
#define ENUM_QUOTE_RESULT_NEW_QUOTE = 'A'
#define ENUM_QUOTE_RESULT_MODIFIED_LOSS_OF_PRIORITY = 'L'
#define ENUM_QUOTE_RESULT_MODIFIED_RETAINS_PRIORITY = 'R'
#define ENUM_QUOTE_RESULT_NO_CHANGE_MATCHES_EXISTING_QUOTE = 'N'
#define ENUM_QUOTE_RESULT_NEW_QUOTE_BUT_MAY_REMOVE_LIQUIDITY = 'D'
#define ENUM_QUOTE_RESULT_MODIFIED_BUT_MAY_REMOVE_LIQUIDITY = 'd'
#define ENUM_QUOTE_RESULT_USER_CANCELLED = 'U'
#define ENUM_QUOTE_RESULT_ADMIN_REJECTION = 'a'
#define ENUM_QUOTE_RESULT_REJECTED_CANT_POST = 'P'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_FIRM_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_QUOTE_RESULT_REJECTED_SYMBOL_NOT_FOUND = 'S'
#define ENUM_QUOTE_RESULT_REJECTED_INVALID_PRICE = 'p'
#define ENUM_QUOTE_RESULT_INVALID_REMOVE = 'r'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_QUOTE_RESULT_REJECTED_OTHER_REASON = 'u'
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_EFID_GROUP_LEVEL = '+'
#define ENUM_QUOTE_RESULT_REJECTED_CLOSING_ONLY_SERIES = 'c'

/*
 * Restatement Reason Values
 */ 
#define ENUM_RESTATEMENT_REASON_RELOAD = 'L'
#define ENUM_RESTATEMENT_REASON_PRICE_SLIDING_REPRICE = 'P'
#define ENUM_RESTATEMENT_REASON_LIQUIDITY_UPDATED = 'Q'
#define ENUM_RESTATEMENT_REASON_REROUTE = 'R'
#define ENUM_RESTATEMENT_REASON_SHIP_AND_POST = 'S'
#define ENUM_RESTATEMENT_REASON_WASH = 'W'
#define ENUM_RESTATEMENT_REASON_UNSOLICITED_FLOOR_ACTION = 'f'
#define ENUM_RESTATEMENT_REASON_PRICE_SLIDING_REPRICE = 'K'
#define ENUM_RESTATEMENT_REASON_LIQUIDITY = 'Q'

/*
 * Risk Reset Result Values
 */ 
#define ENUM_RISK_RESET_RESULT_IGNORED = ' '
#define ENUM_RISK_RESET_RESULT_SUCCESS = 'Y'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_FIRM_RESET_LIMIT = 'F'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_CUSTOM_GROUP_ID_LIMIT = 'C'
#define ENUM_RISK_RESET_RESULT_REJECTED_AUTOMATIC_RISK_RESETS_ARE_DISABLED = 'D'
#define ENUM_RISK_RESET_RESULT_REJECTED_EMPTY_RESET_RISK_FIELD = 'E'
#define ENUM_RISK_RESET_RESULT_REJECTED_INCORRECT_DATA_CENTER = 'I'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_RISK_ROOT_RESET_LIMIT = 'S'
#define ENUM_RISK_RESET_RESULT_REJECTED_INVALID_RISK_ROOT = 'U'
#define ENUM_RISK_RESET_RESULT_REJECTED_INVALID_EFID_OR_CLEARING_FIRM = 'c'
#define ENUM_RISK_RESET_RESULT_REJECTED_IN_REPLAY = 'y'

/*
 * Session Eligibility Values
 */ 
#define ENUM_SESSION_ELIGIBILITY_RTH = 'R'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY = '1'
#define ENUM_SIDE_SELL = '2'

/*
 * Sub Liquidity Indicator Values
 */ 
#define ENUM_SUB_LIQUIDITY_INDICATOR_EXECUTION_FROM_ORDER_THAT_SET_THE_NBBO = 'S'
#define ENUM_SUB_LIQUIDITY_INDICATOR_STEP_UP_MECHANISM = 'B'
#define ENUM_SUB_LIQUIDITY_INDICATOR_CARRIED = 'C'
#define ENUM_SUB_LIQUIDITY_INDICATOR_DONE_FOR_DAY = 'D'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY = '0'
#define ENUM_TIME_IN_FORCE_GTC = '1'
#define ENUM_TIME_IN_FORCE_ATO = '2'
#define ENUM_TIME_IN_FORCE_IOC = '3'
#define ENUM_TIME_IN_FORCE_FOK = '4'
#define ENUM_TIME_IN_FORCE_GTD = '6'
#define ENUM_TIME_IN_FORCE_ATC = '6'


/*******************************************************************************
 * Structs
 *******************************************************************************/

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
    unsigned char PurgeRejectedReservedBit1Exists : 1;
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
    unsigned char TradeCancelOrCorrectCrossIdExists : 1;
} TradeCancelOrCorrectByte10T;

/*
 * Bitfield: Trade Cancel Or Correct Byte 9
 */ 
typedef struct {
    unsigned char TradeCancelOrCorrectReservedBit8Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit7Exists : 1;
    unsigned char TradeCancelOrCorrectCmtaNumberExists : 1;
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
    unsigned char TradeCancelOrCorrectCorrectedSizeExists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectOpenCloseExists : 1;
    unsigned char TradeCancelOrCorrectPutOrCallExists : 1;
    unsigned char TradeCancelOrCorrectStrikePriceExists : 1;
    unsigned char TradeCancelOrCorrectMaturityDateExists : 1;
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
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
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
    unsigned char CancelRejectedMassCancelIdExists : 1;
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
    unsigned char CancelRejectedCrossIdExists : 1;
} CancelRejectedByte10T;

/*
 * Bitfield: Cancel Rejected Byte 9
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedCmtaNumberExists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedMarketFeeCodeExists : 1;
} CancelRejectedByte9T;

/*
 * Bitfield: Cancel Rejected Byte 8
 */ 
typedef struct {
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedReservedBit7Exists : 1;
    unsigned char CancelRejectedReservedBit6Exists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
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
    unsigned char CancelRejectedCorrectedSizeExists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedOpenCloseExists : 1;
    unsigned char CancelRejectedPutOrCallExists : 1;
    unsigned char CancelRejectedStrikePriceExists : 1;
    unsigned char CancelRejectedMaturityDateExists : 1;
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
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedSymbolExists : 1;
} CancelRejectedByte2T;

/*
 * Bitfield: Cancel Rejected Byte 1
 */ 
typedef struct {
    unsigned char CancelRejectedMaxRemovePctExists : 1;
    unsigned char CancelRejectedMinQtyExists : 1;
    unsigned char CancelRejectedTimeInForceExists : 1;
    unsigned char CancelRejectedOrdTypeExists : 1;
    unsigned char CancelRejectedExecInstExists : 1;
    unsigned char CancelRejectedPriceExists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
    unsigned char CancelRejectedSideExists : 1;
} CancelRejectedByte1T;

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
    unsigned char OrderCancelledReservedBit4Exists : 1;
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
    unsigned char OrderCancelledReservedBit4Exists : 1;
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
    unsigned char OrderCancelledCrossIdExists : 1;
} OrderCancelledByte10T;

/*
 * Bitfield: Order Cancelled Byte 9
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledCmtaNumberExists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledMarketFeeCodeExists : 1;
} OrderCancelledByte9T;

/*
 * Bitfield: Order Cancelled Byte 8
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledExDestinationExists : 1;
    unsigned char OrderCancelledRouteDeliveryMethodExists : 1;
    unsigned char OrderCancelledRouteStrategyExists : 1;
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
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledAttributedQuoteExists : 1;
    unsigned char OrderCancelledContraCapacityExists : 1;
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
    unsigned char OrderCancelledCorrectedSizeExists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledOpenCloseExists : 1;
    unsigned char OrderCancelledPutOrCallExists : 1;
    unsigned char OrderCancelledStrikePriceExists : 1;
    unsigned char OrderCancelledMaturityDateExists : 1;
} OrderCancelledByte4T;

/*
 * Bitfield: Order Cancelled Byte 3
 */ 
typedef struct {
    unsigned char OrderCancelledPreventMatchExists : 1;
    unsigned char OrderCancelledOrderQtyExists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
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
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledSymbolExists : 1;
} OrderCancelledByte2T;

/*
 * Bitfield: Order Cancelled Byte 1
 */ 
typedef struct {
    unsigned char OrderCancelledMaxRemovePctExists : 1;
    unsigned char OrderCancelledMinQtyExists : 1;
    unsigned char OrderCancelledTimeInForceExists : 1;
    unsigned char OrderCancelledOrdTypeExists : 1;
    unsigned char OrderCancelledExecInstExists : 1;
    unsigned char OrderCancelledPriceExists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
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
    unsigned char UserModifyRejectedCrossIdExists : 1;
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
    unsigned char UserModifyRejectedReservedBit1Exists : 1;
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
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedReservedBit1Exists : 1;
} OrderRestatedByte16T;

/*
 * Bitfield: Order Restated Byte 15
 */ 
typedef struct {
    unsigned char OrderRestatedClientIdAttrExists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
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
    unsigned char OrderRestatedCrossIdExists : 1;
} OrderRestatedByte10T;

/*
 * Bitfield: Order Restated Byte 9
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedReservedBit7Exists : 1;
    unsigned char OrderRestatedCmtaNumberExists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedReservedBit4Exists : 1;
    unsigned char OrderRestatedReservedBit3Exists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedMarketFeeCodeExists : 1;
} OrderRestatedByte9T;

/*
 * Bitfield: Order Restated Byte 8
 */ 
typedef struct {
    unsigned char OrderRestatedReservedBit8Exists : 1;
    unsigned char OrderRestatedExDestinationExists : 1;
    unsigned char OrderRestatedRouteDeliveryMethodExists : 1;
    unsigned char OrderRestatedRouteStrategyExists : 1;
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
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedAttributedQuoteExists : 1;
    unsigned char OrderRestatedContraCapacityExists : 1;
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
    unsigned char OrderRestatedCorrectedSizeExists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedOpenCloseExists : 1;
    unsigned char OrderRestatedPutOrCallExists : 1;
    unsigned char OrderRestatedStrikePriceExists : 1;
    unsigned char OrderRestatedMaturityDateExists : 1;
} OrderRestatedByte4T;

/*
 * Bitfield: Order Restated Byte 3
 */ 
typedef struct {
    unsigned char OrderRestatedPreventMatchExists : 1;
    unsigned char OrderRestatedOrderQtyExists : 1;
    unsigned char OrderRestatedReservedBit6Exists : 1;
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
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedSymbolExists : 1;
} OrderRestatedByte2T;

/*
 * Bitfield: Order Restated Byte 1
 */ 
typedef struct {
    unsigned char OrderRestatedMaxRemovePctExists : 1;
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
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedSessionEligibilityExists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte16T;

/*
 * Bitfield: Order Modified Byte 15
 */ 
typedef struct {
    unsigned char OrderModifiedClientIdAttrExists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
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
    unsigned char OrderModifiedClearingOptionalDataExists : 1;
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
    unsigned char OrderModifiedCrossIdExists : 1;
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
    unsigned char OrderModifiedMarketFeeCodeExists : 1;
} OrderModifiedByte9T;

/*
 * Bitfield: Order Modified Byte 8
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedExDestinationExists : 1;
    unsigned char OrderModifiedRouteDeliveryMethodExists : 1;
    unsigned char OrderModifiedRouteStrategyExists : 1;
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
    unsigned char OrderModifiedSubLiquidityIndicatorExists : 1;
} OrderModifiedByte7T;

/*
 * Bitfield: Order Modified Byte 6
 */ 
typedef struct {
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedAttributedQuoteExists : 1;
    unsigned char OrderModifiedContraCapacityExists : 1;
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
    unsigned char OrderModifiedCorrectedSizeExists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedOpenCloseExists : 1;
    unsigned char OrderModifiedPutOrCallExists : 1;
    unsigned char OrderModifiedStrikePriceExists : 1;
    unsigned char OrderModifiedMaturityDateExists : 1;
} OrderModifiedByte4T;

/*
 * Bitfield: Order Modified Byte 3
 */ 
typedef struct {
    unsigned char OrderModifiedPreventMatchExists : 1;
    unsigned char OrderModifiedOrderQtyExists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
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
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedSymbolExists : 1;
} OrderModifiedByte2T;

/*
 * Bitfield: Order Modified Byte 1
 */ 
typedef struct {
    unsigned char OrderModifiedMaxRemovePctExists : 1;
    unsigned char OrderModifiedMinQtyExists : 1;
    unsigned char OrderModifiedTimeInForceExists : 1;
    unsigned char OrderModifiedOrdTypeExists : 1;
    unsigned char OrderModifiedExecInstExists : 1;
    unsigned char OrderModifiedPriceExists : 1;
    unsigned char OrderModifiedPegDifferenceExists : 1;
    unsigned char OrderModifiedSideExists : 1;
} OrderModifiedByte1T;

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
    unsigned char OrderRejectedSessionEligibilityExists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
} OrderRejectedByte16T;

/*
 * Bitfield: Order Rejected Byte 15
 */ 
typedef struct {
    unsigned char OrderRejectedClientIdAttrExists : 1;
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
    unsigned char OrderRejectedCrossIdExists : 1;
} OrderRejectedByte10T;

/*
 * Bitfield: Order Rejected Byte 9
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedCmtaNumberExists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedMarketFeeCodeExists : 1;
} OrderRejectedByte9T;

/*
 * Bitfield: Order Rejected Byte 8
 */ 
typedef struct {
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedExDestinationExists : 1;
    unsigned char OrderRejectedRouteDeliveryMethodExists : 1;
    unsigned char OrderRejectedRouteStrategyExists : 1;
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
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedAttributedQuoteExists : 1;
    unsigned char OrderRejectedContraCapacityExists : 1;
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
    unsigned char OrderRejectedCorrectedSizeExists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedOpenCloseExists : 1;
    unsigned char OrderRejectedPutOrCallExists : 1;
    unsigned char OrderRejectedStrikePriceExists : 1;
    unsigned char OrderRejectedMaturityDateExists : 1;
} OrderRejectedByte4T;

/*
 * Bitfield: Order Rejected Byte 3
 */ 
typedef struct {
    unsigned char OrderRejectedPreventMatchExists : 1;
    unsigned char OrderRejectedOrderQtyExists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
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
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedSymbolExists : 1;
} OrderRejectedByte2T;

/*
 * Bitfield: Order Rejected Byte 1
 */ 
typedef struct {
    unsigned char OrderRejectedMaxRemovePctExists : 1;
    unsigned char OrderRejectedMinQtyExists : 1;
    unsigned char OrderRejectedTimeInForceExists : 1;
    unsigned char OrderRejectedOrdTypeExists : 1;
    unsigned char OrderRejectedExecInstExists : 1;
    unsigned char OrderRejectedPriceExists : 1;
    unsigned char OrderRejectedPegDifferenceExists : 1;
    unsigned char OrderRejectedSideExists : 1;
} OrderRejectedByte1T;

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
    unsigned char OrderAcknowledgmentSessionEligibilityExists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte16T;

/*
 * Bitfield: Order Acknowledgment Byte 15
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentClientIdAttrExists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
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
    unsigned char OrderAcknowledgmentClearingOptionalDataExists : 1;
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
    unsigned char OrderAcknowledgmentCrossIdExists : 1;
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
    unsigned char OrderAcknowledgmentMarketFeeCodeExists : 1;
} OrderAcknowledgmentByte9T;

/*
 * Bitfield: Order Acknowledgment Byte 8
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentExDestinationExists : 1;
    unsigned char OrderAcknowledgmentRouteDeliveryMethodExists : 1;
    unsigned char OrderAcknowledgmentRouteStrategyExists : 1;
    unsigned char OrderAcknowledgmentRoutingInstExists : 1;
    unsigned char OrderAcknowledgmentStopPxExists : 1;
    unsigned char OrderAcknowledgmentEchoTextExists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
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
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentAttributedQuoteExists : 1;
    unsigned char OrderAcknowledgmentContraCapacityExists : 1;
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
    unsigned char OrderAcknowledgmentCorrectedSizeExists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentOpenCloseExists : 1;
    unsigned char OrderAcknowledgmentPutOrCallExists : 1;
    unsigned char OrderAcknowledgmentStrikePriceExists : 1;
    unsigned char OrderAcknowledgmentMaturityDateExists : 1;
} OrderAcknowledgmentByte4T;

/*
 * Bitfield: Order Acknowledgment Byte 3
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentPreventMatchExists : 1;
    unsigned char OrderAcknowledgmentOrderQtyExists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
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
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentSymbolExists : 1;
} OrderAcknowledgmentByte2T;

/*
 * Bitfield: Order Acknowledgment Byte 1
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentMaxRemovePctExists : 1;
    unsigned char OrderAcknowledgmentMinQtyExists : 1;
    unsigned char OrderAcknowledgmentTimeInForceExists : 1;
    unsigned char OrderAcknowledgmentOrdTypeExists : 1;
    unsigned char OrderAcknowledgmentExecInstExists : 1;
    unsigned char OrderAcknowledgmentPriceExists : 1;
    unsigned char OrderAcknowledgmentPegDifferenceExists : 1;
    unsigned char OrderAcknowledgmentSideExists : 1;
} OrderAcknowledgmentByte1T;

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
    unsigned char CancelOrderMassCancelInstExists : 1;
} CancelOrderByte2T;

/*
 * Bitfield: Cancel Order Byte 1
 */ 
typedef struct {
    unsigned char CancelOrderReservedBit8Exists : 1;
    unsigned char CancelOrderReservedBit7Exists : 1;
    unsigned char CancelOrderReservedBit6Exists : 1;
    unsigned char CancelOrderMassCancelIdExists : 1;
    unsigned char CancelOrderRiskRootExists : 1;
    unsigned char CancelOrderMassCancelExists : 1;
    unsigned char CancelOrderMassCancelLockoutExists : 1;
    unsigned char CancelOrderClearingFirmExists : 1;
} CancelOrderByte1T;

/*
 * Bitfield: New Order Byte 9
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderReservedBit7Exists : 1;
    unsigned char NewOrderReservedBit6Exists : 1;
    unsigned char NewOrderReservedBit5Exists : 1;
    unsigned char NewOrderReservedBit4Exists : 1;
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderReservedBit2Exists : 1;
    unsigned char NewOrderReservedBit1Exists : 1;
} NewOrderByte9T;

/*
 * Bitfield: New Order Byte 8
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderReservedBit7Exists : 1;
    unsigned char NewOrderReservedBit6Exists : 1;
    unsigned char NewOrderReservedBit5Exists : 1;
    unsigned char NewOrderClientIdAttrExists : 1;
    unsigned char NewOrderClearingOptionalDataExists : 1;
    unsigned char NewOrderCustomGroupIdExists : 1;
    unsigned char NewOrderReservedBit1Exists : 1;
} NewOrderByte8T;

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
    unsigned char NewOrderRouteStrategyExists : 1;
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
    unsigned char NewOrderSessionEligibilityExists : 1;
} NewOrderByte5T;

/*
 * Bitfield: New Order Byte 4
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderReservedBit7Exists : 1;
    unsigned char NewOrderCmtaNumberExists : 1;
    unsigned char NewOrderOpenCloseExists : 1;
    unsigned char NewOrderRiskResetExists : 1;
    unsigned char NewOrderPutOrCallExists : 1;
    unsigned char NewOrderStrikePriceExists : 1;
    unsigned char NewOrderMaturityDateExists : 1;
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
    unsigned char NewOrderMaxRemovePctExists : 1;
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
    unsigned char OrderExecutionClientIdAttrExists : 1;
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
    unsigned char OrderExecutionDayAvgPxExists : 1;
    unsigned char OrderExecutionAvgPxExists : 1;
    unsigned char OrderExecutionDayCumQtyExists : 1;
    unsigned char OrderExecutionDayOrderQtyExists : 1;
    unsigned char OrderExecutionCumQtyExists : 1;
} OrderExecutionByte13T;

/*
 * Bitfield: Order Execution Byte 12
 */ 
typedef struct {
    unsigned char OrderExecutionClearingOptionalDataExists : 1;
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
    unsigned char OrderExecutionCrossIdExists : 1;
} OrderExecutionByte10T;

/*
 * Bitfield: Order Execution Byte 9
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionCmtaNumberExists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionMarketFeeCodeExists : 1;
} OrderExecutionByte9T;

/*
 * Bitfield: Order Execution Byte 8
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionExDestinationExists : 1;
    unsigned char OrderExecutionRouteDeliveryMethodExists : 1;
    unsigned char OrderExecutionRouteStrategyExists : 1;
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
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionAttributedQuoteExists : 1;
    unsigned char OrderExecutionContraCapacityExists : 1;
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
    unsigned char OrderExecutionCorrectedSizeExists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionOpenCloseExists : 1;
    unsigned char OrderExecutionPutOrCallExists : 1;
    unsigned char OrderExecutionStrikePriceExists : 1;
    unsigned char OrderExecutionMaturityDateExists : 1;
} OrderExecutionByte4T;

/*
 * Bitfield: Order Execution Byte 3
 */ 
typedef struct {
    unsigned char OrderExecutionPreventMatchExists : 1;
    unsigned char OrderExecutionOrderQtyExists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
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
    unsigned char OrderExecutionContraTraderExists : 1;
    unsigned char OrderExecutionCapacityExists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionSymbolExists : 1;
} OrderExecutionByte2T;

/*
 * Bitfield: Order Execution Byte 1
 */ 
typedef struct {
    unsigned char OrderExecutionMaxRemovePctExists : 1;
    unsigned char OrderExecutionMinQtyExists : 1;
    unsigned char OrderExecutionTimeInForceExists : 1;
    unsigned char OrderExecutionOrdTypeExists : 1;
    unsigned char OrderExecutionExecInstExists : 1;
    unsigned char OrderExecutionPriceExists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionSideExists : 1;
} OrderExecutionByte1T;

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

