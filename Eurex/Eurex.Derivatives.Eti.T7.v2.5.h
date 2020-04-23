/*******************************************************************************
 * C Structs For Eurex Derivatives T7 Eti 2.5 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Indicator Values
 */ 
#define ENUM_AGGRESSOR_INDICATOR_PASSIVE_0 = 0
#define ENUM_AGGRESSOR_INDICATOR_AGRESSOR_1 = 1
#define ENUM_AGGRESSOR_INDICATOR_AGGRESSOR_INDICATOR_MINIMUM_VALUE_1 = 1
#define ENUM_AGGRESSOR_INDICATOR_AGGRESSOR_INDICATOR_MINIMUM_VALUE_0 = 0

/*
 * Appl Id Values
 */ 
#define ENUM_APPL_ID_TRADE_1 = 1
#define ENUM_APPL_ID_NEWS_2 = 2
#define ENUM_APPL_ID_SERVICEAVAILABILITY_3 = 3
#define ENUM_APPL_ID_SESSIONDATA_4 = 4
#define ENUM_APPL_ID_LISTENERDATA_5 = 5
#define ENUM_APPL_ID_RISK_CONTROL_6 = 6
#define ENUM_APPL_ID_APPL_ID_MINIMUM_VALUE_6 = 6
#define ENUM_APPL_ID_APPL_ID_MINIMUM_VALUE_0 = 0

/*
 * Appl Id Status Values
 */ 
#define ENUM_APPL_ID_STATUS_OUTBOUNDCONVERSIONERROR_105 = 105
#define ENUM_APPL_ID_STATUS_APPL_ID_STATUS_MINIMUM_VALUE_4294967294 = 4294967294
#define ENUM_APPL_ID_STATUS_APPL_ID_STATUS_MINIMUM_VALUE_0 = 0

/*
 * Appl Resend Flag Values
 */ 
#define ENUM_APPL_RESEND_FLAG_FALSE_0 = 0
#define ENUM_APPL_RESEND_FLAG_TRUE_1 = 1
#define ENUM_APPL_RESEND_FLAG_APPL_RESEND_FLAG_MINIMUM_VALUE_1 = 1
#define ENUM_APPL_RESEND_FLAG_APPL_RESEND_FLAG_MINIMUM_VALUE_0 = 0

/*
 * Appl Seq Indicator Values
 */ 
#define ENUM_APPL_SEQ_INDICATOR_NO_RECOVERY_REQUIRED_0 = 0
#define ENUM_APPL_SEQ_INDICATOR_RECOVERY_REQUIRED_1 = 1
#define ENUM_APPL_SEQ_INDICATOR_APPL_SEQ_INDICATOR_MINIMUM_VALUE_1 = 1
#define ENUM_APPL_SEQ_INDICATOR_APPL_SEQ_INDICATOR_MINIMUM_VALUE_0 = 0

/*
 * Appl Seq Status Values
 */ 
#define ENUM_APPL_SEQ_STATUS_UNAVAILABLE_0 = 0
#define ENUM_APPL_SEQ_STATUS_AVAILABLE_1 = 1
#define ENUM_APPL_SEQ_STATUS_APPL_SEQ_STATUS_MINIMUM_VALUE_1 = 1
#define ENUM_APPL_SEQ_STATUS_APPL_SEQ_STATUS_MINIMUM_VALUE_0 = 0

/*
 * Appl Usage Orders Values
 */ 
#define ENUM_APPL_USAGE_ORDERS_AUTOMATED_A = 'A'
#define ENUM_APPL_USAGE_ORDERS_MANUAL_M = 'M'
#define ENUM_APPL_USAGE_ORDERS_AUTO_SELECT_B = 'B'
#define ENUM_APPL_USAGE_ORDERS_NONE_N = 'N'

/*
 * Appl Usage Quotes Values
 */ 
#define ENUM_APPL_USAGE_QUOTES_AUTOMATED_A = 'A'
#define ENUM_APPL_USAGE_QUOTES_MANUAL_M = 'M'
#define ENUM_APPL_USAGE_QUOTES_AUTO_SELECT_B = 'B'
#define ENUM_APPL_USAGE_QUOTES_NONE_N = 'N'

/*
 * Exec Inst Values
 */ 
#define ENUM_EXEC_INST_H1 = 1
#define ENUM_EXEC_INST_Q2 = 2
#define ENUM_EXEC_INST_HQ_3 = 3
#define ENUM_EXEC_INST_H65 = 5
#define ENUM_EXEC_INST_Q66 = 6
#define ENUM_EXEC_INST_EXEC_INST_MINIMUM_VALUE_6 = 6
#define ENUM_EXEC_INST_EXEC_INST_MINIMUM_VALUE_1 = 1

/*
 * Exec Restatement Reason Values
 */ 
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_BOOK_RESTATEMENT_001 = 001
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_ADDED_101 = 101
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_MODIFIED_102 = 102
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_CANCELLED_103 = 103
#define ENUM_EXEC_RESTATEMENT_REASON_IOC_ORDER_CANCELLED_105 = 105
#define ENUM_EXEC_RESTATEMENT_REASON_BOOK_ORDER_EXECUTED_108 = 108
#define ENUM_EXEC_RESTATEMENT_REASON_MARKET_ORDER_TRIGGERED_135 = 135
#define ENUM_EXEC_RESTATEMENT_REASON_CAO_ORDER_ACTIVATED_149 = 149
#define ENUM_EXEC_RESTATEMENT_REASON_CAO_ORDER_INACTIVATED_150 = 150
#define ENUM_EXEC_RESTATEMENT_REASON_OCO_ORDER_TRIGGERED_164 = 164
#define ENUM_EXEC_RESTATEMENT_REASON_STOP_ORDER_TRIGGERED_172 = 172
#define ENUM_EXEC_RESTATEMENT_REASON_OWNERSHIP_CHANGED_181 = 181
#define ENUM_EXEC_RESTATEMENT_REASON_ORDER_CANCELLATION_PENDING_197 = 197
#define ENUM_EXEC_RESTATEMENT_REASON_PENDING_CANCELLATION_EXECUTED_199 = 199
#define ENUM_EXEC_RESTATEMENT_REASON_BOC_ORDER_CANCELLED_212 = 212
#define ENUM_EXEC_RESTATEMENT_REASON_EXEC_RESTATEMENT_REASON_MINIMUM_VALUE_299 = 299
#define ENUM_EXEC_RESTATEMENT_REASON_EXEC_RESTATEMENT_REASON_MINIMUM_VALUE_0 = 0

/*
 * Exec Type Values
 */ 
#define ENUM_EXEC_TYPE_NEW_0 = '0'
#define ENUM_EXEC_TYPE_CANCELED_4 = '4'
#define ENUM_EXEC_TYPE_REPLACED_5 = '5'
#define ENUM_EXEC_TYPE_PENDING_CANCELE_6 = '6'
#define ENUM_EXEC_TYPE_SUSPENDED_9 = '9'
#define ENUM_EXEC_TYPE_RESTATED_D = 'D'
#define ENUM_EXEC_TYPE_TRIGGERED_L = 'L'
#define ENUM_EXEC_TYPE_TRADE_F = 'F'

/*
 * Fill Liquidity Ind Values
 */ 
#define ENUM_FILL_LIQUIDITY_IND_ADDED_LIQUIDITY_1 = 1
#define ENUM_FILL_LIQUIDITY_IND_REMOVED_LIQUIDITY_2 = 2
#define ENUM_FILL_LIQUIDITY_IND_TRIGGERED_STOP_ORDER_5 = 5
#define ENUM_FILL_LIQUIDITY_IND_TRIGGERED_OCO_ORDER_6 = 6
#define ENUM_FILL_LIQUIDITY_IND_TRIGGERED_MARKET_ORDER_7 = 7
#define ENUM_FILL_LIQUIDITY_IND_FILL_LIQUIDITY_IND_MINIMUM_VALUE_7 = 7
#define ENUM_FILL_LIQUIDITY_IND_FILL_LIQUIDITY_IND_MINIMUM_VALUE_1 = 1

/*
 * Implied Market Indicator Values
 */ 
#define ENUM_IMPLIED_MARKET_INDICATOR_NOTIMPLIED_0 = 0
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIEDINOUT_3 = 3
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_MARKET_INDICATOR_MINIMUM_VALUE_3 = 3
#define ENUM_IMPLIED_MARKET_INDICATOR_IMPLIED_MARKET_INDICATOR_MINIMUM_VALUE_0 = 0

/*
 * Last Fragment Values
 */ 
#define ENUM_LAST_FRAGMENT_NOT_LAST_MESSAGE_0 = 0
#define ENUM_LAST_FRAGMENT_LAST_MESSAGE_1 = 1
#define ENUM_LAST_FRAGMENT_LAST_FRAGMENT_MINIMUM_VALUE_1 = 1
#define ENUM_LAST_FRAGMENT_LAST_FRAGMENT_MINIMUM_VALUE_0 = 0

/*
 * Leg Position Effect Values
 */ 
#define ENUM_LEG_POSITION_EFFECT_CLOSE_C = 'C'
#define ENUM_LEG_POSITION_EFFECT_OPEN_O = 'O'

/*
 * Leg Security Type Values
 */ 
#define ENUM_LEG_SECURITY_TYPE_MULTILEG_INSTRUMENT_1 = 1
#define ENUM_LEG_SECURITY_TYPE_UNDERLYING_LEG_2 = 2
#define ENUM_LEG_SECURITY_TYPE_LEG_SECURITY_TYPE_MINIMUM_VALUE_2 = 2
#define ENUM_LEG_SECURITY_TYPE_LEG_SECURITY_TYPE_MINIMUM_VALUE_1 = 1

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY_1 = 1
#define ENUM_LEG_SIDE_SELL_2 = 2
#define ENUM_LEG_SIDE_LEG_SIDE_MINIMUM_VALUE_2 = 2
#define ENUM_LEG_SIDE_LEG_SIDE_MINIMUM_VALUE_1 = 1

/*
 * List Update Action Values
 */ 
#define ENUM_LIST_UPDATE_ACTION_ADD_A = 'A'
#define ENUM_LIST_UPDATE_ACTION_DELETE_D = 'D'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_XEUR_1 = 1
#define ENUM_MARKET_ID_XEEE_2 = 2
#define ENUM_MARKET_ID_MARKET_ID_MINIMUM_VALUE_255 = 255
#define ENUM_MARKET_ID_MARKET_ID_MINIMUM_VALUE_1 = 1

/*
 * Mass Action Reason Values
 */ 
#define ENUM_MASS_ACTION_REASON_NO_SPECIAL_REASON_0 = 0
#define ENUM_MASS_ACTION_REASON_STOP_TRADING_1 = 1
#define ENUM_MASS_ACTION_REASON_EMERGENCY_2 = 2
#define ENUM_MASS_ACTION_REASON_MARKET_MAKER_PROTECTION_3 = 3
#define ENUM_MASS_ACTION_REASON_SESSION_LOSS_6 = 6
#define ENUM_MASS_ACTION_REASON_DUPLICATE_SESSION_LOGIN_7 = 7
#define ENUM_MASS_ACTION_REASON_CLEARING_RISK_CONTROL_8 = 8
#define ENUM_MASS_ACTION_REASON_PRODUCT_STATE_HALT_105 = 105
#define ENUM_MASS_ACTION_REASON_PRODUCT_STATE_HOLIDAY_106 = 106
#define ENUM_MASS_ACTION_REASON_INSTRUMENT_SUSPENDED_107 = 107
#define ENUM_MASS_ACTION_REASON_COMPLEX_INSTRUMENT_DELETION_109 = 109
#define ENUM_MASS_ACTION_REASON_VOLATILITY_INTERRUPTION_110 = 110
#define ENUM_MASS_ACTION_REASON_PRODUCTTEMPORARILYNOTTRADEABLE_111 = 111
#define ENUM_MASS_ACTION_REASON_MASS_ACTION_REASON_MINIMUM_VALUE_200 = 200
#define ENUM_MASS_ACTION_REASON_MASS_ACTION_REASON_MINIMUM_VALUE_0 = 0

/*
 * Mass Action Type Values
 */ 
#define ENUM_MASS_ACTION_TYPE_SUSPENDQUOTES_1 = 1
#define ENUM_MASS_ACTION_TYPE_RELEASEQUOTES_2 = 2
#define ENUM_MASS_ACTION_TYPE_MASS_ACTION_TYPE_MINIMUM_VALUE_2 = 2
#define ENUM_MASS_ACTION_TYPE_MASS_ACTION_TYPE_MINIMUM_VALUE_1 = 1

/*
 * Match Sub Type Values
 */ 
#define ENUM_MATCH_SUB_TYPE_OPENING_AUCTION_1 = 1
#define ENUM_MATCH_SUB_TYPE_CLOSING_AUCTION_2 = 2
#define ENUM_MATCH_SUB_TYPE_INTRADAY_AUCTION_3 = 3
#define ENUM_MATCH_SUB_TYPE_CIRCUIT_BREAKER_AUCTION_4 = 4
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MINIMUM_VALUE_4 = 4
#define ENUM_MATCH_SUB_TYPE_MATCH_SUB_TYPE_MINIMUM_VALUE_1 = 1

/*
 * Match Type Values
 */ 
#define ENUM_MATCH_TYPE_CONFIRMED_TRADE_REPORT_3 = 3
#define ENUM_MATCH_TYPE_AUTOMATCHINCOMING_4 = 4
#define ENUM_MATCH_TYPE_CROSS_AUCTION_5 = 5
#define ENUM_MATCH_TYPE_CALL_AUCTION_7 = 7
#define ENUM_MATCH_TYPE_AUTOMATCHRESTING_11 = 11
#define ENUM_MATCH_TYPE_MATCH_TYPE_MINIMUM_VALUE_12 = 12
#define ENUM_MATCH_TYPE_MATCH_TYPE_MINIMUM_VALUE_0 = 0

/*
 * Matching Engine Status Values
 */ 
#define ENUM_MATCHING_ENGINE_STATUS_UNAVAILABLE_0 = 0
#define ENUM_MATCHING_ENGINE_STATUS_AVAILABLE_1 = 1
#define ENUM_MATCHING_ENGINE_STATUS_MATCHING_ENGINE_STATUS_MINIMUM_VALUE_1 = 1
#define ENUM_MATCHING_ENGINE_STATUS_MATCHING_ENGINE_STATUS_MINIMUM_VALUE_0 = 0

/*
 * Multi Leg Reporting Type Values
 */ 
#define ENUM_MULTI_LEG_REPORTING_TYPE_SINGLESECURITY_1 = 1
#define ENUM_MULTI_LEG_REPORTING_TYPE_INDIVIDUALLEGOFAMULTILEGSECURITY_2 = 2
#define ENUM_MULTI_LEG_REPORTING_TYPE_MULTI_LEG_REPORTING_TYPE_MINIMUM_VALUE_2 = 2
#define ENUM_MULTI_LEG_REPORTING_TYPE_MULTI_LEG_REPORTING_TYPE_MINIMUM_VALUE_1 = 1

/*
 * Multileg Model Values
 */ 
#define ENUM_MULTILEG_MODEL_PREDEFINED_MULTILEG_SECURITY_0 = 0
#define ENUM_MULTILEG_MODEL_USERDEFINED_MULTLEG_1 = 1
#define ENUM_MULTILEG_MODEL_MULTILEG_MODEL_MINIMUM_VALUE_1 = 1
#define ENUM_MULTILEG_MODEL_MULTILEG_MODEL_MINIMUM_VALUE_0 = 0

/*
 * Ord Status Values
 */ 
#define ENUM_ORD_STATUS_NEW_0 = '0'
#define ENUM_ORD_STATUS_PARTIALLYFILLED_1 = '1'
#define ENUM_ORD_STATUS_FILLED_2 = '2'
#define ENUM_ORD_STATUS_CANCELED_4 = '4'
#define ENUM_ORD_STATUS_PENDING_CANCEL_6 = '6'
#define ENUM_ORD_STATUS_SUSPENDED_9 = '9'

/*
 * Ord Type Values
 */ 
#define ENUM_ORD_TYPE_MARKET_1 = 1
#define ENUM_ORD_TYPE_LIMIT_2 = 2
#define ENUM_ORD_TYPE_STOP_3 = 3
#define ENUM_ORD_TYPE_STOP_LIMIT_4 = 4
#define ENUM_ORD_TYPE_ORD_TYPE_MINIMUM_VALUE_4 = 4
#define ENUM_ORD_TYPE_ORD_TYPE_MINIMUM_VALUE_1 = 1

/*
 * Order Category Values
 */ 
#define ENUM_ORDER_CATEGORY_ORDER_1 = '1'
#define ENUM_ORDER_CATEGORY_QUOTE_2 = '2'

/*
 * Order Routing Indicator Values
 */ 
#define ENUM_ORDER_ROUTING_INDICATOR_YES_Y = 'Y'
#define ENUM_ORDER_ROUTING_INDICATOR_NO_N = 'N'

/*
 * Order Side Values
 */ 
#define ENUM_ORDER_SIDE_BUY_1 = 1
#define ENUM_ORDER_SIDE_SELL_2 = 2
#define ENUM_ORDER_SIDE_ORDER_SIDE_MINIMUM_VALUE_2 = 2
#define ENUM_ORDER_SIDE_ORDER_SIDE_MINIMUM_VALUE_1 = 1

/*
 * Ownership Indicator Values
 */ 
#define ENUM_OWNERSHIP_INDICATOR_NO_CHANGEOF_OWNERSHIP_0 = 0
#define ENUM_OWNERSHIP_INDICATOR_CHANGETO_EXECUTING_TRADER_1 = 1
#define ENUM_OWNERSHIP_INDICATOR_OWNERSHIP_INDICATOR_MINIMUM_VALUE_1 = 1
#define ENUM_OWNERSHIP_INDICATOR_OWNERSHIP_INDICATOR_MINIMUM_VALUE_0 = 0

/*
 * Party Action Type Values
 */ 
#define ENUM_PARTY_ACTION_TYPE_HALT_TRADING_1 = 1
#define ENUM_PARTY_ACTION_TYPE_REINSTATE_2 = 2
#define ENUM_PARTY_ACTION_TYPE_PARTY_ACTION_TYPE_MINIMUM_VALUE_2 = 2
#define ENUM_PARTY_ACTION_TYPE_PARTY_ACTION_TYPE_MINIMUM_VALUE_1 = 1

/*
 * Party Detail Role Qualifier Values
 */ 
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_TRADER_10 = 10
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_HEAD_TRADER_11 = 11
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_SUPERVISOR_12 = 12
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_PARTY_DETAIL_ROLE_QUALIFIER_MINIMUM_VALUE_12 = 12
#define ENUM_PARTY_DETAIL_ROLE_QUALIFIER_PARTY_DETAIL_ROLE_QUALIFIER_MINIMUM_VALUE_10 = 10

/*
 * Party Detail Status Values
 */ 
#define ENUM_PARTY_DETAIL_STATUS_ACTIVE_0 = 0
#define ENUM_PARTY_DETAIL_STATUS_SUSPEND_1 = 1
#define ENUM_PARTY_DETAIL_STATUS_PARTY_DETAIL_STATUS_MINIMUM_VALUE_1 = 1
#define ENUM_PARTY_DETAIL_STATUS_PARTY_DETAIL_STATUS_MINIMUM_VALUE_0 = 0

/*
 * Party Id Entering Firm Values
 */ 
#define ENUM_PARTY_ID_ENTERING_FIRM_PARTICIPANT_1 = 1
#define ENUM_PARTY_ID_ENTERING_FIRM_MARKET_SUPERVISION_2 = 2
#define ENUM_PARTY_ID_ENTERING_FIRM_PARTY_ID_ENTERING_FIRM_MINIMUM_VALUE_2 = 2
#define ENUM_PARTY_ID_ENTERING_FIRM_PARTY_ID_ENTERING_FIRM_MINIMUM_VALUE_1 = 1

/*
 * Party Id Origination Market Values
 */ 
#define ENUM_PARTY_ID_ORIGINATION_MARKET_XKFE_1 = 1
#define ENUM_PARTY_ID_ORIGINATION_MARKET_XTAF_2 = 2
#define ENUM_PARTY_ID_ORIGINATION_MARKET_PARTY_ID_ORIGINATION_MARKET_MINIMUM_VALUE_2 = 2
#define ENUM_PARTY_ID_ORIGINATION_MARKET_PARTY_ID_ORIGINATION_MARKET_MINIMUM_VALUE_1 = 1

/*
 * Position Effect Values
 */ 
#define ENUM_POSITION_EFFECT_CLOSE_C = 'C'
#define ENUM_POSITION_EFFECT_OPEN_O = 'O'

/*
 * Price Validity Check Type Values
 */ 
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_NONE_0 = 0
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_OPTIONAL_1 = 1
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_MANDATORY_2 = 2
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_PRICE_VALIDITY_CHECK_TYPE_MINIMUM_VALUE_2 = 2
#define ENUM_PRICE_VALIDITY_CHECK_TYPE_PRICE_VALIDITY_CHECK_TYPE_MINIMUM_VALUE_0 = 0

/*
 * Product Complex Values
 */ 
#define ENUM_PRODUCT_COMPLEX_SIMPLEINSTRUMENT_1 = 1
#define ENUM_PRODUCT_COMPLEX_STANDARDOPTIONSTRATEGY_2 = 2
#define ENUM_PRODUCT_COMPLEX_NONSTANDARDOPTIONSTRATEGY_3 = 3
#define ENUM_PRODUCT_COMPLEX_VOLATILITYSTRATEGY_4 = 4
#define ENUM_PRODUCT_COMPLEX_FUTURES_SPREAD_5 = 5
#define ENUM_PRODUCT_COMPLEX_INTERPRODUCTSPREAD_6 = 6
#define ENUM_PRODUCT_COMPLEX_STANDARDFUTURESTRATEGY_7 = 7
#define ENUM_PRODUCT_COMPLEX_PACKANDBUNDLE_8 = 8
#define ENUM_PRODUCT_COMPLEX_STRIP_9 = 9
#define ENUM_PRODUCT_COMPLEX_PRODUCT_COMPLEX_MINIMUM_VALUE_9 = 9
#define ENUM_PRODUCT_COMPLEX_PRODUCT_COMPLEX_MINIMUM_VALUE_1 = 1

/*
 * Quote Entry Reject Reason Values
 */ 
#define ENUM_QUOTE_ENTRY_REJECT_REASON_UNKNOWN_SECURITY_1 = 1
#define ENUM_QUOTE_ENTRY_REJECT_REASON_DUPLICATE_QUOTE_6 = 6
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_PRICE_8 = 8
#define ENUM_QUOTE_ENTRY_REJECT_REASON_NO_REFERENCE_PRICE_AVAILABLE_16 = 16
#define ENUM_QUOTE_ENTRY_REJECT_REASON_NO_SINGLE_SIDED_QUOTES_100 = 100
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_QUOTING_MODEL_103 = 103
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_SIZE_106 = 106
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INVALID_UNDERLYING_PRICE_107 = 107
#define ENUM_QUOTE_ENTRY_REJECT_REASON_BID_PRICE_NOT_REASONABLE_108 = 108
#define ENUM_QUOTE_ENTRY_REJECT_REASON_ASK_PRICE_NOT_REASONABLE_109 = 109
#define ENUM_QUOTE_ENTRY_REJECT_REASON_BID_PRICE_EXCEEDS_RANGE_110 = 110
#define ENUM_QUOTE_ENTRY_REJECT_REASON_ASK_PRICE_EXCEEDS_RANGE_111 = 111
#define ENUM_QUOTE_ENTRY_REJECT_REASON_INSTRUMENT_STATE_FREEZE_115 = 115
#define ENUM_QUOTE_ENTRY_REJECT_REASON_DELETION_ALREADY_PENDING_116 = 116
#define ENUM_QUOTE_ENTRY_REJECT_REASON_PRE_TRADE_RISK_SESSION_LIMIT_EXCEEDED_117 = 117
#define ENUM_QUOTE_ENTRY_REJECT_REASON_PRE_TRADE_RISK_BU_LIMIT_EXCEEDED_118 = 118
#define ENUM_QUOTE_ENTRY_REJECT_REASON_ENTITLEMENT_NOT_ASSIGNED_FOR_UNDERLYING_119 = 119
#define ENUM_QUOTE_ENTRY_REJECT_REASON_CANT_PROC_IN_CURR_INSTR_STATE_131 = 131
#define ENUM_QUOTE_ENTRY_REJECT_REASON_QUOTE_ENTRY_REJECT_REASON_MINIMUM_VALUE_65535 = 65535
#define ENUM_QUOTE_ENTRY_REJECT_REASON_QUOTE_ENTRY_REJECT_REASON_MINIMUM_VALUE_0 = 0

/*
 * Quote Entry Status Values
 */ 
#define ENUM_QUOTE_ENTRY_STATUS_ACCEPTED_0 = 0
#define ENUM_QUOTE_ENTRY_STATUS_REJECTED_5 = 5
#define ENUM_QUOTE_ENTRY_STATUS_REMOVEDAND_REJECTED_6 = 6
#define ENUM_QUOTE_ENTRY_STATUS_PENDING_10 = 10
#define ENUM_QUOTE_ENTRY_STATUS_QUOTE_ENTRY_STATUS_MINIMUM_VALUE_100 = 100
#define ENUM_QUOTE_ENTRY_STATUS_QUOTE_ENTRY_STATUS_MINIMUM_VALUE_0 = 0

/*
 * Quote Event Liquidity Ind Values
 */ 
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_ADDED_LIQUIDITY_1 = 1
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_REMOVED_LIQUIDITY_2 = 2
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_QUOTE_EVENT_LIQUIDITY_IND_MINIMUM_VALUE_2 = 2
#define ENUM_QUOTE_EVENT_LIQUIDITY_IND_QUOTE_EVENT_LIQUIDITY_IND_MINIMUM_VALUE_1 = 1

/*
 * Quote Event Reason Values
 */ 
#define ENUM_QUOTE_EVENT_REASON_PENDINGCANCELLATIONEXECUTED_14 = 14
#define ENUM_QUOTE_EVENT_REASON_INVALIDPRICE_15 = 15
#define ENUM_QUOTE_EVENT_REASON_QUOTE_EVENT_REASON_MINIMUM_VALUE_15 = 15
#define ENUM_QUOTE_EVENT_REASON_QUOTE_EVENT_REASON_MINIMUM_VALUE_14 = 14

/*
 * Quote Event Side Values
 */ 
#define ENUM_QUOTE_EVENT_SIDE_BUY_1 = 1
#define ENUM_QUOTE_EVENT_SIDE_SELL_2 = 2
#define ENUM_QUOTE_EVENT_SIDE_QUOTE_EVENT_SIDE_MINIMUM_VALUE_2 = 2
#define ENUM_QUOTE_EVENT_SIDE_QUOTE_EVENT_SIDE_MINIMUM_VALUE_1 = 1

/*
 * Quote Event Type Values
 */ 
#define ENUM_QUOTE_EVENT_TYPE_REMOVEDQUOTESIDE_3 = 3
#define ENUM_QUOTE_EVENT_TYPE_PARTIALLYFILLED_4 = 4
#define ENUM_QUOTE_EVENT_TYPE_FILLED_5 = 5
#define ENUM_QUOTE_EVENT_TYPE_QUOTE_EVENT_TYPE_MINIMUM_VALUE_5 = 5
#define ENUM_QUOTE_EVENT_TYPE_QUOTE_EVENT_TYPE_MINIMUM_VALUE_0 = 0

/*
 * Quote Size Type Values
 */ 
#define ENUM_QUOTE_SIZE_TYPE_TOTAL_SIZE_1 = 1
#define ENUM_QUOTE_SIZE_TYPE_OPEN_SIZE_2 = 2
#define ENUM_QUOTE_SIZE_TYPE_QUOTE_SIZE_TYPE_MINIMUM_VALUE_2 = 2
#define ENUM_QUOTE_SIZE_TYPE_QUOTE_SIZE_TYPE_MINIMUM_VALUE_1 = 1

/*
 * Ref Appl Id Values
 */ 
#define ENUM_REF_APPL_ID_TRADE_1 = 1
#define ENUM_REF_APPL_ID_NEWS_2 = 2
#define ENUM_REF_APPL_ID_SERVICEAVAILABILITY_3 = 3
#define ENUM_REF_APPL_ID_SESSIONDATA_4 = 4
#define ENUM_REF_APPL_ID_LISTENERDATA_5 = 5
#define ENUM_REF_APPL_ID_RISK_CONTROL_6 = 6
#define ENUM_REF_APPL_ID_REF_APPL_ID_MINIMUM_VALUE_6 = 6
#define ENUM_REF_APPL_ID_REF_APPL_ID_MINIMUM_VALUE_0 = 0

/*
 * Related Product Complex Values
 */ 
#define ENUM_RELATED_PRODUCT_COMPLEX_STANDARDOPTIONSTRATEGY_2 = 2
#define ENUM_RELATED_PRODUCT_COMPLEX_NONSTANDARDOPTIONSTRATEGY_3 = 3
#define ENUM_RELATED_PRODUCT_COMPLEX_VOLATILITYSTRATEGY_4 = 4
#define ENUM_RELATED_PRODUCT_COMPLEX_FUTURES_SPREAD_5 = 5
#define ENUM_RELATED_PRODUCT_COMPLEX_INTERPRODUCTSPREAD_6 = 6
#define ENUM_RELATED_PRODUCT_COMPLEX_STANDARDFUTURESTRATEGY_7 = 7
#define ENUM_RELATED_PRODUCT_COMPLEX_PACKANDBUNDLE_8 = 8
#define ENUM_RELATED_PRODUCT_COMPLEX_STRIP_9 = 9
#define ENUM_RELATED_PRODUCT_COMPLEX_RELATED_PRODUCT_COMPLEX_MINIMUM_VALUE_9 = 9
#define ENUM_RELATED_PRODUCT_COMPLEX_RELATED_PRODUCT_COMPLEX_MINIMUM_VALUE_1 = 1

/*
 * Requesting Party Id Entering Firm Values
 */ 
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_PARTICIPANT_1 = 1
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_MARKET_SUPERVISION_2 = 2
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_REQUESTING_PARTY_ID_ENTERING_FIRM_MINIMUM_VALUE_2 = 2
#define ENUM_REQUESTING_PARTY_ID_ENTERING_FIRM_REQUESTING_PARTY_ID_ENTERING_FIRM_MINIMUM_VALUE_1 = 1

/*
 * Requesting Party Id Executing System Values
 */ 
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_EUREX_CLEARING_1 = 1
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_EUREX_TRADING_2 = 2
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_MINIMUM_VALUE_4294967294 = 4294967294
#define ENUM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_REQUESTING_PARTY_ID_EXECUTING_SYSTEM_MINIMUM_VALUE_0 = 0

/*
 * Risk Limit Action Values
 */ 
#define ENUM_RISK_LIMIT_ACTION_WARNING_4 = 4
#define ENUM_RISK_LIMIT_ACTION_QUEUE_INBOUND_0 = 0
#define ENUM_RISK_LIMIT_ACTION_REJECT_2 = 2
#define ENUM_RISK_LIMIT_ACTION_RISK_LIMIT_ACTION_MINIMUM_VALUE_4 = 4
#define ENUM_RISK_LIMIT_ACTION_RISK_LIMIT_ACTION_MINIMUM_VALUE_0 = 0

/*
 * Session Mode Values
 */ 
#define ENUM_SESSION_MODE_HF_1 = 1
#define ENUM_SESSION_MODE_LF_2 = 2
#define ENUM_SESSION_MODE_GUI_3 = 3
#define ENUM_SESSION_MODE_SESSION_MODE_MINIMUM_VALUE_3 = 3
#define ENUM_SESSION_MODE_SESSION_MODE_MINIMUM_VALUE_1 = 1

/*
 * Session Reject Reason Values
 */ 
#define ENUM_SESSION_REJECT_REASON_REQUIRED_TAG_MISSING_1 = 1
#define ENUM_SESSION_REJECT_REASON_VALUEISINCORRECT_5 = 5
#define ENUM_SESSION_REJECT_REASON_DECRYPTIONPROBLEM_7 = 7
#define ENUM_SESSION_REJECT_REASON_INVALID_MSG_ID_11 = 11
#define ENUM_SESSION_REJECT_REASON_INCORRECT_NUM_IN_GROUPCOUNT_16 = 16
#define ENUM_SESSION_REJECT_REASON_OTHER_99 = 99
#define ENUM_SESSION_REJECT_REASON_THROTTLE_LIMIT_EXCEEDED_100 = 100
#define ENUM_SESSION_REJECT_REASON_EXPOSURE_LIMIT_EXCEEDED_101 = 101
#define ENUM_SESSION_REJECT_REASON_SERVICE_TEMPORARILY_NOT_AVAILABLE_102 = 102
#define ENUM_SESSION_REJECT_REASON_SERVICE_NOT_AVAILABLE_103 = 103
#define ENUM_SESSION_REJECT_REASON_RESULT_OF_TRANSACTION_UNKNOWN_104 = 104
#define ENUM_SESSION_REJECT_REASON_OUTBOUNDCONVERSIONERROR_105 = 105
#define ENUM_SESSION_REJECT_REASON_HEARTBEAT_VIOLATION_152 = 152
#define ENUM_SESSION_REJECT_REASON_INTERNALTECHNICALERROR_200 = 200
#define ENUM_SESSION_REJECT_REASON_VALIDATION_ERROR_210 = 210
#define ENUM_SESSION_REJECT_REASON_USER_ALREADY_LOGGED_IN_211 = 211
#define ENUM_SESSION_REJECT_REASON_ORDER_NOT_FOUND_10000 = 10000
#define ENUM_SESSION_REJECT_REASON_PRICE_NOT_REASONABLE_10001 = 10001
#define ENUM_SESSION_REJECT_REASON_CLIENT_ORDER_ID_NOT_UNIQUE_10002 = 10002
#define ENUM_SESSION_REJECT_REASON_QUOTE_ACTIVATION_IN_PROGRESS_10003 = 10003
#define ENUM_SESSION_REJECT_REASON_BU_BOOK_ORDER_LIMIT_EXCEEDED_10004 = 10004
#define ENUM_SESSION_REJECT_REASON_SESSION_BOOK_ORDER_LIMIT_EXCEEDED_10005 = 10005
#define ENUM_SESSION_REJECT_REASON_CREATE_CI_THROTTLE_EXCEEDED_10010 = 10010
#define ENUM_SESSION_REJECT_REASON_SESSION_REJECT_REASON_MINIMUM_VALUE_4294967294 = 4294967294
#define ENUM_SESSION_REJECT_REASON_SESSION_REJECT_REASON_MINIMUM_VALUE_0 = 0

/*
 * Session Status Values
 */ 
#define ENUM_SESSION_STATUS_ACTIVE_0 = 0
#define ENUM_SESSION_STATUS_LOGOUT_4 = 4
#define ENUM_SESSION_STATUS_SESSION_STATUS_MINIMUM_VALUE_4 = 4
#define ENUM_SESSION_STATUS_SESSION_STATUS_MINIMUM_VALUE_0 = 0

/*
 * Session Sub Mode Values
 */ 
#define ENUM_SESSION_SUB_MODE_REGULARTRADINGSESSION_0 = 0
#define ENUM_SESSION_SUB_MODE_FI_XTRADINGSESSION_1 = 1
#define ENUM_SESSION_SUB_MODE_REGULAR_BACK_OFFICESESSION_2 = 2
#define ENUM_SESSION_SUB_MODE_SESSION_SUB_MODE_MINIMUM_VALUE_2 = 2
#define ENUM_SESSION_SUB_MODE_SESSION_SUB_MODE_MINIMUM_VALUE_0 = 0

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY_1 = 1
#define ENUM_SIDE_SELL_2 = 2
#define ENUM_SIDE_SIDE_MINIMUM_VALUE_2 = 2
#define ENUM_SIDE_SIDE_MINIMUM_VALUE_1 = 1

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY_0 = 0
#define ENUM_TIME_IN_FORCE_GTC_1 = 1
#define ENUM_TIME_IN_FORCE_IOC_3 = 3
#define ENUM_TIME_IN_FORCE_GTD_6 = 6
#define ENUM_TIME_IN_FORCE_TIME_IN_FORCE_MINIMUM_VALUE_6 = 6
#define ENUM_TIME_IN_FORCE_TIME_IN_FORCE_MINIMUM_VALUE_0 = 0

/*
 * Trad Ses Event Values
 */ 
#define ENUM_TRAD_SES_EVENT_STARTOF_SERVICE_101 = 101
#define ENUM_TRAD_SES_EVENT_MARKET_RESET_102 = 102
#define ENUM_TRAD_SES_EVENT_ENDOF_RESTATEMENT_103 = 103
#define ENUM_TRAD_SES_EVENT_ENDOF_DAY_SERVICE_104 = 104
#define ENUM_TRAD_SES_EVENT_SERVICE_RESUMED_105 = 105
#define ENUM_TRAD_SES_EVENT_TRAD_SES_EVENT_MINIMUM_VALUE_105 = 105
#define ENUM_TRAD_SES_EVENT_TRAD_SES_EVENT_MINIMUM_VALUE_100 = 100

/*
 * Trad Ses Mode Values
 */ 
#define ENUM_TRAD_SES_MODE_TESTING_1 = 1
#define ENUM_TRAD_SES_MODE_SIMULATED_2 = 2
#define ENUM_TRAD_SES_MODE_PRODUCTION_3 = 3
#define ENUM_TRAD_SES_MODE_ACCEPTANCE_4 = 4
#define ENUM_TRAD_SES_MODE_TRAD_SES_MODE_MINIMUM_VALUE_4 = 4
#define ENUM_TRAD_SES_MODE_TRAD_SES_MODE_MINIMUM_VALUE_1 = 1

/*
 * Trade Manager Status Values
 */ 
#define ENUM_TRADE_MANAGER_STATUS_UNAVAILABLE_0 = 0
#define ENUM_TRADE_MANAGER_STATUS_AVAILABLE_1 = 1
#define ENUM_TRADE_MANAGER_STATUS_TRADE_MANAGER_STATUS_MINIMUM_VALUE_1 = 1
#define ENUM_TRADE_MANAGER_STATUS_TRADE_MANAGER_STATUS_MINIMUM_VALUE_0 = 0

/*
 * Trade Report Type Values
 */ 
#define ENUM_TRADE_REPORT_TYPE_SUBMIT_0 = 0
#define ENUM_TRADE_REPORT_TYPE_ALLEGED_1 = 1
#define ENUM_TRADE_REPORT_TYPE_NO_WAS_REPLACED_5 = 5
#define ENUM_TRADE_REPORT_TYPE_TRADE_BREAK_7 = 7
#define ENUM_TRADE_REPORT_TYPE_TRADE_REPORT_TYPE_MINIMUM_VALUE_7 = 7
#define ENUM_TRADE_REPORT_TYPE_TRADE_REPORT_TYPE_MINIMUM_VALUE_0 = 0

/*
 * Trading Capacity Values
 */ 
#define ENUM_TRADING_CAPACITY_CUSTOMER_1 = 1
#define ENUM_TRADING_CAPACITY_PRINCIPAL_5 = 5
#define ENUM_TRADING_CAPACITY_MARKET_MAKER_6 = 6
#define ENUM_TRADING_CAPACITY_TRADING_CAPACITY_MINIMUM_VALUE_6 = 6
#define ENUM_TRADING_CAPACITY_TRADING_CAPACITY_MINIMUM_VALUE_1 = 1

/*
 * Trading Session Sub Id Values
 */ 
#define ENUM_TRADING_SESSION_SUB_ID_CLOSINGAUCTION_4 = 4
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MINIMUM_VALUE_7 = 7
#define ENUM_TRADING_SESSION_SUB_ID_TRADING_SESSION_SUB_ID_MINIMUM_VALUE_1 = 1

/*
 * Transfer Reason Values
 */ 
#define ENUM_TRANSFER_REASON_OWNER_1 = 1
#define ENUM_TRANSFER_REASON_CLEARER_2 = 2
#define ENUM_TRANSFER_REASON_TRANSFER_REASON_MINIMUM_VALUE_5 = 5
#define ENUM_TRANSFER_REASON_TRANSFER_REASON_MINIMUM_VALUE_1 = 1

/*
 * Triggered Values
 */ 
#define ENUM_TRIGGERED_NOTTRIGGERED_0 = 0
#define ENUM_TRIGGERED_TRIGGERED_STOP_1 = 1
#define ENUM_TRIGGERED_TRIGGERED_OCO_2 = 2
#define ENUM_TRIGGERED_TRIGGERED_MINIMUM_VALUE_2 = 2
#define ENUM_TRIGGERED_TRIGGERED_MINIMUM_VALUE_0 = 0

/*
 * User Status Values
 */ 
#define ENUM_USER_STATUS_USERSTOPPED_10 = 10
#define ENUM_USER_STATUS_USERRELEASED_11 = 11
#define ENUM_USER_STATUS_USER_STATUS_MINIMUM_VALUE_11 = 11
#define ENUM_USER_STATUS_USER_STATUS_MINIMUM_VALUE_10 = 10


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Add Complex Instrument Request
 */ 
typedef struct {
    MessageHeaderInT MessageHeaderIn;
    RequestHeaderT RequestHeader;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    int32_t SecuritySubType;
    uint8_t ProductComplex;
    uint8_t NoLegs;
    char ComplianceText[20];
    char Pad2[2];
} AddComplexInstrumentRequestT;

/*
 * Structure: Add Complex Instrument Response
 */ 
typedef struct {
    MessageHeaderOutT MessageHeaderOut;
    NrResponseHeaderMeT NrResponseHeaderMe;
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
 * Structure: Broadcast Error Notification
 */ 
typedef struct {
    char MessageHeaderOut[0];
    NotifHeaderT NotifHeader;
    uint32_t ApplIdStatus;
    uint32_t RefApplSubId;
    uint16_t VarTextLen;
    uint8_t RefApplId;
    uint8_t SessionStatus;
    char Pad4[4];
} BroadcastErrorNotificationT;

/*
 * Structure: Cross Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    int64_t SecurityId;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    char ComplianceText[20];
    char Pad4[4];
} CrossRequestT;

/*
 * Structure: Cross Request Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
    uint64_t ExecId;
} CrossRequestResponseT;

/*
 * Structure: Delete All Order Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    RbcHeaderMeT RbcHeaderMe;
    uint64_t MassActionReportId;
    int64_t SecurityId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint32_t TargetPartyIdExecutingTrader;
    uint32_t PartyIdEnteringTrader;
    uint16_t NoNotAffectedOrders;
    uint8_t PartyIdEnteringFirm;
    uint8_t MassActionReason;
    uint8_t ExecInst;
    char Pad3[3];
} DeleteAllOrderBroadcastT;

/*
 * Structure: Delete All Order Nr Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
    uint64_t MassActionReportId;
} DeleteAllOrderNrResponseT;

/*
 * Structure: Delete All Order Quote Event Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeaderMe[0];
    uint64_t MassActionReportId;
    int64_t SecurityId;
    int32_t MarketSegmentId;
    uint8_t MassActionReason;
    uint8_t ExecInst;
    char Pad2[2];
} DeleteAllOrderQuoteEventBroadcastT;

/*
 * Structure: Delete All Order Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    int64_t SecurityId;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint32_t TargetPartyIdExecutingTrader;
    char Pad4[4];
} DeleteAllOrderRequestT;

/*
 * Structure: Delete All Order Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    ResponseHeaderMeT ResponseHeaderMe;
    uint64_t MassActionReportId;
    uint16_t NoNotAffectedOrders;
    char Pad6[6];
} DeleteAllOrderResponseT;

/*
 * Structure: Delete All Quote Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeaderMe[0];
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
 * Structure: Delete All Quote Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
} DeleteAllQuoteRequestT;

/*
 * Structure: Delete All Quote Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
    uint64_t MassActionReportId;
    uint16_t NoNotAffectedSecurities;
    char Pad6[6];
} DeleteAllQuoteResponseT;

/*
 * Structure: Delete Order Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeaderMe[0];
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
 * Structure: Delete Order Complex Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
} DeleteOrderComplexRequestT;

/*
 * Structure: Delete Order Nr Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
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
 * Structure: Delete Order Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeaderMe[0];
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
 * Structure: Delete Order Single Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
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
 * Structure: Enrichment Rules Grp
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
} EnrichmentRulesGrpT;

/*
 * Structure: Fills Grp
 */ 
typedef struct {
    uint64_t FillPx;
    int32_t FillQty;
    uint32_t FillMatchId;
    int32_t FillExecId;
    uint8_t FillLiquidityInd;
    char Pad3[3];
} FillsGrpT;

/*
 * Structure: Forced Logout Notification
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NotifHeader[0];
    uint16_t VarTextLen;
    char Pad6[6];
} ForcedLogoutNotificationT;

/*
 * Structure: Gateway Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint32_t PartyIdSessionId;
    char DefaultCstmApplVerId[30];
    char Password[32];
    char Pad6[6];
} GatewayRequestT;

/*
 * Structure: Gateway Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    ResponseHeaderT ResponseHeader;
    uint32_t GatewayId;
    uint32_t GatewaySubId;
    uint32_t SecondaryGatewayId;
    uint32_t SecondaryGatewaySubId;
    uint8_t SessionMode;
    uint8_t TradSesMode;
    char Pad6[6];
} GatewayResponseT;

/*
 * Structure: Heartbeat
 */ 
typedef struct {
    char MessageHeaderIn[0];
} HeartbeatT;

/*
 * Structure: Heartbeat Notification
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NotifHeader[0];
} HeartbeatNotificationT;

/*
 * Structure: Inquire Enrichment Rule Id List Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    char LastEntityProcessed[16];
} InquireEnrichmentRuleIdListRequestT;

/*
 * Structure: Inquire Enrichment Rule Id List Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
    char LastEntityProcessed[16];
    uint16_t NoEnrichmentRules;
    char Pad6[6];
} InquireEnrichmentRuleIdListResponseT;

/*
 * Structure: Inquire Mm Parameter Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
} InquireMmParameterRequestT;

/*
 * Structure: Inquire Mm Parameter Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
    uint64_t MmParameterReportId;
    int32_t MarketSegmentId;
    uint8_t NoMmParameters;
    char Pad3[3];
} InquireMmParameterResponseT;

/*
 * Structure: Inquire Session List Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
} InquireSessionListRequestT;

/*
 * Structure: Inquire Session List Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
    uint16_t NoSessions;
    char Pad6[6];
} InquireSessionListResponseT;

/*
 * Structure: Inquire User Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    char LastEntityProcessed[16];
} InquireUserRequestT;

/*
 * Structure: Inquire User Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
    char LastEntityProcessed[16];
    uint16_t NoPartyDetails;
    char Pad6[6];
} InquireUserResponseT;

/*
 * Structure: Instrmnt Leg Exec Grp
 */ 
typedef struct {
    int64_t LegSecurityId;
    uint64_t LegLastPx;
    int32_t LegLastQty;
    int32_t LegExecId;
    uint8_t LegSide;
    uint8_t NoFillsIndex;
    char Pad6[6];
} InstrmntLegExecGrpT;

/*
 * Structure: Instrmt Leg Grp
 */ 
typedef struct {
    int64_t LegSecurityId;
    uint64_t LegPrice;
    int32_t LegSymbol;
    uint32_t LegRatioQty;
    uint8_t LegSide;
    uint8_t LegSecurityType;
    char Pad6[6];
} InstrmtLegGrpT;

/*
 * Structure: Leg Ord Grp
 */ 
typedef struct {
    char LegAccount[2];
    char LegPositionEffect;
    char Pad5[5];
} LegOrdGrpT;

/*
 * Structure: Legal Notification Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    RbcHeaderT RbcHeader;
    uint64_t TransactTime;
    uint16_t VarTextLen;
    uint8_t UserStatus;
    char Pad5[5];
} LegalNotificationBroadcastT;

/*
 * Structure: Logon Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
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
 * Structure: Logon Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
    int64_t ThrottleTimeInterval;
    uint32_t ThrottleNoMsgs;
    uint32_t ThrottleDisconnectLimit;
    uint32_t HeartBtInt;
    uint32_t SessionInstanceId;
    uint8_t TradSesMode;
    char DefaultCstmApplVerId[30];
    char Pad1[1];
} LogonResponseT;

/*
 * Structure: Logout Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
} LogoutRequestT;

/*
 * Structure: Logout Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
} LogoutResponseT;

/*
 * Structure: Mass Quote Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint64_t QuoteId;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint16_t EnrichmentRuleId;
    uint8_t PriceValidityCheckType;
    uint8_t QuoteSizeType;
    uint8_t NoQuoteEntries;
    char Pad7[7];
} MassQuoteRequestT;

/*
 * Structure: Mass Quote Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
    uint64_t QuoteId;
    uint64_t QuoteResponseId;
    int32_t MarketSegmentId;
    uint8_t NoQuoteEntries;
    char Pad3[3];
} MassQuoteResponseT;

/*
 * Structure: Message Header In
 */ 
typedef struct {
    uint32_t BodyLen;
    uint16_t TemplateId;
    char NetworkMsgId[8];
    char Pad2[2];
} MessageHeaderInT;

/*
 * Structure: Message Header Out
 */ 
typedef struct {
    uint32_t BodyLen;
    uint16_t TemplateId;
    char Pad2[2];
} MessageHeaderOutT;

/*
 * Structure: Mm Parameter Definition Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
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
 * Structure: Mm Parameter Definition Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
    uint64_t ExecId;
} MmParameterDefinitionResponseT;

/*
 * Structure: Mm Parameter Grp
 */ 
typedef struct {
    int64_t ExposureDuration;
    int32_t CumQty;
    int32_t PctCount;
    int32_t Delta;
    int32_t Vega;
    uint8_t ProductComplex;
    char Pad7[7];
} MmParameterGrpT;

/*
 * Structure: Modify Order Complex Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    int64_t SecurityId;
    uint64_t Price;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    uint32_t ExpireDate;
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
    char PartyIdPositionAccount[20];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    uint8_t NoLegs;
    char Pad2[2];
} ModifyOrderComplexRequestT;

/*
 * Structure: Modify Order Nr Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
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
    uint8_t ProductComplex;
    char Pad7[7];
} ModifyOrderNrResponseT;

/*
 * Structure: Modify Order Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeaderMe[0];
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
    uint8_t ProductComplex;
    char Pad7[7];
} ModifyOrderResponseT;

/*
 * Structure: Modify Order Single Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
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
    char PartyIdPositionAccount[20];
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
 * Structure: Modify Order Single Short Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    uint64_t Price;
    uint64_t ComplianceId;
    int32_t OrderQty;
    uint32_t SimpleSecurityId;
    uint16_t EnrichmentRuleId;
    uint8_t Side;
    uint8_t PriceValidityCheckType;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingCapacity;
    char Pad1[1];
} ModifyOrderSingleShortRequestT;

/*
 * Structure: New Order Complex Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint64_t ClOrdId;
    int64_t SecurityId;
    uint64_t Price;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    uint32_t ExpireDate;
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
    char PartyIdPositionAccount[20];
    char FreeText1[12];
    char FreeText2[12];
    char FreeText3[12];
    uint8_t NoLegs;
    char Pad7[7];
} NewOrderComplexRequestT;

/*
 * Structure: New Order Nr Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
    uint64_t OrderId;
    uint64_t ClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t ProductComplex;
    char Pad3[3];
} NewOrderNrResponseT;

/*
 * Structure: New Order Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeaderMe[0];
    uint64_t OrderId;
    uint64_t ClOrdId;
    int64_t SecurityId;
    uint64_t ExecId;
    uint64_t TrdRegTsEntryTime;
    uint64_t TrdRegTsTimePriority;
    char OrdStatus;
    char ExecType;
    uint16_t ExecRestatementReason;
    uint8_t ProductComplex;
    char Pad3[3];
} NewOrderResponseT;

/*
 * Structure: New Order Single Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint64_t Price;
    uint64_t StopPx;
    uint64_t ClOrdId;
    uint64_t ComplianceId;
    int32_t OrderQty;
    uint32_t ExpireDate;
    int32_t MarketSegmentId;
    uint32_t SimpleSecurityId;
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
    char PartyIdPositionAccount[20];
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
 * Structure: New Order Single Short Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint64_t Price;
    uint64_t ClOrdId;
    uint64_t ComplianceId;
    int32_t OrderQty;
    uint32_t SimpleSecurityId;
    uint16_t EnrichmentRuleId;
    uint8_t Side;
    uint8_t PriceValidityCheckType;
    uint8_t TimeInForce;
    uint8_t ExecInst;
    uint8_t TradingCapacity;
    char Pad1[1];
} NewOrderSingleShortRequestT;

/*
 * Structure: News Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeader[0];
    uint64_t OrigTime;
    uint16_t VarTextLen;
    char Headline[256];
    char Pad6[6];
} NewsBroadcastT;

/*
 * Structure: Not Affected Orders Grp
 */ 
typedef struct {
    uint64_t NotAffectedOrderId;
    uint64_t NotAffOrigClOrdId;
} NotAffectedOrdersGrpT;

/*
 * Structure: Not Affected Securities Grp
 */ 
typedef struct {
    uint64_t NotAffectedSecurityId;
} NotAffectedSecuritiesGrpT;

/*
 * Structure: Notif Header
 */ 
typedef struct {
    uint64_t SendingTime;
} NotifHeaderT;

/*
 * Structure: Nr Response Header Me
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
} NrResponseHeaderMeT;

/*
 * Structure: Nrbc Header
 */ 
typedef struct {
    uint64_t SendingTime;
    uint32_t ApplSubId;
    uint8_t ApplId;
    uint8_t LastFragment;
    char Pad2[2];
} NrbcHeaderT;

/*
 * Structure: Party Action Report
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeader[0];
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
 * Structure: Party Details Grp
 */ 
typedef struct {
    uint32_t PartyDetailIdExecutingTrader;
    char PartyDetailExecutingTrader[6];
    uint8_t PartyDetailRoleQualifier;
    uint8_t PartyDetailStatus;
    char PartyDetailDeskId[3];
    char Pad1[1];
} PartyDetailsGrpT;

/*
 * Structure: Party Entitlements Update Report
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeader[0];
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
 * Structure: Quote Activation Notification
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeaderMe[0];
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
 * Structure: Quote Activation Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    uint32_t TargetPartyIdSessionId;
    uint8_t MassActionType;
    uint8_t ProductComplex;
    char Pad6[6];
} QuoteActivationRequestT;

/*
 * Structure: Quote Activation Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
    uint64_t MassActionReportId;
    uint16_t NoNotAffectedSecurities;
    char Pad6[6];
} QuoteActivationResponseT;

/*
 * Structure: Quote Entry Ack Grp
 */ 
typedef struct {
    int64_t SecurityId;
    int32_t BidCxlSize;
    int32_t OfferCxlSize;
    uint32_t QuoteEntryRejectReason;
    uint8_t QuoteEntryStatus;
    char Pad3[3];
} QuoteEntryAckGrpT;

/*
 * Structure: Quote Entry Grp
 */ 
typedef struct {
    int64_t SecurityId;
    uint64_t BidPx;
    uint64_t OfferPx;
    int32_t BidSize;
    int32_t OfferSize;
} QuoteEntryGrpT;

/*
 * Structure: Quote Event Grp
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
} QuoteEventGrpT;

/*
 * Structure: Quote Leg Exec Grp
 */ 
typedef struct {
    int64_t LegSecurityId;
    uint64_t LegLastPx;
    int32_t LegLastQty;
    int32_t LegExecId;
    uint8_t LegSide;
    uint8_t NoQuoteEventsIndex;
    char Pad6[6];
} QuoteLegExecGrpT;

/*
 * Structure: Rbc Header
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
} RbcHeaderT;

/*
 * Structure: Rbc Header Me
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
} RbcHeaderMeT;

/*
 * Structure: Reject
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
    uint32_t SessionRejectReason;
    uint16_t VarTextLen;
    uint8_t SessionStatus;
    char Pad1[1];
} RejectT;

/*
 * Structure: Request Header
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    uint32_t SenderSubId;
} RequestHeaderT;

/*
 * Structure: Response Header
 */ 
typedef struct {
    uint64_t RequestTime;
    uint64_t SendingTime;
    uint32_t MsgSeqNum;
    char Pad4[4];
} ResponseHeaderT;

/*
 * Structure: Response Header Me
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
} ResponseHeaderMeT;

/*
 * Structure: Retransmit Me Message Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint32_t SubscriptionScope;
    uint16_t PartitionId;
    uint8_t RefApplId;
    char ApplBegMsgId[16];
    char ApplEndMsgId[16];
    char Pad1[1];
} RetransmitMeMessageRequestT;

/*
 * Structure: Retransmit Me Message Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
    uint16_t ApplTotalMessageCount;
    char ApplEndMsgId[16];
    char RefApplLastMsgId[16];
    char Pad6[6];
} RetransmitMeMessageResponseT;

/*
 * Structure: Retransmit Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint64_t ApplBegSeqNum;
    uint64_t ApplEndSeqNum;
    uint32_t SubscriptionScope;
    uint16_t PartitionId;
    uint8_t RefApplId;
    char Pad1[1];
} RetransmitRequestT;

/*
 * Structure: Retransmit Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
    uint64_t ApplEndSeqNum;
    uint64_t RefApplLastSeqNum;
    uint16_t ApplTotalMessageCount;
    char Pad6[6];
} RetransmitResponseT;

/*
 * Structure: Rfq Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    int64_t SecurityId;
    uint64_t ComplianceId;
    int32_t MarketSegmentId;
    int32_t OrderQty;
    uint8_t Side;
    char ComplianceText[20];
    char Pad3[3];
} RfqRequestT;

/*
 * Structure: Rfq Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NrResponseHeaderMe[0];
    uint64_t ExecId;
} RfqResponseT;

/*
 * Structure: Risk Notification Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeader[0];
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
 * Structure: Service Availability Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    NrbcHeaderT NrbcHeader;
    uint32_t MatchingEngineTradeDate;
    uint32_t TradeManagerTradeDate;
    uint32_t ApplSeqTradeDate;
    uint16_t PartitionId;
    uint8_t MatchingEngineStatus;
    uint8_t TradeManagerStatus;
    uint8_t ApplSeqStatus;
    char Pad7[7];
} ServiceAvailabilityBroadcastT;

/*
 * Structure: Sessions Grp
 */ 
typedef struct {
    uint32_t PartyIdSessionId;
    uint8_t SessionMode;
    uint8_t SessionSubMode;
    char Pad2[2];
} SessionsGrpT;

/*
 * Structure: Subscribe Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint32_t SubscriptionScope;
    uint8_t RefApplId;
    char Pad3[3];
} SubscribeRequestT;

/*
 * Structure: Subscribe Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
    uint32_t ApplSubId;
    char Pad4[4];
} SubscribeResponseT;

/*
 * Structure: Throttle Update Notification
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char NotifHeader[0];
    int64_t ThrottleTimeInterval;
    uint32_t ThrottleNoMsgs;
    uint32_t ThrottleDisconnectLimit;
} ThrottleUpdateNotificationT;

/*
 * Structure: Tm Trading Session Status Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeader[0];
    uint8_t TradSesEvent;
    char Pad7[7];
} TmTradingSessionStatusBroadcastT;

/*
 * Structure: Trade Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeader[0];
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
    uint8_t AggressorIndicator;
    uint8_t TradingCapacity;
    char Account[2];
    char RootPartyIdPositionAccount[20];
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
    char Pad7[7];
} TradeBroadcastT;

/*
 * Structure: Trading Session Status Broadcast
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char RbcHeaderMe[0];
    int32_t MarketSegmentId;
    uint32_t TradeDate;
    uint8_t TradSesEvent;
    char RefApplLastMsgId[16];
    char Pad7[7];
} TradingSessionStatusBroadcastT;

/*
 * Structure: Unsubscribe Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint32_t RefApplSubId;
    char Pad4[4];
} UnsubscribeRequestT;

/*
 * Structure: Unsubscribe Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
} UnsubscribeResponseT;

/*
 * Structure: User Login Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint32_t Username;
    char Password[32];
    char Pad4[4];
} UserLoginRequestT;

/*
 * Structure: User Login Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
} UserLoginResponseT;

/*
 * Structure: User Logout Request
 */ 
typedef struct {
    char MessageHeaderIn[0];
    char RequestHeader[0];
    uint32_t Username;
    char Pad4[4];
} UserLogoutRequestT;

/*
 * Structure: User Logout Response
 */ 
typedef struct {
    char MessageHeaderOut[0];
    char ResponseHeader[0];
} UserLogoutResponseT;

