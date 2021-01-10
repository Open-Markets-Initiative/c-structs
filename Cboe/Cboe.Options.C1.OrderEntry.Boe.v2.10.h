/*******************************************************************************
 * C Structs For Cboe Options C1 Boe OrderEntry 2.10 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Application Message Type Values
 */ 
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT = 0x25
#define ENUM_APPLICATION_MESSAGE_TYPE_CROSS_ORDER_ACKNOWLEDGMENT = 0x43
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_REJECTED = 0x26
#define ENUM_APPLICATION_MESSAGE_TYPE_CROSS_ORDER_REJECTED = 0x44
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_MODIFIED = 0x27
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_RESTATED = 0x28
#define ENUM_APPLICATION_MESSAGE_TYPE_USER_MODIFY_REJECTED = 0x29
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_CANCELLED = 0x2A
#define ENUM_APPLICATION_MESSAGE_TYPE_CROSS_ORDER_CANCELLED = 0x46
#define ENUM_APPLICATION_MESSAGE_TYPE_CANCEL_REJECTED = 0x2B
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_EXECUTION = 0x2C
#define ENUM_APPLICATION_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT = 0x2D
#define ENUM_APPLICATION_MESSAGE_TYPE_PURGE_REJECTED = 0x48
#define ENUM_APPLICATION_MESSAGE_TYPE_COMPLEX_INSTRUMENT_ACCEPTED = 0x4D
#define ENUM_APPLICATION_MESSAGE_TYPE_COMPLEX_INSTRUMENT_REJECTED = 0x4E

/*
 * Attributed Quote Values
 */ 
#define ENUM_ATTRIBUTED_QUOTE_DO_NOT_ATTRIBUTE_FIRM_EXECUTING_BROKER_ID = 'N'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_FIRM_EXECUTING_BROKER_ID = 'Y'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_CLIENT_ID_ONLY = 'C'
#define ENUM_ATTRIBUTED_QUOTE_ATTRIBUTE_BOTH_CLEARING_FIRM_AND_CLIENT_ID = 'Z'

/*
 * Auto Match Values
 */ 
#define ENUM_AUTO_MATCH_DISABLED = '0'
#define ENUM_AUTO_MATCH_MARKET = '1'
#define ENUM_AUTO_MATCH_LIMIT = '1'
#define ENUM_AUTO_MATCH_ATTRIBUTE_BOTH_CLEARING_FIRM_AND_CLIENT_ID = 'Z'

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
#define ENUM_CAPACITY_NON_TRADING_PERMIT_HOLDER_AFFILIATE = 'L'

/*
 * Combo Order Values
 */ 
#define ENUM_COMBO_ORDER_NO = 'N'
#define ENUM_COMBO_ORDER_YES = 'Y'

/*
 * Compression Values
 */ 
#define ENUM_COMPRESSION_NO = 'N'
#define ENUM_COMPRESSION_YES = 'Y'

/*
 * Cross Exclusion Indicator Values
 */ 
#define ENUM_CROSS_EXCLUSION_INDICATOR_NO = 'N'
#define ENUM_CROSS_EXCLUSION_INDICATOR_YES = 'Y'

/*
 * Cross Prioritization Values
 */ 
#define ENUM_CROSS_PRIORITIZATION_BUY = '1'
#define ENUM_CROSS_PRIORITIZATION_SELL = '2'

/*
 * Display Indicator Values
 */ 
#define ENUM_DISPLAY_INDICATOR_DETERMINED_BY_PORT_LEVEL_SETTING = 'V'
#define ENUM_DISPLAY_INDICATOR_PRICE_ADJUST = 'P'
#define ENUM_DISPLAY_INDICATOR_MULTIPLE_PRICE_ADJUST = 'm'
#define ENUM_DISPLAY_INDICATOR_REJECT_THE_ORDER_IF_IT_CANNOT_BE_BOOKED_AND_DISPLAYED_WITHOUT_ADJUSTMENT = 'm'

/*
 * Equity Ex Destination Values
 */ 
#define ENUM_EQUITY_EX_DESTINATION_COWEN = 'C'

/*
 * Equity Leg Short Sell Values
 */ 
#define ENUM_EQUITY_LEG_SHORT_SELL_SELL_SHORT = '5'
#define ENUM_EQUITY_LEG_SHORT_SELL_SELL_SHORT_EXEMPT = '6'
#define ENUM_EQUITY_LEG_SHORT_SELL_DISABLED = '0'
#define ENUM_EQUITY_LEG_SHORT_SELL_ENABLED = '1'

/*
 * Equity Trade Venue Values
 */ 
#define ENUM_EQUITY_TRADE_VENUE_NYSE_AMERICAN = 'A'
#define ENUM_EQUITY_TRADE_VENUE_NASDAQ_BX = 'B'
#define ENUM_EQUITY_TRADE_VENUE_NYSE_NATIONAL = 'C'
#define ENUM_EQUITY_TRADE_VENUE_INVESTORS_EXCHANGE = 'I'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_EDGA_EXCHANGE = 'J'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_EDGX_EXCHANGE = 'K'
#define ENUM_EQUITY_TRADE_VENUE_CHX = 'M'
#define ENUM_EQUITY_TRADE_VENUE_NYSE = 'N'
#define ENUM_EQUITY_TRADE_VENUE_NYSE_ARCA = 'P'
#define ENUM_EQUITY_TRADE_VENUE_NASDAQ = 'Q'
#define ENUM_EQUITY_TRADE_VENUE_NASDAQ_PSX = 'X'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_BYX_EXCHANGE = 'Y'
#define ENUM_EQUITY_TRADE_VENUE_CBOE_BZX_EXCHANGE = 'Z'

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
#define ENUM_EXEC_INST_NOT_HELD = '1'
#define ENUM_EXEC_INST_INTERMARKET_SWEEP = 'f'
#define ENUM_EXEC_INST_SETTLEMENT_LIQUIDITY = 'r'
#define ENUM_EXEC_INST_ALL_OR_NONE = 'G'
#define ENUM_EXEC_INST_SWEEP = 's'

/*
 * Floor Routing Inst Values
 */ 
#define ENUM_FLOOR_ROUTING_INST_DIRECT = 'D'
#define ENUM_FLOOR_ROUTING_INST_ELECTRONIC_ONLY = 'E'
#define ENUM_FLOOR_ROUTING_INST_ROUTE_TO_FLOOR_IF_NOT_ELECTRONIC = 'X'

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
#define ENUM_MESSAGE_TYPE_NEW_ORDER_CROSS_MESSAGE = 0x41
#define ENUM_MESSAGE_TYPE_NEW_ORDER_COMPLEX_MESSAGE = 0x4B
#define ENUM_MESSAGE_TYPE_NEW_ORDER_CROSS_MULTILEG_MESSAGE = 0x5A
#define ENUM_MESSAGE_TYPE_CANCEL_ORDER_MESSAGE = 0x39
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE = 0x3A
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_MESSAGE = 0x55
#define ENUM_MESSAGE_TYPE_SHORT_QUOTE_UPDATE_MESSAGE = 0x59
#define ENUM_MESSAGE_TYPE_PURGE_ORDER_MESSAGE = 0x47
#define ENUM_MESSAGE_TYPE_RISK_RESET_MESSAGE = 0x56
#define ENUM_MESSAGE_TYPE_NEW_COMPLEX_INSTRUMENT_MESSAGE = 0x4C
#define ENUM_MESSAGE_TYPE_ADD_FLOOR_TRADE_MESSAGE = 0x5C
#define ENUM_MESSAGE_TYPE_FLOOR_TRADE_CONFIRMATION_MESSAGE = 0x5B
#define ENUM_MESSAGE_TYPE_DELETE_FLOOR_TRADE_MESSAGE = 0x5D
#define ENUM_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT_MESSAGE = 0x25
#define ENUM_MESSAGE_TYPE_CROSS_ORDER_ACKNOWLEDGMENT_MESSAGE = 0x43
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
#define ENUM_MESSAGE_TYPE_CROSS_ORDER_CANCELLED_MESSAGE = 0x46
#define ENUM_MESSAGE_TYPE_CANCEL_REJECTED_MESSAGE = 0x2B
#define ENUM_MESSAGE_TYPE_QUOTE_EXECUTION_MESSAGE = 0x54
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT_MESSAGE = 0x2D
#define ENUM_MESSAGE_TYPE_PURGE_REJECTED_MESSAGE = 0x48
#define ENUM_MESSAGE_TYPE_RESET_RISK_ACKNOWLEDGMENT_MESSAGE = 0x57
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_ACKNOWLEDGMENT_MESSAGE = 0x36
#define ENUM_MESSAGE_TYPE_COMPLEX_INSTRUMENT_ACCEPTED_MESSAGE = 0x4D
#define ENUM_MESSAGE_TYPE_COMPLEX_INSTRUMENT_REJECTED_MESSAGE = 0x4D
#define ENUM_MESSAGE_TYPE_FLOOR_TRADE_NOTIFICATION_MESSAGE = 0x62
#define ENUM_MESSAGE_TYPE_ADD_FLOOR_TRADE_REJECTED_MESSAGE = 0x5F
#define ENUM_MESSAGE_TYPE_FLOOR_TRADE_CONFIRMATION_REJECTED_MESSAGE = 0x5E
#define ENUM_MESSAGE_TYPE_DELETE_FLOOR_TRADE_REJECTED_MESSAGE = 0x60

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
 * Multi Class Sprd Values
 */ 
#define ENUM_MULTI_CLASS_SPRD_NO = 'N'
#define ENUM_MULTI_CLASS_SPRD_YES = 'Y'

/*
 * Multileg Reporting Type Values
 */ 
#define ENUM_MULTILEG_REPORTING_TYPE_SINGLE_LEG_INSTRUMENT = '1'
#define ENUM_MULTILEG_REPORTING_TYPE_INDIVIDUAL_LEG_OF_MULTILEG_INSTRUMENT = '2'
#define ENUM_MULTILEG_REPORTING_TYPE_ENTIRE_MULTILEG_PACKAGE = '3'

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
 * Ors Values
 */ 
#define ENUM_ORS_NO = 'N'
#define ENUM_ORS_YES = 'Y'

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
 * Price Type Values
 */ 
#define ENUM_PRICE_TYPE_FIXED_CABINET_TRADE_PRICE = '0'
#define ENUM_PRICE_TYPE_PERCENTAGE = '1'
#define ENUM_PRICE_TYPE_PRICE_PER_UNIT = '2'
#define ENUM_PRICE_TYPE_FIXED_AMOUNT = '3'

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
#define ENUM_QUOTE_RESULT_NO_CHANGE_EXISTING_CONSTITUENT_SERIES_QUOTE_MODIFY = 'V'
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
#define ENUM_QUOTE_RESULT_REJECTED_ATTEMPT_TO_ADD_CONSTITUENT_SERIES_QUOTE_AFTER_CUTOFF_TIME = 'v'

/*
 * Restatement Reason Values
 */ 
#define ENUM_RESTATEMENT_REASON_REDUCTION_OF_ORD_QTY_DUE_TO_EQUITY_LEG_REJECT = 'E'
#define ENUM_RESTATEMENT_REASON_REPRESENTED_ON_FLOOR = 'F'
#define ENUM_RESTATEMENT_REASON_RELOAD = 'L'
#define ENUM_RESTATEMENT_REASON_PRICE_SLIDING_REPRICE = 'P'
#define ENUM_RESTATEMENT_REASON_LIQUIDITY_UPDATED = 'Q'
#define ENUM_RESTATEMENT_REASON_REROUTE = 'R'
#define ENUM_RESTATEMENT_REASON_SHIP_AND_POST = 'S'
#define ENUM_RESTATEMENT_REASON_WASH = 'W'
#define ENUM_RESTATEMENT_REASON_UNSOLICITED_FLOOR_ACTION = 'f'
#define ENUM_RESTATEMENT_REASON_LIQUIDITY = 'Q'

/*
 * Revised Legs Values
 */ 
#define ENUM_REVISED_LEGS_NOT_REORDERED = '1'
#define ENUM_REVISED_LEGS_REORDERED = '2'

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
#define ENUM_SESSION_ELIGIBILITY_ALL = 'A'
#define ENUM_SESSION_ELIGIBILITY_RTH = 'R'
#define ENUM_SESSION_ELIGIBILITY_BOOK_ONLY_NO_SLIDE = 'N'

/*
 * Side Values
 */ 
#define ENUM_SIDE_AIM = '1'
#define ENUM_SIDE_QCC = '2'
#define ENUM_SIDE_SAM = '3'
#define ENUM_SIDE_BUY = '1'
#define ENUM_SIDE_SELL = '2'
#define ENUM_SIDE_SELL_SHORT = '5'
#define ENUM_SIDE_SELL_SHORT_EXEMPT = '6'

/*
 * Strategy Id Values
 */ 
#define ENUM_STRATEGY_ID_CONVERSION = 'C'
#define ENUM_STRATEGY_ID_REVERSAL = 'R'
#define ENUM_STRATEGY_ID_MERGER = 'M'
#define ENUM_STRATEGY_ID_SHORT_STOCK_INTEREST = 'S'
#define ENUM_STRATEGY_ID_JELLY_ROLL = 'J'

/*
 * Sub Liquidity Indicator Values
 */ 
#define ENUM_SUB_LIQUIDITY_INDICATOR_EXECUTION_FROM_ORDER_THAT_SET_THE_NBBO = 'S'
#define ENUM_SUB_LIQUIDITY_INDICATOR_STEP_UP_MECHANISM = 'B'
#define ENUM_SUB_LIQUIDITY_INDICATOR_MARKET_TURNER = 'U'
#define ENUM_SUB_LIQUIDITY_INDICATOR_AIM = 'b'
#define ENUM_SUB_LIQUIDITY_INDICATOR_CARRIED = 'C'
#define ENUM_SUB_LIQUIDITY_INDICATOR_DONE_FOR_DAY = 'D'
#define ENUM_SUB_LIQUIDITY_INDICATOR_QCC = 'q'
#define ENUM_SUB_LIQUIDITY_INDICATOR_SAM = 's'

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

/*
 * Trade Through Alert Type Values
 */ 
#define ENUM_TRADE_THROUGH_ALERT_TYPE_NO_TRADE_THROUGH = '0'
#define ENUM_TRADE_THROUGH_ALERT_TYPE_NBBO = '1'
#define ENUM_TRADE_THROUGH_ALERT_TYPE_BBO = '2'
#define ENUM_TRADE_THROUGH_ALERT_TYPE_SBBO = '3'
#define ENUM_TRADE_THROUGH_ALERT_TYPE_BOOK_TRADE_THROUGH = '4'
#define ENUM_TRADE_THROUGH_ALERT_TYPE_DUE_DILIGENCE_TRADE_THROUGH = '5'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Delete Floor Trade Rejected Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint64_t ExecId;
    char Symbol[8];
    char PutOrCall;
    int64_t StrikePrice;
    uint32_t MaturityDate;
    char Side;
    char Reserved16[16];
    char RejectText[60];
} DeleteFloorTradeRejectedMessageT;

/*
 * Structure: Floor Trade Confirmation Rejected Message
 */ 
typedef struct {
    char ClOrd[20];
    uint64_t ExecId;
    char Symbol[8];
    char PutOrCall;
    int64_t StrikePrice;
    uint32_t MaturityDate;
    uint64_t TransactionTime;
    char PriceType;
    char Reserved15[15];
    char RejectText[60];
} FloorTradeConfirmationRejectedMessageT;

/*
 * Structure: Add Floor Trade Rejected Message
 */ 
typedef struct {
    char ClOrdId[20];
    char Symbol[8];
    char PutOrCall;
    int64_t StrikePrice;
    uint32_t MaturityDate;
    char MultilegReportingType;
    char ComboOrder;
    char Account[16];
    char ClearingOptionalData[16];
    char ClearingAccount[4];
    uint32_t CmtaNumber;
    char FloorTraderAcronym[3];
    char Side;
    uint32_t OrderQty;
    int64_t Price;
    uint64_t TransactionTime;
    char OpenClose;
    uint64_t TradeTime;
    char ContraTrader[4];
    char Reserved16[16];
    char RejectText[60];
} AddFloorTradeRejectedMessageT;

/*
 * Structure: Floor Trade Notification Message
 */ 
typedef struct {
    uint64_t ExecId;
    char Symbol[8];
    char PutOrCall;
    int64_t StrikePrice;
    uint32_t MaturityDate;
    uint32_t OrderQty;
    int64_t Price;
    char Side;
    char ContraTrader[4];
    char FloorTraderAcronym[3];
    uint64_t TradeTime;
    char TradeThroughAlertType;
    char PriceType;
    char Reserved15[15];
} FloorTradeNotificationMessageT;

/*
 * Bitfield: Complex Instrument Rejected Byte 17
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte17T;

/*
 * Bitfield: Complex Instrument Rejected Byte 16
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte16T;

/*
 * Bitfield: Complex Instrument Rejected Byte 15
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte15T;

/*
 * Bitfield: Complex Instrument Rejected Byte 14
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte14T;

/*
 * Bitfield: Complex Instrument Rejected Byte 13
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte13T;

/*
 * Bitfield: Complex Instrument Rejected Byte 12
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte12T;

/*
 * Bitfield: Complex Instrument Rejected Byte 11
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte11T;

/*
 * Bitfield: Complex Instrument Rejected Byte 10
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte10T;

/*
 * Bitfield: Complex Instrument Rejected Byte 9
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte9T;

/*
 * Bitfield: Complex Instrument Rejected Byte 8
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte8T;

/*
 * Bitfield: Complex Instrument Rejected Byte 7
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte7T;

/*
 * Bitfield: Complex Instrument Rejected Byte 6
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte6T;

/*
 * Bitfield: Complex Instrument Rejected Byte 5
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte5T;

/*
 * Bitfield: Complex Instrument Rejected Byte 4
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte4T;

/*
 * Bitfield: Complex Instrument Rejected Byte 3
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte3T;

/*
 * Bitfield: Complex Instrument Rejected Byte 2
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte2T;

/*
 * Bitfield: Complex Instrument Rejected Byte 1
 */ 
typedef struct {
    unsigned char ComplexInstrumentRejectedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentRejectedReservedBit1Exists : 1;
} ComplexInstrumentRejectedByte1T;

/*
 * Bitfield: Complex Instrument Accepted Byte 17
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte17T;

/*
 * Bitfield: Complex Instrument Accepted Byte 16
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte16T;

/*
 * Bitfield: Complex Instrument Accepted Byte 15
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte15T;

/*
 * Bitfield: Complex Instrument Accepted Byte 14
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedLegStrikePriceExists : 1;
    unsigned char ComplexInstrumentAcceptedLegMaturityDateExists : 1;
    unsigned char ComplexInstrumentAcceptedLegCfiCodeExists : 1;
} ComplexInstrumentAcceptedByte14T;

/*
 * Bitfield: Complex Instrument Accepted Byte 13
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte13T;

/*
 * Bitfield: Complex Instrument Accepted Byte 12
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte12T;

/*
 * Bitfield: Complex Instrument Accepted Byte 11
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte11T;

/*
 * Bitfield: Complex Instrument Accepted Byte 10
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte10T;

/*
 * Bitfield: Complex Instrument Accepted Byte 9
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte9T;

/*
 * Bitfield: Complex Instrument Accepted Byte 8
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte8T;

/*
 * Bitfield: Complex Instrument Accepted Byte 7
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte7T;

/*
 * Bitfield: Complex Instrument Accepted Byte 6
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte6T;

/*
 * Bitfield: Complex Instrument Accepted Byte 5
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte5T;

/*
 * Bitfield: Complex Instrument Accepted Byte 4
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte4T;

/*
 * Bitfield: Complex Instrument Accepted Byte 3
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte3T;

/*
 * Bitfield: Complex Instrument Accepted Byte 2
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte2T;

/*
 * Bitfield: Complex Instrument Accepted Byte 1
 */ 
typedef struct {
    unsigned char ComplexInstrumentAcceptedReservedBit8Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit7Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit6Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit5Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit4Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit3Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit2Exists : 1;
    unsigned char ComplexInstrumentAcceptedReservedBit1Exists : 1;
} ComplexInstrumentAcceptedByte1T;

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
    unsigned char TradeCancelOrCorrectCrossExclusionIndicatorExists : 1;
    unsigned char TradeCancelOrCorrectReservedBit5Exists : 1;
    unsigned char TradeCancelOrCorrectRoutingFirmIdExists : 1;
    unsigned char TradeCancelOrCorrectGiveUpFirmIdExists : 1;
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
    unsigned char TradeCancelOrCorrectAuctionIdExists : 1;
    unsigned char TradeCancelOrCorrectTargetPartyIdExists : 1;
    unsigned char TradeCancelOrCorrectMarketingFeeCodeExists : 1;
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
    char Symbol[8];
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
    unsigned char CancelRejectedCrossExclusionIndicatorExists : 1;
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedRoutingFirmIdExists : 1;
    unsigned char CancelRejectedGiveUpFirmIdExists : 1;
    unsigned char CancelRejectedAllocQtyExists : 1;
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
    unsigned char CancelRejectedAuctionIdExists : 1;
    unsigned char CancelRejectedTargetPartyIdExists : 1;
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
 * Bitfield: Cross Order Cancelled Byte 17
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte17T;

/*
 * Bitfield: Cross Order Cancelled Byte 16
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledCompressionExists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledFrequentTraderIdExists : 1;
} CrossOrderCancelledByte16T;

/*
 * Bitfield: Cross Order Cancelled Byte 15
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledEquityPartyIdExists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte15T;

/*
 * Bitfield: Cross Order Cancelled Byte 14
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte14T;

/*
 * Bitfield: Cross Order Cancelled Byte 13
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte13T;

/*
 * Bitfield: Cross Order Cancelled Byte 12
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte12T;

/*
 * Bitfield: Cross Order Cancelled Byte 11
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte11T;

/*
 * Bitfield: Cross Order Cancelled Byte 10
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledRoutingFirmIdExists : 1;
    unsigned char CrossOrderCancelledGiveUpFirmIdExists : 1;
    unsigned char CrossOrderCancelledAllocQtyExists : 1;
    unsigned char CrossOrderCancelledCrossIdExists : 1;
} CrossOrderCancelledByte10T;

/*
 * Bitfield: Cross Order Cancelled Byte 9
 */ 
typedef struct {
    unsigned char CrossOrderCancelledCrossPrioritizationExists : 1;
    unsigned char CrossOrderCancelledCrossTypeExists : 1;
    unsigned char CrossOrderCancelledCmtaNumberExists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledTargetPartyIdExists : 1;
    unsigned char CrossOrderCancelledTargetPartyIdExists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte9T;

/*
 * Bitfield: Cross Order Cancelled Byte 8
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte8T;

/*
 * Bitfield: Cross Order Cancelled Byte 7
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte7T;

/*
 * Bitfield: Cross Order Cancelled Byte 6
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledAttributedQuoteExists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte6T;

/*
 * Bitfield: Cross Order Cancelled Byte 5
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte5T;

/*
 * Bitfield: Cross Order Cancelled Byte 4
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledPutOrCallExists : 1;
    unsigned char CrossOrderCancelledStrikePriceExists : 1;
    unsigned char CrossOrderCancelledMaturityDateExists : 1;
} CrossOrderCancelledByte4T;

/*
 * Bitfield: Cross Order Cancelled Byte 3
 */ 
typedef struct {
    unsigned char CrossOrderCancelledPreventMatchExists : 1;
    unsigned char CrossOrderCancelledOrderQtyExists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledClearingFirmExists : 1;
    unsigned char CrossOrderCancelledAccountExists : 1;
} CrossOrderCancelledByte3T;

/*
 * Bitfield: Cross Order Cancelled Byte 2
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledCapacityExists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledReservedBit4Exists : 1;
    unsigned char CrossOrderCancelledReservedBit3Exists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledSymbolExists : 1;
} CrossOrderCancelledByte2T;

/*
 * Bitfield: Cross Order Cancelled Byte 1
 */ 
typedef struct {
    unsigned char CrossOrderCancelledReservedBit8Exists : 1;
    unsigned char CrossOrderCancelledReservedBit7Exists : 1;
    unsigned char CrossOrderCancelledReservedBit6Exists : 1;
    unsigned char CrossOrderCancelledReservedBit5Exists : 1;
    unsigned char CrossOrderCancelledExecInstExists : 1;
    unsigned char CrossOrderCancelledPriceExists : 1;
    unsigned char CrossOrderCancelledReservedBit2Exists : 1;
    unsigned char CrossOrderCancelledReservedBit1Exists : 1;
} CrossOrderCancelledByte1T;

/*
 * Structure: Quote Cancelled Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t OrderId;
    char Symbol[8];
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
    unsigned char OrderCancelledStrategyIdExists : 1;
    unsigned char OrderCancelledPriceTypeExists : 1;
} OrderCancelledByte17T;

/*
 * Bitfield: Order Cancelled Byte 16
 */ 
typedef struct {
    unsigned char OrderCancelledOrderOriginExists : 1;
    unsigned char OrderCancelledMultiClassSprdExists : 1;
    unsigned char OrderCancelledFloorRoutingInstExists : 1;
    unsigned char OrderCancelledFloorDestinationExists : 1;
    unsigned char OrderCancelledCompressionExists : 1;
    unsigned char OrderCancelledComboOrderExists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledFrequentTraderIdExists : 1;
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
    unsigned char OrderCancelledEquityPartyIdExists : 1;
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
    unsigned char OrderCancelledCrossExclusionIndicatorExists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledRoutingFirmIdExists : 1;
    unsigned char OrderCancelledGiveUpFirmIdExists : 1;
    unsigned char OrderCancelledAllocQtyExists : 1;
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
    unsigned char OrderCancelledAuctionIdExists : 1;
    unsigned char OrderCancelledTargetPartyIdExists : 1;
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
    unsigned char UserModifyRejectedCrossExclusionIndicatorExists : 1;
    unsigned char UserModifyRejectedReservedBit5Exists : 1;
    unsigned char UserModifyRejectedRoutingFirmIdExists : 1;
    unsigned char UserModifyRejectedGiveUpFirmIdExists : 1;
    unsigned char UserModifyRejectedAllocQtyExists : 1;
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
    char Symbol[8];
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
    unsigned char OrderRestatedStrategyIdExists : 1;
    unsigned char OrderRestatedPriceTypeExists : 1;
} OrderRestatedByte17T;

/*
 * Bitfield: Order Restated Byte 16
 */ 
typedef struct {
    unsigned char OrderRestatedOrderOriginExists : 1;
    unsigned char OrderRestatedMultiClassSprdExists : 1;
    unsigned char OrderRestatedFloorRoutingInstExists : 1;
    unsigned char OrderRestatedFloorDestinationExists : 1;
    unsigned char OrderRestatedCompressionExists : 1;
    unsigned char OrderRestatedComboOrderExists : 1;
    unsigned char OrderRestatedReservedBit2Exists : 1;
    unsigned char OrderRestatedFrequentTraderIdExists : 1;
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
    unsigned char OrderRestatedCrossExclusionIndicatorExists : 1;
    unsigned char OrderRestatedReservedBit5Exists : 1;
    unsigned char OrderRestatedRoutingFirmIdExists : 1;
    unsigned char OrderRestatedGiveUpFirmIdExists : 1;
    unsigned char OrderRestatedAllocQtyExists : 1;
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
    unsigned char OrderRestatedAuctionIdExists : 1;
    unsigned char OrderRestatedTargetPartyIdExists : 1;
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
    unsigned char OrderModifiedStrategyIdExists : 1;
    unsigned char OrderModifiedPriceTypeExists : 1;
} OrderModifiedByte17T;

/*
 * Bitfield: Order Modified Byte 16
 */ 
typedef struct {
    unsigned char OrderModifiedOrderOriginExists : 1;
    unsigned char OrderModifiedMultiClassSprdExists : 1;
    unsigned char OrderModifiedFloorRoutingInstExists : 1;
    unsigned char OrderModifiedFloorDestinationExists : 1;
    unsigned char OrderModifiedCompressionExists : 1;
    unsigned char OrderModifiedComboOrderExists : 1;
    unsigned char OrderModifiedSessionEligibilityExists : 1;
    unsigned char OrderModifiedFrequentTraderIdExists : 1;
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
    unsigned char OrderModifiedEquityPartyIdExists : 1;
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
    unsigned char OrderModifiedDrillThruProtectionExists : 1;
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
    unsigned char OrderModifiedCrossExclusionIndicatorExists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedRoutingFirmIdExists : 1;
    unsigned char OrderModifiedGiveUpFirmIdExists : 1;
    unsigned char OrderModifiedAllocQtyExists : 1;
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
    unsigned char OrderModifiedAuctionIdExists : 1;
    unsigned char OrderModifiedTargetPartyIdExists : 1;
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
 * Bitfield: Cross Order Rejected Byte 17
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte17T;

/*
 * Bitfield: Cross Order Rejected Byte 16
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedCompressionExists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedFrequentTraderIdExists : 1;
} CrossOrderRejectedByte16T;

/*
 * Bitfield: Cross Order Rejected Byte 15
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedEquityPartyIdExists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte15T;

/*
 * Bitfield: Cross Order Rejected Byte 14
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte14T;

/*
 * Bitfield: Cross Order Rejected Byte 13
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte13T;

/*
 * Bitfield: Cross Order Rejected Byte 12
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte12T;

/*
 * Bitfield: Cross Order Rejected Byte 11
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte11T;

/*
 * Bitfield: Cross Order Rejected Byte 10
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedRoutingFirmIdExists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedCrossIdExists : 1;
} CrossOrderRejectedByte10T;

/*
 * Bitfield: Cross Order Rejected Byte 9
 */ 
typedef struct {
    unsigned char CrossOrderRejectedCrossPrioritizationExists : 1;
    unsigned char CrossOrderRejectedCrossTypeExists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedTargetPartyIdExists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte9T;

/*
 * Bitfield: Cross Order Rejected Byte 8
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte8T;

/*
 * Bitfield: Cross Order Rejected Byte 7
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte7T;

/*
 * Bitfield: Cross Order Rejected Byte 6
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedAttributedQuoteExists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte6T;

/*
 * Bitfield: Cross Order Rejected Byte 5
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte5T;

/*
 * Bitfield: Cross Order Rejected Byte 4
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedPutOrCallExists : 1;
    unsigned char CrossOrderRejectedStrikePriceExists : 1;
    unsigned char CrossOrderRejectedMaturityDateExists : 1;
} CrossOrderRejectedByte4T;

/*
 * Bitfield: Cross Order Rejected Byte 3
 */ 
typedef struct {
    unsigned char CrossOrderRejectedPreventMatchExists : 1;
    unsigned char CrossOrderRejectedOrderQtyExists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte3T;

/*
 * Bitfield: Cross Order Rejected Byte 2
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedReservedBit4Exists : 1;
    unsigned char CrossOrderRejectedReservedBit3Exists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedSymbolExists : 1;
} CrossOrderRejectedByte2T;

/*
 * Bitfield: Cross Order Rejected Byte 1
 */ 
typedef struct {
    unsigned char CrossOrderRejectedReservedBit8Exists : 1;
    unsigned char CrossOrderRejectedReservedBit7Exists : 1;
    unsigned char CrossOrderRejectedReservedBit6Exists : 1;
    unsigned char CrossOrderRejectedReservedBit5Exists : 1;
    unsigned char CrossOrderRejectedExecInstExists : 1;
    unsigned char CrossOrderRejectedPriceExists : 1;
    unsigned char CrossOrderRejectedReservedBit2Exists : 1;
    unsigned char CrossOrderRejectedReservedBit1Exists : 1;
} CrossOrderRejectedByte1T;

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
    unsigned char OrderRejectedStrategyIdExists : 1;
    unsigned char OrderRejectedPriceTypeExists : 1;
} OrderRejectedByte17T;

/*
 * Bitfield: Order Rejected Byte 16
 */ 
typedef struct {
    unsigned char OrderRejectedOrderOriginExists : 1;
    unsigned char OrderRejectedMultiClassSprdExists : 1;
    unsigned char OrderRejectedFloorRoutingInstExists : 1;
    unsigned char OrderRejectedFloorDestinationExists : 1;
    unsigned char OrderRejectedCompressionExists : 1;
    unsigned char OrderRejectedComboOrderExists : 1;
    unsigned char OrderRejectedSessionEligibilityExists : 1;
    unsigned char OrderRejectedFrequentTraderIdExists : 1;
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
    unsigned char OrderRejectedEquityPartyIdExists : 1;
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
    unsigned char OrderRejectedCrossExclusionIndicatorExists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedRoutingFirmIdExists : 1;
    unsigned char OrderRejectedGiveUpFirmIdExists : 1;
    unsigned char OrderRejectedAllocQtyExists : 1;
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
    unsigned char OrderRejectedAuctionIdExists : 1;
    unsigned char OrderRejectedTargetPartyIdExists : 1;
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
 * Bitfield: Cross Order Acknowledgment Byte 17
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte17T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 16
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentCompressionExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentFrequentTraderIdExists : 1;
} CrossOrderAcknowledgmentByte16T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 15
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentClientIdAttrExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentEquityPartyIdExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte15T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 14
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte14T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 13
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte13T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 12
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentClearingOptionalDataExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte12T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 11
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte11T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 10
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentRoutingFirmIdExists : 1;
    unsigned char CrossOrderAcknowledgmentGiveUpFirmIdExists : 1;
    unsigned char CrossOrderAcknowledgmentAllocQtyExists : 1;
    unsigned char CrossOrderAcknowledgmentCrossIdExists : 1;
} CrossOrderAcknowledgmentByte10T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 9
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentCrossPrioritizationExists : 1;
    unsigned char CrossOrderAcknowledgmentCrossTypeExists : 1;
    unsigned char CrossOrderAcknowledgmentCmtaNumberExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentAuctionIdExists : 1;
    unsigned char CrossOrderAcknowledgmentTargetPartyIdExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte9T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 8
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte8T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 7
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte7T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 6
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentAttributedQuoteExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte6T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 5
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit1Exists : 1;
} CrossOrderAcknowledgmentByte5T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 4
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentOpenCloseExists : 1;
    unsigned char CrossOrderAcknowledgmentPutOrCallExists : 1;
    unsigned char CrossOrderAcknowledgmentStrikePriceExists : 1;
    unsigned char CrossOrderAcknowledgmentMaturityDateExists : 1;
} CrossOrderAcknowledgmentByte4T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 3
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentPreventMatchExists : 1;
    unsigned char CrossOrderAcknowledgmentOrderQtyExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentClearingAccountExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentAccountExists : 1;
} CrossOrderAcknowledgmentByte3T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 2
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentCapacityExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentSymbolExists : 1;
} CrossOrderAcknowledgmentByte2T;

/*
 * Bitfield: Cross Order Acknowledgment Byte 1
 */ 
typedef struct {
    unsigned char CrossOrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char CrossOrderAcknowledgmentExecInstExists : 1;
    unsigned char CrossOrderAcknowledgmentPriceExists : 1;
    unsigned char CrossOrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char CrossOrderAcknowledgmentSideExists : 1;
} CrossOrderAcknowledgmentByte1T;

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
    unsigned char OrderAcknowledgmentStrategyIdExists : 1;
    unsigned char OrderAcknowledgmentPriceTypeExists : 1;
} OrderAcknowledgmentByte17T;

/*
 * Bitfield: Order Acknowledgment Byte 16
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentOrderOriginExists : 1;
    unsigned char OrderAcknowledgmentMultiClassSprdExists : 1;
    unsigned char OrderAcknowledgmentFloorRoutingInstExists : 1;
    unsigned char OrderAcknowledgmentFloorDestinationExists : 1;
    unsigned char OrderAcknowledgmentCompressionExists : 1;
    unsigned char OrderAcknowledgmentComboOrderExists : 1;
    unsigned char OrderAcknowledgmentSessionEligibilityExists : 1;
    unsigned char OrderAcknowledgmentFrequentTraderIdExists : 1;
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
    unsigned char OrderAcknowledgmentEquityPartyIdExists : 1;
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
    unsigned char OrderAcknowledgmentDrillThruProtectionExists : 1;
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
    unsigned char OrderAcknowledgmentCrossExclusionIndicatorExists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentRoutingFirmIdExists : 1;
    unsigned char OrderAcknowledgmentGiveUpFirmIdExists : 1;
    unsigned char OrderAcknowledgmentAllocQtyExists : 1;
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
    unsigned char OrderAcknowledgmentAuctionIdExists : 1;
    unsigned char OrderAcknowledgmentTargetPartyIdExists : 1;
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
 * Structure: Delete Floor Trade Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint64_t ExecId;
    char Symbol[8];
    char PutOrCall;
    int64_t StrikePrice;
    uint32_t MaturityDate;
    char Side;
    char Reserved16[16];
} DeleteFloorTradeMessageT;

/*
 * Structure: Floor Trade Confirmation Message
 */ 
typedef struct {
    char ClOrdId[20];
    uint64_t ExecId;
    char Symbol[8];
    char PutOrCall;
    int64_t StrikePrice;
    uint32_t MaturityDate;
    uint64_t TransactionTime;
    char PriceType;
    char Reserved15[15];
} FloorTradeConfirmationMessageT;

/*
 * Structure: Add Floor Trade Message
 */ 
typedef struct {
    char ClOrdId[20];
    char Symbol[8];
    char PutOrCall;
    int64_t StrikePrice;
    uint32_t MaturityDate;
    char MultilegReportingType;
    char ComboOrder;
    char Account[16];
    char ClearingOptionalData[16];
    char ClearingAccount[4];
    uint32_t CmtaNumber;
    char FloorTraderAcronym[3];
    char Side;
    uint32_t OrderQty;
    int64_t Price;
    uint64_t TransactionTime;
    char OpenClose;
    uint64_t TradeTime;
    char ContraTrader[4];
    char Reserved16[16];
} AddFloorTradeMessageT;

/*
 * Bitfield: New Complex Instrument Byte 1
 */ 
typedef struct {
    unsigned char NewComplexInstrumentReservedBit8Exists : 1;
    unsigned char NewComplexInstrumentReservedBit7Exists : 1;
    unsigned char NewComplexInstrumentReservedBit6Exists : 1;
    unsigned char NewComplexInstrumentReservedBit5Exists : 1;
    unsigned char NewComplexInstrumentClearingFirmExists : 1;
    unsigned char NewComplexInstrumentLegStrikePriceExists : 1;
    unsigned char NewComplexInstrumentLegMaturityDateExists : 1;
    unsigned char NewComplexInstrumentLegCfiCodeExists : 1;
} NewComplexInstrumentByte1T;

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
    unsigned char ModifyOrderFrequentTraderIdExists : 1;
    unsigned char ModifyOrderReservedBit5Exists : 1;
    unsigned char ModifyOrderReservedBit4Exists : 1;
    unsigned char ModifyOrderRoutingFirmIdExists : 1;
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
    char Symbol[8];
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
    char Symbol[8];
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
    unsigned char CancelOrderRoutingFirmIdExists : 1;
    unsigned char CancelOrderMassCancelIdExists : 1;
    unsigned char CancelOrderRiskRootExists : 1;
    unsigned char CancelOrderMassCancelExists : 1;
    unsigned char CancelOrderMassCancelLockoutExists : 1;
    unsigned char CancelOrderClearingFirmExists : 1;
} CancelOrderByte1T;

/*
 * Bitfield: New Order Cross Multileg Byte 5
 */ 
typedef struct {
    unsigned char NewOrderCrossMultilegReservedBit8Exists : 1;
    unsigned char NewOrderCrossMultilegReservedBit7Exists : 1;
    unsigned char NewOrderCrossMultilegReservedBit6Exists : 1;
    unsigned char NewOrderCrossMultilegReservedBit5Exists : 1;
    unsigned char NewOrderCrossMultilegReservedBit4Exists : 1;
    unsigned char NewOrderCrossMultilegReservedBit3Exists : 1;
    unsigned char NewOrderCrossMultilegFrequentTraderIdExists : 1;
    unsigned char NewOrderCrossMultilegOrsExists : 1;
} NewOrderCrossMultilegByte5T;

/*
 * Bitfield: New Order Cross Multileg Byte 4
 */ 
typedef struct {
    unsigned char NewOrderCrossMultilegCompressionExists : 1;
    unsigned char NewOrderCrossMultilegEquityExDestinationExists : 1;
    unsigned char NewOrderCrossMultilegReservedBit6Exists : 1;
    unsigned char NewOrderCrossMultilegDrillThruProtectionExists : 1;
    unsigned char NewOrderCrossMultilegReservedBit4Exists : 1;
    unsigned char NewOrderCrossMultilegReservedBit3Exists : 1;
    unsigned char NewOrderCrossMultilegEquityLegShortSellExists : 1;
    unsigned char NewOrderCrossMultilegEquityPartyIdExists : 1;
} NewOrderCrossMultilegByte4T;

/*
 * Bitfield: New Order Cross Multileg Byte 3
 */ 
typedef struct {
    unsigned char NewOrderCrossMultilegSessionEligibilityExists : 1;
    unsigned char NewOrderCrossMultilegEquitySellClearingFirmExists : 1;
    unsigned char NewOrderCrossMultilegEquityBuyClearingFirmExists : 1;
    unsigned char NewOrderCrossMultilegEquityTransactTimeExists : 1;
    unsigned char NewOrderCrossMultilegEquityTradeVenueExists : 1;
    unsigned char NewOrderCrossMultilegEquityTradeSizeExists : 1;
    unsigned char NewOrderCrossMultilegEquityTradePriceExists : 1;
    unsigned char NewOrderCrossMultilegClientIdAttrExists : 1;
} NewOrderCrossMultilegByte3T;

/*
 * Bitfield: New Order Cross Multileg Byte 2
 */ 
typedef struct {
    unsigned char NewOrderCrossMultilegClearingOptionalDataExists : 1;
    unsigned char NewOrderCrossMultilegRoutingFirmIdExists : 1;
    unsigned char NewOrderCrossMultilegClearingAccountExists : 1;
    unsigned char NewOrderCrossMultilegCmtaNumberExists : 1;
    unsigned char NewOrderCrossMultilegAccountExists : 1;
    unsigned char NewOrderCrossMultilegLastPriorityExists : 1;
    unsigned char NewOrderCrossMultilegAutoMatchPriceExists : 1;
    unsigned char NewOrderCrossMultilegAutoMatchExists : 1;
} NewOrderCrossMultilegByte2T;

/*
 * Bitfield: New Order Cross Multileg Byte 1
 */ 
typedef struct {
    unsigned char NewOrderCrossMultilegPreventMatchExists : 1;
    unsigned char NewOrderCrossMultilegTargetPartyIdExists : 1;
    unsigned char NewOrderCrossMultilegAttributeQuoteExists : 1;
    unsigned char NewOrderCrossMultilegExecInstExists : 1;
    unsigned char NewOrderCrossMultilegReservedBit4Exists : 1;
    unsigned char NewOrderCrossMultilegReservedBit3Exists : 1;
    unsigned char NewOrderCrossMultilegReservedBit2Exists : 1;
    unsigned char NewOrderCrossMultilegSymbolExists : 1;
} NewOrderCrossMultilegByte1T;

/*
 * Bitfield: New Order Cross Byte 4
 */ 
typedef struct {
    unsigned char NewOrderCrossReservedBit8Exists : 1;
    unsigned char NewOrderCrossReservedBit7Exists : 1;
    unsigned char NewOrderCrossReservedBit6Exists : 1;
    unsigned char NewOrderCrossReservedBit5Exists : 1;
    unsigned char NewOrderCrossReservedBit4Exists : 1;
    unsigned char NewOrderCrossFrequentTraderIdExists : 1;
    unsigned char NewOrderCrossOrsExists : 1;
    unsigned char NewOrderCrossCompressionExists : 1;
} NewOrderCrossByte4T;

/*
 * Bitfield: New Order Cross Byte 3
 */ 
typedef struct {
    unsigned char NewOrderCrossSessionEligibilityExists : 1;
    unsigned char NewOrderCrossEquitySellClearingFirmExists : 1;
    unsigned char NewOrderCrossEquityBuyClearingFirmExists : 1;
    unsigned char NewOrderCrossEquityTransactTimeExists : 1;
    unsigned char NewOrderCrossEquityTradeVenueExists : 1;
    unsigned char NewOrderCrossEquityTradeSizeExists : 1;
    unsigned char NewOrderCrossEquityTradePriceExists : 1;
    unsigned char NewOrderCrossClientIdAttrExists : 1;
} NewOrderCrossByte3T;

/*
 * Bitfield: New Order Cross Byte 2
 */ 
typedef struct {
    unsigned char NewOrderCrossClearingOptionalDataExists : 1;
    unsigned char NewOrderCrossRoutingFirmIdExists : 1;
    unsigned char NewOrderCrossClearingAccountExists : 1;
    unsigned char NewOrderCrossCmtaNumberExists : 1;
    unsigned char NewOrderCrossAccountExists : 1;
    unsigned char NewOrderCrossLastPriorityExists : 1;
    unsigned char NewOrderCrossAutoMatchPriceExists : 1;
    unsigned char NewOrderCrossAutoMatchExists : 1;
} NewOrderCrossByte2T;

/*
 * Bitfield: New Order Cross Byte 1
 */ 
typedef struct {
    unsigned char NewOrderCrossPreventMatchExists : 1;
    unsigned char NewOrderCrossTargetPartyIdExists : 1;
    unsigned char NewOrderCrossAttributeQuoteExists : 1;
    unsigned char NewOrderCrossExecInstExists : 1;
    unsigned char NewOrderCrossPutOrCallExists : 1;
    unsigned char NewOrderCrossStrikePriceExists : 1;
    unsigned char NewOrderCrossMaturityDateExists : 1;
    unsigned char NewOrderCrossSymbolExists : 1;
} NewOrderCrossByte1T;

/*
 * Bitfield: New Order Byte 9
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderReservedBit7Exists : 1;
    unsigned char NewOrderReservedBit6Exists : 1;
    unsigned char NewOrderReservedBit5Exists : 1;
    unsigned char NewOrderReservedBit4Exists : 1;
    unsigned char NewOrderPriceTypeExists : 1;
    unsigned char NewOrderOrsExists : 1;
    unsigned char NewOrderOrderOriginExists : 1;
} NewOrderByte9T;

/*
 * Bitfield: New Order Byte 8
 */ 
typedef struct {
    unsigned char NewOrderFloorRoutingInstExists : 1;
    unsigned char NewOrderFloorDestinationExists : 1;
    unsigned char NewOrderCompressionExists : 1;
    unsigned char NewOrderFrequentTraderIdExists : 1;
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
    unsigned char NewOrderRoutingFirmIdExists : 1;
    unsigned char NewOrderAuctionIdExists : 1;
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
    unsigned char NewOrderTargetPartyIdExists : 1;
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
    unsigned char OrderExecutionFloorTraderAcronymExists : 1;
    unsigned char OrderExecutionSenderLocationIdExists : 1;
    unsigned char OrderExecutionTradeThroughAlertTypeExists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionStrategyIdExists : 1;
    unsigned char OrderExecutionPriceTypeExists : 1;
} OrderExecutionByte17T;

/*
 * Bitfield: Order Execution Byte 16
 */ 
typedef struct {
    unsigned char OrderExecutionOrderOriginExists : 1;
    unsigned char OrderExecutionMultiClassSprdExists : 1;
    unsigned char OrderExecutionFloorRoutingInstExists : 1;
    unsigned char OrderExecutionFloorDestinationExists : 1;
    unsigned char OrderExecutionCompressionExists : 1;
    unsigned char OrderExecutionComboOrderExists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionFrequentTraderIdExists : 1;
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
    unsigned char OrderExecutionEquityPartyIdExists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte15T;

/*
 * Bitfield: Order Execution Byte 14
 */ 
typedef struct {
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionSecondaryExecIdExists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte14T;

/*
 * Bitfield: Order Execution Byte 13
 */ 
typedef struct {
    unsigned char OrderExecutionMultilegReportingTypeExists : 1;
    unsigned char OrderExecutionDrillThruProtectionExists : 1;
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
    unsigned char OrderExecutionCrossExclusionIndicatorExists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionRoutingFirmIdExists : 1;
    unsigned char OrderExecutionGiveUpFirmIdExists : 1;
    unsigned char OrderExecutionAllocQtyExists : 1;
    unsigned char OrderExecutionCrossIdExists : 1;
} OrderExecutionByte10T;

/*
 * Bitfield: Order Execution Byte 9
 */ 
typedef struct {
    unsigned char OrderExecutionCrossPrioritizationExists : 1;
    unsigned char OrderExecutionCrossTypeExists : 1;
    unsigned char OrderExecutionCmtaNumberExists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionAuctionIdExists : 1;
    unsigned char OrderExecutionTargetPartyIdExists : 1;
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

