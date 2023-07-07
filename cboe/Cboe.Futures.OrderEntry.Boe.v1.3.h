/*******************************************************************************
 * C Structs For Cboe Futures Boe OrderEntry 1.3 Binary Model
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
#define ENUM_APPLICATION_MESSAGE_TYPE_USER_MODIFY_REJECTED 0x29
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_CANCELLED 0x2A
#define ENUM_APPLICATION_MESSAGE_TYPE_CANCEL_REJECTED 0x2B
#define ENUM_APPLICATION_MESSAGE_TYPE_ORDER_EXECUTION 0x2C
#define ENUM_APPLICATION_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT 0x2D
#define ENUM_APPLICATION_MESSAGE_TYPE_PURGE_REJECTED 0x48
#define ENUM_APPLICATION_MESSAGE_TYPE_TAS_RESTATEMENT 0x49
#define ENUM_APPLICATION_MESSAGE_TYPE_VARIANCE_RESTATEMENT 0x4A

/*
 * Base Liquidity Indicator Values
 */ 
#define ENUM_BASE_LIQUIDITY_INDICATOR_ADDED_LIQUIDITY 'A'
#define ENUM_BASE_LIQUIDITY_INDICATOR_REMOVED_LIQUIDITY 'R'
#define ENUM_BASE_LIQUIDITY_INDICATOR_MARKET_OPENING 'C'

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
 * Cti Code Values
 */ 
#define ENUM_CTI_CODE_CTI_2 '1'
#define ENUM_CTI_CODE_CTI_2 '2'
#define ENUM_CTI_CODE_CTI_3 '3'
#define ENUM_CTI_CODE_CTI_4 '4'

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
 * Manual Order Indicator Values
 */ 
#define ENUM_MANUAL_ORDER_INDICATOR_MANUAL_ORDER_ENTRY 'Y'
#define ENUM_MANUAL_ORDER_INDICATOR_AUTOMATED_ORDER_ENTRY 'N'
#define ENUM_MANUAL_ORDER_INDICATOR_SIMPLE_INSTRUMENT_EXECUTION '1'
#define ENUM_MANUAL_ORDER_INDICATOR_SIMPLE_INSTRUMENT_EXECUTION_THAT_IS_PART_OF_A_SPREAD_EXECUTION '2'
#define ENUM_MANUAL_ORDER_INDICATOR_SPREAD_INSTRUMENT_EXECUTION '3'

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
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_MESSAGE 0x70
#define ENUM_MESSAGE_TYPE_PURGE_ORDER_MESSAGE 0x47
#define ENUM_MESSAGE_TYPE_RESET_RISK_MESSAGE 0x56
#define ENUM_MESSAGE_TYPE_ORDER_ACKNOWLEDGMENT_MESSAGE 0x25
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_ACKNOWLEDGMENT_MESSAGE 0x71
#define ENUM_MESSAGE_TYPE_ORDER_REJECTED_MESSAGE 0x26
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_REJECTED_MESSAGE 0x78
#define ENUM_MESSAGE_TYPE_ORDER_MODIFIED_MESSAGE 0x27
#define ENUM_MESSAGE_TYPE_QUOTE_RESTATED_MESSAGE 0x72
#define ENUM_MESSAGE_TYPE_USER_MODIFY_REJECTED_MESSAGE 0x29
#define ENUM_MESSAGE_TYPE_ORDER_CANCELLED_MESSAGE 0x2A
#define ENUM_MESSAGE_TYPE_QUOTE_CANCELLED_MESSAGE 0x73
#define ENUM_MESSAGE_TYPE_CANCEL_REJECTED_MESSAGE 0x2B
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTION_MESSAGE 0x2C
#define ENUM_MESSAGE_TYPE_QUOTE_EXECUTION_MESSAGE 0x74
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_OR_CORRECT_MESSAGE 0x2D
#define ENUM_MESSAGE_TYPE_PURGE_REJECTED_MESSAGE 0x48
#define ENUM_MESSAGE_TYPE_RISK_RESET_ACKNOWLEDGMENT_MESSAGE 0x57
#define ENUM_MESSAGE_TYPE_MASS_CANCEL_ACKNOWLEDGMENT_MESSAGE 0x36
#define ENUM_MESSAGE_TYPE_TAS_RESTATEMENT_MESSAGE 0x49
#define ENUM_MESSAGE_TYPE_VARIANCE_RESTATEMENT_MESSAGE 0x4A
#define ENUM_MESSAGE_TYPE_TAS_QUOTE_RESTATEMENT_MESSAGE 0x75
#define ENUM_MESSAGE_TYPE_VARIANCE_QUOTE_RESTATEMENT_MESSAGE 0x76

/*
 * Modify Reject Reason Values
 */ 
#define ENUM_MODIFY_REJECT_REASON_ADMIN 'A'
#define ENUM_MODIFY_REJECT_REASON_UNKNOWN_MATURITY_DATE 'B'
#define ENUM_MODIFY_REJECT_REASON_UNKNOWN_PRODUCT_NAME 'C'
#define ENUM_MODIFY_REJECT_REASON_DUPLICATE_IDENTIFIER 'D'
#define ENUM_MODIFY_REJECT_REASON_HALTED 'H'
#define ENUM_MODIFY_REJECT_REASON_INCORRECT_DATA_CENTER 'I'
#define ENUM_MODIFY_REJECT_REASON_TOO_LATE_TO_CANCEL 'J'
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
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_MODIFY_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT 'n'
#define ENUM_MODIFY_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_MODIFY_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL 's'
#define ENUM_MODIFY_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY 'y'
#define ENUM_MODIFY_REJECT_REASON_SESSION_END 'z'

/*
 * No Unspecified Unit Replay Values
 */ 
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_FALSE '0'
#define ENUM_NO_UNSPECIFIED_UNIT_REPLAY_TRUE '1'

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
#define ENUM_ORDER_REJECT_REASON_TOO_LATE_TO_CANCEL 'J'
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
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_ORDER_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT 'n'
#define ENUM_ORDER_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_ORDER_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL 's'
#define ENUM_ORDER_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY 'y'
#define ENUM_ORDER_REJECT_REASON_SESSION_END 'z'

/*
 * Param Group Type Values
 */ 
#define ENUM_PARAM_GROUP_TYPE_UNIT_SEQUENCES 0x80
#define ENUM_PARAM_GROUP_TYPE_RETURN_BITFIELDS 0x81

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
#define ENUM_PURGE_REJECT_REASON_TOO_LATE_TO_CANCEL 'J'
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
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_MPID_OR_CUSTOM_GROUP_ID_LEVEL 'f'
#define ENUM_PURGE_REJECT_REASON_MARKET_ACCESS_RISK_LIMIT_EXCEEDED 'm'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_CONFIGURATION_IS_INSUFFICIENT 'n'
#define ENUM_PURGE_REJECT_REASON_MAX_OPEN_ORDERS_COUNT_EXCEEDED 'o'
#define ENUM_PURGE_REJECT_REASON_RISK_MANAGEMENT_PRODUCT_LEVEL 's'
#define ENUM_PURGE_REJECT_REASON_ORDER_RECEIVED_BY_CFE_DURING_REPLAY 'y'
#define ENUM_PURGE_REJECT_REASON_SESSION_END 'z'

/*
 * Quote Liquidity Indicator Values
 */ 
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_CARRIED_ORDER_INDICATOR 'C'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_MARKET_TURNER 'U'
#define ENUM_QUOTE_LIQUIDITY_INDICATOR_NORMAL 'N'

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
#define ENUM_QUOTE_RESULT_REJECTED_OTHER_REASON 'u'

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


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

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
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte17T;

/*
 * Bitfield: Variance Restatement Byte 16
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementFrequentTraderIdExists : 1;
} VarianceRestatementByte16T;

/*
 * Bitfield: Variance Restatement Byte 15
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte15T;

/*
 * Bitfield: Variance Restatement Byte 14
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementSecondaryExecIdExists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte14T;

/*
 * Bitfield: Variance Restatement Byte 13
 */ 
typedef struct {
    uint8_t
    VarianceRestatementMultilegReportingTypeExists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte13T;

/*
 * Bitfield: Variance Restatement Byte 12
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementClearingSymbolExists : 1,
    VarianceRestatementClearingSizeExists : 1,
    VarianceRestatementClearingPriceExists : 1,
    VarianceRestatementTradeDateExists : 1,
    VarianceRestatementOeoidExists : 1,
    VarianceRestatementManualOrderIndicatorExists : 1,
    VarianceRestatementCtiCodeExists : 1;
} VarianceRestatementByte12T;

/*
 * Bitfield: Variance Restatement Byte 11
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte11T;

/*
 * Bitfield: Variance Restatement Byte 10
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte10T;

/*
 * Bitfield: Variance Restatement Byte 9
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementCmtaNumberExists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte9T;

/*
 * Bitfield: Variance Restatement Byte 8
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementStopPxExists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementFeeCodeExists : 1;
} VarianceRestatementByte8T;

/*
 * Bitfield: Variance Restatement Byte 7
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte7T;

/*
 * Bitfield: Variance Restatement Byte 6
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementReservedBit1Exists : 1;
} VarianceRestatementByte6T;

/*
 * Bitfield: Variance Restatement Byte 5
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementLastPxExists : 1,
    VarianceRestatementLastSharesExists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementOrigClOrdIdExists : 1;
} VarianceRestatementByte5T;

/*
 * Bitfield: Variance Restatement Byte 4
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementOpenCloseExists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementMaturityDateExists : 1;
} VarianceRestatementByte4T;

/*
 * Bitfield: Variance Restatement Byte 3
 */ 
typedef struct {
    uint8_t
    VarianceRestatementPreventMatchExists : 1,
    VarianceRestatementReservedBit7Exists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementClearingAccountExists : 1,
    VarianceRestatementClearingFirmExists : 1,
    VarianceRestatementAccountExists : 1;
} VarianceRestatementByte3T;

/*
 * Bitfield: Variance Restatement Byte 2
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementCapacityExists : 1,
    VarianceRestatementReservedBit6Exists : 1,
    VarianceRestatementReservedBit5Exists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementReservedBit3Exists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementSymbolExists : 1;
} VarianceRestatementByte2T;

/*
 * Bitfield: Variance Restatement Byte 1
 */ 
typedef struct {
    uint8_t
    VarianceRestatementReservedBit8Exists : 1,
    VarianceRestatementMinQtyExists : 1,
    VarianceRestatementTimeInForceExists : 1,
    VarianceRestatementOrdTypeExists : 1,
    VarianceRestatementReservedBit4Exists : 1,
    VarianceRestatementPriceExists : 1,
    VarianceRestatementReservedBit2Exists : 1,
    VarianceRestatementSideExists : 1;
} VarianceRestatementByte1T;

/*
 * Structure: Variance Restatement Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    uint64_t ExecId;
    char ReservedInternal[1];
} VarianceRestatementMessageT;

/*
 * Bitfield: Tas Restatement Byte 17
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementReservedBit1Exists : 1;
} TasRestatementByte17T;

/*
 * Bitfield: Tas Restatement Byte 16
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementFrequentTraderIdExists : 1;
} TasRestatementByte16T;

/*
 * Bitfield: Tas Restatement Byte 15
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementReservedBit1Exists : 1;
} TasRestatementByte15T;

/*
 * Bitfield: Tas Restatement Byte 14
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementSecondaryExecIdExists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementReservedBit1Exists : 1;
} TasRestatementByte14T;

/*
 * Bitfield: Tas Restatement Byte 13
 */ 
typedef struct {
    uint8_t
    TasRestatementMultilegReportingTypeExists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementReservedBit1Exists : 1;
} TasRestatementByte13T;

/*
 * Bitfield: Tas Restatement Byte 12
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementClearingSymbolExists : 1,
    TasRestatementClearingSizeExists : 1,
    TasRestatementClearingPriceExists : 1,
    TasRestatementTradeDateExists : 1,
    TasRestatementOeoidExists : 1,
    TasRestatementManualOrderIndicatorExists : 1,
    TasRestatementCtiCodeExists : 1;
} TasRestatementByte12T;

/*
 * Bitfield: Tas Restatement Byte 11
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementReservedBit1Exists : 1;
} TasRestatementByte11T;

/*
 * Bitfield: Tas Restatement Byte 10
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementReservedBit1Exists : 1;
} TasRestatementByte10T;

/*
 * Bitfield: Tas Restatement Byte 9
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementCmtaNumberExists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementReservedBit1Exists : 1;
} TasRestatementByte9T;

/*
 * Bitfield: Tas Restatement Byte 8
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementStopPxExists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementFeeCodeExists : 1;
} TasRestatementByte8T;

/*
 * Bitfield: Tas Restatement Byte 7
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementReservedBit1Exists : 1;
} TasRestatementByte7T;

/*
 * Bitfield: Tas Restatement Byte 6
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementReservedBit1Exists : 1;
} TasRestatementByte6T;

/*
 * Bitfield: Tas Restatement Byte 5
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementLastPxExists : 1,
    TasRestatementLastSharesExists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementOrigClOrdIdExists : 1;
} TasRestatementByte5T;

/*
 * Bitfield: Tas Restatement Byte 4
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementReservedBit7Exists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementOpenCloseExists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementMaturityDateExists : 1;
} TasRestatementByte4T;

/*
 * Bitfield: Tas Restatement Byte 3
 */ 
typedef struct {
    uint8_t
    TasRestatementPreventMatchExists : 1,
    TasRestatementOrderQtyExists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementClearingAccountExists : 1,
    TasRestatementClearingFirmExists : 1,
    TasRestatementAccountExists : 1;
} TasRestatementByte3T;

/*
 * Bitfield: Tas Restatement Byte 2
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementCapacityExists : 1,
    TasRestatementReservedBit6Exists : 1,
    TasRestatementReservedBit5Exists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementReservedBit3Exists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementSymbolExists : 1;
} TasRestatementByte2T;

/*
 * Bitfield: Tas Restatement Byte 1
 */ 
typedef struct {
    uint8_t
    TasRestatementReservedBit8Exists : 1,
    TasRestatementMinQtyExists : 1,
    TasRestatementTimeInForceExists : 1,
    TasRestatementOrdTypeExists : 1,
    TasRestatementReservedBit4Exists : 1,
    TasRestatementPriceExists : 1,
    TasRestatementReservedBit2Exists : 1,
    TasRestatementSideExists : 1;
} TasRestatementByte1T;

/*
 * Structure: Tas Restatement Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    uint64_t ExecId;
    char ReservedInternal[1];
} TasRestatementMessageT;

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
    TradeCancelOrCorrectCmtaNumberExists : 1,
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
    TradeCancelOrCorrectReservedBit1Exists : 1;
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
    TradeCancelOrCorrectReservedBit3Exists : 1,
    TradeCancelOrCorrectReservedBit2Exists : 1,
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
    char Side;
    char BaseLiquidityIndicator;
    char SubLiquidityIndicator;
    char FeeCode[2];
} QuoteExecutionMessageT;

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
    OrderExecutionFrequentTraderIdExists : 1;
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
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionPendingStatusExists : 1,
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
    OrderExecutionReservedBit8Exists : 1,
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionClearingSizeExists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionTradeDateExists : 1,
    OrderExecutionOeoidExists : 1,
    OrderExecutionManualOrderIndicatorExists : 1,
    OrderExecutionCtiCodeExists : 1;
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
    OrderExecutionCmtaNumberExists : 1,
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
    OrderExecutionReservedBit7Exists : 1,
    OrderExecutionReservedBit6Exists : 1,
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionStopPxExists : 1,
    OrderExecutionReservedBit2Exists : 1,
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
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
    OrderExecutionReservedBit1Exists : 1;
} OrderExecutionByte6T;

/*
 * Bitfield: Order Execution Byte 5
 */ 
typedef struct {
    uint8_t
    OrderExecutionExpireTimeExists : 1,
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
    OrderExecutionOpenCloseExists : 1,
    OrderExecutionReservedBit3Exists : 1,
    OrderExecutionReservedBit2Exists : 1,
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
    OrderExecutionReservedBit5Exists : 1,
    OrderExecutionReservedBit4Exists : 1,
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
    OrderExecutionReservedBit2Exists : 1,
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
    OrderExecutionReservedBit4Exists : 1,
    OrderExecutionPriceExists : 1,
    OrderExecutionReservedBit2Exists : 1,
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
    CancelRejectedOeoidExists : 1,
    CancelRejectedManualOrderIndicatorExists : 1,
    CancelRejectedCtiCodeExists : 1;
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
    CancelRejectedCmtaNumberExists : 1,
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
    CancelRejectedReservedBit5Exists : 1,
    CancelRejectedReservedBit4Exists : 1,
    CancelRejectedStopPxExists : 1,
    CancelRejectedReservedBit2Exists : 1,
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
    CancelRejectedExpireTimeExists : 1,
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
    CancelRejectedOpenCloseExists : 1,
    CancelRejectedReservedBit3Exists : 1,
    CancelRejectedReservedBit2Exists : 1,
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
    CancelRejectedReservedBit8Exists : 1,
    CancelRejectedMinQtyExists : 1,
    CancelRejectedTimeInForceExists : 1,
    CancelRejectedOrdTypeExists : 1,
    CancelRejectedReservedBit4Exists : 1,
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
    OrderCancelledOeoidExists : 1,
    OrderCancelledManualOrderIndicatorExists : 1,
    OrderCancelledCtiCodeExists : 1;
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
    OrderCancelledCmtaNumberExists : 1,
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
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledStopPxExists : 1,
    OrderCancelledReservedBit2Exists : 1,
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
    OrderCancelledReservedBit4Exists : 1,
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
    OrderCancelledReservedBit7Exists : 1,
    OrderCancelledReservedBit6Exists : 1,
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledLastPxExists : 1,
    OrderCancelledLastSharesExists : 1,
    OrderCancelledLeavesQtyExists : 1,
    OrderCancelledReservedBit1Exists : 1;
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
    OrderCancelledOpenCloseExists : 1,
    OrderCancelledReservedBit3Exists : 1,
    OrderCancelledReservedBit2Exists : 1,
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
    OrderCancelledReservedBit5Exists : 1,
    OrderCancelledReservedBit4Exists : 1,
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
    OrderCancelledReservedBit8Exists : 1,
    OrderCancelledMinQtyExists : 1,
    OrderCancelledTimeInForceExists : 1,
    OrderCancelledOrdTypeExists : 1,
    OrderCancelledReservedBit4Exists : 1,
    OrderCancelledPriceExists : 1,
    OrderCancelledReservedBit2Exists : 1,
    OrderCancelledSideExists : 1;
} OrderCancelledByte1T;

/*
 * Structure: Order Cancelled Message
 */ 
typedef struct {
    uint64_t TransactionTime;
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
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedFrequentTraderIdExists : 1;
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
    OrderModifiedReservedBit4Exists : 1,
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
    OrderModifiedOeoidExists : 1,
    OrderModifiedManualOrderIndicatorExists : 1,
    OrderModifiedCtiCodeExists : 1;
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
    OrderModifiedCmtaNumberExists : 1,
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
    OrderModifiedReservedBit7Exists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedStopPxExists : 1,
    OrderModifiedReservedBit2Exists : 1,
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
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
    OrderModifiedReservedBit1Exists : 1;
} OrderModifiedByte6T;

/*
 * Bitfield: Order Modified Byte 5
 */ 
typedef struct {
    uint8_t
    OrderModifiedExpireTimeExists : 1,
    OrderModifiedBaseLiquidityIndicatorExists : 1,
    OrderModifiedReservedBit6Exists : 1,
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedReservedBit3Exists : 1,
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
    OrderModifiedOpenCloseExists : 1,
    OrderModifiedReservedBit3Exists : 1,
    OrderModifiedReservedBit2Exists : 1,
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
    OrderModifiedReservedBit5Exists : 1,
    OrderModifiedReservedBit4Exists : 1,
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
    OrderModifiedReservedBit8Exists : 1,
    OrderModifiedMinQtyExists : 1,
    OrderModifiedTimeInForceExists : 1,
    OrderModifiedOrdTypeExists : 1,
    OrderModifiedReservedBit4Exists : 1,
    OrderModifiedPriceExists : 1,
    OrderModifiedReservedBit2Exists : 1,
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
    char QuoteRejectReason[1];
    char Reserved17[17];
} QuoteUpdateRejectedMessageT;

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
    OrderRejectedFrequentTraderIdExists : 1;
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
    OrderRejectedOeoidExists : 1,
    OrderRejectedManualOrderIndicatorExists : 1,
    OrderRejectedCtiCodeExists : 1;
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
    OrderRejectedCmtaNumberExists : 1,
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
    OrderRejectedReservedBit7Exists : 1,
    OrderRejectedReservedBit6Exists : 1,
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedStopPxExists : 1,
    OrderRejectedReservedBit2Exists : 1,
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
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
    OrderRejectedReservedBit1Exists : 1;
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
    OrderRejectedOpenCloseExists : 1,
    OrderRejectedReservedBit3Exists : 1,
    OrderRejectedReservedBit2Exists : 1,
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
    OrderRejectedReservedBit5Exists : 1,
    OrderRejectedReservedBit4Exists : 1,
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
    OrderRejectedReservedBit8Exists : 1,
    OrderRejectedMinQtyExists : 1,
    OrderRejectedTimeInForceExists : 1,
    OrderRejectedOrdTypeExists : 1,
    OrderRejectedReservedBit4Exists : 1,
    OrderRejectedPriceExists : 1,
    OrderRejectedReservedBit2Exists : 1,
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
    char QuoteRejectReason[1];
    char Reserved17[17];
    uint8_t NumberOfQuoteResults;
} QuoteUpdateAcknowledgmentMessageT;

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
    OrderAcknowledgmentFrequentTraderIdExists : 1;
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
    OrderAcknowledgmentReservedBit4Exists : 1,
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
    OrderAcknowledgmentDayAvgPxExists : 1,
    OrderAcknowledgmentAvgPxExists : 1,
    OrderAcknowledgmentDayCumQtyExists : 1,
    OrderAcknowledgmentDayOrderQtyExists : 1,
    OrderAcknowledgmentCumQtyExists : 1;
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
    OrderAcknowledgmentOeoidExists : 1,
    OrderAcknowledgmentManualOrderIndicatorExists : 1,
    OrderAcknowledgmentCtiCodeExists : 1;
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
    OrderAcknowledgmentCmtaNumberExists : 1,
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
    OrderAcknowledgmentReservedBit7Exists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentStopPxExists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
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
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
} OrderAcknowledgmentByte6T;

/*
 * Bitfield: Order Acknowledgment Byte 5
 */ 
typedef struct {
    uint8_t
    OrderAcknowledgmentExpireTimeExists : 1,
    OrderAcknowledgmentBaseLiquidityIndicatorExists : 1,
    OrderAcknowledgmentReservedBit6Exists : 1,
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentLeavesQtyExists : 1,
    OrderAcknowledgmentReservedBit1Exists : 1;
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
    OrderAcknowledgmentOpenCloseExists : 1,
    OrderAcknowledgmentReservedBit3Exists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
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
    OrderAcknowledgmentReservedBit5Exists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
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
    OrderAcknowledgmentReservedBit8Exists : 1,
    OrderAcknowledgmentMinQtyExists : 1,
    OrderAcknowledgmentTimeInForceExists : 1,
    OrderAcknowledgmentOrdTypeExists : 1,
    OrderAcknowledgmentReservedBit4Exists : 1,
    OrderAcknowledgmentPriceExists : 1,
    OrderAcknowledgmentReservedBit2Exists : 1,
    OrderAcknowledgmentSideExists : 1;
} OrderAcknowledgmentByte1T;

/*
 * Structure: Order Acknowledgment Message
 */ 
typedef struct {
    uint64_t TransactionTime;
    char ClOrdId[20];
    uint64_t OrderId;
    char ReservedInternal[1];
} OrderAcknowledgmentMessageT;

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
    uint8_t
    PurgeOrderReservedBit8Exists : 1,
    PurgeOrderReservedBit7Exists : 1,
    PurgeOrderReservedBit6Exists : 1,
    PurgeOrderReservedBit5Exists : 1,
    PurgeOrderReservedBit4Exists : 1,
    PurgeOrderReservedBit3Exists : 1,
    PurgeOrderReservedBit2Exists : 1,
    PurgeOrderReservedBit1Exists : 1;
} PurgeOrderByte2T;

/*
 * Bitfield: Purge Order Byte 1
 */ 
typedef struct {
    uint8_t
    PurgeOrderOeoidExists : 1,
    PurgeOrderManualOrderIndicatorExists : 1,
    PurgeOrderReservedBit6Exists : 1,
    PurgeOrderMassCancelIdExists : 1,
    PurgeOrderProductNameExists : 1,
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
    uint8_t
    ModifyOrderReservedBit8Exists : 1,
    ModifyOrderReservedBit7Exists : 1,
    ModifyOrderFrequentTraderIdExists : 1,
    ModifyOrderOeoidExists : 1,
    ModifyOrderManualOrderIndicatorExists : 1,
    ModifyOrderReservedBit3Exists : 1,
    ModifyOrderStopPxExists : 1,
    ModifyOrderReservedBit1Exists : 1;
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
    CancelOrderMassCancelInstExists : 1;
} CancelOrderByte2T;

/*
 * Bitfield: Cancel Order Byte 1
 */ 
typedef struct {
    uint8_t
    CancelOrderOeoidExists : 1,
    CancelOrderManualOrderIndicatorExists : 1,
    CancelOrderReservedBit6Exists : 1,
    CancelOrderMassCancelIdExists : 1,
    CancelOrderProductNameExists : 1,
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
 * Bitfield: New Order Byte 8
 */ 
typedef struct {
    uint8_t
    NewOrderReservedBit8Exists : 1,
    NewOrderReservedBit7Exists : 1,
    NewOrderReservedBit6Exists : 1,
    NewOrderFrequentTraderIdExists : 1,
    NewOrderReservedBit4Exists : 1,
    NewOrderReservedBit3Exists : 1,
    NewOrderReservedBit2Exists : 1,
    NewOrderReservedBit1Exists : 1;
} NewOrderByte8T;

/*
 * Bitfield: New Order Byte 7
 */ 
typedef struct {
    uint8_t
    NewOrderOeoidExists : 1,
    NewOrderManualOrderIndicatorExists : 1,
    NewOrderCtiCodeExists : 1,
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
    NewOrderReservedBit6Exists : 1,
    NewOrderReservedBit5Exists : 1,
    NewOrderReservedBit4Exists : 1,
    NewOrderReservedBit3Exists : 1,
    NewOrderStopPxExists : 1,
    NewOrderReservedBit1Exists : 1;
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
    NewOrderReservedBit4Exists : 1,
    NewOrderReservedBit3Exists : 1,
    NewOrderReservedBit2Exists : 1,
    NewOrderReservedBit1Exists : 1;
} NewOrderByte5T;

/*
 * Bitfield: New Order Byte 4
 */ 
typedef struct {
    uint8_t
    NewOrderReservedBit8Exists : 1,
    NewOrderReservedBit7Exists : 1,
    NewOrderCmtaNumberExists : 1,
    NewOrderOpenCloseExists : 1,
    NewOrderRiskResetExists : 1,
    NewOrderReservedBit3Exists : 1,
    NewOrderReservedBit2Exists : 1,
    NewOrderMaturityDateExists : 1;
} NewOrderByte4T;

/*
 * Bitfield: New Order Byte 3
 */ 
typedef struct {
    uint8_t
    NewOrderExpireTimeExists : 1,
    NewOrderReservedBit7Exists : 1,
    NewOrderPreventMatchExists : 1,
    NewOrderReservedBit5Exists : 1,
    NewOrderReservedBit4Exists : 1,
    NewOrderReservedBit3Exists : 1,
    NewOrderReservedBit2Exists : 1,
    NewOrderAccountExists : 1;
} NewOrderByte3T;

/*
 * Bitfield: New Order Byte 2
 */ 
typedef struct {
    uint8_t
    NewOrderReservedBit8Exists : 1,
    NewOrderCapacityExists : 1,
    NewOrderReservedBit6Exists : 1,
    NewOrderReservedBit5Exists : 1,
    NewOrderReservedBit4Exists : 1,
    NewOrderReservedBit3Exists : 1,
    NewOrderReservedBit2Exists : 1,
    NewOrderSymbolExists : 1;
} NewOrderByte2T;

/*
 * Bitfield: New Order Byte 1
 */ 
typedef struct {
    uint8_t
    NewOrderReservedBit8Exists : 1,
    NewOrderMinQtyExists : 1,
    NewOrderTimeInForceExists : 1,
    NewOrderOrdTypeExists : 1,
    NewOrderReservedBit4Exists : 1,
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
   Version: 1.3
   Date: Tuesday, April 21, 2020
   Specification: CBOE_FUTURES_EXCHANGE_BOE_SPECIFICATION.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
