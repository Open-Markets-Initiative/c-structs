/*******************************************************************************
 * C Structs For Eurex Derivatives T7 Eti 5.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Appl Id Values
 */ 
#define ENUM_APPL_ID_TRADE = 1
#define ENUM_APPL_ID_NEWS = 2
#define ENUM_APPL_ID_SERVICEAVAILABILITY = 3
#define ENUM_APPL_ID_SESSIONDATA = 4
#define ENUM_APPL_ID_LISTENERDATA = 5
#define ENUM_APPL_ID_RISK_CONTROL = 6
#define ENUM_APPL_ID_TES_MAINTENANCE = 7
#define ENUM_APPL_ID_TES_TRADE = 8
#define ENUM_APPL_ID_APPL_ID_MAXIMUM_VALUE = 8
#define ENUM_APPL_ID_APPL_ID_MINIMUM_VALUE = 0

/*
 * Appl Id Status Values
 */ 
#define ENUM_APPL_ID_STATUS_OUTBOUNDCONVERSIONERROR = 105
#define ENUM_APPL_ID_STATUS_APPL_ID_STATUS_MAXIMUM_VALUE = 4294967294
#define ENUM_APPL_ID_STATUS_APPL_ID_STATUS_MINIMUM_VALUE = 0

/*
 * Appl Resend Flag Values
 */ 
#define ENUM_APPL_RESEND_FLAG_FALSE = 0
#define ENUM_APPL_RESEND_FLAG_TRUE = 1
#define ENUM_APPL_RESEND_FLAG_APPL_RESEND_FLAG_MAXIMUM_VALUE = 1
#define ENUM_APPL_RESEND_FLAG_APPL_RESEND_FLAG_MINIMUM_VALUE = 0

/*
 * Appl Seq Indicator Values
 */ 
#define ENUM_APPL_SEQ_INDICATOR_NO_RECOVERY_REQUIRED = 0
#define ENUM_APPL_SEQ_INDICATOR_RECOVERY_REQUIRED = 1
#define ENUM_APPL_SEQ_INDICATOR_APPL_SEQ_INDICATOR_MAXIMUM_VALUE = 1
#define ENUM_APPL_SEQ_INDICATOR_APPL_SEQ_INDICATOR_MINIMUM_VALUE = 0

/*
 * Appl Seq Status Values
 */ 
#define ENUM_APPL_SEQ_STATUS_UNAVAILABLE = 0
#define ENUM_APPL_SEQ_STATUS_AVAILABLE = 1
#define ENUM_APPL_SEQ_STATUS_APPL_SEQ_STATUS_MAXIMUM_VALUE = 1
#define ENUM_APPL_SEQ_STATUS_APPL_SEQ_STATUS_MINIMUM_VALUE = 0

/*
 * Appl Usage Orders Values
 */ 
#define ENUM_APPL_USAGE_ORDERS_AUTOMATED = 'A'
#define ENUM_APPL_USAGE_ORDERS_MANUAL = 'M'
#define ENUM_APPL_USAGE_ORDERS_AUTO_SELECT = 'B'
#define ENUM_APPL_USAGE_ORDERS_NONE = 'N'

/*
 * Appl Usage Quotes Values
 */ 
#define ENUM_APPL_USAGE_QUOTES_AUTOMATED = 'A'
#define ENUM_APPL_USAGE_QUOTES_MANUAL = 'M'
#define ENUM_APPL_USAGE_QUOTES_AUTO_SELECT = 'B'
#define ENUM_APPL_USAGE_QUOTES_NONE = 'N'

/*
 * Crossed Values
 */ 
#define ENUM_CROSSED_NOCROSSING = 0
#define ENUM_CROSSED_CROSSREJECTED = 1
#define ENUM_CROSSED_CROSSED_MAXIMUM_VALUE = 1
#define ENUM_CROSSED_CROSSED_MINIMUM_VALUE = 0

/*
 * Delete Reason Values
 */ 
#define ENUM_DELETE_REASON_NOSPECIALREASON = 100
#define ENUM_DELETE_REASON_TAS_CHANGE = 101
#define ENUM_DELETE_REASON_INTRADAY_EXPIRATION = 102
#define ENUM_DELETE_REASON_RISK_EVENT = 103
#define ENUM_DELETE_REASON_STOP_TRADING = 104
#define ENUM_DELETE_REASON_INSTRUMENT_DELETION = 105
#define ENUM_DELETE_REASON_INSTRUMENT_SUSPENSION = 106
#define ENUM_DELETE_REASON_DELETE_REASON_MAXIMUM_VALUE = 106
#define ENUM_DELETE_REASON_DELETE_REASON_MINIMUM_VALUE = 100

/*
 * Event Type Values
 */ 
#define ENUM_EVENT_TYPE_SWAP_START_DATE = 8
#define ENUM_EVENT_TYPE_SWAP_END_DATE = 9
#define ENUM_EVENT_TYPE_EVENT_TYPE_MAXIMUM_VALUE = 9
#define ENUM_EVENT_TYPE_EVENT_TYPE_MINIMUM_VALUE = 8

/*
 * Exec Inst Values
 */ 
#define ENUM_EXEC_INST_H = 1
#define ENUM_EXEC_INST_Q = 2
#define ENUM_EXEC_INST_HQ = 3
#define ENUM_EXEC_INST_H6 = 5
#define ENUM_EXEC_INST_Q6 = 6
#define ENUM_EXEC_INST_EXEC_INST_MAXIMUM_VALUE = 6
#define ENUM_EXEC_INST_EXEC_INST_MINIMUM_VALUE = 1

/*
 * Exec Restatement Reason Values
 */ 
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_BOOK_RESTATEMENT = 1
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_ADDED = 101
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_MODIFIED = 102
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_CANCELLED = 103
#define ENUM_EXEC_RESTATEMENT_REASON_IOC_ORDER_CANCELLED = 105
#define ENUM_EXEC_RESTATEMENT_REASON_BOOK_ORDER_EXECUTED = 108
#define ENUM_EXEC_RESTATEMENT_REASON_MARKET_ORDER_TRIGGERED = 135
#define ENUM_EXEC_RESTATEMENT_REASON_CAO_ORDER_ACTIVATED = 149
#define ENUM_EXEC_RESTATEMENT_REASON_CAO_ORDER_INACTIVATED = 150
#define ENUM_EXEC_RESTATEMENT_REASON_OCO_ORDER_TRIGGERED = 164
#define ENUM_EXEC_RESTATEMENT_REASON_STOP_ORDER_TRIGGERED = 172
#define ENUM_EXEC_RESTATEMENT_REASON_OWNERSHIP_CHANGED = 181
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_CANCELLATION_PENDING = 197
#define ENUM_EXEC_RESTATEMENT_REASON_PENDING_CANCELLATION_EXECUTED = 199
#define ENUM_EXEC_RESTATEMENT_REASON_BOC_ORDER_CANCELLED = 212
#define ENUM_EXEC_RESTATEMENT_REASON_EXEC_RESTATEMENT_REASON_MAXIMUM_VALUE = 299
#define ENUM_EXEC_RESTATEMENT_REASON_EXEC_RESTATEMENT_REASON_MINIMUM_VALUE = 0

/*
 * Exec Type Values
 */ 
#define ENUM_EXEC_TYPE_NEW = '0'
#define ENUM_EXEC_TYPE_CANCELED = '4'
#define ENUM_EXEC_TYPE_REPLACED = '5'
#define ENUM_EXEC_TYPE_PENDING_CANCELE = '6'
#define ENUM_EXEC_TYPE_SUSPENDED = '9'
#define ENUM_EXEC_TYPE_RESTATED = 'D'
#define ENUM_EXEC_TYPE_TRIGGERED = 'L'
#define ENUM_EXEC_TYPE_TRADE = 'F'

/*
 * Exercise Style Values
 */ 
#define ENUM_EXERCISE_STYLE_EUROPEAN = 0
#define ENUM_EXERCISE_STYLE_AMERICAN = 1
#define ENUM_EXERCISE_STYLE_EXERCISE_STYLE_MAXIMUM_VALUE = 1
#define ENUM_EXERCISE_STYLE_EXERCISE_STYLE_MINIMUM_VALUE = 0

/*
 * Fill Liquidity Ind Values
 */ 
#define ENUM_FILL_LIQUIDITY_IND_ADDED_LIQUIDITY = 1
#define ENUM_FILL_LIQUIDITY_IND_REMOVED_LIQUIDITY = 2
#define ENUM_FILL_LIQUIDITY_IND_TRIGGERED_STOP_ORDER = 5
#define ENUM_FILL_LIQUIDITY_IND_TRIGGERED_OCO_ORDER = 6
#define ENUM_FILL_LIQUIDITY_IND_TRIGGERED_MARKET_ORDER = 7
#define ENUM_FILL_LIQUIDITY_IND_FILL_LIQUIDITY_IND_MAXIMUM_VALUE = 7
#define ENUM_FILL_LIQUIDITY_IND_FILL_LIQUIDITY_IND_MINIMUM_VALUE = 1

/*
 * Hedge Type Values
 */ 
#define ENUM_HEDGE_TYPE_DURATION_HEDGE = 0
#define ENUM_HEDGE_TYPE_NOMINAL_HEDGE = 1
#define ENUM_HEDGE_TYPE_PRICE_FACTOR_HEDGE = 2
#define ENUM_HEDGE_TYPE_HEDGE_TYPE_MAXIMUM_VALUE = 2
#define ENUM_HEDGE_TYPE_HEDGE_TYPE_MINIMUM_VALUE = 0

/*
 * Implied Market Indicator Values
 */ 
#define ENUM_IMPLIED_MARKET_INDICATOR_NOTIMPLIED = 0
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIEDINOUT = 3
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_MARKET_INDICATOR_MAXIMUM_VALUE = 3
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_MARKET_INDICATOR_MINIMUM_VALUE = 0

/*
 * Instr Attrib Type Values
 */ 
#define ENUM_INSTR_ATTRIB_TYPE_VARIABLE_RATE = 5
#define ENUM_INSTR_ATTRIB_TYPE_COUPON_RATE = 100
#define ENUM_INSTR_ATTRIB_TYPE_OFFSETTOTHEVARIABLECOUPONRATE = 101
#define ENUM_INSTR_ATTRIB_TYPE_SWAP_CUSTOMER_1 = 102
#define ENUM_INSTR_ATTRIB_TYPE_SWAP_CUSTOMER_2 = 103
#define ENUM_INSTR_ATTRIB_TYPE_CASH_BASKET_REFERENCE = 104
#define ENUM_INSTR_ATTRIB_TYPE_INSTR_ATTRIB_TYPE_MAXIMUM_VALUE = 104
#define ENUM_INSTR_ATTRIB_TYPE_INSTR_ATTRIB_TYPE_MINIMUM_VALUE = 5

/*
 * Last Fragment Values
 */ 
#define ENUM_LAST_FRAGMENT_NOT_LAST_MESSAGE = 0
#define ENUM_LAST_FRAGMENT_LAST_MESSAGE = 1
#define ENUM_LAST_FRAGMENT_LAST_FRAGMENT_MAXIMUM_VALUE = 1
#define ENUM_LAST_FRAGMENT_LAST_FRAGMENT_MINIMUM_VALUE = 0

/*
 * Leg Position Effect Values
 */ 
#define ENUM_LEG_POSITION_EFFECT_CLOSE = 'C'
#define ENUM_LEG_POSITION_EFFECT_OPEN = 'O'

/*
 * Leg Security Type Values
 */ 
#define ENUM_LEG_SECURITY_TYPE_MULTILEG_INSTRUMENT = 1
#define ENUM_LEG_SECURITY_TYPE_UNDERLYING_LEG = 2
#define ENUM_LEG_SECURITY_TYPE_LEG_SECURITY_TYPE_MAXIMUM_VALUE = 2
#define ENUM_LEG_SECURITY_TYPE_LEG_SECURITY_TYPE_MINIMUM_VALUE = 1

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY = 1
#define ENUM_LEG_SIDE_SELL = 2
#define ENUM_LEG_SIDE_LEG_SIDE_MAXIMUM_VALUE = 2
#define ENUM_LEG_SIDE_LEG_SIDE_MINIMUM_VALUE = 1

/*
 * List Update Action Values
 */ 
#define ENUM_LIST_UPDATE_ACTION_ADD = 'A'
#define ENUM_LIST_UPDATE_ACTION_DELETE = 'D'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_XEUR = 1
#define ENUM_MARKET_ID_XEEE = 2
#define ENUM_MARKET_ID_MARKET_ID_MAXIMUM_VALUE = 255
#define ENUM_MARKET_ID_MARKET_ID_MINIMUM_VALUE = 1

/*
 * Mass Action Reason Values
 */ 
#define ENUM_MASS_ACTION_REASON_NO_SPECIAL_REASON = 0
#define ENUM_MASS_ACTION_REASON_STOP_TRADING = 1
#define ENUM_MASS_ACTION_REASON_EMERGENCY = 2
#define ENUM_MASS_ACTION_REASON_MARKET_MAKER_PROTECTION = 3
#define ENUM_MASS_ACTION_REASON_SESSION_LOSS = 6
#define ENUM_MASS_ACTION_REASON_DUPLICATE_SESSION_LOGIN = 7
#define ENUM_MASS_ACTION_REASON_CLEARING_RISK_CONTROL = 8
#define ENUM_MASS_ACTION_REASON_PRODUCT_STATE_HALT = 105
#define ENUM_MASS_ACTION_REASON_PRODUCT_STATE_HOLIDAY = 106
#define ENUM_MASS_ACTION_REASON_INSTRUMENT_SUSPENDED = 107
#define ENUM_MASS_ACTION_REASON_COMPLEX_INSTRUMENT_DELETION = 109
#define ENUM_MASS_ACTION_REASON_VOLATILITY_INTERRUPTION = 110
#define ENUM_MASS_ACTION_REASON_PRODUCTTEMPORARILYNOTTRADEABLE = 111
#define ENUM_MASS_ACTION_REASON_MASS_ACTION_REASON_MAXIMUM_VALUE = 200
#define ENUM_MASS_ACTION_REASON_MASS_ACTION_REASON_MINIMUM_VALUE = 0

/*
 * Mass Action Type Values
 */ 
#define ENUM_MASS_ACTION_TYPE_SUSPENDQUOTES = 1
#define ENUM_MASS_ACTION_TYPE_RELEASEQUOTES = 2
#define ENUM_MASS_ACTION_TYPE_MASS_ACTION_TYPE_MAXIMUM_VALUE = 2
#define ENUM_MASS_ACTION_TYPE_MASS_ACTION_TYPE_MINIMUM_VALUE = 1

/*
 * Match Sub Type Values
 */ 
#define ENUM_MATCH_SUB_TYPE_OPENING_AUCTION = 1
#define ENUM_MATCH_SUB_TYPE_CLOSING_AUCTION = 2
#define ENUM_MATCH_SUB_TYPE_INTRADAY_AUCTION = 3
#define ENUM_MATCH_SUB_TYPE_CIRCUIT_BREAKER_AUCTION = 4
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MAXIMUM_VALUE = 4
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MINIMUM_VALUE = 1

/*
 * Match Type Values
 */ 
#define ENUM_MATCH_TYPE_CONFIRMED_TRADE_REPORT = 3
#define ENUM_MATCH_TYPE_AUTOMATCHINCOMING = 4
#define ENUM_MATCH_TYPE_CROSS_AUCTION = 5
#define ENUM_MATCH_TYPE_CALL_AUCTION = 7
#define ENUM_MATCH_TYPE_AUTOMATCHRESTING = 11
#define ENUM_MATCH_TYPE_MATCH_TYPE_MAXIMUM_VALUE = 12
#define ENUM_MATCH_TYPE_MATCH_TYPE_MINIMUM_VALUE = 0

/*
 * Matching Engine Status Values
 */ 
#define ENUM_MATCHING_ENGINE_STATUS_UNAVAILABLE = 0
#define ENUM_MATCHING_ENGINE_STATUS_AVAILABLE = 1
#define ENUM_MATCHING_ENGINE_STATUS_MATCHING_ENGINE_STATUS_MAXIMUM_VALUE = 1
#define ENUM_MATCHING_ENGINE_STATUS_MATCHING_ENGINE_STATUS_MINIMUM_VALUE = 0

/*
 * Message Event Source Values
 */ 
#define ENUM_MESSAGE_EVENT_SOURCE_BROADCASTTO_INITIATOR = 'I'
#define ENUM_MESSAGE_EVENT_SOURCE_BROADCASTTO_APPROVER = 'A'

/*
 * Multi Leg Reporting Type Values
 */ 
#define ENUM_MULTI_LEG_REPORTING_TYPE_SINGLESECURITY = 1
#define ENUM_MULTI_LEG_REPORTING_TYPE_INDIVIDUALLEGOFAMULTILEGSECURITY = 2
#define ENUM_MULTI_LEG_REPORTING_TYPE_MULTI_LEG_REPORTING_TYPE_MAXIMUM_VALUE = 2
#define ENUM_MULTI_LEG_REPORTING_TYPE_MULTI_LEG_REPORTING_TYPE_MINIMUM_VALUE = 1

/*
 * Multileg Model Values
 */ 
#define ENUM_MULTILEG_MODEL_PREDEFINED_MULTILEG_SECURITY = 0
#define ENUM_MULTILEG_MODEL_USERDEFINED_MULTLEG = 1
#define ENUM_MULTILEG_MODEL_MULTILEG_MODEL_MAXIMUM_VALUE = 1
#define ENUM_MULTILEG_MODEL_MULTILEG_MODEL_MINIMUM_VALUE = 0

/*
 * Ord Status Values
 */ 
#define ENUM_ORD_STATUS_NEW = '0'
#define ENUM_ORD_STATUS_PARTIALLYFILLED = '1'
#define ENUM_ORD_STATUS_FILLED = '2'
#define ENUM_ORD_STATUS_CANCELED = '4'
#define ENUM_ORD_STATUS_PENDING_CANCEL = '6'
#define ENUM_ORD_STATUS_SUSPENDED = '9'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET = 1
#define ENUM_ORD_TYPE_LIMIT = 2
#define ENUM_ORD_TYPE_STOP = 3
#define ENUM_ORD_TYPE_STOP_LIMIT = 4
#define ENUM_ORD_TYPE_ORD_TYPE_MAXIMUM_VALUE = 4
#define ENUM_ORD_TYPE_ORD_TYPE_MINIMUM_VALUE = 1

/*
 * Order Category Values
 */ 
#define ENUM_ORDER_CATEGORY_ORDER = '1'
#define ENUM_ORDER_CATEGORY_QUOTE = '2'

/*
 * Order Routing Indicator Values
 */ 
#define ENUM_ORDER_ROUTING_INDICATOR_YES = 'Y'
#define ENUM_ORDER_ROUTING_INDICATOR_NO = 'N'

/*
 * Order Side Values
 */ 
#define ENUM_ORDER_SIDE_BUY = 1
#define ENUM_ORDER_SIDE_SELL = 2
#define ENUM_ORDER_SIDE_ORDER_SIDE_MAXIMUM_VALUE = 2
#define ENUM_ORDER_SIDE_ORDER_SIDE_MINIMUM_VALUE = 1

/*
 * Ownership Indicator Values
 */ 
#define ENUM_OWNERSHIP_INDICATOR_NO_CHANGEOF_OWNERSHIP = 0
#define ENUM_OWNERSHIP_INDICATOR_CHANGETO_EXECUTING_TRADER = 1
#define ENUM_OWNERSHIP_INDICATOR_OWNERSHIP_INDICATOR_MAXIMUM_VALUE = 1
#define ENUM_OWNERSHIP_INDICATOR_OWNERSHIP_INDICATOR_MINIMUM_VALUE = 0

/*
 * Party Action Type Values
 */ 
#define ENUM_PARTY_ACTION_TYPE_HALT_TRADING = 1
#define ENUM_PARTY_ACTION_TYPE_REINSTATE = 2
#define ENUM_PARTY_ACTION_TYPE_PARTY_ACTION_TYPE_MAXIMUM_VALUE = 2
#define ENUM_PARTY_ACTION_TYPE_PARTY_ACTION_TYPE_MINIMUM_VALUE = 1

/*
 * Party Detail Role Qualifier Values
 */ 
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_TRADER = 10
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_HEAD_TRADER = 11
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_SUPERVISOR = 12
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_PARTY_DETAIL_ROLE_QUALIFIER_MAXIMUM_VALUE = 12
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_PARTY_DETAIL_ROLE_QUALIFIER_MINIMUM_VALUE = 10

/*
 * Party Detail Status Values
 */ 
#define ENUM_PARTY_DETAIL_STATUS_ACTIVE = 0
#define ENUM_PARTY_DETAIL_STATUS_SUSPEND = 1
#define ENUM_PARTY_DETAIL_STATUS_PARTY_DETAIL_STATUS_MAXIMUM_VALUE = 1
#define ENUM_PARTY_DETAIL_STATUS_PARTY_DETAIL_STATUS_MINIMUM_VALUE = 0

/*
 * Party Id Entering Firm Values
 */ 
#define ENUM_PARTY_ID_ENTERING_FIRM_PARTICIPANT = 1
#define ENUM_PARTY_ID_ENTERING_FIRM_MARKET_SUPERVISION = 2
#define ENUM_PARTY_ID_ENTERING_FIRM_PARTY_ID_ENTERING_FIRM_MAXIMUM_VALUE = 2
#define ENUM_PARTY_ID_ENTERING_FIRM_PARTY_ID_ENTERING_FIRM_MINIMUM_VALUE = 1

/*
 * Party Id Origination Market Values
 */ 
#define ENUM_PARTY_ID_ORIGINATION_MARKET_XKFE = 1
#define ENUM_PARTY_ID_ORIGINATION_MARKET_XTAF = 2
#define ENUM_PARTY_ID_ORIGINATION_MARKET_PARTY_ID_ORIGINATION_MARKET_MAXIMUM_VALUE = 2
#define ENUM_PARTY_ID_ORIGINATION_MARKET_PARTY_ID_ORIGINATION_MARKET_MINIMUM_VALUE = 1

/*
 * Party Id Settlement Location Values
 */ 
#define ENUM_PARTY_ID_SETTLEMENT_LOCATION_CLEARSTREM_BANKING_FRANKFURT = 1
#define ENUM_PARTY_ID_SETTLEMENT_LOCATION_CLEARSTREM_BANKING_LUXEMBURG = 2
#define ENUM_PARTY_ID_SETTLEMENT_LOCATION_CLS_GROUP = 3
#define ENUM_PARTY_ID_SETTLEMENT_LOCATION_EUROCLEAR = 4
#define ENUM_PARTY_ID_SETTLEMENT_LOCATION_PARTY_ID_SETTLEMENT_LOCATION_MAXIMUM_VALUE = 4
#define ENUM_PARTY_ID_SETTLEMENT_LOCATION_PARTY_ID_SETTLEMENT_LOCATION_MINIMUM_VALUE = 1

/*
 * Position Effect Values
 */ 
#define ENUM_POSITION_EFFECT_CLOSE = 'C'
#define ENUM_POSITION_EFFECT_OPEN = 'O'

/*
 * Price Validity Check Type Values
 */ 
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_NONE = 0
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_OPTIONAL = 1
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_MANDATORY = 2
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_PRICE_VALIDITY_CHECK_TYPE_MAXIMUM_VALUE = 2
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_PRICE_VALIDITY_CHECK_TYPE_MINIMUM_VALUE = 0

/*
 * Product Complex Values
 */ 
#define ENUM_PRODUCT_COMPLEX_SIMPLEINSTRUMENT = 1
#define ENUM_PRODUCT_COMPLEX_STANDARDOPTIONSTRATEGY = 2
#define ENUM_PRODUCT_COMPLEX_NONSTANDARDOPTIONSTRATEGY = 3
#define ENUM_PRODUCT_COMPLEX_VOLATILITYSTRATEGY = 4
#define ENUM_PRODUCT_COMPLEX_FUTURES_SPREAD = 5
#define ENUM_PRODUCT_COMPLEX_INTERPRODUCTSPREAD = 6
#define ENUM_PRODUCT_COMPLEX_STANDARDFUTURESTRATEGY = 7
#define ENUM_PRODUCT_COMPLEX_PACKANDBUNDLE = 8
#define ENUM_PRODUCT_COMPLEX_STRIP = 9
#define ENUM_PRODUCT_COMPLEX_FLEXIBLESIMPLEINSTRUMENT = 10
#define ENUM_PRODUCT_COMPLEX_PRODUCT_COMPLEX_MAXIMUM_VALUE = 10
#define ENUM_PRODUCT_COMPLEX_PRODUCT_COMPLEX_MINIMUM_VALUE = 1

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT = 0
#define ENUM_PUT_OR_CALL_CALL = 1
#define ENUM_PUT_OR_CALL_PUT_OR_CALL_MAXIMUM_VALUE = 1
#define ENUM_PUT_OR_CALL_PUT_OR_CALL_MINIMUM_VALUE = 0

/*
 * Quote Entry Reject Reason Values
 */ 
#define ENUM_QUOTE_ENTRY_REJECT_REASON_UNKNOWN_SECURITY = 1
#define ENUM_QUOTE_ENTRY_REJECT_REASON_DUPLICATE_QUOTE = 6
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_PRICE = 8
#define ENUM_QUOTE_ENTRY_REJECT_REASON_NO_REFERENCE_PRICE_AVAILABLE = 16
#define ENUM_QUOTE_ENTRY_REJECT_REASON_NO_SINGLE_SIDED_QUOTES = 100
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_QUOTING_MODEL = 103
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_SIZE = 106
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_UNDERLYING_PRICE = 107
#define ENUM_QUOTE_ENTRY_REJECT_REASON_BID_PRICE_NOT_REASONABLE = 108
#define ENUM_QUOTE_ENTRY_REJECT_REASON_ASK_PRICE_NOT_REASONABLE = 109
#define ENUM_QUOTE_ENTRY_REJECT_REASON_BID_PRICE_EXCEEDS_RANGE = 110
#define ENUM_QUOTE_ENTRY_REJECT_REASON_ASK_PRICE_EXCEEDS_RANGE = 111
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INSTRUMENT_STATE_FREEZE = 115
#define ENUM_QUOTE_ENTRY_REJECT_REASON_DELETION_ALREADY_PENDING = 116
#define ENUM_QUOTE_ENTRY_REJECT_REASON_PRE_TRADE_RISK_SESSION_LIMIT_EXCEEDED = 117
#define ENUM_QUOTE_ENTRY_REJECT_REASON_PRE_TRADE_RISK_BU_LIMIT_EXCEEDED = 118
#define ENUM_QUOTE_ENTRY_REJECT_REASON_ENTITLEMENT_NOT_ASSIGNED_FOR_UNDERLYING = 119
#define ENUM_QUOTE_ENTRY_REJECT_REASON_CURRENTLY_NOT_TRADEABLE_ON_BOOK = 124
#define ENUM_QUOTE_ENTRY_REJECT_REASON_CANT_PROC_IN_CURR_INSTR_STATE = 131
#define ENUM_QUOTE_ENTRY_REJECT_REASON_QUOTE_ENTRY_REJECT_REASON_MAXIMUM_VALUE = 65535
#define ENUM_QUOTE_ENTRY_REJECT_REASON_QUOTE_ENTRY_REJECT_REASON_MINIMUM_VALUE = 0

/*
 * Quote Entry Status Values
 */ 
#define ENUM_QUOTE_ENTRY_STATUS_ACCEPTED = 0
#define ENUM_QUOTE_ENTRY_STATUS_REJECTED = 5
#define ENUM_QUOTE_ENTRY_STATUS_REMOVEDAND_REJECTED = 6
#define ENUM_QUOTE_ENTRY_STATUS_PENDING = 10
#define ENUM_QUOTE_ENTRY_STATUS_QUOTE_ENTRY_STATUS_MAXIMUM_VALUE = 100
#define ENUM_QUOTE_ENTRY_STATUS_QUOTE_ENTRY_STATUS_MINIMUM_VALUE = 0

/*
 * Quote Event Liquidity Ind Values
 */ 
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_ADDED_LIQUIDITY = 1
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_REMOVED_LIQUIDITY = 2
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_QUOTE_EVENT_LIQUIDITY_IND_MAXIMUM_VALUE = 2
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_QUOTE_EVENT_LIQUIDITY_IND_MINIMUM_VALUE = 1

/*
 * Quote Event Reason Values
 */ 
#define ENUM_QUOTE_EVENT_REASON_PENDINGCANCELLATIONEXECUTED = 14
#define ENUM_QUOTE_EVENT_REASON_INVALIDPRICE = 15
#define ENUM_QUOTE_EVENT_REASON_CROSSREJECTED = 16
#define ENUM_QUOTE_EVENT_REASON_QUOTE_EVENT_REASON_MAXIMUM_VALUE = 16
#define ENUM_QUOTE_EVENT_REASON_QUOTE_EVENT_REASON_MINIMUM_VALUE = 14

/*
 * Quote Event Side Values
 */ 
#define ENUM_QUOTE_EVENT_SIDE_BUY = 1
#define ENUM_QUOTE_EVENT_SIDE_SELL = 2
#define ENUM_QUOTE_EVENT_SIDE_QUOTE_EVENT_SIDE_MAXIMUM_VALUE = 2
#define ENUM_QUOTE_EVENT_SIDE_QUOTE_EVENT_SIDE_MINIMUM_VALUE = 1

/*
 * Quote Event Type Values
 */ 
#define ENUM_QUOTE_EVENT_TYPE_MODIFIEDQUOTESIDE = 2
#define ENUM_QUOTE_EVENT_TYPE_REMOVEDQUOTESIDE = 3
#define ENUM_QUOTE_EVENT_TYPE_PARTIALLYFILLED = 4
#define ENUM_QUOTE_EVENT_TYPE_FILLED = 5
#define ENUM_QUOTE_EVENT_TYPE_QUOTE_EVENT_TYPE_MAXIMUM_VALUE = 5
#define ENUM_QUOTE_EVENT_TYPE_QUOTE_EVENT_TYPE_MINIMUM_VALUE = 0

/*
 * Quote Size Type Values
 */ 
#define ENUM_QUOTE_SIZE_TYPE_TOTAL_SIZE = 1
#define ENUM_QUOTE_SIZE_TYPE_OPEN_SIZE = 2
#define ENUM_QUOTE_SIZE_TYPE_QUOTE_SIZE_TYPE_MAXIMUM_VALUE = 2
#define ENUM_QUOTE_SIZE_TYPE_QUOTE_SIZE_TYPE_MINIMUM_VALUE = 1

/*
 * Ref Appl Id Values
 */ 
#define ENUM_REF_APPL_ID_TRADE = 1
#define ENUM_REF_APPL_ID_NEWS = 2
#define ENUM_REF_APPL_ID_SERVICEAVAILABILITY = 3
#define ENUM_REF_APPL_ID_SESSIONDATA = 4
#define ENUM_REF_APPL_ID_LISTENERDATA = 5
#define ENUM_REF_APPL_ID_RISK_CONTROL = 6
#define ENUM_REF_APPL_ID_TES_MAINTENANCE = 7
#define ENUM_REF_APPL_ID_TES_TRADE = 8
#define ENUM_REF_APPL_ID_REF_APPL_ID_MAXIMUM_VALUE = 8
#define ENUM_REF_APPL_ID_REF_APPL_ID_MINIMUM_VALUE = 0

/*
 * Related Product Complex Values
 */ 
#define ENUM_RELATED_PRODUCT_COMPLEX_STANDARDOPTIONSTRATEGY = 2
#define ENUM_RELATED_PRODUCT_COMPLEX_NONSTANDARDOPTIONSTRATEGY = 3
#define ENUM_RELATED_PRODUCT_COMPLEX_VOLATILITYSTRATEGY = 4
#define ENUM_RELATED_PRODUCT_COMPLEX_FUTURES_SPREAD = 5
#define ENUM_RELATED_PRODUCT_COMPLEX_INTERPRODUCTSPREAD = 6
#define ENUM_RELATED_PRODUCT_COMPLEX_STANDARDFUTURESTRATEGY = 7
#define ENUM_RELATED_PRODUCT_COMPLEX_PACKANDBUNDLE = 8
#define ENUM_RELATED_PRODUCT_COMPLEX_STRIP = 9
#define ENUM_RELATED_PRODUCT_COMPLEX_RELATED_PRODUCT_COMPLEX_MAXIMUM_VALUE = 9
#define ENUM_RELATED_PRODUCT_COMPLEX_RELATED_PRODUCT_COMPLEX_MINIMUM_VALUE = 1

/*
 * Requesting Party Id Entering Firm Values
 */ 
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_PARTICIPANT = 1
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_MARKET_SUPERVISION = 2
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_REQUESTING_PARTY_ID_ENTERING_FIRM_MAXIMUM_VALUE = 2
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_REQUESTING_PARTY_ID_ENTERING_FIRM_MINIMUM_VALUE = 1

/*
 * Requesting Party Id Executing System Values
 */ 
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_EUREX_CLEARING = 1
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_T7 = 2
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_MAXIMUM_VALUE = 4294967294
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_MINIMUM_VALUE = 0

/*
 * Risk Limit Action Values
 */ 
#define ENUM_RISK_LIMIT_ACTION_WARNING = 4
#define ENUM_RISK_LIMIT_ACTION_QUEUE_INBOUND = 0
#define ENUM_RISK_LIMIT_ACTION_REJECT = 2
#define ENUM_RISK_LIMIT_ACTION_RISK_LIMIT_ACTION_MAXIMUM_VALUE = 4
#define ENUM_RISK_LIMIT_ACTION_RISK_LIMIT_ACTION_MINIMUM_VALUE = 0

/*
 * Session Mode Values
 */ 
#define ENUM_SESSION_MODE_HF = 1
#define ENUM_SESSION_MODE_LF = 2
#define ENUM_SESSION_MODE_GUI = 3
#define ENUM_SESSION_MODE_SESSION_MODE_MAXIMUM_VALUE = 3
#define ENUM_SESSION_MODE_SESSION_MODE_MINIMUM_VALUE = 1

/*
 * Session Reject Reason Values
 */ 
#define ENUM_SESSION_REJECT_REASON_REQUIRED_TAG_MISSING = 1
#define ENUM_SESSION_REJECT_REASON_VALUEISINCORRECT = 5
#define ENUM_SESSION_REJECT_REASON_DECRYPTIONPROBLEM = 7
#define ENUM_SESSION_REJECT_REASON_INVALID_MSG_ID = 11
#define ENUM_SESSION_REJECT_REASON_INCORRECT_NUM_IN_GROUPCOUNT = 16
#define ENUM_SESSION_REJECT_REASON_OTHER = 99
#define ENUM_SESSION_REJECT_REASON_THROTTLE_LIMIT_EXCEEDED = 100
#define ENUM_SESSION_REJECT_REASON_EXPOSURE_LIMIT_EXCEEDED = 101
#define ENUM_SESSION_REJECT_REASON_SERVICE_TEMPORARILY_NOT_AVAILABLE = 102
#define ENUM_SESSION_REJECT_REASON_SERVICE_NOT_AVAILABLE = 103
#define ENUM_SESSION_REJECT_REASON_RESULT_OF_TRANSACTION_UNKNOWN = 104
#define ENUM_SESSION_REJECT_REASON_OUTBOUNDCONVERSIONERROR = 105
#define ENUM_SESSION_REJECT_REASON_HEARTBEAT_VIOLATION = 152
#define ENUM_SESSION_REJECT_REASON_INTERNALTECHNICALERROR = 200
#define ENUM_SESSION_REJECT_REASON_VALIDATION_ERROR = 210
#define ENUM_SESSION_REJECT_REASON_USER_ALREADY_LOGGED_IN = 211
#define ENUM_SESSION_REJECT_REASON_SESSION_GATEWAY_ASSIGNMENT_EXPIRED = 214
#define ENUM_SESSION_REJECT_REASON_GATEWAY_NOT_RESERVED_TO_SESSION = 215
#define ENUM_SESSION_REJECT_REASON_ORDER_NOT_FOUND = 10000
#define ENUM_SESSION_REJECT_REASON_PRICE_NOT_REASONABLE = 10001
#define ENUM_SESSION_REJECT_REASON_CLIENT_ORDER_ID_NOT_UNIQUE = 10002
#define ENUM_SESSION_REJECT_REASON_QUOTE_ACTIVATION_IN_PROGRESS = 10003
#define ENUM_SESSION_REJECT_REASON_BU_BOOK_ORDER_LIMIT_EXCEEDED = 10004
#define ENUM_SESSION_REJECT_REASON_SESSION_BOOK_ORDER_LIMIT_EXCEEDED = 10005
#define ENUM_SESSION_REJECT_REASON_STOP_BID_PRICE_NOT_REASONABLE = 10006
#define ENUM_SESSION_REJECT_REASON_STOP_ASK_PRICE_NOT_REASONABLE = 10007
#define ENUM_SESSION_REJECT_REASON_ORDER_NOT_EXECUTABLE_WITHIN_VALIDITY = 10008
#define ENUM_SESSION_REJECT_REASON_INVALID_TRADING_RESTRICTION_FOR_INSTRUMENT_STATE = 10009
#define ENUM_SESSION_REJECT_REASON_CREATE_CI_THROTTLE_EXCEEDED = 10010
#define ENUM_SESSION_REJECT_REASON_TRANSACTION_NOT_ALLOWED_IN_CURRENT_STATE = 10011
#define ENUM_SESSION_REJECT_REASON_SESSION_REJECT_REASON_MAXIMUM_VALUE = 4294967294
#define ENUM_SESSION_REJECT_REASON_SESSION_REJECT_REASON_MINIMUM_VALUE = 0

/*
 * Session Status Values
 */ 
#define ENUM_SESSION_STATUS_ACTIVE = 0
#define ENUM_SESSION_STATUS_LOGOUT = 4
#define ENUM_SESSION_STATUS_SESSION_STATUS_MAXIMUM_VALUE = 4
#define ENUM_SESSION_STATUS_SESSION_STATUS_MINIMUM_VALUE = 0

/*
 * Session Sub Mode Values
 */ 
#define ENUM_SESSION_SUB_MODE_REGULARTRADINGSESSION = 0
#define ENUM_SESSION_SUB_MODE_FI_XTRADINGSESSION = 1
#define ENUM_SESSION_SUB_MODE_REGULAR_BACK_OFFICESESSION = 2
#define ENUM_SESSION_SUB_MODE_SESSION_SUB_MODE_MAXIMUM_VALUE = 2
#define ENUM_SESSION_SUB_MODE_SESSION_SUB_MODE_MINIMUM_VALUE = 0

/*
 * Settl Method Values
 */ 
#define ENUM_SETTL_METHOD_CASH_SETTLEMENT = 'C'
#define ENUM_SETTL_METHOD_PHYSICAL_SETTLEMENT = 'P'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY = 1
#define ENUM_SIDE_SELL = 2
#define ENUM_SIDE_SIDE_MAXIMUM_VALUE = 2
#define ENUM_SIDE_SIDE_MINIMUM_VALUE = 1

/*
 * Side Liquidity Ind Values
 */ 
#define ENUM_SIDE_LIQUIDITY_IND_ADDED_LIQUIDITY = 1
#define ENUM_SIDE_LIQUIDITY_IND_REMOVED_LIQUIDITY = 2
#define ENUM_SIDE_LIQUIDITY_IND_NONE = 4
#define ENUM_SIDE_LIQUIDITY_IND_SIDE_LIQUIDITY_IND_MAXIMUM_VALUE = 4
#define ENUM_SIDE_LIQUIDITY_IND_SIDE_LIQUIDITY_IND_MINIMUM_VALUE = 1

/*
 * Skip Validations Values
 */ 
#define ENUM_SKIP_VALIDATIONS_FALSE = 0
#define ENUM_SKIP_VALIDATIONS_TRUE = 1
#define ENUM_SKIP_VALIDATIONS_SKIP_VALIDATIONS_MAXIMUM_VALUE = 1
#define ENUM_SKIP_VALIDATIONS_SKIP_VALIDATIONS_MINIMUM_VALUE = 0

/*
 * T 7 Entry Service Rtm Status Values
 */ 
#define ENUM_T7_ENTRY_SERVICE_RTM_STATUS_UNAVAILABLE = 0
#define ENUM_T7_ENTRY_SERVICE_RTM_STATUS_AVAILABLE = 1
#define ENUM_T7_ENTRY_SERVICE_RTM_STATUS_T7_ENTRY_SERVICE_RTM_STATUS_MAXIMUM_VALUE = 1
#define ENUM_T7_ENTRY_SERVICE_RTM_STATUS_T7_ENTRY_SERVICE_RTM_STATUS_MINIMUM_VALUE = 0

/*
 * T 7 Entry Service Status Values
 */ 
#define ENUM_T7_ENTRY_SERVICE_STATUS_UNAVAILABLE = 0
#define ENUM_T7_ENTRY_SERVICE_STATUS_AVAILABLE = 1
#define ENUM_T7_ENTRY_SERVICE_STATUS_T7_ENTRY_SERVICE_STATUS_MAXIMUM_VALUE = 1
#define ENUM_T7_ENTRY_SERVICE_STATUS_T7_ENTRY_SERVICE_STATUS_MINIMUM_VALUE = 0

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY = 0
#define ENUM_TIME_IN_FORCE_GTC = 1
#define ENUM_TIME_IN_FORCE_IOC = 3
#define ENUM_TIME_IN_FORCE_GTD = 6
#define ENUM_TIME_IN_FORCE_TIME_IN_FORCE_MAXIMUM_VALUE = 6
#define ENUM_TIME_IN_FORCE_TIME_IN_FORCE_MINIMUM_VALUE = 0

/*
 * Trad Ses Event Values
 */ 
#define ENUM_TRAD_SES_EVENT_STARTOF_SERVICE = 101
#define ENUM_TRAD_SES_EVENT_MARKET_RESET = 102
#define ENUM_TRAD_SES_EVENT_ENDOF_RESTATEMENT = 103
#define ENUM_TRAD_SES_EVENT_ENDOF_DAY_SERVICE = 104
#define ENUM_TRAD_SES_EVENT_SERVICE_RESUMED = 105
#define ENUM_TRAD_SES_EVENT_TRAD_SES_EVENT_MAXIMUM_VALUE = 105
#define ENUM_TRAD_SES_EVENT_TRAD_SES_EVENT_MINIMUM_VALUE = 100

/*
 * Trad Ses Mode Values
 */ 
#define ENUM_TRAD_SES_MODE_TESTING = 1
#define ENUM_TRAD_SES_MODE_SIMULATED = 2
#define ENUM_TRAD_SES_MODE_PRODUCTION = 3
#define ENUM_TRAD_SES_MODE_ACCEPTANCE = 4
#define ENUM_TRAD_SES_MODE_TRAD_SES_MODE_MAXIMUM_VALUE = 4
#define ENUM_TRAD_SES_MODE_TRAD_SES_MODE_MINIMUM_VALUE = 1

/*
 * Trade Alloc Status Values
 */ 
#define ENUM_TRADE_ALLOC_STATUS_PENDING = 1
#define ENUM_TRADE_ALLOC_STATUS_APPROVED = 2
#define ENUM_TRADE_ALLOC_STATUS_AUTO_APPROVED = 3
#define ENUM_TRADE_ALLOC_STATUS_UPLOADED = 4
#define ENUM_TRADE_ALLOC_STATUS_CANCELED = 5
#define ENUM_TRADE_ALLOC_STATUS_TRADE_ALLOC_STATUS_MAXIMUM_VALUE = 45
#define ENUM_TRADE_ALLOC_STATUS_TRADE_ALLOC_STATUS_MINIMUM_VALUE = 0

/*
 * Trade Manager Status Values
 */ 
#define ENUM_TRADE_MANAGER_STATUS_UNAVAILABLE = 0
#define ENUM_TRADE_MANAGER_STATUS_AVAILABLE = 1
#define ENUM_TRADE_MANAGER_STATUS_TRADE_MANAGER_STATUS_MAXIMUM_VALUE = 1
#define ENUM_TRADE_MANAGER_STATUS_TRADE_MANAGER_STATUS_MINIMUM_VALUE = 0

/*
 * Trade Publish Indicator Values
 */ 
#define ENUM_TRADE_PUBLISH_INDICATOR_DO_NOT_PUBLISH_TRADE = 0
#define ENUM_TRADE_PUBLISH_INDICATOR_PUBLISH_TRADE = 1
#define ENUM_TRADE_PUBLISH_INDICATOR_TRADE_PUBLISH_INDICATOR_MAXIMUM_VALUE = 1
#define ENUM_TRADE_PUBLISH_INDICATOR_TRADE_PUBLISH_INDICATOR_MINIMUM_VALUE = 0

/*
 * Trade Report Type Values
 */ 
#define ENUM_TRADE_REPORT_TYPE_SUBMIT = 0
#define ENUM_TRADE_REPORT_TYPE_ALLEGED = 1
#define ENUM_TRADE_REPORT_TYPE_ACCEPT = 2
#define ENUM_TRADE_REPORT_TYPE_NO_WAS_REPLACED = 5
#define ENUM_TRADE_REPORT_TYPE_TRADE_REPORT_CANCEL = 6
#define ENUM_TRADE_REPORT_TYPE_TRADE_BREAK = 7
#define ENUM_TRADE_REPORT_TYPE_ALLEGED_NEW = 11
#define ENUM_TRADE_REPORT_TYPE_ALLEGED_NO_WAS = 13
#define ENUM_TRADE_REPORT_TYPE_TRADE_REPORT_TYPE_MAXIMUM_VALUE = 13
#define ENUM_TRADE_REPORT_TYPE_TRADE_REPORT_TYPE_MINIMUM_VALUE = 0

/*
 * Trading Capacity Values
 */ 
#define ENUM_TRADING_CAPACITY_CUSTOMER = 1
#define ENUM_TRADING_CAPACITY_PRINCIPAL = 5
#define ENUM_TRADING_CAPACITY_MARKET_MAKER = 6
#define ENUM_TRADING_CAPACITY_TRADING_CAPACITY_MAXIMUM_VALUE = 6
#define ENUM_TRADING_CAPACITY_TRADING_CAPACITY_MINIMUM_VALUE = 1

/*
 * Trading Session Sub Id Values
 */ 
#define ENUM_TRADING_SESSION_SUB_ID_CLOSINGAUCTION = 4
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MAXIMUM_VALUE = 8
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MINIMUM_VALUE = 1

/*
 * Transfer Reason Values
 */ 
#define ENUM_TRANSFER_REASON_OWNER = 1
#define ENUM_TRANSFER_REASON_CLEARER = 2
#define ENUM_TRANSFER_REASON_TRANSFER_REASON_MAXIMUM_VALUE = 5
#define ENUM_TRANSFER_REASON_TRANSFER_REASON_MINIMUM_VALUE = 1

/*
 * Trd Type Values
 */ 
#define ENUM_TRD_TYPE_BLOCK_TRADE = 1
#define ENUM_TRD_TYPE_EXCHANGEFOR_SWAP = 12
#define ENUM_TRD_TYPE_EXCHANGE_BASIS_FACILITY = 55
#define ENUM_TRD_TYPE_VOLA_TRADE = 1000
#define ENUM_TRD_TYPE_EFP_FIN_TRADE = 1001
#define ENUM_TRD_TYPE_EFP_INDEX_FUTURES_TRADE = 1002
#define ENUM_TRD_TYPE_TRADEAT_MARKET = 1004
#define ENUM_TRD_TYPE_TRD_TYPE_MAXIMUM_VALUE = 1004
#define ENUM_TRD_TYPE_TRD_TYPE_MINIMUM_VALUE = 1

/*
 * Triggered Values
 */ 
#define ENUM_TRIGGERED_NOTTRIGGERED = 0
#define ENUM_TRIGGERED_TRIGGERED_STOP = 1
#define ENUM_TRIGGERED_TRIGGERED_OCO = 2
#define ENUM_TRIGGERED_TRIGGERED_MAXIMUM_VALUE = 2
#define ENUM_TRIGGERED_TRIGGERED_MINIMUM_VALUE = 0

/*
 * User Status Values
 */ 
#define ENUM_USER_STATUS_USERFORCEDLOGOUT = 7
#define ENUM_USER_STATUS_USERSTOPPED = 10
#define ENUM_USER_STATUS_USERRELEASED = 11
#define ENUM_USER_STATUS_USER_STATUS_MAXIMUM_VALUE = 11
#define ENUM_USER_STATUS_USER_STATUS_MINIMUM_VALUE = 7


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Response Header Comp
 */ 
typedef struct {
    uint64_t RequestTime;
    uint64_t SendingTime;
    uint32_t MsgSeqNum;
    char Pad4[4];
} ResponseHeaderCompT;

/*
 * Structure: Message Header Out Comp
 */ 
typedef struct {
    uint32_t BodyLen;
    uint16_t TemplateId;
    char Pad2[2];
} MessageHeaderOutCompT;

/*
 * Structure: User Logout Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
} UserLogoutResponseT;

/*
 * Structure: Request Header Comp
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    uint32_t SenderSubId;
} RequestHeaderCompT;

/*
 * Structure: Message Header In Comp
 */ 
typedef struct {
    uint32_t BodyLen;
    uint16_t TemplateId;
    char NetworkMsgId[8];
    char Pad2[2];
} MessageHeaderInCompT;

/*
 * Structure: User Logout Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint32_t Username;
    char Pad4[4];
} UserLogoutRequestT;

/*
 * Structure: User Login Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
} UserLoginResponseT;

/*
 * Structure: User Login Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint32_t Username;
    char Password[32];
    char Pad4[4];
} UserLoginRequestT;

/*
 * Structure: Underlying Stip Grp Comp
 */ 
typedef struct {
    char UnderlyingStipValue[32];
    char UnderlyingStipType[7];
    char Pad1[1];
} UnderlyingStipGrpCompT;

/*
 * Structure: Instrument Attribute Grp Comp
 */ 
typedef struct {
    uint8_t InstrAttribType;
    char InstrAttribValue[32];
    char Pad7[7];
} InstrumentAttributeGrpCompT;

/*
 * Structure: Instrument Event Grp Comp
 */ 
typedef struct {
    uint32_t EventDate;
    uint8_t EventType;
    char Pad3[3];
} InstrumentEventGrpCompT;

/*
 * Structure: Side Alloc Ext Grp Comp
 */ 
typedef struct {
    uint64_t ComplianceId;
    uint32_t IndividualAllocId;
    int32_t AllocQty;
    char PartyExecutingFirm[5];
    char PartyExecutingTrader[6];
    uint8_t Side;
    uint8_t TradeAllocStatus;
    uint8_t TradingCapacity;
    char PositionEffect;
    char Account[2];
    char PartyIdPositionAccount[32];
    char PartyIdTakeUpTradingFirm[5];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    char PartyIdOrderOriginationFirm[7];
    char PartyIdBeneficiary[9];
    char PartyIdLocationId[2];
    char CustOrderHandlingInst[1];
    char ComplianceText[20];
    char Pad7[7];
} SideAllocExtGrpCompT;

/*
 * Structure: Unsubscribe Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
} UnsubscribeResponseT;

/*
 * Structure: Unsubscribe Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint32_t RefApplSubId;
    char Pad4[4];
} UnsubscribeRequestT;

/*
 * Structure: Rbc Header Me Comp
 */ 
typedef struct {
    uint64_t TrdRegTsTimeOut;
    uint64_t NotificationIn;
    uint64_t SendingTime;
    uint32_t ApplSubId;
    uint16_t PartitionId;
    char ApplMsgId[16];
    uint8_t ApplId;
    uint8_t ApplResendFlag;
    uint8_t LastFragment;
    char Pad7[7];
} RbcHeaderMeCompT;

/*
 * Structure: Trading Session Status Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderMeCompT RbcHeaderMeComp;
    int32_t MarketSegmentId;
    uint32_t TradeDate;
    uint8_t TradSesEvent;
    char RefApplLastMsgId[16];
    char Pad7[7];
} TradingSessionStatusBroadcastT;

/*
 * Structure: Rbc Header Comp
 */ 
typedef struct {
    uint64_t SendingTime;
    uint64_t ApplSeqNum;
    uint32_t ApplSubId;
    uint16_t PartitionId;
    uint8_t ApplResendFlag;
    uint8_t ApplId;
    uint8_t LastFragment;
    char Pad7[7];
} RbcHeaderCompT;

/*
 * Structure: Trade Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    int64_t SecurityId;
    int64_t RelatedSecurityId;
    uint64_t Price;
    uint64_t LastPx;
    uint64_t SideLastPx;
    uint64_t ClearingTradePrice;
    uint64_t TransactTime;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint32_t TradeId;
    uint32_t OrigTradeId;
    uint32_t RootPartyIdExecutingUnit;
    uint32_t RootPartyIdSessionId;
    uint32_t RootPartyIdExecutingTrader;
    uint32_t RootPartyIdClearingUnit;
    int32_t CumQty;
    int32_t LeavesQty;
    int32_t MarketSegmentId;
    int32_t RelatedSymbol;
    int32_t LastQty;
    int32_t SideLastQty;
    int32_t ClearingTradeQty;
    uint32_t SideTradeId;
    uint32_t MatchDate;
    uint32_t TrdMatchId;
    uint32_t StrategyLinkId;
    int32_t TotNumTradeReports;
    uint8_t MultiLegReportingType;
    uint8_t TradeReportType;
    uint8_t TransferReason;
    char RootPartyIdBeneficiary[9];
    char RootPartyIdTakeUpTradingFirm[5];
    char RootPartyIdOrderOriginationFirm[7];
    uint8_t MatchType;
    uint8_t MatchSubType;
    uint8_t Side;
    uint8_t SideLiquidityInd;
    uint8_t TradingCapacity;
    char Account[2];
    char RootPartyIdPositionAccount[32];
    char PositionEffect;
    char CustOrderHandlingInst[1];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    char OrderCategory;
    uint8_t OrdType;
    uint8_t RelatedProductComplex;
    uint8_t OrderSide;
    char RootPartyClearingOrganization[4];
    char RootPartyExecutingFirm[5];
    char RootPartyExecutingTrader[6];
    char RootPartyClearingFirm[5];
    char Pad3[3];
} TradeBroadcastT;

/*
 * Structure: Notif Header Comp
 */ 
typedef struct {
    uint64_t SendingTime;
} NotifHeaderCompT;

/*
 * Structure: Throttle Update Notification
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NotifHeaderCompT NotifHeaderComp;
    int64_t ThrottleTimeInterval;
    uint32_t ThrottleNoMsgs;
    uint32_t ThrottleDisconnectLimit;
} ThrottleUpdateNotificationT;

/*
 * Structure: Tm Trading Session Status Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    uint8_t TradSesEvent;
    char Pad7[7];
} TmTradingSessionStatusBroadcastT;

/*
 * Structure: Tes Trading Session Status Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    uint32_t TradeDate;
    uint8_t TradSesEvent;
    char Pad3[3];
} TesTradingSessionStatusBroadcastT;

/*
 * Structure: Tes Trade Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    int64_t SecurityId;
    uint64_t LastPx;
    uint64_t ClearingTradePrice;
    uint64_t TransactTime;
    int64_t RelatedSecurityId;
    uint32_t PackageId;
    int32_t LastQty;
    int32_t MarketSegmentId;
    uint32_t TradeId;
    uint32_t TradeDate;
    uint32_t SideTradeId;
    uint32_t RootPartyIdSessionId;
    uint32_t OrigTradeId;
    int32_t ClearingTradeQty;
    uint32_t RootPartyIdExecutingUnit;
    uint32_t RootPartyIdExecutingTrader;
    uint32_t RootPartyIdClearingUnit;
    uint32_t StrategyLinkId;
    int32_t RelatedSymbol;
    int32_t TotNumTradeReports;
    uint16_t TrdType;
    uint8_t ProductComplex;
    uint8_t RelatedProductComplex;
    uint8_t Side;
    uint8_t TradingCapacity;
    uint8_t TradeReportType;
    uint8_t TransferReason;
    uint8_t MultiLegReportingType;
    char PositionEffect;
    char Account[2];
    char RootPartyIdPositionAccount[32];
    char CustOrderHandlingInst[1];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    char RootPartyExecutingFirm[5];
    char RootPartyExecutingTrader[6];
    char RootPartyClearingFirm[5];
    char RootPartyClearingOrganization[4];
    char RootPartyIdBeneficiary[9];
    char RootPartyIdTakeUpTradingFirm[5];
    char RootPartyIdOrderOriginationFirm[7];
    char Pad2[2];
} TesTradeBroadcastT;

/*
 * Structure: Tes Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
    uint32_t TesExecId;
    char TradeReportId[20];
} TesResponseT;

/*
 * Structure: Tes Execution Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    uint64_t TransactTime;
    int32_t MarketSegmentId;
    uint32_t PackageId;
    uint32_t TesExecId;
    uint32_t AllocId;
    uint16_t TrdType;
    uint8_t TradeReportType;
    char MessageEventSource;
    char Pad4[4];
} TesExecutionBroadcastT;

/*
 * Structure: Tes Delete Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    uint64_t TransactTime;
    int32_t MarketSegmentId;
    uint32_t PackageId;
    uint32_t TesExecId;
    uint16_t TrdType;
    uint8_t DeleteReason;
    uint8_t TradeReportType;
    char MessageEventSource;
    char TradeReportId[20];
    char Pad3[3];
} TesDeleteBroadcastT;

/*
 * Structure: Side Alloc Grp Bc Comp
 */ 
typedef struct {
    uint32_t IndividualAllocId;
    int32_t AllocQty;
    char PartyExecutingFirm[5];
    char PartyExecutingTrader[6];
    uint8_t Side;
    uint8_t TradeAllocStatus;
    char Pad3[3];
} SideAllocGrpBcCompT;

/*
 * Structure: Subscribe Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
    uint32_t ApplSubId;
    char Pad4[4];
} SubscribeResponseT;

/*
 * Structure: Subscribe Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint32_t SubscriptionScope;
    uint8_t RefApplId;
    char Pad3[3];
} SubscribeRequestT;

/*
 * Structure: Nrbc Header Comp
 */ 
typedef struct {
    uint64_t SendingTime;
    uint32_t ApplSubId;
    uint8_t ApplId;
    uint8_t LastFragment;
    char Pad2[2];
} NrbcHeaderCompT;

/*
 * Structure: Service Availability Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrbcHeaderCompT NrbcHeaderComp;
    uint32_t MatchingEngineTradeDate;
    uint32_t TradeManagerTradeDate;
    uint32_t ApplSeqTradeDate;
    uint32_t T7EntryServiceTradeDate;
    uint32_t T7EntryServiceRtmTradeDate;
    uint16_t PartitionId;
    uint8_t MatchingEngineStatus;
    uint8_t TradeManagerStatus;
    uint8_t ApplSeqStatus;
    uint8_t T7EntryServiceStatus;
    uint8_t T7EntryServiceRtmStatus;
    char Pad5[5];
} ServiceAvailabilityBroadcastT;

/*
 * Structure: Risk Notification Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    uint64_t TransactTime;
    uint32_t TradeDate;
    uint32_t PartyDetailIdExecutingUnit;
    uint32_t RequestingPartyIdExecutingSystem;
    uint16_t MarketId;
    char ListUpdateAction;
    uint8_t RiskLimitAction;
    char RequestingPartyEnteringFirm[9];
    char RequestingPartyClearingFirm[9];
    char Pad6[6];
} RiskNotificationBroadcastT;

/*
 * Structure: Retransmit Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
    uint64_t ApplEndSeqNum;
    uint64_t RefApplLastSeqNum;
    uint16_t ApplTotalMessageCount;
    char Pad6[6];
} RetransmitResponseT;

/*
 * Structure: Retransmit Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t ApplBegSeqNum;
    uint64_t ApplEndSeqNum;
    uint16_t PartitionId;
    uint8_t RefApplId;
    char Pad5[5];
} RetransmitRequestT;

/*
 * Structure: Retransmit Me Message Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
    uint16_t ApplTotalMessageCount;
    char ApplEndMsgId[16];
    char RefApplLastMsgId[16];
    char Pad6[6];
} RetransmitMeMessageResponseT;

/*
 * Structure: Retransmit Me Message Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint32_t SubscriptionScope;
    uint16_t PartitionId;
    uint8_t RefApplId;
    char ApplBegMsgId[16];
    char ApplEndMsgId[16];
    char Pad1[1];
} RetransmitMeMessageRequestT;

/*
 * Structure: Nr Response Header Me Comp
 */ 
typedef struct {
    uint64_t RequestTime;
    uint64_t RequestOut;
    uint64_t TrdRegTsTimeIn;
    uint64_t TrdRegTsTimeOut;
    uint64_t ResponseIn;
    uint64_t SendingTime;
    uint32_t MsgSeqNum;
    uint8_t LastFragment;
    char Pad3[3];
} NrResponseHeaderMeCompT;

/*
 * Structure: Reject
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint32_t SessionRejectReason;
    uint16_t VarTextLen;
    uint8_t SessionStatus;
    char Pad1[1];
} RejectT;

/*
 * Structure: Rfq Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t ExecId;
} RfqResponseT;

/*
 * Structure: Rfq Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    int64_t SecurityId;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    uint8_t Side;
    char ComplianceText[20];
    char Pad3[3];
} RfqRequestT;

/*
 * Structure: Quote Leg Exec Grp Comp
 */ 
typedef struct {
    int64_t LegSecurityId;
    uint64_t LegLastPx;
    int32_t LegLastQty;
    int32_t LegExecId;
    uint8_t LegSide;
    uint8_t NoQuoteEventsIndex;
    char Pad6[6];
} QuoteLegExecGrpCompT;

/*
 * Structure: Quote Event Grp Comp
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t QuoteEventPx;
    uint64_t QuoteMsgId;
    uint32_t QuoteEventMatchId;
    int32_t QuoteEventExecId;
    int32_t QuoteEventQty;
    uint8_t QuoteEventType;
    uint8_t QuoteEventSide;
    uint8_t QuoteEventLiquidityInd;
    uint8_t QuoteEventReason;
} QuoteEventGrpCompT;

/*
 * Structure: Not Affected Securities Grp Comp
 */ 
typedef struct {
    uint64_t NotAffectedSecurityId;
} NotAffectedSecuritiesGrpCompT;

/*
 * Structure: Quote Activation Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t MassActionReportId;
    uint16_t NoNotAffectedSecurities;
    char Pad6[6];
} QuoteActivationResponseT;

/*
 * Structure: Quote Activation Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint8_t MassActionType;
    uint8_t ProductComplex;
    char Pad6[6];
} QuoteActivationRequestT;

/*
 * Structure: Quote Activation Notification
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t MassActionReportId;
    int32_t MarketSegmentId;
    uint32_t PartyIdEnteringTrader;
    uint16_t NoNotAffectedSecurities;
    uint8_t PartyIdEnteringFirm;
    uint8_t ProductComplex;
    uint8_t MassActionType;
    uint8_t MassActionReason;
    char Pad2[2];
} QuoteActivationNotificationT;

/*
 * Structure: Party Entitlements Update Report
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    uint64_t TransactTime;
    uint32_t TradeDate;
    uint32_t PartyDetailIdExecutingUnit;
    uint32_t RequestingPartyIdExecutingSystem;
    uint16_t MarketId;
    char ListUpdateAction;
    char RequestingPartyEnteringFirm[9];
    char RequestingPartyClearingFirm[9];
    uint8_t PartyDetailStatus;
    char Pad6[6];
} PartyEntitlementsUpdateReportT;

/*
 * Structure: Party Action Report
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    uint64_t TransactTime;
    uint32_t TradeDate;
    uint32_t RequestingPartyIdExecutingTrader;
    uint32_t PartyIdExecutingUnit;
    uint32_t PartyIdExecutingTrader;
    uint32_t RequestingPartyIdExecutingSystem;
    uint16_t MarketId;
    uint8_t PartyActionType;
    uint8_t RequestingPartyIdEnteringFirm;
} PartyActionReportT;

/*
 * Structure: Instrmnt Leg Exec Grp Comp
 */ 
typedef struct {
    int64_t LegSecurityId;
    uint64_t LegLastPx;
    int32_t LegLastQty;
    int32_t LegExecId;
    uint8_t LegSide;
    uint8_t FillRefId;
    char Pad6[6];
} InstrmntLegExecGrpCompT;

/*
 * Structure: Fills Grp Comp
 */ 
typedef struct {
    uint64_t FillPx;
    int32_t FillQty;
    uint32_t FillMatchId;
    int32_t FillExecId;
    uint8_t FillLiquidityInd;
    char Pad3[3];
} FillsGrpCompT;

/*
 * Structure: Response Header Me Comp
 */ 
typedef struct {
    uint64_t RequestTime;
    uint64_t RequestOut;
    uint64_t TrdRegTsTimeIn;
    uint64_t TrdRegTsTimeOut;
    uint64_t ResponseIn;
    uint64_t SendingTime;
    uint32_t MsgSeqNum;
    uint16_t PartitionId;
    uint8_t ApplId;
    char ApplMsgId[16];
    uint8_t LastFragment;
} ResponseHeaderMeCompT;

/*
 * Structure: Leg Ord Grp Comp
 */ 
typedef struct {
    char LegAccount[2];
    char LegPositionEffect;
    char Pad5[5];
} LegOrdGrpCompT;

/*
 * Structure: News Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    uint64_t OrigTime;
    uint16_t VarTextLen;
    char Headline[256];
    char Pad6[6];
} NewsBroadcastT;

/*
 * Structure: New Order Single Short Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t Price;
    uint64_t ClOrdId;
    uint64_t ComplianceId;
    int32_t OrderQty;
    uint32_t SimpleSecurityId;
    uint32_t MatchInstCrossId;
    uint16_t EnrichmentRuleId;
    uint8_t Side;
    uint8_t PriceValidityCheckType;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingCapacity;
    char Pad5[5];
} NewOrderSingleShortRequestT;

/*
 * Structure: New Order Single Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t Price;
    uint64_t StopPx;
    uint64_t ClOrdId;
    uint64_t ComplianceId;
    int32_t OrderQty;
    uint32_t ExpireDate;
    int32_t MarketSegmentId;
    uint32_t SimpleSecurityId;
    uint32_t MatchInstCrossId;
    char PartyIdTakeUpTradingFirm[5];
    char PartyIdOrderOriginationFirm[7];
    char PartyIdBeneficiary[9];
    uint8_t ApplSeqIndicator;
    uint8_t Side;
    uint8_t OrdType;
    uint8_t PriceValidityCheckType;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingSessionSubId;
    uint8_t TradingCapacity;
    char Account[2];
    char PartyIdPositionAccount[32];
    char PositionEffect;
    char PartyIdLocationId[2];
    char CustOrderHandlingInst[1];
    char ComplianceText[20];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    char Pad1[1];
} NewOrderSingleRequestT;

/*
 * Structure: New Order Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderMeCompT ResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint64_t TrdRegTsEntryTime;
    uint64_t TrdRegTsTimePriority;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t Crossed;
    uint8_t ProductComplex;
    uint8_t Triggered;
    char Pad1[1];
} NewOrderResponseT;

/*
 * Structure: New Order Nr Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t Crossed;
    uint8_t ProductComplex;
    uint8_t Triggered;
    char Pad1[1];
} NewOrderNrResponseT;

/*
 * Structure: New Order Complex Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t ClOrdId;
    int64_t SecurityId;
    uint64_t Price;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    uint32_t ExpireDate;
    uint32_t MatchInstCrossId;
    char PartyIdTakeUpTradingFirm[5];
    char PartyIdOrderOriginationFirm[7];
    char PartyIdBeneficiary[9];
    uint8_t ApplSeqIndicator;
    uint8_t ProductComplex;
    uint8_t Side;
    uint8_t OrdType;
    uint8_t PriceValidityCheckType;
    uint8_t ExecInst;
    uint8_t TimeInForce;
    uint8_t TradingCapacity;
    char PartyIdLocationId[2];
    char ComplianceText[20];
    char CustOrderHandlingInst[1];
    char PartyIdPositionAccount[32];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    uint8_t NoLegs;
    char Pad7[7];
} NewOrderComplexRequestT;

/*
 * Structure: Side Alloc Grp Comp
 */ 
typedef struct {
    uint32_t IndividualAllocId;
    int32_t AllocQty;
    uint8_t Side;
    char PartyExecutingFirm[5];
    char PartyExecutingTrader[6];
    char Pad4[4];
} SideAllocGrpCompT;

/*
 * Structure: Modify Tes Trade Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t LastPx;
    uint64_t TransBkdTime;
    int32_t MarketSegmentId;
    uint32_t PackageId;
    uint32_t TesExecId;
    int32_t RelatedMarketSegmentId;
    uint16_t TrdType;
    uint8_t TradeReportType;
    uint8_t TradePublishIndicator;
    uint8_t NoSideAllocs;
    char TradeReportText[20];
    char TradeReportId[20];
    char Pad3[3];
} ModifyTesTradeRequestT;

/*
 * Structure: Modify Order Single Short Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    uint64_t Price;
    uint64_t ComplianceId;
    int32_t OrderQty;
    uint32_t SimpleSecurityId;
    uint32_t MatchInstCrossId;
    uint16_t EnrichmentRuleId;
    uint8_t Side;
    uint8_t PriceValidityCheckType;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingCapacity;
    char Pad5[5];
} ModifyOrderSingleShortRequestT;

/*
 * Structure: Modify Order Single Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    uint64_t Price;
    uint64_t StopPx;
    uint64_t ComplianceId;
    int32_t OrderQty;
    uint32_t ExpireDate;
    int32_t MarketSegmentId;
    uint32_t SimpleSecurityId;
    uint32_t MatchInstCrossId;
    uint32_t TargetPartyIdSessionId;
    char PartyIdTakeUpTradingFirm[5];
    char PartyIdOrderOriginationFirm[7];
    char PartyIdBeneficiary[9];
    uint8_t ApplSeqIndicator;
    uint8_t Side;
    uint8_t OrdType;
    uint8_t PriceValidityCheckType;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingSessionSubId;
    uint8_t TradingCapacity;
    char Account[2];
    char PartyIdPositionAccount[32];
    char PositionEffect;
    uint8_t OwnershipIndicator;
    char PartyIdLocationId[2];
    char CustOrderHandlingInst[1];
    char ComplianceText[20];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    char Pad4[4];
} ModifyOrderSingleRequestT;

/*
 * Structure: Modify Order Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderMeCompT ResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint64_t TrdRegTsTimePriority;
    int32_t LeavesQty;
    int32_t CumQty;
    int32_t CxlQty;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t Crossed;
    uint8_t ProductComplex;
    uint8_t Triggered;
    char Pad5[5];
} ModifyOrderResponseT;

/*
 * Structure: Modify Order Nr Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    int32_t LeavesQty;
    int32_t CumQty;
    int32_t CxlQty;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t Crossed;
    uint8_t ProductComplex;
    uint8_t Triggered;
    char Pad5[5];
} ModifyOrderNrResponseT;

/*
 * Structure: Modify Order Complex Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t Price;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    uint32_t ExpireDate;
    uint32_t MatchInstCrossId;
    uint32_t TargetPartyIdSessionId;
    char PartyIdTakeUpTradingFirm[5];
    char PartyIdOrderOriginationFirm[7];
    char PartyIdBeneficiary[9];
    uint8_t ApplSeqIndicator;
    uint8_t ProductComplex;
    uint8_t Side;
    uint8_t OrdType;
    uint8_t PriceValidityCheckType;
    uint8_t ExecInst;
    uint8_t TimeInForce;
    uint8_t TradingCapacity;
    uint8_t OwnershipIndicator;
    char PartyIdLocationId[2];
    char CustOrderHandlingInst[1];
    char ComplianceText[20];
    char PartyIdPositionAccount[32];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    uint8_t NoLegs;
    char Pad2[2];
} ModifyOrderComplexRequestT;

/*
 * Structure: Quote Entry Ack Grp Comp
 */ 
typedef struct {
    int64_t SecurityId;
    int32_t BidCxlSize;
    int32_t OfferCxlSize;
    uint32_t QuoteEntryRejectReason;
    uint8_t QuoteEntryStatus;
    char Pad3[3];
} QuoteEntryAckGrpCompT;

/*
 * Structure: Mass Quote Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t QuoteId;
    uint64_t QuoteResponseId;
    int32_t MarketSegmentId;
    uint8_t NoQuoteEntries;
    char Pad3[3];
} MassQuoteResponseT;

/*
 * Structure: Quote Entry Grp Comp
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t BidPx;
    uint64_t OfferPx;
    int32_t BidSize;
    int32_t OfferSize;
} QuoteEntryGrpCompT;

/*
 * Structure: Mass Quote Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t QuoteId;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint32_t MatchInstCrossId;
    uint16_t EnrichmentRuleId;
    uint8_t PriceValidityCheckType;
    uint8_t QuoteSizeType;
    uint8_t NoQuoteEntries;
    char Pad3[3];
} MassQuoteRequestT;

/*
 * Structure: Mm Parameter Definition Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t ExecId;
} MmParameterDefinitionResponseT;

/*
 * Structure: Mm Parameter Definition Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    int64_t ExposureDuration;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    int32_t CumQty;
    int32_t PctCount;
    int32_t Delta;
    int32_t Vega;
    uint8_t ProductComplex;
    char Pad7[7];
} MmParameterDefinitionRequestT;

/*
 * Structure: Logout Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
} LogoutResponseT;

/*
 * Structure: Logout Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
} LogoutRequestT;

/*
 * Structure: Logon Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
    int64_t ThrottleTimeInterval;
    uint32_t ThrottleNoMsgs;
    uint32_t ThrottleDisconnectLimit;
    uint32_t HeartBtInt;
    uint32_t SessionInstanceId;
    uint16_t MarketId;
    uint8_t TradSesMode;
    char DefaultCstmApplVerId[30];
    char Pad7[7];
} LogonResponseT;

/*
 * Structure: Logon Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint32_t HeartBtInt;
    uint32_t PartyIdSessionId;
    char DefaultCstmApplVerId[30];
    char Password[32];
    char ApplUsageOrders;
    char ApplUsageQuotes;
    char OrderRoutingIndicator;
    char FixEngineName[30];
    char FixEngineVersion[30];
    char FixEngineVendor[30];
    char ApplicationSystemName[30];
    char ApplicationSystemVersion[30];
    char ApplicationSystemVendor[30];
    char Pad3[3];
} LogonRequestT;

/*
 * Structure: Legal Notification Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderCompT RbcHeaderComp;
    uint64_t TransactTime;
    uint16_t VarTextLen;
    uint8_t UserStatus;
    char Pad5[5];
} LegalNotificationBroadcastT;

/*
 * Structure: Party Details Grp Comp
 */ 
typedef struct {
    uint32_t PartyDetailIdExecutingTrader;
    char PartyDetailExecutingTrader[6];
    uint8_t PartyDetailRoleQualifier;
    uint8_t PartyDetailStatus;
    char PartyDetailDeskId[3];
    char Pad1[1];
} PartyDetailsGrpCompT;

/*
 * Structure: Inquire User Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
    char LastEntityProcessed[16];
    uint16_t NoPartyDetails;
    char Pad6[6];
} InquireUserResponseT;

/*
 * Structure: Inquire User Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    char LastEntityProcessed[16];
} InquireUserRequestT;

/*
 * Structure: Sessions Grp Comp
 */ 
typedef struct {
    uint32_t PartyIdSessionId;
    uint8_t SessionMode;
    uint8_t SessionSubMode;
    char Pad2[2];
} SessionsGrpCompT;

/*
 * Structure: Inquire Session List Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
    uint16_t NoSessions;
    char Pad6[6];
} InquireSessionListResponseT;

/*
 * Structure: Inquire Session List Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
} InquireSessionListRequestT;

/*
 * Structure: Mm Parameter Grp Comp
 */ 
typedef struct {
    int64_t ExposureDuration;
    int32_t CumQty;
    int32_t PctCount;
    int32_t Delta;
    int32_t Vega;
    uint8_t ProductComplex;
    char Pad7[7];
} MmParameterGrpCompT;

/*
 * Structure: Inquire Mm Parameter Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t MmParameterReportId;
    int32_t MarketSegmentId;
    uint8_t NoMmParameters;
    char Pad3[3];
} InquireMmParameterResponseT;

/*
 * Structure: Inquire Mm Parameter Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
} InquireMmParameterRequestT;

/*
 * Structure: Enrichment Rules Grp Comp
 */ 
typedef struct {
    uint16_t EnrichmentRuleId;
    uint8_t PartyIdOriginationMarket;
    char Account[2];
    char PositionEffect;
    char PartyIdTakeUpTradingFirm[5];
    char PartyIdOrderOriginationFirm[7];
    char PartyIdBeneficiary[9];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    char Pad1[1];
} EnrichmentRulesGrpCompT;

/*
 * Structure: Inquire Enrichment Rule Id List Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
    char LastEntityProcessed[16];
    uint16_t NoEnrichmentRules;
    char Pad6[6];
} InquireEnrichmentRuleIdListResponseT;

/*
 * Structure: Inquire Enrichment Rule Id List Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    char LastEntityProcessed[16];
} InquireEnrichmentRuleIdListRequestT;

/*
 * Structure: Heartbeat Notification
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NotifHeaderCompT NotifHeaderComp;
} HeartbeatNotificationT;

/*
 * Structure: Heartbeat
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
} HeartbeatT;

/*
 * Structure: Gateway Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderCompT ResponseHeaderComp;
    uint32_t GatewayId;
    uint32_t GatewaySubId;
    uint32_t SecondaryGatewayId;
    uint32_t SecondaryGatewaySubId;
    uint8_t SessionMode;
    uint8_t TradSesMode;
    char Pad6[6];
} GatewayResponseT;

/*
 * Structure: Gateway Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint32_t PartyIdSessionId;
    char DefaultCstmApplVerId[30];
    char Password[32];
    char Pad6[6];
} GatewayRequestT;

/*
 * Structure: Forced User Logout Notification
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NotifHeaderCompT NotifHeaderComp;
    uint8_t UserStatus;
    char Pad3[3];
    uint32_t Username;
    uint16_t VarTextLen;
    char Pad6[6];
} ForcedUserLogoutNotificationT;

/*
 * Structure: Forced Logout Notification
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NotifHeaderCompT NotifHeaderComp;
    uint16_t VarTextLen;
    char Pad6[6];
} ForcedLogoutNotificationT;

/*
 * Structure: Delete Tes Trade Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint32_t PackageId;
    int32_t MarketSegmentId;
    uint32_t TesExecId;
    int32_t RelatedMarketSegmentId;
    uint16_t TrdType;
    uint8_t TradeReportType;
    char TradeReportId[20];
    char Pad1[1];
} DeleteTesTradeRequestT;

/*
 * Structure: Delete Order Single Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint32_t SimpleSecurityId;
    uint32_t TargetPartyIdSessionId;
    char Pad4[4];
} DeleteOrderSingleRequestT;

/*
 * Structure: Delete Order Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderMeCompT ResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    int32_t CumQty;
    int32_t CxlQty;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t ProductComplex;
    char Pad3[3];
} DeleteOrderResponseT;

/*
 * Structure: Delete Order Nr Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    int32_t CumQty;
    int32_t CxlQty;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t ProductComplex;
    char Pad3[3];
} DeleteOrderNrResponseT;

/*
 * Structure: Delete Order Complex Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
} DeleteOrderComplexRequestT;

/*
 * Structure: Delete Order Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    int32_t CumQty;
    int32_t CxlQty;
    int32_t MarketSegmentId;
    uint32_t PartyIdEnteringTrader;
    uint16_t ExecRestatementReason;
    uint8_t PartyIdEnteringFirm;
    char OrdStatus;
    char ExecType;
    uint8_t ProductComplex;
    uint8_t Side;
    char Pad1[1];
} DeleteOrderBroadcastT;

/*
 * Structure: Delete All Quote Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t MassActionReportId;
    uint16_t NoNotAffectedSecurities;
    char Pad6[6];
} DeleteAllQuoteResponseT;

/*
 * Structure: Delete All Quote Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
} DeleteAllQuoteRequestT;

/*
 * Structure: Delete All Quote Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t MassActionReportId;
    int64_t SecurityId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint32_t PartyIdEnteringTrader;
    uint32_t TargetPartyIdExecutingTrader;
    uint16_t NoNotAffectedSecurities;
    uint8_t MassActionReason;
    uint8_t PartyIdEnteringFirm;
    char TargetPartyIdDeskId[3];
    char Pad1[1];
} DeleteAllQuoteBroadcastT;

/*
 * Structure: Not Affected Orders Grp Comp
 */ 
typedef struct {
    uint64_t NotAffectedOrderId;
    uint64_t NotAffOrigClOrdId;
} NotAffectedOrdersGrpCompT;

/*
 * Structure: Delete All Order Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    ResponseHeaderMeCompT ResponseHeaderMeComp;
    uint64_t MassActionReportId;
    uint16_t NoNotAffectedOrders;
    char Pad6[6];
} DeleteAllOrderResponseT;

/*
 * Structure: Delete All Order Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    int64_t SecurityId;
    uint64_t Price;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint32_t TargetPartyIdExecutingTrader;
    uint8_t Side;
    char Pad3[3];
} DeleteAllOrderRequestT;

/*
 * Structure: Delete All Order Quote Event Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t MassActionReportId;
    int64_t SecurityId;
    int32_t MarketSegmentId;
    uint8_t MassActionReason;
    uint8_t ExecInst;
    char Pad2[2];
} DeleteAllOrderQuoteEventBroadcastT;

/*
 * Structure: Delete All Order Nr Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t MassActionReportId;
} DeleteAllOrderNrResponseT;

/*
 * Structure: Delete All Order Broadcast
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    RbcHeaderMeCompT RbcHeaderMeComp;
    uint64_t MassActionReportId;
    int64_t SecurityId;
    uint64_t Price;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint32_t TargetPartyIdExecutingTrader;
    uint32_t PartyIdEnteringTrader;
    uint16_t NoNotAffectedOrders;
    uint8_t PartyIdEnteringFirm;
    uint8_t MassActionReason;
    uint8_t ExecInst;
    uint8_t Side;
    char Pad2[2];
} DeleteAllOrderBroadcastT;

/*
 * Structure: Cross Request Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t ExecId;
} CrossRequestResponseT;

/*
 * Structure: Cross Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    int64_t SecurityId;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    char ComplianceText[20];
    char Pad4[4];
} CrossRequestT;

/*
 * Structure: Broadcast Error Notification
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NotifHeaderCompT NotifHeaderComp;
    uint32_t ApplIdStatus;
    uint32_t RefApplSubId;
    uint16_t VarTextLen;
    uint8_t RefApplId;
    uint8_t SessionStatus;
    char Pad4[4];
} BroadcastErrorNotificationT;

/*
 * Structure: Approve Tes Trade Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t ComplianceId;
    uint32_t PackageId;
    uint32_t AllocId;
    int32_t AllocQty;
    uint32_t TesExecId;
    int32_t MarketSegmentId;
    int32_t RelatedMarketSegmentId;
    uint16_t TrdType;
    uint8_t TradingCapacity;
    uint8_t TradeReportType;
    uint8_t Side;
    char TradeReportId[20];
    char PositionEffect;
    char PartyExecutingFirm[5];
    char PartyExecutingTrader[6];
    char Account[2];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    char PartyIdTakeUpTradingFirm[5];
    char PartyIdPositionAccount[32];
    char PartyIdOrderOriginationFirm[7];
    char PartyIdBeneficiary[9];
    char PartyIdLocationId[2];
    char CustOrderHandlingInst[1];
    char ComplianceText[20];
    char Pad1[1];
} ApproveTesTradeRequestT;

/*
 * Structure: Add Flexible Instrument Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t SecurityResponseId;
    int64_t SecurityId;
    uint64_t StrikePrice;
    int32_t MarketSegmentId;
    uint32_t MaturityDate;
    uint8_t ProductComplex;
    char SettlMethod;
    uint8_t OptAttribute;
    uint8_t PutOrCall;
    uint8_t ExerciseStyle;
    char Symbol[4];
    char Pad7[7];
} AddFlexibleInstrumentResponseT;

/*
 * Structure: Add Flexible Instrument Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t ComplianceId;
    uint64_t StrikePrice;
    int32_t MarketSegmentId;
    uint32_t MaturityDate;
    char SettlMethod;
    uint8_t OptAttribute;
    uint8_t PutOrCall;
    uint8_t ExerciseStyle;
    char ComplianceText[20];
} AddFlexibleInstrumentRequestT;

/*
 * Structure: Instrmt Leg Grp Comp
 */ 
typedef struct {
    int64_t LegSecurityId;
    uint64_t LegPrice;
    int32_t LegSymbol;
    uint32_t LegRatioQty;
    uint8_t LegSide;
    uint8_t LegSecurityType;
    char Pad6[6];
} InstrmtLegGrpCompT;

/*
 * Structure: Add Complex Instrument Response
 */ 
typedef struct {
    MessageHeaderOutCompT MessageHeaderOutComp;
    NrResponseHeaderMeCompT NrResponseHeaderMeComp;
    uint64_t LowLimitPrice;
    uint64_t HighLimitPrice;
    int64_t SecurityId;
    uint64_t LastUpdateTime;
    uint64_t SecurityResponseId;
    int32_t MarketSegmentId;
    int32_t NumberOfSecurities;
    int32_t SecuritySubType;
    uint8_t MultilegModel;
    uint8_t ImpliedMarketIndicator;
    uint8_t ProductComplex;
    uint8_t NoLegs;
} AddComplexInstrumentResponseT;

/*
 * Structure: Add Complex Instrument Request
 */ 
typedef struct {
    MessageHeaderInCompT MessageHeaderInComp;
    RequestHeaderCompT RequestHeaderComp;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    int32_t SecuritySubType;
    uint8_t ProductComplex;
    uint8_t NoLegs;
    char ComplianceText[20];
    char Pad2[2];
} AddComplexInstrumentRequestT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Eurex Exchange
   Version: 5.0
   Date: Monday, May 22, 2017
   Specification: T7-Enhanced-Trading-Interface-Manual.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/