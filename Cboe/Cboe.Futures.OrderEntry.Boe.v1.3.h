/*******************************************************************************
 * C Structs For Cboe Futures Boe OrderEntry 1.3 protocol
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
#define ENUM_APPLICATION_MESSAGE_TYPE_USER_MODIFY_REJECTED = 0x29
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_CANCELLED = 0x2A
#define ENUM_APPLICATION_MESSAGE_TYPE_CANCEL_REJECTED = 0x2B
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_EXECUTION = 0x2C
#define ENUM_APPLICATION_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT = 0x2D
#define ENUM_APPLICATION_MESSAGE_TYPE_PURGE_REJECTED = 0x48
#define ENUM_APPLICATION_MESSAGE_TYPE_TAS_RESTATEMENT = 0x49
#define ENUM_APPLICATION_MESSAGE_TYPE_VARIANCE_RESTATEMENT = 0x4A

/*
 * Base Liquidity Indicator Values
 */ 
#define ENUM_BASE_LIQUIDITY_INDICATOR_ADDED_LIQUIDITY = 'A'
#define ENUM_BASE_LIQUIDITY_INDICATOR_REMOVED_LIQUIDITY = 'R'
#define ENUM_BASE_LIQUIDITY_INDICATOR_MARKET_OPENING = 'C'

/*
 * Cancel Orig On Reject Values
 */ 
#define ENUM_CANCEL_ORIG_ON_REJECT_LEAVE_ORIGINAL_ORDER_ALONE = 'N'
#define ENUM_CANCEL_ORIG_ON_REJECT_CANCEL_ORIGINAL_ORDER_IF_MODIFICATION_FAILS = 'Y'

/*
 * Cancel Reason Values
 */ 
#define ENUM_CANCEL_REASON_ADMIN = 'A'
#define ENUM_CANCEL_REASON_UNKNOWN_MATURITY_DATE = 'B'
#define ENUM_CANCEL_REASON_UNKNOWN_PRODUCT_NAME = 'C'
#define ENUM_CANCEL_REASON_DUPLICATE_IDENTIFIER = 'D'
#define ENUM_CANCEL_REASON_HALTED = 'H'
#define ENUM_CANCEL_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_CANCEL_REASON_TOO_LATE_TO_CANCEL = 'J'
#define ENUM_CANCEL_REASON_ORDER_RATE_THRESHOLD_EXCEEDED = 'K'
#define ENUM_CANCEL_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE = 'M'
#define ENUM_CANCEL_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST = 'N'
#define ENUM_CANCEL_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER = 'O'
#define ENUM_CANCEL_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL = 'P'
#define ENUM_CANCEL_REASON_USER_REQUESTED = 'U'
#define ENUM_CANCEL_REASON_WOULD_WASH = 'V'
#define ENUM_CANCEL_REASON_ORDER_EXPIRED = 'X'
#define ENUM_CANCEL_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_CANCEL_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_CANCEL_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT = 'n'
#define ENUM_CANCEL_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_CANCEL_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL = 's'
#define ENUM_CANCEL_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY = 'y'
#define ENUM_CANCEL_REASON_SESSION_END = 'z'

/*
 * Cancel Reject Reason Values
 */ 
#define ENUM_CANCEL_REJECT_REASON_ADMIN = 'A'
#define ENUM_CANCEL_REJECT_REASON_UNKNOWN_MATURITY_DATE = 'B'
#define ENUM_CANCEL_REJECT_REASON_UNKNOWN_PRODUCT_NAME = 'C'
#define ENUM_CANCEL_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
#define ENUM_CANCEL_REJECT_REASON_HALTED = 'H'
#define ENUM_CANCEL_REJECT_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_CANCEL_REJECT_REASON_TOO_LATE_TO_CANCEL = 'J'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED = 'K'
#define ENUM_CANCEL_REJECT_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE = 'M'
#define ENUM_CANCEL_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST = 'N'
#define ENUM_CANCEL_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER = 'O'
#define ENUM_CANCEL_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL = 'P'
#define ENUM_CANCEL_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_CANCEL_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_CANCEL_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_CANCEL_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_CANCEL_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_CANCEL_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT = 'n'
#define ENUM_CANCEL_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_CANCEL_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL = 's'
#define ENUM_CANCEL_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY = 'y'
#define ENUM_CANCEL_REJECT_REASON_SESSION_END = 'z'

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_CUSTOMER = 'C'
#define ENUM_CAPACITY_FIRM = 'F'

/*
 * Cti Code Values
 */ 
#define ENUM_CTI_CODE_CTI_2 = '1'
#define ENUM_CTI_CODE_CTI_2 = '2'
#define ENUM_CTI_CODE_CTI_3 = '3'
#define ENUM_CTI_CODE_CTI_4 = '4'

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
 * Manual Order Indicator Values
 */ 
#define ENUM_MANUAL_ORDER_INDICATOR_MANUAL_ORDER_ENTRY = 'Y'
#define ENUM_MANUAL_ORDER_INDICATOR_AUTOMATED_ORDER_ENTRY = 'N'
#define ENUM_MANUAL_ORDER_INDICATOR_SIMPLE_INSTRUMENT_EXECUTION = '1'
#define ENUM_MANUAL_ORDER_INDICATOR_SIMPLE_INSTRUMENT_EXECUTION_THAT_IS_PART_OF_A_SPREAD_EXECUTION = '2'
#define ENUM_MANUAL_ORDER_INDICATOR_SPREAD_INSTRUMENT_EXECUTION = '3'

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
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_MESSAGE = 0x70
#define ENUM_MESSAGE_TYPE_PURGE_ORDER_MESSAGE = 0x47
#define ENUM_MESSAGE_TYPE_RESET_RISK_MESSAGE = 0x56
#define ENUM_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT_MESSAGE = 0x25
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_ACKNOWLEDGMENT_MESSAGE = 0x71
#define ENUM_MESSAGE_TYPE_ORDER_REJECTED_MESSAGE = 0x26
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_REJECTED_MESSAGE = 0x78
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE = 0x27
#define ENUM_MESSAGE_TYPE_QUOTE_RESTATED_MESSAGE = 0x72
#define ENUM_MESSAGE_TYPE_USER_MODIFY_REJECTED_MESSAGE = 0x29
#define ENUM_MESSAGE_TYPE_ORDER_CANCELLED_MESSAGE = 0x2A
#define ENUM_MESSAGE_TYPE_QUOTE_CANCELLED_MESSAGE = 0x73
#define ENUM_MESSAGE_TYPE_CANCEL_REJECTED_MESSAGE = 0x2B
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTION_MESSAGE = 0x2C
#define ENUM_MESSAGE_TYPE_QUOTE_EXECUTION_MESSAGE = 0x74
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT_MESSAGE = 0x2D
#define ENUM_MESSAGE_TYPE_PURGE_REJECTED_MESSAGE = 0x48
#define ENUM_MESSAGE_TYPE_RISK_RESET_ACKNOWLEDGMENT_MESSAGE = 0x57
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_ACKNOWLEDGMENT_MESSAGE = 0x36
#define ENUM_MESSAGE_TYPE_TAS_RESTATEMENT_MESSAGE = 0x49
#define ENUM_MESSAGE_TYPE_VARIANCE_RESTATEMENT_MESSAGE = 0x4A
#define ENUM_MESSAGE_TYPE_TAS_QUOTE_RESTATEMENT_MESSAGE = 0x75
#define ENUM_MESSAGE_TYPE_VARIANCE_QUOTE_RESTATEMENT_MESSAGE = 0x76

/*
 * Modify Reject Reason Values
 */ 
#define ENUM_MODIFY_REJECT_REASON_ADMIN = 'A'
#define ENUM_MODIFY_REJECT_REASON_UNKNOWN_MATURITY_DATE = 'B'
#define ENUM_MODIFY_REJECT_REASON_UNKNOWN_PRODUCT_NAME = 'C'
#define ENUM_MODIFY_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
#define ENUM_MODIFY_REJECT_REASON_HALTED = 'H'
#define ENUM_MODIFY_REJECT_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_MODIFY_REJECT_REASON_TOO_LATE_TO_CANCEL = 'J'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED = 'K'
#define ENUM_MODIFY_REJECT_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE = 'M'
#define ENUM_MODIFY_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST = 'N'
#define ENUM_MODIFY_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER = 'O'
#define ENUM_MODIFY_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL = 'P'
#define ENUM_MODIFY_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_MODIFY_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_MODIFY_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_MODIFY_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_MODIFY_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_MODIFY_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT = 'n'
#define ENUM_MODIFY_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL = 's'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY = 'y'
#define ENUM_MODIFY_REJECT_REASON_SESSION_END = 'z'

/*
 * No Unspecified Unit Replay Values
 */ 
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_FALSE = '0'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TRUE = '1'

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
#define ENUM_ORD_TYPE_STOP_LIMIT = '4'

/*
 * Order Reject Reason Values
 */ 
#define ENUM_ORDER_REJECT_REASON_ADMIN = 'A'
#define ENUM_ORDER_REJECT_REASON_UNKNOWN_MATURITY_DATE = 'B'
#define ENUM_ORDER_REJECT_REASON_UNKNOWN_PRODUCT_NAME = 'C'
#define ENUM_ORDER_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
#define ENUM_ORDER_REJECT_REASON_HALTED = 'H'
#define ENUM_ORDER_REJECT_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_ORDER_REJECT_REASON_TOO_LATE_TO_CANCEL = 'J'
#define ENUM_ORDER_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED = 'K'
#define ENUM_ORDER_REJECT_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE = 'M'
#define ENUM_ORDER_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST = 'N'
#define ENUM_ORDER_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER = 'O'
#define ENUM_ORDER_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL = 'P'
#define ENUM_ORDER_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_ORDER_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_ORDER_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_ORDER_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_ORDER_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_ORDER_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT = 'n'
#define ENUM_ORDER_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL = 's'
#define ENUM_ORDER_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY = 'y'
#define ENUM_ORDER_REJECT_REASON_SESSION_END = 'z'

/*
 * Param Group Type Values
 */ 
#define ENUM_PARAM_GROUP_TYPE_UNIT_SEQUENCES = 0x80
#define ENUM_PARAM_GROUP_TYPE_RETURN_BITFIELDS = 0x81

/*
 * Pending Status Values
 */ 
#define ENUM_PENDING_STATUS_NOT_APPLICABLE = 'N'
#define ENUM_PENDING_STATUS_PENDING = 'P'

/*
 * Purge Reject Reason Values
 */ 
#define ENUM_PURGE_REJECT_REASON_ADMIN = 'A'
#define ENUM_PURGE_REJECT_REASON_UNKNOWN_MATURITY_DATE = 'B'
#define ENUM_PURGE_REJECT_REASON_UNKNOWN_PRODUCT_NAME = 'C'
#define ENUM_PURGE_REJECT_REASON_DUPLICATE_IDENTIFIER = 'D'
#define ENUM_PURGE_REJECT_REASON_HALTED = 'H'
#define ENUM_PURGE_REJECT_REASON_INCORRECT_DATA_CENTER = 'I'
#define ENUM_PURGE_REJECT_REASON_TOO_LATE_TO_CANCEL = 'J'
#define ENUM_PURGE_REJECT_REASON_ORDER_RATE_THRESHOLD_EXCEEDED = 'K'
#define ENUM_PURGE_REJECT_REASON_LIQUIDITY_AVAILABLE_EXCEEDS_ORDER_SIZE = 'M'
#define ENUM_PURGE_REJECT_REASON_RAN_OUT_OF_LIQUIDITY_TO_EXECUTE_AGAINST = 'N'
#define ENUM_PURGE_REJECT_REASON_CL_ORD_ID_DOESNT_MATCH_A_KNOWN_ORDER = 'O'
#define ENUM_PURGE_REJECT_REASON_CANT_MODIFY_AN_ORDER_THAT_IS_PENDING_FILL = 'P'
#define ENUM_PURGE_REJECT_REASON_USER_REQUESTED = 'U'
#define ENUM_PURGE_REJECT_REASON_WOULD_WASH = 'V'
#define ENUM_PURGE_REJECT_REASON_ORDER_EXPIRED = 'X'
#define ENUM_PURGE_REJECT_REASON_SYMBOL_NOT_SUPPORTED = 'Y'
#define ENUM_PURGE_REJECT_REASON_UNFORESEEN_REASON = 'Z'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL = 'f'
#define ENUM_PURGE_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED = 'm'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT = 'n'
#define ENUM_PURGE_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED = 'o'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL = 's'
#define ENUM_PURGE_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY = 'y'
#define ENUM_PURGE_REJECT_REASON_SESSION_END = 'z'

/*
 * Quote Liquidity Indicator Values
 */ 
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_CARRIED_ORDER_INDICATOR = 'C'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_MARKET_TURNER = 'U'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NORMAL = 'N'

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
#define ENUM_QUOTE_RESULT_RISK_MANAGEMENT_RISK_ROOT_LEVEL = 's'
#define ENUM_QUOTE_RESULT_REJECTED_OTHER_REASON = 'u'

/*
 * Risk Reset Result Values
 */ 
#define ENUM_RISK_RESET_RESULT_IGNORED = ' '
#define ENUM_RISK_RESET_RESULT_SUCCESS = 'Y'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_FIRM_RESET_LIMIT = 'F'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_CUSTOM_GROUP_ID_LIMIT = 'C'
#define ENUM_RISK_RESET_RESULT_REJECTED_EMPTY_RESET_RISK_FIELD = 'E'
#define ENUM_RISK_RESET_RESULT_REJECTED_INCORRECT_DATA_CENTER = 'I'
#define ENUM_RISK_RESET_RESULT_REJECTED_EXCEEDS_PRODUCT_LEVEL_RESET_LIMIT = 'S'
#define ENUM_RISK_RESET_RESULT_REJECTED_INVALID_RISK_ROOT = 'U'
#define ENUM_RISK_RESET_RESULT_REJECTED_INVALID_EFID_OR_CLEARING_FIRM = 'c'
#define ENUM_RISK_RESET_RESULT_REJECTED_IN_REPLAY = 'y'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY = '1'
#define ENUM_SIDE_SELL = '2'

/*
 * Size Modifier Values
 */ 
#define ENUM_SIZE_MODIFIER_REDUCE = 'R'

/*
 * Sub Liquidity Indicator Values
 */ 
#define ENUM_SUB_LIQUIDITY_INDICATOR_CARRIED_ORDER_INDICATOR = 'C'
#define ENUM_SUB_LIQUIDITY_INDICATOR_QUALIFYING_MARKET_TURNER_ORDER = 'U'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY = '0'
#define ENUM_TIME_IN_FORCE_GTC = '1'
#define ENUM_TIME_IN_FORCE_IOC = '3'
#define ENUM_TIME_IN_FORCE_FOK = '4'
#define ENUM_TIME_IN_FORCE_GTD = '6'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Variance Quote Restatement Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t ExecId;
    char Symbol[6];
    char ClearingSymbol[6];
    int64_t ClearingPrice;
    uint32_t ClearingSize;
    char Reserved16[16];
} VarianceQuoteRestatementMessageT;

/*
 * Structure: Tas Quote Restatement Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    uint64_t ExecId;
    char Symbol[6];
    char ClearingSymbol[6];
    int64_t ClearingPrice;
    char Reserved16[16];
} TasQuoteRestatementMessageT;

/*
 * Bitfield: Variance Restatement Byte 17
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte17T;

/*
 * Bitfield: Variance Restatement Byte 16
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementFrequentTraderIdExists : 1;
} VarianceRestatementByte16T;

/*
 * Bitfield: Variance Restatement Byte 15
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte15T;

/*
 * Bitfield: Variance Restatement Byte 14
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementSecondaryExecIdExists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte14T;

/*
 * Bitfield: Variance Restatement Byte 13
 */ 
typedef struct {
    unsigned char VarianceRestatementMultilegReportingTypeExists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte13T;

/*
 * Bitfield: Variance Restatement Byte 12
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementClearingSymbolExists : 1;
    unsigned char VarianceRestatementClearingSizeExists : 1;
    unsigned char VarianceRestatementClearingPriceExists : 1;
    unsigned char VarianceRestatementTradeDateExists : 1;
    unsigned char VarianceRestatementOeoidExists : 1;
    unsigned char VarianceRestatementManualOrderIndicatorExists : 1;
    unsigned char VarianceRestatementCtiCodeExists : 1;
} VarianceRestatementByte12T;

/*
 * Bitfield: Variance Restatement Byte 11
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte11T;

/*
 * Bitfield: Variance Restatement Byte 10
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte10T;

/*
 * Bitfield: Variance Restatement Byte 9
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementCmtaNumberExists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte9T;

/*
 * Bitfield: Variance Restatement Byte 8
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementStopPxExists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementFeeCodeExists : 1;
} VarianceRestatementByte8T;

/*
 * Bitfield: Variance Restatement Byte 7
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte7T;

/*
 * Bitfield: Variance Restatement Byte 6
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte6T;

/*
 * Bitfield: Variance Restatement Byte 5
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementLastPxExists : 1;
    unsigned char VarianceRestatementLastSharesExists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementOrigClOrdIdExists : 1;
} VarianceRestatementByte5T;

/*
 * Bitfield: Variance Restatement Byte 4
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementOpenCloseExists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementMaturityDateExists : 1;
} VarianceRestatementByte4T;

/*
 * Bitfield: Variance Restatement Byte 3
 */ 
typedef struct {
    unsigned char VarianceRestatementPreventMatchExists : 1;
    unsigned char VarianceRestatementReservedBit7Exists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementClearingAccountExists : 1;
    unsigned char VarianceRestatementClearingFirmExists : 1;
    unsigned char VarianceRestatementAccountExists : 1;
} VarianceRestatementByte3T;

/*
 * Bitfield: Variance Restatement Byte 2
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementCapacityExists : 1;
    unsigned char VarianceRestatementReservedBit6Exists : 1;
    unsigned char VarianceRestatementReservedBit5Exists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementReservedBit3Exists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementSymbolExists : 1;
} VarianceRestatementByte2T;

/*
 * Bitfield: Variance Restatement Byte 1
 */ 
typedef struct {
    unsigned char VarianceRestatementReservedBit8Exists : 1;
    unsigned char VarianceRestatementMinQtyExists : 1;
    unsigned char VarianceRestatementTimeInForceExists : 1;
    unsigned char VarianceRestatementOrdTypeExists : 1;
    unsigned char VarianceRestatementReservedBit4Exists : 1;
    unsigned char VarianceRestatementPriceExists : 1;
    unsigned char VarianceRestatementReservedBit2Exists : 1;
    unsigned char VarianceRestatementSideExists : 1;
} VarianceRestatementByte1T;

/*
 * Bitfield: Tas Restatement Byte 17
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementReservedBit1Exists : 1;
} TasRestatementByte17T;

/*
 * Bitfield: Tas Restatement Byte 16
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementFrequentTraderIdExists : 1;
} TasRestatementByte16T;

/*
 * Bitfield: Tas Restatement Byte 15
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementReservedBit1Exists : 1;
} TasRestatementByte15T;

/*
 * Bitfield: Tas Restatement Byte 14
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementSecondaryExecIdExists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementReservedBit1Exists : 1;
} TasRestatementByte14T;

/*
 * Bitfield: Tas Restatement Byte 13
 */ 
typedef struct {
    unsigned char TasRestatementMultilegReportingTypeExists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementReservedBit1Exists : 1;
} TasRestatementByte13T;

/*
 * Bitfield: Tas Restatement Byte 12
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementClearingSymbolExists : 1;
    unsigned char TasRestatementClearingSizeExists : 1;
    unsigned char TasRestatementClearingPriceExists : 1;
    unsigned char TasRestatementTradeDateExists : 1;
    unsigned char TasRestatementOeoidExists : 1;
    unsigned char TasRestatementManualOrderIndicatorExists : 1;
    unsigned char TasRestatementCtiCodeExists : 1;
} TasRestatementByte12T;

/*
 * Bitfield: Tas Restatement Byte 11
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementReservedBit1Exists : 1;
} TasRestatementByte11T;

/*
 * Bitfield: Tas Restatement Byte 10
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementReservedBit1Exists : 1;
} TasRestatementByte10T;

/*
 * Bitfield: Tas Restatement Byte 9
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementCmtaNumberExists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementReservedBit1Exists : 1;
} TasRestatementByte9T;

/*
 * Bitfield: Tas Restatement Byte 8
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementStopPxExists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementFeeCodeExists : 1;
} TasRestatementByte8T;

/*
 * Bitfield: Tas Restatement Byte 7
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementReservedBit1Exists : 1;
} TasRestatementByte7T;

/*
 * Bitfield: Tas Restatement Byte 6
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementReservedBit1Exists : 1;
} TasRestatementByte6T;

/*
 * Bitfield: Tas Restatement Byte 5
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementLastPxExists : 1;
    unsigned char TasRestatementLastSharesExists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementOrigClOrdIdExists : 1;
} TasRestatementByte5T;

/*
 * Bitfield: Tas Restatement Byte 4
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementReservedBit7Exists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementOpenCloseExists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementMaturityDateExists : 1;
} TasRestatementByte4T;

/*
 * Bitfield: Tas Restatement Byte 3
 */ 
typedef struct {
    unsigned char TasRestatementPreventMatchExists : 1;
    unsigned char TasRestatementOrderQtyExists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementClearingAccountExists : 1;
    unsigned char TasRestatementClearingFirmExists : 1;
    unsigned char TasRestatementAccountExists : 1;
} TasRestatementByte3T;

/*
 * Bitfield: Tas Restatement Byte 2
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementCapacityExists : 1;
    unsigned char TasRestatementReservedBit6Exists : 1;
    unsigned char TasRestatementReservedBit5Exists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementReservedBit3Exists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementSymbolExists : 1;
} TasRestatementByte2T;

/*
 * Bitfield: Tas Restatement Byte 1
 */ 
typedef struct {
    unsigned char TasRestatementReservedBit8Exists : 1;
    unsigned char TasRestatementMinQtyExists : 1;
    unsigned char TasRestatementTimeInForceExists : 1;
    unsigned char TasRestatementOrdTypeExists : 1;
    unsigned char TasRestatementReservedBit4Exists : 1;
    unsigned char TasRestatementPriceExists : 1;
    unsigned char TasRestatementReservedBit2Exists : 1;
    unsigned char TasRestatementSideExists : 1;
} TasRestatementByte1T;

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
 * Structure: Risk Reset Acknowledgment Message
 */ 
typedef struct {
    char RiskStatusId[16];
    char RiskResetResult;
} RiskResetAcknowledgmentMessageT;

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
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
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
    unsigned char TradeCancelOrCorrectReservedBit1Exists : 1;
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
    unsigned char TradeCancelOrCorrectReservedBit3Exists : 1;
    unsigned char TradeCancelOrCorrectReservedBit2Exists : 1;
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
    char Side;
    char BaseLiquidityIndicator;
    char SubLiquidityIndicator;
    char FeeCode[2];
} QuoteExecutionMessageT;

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
    unsigned char OrderExecutionFrequentTraderIdExists : 1;
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
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionPendingStatusExists : 1;
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
    unsigned char OrderExecutionReservedBit8Exists : 1;
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionClearingSizeExists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionTradeDateExists : 1;
    unsigned char OrderExecutionOeoidExists : 1;
    unsigned char OrderExecutionManualOrderIndicatorExists : 1;
    unsigned char OrderExecutionCtiCodeExists : 1;
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
    unsigned char OrderExecutionCmtaNumberExists : 1;
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
    unsigned char OrderExecutionReservedBit7Exists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionStopPxExists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
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
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte6T;

/*
 * Bitfield: Order Execution Byte 5
 */ 
typedef struct {
    unsigned char OrderExecutionExpireTimeExists : 1;
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
    unsigned char OrderExecutionOpenCloseExists : 1;
    unsigned char OrderExecutionReservedBit3Exists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
    unsigned char OrderExecutionMaturityDateExists : 1;
} OrderExecutionByte4T;

/*
 * Bitfield: Order Execution Byte 3
 */ 
typedef struct {
    unsigned char OrderExecutionPreventMatchExists : 1;
    unsigned char OrderExecutionOrderQtyExists : 1;
    unsigned char OrderExecutionReservedBit6Exists : 1;
    unsigned char OrderExecutionReservedBit5Exists : 1;
    unsigned char OrderExecutionReservedBit4Exists : 1;
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
    unsigned char OrderExecutionReservedBit2Exists : 1;
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
    unsigned char OrderExecutionReservedBit4Exists : 1;
    unsigned char OrderExecutionPriceExists : 1;
    unsigned char OrderExecutionReservedBit2Exists : 1;
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
    unsigned char CancelRejectedOeoidExists : 1;
    unsigned char CancelRejectedManualOrderIndicatorExists : 1;
    unsigned char CancelRejectedCtiCodeExists : 1;
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
    unsigned char CancelRejectedCmtaNumberExists : 1;
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
    unsigned char CancelRejectedReservedBit5Exists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
    unsigned char CancelRejectedStopPxExists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
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
    unsigned char CancelRejectedExpireTimeExists : 1;
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
    unsigned char CancelRejectedOpenCloseExists : 1;
    unsigned char CancelRejectedReservedBit3Exists : 1;
    unsigned char CancelRejectedReservedBit2Exists : 1;
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
    unsigned char CancelRejectedReservedBit8Exists : 1;
    unsigned char CancelRejectedMinQtyExists : 1;
    unsigned char CancelRejectedTimeInForceExists : 1;
    unsigned char CancelRejectedOrdTypeExists : 1;
    unsigned char CancelRejectedReservedBit4Exists : 1;
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
    unsigned char OrderCancelledOeoidExists : 1;
    unsigned char OrderCancelledManualOrderIndicatorExists : 1;
    unsigned char OrderCancelledCtiCodeExists : 1;
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
    unsigned char OrderCancelledCmtaNumberExists : 1;
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
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledStopPxExists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
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
    unsigned char OrderCancelledReservedBit4Exists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledSecondaryOrderIdExists : 1;
} OrderCancelledByte6T;

/*
 * Bitfield: Order Cancelled Byte 5
 */ 
typedef struct {
    unsigned char OrderCancelledExpireTimeExists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledLastPxExists : 1;
    unsigned char OrderCancelledLastSharesExists : 1;
    unsigned char OrderCancelledLeavesQtyExists : 1;
    unsigned char OrderCancelledReservedBit1Exists : 1;
} OrderCancelledByte5T;

/*
 * Bitfield: Order Cancelled Byte 4
 */ 
typedef struct {
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledReservedBit7Exists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledOpenCloseExists : 1;
    unsigned char OrderCancelledReservedBit3Exists : 1;
    unsigned char OrderCancelledReservedBit2Exists : 1;
    unsigned char OrderCancelledMaturityDateExists : 1;
} OrderCancelledByte4T;

/*
 * Bitfield: Order Cancelled Byte 3
 */ 
typedef struct {
    unsigned char OrderCancelledPreventMatchExists : 1;
    unsigned char OrderCancelledOrderQtyExists : 1;
    unsigned char OrderCancelledReservedBit6Exists : 1;
    unsigned char OrderCancelledReservedBit5Exists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
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
    unsigned char OrderCancelledReservedBit8Exists : 1;
    unsigned char OrderCancelledMinQtyExists : 1;
    unsigned char OrderCancelledTimeInForceExists : 1;
    unsigned char OrderCancelledOrdTypeExists : 1;
    unsigned char OrderCancelledReservedBit4Exists : 1;
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
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedFrequentTraderIdExists : 1;
} OrderModifiedByte16T;

/*
 * Bitfield: Order Modified Byte 15
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
    unsigned char OrderModifiedOeoidExists : 1;
    unsigned char OrderModifiedManualOrderIndicatorExists : 1;
    unsigned char OrderModifiedCtiCodeExists : 1;
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
    unsigned char OrderModifiedCmtaNumberExists : 1;
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
    unsigned char OrderModifiedReservedBit7Exists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedStopPxExists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
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
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte6T;

/*
 * Bitfield: Order Modified Byte 5
 */ 
typedef struct {
    unsigned char OrderModifiedExpireTimeExists : 1;
    unsigned char OrderModifiedBaseLiquidityIndicatorExists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
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
    unsigned char OrderModifiedOpenCloseExists : 1;
    unsigned char OrderModifiedReservedBit3Exists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedMaturityDateExists : 1;
} OrderModifiedByte4T;

/*
 * Bitfield: Order Modified Byte 3
 */ 
typedef struct {
    unsigned char OrderModifiedPreventMatchExists : 1;
    unsigned char OrderModifiedOrderQtyExists : 1;
    unsigned char OrderModifiedReservedBit6Exists : 1;
    unsigned char OrderModifiedReservedBit5Exists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
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
    unsigned char OrderModifiedReservedBit8Exists : 1;
    unsigned char OrderModifiedMinQtyExists : 1;
    unsigned char OrderModifiedTimeInForceExists : 1;
    unsigned char OrderModifiedOrdTypeExists : 1;
    unsigned char OrderModifiedReservedBit4Exists : 1;
    unsigned char OrderModifiedPriceExists : 1;
    unsigned char OrderModifiedReservedBit2Exists : 1;
    unsigned char OrderModifiedSideExists : 1;
} OrderModifiedByte1T;

/*
 * Structure: Quote Update Rejected Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char QuoteUpdateId[16];
    char QuoteRejectReason[1];
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
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedFrequentTraderIdExists : 1;
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
    unsigned char OrderRejectedOeoidExists : 1;
    unsigned char OrderRejectedManualOrderIndicatorExists : 1;
    unsigned char OrderRejectedCtiCodeExists : 1;
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
    unsigned char OrderRejectedCmtaNumberExists : 1;
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
    unsigned char OrderRejectedReservedBit7Exists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedStopPxExists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
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
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedReservedBit1Exists : 1;
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
    unsigned char OrderRejectedOpenCloseExists : 1;
    unsigned char OrderRejectedReservedBit3Exists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
    unsigned char OrderRejectedMaturityDateExists : 1;
} OrderRejectedByte4T;

/*
 * Bitfield: Order Rejected Byte 3
 */ 
typedef struct {
    unsigned char OrderRejectedPreventMatchExists : 1;
    unsigned char OrderRejectedOrderQtyExists : 1;
    unsigned char OrderRejectedReservedBit6Exists : 1;
    unsigned char OrderRejectedReservedBit5Exists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
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
    unsigned char OrderRejectedReservedBit8Exists : 1;
    unsigned char OrderRejectedMinQtyExists : 1;
    unsigned char OrderRejectedTimeInForceExists : 1;
    unsigned char OrderRejectedOrdTypeExists : 1;
    unsigned char OrderRejectedReservedBit4Exists : 1;
    unsigned char OrderRejectedPriceExists : 1;
    unsigned char OrderRejectedReservedBit2Exists : 1;
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
    char QuoteRejectReason[1];
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
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentFrequentTraderIdExists : 1;
} OrderAcknowledgmentByte16T;

/*
 * Bitfield: Order Acknowledgment Byte 15
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
    unsigned char OrderAcknowledgmentDayAvgPxExists : 1;
    unsigned char OrderAcknowledgmentAvgPxExists : 1;
    unsigned char OrderAcknowledgmentDayCumQtyExists : 1;
    unsigned char OrderAcknowledgmentDayOrderQtyExists : 1;
    unsigned char OrderAcknowledgmentCumQtyExists : 1;
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
    unsigned char OrderAcknowledgmentOeoidExists : 1;
    unsigned char OrderAcknowledgmentManualOrderIndicatorExists : 1;
    unsigned char OrderAcknowledgmentCtiCodeExists : 1;
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
    unsigned char OrderAcknowledgmentCmtaNumberExists : 1;
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
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentStopPxExists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
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
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte6T;

/*
 * Bitfield: Order Acknowledgment Byte 5
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentExpireTimeExists : 1;
    unsigned char OrderAcknowledgmentBaseLiquidityIndicatorExists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentLeavesQtyExists : 1;
    unsigned char OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte5T;

/*
 * Bitfield: Order Acknowledgment Byte 4
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit7Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentOpenCloseExists : 1;
    unsigned char OrderAcknowledgmentReservedBit3Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentMaturityDateExists : 1;
} OrderAcknowledgmentByte4T;

/*
 * Bitfield: Order Acknowledgment Byte 3
 */ 
typedef struct {
    unsigned char OrderAcknowledgmentPreventMatchExists : 1;
    unsigned char OrderAcknowledgmentOrderQtyExists : 1;
    unsigned char OrderAcknowledgmentReservedBit6Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit5Exists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
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
    unsigned char OrderAcknowledgmentReservedBit8Exists : 1;
    unsigned char OrderAcknowledgmentMinQtyExists : 1;
    unsigned char OrderAcknowledgmentTimeInForceExists : 1;
    unsigned char OrderAcknowledgmentOrdTypeExists : 1;
    unsigned char OrderAcknowledgmentReservedBit4Exists : 1;
    unsigned char OrderAcknowledgmentPriceExists : 1;
    unsigned char OrderAcknowledgmentReservedBit2Exists : 1;
    unsigned char OrderAcknowledgmentSideExists : 1;
} OrderAcknowledgmentByte1T;

/*
 * Structure: Reset Risk Message
 */ 
typedef struct {
    char RiskStatusId[16];
    char RiskReset[8];
    char RiskReset[8];
    char Reserved4[4];
    char ClearingFirm[4];
    char ProductName[6];
    uint16_t CustomGroupId;
} ResetRiskMessageT;

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
    unsigned char PurgeOrderReservedBit2Exists : 1;
    unsigned char PurgeOrderReservedBit1Exists : 1;
} PurgeOrderByte2T;

/*
 * Bitfield: Purge Order Byte 1
 */ 
typedef struct {
    unsigned char PurgeOrderOeoidExists : 1;
    unsigned char PurgeOrderManualOrderIndicatorExists : 1;
    unsigned char PurgeOrderReservedBit6Exists : 1;
    unsigned char PurgeOrderMassCancelIdExists : 1;
    unsigned char PurgeOrderProductNameExists : 1;
    unsigned char PurgeOrderMassCancelInstExists : 1;
    unsigned char PurgeOrderReservedBit2Exists : 1;
    unsigned char PurgeOrderClearingFirmExists : 1;
} PurgeOrderByte1T;

/*
 * Structure: Quote Group
 */ 
typedef struct {
    char Symbol[6];
    char Side;
    char OpenClose;
    int64_t Price;
    uint32_t OrderQty;
    char Reserved12[12];
} QuoteGroupT;

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
    char Reserved6[6];
    uint8_t NumberOfQuotes;
} QuoteUpdateMessageT;

/*
 * Bitfield: Modify Order Byte 2
 */ 
typedef struct {
    unsigned char ModifyOrderReservedBit8Exists : 1;
    unsigned char ModifyOrderReservedBit7Exists : 1;
    unsigned char ModifyOrderFrequentTraderIdExists : 1;
    unsigned char ModifyOrderOeoidExists : 1;
    unsigned char ModifyOrderManualOrderIndicatorExists : 1;
    unsigned char ModifyOrderReservedBit3Exists : 1;
    unsigned char ModifyOrderStopPxExists : 1;
    unsigned char ModifyOrderReservedBit1Exists : 1;
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
    unsigned char CancelOrderMassCancelInstExists : 1;
} CancelOrderByte2T;

/*
 * Bitfield: Cancel Order Byte 1
 */ 
typedef struct {
    unsigned char CancelOrderOeoidExists : 1;
    unsigned char CancelOrderManualOrderIndicatorExists : 1;
    unsigned char CancelOrderReservedBit6Exists : 1;
    unsigned char CancelOrderMassCancelIdExists : 1;
    unsigned char CancelOrderProductNameExists : 1;
    unsigned char CancelOrderReservedBit3Exists : 1;
    unsigned char CancelOrderReservedBit2Exists : 1;
    unsigned char CancelOrderClearingFirmExists : 1;
} CancelOrderByte1T;

/*
 * Bitfield: New Order Byte 8
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderReservedBit7Exists : 1;
    unsigned char NewOrderReservedBit6Exists : 1;
    unsigned char NewOrderFrequentTraderIdExists : 1;
    unsigned char NewOrderReservedBit4Exists : 1;
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderReservedBit2Exists : 1;
    unsigned char NewOrderReservedBit1Exists : 1;
} NewOrderByte8T;

/*
 * Bitfield: New Order Byte 7
 */ 
typedef struct {
    unsigned char NewOrderOeoidExists : 1;
    unsigned char NewOrderManualOrderIndicatorExists : 1;
    unsigned char NewOrderCtiCodeExists : 1;
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
    unsigned char NewOrderReservedBit6Exists : 1;
    unsigned char NewOrderReservedBit5Exists : 1;
    unsigned char NewOrderReservedBit4Exists : 1;
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderStopPxExists : 1;
    unsigned char NewOrderReservedBit1Exists : 1;
} NewOrderByte6T;

/*
 * Bitfield: New Order Byte 5
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
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderReservedBit2Exists : 1;
    unsigned char NewOrderMaturityDateExists : 1;
} NewOrderByte4T;

/*
 * Bitfield: New Order Byte 3
 */ 
typedef struct {
    unsigned char NewOrderExpireTimeExists : 1;
    unsigned char NewOrderReservedBit7Exists : 1;
    unsigned char NewOrderPreventMatchExists : 1;
    unsigned char NewOrderReservedBit5Exists : 1;
    unsigned char NewOrderReservedBit4Exists : 1;
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderReservedBit2Exists : 1;
    unsigned char NewOrderAccountExists : 1;
} NewOrderByte3T;

/*
 * Bitfield: New Order Byte 2
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderCapacityExists : 1;
    unsigned char NewOrderReservedBit6Exists : 1;
    unsigned char NewOrderReservedBit5Exists : 1;
    unsigned char NewOrderReservedBit4Exists : 1;
    unsigned char NewOrderReservedBit3Exists : 1;
    unsigned char NewOrderReservedBit2Exists : 1;
    unsigned char NewOrderSymbolExists : 1;
} NewOrderByte2T;

/*
 * Bitfield: New Order Byte 1
 */ 
typedef struct {
    unsigned char NewOrderReservedBit8Exists : 1;
    unsigned char NewOrderMinQtyExists : 1;
    unsigned char NewOrderTimeInForceExists : 1;
    unsigned char NewOrderOrdTypeExists : 1;
    unsigned char NewOrderReservedBit4Exists : 1;
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

