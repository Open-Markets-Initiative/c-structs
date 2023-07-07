/*******************************************************************************
 * C Structs For Euronext Optiq Sbe OrderEntryGateway 4.2 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Account Type Values
 */ 
#define ENUM_ACCOUNT_TYPE_CLIENT 1
#define ENUM_ACCOUNT_TYPE_HOUSE 2
#define ENUM_ACCOUNT_TYPE_RO 4
#define ENUM_ACCOUNT_TYPE_LIQUIDITY_PROVIDER 6
#define ENUM_ACCOUNT_TYPE_RELATED_PARTY 7
#define ENUM_ACCOUNT_TYPE_STRUCTURED_PRODUCT_MARKET_MAKER 8
#define ENUM_ACCOUNT_TYPE_OMEGA_CLIENT 14
#define ENUM_ACCOUNT_TYPE_CERES_CLIENT 15
#define ENUM_ACCOUNT_TYPE_NO_VALUE 255

/*
 * Account Type Cross Values
 */ 
#define ENUM_ACCOUNT_TYPE_CROSS_CLIENT 1
#define ENUM_ACCOUNT_TYPE_CROSS_HOUSE 2
#define ENUM_ACCOUNT_TYPE_CROSS_RO 4
#define ENUM_ACCOUNT_TYPE_CROSS_LIQUIDITY_PROVIDER 6
#define ENUM_ACCOUNT_TYPE_CROSS_RELATED_PARTY 7
#define ENUM_ACCOUNT_TYPE_CROSS_STRUCTURED_PRODUCT_MARKET_MAKER 8
#define ENUM_ACCOUNT_TYPE_CROSS_OMEGA_CLIENT 14
#define ENUM_ACCOUNT_TYPE_CROSS_CERES_CLIENT 15
#define ENUM_ACCOUNT_TYPE_CROSS_NO_VALUE 255

/*
 * Ack Phase Values
 */ 
#define ENUM_ACK_PHASE_CONTINUOUS_TRADING_PHASE 1
#define ENUM_ACK_PHASE_CALL_PHASE 2
#define ENUM_ACK_PHASE_HALT_PHASE 3
#define ENUM_ACK_PHASE_CLOSED_PHASE 4
#define ENUM_ACK_PHASE_TRADING_AT_LAST_PHASE 5
#define ENUM_ACK_PHASE_RESERVED 6
#define ENUM_ACK_PHASE_SUSPENDED 7
#define ENUM_ACK_PHASE_RANDOM_UNCROSSING_PHASE 8
#define ENUM_ACK_PHASE_NO_VALUE 255

/*
 * Ack Type Values
 */ 
#define ENUM_ACK_TYPE_NEW_ORDER_ACK 0
#define ENUM_ACK_TYPE_REPLACE_ACK 1
#define ENUM_ACK_TYPE_ORDER_CREATION_BY_MARKET_OPERATIONS 2
#define ENUM_ACK_TYPE_STOP_TRIGGERED_ACK 3
#define ENUM_ACK_TYPE_COLLAR_CONFIRMATION_ACK 4
#define ENUM_ACK_TYPE_REFILLED_ICEBERG_ACK 5
#define ENUM_ACK_TYPE_MTL_SECOND_ACK 6
#define ENUM_ACK_TYPE_KNOCK_IN_BY_ISSUER_KIBI_ACK 7
#define ENUM_ACK_TYPE_KNOCK_OUT_BY_ISSUER_KOBI_ACK 8
#define ENUM_ACK_TYPE_PAYMENT_AFTER_KNOCK_OUT_PAKO_ACK 9
#define ENUM_ACK_TYPE_PRICE_INPUT_ACK 10
#define ENUM_ACK_TYPE_RFQ_ACK 11
#define ENUM_ACK_TYPE_BID_ONLY_ACK 12
#define ENUM_ACK_TYPE_OFFER_ONLY_ACK 13
#define ENUM_ACK_TYPE_ICEBERG_TRANSFORMEDTO_LIMIT 14
#define ENUM_ACK_TYPE_OWNERSHIP_REQUEST_ACK 15
#define ENUM_ACK_TYPE_VFUVFC_TRIGGERED_ACK 16
#define ENUM_ACK_TYPE_OPEN_ORDER_REQUEST_ACK 17
#define ENUM_ACK_TYPE_RFIE_ACK 21

/*
 * Action Type Values
 */ 
#define ENUM_ACTION_TYPE_DECLARATION_CANCELLATION_REQUEST 1
#define ENUM_ACTION_TYPE_DECLARATION_REFUSAL 2
#define ENUM_ACTION_TYPE_TRADE_CANCELLATION_REQUEST 3

/*
 * Afq Reason Values
 */ 
#define ENUM_AFQ_REASON_QUOTECANCELLEDBYTHE_LIQUIDITY_PROVIDER 1
#define ENUM_AFQ_REASON_QUOTECANCELLEDBY_MARKET_CONTROL 2
#define ENUM_AFQ_REASON_NOQUOTE_MMINUTESBEFOREANUNCROSSING 3
#define ENUM_AFQ_REASON_NOQUOTE_SSECONDSBEFOREANUNCROSSING 4
#define ENUM_AFQ_REASON_QUOTECOMPLETELYMATCHED 5

/*
 * Breach Action Values
 */ 
#define ENUM_BREACH_ACTION_IGNORE 0
#define ENUM_BREACH_ACTION_PULL 1
#define ENUM_BREACH_ACTION_NO_VALUE 255

/*
 * Buy Revision Flag Values
 */ 
#define ENUM_BUY_REVISION_FLAG_NEW 0
#define ENUM_BUY_REVISION_FLAG_REPLACEMENT 1
#define ENUM_BUY_REVISION_FLAG_CANCELLATION 2
#define ENUM_BUY_REVISION_FLAG_NO_VALUE 255

/*
 * Ccpid Values
 */ 
#define ENUM_CCPID_LCHSA 1
#define ENUM_CCPID_EURO_CCP 6
#define ENUM_CCPID_NO_VALUE 255

/*
 * Clearing Instruction Values
 */ 
#define ENUM_CLEARING_INSTRUCTION_PROCESSNORMALLYFORMERLY_SYSTEMATICPOSTING 0
#define ENUM_CLEARING_INSTRUCTION_MANUALMODE 8
#define ENUM_CLEARING_INSTRUCTION_AUTOMATICPOSTINGMODE 9
#define ENUM_CLEARING_INSTRUCTION_AUTOMATICGIVEUPMODE 10
#define ENUM_CLEARING_INSTRUCTION_AUTOMATICANDACCOUNTAUTHORIZATION 4008
#define ENUM_CLEARING_INSTRUCTION_MANUALANDACCOUNTAUTHORIZATION 4009
#define ENUM_CLEARING_INSTRUCTION_GIVEUPTOSINGLEFIRM 4010
#define ENUM_CLEARING_INSTRUCTION_NO_VALUE 65535

/*
 * Collar Rej Type Values
 */ 
#define ENUM_COLLAR_REJ_TYPE_LOWDYNAMICCOLLAR 1
#define ENUM_COLLAR_REJ_TYPE_HIGHDYNAMICCOLLAR 2
#define ENUM_COLLAR_REJ_TYPE_NO_VALUE 255

/*
 * Declaration Status Values
 */ 
#define ENUM_DECLARATION_STATUS_NEW_WAITINGFOR_COUNTERPARTY_CONFIRMATION 1
#define ENUM_DECLARATION_STATUS_CONFIRMEDBY_COUNTERPARTY 2
#define ENUM_DECLARATION_STATUS_REFUSEDBY_COUNTERPARTY 3
#define ENUM_DECLARATION_STATUS_PENDING_CANCELLATION 4
#define ENUM_DECLARATION_STATUS_CANCELLED 5
#define ENUM_DECLARATION_STATUS_TIME_OUT 6
#define ENUM_DECLARATION_STATUS_FILLED 7
#define ENUM_DECLARATION_STATUS_RESTATED 8
#define ENUM_DECLARATION_STATUS_EXPIRATIONOFAPENDINGDECLARATION 9
#define ENUM_DECLARATION_STATUS_ELIMINATIONOFAPENDINGDECLARATION 10
#define ENUM_DECLARATION_STATUS_ELIMINATIONOFAPREMATCHEDDECLARATIONFOLLOWINGA_CE 11
#define ENUM_DECLARATION_STATUS_ELIMINATIONOFAPREMATCHEDDECLARATIONBY_MOC 12
#define ENUM_DECLARATION_STATUS_PRE_MATCHED 13

/*
 * Emm Values
 */ 
#define ENUM_EMM_CASHAND_DERIVATIVE_CENTRAL_ORDER_BOOK 1
#define ENUM_EMM_NAV_TRADING_FACILITY 2
#define ENUM_EMM_DERIVATIVES_WHOLESALES 4
#define ENUM_EMM_CASH_ON_EXCHANGE_OFFBOOK 5
#define ENUM_EMM_EURONEXTOFFEXCHANGETRADEREPORTS 6
#define ENUM_EMM_DERIVATIVES_ON_EXCHANGE_OFFBOOK 7
#define ENUM_EMM_ETFMTFNAV_CENTRAL_ORDER_BOOK 8
#define ENUM_EMM_LISTEDNOTTRADED 9
#define ENUM_EMM_DELTA_NEUTRAL_CONTINGENCY_LEG 15
#define ENUM_EMM_NOT_APPLICABLE 99
#define ENUM_EMM_NO_VALUE 255

/*
 * Execution Phase Values
 */ 
#define ENUM_EXECUTION_PHASE_CONTINUOUS_TRADING_PHASE 1
#define ENUM_EXECUTION_PHASE_UNCROSSING_PHASE 2
#define ENUM_EXECUTION_PHASE_TRADING_AT_LAST_PHASE 3
#define ENUM_EXECUTION_PHASE_CONTINUOUS_UNCROSSING_PHASE 4
#define ENUM_EXECUTION_PHASE_IPO 5

/*
 * Guarantee Flag Values
 */ 
#define ENUM_GUARANTEE_FLAG_CLEAREDBUTNOT_GUARANTEED 1
#define ENUM_GUARANTEE_FLAG_CLEAREDAND_GUARANTEED 2
#define ENUM_GUARANTEE_FLAG_NO_VALUE 255

/*
 * Input Price Type Values
 */ 
#define ENUM_INPUT_PRICE_TYPE_VALUATION_PRICE 1
#define ENUM_INPUT_PRICE_TYPE_ALTERNATIVE_INDICATIVE_PRICE_AIP 2

/*
 * Kill Reason Values
 */ 
#define ENUM_KILL_REASON_ORDER_CANCELLEDBY_CLIENT 1
#define ENUM_KILL_REASON_ORDER_EXPIRED 2
#define ENUM_KILL_REASON_ORDER_CANCELLEDBY_MARKET_OPERATIONS 3
#define ENUM_KILL_REASON_ORDER_ELIMINATEDDUETO_CORPORATE_EVENT 4
#define ENUM_KILL_REASON_DONEFORDAY 5
#define ENUM_KILL_REASON_CANCELLED_MT_LINANEMPTY_ORDER_BOOK 6
#define ENUM_KILL_REASON_CANCELLEDBY_STP 7
#define ENUM_KILL_REASON_REMAININGQUANTITYKILLED_IOC 8
#define ENUM_KILL_REASON_BEGINNINGOF_PAKO_PERIOD 9
#define ENUM_KILL_REASON_ORDER_CANCELLEDDUETO_CANCEL_ON_DISCONNECT_MECHANISM 11
#define ENUM_KILL_REASON_RF_QEXPIRED 12
#define ENUM_KILL_REASON_RF_QPARTIALLYORFULLYMATCHEDWITHOTHERCOUNTERPARTS 13
#define ENUM_KILL_REASON_RF_QCANCELLEDBYTHEISSUER 14
#define ENUM_KILL_REASON_RFQ_NOTMATCHEDDUETOISSUERORDERSFEATURES 15
#define ENUM_KILL_REASON_QUOTECANCELLEDDUETO_KNOCK_OUT 16
#define ENUM_KILL_REASON_ORDERCANCELLEDDUETOA_KILLCOMMAND 17
#define ENUM_KILL_REASON_LP_ORDERCANCELLEDDUETO_RF_QEXPIRATION 19
#define ENUM_KILL_REASON_LP_ORDERCANCELLEDDUETO_RF_QCANCELLATION 20
#define ENUM_KILL_REASON_RFQ_REMAININGQUANTITYKILLED 21
#define ENUM_KILL_REASON_LP_ORDERCANCELLEDDUETO_RF_QCONFIRMATION 22
#define ENUM_KILL_REASON_ORDERCANCELLEDDUETO_MARKET_MAKER_PROTECTION 23
#define ENUM_KILL_REASON_ORDERCANCELLEDBYCLEARINGRISKMANAGER 24
#define ENUM_KILL_REASON_ORDERCANCELLEDBYMEMBERRISKMANAGER 25
#define ENUM_KILL_REASON_ORDERCANCELLEDDUETO_TRADE_PRICE_VALIDATION 26
#define ENUM_KILL_REASON_CONDITIONAL_ORDERCANCELLEDDUETO_POTENTIAL_MATCHING 30
#define ENUM_KILL_REASON_ORDER_CANCELLEDDUETOAPOTENTIALTRADEOUTSIDE_FS_PLIMITS 36

/*
 * Leg Put Or Call Values
 */ 
#define ENUM_LEG_PUT_OR_CALL_CALL 1
#define ENUM_LEG_PUT_OR_CALL_PUT 0
#define ENUM_LEG_PUT_OR_CALL_NO_VALUE 255

/*
 * Leg Security Type Values
 */ 
#define ENUM_LEG_SECURITY_TYPE_FUTURE 0
#define ENUM_LEG_SECURITY_TYPE_OPTION 1
#define ENUM_LEG_SECURITY_TYPE_CASH 2

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY 1
#define ENUM_LEG_SIDE_SELL 2
#define ENUM_LEG_SIDE_NO_VALUE 255

/*
 * Log Out Reason Code Values
 */ 
#define ENUM_LOG_OUT_REASON_CODE_REGULAR_LOGOUT 0
#define ENUM_LOG_OUT_REASON_CODE_END_OF_DAY 1
#define ENUM_LOG_OUT_REASON_CODE_TOOMANYUNKNOWNMESSAGES 2
#define ENUM_LOG_OUT_REASON_CODE_EXCESSIVE_NUMBEROF_MESSAGES 3
#define ENUM_LOG_OUT_REASON_CODE_EXCESSIVE_AMOUNTOF_DATAIN_BYTES 4
#define ENUM_LOG_OUT_REASON_CODE_EXCESSIVE_NUMBEROF_MESSAGES_AMOUNTOF_DATAIN_BYTES 5

/*
 * Logon Reject Code Values
 */ 
#define ENUM_LOGON_REJECT_CODE_UNKNOWN_CONNECTION_IDENTIFIER 1
#define ENUM_LOGON_REJECT_CODE_SYSTEMUNAVAILABLE 2
#define ENUM_LOGON_REJECT_CODE_INVALIDSEQUENCENUMBER 3
#define ENUM_LOGON_REJECT_CODE_CLIENTSESSIONALREADYLOGGEDON 4
#define ENUM_LOGON_REJECT_CODE_CLIENTSESSIONDISABLED 5
#define ENUM_LOGON_REJECT_CODE_INVALID_QUEUEING_INDICATOR 6
#define ENUM_LOGON_REJECT_CODE_INVALID_LOGONFORMAT 7

/*
 * Lp Action Code Values
 */ 
#define ENUM_LP_ACTION_CODE_KNOCK_IN_BY_ISSUER_KIBI 1
#define ENUM_LP_ACTION_CODE_KNOCK_OUT_BY_ISSUER_KOBI 2
#define ENUM_LP_ACTION_CODE_PAYMENT_AFTER_KNOCK_OUT_PAKO 3
#define ENUM_LP_ACTION_CODE_BID_ONLY 4
#define ENUM_LP_ACTION_CODE_OFFER_ONLY 5

/*
 * Lp Role Values
 */ 
#define ENUM_LP_ROLE_LIQUIDITY_PROVIDEROR_MARKET_MAKER 1
#define ENUM_LP_ROLE_RETAIL_LIQUIDITY_PROVIDER 3
#define ENUM_LP_ROLE_RFQ_LIQUIDITY_PROVIDER 12
#define ENUM_LP_ROLE_NO_VALUE 255

/*
 * Message Price Notation Values
 */ 
#define ENUM_MESSAGE_PRICE_NOTATION_PRICE 1
#define ENUM_MESSAGE_PRICE_NOTATION_SPREADINBASISPOINTS 2
#define ENUM_MESSAGE_PRICE_NOTATION_SPREAD 3
#define ENUM_MESSAGE_PRICE_NOTATION_NO_VALUE 255

/*
 * Operation Type Values
 */ 
#define ENUM_OPERATION_TYPE_DECLARATIONOFATRADEOUTSIDETHEBOOK 1
#define ENUM_OPERATION_TYPE_FUNDORDERQUANTITY 4
#define ENUM_OPERATION_TYPE_DECLARATIONOFA_VWA_PTRANSACTION 5
#define ENUM_OPERATION_TYPE_FUNDORDERCASHAMOUNT 6
#define ENUM_OPERATION_TYPE_DECLARATIONOFATRADEONA_SECONDARYLISTINGPLACE 7

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL 1
#define ENUM_OPTION_TYPE_PUT 2
#define ENUM_OPTION_TYPE_NO_VALUE 255

/*
 * Order Actor Type Values
 */ 
#define ENUM_ORDER_ACTOR_TYPE_INITIATOR 1
#define ENUM_ORDER_ACTOR_TYPE_REACTOR 2

/*
 * Order Category Values
 */ 
#define ENUM_ORDER_CATEGORY_LIT_ORDER 1
#define ENUM_ORDER_CATEGORY_LIS_ORDER 2
#define ENUM_ORDER_CATEGORY_QUOTE_REQUEST 3
#define ENUM_ORDER_CATEGORY_RFQLP_ANSWER 4
#define ENUM_ORDER_CATEGORY_NO_VALUE 255

/*
 * Order Side Values
 */ 
#define ENUM_ORDER_SIDE_BUY 1
#define ENUM_ORDER_SIDE_SELL 2
#define ENUM_ORDER_SIDE_CROSS 3
#define ENUM_ORDER_SIDE_NO_VALUE 255

/*
 * Order Type Values
 */ 
#define ENUM_ORDER_TYPE_MARKET 1
#define ENUM_ORDER_TYPE_LIMIT 2
#define ENUM_ORDER_TYPE_STOPMARKETOR_STOPMARKETONQUOTE 3
#define ENUM_ORDER_TYPE_STOPLIMITOR_STOPLIMITONQUOTE 4
#define ENUM_ORDER_TYPE_PRIMARY_PEG 5
#define ENUM_ORDER_TYPE_MARKETTOLIMIT 6
#define ENUM_ORDER_TYPE_MARKET_PEG 7
#define ENUM_ORDER_TYPE_MID_POINT_PEG 8
#define ENUM_ORDER_TYPE_AVERAGE_PRICE 9
#define ENUM_ORDER_TYPE_ICEBERG 10

/*
 * Pre Matching Type Values
 */ 
#define ENUM_PRE_MATCHING_TYPE_NOTPREMATCHED 1
#define ENUM_PRE_MATCHING_TYPE_PREMATCHEDFORTHENEXTFIXING 2
#define ENUM_PRE_MATCHING_TYPE_PREMATCHEDFORTHESECONDNEXTFIXING 3
#define ENUM_PRE_MATCHING_TYPE_PREMATCHEDFORTHETHIRDNEXTFIXING 4
#define ENUM_PRE_MATCHING_TYPE_PREMATCHEDFORTHEFOURTHNEXTFIXING 5
#define ENUM_PRE_MATCHING_TYPE_PREMATCHEDFORTHEFIFTHNEXTFIXING 6
#define ENUM_PRE_MATCHING_TYPE_NO_VALUE 255

/*
 * Protection Type Values
 */ 
#define ENUM_PROTECTION_TYPE_DELTA 1
#define ENUM_PROTECTION_TYPE_VOLUME 2
#define ENUM_PROTECTION_TYPE_NO_VALUE 255

/*
 * Recipient Type Values
 */ 
#define ENUM_RECIPIENT_TYPE_RFQ_ISSUER 1
#define ENUM_RECIPIENT_TYPE_RF_QRECIPIENT_LP 2

/*
 * Request Type Values
 */ 
#define ENUM_REQUEST_TYPE_SET 1
#define ENUM_REQUEST_TYPE_GET 2
#define ENUM_REQUEST_TYPE_ADJUST 3

/*
 * Response Type Values
 */ 
#define ENUM_RESPONSE_TYPE_ACCEPT 0
#define ENUM_RESPONSE_TYPE_REJECT 1

/*
 * Rfq Update Type Values
 */ 
#define ENUM_RFQ_UPDATE_TYPE_NEW 1
#define ENUM_RFQ_UPDATE_TYPE_CANCELLEDBYTHE_RF_QISSUER 2
#define ENUM_RFQ_UPDATE_TYPE_EXPIRED 3
#define ENUM_RFQ_UPDATE_TYPE_PARTIALLYOR_FULLY_MATCHED 4

/*
 * Sell Revision Flag Values
 */ 
#define ENUM_SELL_REVISION_FLAG_NEW 0
#define ENUM_SELL_REVISION_FLAG_REPLACEMENT 1
#define ENUM_SELL_REVISION_FLAG_CANCELLATION 2
#define ENUM_SELL_REVISION_FLAG_NO_VALUE 255

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 1
#define ENUM_SIDE_SELL 2
#define ENUM_SIDE_CROSS 3
#define ENUM_SIDE_NO_VALUE 255

/*
 * Stop Triggered Time In Force Values
 */ 
#define ENUM_STOP_TRIGGERED_TIME_IN_FORCE_DAY 0
#define ENUM_STOP_TRIGGERED_TIME_IN_FORCE_GOOD_TILL_CANCEL 1
#define ENUM_STOP_TRIGGERED_TIME_IN_FORCE_GOODTILL_DATE 6
#define ENUM_STOP_TRIGGERED_TIME_IN_FORCE_NO_VALUE 255

/*
 * Strategy Code Values
 */ 
#define ENUM_STRATEGY_CODE_JELLY_ROLL 'A'
#define ENUM_STRATEGY_CODE_BUTTERFLY 'B'
#define ENUM_STRATEGY_CODE_CALLOR_PUT_CABINET 'C'
#define ENUM_STRATEGY_CODE_SPREAD 'D'
#define ENUM_STRATEGY_CODE_CALENDAR_SPREAD 'E'
#define ENUM_STRATEGY_CODE_DIAGONAL_CALENDAR_SPREAD 'F'
#define ENUM_STRATEGY_CODE_GUTS 'G'
#define ENUM_STRATEGY_CODE_TWOBY_ONE_RATIO_SPREAD 'H'
#define ENUM_STRATEGY_CODE_IRON_BUTTERFLY 'I'
#define ENUM_STRATEGY_CODE_COMBO 'J'
#define ENUM_STRATEGY_CODE_STRANGLE 'K'
#define ENUM_STRATEGY_CODE_LADDER 'L'
#define ENUM_STRATEGY_CODE_STRIP 'M'
#define ENUM_STRATEGY_CODE_STRADDLE_CALENDAR_SPREAD 'N'
#define ENUM_STRATEGY_CODE_PACK 'O'
#define ENUM_STRATEGY_CODE_DIAGONAL_STRADDLE_CALENDAR_SPREAD 'P'
#define ENUM_STRATEGY_CODE_SIMPLE_INTER_COMMODITY_SPREAD 'Q'
#define ENUM_STRATEGY_CODE_CONVERSION_REVERSAL 'R'
#define ENUM_STRATEGY_CODE_STRADDLE 'S'
#define ENUM_STRATEGY_CODE_VOLATILITY_TRADE 'V'
#define ENUM_STRATEGY_CODE_CONDOR 'W'
#define ENUM_STRATEGY_CODE_BOX 'X'
#define ENUM_STRATEGY_CODE_BUNDLE 'Y'
#define ENUM_STRATEGY_CODE_REDUCED_TICK_SPREAD 'Z'
#define ENUM_STRATEGY_CODE_LADDERVERSUS_UNDERLYING 'a'
#define ENUM_STRATEGY_CODE_BUTTERFLYVERSUS_UNDERLYING 'b'
#define ENUM_STRATEGY_CODE_CALL_SPREADVERSUS_PUTVERSUS_UNDERLYING 'c'
#define ENUM_STRATEGY_CODE_CALLOR_PUT_SPREADVERSUS_UNDERLYING 'd'
#define ENUM_STRATEGY_CODE_CALLOR_PUT_CALENDAR_SPREADVERSUS_UNDERLYING 'e'
#define ENUM_STRATEGY_CODE_CALL_PUT_DIAGONAL_CALENDAR_SPREADVERSUS_UNDERLYING 'f'
#define ENUM_STRATEGY_CODE_GUTSVERSUS_UNDERLYING 'g'
#define ENUM_STRATEGY_CODE_TWOBY_ONE_CALLOR_PUT_RATIO_SPREADVERSUS_UNDERLYING 'h'
#define ENUM_STRATEGY_CODE_IRON_BUTTERFLYVERSUS_UNDERLYING 'i'
#define ENUM_STRATEGY_CODE_COMBOVERSUS_UNDERLYING 'j'
#define ENUM_STRATEGY_CODE_STRANGLEVERSUS_UNDERLYING 'k'
#define ENUM_STRATEGY_CODE_EXCHANGEFOR_PHYSICAL 'm'
#define ENUM_STRATEGY_CODE_STRADDLE_CALENDAR_SPREADVERSUS_UNDERLYING 'n'
#define ENUM_STRATEGY_CODE_PUT_SPREADVERSUS_CALLVERSUS_UNDERLYING 'p'
#define ENUM_STRATEGY_CODE_DIAGONAL_STRADDLE_CALENDAR_SPREADVERSUS_UNDERLYING 'q'
#define ENUM_STRATEGY_CODE_SYNTHETIC 'r'
#define ENUM_STRATEGY_CODE_STRADDLEVERSUS_UNDERLYING 's'
#define ENUM_STRATEGY_CODE_CONDORVERSUS_UNDERLYING 't'
#define ENUM_STRATEGY_CODE_BUY_WRITE 'u'
#define ENUM_STRATEGY_CODE_IRON_CONDORVERSUS_UNDERLYING 'v'
#define ENUM_STRATEGY_CODE_IRON_CONDOR 'w'
#define ENUM_STRATEGY_CODE_CALL_SPREADVERSUS_SELLA_PUT 'x'
#define ENUM_STRATEGY_CODE_PUT_SPREADVERSUS_SELLA_CALL 'y'
#define ENUM_STRATEGY_CODE_PUT_STRADDLEVERSUS_SELLA_CALLORA_PUT 'z'
#define ENUM_STRATEGY_CODE_NO_VALUE '0'

/*
 * Technical Origin Values
 */ 
#define ENUM_TECHNICAL_ORIGIN_INDEXTRADINGARBITRAGE 1
#define ENUM_TECHNICAL_ORIGIN_PORTFOLIOSTRATEGY 2
#define ENUM_TECHNICAL_ORIGIN_UNWINDORDER 3
#define ENUM_TECHNICAL_ORIGIN_OTHERORDERSDEFAULT 4
#define ENUM_TECHNICAL_ORIGIN_CROSSMARGINING 5
#define ENUM_TECHNICAL_ORIGIN_NO_VALUE 255

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_NEW_ORDER_MESSAGE 1
#define ENUM_TEMPLATE_ID_ACK_MESSAGE 3
#define ENUM_TEMPLATE_ID_FILL_MESSAGE 4
#define ENUM_TEMPLATE_ID_KILL_MESSAGE 5
#define ENUM_TEMPLATE_ID_CANCEL_REPLACE_MESSAGE 6
#define ENUM_TEMPLATE_ID_REJECT_MESSAGE 7
#define ENUM_TEMPLATE_ID_QUOTES_MESSAGE 8
#define ENUM_TEMPLATE_ID_QUOTE_ACK_MESSAGE 9
#define ENUM_TEMPLATE_ID_QUOTE_REQUEST_MESSAGE 10
#define ENUM_TEMPLATE_ID_CANCEL_REQUEST_MESSAGE 12
#define ENUM_TEMPLATE_ID_MASS_CANCEL_MESSAGE 13
#define ENUM_TEMPLATE_ID_MASS_CANCEL_ACK_MESSAGE 14
#define ENUM_TEMPLATE_ID_OPEN_ORDER_REQUEST_MESSAGE 15
#define ENUM_TEMPLATE_ID_OWNERSHIP_REQUEST_ACK_MESSAGE 17
#define ENUM_TEMPLATE_ID_OWNERSHIP_REQUEST_MESSAGE 18
#define ENUM_TEMPLATE_ID_TRADE_BUST_NOTIFICATION_MESSAGE 19
#define ENUM_TEMPLATE_ID_COLLAR_BREACH_CONFIRMATION_MESSAGE 20
#define ENUM_TEMPLATE_ID_PRICE_INPUT_MESSAGE 28
#define ENUM_TEMPLATE_ID_LIQUIDITY_PROVIDER_COMMAND_MESSAGE 32
#define ENUM_TEMPLATE_ID_ASK_FOR_QUOTE_MESSAGE 33
#define ENUM_TEMPLATE_ID_REQUEST_FOR_EXECUTION_MESSAGE 34
#define ENUM_TEMPLATE_ID_RFQ_NOTIFICATION_MESSAGE 35
#define ENUM_TEMPLATE_ID_RFQ_MATCHING_STATUS_MESSAGE 36
#define ENUM_TEMPLATE_ID_RFQLP_MATCHING_STATUS_MESSAGE 37
#define ENUM_TEMPLATE_ID_USER_NOTIFICATION_MESSAGE 39
#define ENUM_TEMPLATE_ID_MM_SIGN_IN_MESSAGE 47
#define ENUM_TEMPLATE_ID_MM_SIGN_IN_ACK_MESSAGE 48
#define ENUM_TEMPLATE_ID_INSTRUMENT_SYNCHRONIZATION_LIST_MESSAGE 50
#define ENUM_TEMPLATE_ID_SYNCHRONIZATION_TIME_MESSAGE 51
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_REQUEST_MESSAGE 60
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_ACK_MESSAGE 61
#define ENUM_TEMPLATE_ID_MM_PROTECTION_REQUEST_MESSAGE 62
#define ENUM_TEMPLATE_ID_MM_PROTECTION_ACK_MESSAGE 63
#define ENUM_TEMPLATE_ID_NEW_WHOLESALE_ORDER_MESSAGE 64
#define ENUM_TEMPLATE_ID_WHOLESALE_ORDER_ACK_MESSAGE 65
#define ENUM_TEMPLATE_ID_REQUEST_FOR_IMPLIED_EXECUTION_MESSAGE 66
#define ENUM_TEMPLATE_ID_CROSS_ORDER_MESSAGE 67
#define ENUM_TEMPLATE_ID_LOGON_MESSAGE 100
#define ENUM_TEMPLATE_ID_LOGON_ACK_MESSAGE 101
#define ENUM_TEMPLATE_ID_LOGON_REJECT_MESSAGE 102
#define ENUM_TEMPLATE_ID_LOGOUT_MESSAGE 103
#define ENUM_TEMPLATE_ID_HEARTBEAT_MESSAGE 106
#define ENUM_TEMPLATE_ID_TEST_REQUEST_MESSAGE 107
#define ENUM_TEMPLATE_ID_TECHNICAL_REJECT_MESSAGE 108
#define ENUM_TEMPLATE_ID_DECLARATION_ENTRY_MESSAGE 40
#define ENUM_TEMPLATE_ID_DECLARATION_ENTRY_ACK_MESSAGE 41
#define ENUM_TEMPLATE_ID_DECLARATION_NOTICE_MESSAGE 42
#define ENUM_TEMPLATE_ID_DECLARATION_CANCEL_AND_REFUSAL_MESSAGE 43
#define ENUM_TEMPLATE_ID_FUND_PRICE_INPUT_MESSAGE 44
#define ENUM_TEMPLATE_ID_FUND_PRICE_INPUT_ACK_MESSAGE 45
#define ENUM_TEMPLATE_ID_DECLARATION_ENTRY_REJECT_MESSAGE 46

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY 0
#define ENUM_TIME_IN_FORCE_GOOD_TILL_CANCEL 1
#define ENUM_TIME_IN_FORCE_VALIDFOR_UNCROSSING 2
#define ENUM_TIME_IN_FORCE_IMMEDIATEOR_CANCEL 3
#define ENUM_TIME_IN_FORCE_FILLOR_KILL 4
#define ENUM_TIME_IN_FORCE_GOODTILL_TIME 5
#define ENUM_TIME_IN_FORCE_GOODTILL_DATE 6
#define ENUM_TIME_IN_FORCE_VALIDFOR_CLOSING_UNCROSSING 7
#define ENUM_TIME_IN_FORCE_VALIDFOR_SESSION 8

/*
 * Trade Type Values
 */ 
#define ENUM_TRADE_TYPE_CONVENTIONAL_TRADE 1
#define ENUM_TRADE_TYPE_LARGEIN_SCALE_LI_S_TRADE 2
#define ENUM_TRADE_TYPE_BASIS_TRADE 3
#define ENUM_TRADE_TYPE_LARGEIN_SCALE_LI_S_PACKAGE_TRADE 4
#define ENUM_TRADE_TYPE_GUARANTEED_CROSS_TRADE 5
#define ENUM_TRADE_TYPE_AGAINST_ACTUAL_TRADE 6
#define ENUM_TRADE_TYPE_ASSET_ALLOCATION_TRADE 7
#define ENUM_TRADE_TYPE_EXCHANGEFOR_SWAP_TRADE 9
#define ENUM_TRADE_TYPE_EXCHANGEFOR_PHYSICAL_TRADE_CASH_LEG 10
#define ENUM_TRADE_TYPE_STRATEGY_LEG_CONVENTIONAL_TRADE 11
#define ENUM_TRADE_TYPE_STRATEGY_LEG_LARGEIN_SCALE_LI_S_TRADE 12
#define ENUM_TRADE_TYPE_STRATEGY_LEG_BASIS_TRADE 13
#define ENUM_TRADE_TYPE_STRATEGY_LEG_GUARANTEED_CROSS_TRADE 14
#define ENUM_TRADE_TYPE_STRATEGY_LEG_AGAINST_ACTUAL_TRADE 15
#define ENUM_TRADE_TYPE_STRATEGY_LEG_ASSET_ALLOCATION_TRADE 16
#define ENUM_TRADE_TYPE_STRATEGY_LEG_EXCHANGE_FOR_SWAP_TRADE 18
#define ENUM_TRADE_TYPE_STRATEGY_LEG_EXCHANGE_FOR_PHYSICAL_TRADE 19
#define ENUM_TRADE_TYPE_BO_B_TRADE 20
#define ENUM_TRADE_TYPE_ATOM_X_TRADE 22
#define ENUM_TRADE_TYPE_TRADE_CANCELLATION 24
#define ENUM_TRADE_TYPE_OUTOF_MARKET_TRADE 25
#define ENUM_TRADE_TYPE_DELTA_NEUTRAL_TRADE_UNDERLYING_CASH_LEG 26
#define ENUM_TRADE_TYPE_MARKET_VWAP_OPERATION_TRADE 27
#define ENUM_TRADE_TYPE_EURONEXT_FUND_SERVICE_TRADE 28
#define ENUM_TRADE_TYPE_SECONDARY_LISTING_TRADE 29
#define ENUM_TRADE_TYPE_REQUESTFOR_CROSS_TRADE 30
#define ENUM_TRADE_TYPE_REQUESTFORCROSSSTRATEGY_LEG_TRADE 31
#define ENUM_TRADE_TYPE_TRADE_PUBLICATION 32
#define ENUM_TRADE_TYPE_DARK_TRADE 33
#define ENUM_TRADE_TYPE_DELTA_NEUTRAL_TRADE_UNDERLYING_FUTURE_LEG 34
#define ENUM_TRADE_TYPE_TOTAL_TRADED_VOLUME 36
#define ENUM_TRADE_TYPE_ETFMTFNAV_TRADEPRICEINBP 37
#define ENUM_TRADE_TYPE_ETFMTFNAV_DARK_TRADEPRICEINBP 38
#define ENUM_TRADE_TYPE_GUARANTEED_CROSS_NEGOTIATEDDEAL_NLIQ 39
#define ENUM_TRADE_TYPE_GUARANTEED_CROSS_NEGOTIATEDDEAL_OILQ 40
#define ENUM_TRADE_TYPE_LARGEIN_SCALE_TRADEINBASISPOINTS 42
#define ENUM_TRADE_TYPE_LARGEIN_SCALE_PACKAGE_TRADEINBASISPOINTS 43
#define ENUM_TRADE_TYPE_STRATEGY_LEG_LARGEIN_SCALE_TRADEINBASISPOINTS 44
#define ENUM_TRADE_TYPE_LARGEIN_SCALE_TRADE 41
#define ENUM_TRADE_TYPE_CONVENTIONAL_TRADE_PROVISIONALPRICE 100
#define ENUM_TRADE_TYPE_LARGEIN_SCALE_LI_S_TRADE_PROVISIONALPRICE 101
#define ENUM_TRADE_TYPE_LARGEIN_SCALE_LI_S_PACKAGE_TRADE_PROVISIONALPRICE 102

/*
 * Trading Capacity Values
 */ 
#define ENUM_TRADING_CAPACITY_DEALINGONOWNACCOUNT 1
#define ENUM_TRADING_CAPACITY_MATCHEDPRINCIPAL 2
#define ENUM_TRADING_CAPACITY_ANYOTHERCAPACITY 3
#define ENUM_TRADING_CAPACITY_NO_VALUE 255

/*
 * Trading Capacity Cross Values
 */ 
#define ENUM_TRADING_CAPACITY_CROSS_DEALINGONOWNACCOUNT 1
#define ENUM_TRADING_CAPACITY_CROSS_MATCHEDPRINCIPAL 2
#define ENUM_TRADING_CAPACITY_CROSS_ANYOTHERCAPACITY 3
#define ENUM_TRADING_CAPACITY_CROSS_NO_VALUE 255

/*
 * Transaction Price Type Values
 */ 
#define ENUM_TRANSACTION_PRICE_TYPE_PLAIN_VANILLA_TRADE 1
#define ENUM_TRANSACTION_PRICE_TYPE_NON_PRICE_FORMING_TRADE 2
#define ENUM_TRANSACTION_PRICE_TYPE_TRADE_NOT_CONTRIBUTINGTO_PRICE_DISCOVERY_PROCESS 3
#define ENUM_TRANSACTION_PRICE_TYPE_DARK_TRADE 4
#define ENUM_TRANSACTION_PRICE_TYPE_NO_VALUE 255

/*
 * Undisclosed Iceberg Type Values
 */ 
#define ENUM_UNDISCLOSED_ICEBERG_TYPE_LIMIT 1
#define ENUM_UNDISCLOSED_ICEBERG_TYPE_PEG_MID_POINT 2
#define ENUM_UNDISCLOSED_ICEBERG_TYPE_PEG_PRIMARY 3
#define ENUM_UNDISCLOSED_ICEBERG_TYPE_PEG_MARKET 4
#define ENUM_UNDISCLOSED_ICEBERG_TYPE_NO_VALUE 255

/*
 * User Status Values
 */ 
#define ENUM_USER_STATUS_TRADER_ALGO_SUSPENDED 1
#define ENUM_USER_STATUS_TRADER_ALGO_SUSPENSION_CLEARED 2
#define ENUM_USER_STATUS_TRADER_ALGO_KILLED 3
#define ENUM_USER_STATUS_TRADER_ALGO_KILL_CLEARED 4
#define ENUM_USER_STATUS_FIRM_SUSPENDED 5
#define ENUM_USER_STATUS_FIRM_SUSPENSION_CLEARED 6
#define ENUM_USER_STATUS_FIRM_KILLED 7
#define ENUM_USER_STATUS_FIRM_KILL_CLEARED 8
#define ENUM_USER_STATUS_DEA_SUSPENDED 9
#define ENUM_USER_STATUS_DEA_SUSPENSION_CLEARED 10
#define ENUM_USER_STATUS_DEA_KILLED 11
#define ENUM_USER_STATUS_DEA_KILL_CLEARED 12
#define ENUM_USER_STATUS_TRADER_ALGO_SUSPENDEDBY_RISK_MANAGER 13
#define ENUM_USER_STATUS_TRADER_ALGO_UNSUSPENDEDBY_RISK_MANAGER 14
#define ENUM_USER_STATUS_FIRM_SUSPENDEDBY_RISK_MANAGER 15
#define ENUM_USER_STATUS_FIRM_UNSUSPENDEDBY_RISK_MANAGER 16
#define ENUM_USER_STATUS_DEA_SUSPENDEDBY_RISK_MANAGER 17
#define ENUM_USER_STATUS_DEA_UNSUSPENDEDBY_RISK_MANAGER 18
#define ENUM_USER_STATUS_LOGICAL_ACCESS_SUSPENDEDBY_RISK_MANAGER 19
#define ENUM_USER_STATUS_LOGICAL_ACCESS_UNSUSPENDEDBY_RISK_MANAGER 20
#define ENUM_USER_STATUS_TRADER_ALGO_BLOCKEDBY_RISK_MANAGER 21
#define ENUM_USER_STATUS_TRADER_ALGO_UNBLOCKEDBY_RISK_MANAGER 22
#define ENUM_USER_STATUS_FIRM_BLOCKEDBY_RISK_MANAGER 23
#define ENUM_USER_STATUS_FIRM_UNBLOCKEDBY_RISK_MANAGER 24
#define ENUM_USER_STATUS_DEA_BLOCKEDBY_RISK_MANAGER 25
#define ENUM_USER_STATUS_DEA_UNBLOCKEDBY_RISK_MANAGER 26
#define ENUM_USER_STATUS_LOGICAL_ACCESS_BLOCKEDBY_RISK_MANAGER 27
#define ENUM_USER_STATUS_LOGICAL_ACCESS_UNBLOCKEDBY_RISK_MANAGER 28
#define ENUM_USER_STATUS_ORDER_SIZE_LIMIT_ACTIVATEDBY_RISK_MANAGER 29
#define ENUM_USER_STATUS_ORDER_SIZE_LIMIT_DEACTIVATEDBY_RISK_MANAGER 30

/*
 * Wholesale Side Values
 */ 
#define ENUM_WHOLESALE_SIDE_BUY 1
#define ENUM_WHOLESALE_SIDE_SELL 2
#define ENUM_WHOLESALE_SIDE_CROSS 3

/*
 * Wholesale Trade Type Values
 */ 
#define ENUM_WHOLESALE_TRADE_TYPE_LARGEIN_SCALE_TRADE_FORMERLY_BLOCK_TRADE 0
#define ENUM_WHOLESALE_TRADE_TYPE_AGAINST_ACTUAL 1
#define ENUM_WHOLESALE_TRADE_TYPE_EXCHANGE_FOR_SWAPS 2


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Group Size Encoding
 */ 
typedef struct {
    uint8_t BlockLengthUint8;
    uint8_t NumInGroup;
} GroupSizeEncodingT;

/*
 * Structure: Not Used Group 1 Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} NotUsedGroup1GroupsT;

/*
 * Structure: Declaration Entry Reject Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    char MiCofSecondaryListing[4];
    uint8_t OperationType;
    uint16_t ErrorCode;
    uint8_t RejectedMessage;
    uint16_t RejectedMessageId;
} DeclarationEntryRejectMessageT;

/*
 * Structure: Fund Price Input Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    int64_t Price;
    uint8_t BypassIndicator;
} FundPriceInputAckMessageT;

/*
 * Structure: Fund Price Input Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    int64_t Price;
    uint8_t BypassIndicator;
} FundPriceInputMessageT;

/*
 * Structure: Declaration Cancel And Refusal Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint64_t DeclarationId;
    uint8_t ActionType;
} DeclarationCancelAndRefusalMessageT;

/*
 * Structure: Not Used Group 2 Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} NotUsedGroup2GroupsT;

/*
 * Bitfield: Waiver Indicator
 */ 
typedef struct {
    uint8_t
    Omf : 1,
    Ilqd : 1,
    Size : 1,
    Pric : 1,
    Oilq : 1,
    Nliq : 1,
    Rfpt : 1,
    Lrgs : 1;
} WaiverIndicatorT;

/*
 * Structure: Declaration Entry Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t DeclarationId;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    char MiCofSecondaryListing[4];
    uint8_t OperationType;
    uint8_t PreMatchingType;
    WaiverIndicatorT WaiverIndicator;
} DeclarationEntryAckMessageT;

/*
 * Bitfield: Mi Fid Indicators
 */ 
typedef struct {
    uint8_t
    Reserved2 : 2,
    Frmaramplp : 1,
    DeferralIndicator : 1,
    CommodityDerivativeIndicator : 1,
    ExecutionAlgoIndicator : 1,
    InvestmentAlgoIndicator : 1,
    DeaIndicator : 1;
} MiFidIndicatorsT;

/*
 * Structure: Declaration Entry Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint8_t OperationType;
    uint32_t SymbolIndex;
    uint8_t Emm;
    char EnteringCounterparty[8];
    uint8_t Side;
    uint64_t Quantity;
    int64_t Price;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    char MiCofSecondaryListing[4];
    char CentralisationDate[10];
    char ClearingFirmId[8];
    uint8_t AccountType;
    uint8_t AccountTypeCross;
    uint8_t TradingCapacity;
    uint8_t TradingCapacityCross;
    uint8_t SettlementPeriod;
    uint8_t SettlementFlag;
    uint8_t GuaranteeFlag;
    MiFidIndicatorsT MiFidIndicators;
    uint8_t TransactionPriceType;
    char PrincipalCode[8];
    char PrincipalCodeCross[8];
    uint32_t StartTimeVwap;
    uint32_t EndTimeVwap;
    int64_t GrossTradeAmount;
    char AccountNumber[12];
    char AccountNumberCross[12];
    char FreeText[18];
    char FreeTextCross[18];
    int32_t InvestmentDecisionWFirmShortCode;
    int32_t ClientIdentificationShortCodeCross;
} DeclarationEntryMessageT;

/*
 * Structure: Technical Reject Message
 */ 
typedef struct {
    uint64_t OegoutToMember;
    uint32_t RejectedClientMessageSequenceNumber;
    uint8_t RejectedMessage;
    uint16_t ErrorCode;
    uint16_t RejectedMessageId;
} TechnicalRejectMessageT;

/*
 * Structure: Logout Message
 */ 
typedef struct {
    uint8_t LogOutReasonCode;
} LogoutMessageT;

/*
 * Structure: Logon Reject Message
 */ 
typedef struct {
    char ExchangeId[8];
    uint8_t LogonRejectCode;
    uint32_t LastClMsgSeqNum;
    uint32_t LastMsgSeqNum;
} LogonRejectMessageT;

/*
 * Structure: Logon Ack Message
 */ 
typedef struct {
    char ExchangeId[8];
    uint32_t LastClMsgSeqNum;
} LogonAckMessageT;

/*
 * Structure: Logon Message
 */ 
typedef struct {
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    uint32_t LastMsgSeqNum;
    char SoftwareProvider[8];
    uint8_t QueueingIndicator;
} LogonMessageT;

/*
 * Structure: Strategy Fields Group
 */ 
typedef struct {
    int64_t LegLastPx;
    uint64_t LegLastQty;
    uint32_t LegInstrumentId;
    uint8_t LegSide;
    uint32_t ExecutionId;
} StrategyFieldsGroupT;

/*
 * Structure: Strategy Fields Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} StrategyFieldsGroupsT;

/*
 * Bitfield: Open Close
 */ 
typedef struct {
    uint16_t
    Reserved6 : 6,
    Leg9 : 1,
    Leg8 : 1,
    Leg7 : 1,
    Leg6 : 1,
    Leg5 : 1,
    Leg4 : 1,
    Leg3 : 1,
    Leg2 : 1,
    Leg1 : 1,
    FieldActivelyUsed : 1;
} OpenCloseT;

/*
 * Structure: Clearing Fields X Group
 */ 
typedef struct {
    char ClearingFirmId[8];
    char LongClientId[16];
    char AccountNumber[12];
    uint8_t TechnicalOrigin;
    OpenCloseT OpenClose;
    uint16_t ClearingInstruction;
    uint8_t AccountType;
    uint8_t TradingCapacity;
} ClearingFieldsXGroupT;

/*
 * Structure: Clearing Fields X Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} ClearingFieldsXGroupsT;

/*
 * Structure: Mi Fi D Shortcodes Group
 */ 
typedef struct {
    int32_t InvestmentDecisionWFirmShortCode;
    int32_t NonExecutingBrokerShortCode;
    int32_t ClientIdentificationShortcode;
} MiFiDShortcodesGroupT;

/*
 * Structure: Mi Fi D Shortcodes Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} MiFiDShortcodesGroupsT;

/*
 * Structure: Free Text Section Group
 */ 
typedef struct {
    char FreeText[18];
} FreeTextSectionGroupT;

/*
 * Structure: Free Text Section Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} FreeTextSectionGroupsT;

/*
 * Structure: Request For Implied Execution Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint64_t OrderId;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    MiFidIndicatorsT MiFidIndicators;
} RequestForImpliedExecutionMessageT;

/*
 * Structure: Wholesale Ack Clearing Rep Group
 */ 
typedef struct {
    uint32_t SymbolIndex;
    uint8_t Side;
    int32_t InvestmentDecisionWFirmShortCode;
    int32_t NonExecutingBrokerShortCode;
    int32_t ClientIdentificationShortcode;
    uint16_t NonExecutingClientId;
} WholesaleAckClearingRepGroupT;

/*
 * Structure: Wholesale Ack Clearing Rep Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} WholesaleAckClearingRepGroupsT;

/*
 * Structure: Wholesale Ack Legs Rep Group
 */ 
typedef struct {
    uint32_t LegSymbolIndex;
    uint64_t LegBidOrderId;
    uint64_t LegOfferOrderId;
    uint8_t LegSide;
    uint16_t LegErrorCode;
} WholesaleAckLegsRepGroupT;

/*
 * Structure: Wholesale Ack Legs Rep Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} WholesaleAckLegsRepGroupsT;

/*
 * Bitfield: Ack Qualifiers
 */ 
typedef struct {
    uint8_t
    ExecutedUponEntryFlag : 1,
    ExecutionUponEntryFlagEnabled : 1,
    Internal2 : 1,
    Internal1 : 1,
    UseOfCrossPartition : 1,
    RequestWithClientOrderId : 1,
    QueueIndicator : 1,
    DarkIndicator : 1;
} AckQualifiersT;

/*
 * Structure: Wholesale Client Rep Group
 */ 
typedef struct {
    uint32_t SymbolIndex;
    uint8_t Side;
    uint8_t AccountType;
    char ClearingFirmId[8];
    char LongClientId[16];
    char AccountNumber[12];
    uint8_t TechnicalOrigin;
    OpenCloseT OpenClose;
    uint16_t ClearingInstruction;
    char FreeText[18];
    uint16_t NonExecutingClientId;
    int32_t InvestmentDecisionWFirmShortCode;
    int32_t NonExecutingBrokerShortCode;
    int32_t ClientIdentificationShortcode;
    uint8_t TradingCapacity;
} WholesaleClientRepGroupT;

/*
 * Structure: Wholesale Client Rep Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} WholesaleClientRepGroupsT;

/*
 * Structure: Wholesale Legs Rep Group
 */ 
typedef struct {
    uint32_t LegSymbolIndex;
    int64_t LegPrice;
    uint64_t BidQuantity;
    uint64_t OfferQuantity;
    uint8_t LegSide;
    int64_t LegStrikePrice;
    uint32_t LegRatio;
    uint8_t LegPutOrCall;
    uint8_t LegSecurityType;
    char LegLastTradingDate[8];
} WholesaleLegsRepGroupT;

/*
 * Structure: Wholesale Legs Rep Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} WholesaleLegsRepGroupsT;

/*
 * Structure: Mm P Section 2 Group
 */ 
typedef struct {
    uint8_t ProtectionType;
    uint64_t ProtectionThreshold;
    uint8_t BreachAction;
    int64_t CurrentMmpPosition;
    uint8_t BreachStatus;
} MmPSection2GroupT;

/*
 * Structure: Mm P Section 2 Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} MmPSection2GroupsT;

/*
 * Bitfield: Mmp Execution Type
 */ 
typedef struct {
    uint8_t
    Reserved5 : 5,
    Pull : 1,
    Acknowledgement : 1,
    Notification : 1;
} MmpExecutionTypeT;

/*
 * Structure: Mm Protection Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    int32_t ExecutionWithinFirmShortCode;
    uint32_t SymbolIndex;
    uint8_t Emm;
    MmpExecutionTypeT MmpExecutionType;
} MmProtectionAckMessageT;

/*
 * Structure: Mm P Section Group
 */ 
typedef struct {
    uint8_t ProtectionType;
    uint64_t ProtectionThreshold;
    uint8_t BreachAction;
} MmPSectionGroupT;

/*
 * Structure: Mm P Section Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} MmPSectionGroupsT;

/*
 * Structure: Mm Protection Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    int32_t ExecutionWithinFirmShortCode;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t RequestType;
} MmProtectionRequestMessageT;

/*
 * Structure: Security Definition Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t SecurityReqId;
    uint32_t SymbolIndex;
} SecurityDefinitionAckMessageT;

/*
 * Structure: Strategy Legs Group
 */ 
typedef struct {
    uint32_t LegSymbolIndex;
    uint32_t LegRatio;
    uint8_t LegSecurityType;
    uint8_t LegPutOrCall;
    int64_t LegPrice;
    int64_t LegStrikePrice;
    char LegLastTradingDate[8];
    uint8_t LegSide;
} StrategyLegsGroupT;

/*
 * Structure: Strategy Legs Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} StrategyLegsGroupsT;

/*
 * Structure: Security Definition Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t SecurityReqId;
    uint32_t ContractSymbolIndex;
    char StrategyCode;
} SecurityDefinitionRequestMessageT;

/*
 * Structure: Synchronization Time Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    uint64_t OegoutToMember;
    uint16_t ResynchronizationId;
    uint64_t LastBookInTime;
} SynchronizationTimeMessageT;

/*
 * Structure: Instrument Synchronization Section Group
 */ 
typedef struct {
    uint32_t SymbolIndex;
    uint8_t Emm;
} InstrumentSynchronizationSectionGroupT;

/*
 * Structure: Instrument Synchronization Section Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} InstrumentSynchronizationSectionGroupsT;

/*
 * Structure: Instrument Synchronization List Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    uint64_t OegoutToMember;
    uint16_t ResynchronizationId;
} InstrumentSynchronizationListMessageT;

/*
 * Structure: Mm Sign In Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    int32_t ExecutionWithinFirmShortCode;
    char ClearingFirmId[8];
    char AccountNumber[12];
    uint8_t TechnicalOrigin;
    OpenCloseT OpenClose;
    uint16_t ClearingInstruction;
    char FreeText[18];
    char LongClientId[16];
} MmSignInAckMessageT;

/*
 * Structure: Mm Sign In Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    int32_t ExecutionWithinFirmShortCode;
    char ClearingFirmId[8];
    char AccountNumber[12];
    uint8_t TechnicalOrigin;
    OpenCloseT OpenClose;
    uint16_t ClearingInstruction;
    char FreeText[18];
    char LongClientId[16];
} MmSignInMessageT;

/*
 * Structure: User Notification Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    char FamilyId[8];
    uint32_t SymbolIndex;
    uint8_t UserStatus;
    uint32_t LogicalAccessId;
    uint64_t OrderSizeLimit;
} UserNotificationMessageT;

/*
 * Structure: Rfqlp Matching Status Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    uint64_t QuoteReqId;
    uint64_t PotentialMatchingQty;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
} RfqlpMatchingStatusMessageT;

/*
 * Structure: Rfq Matching Status Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    uint64_t QuoteReqId;
    int64_t PotentialMatchingPx;
    uint64_t PotentialMatchingQty;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t NumberOfLPs;
    uint8_t RecipientType;
} RfqMatchingStatusMessageT;

/*
 * Bitfield: Dark Execution Instruction
 */ 
typedef struct {
    uint8_t
    Reserved3 : 3,
    MinimumQuantityType : 1,
    SweepOrderIndicator : 1,
    DisplayedOrderInteraction : 1,
    DeferredTradeIndicator : 1,
    DarkIndicator : 1;
} DarkExecutionInstructionT;

/*
 * Structure: Rfq Notification Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    uint64_t QuoteReqId;
    uint64_t OrderQty;
    char CounterpartFirmId[8];
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t RfqUpdateType;
    uint8_t OrderSide;
    char EndClient[11];
    DarkExecutionInstructionT DarkExecutionInstruction;
    uint64_t MinOrderQty;
} RfqNotificationMessageT;

/*
 * Structure: Request For Execution Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint32_t SymbolIndex;
    uint8_t Emm;
} RequestForExecutionMessageT;

/*
 * Structure: Ask For Quote Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t AfqReason;
} AskForQuoteMessageT;

/*
 * Structure: Liquidity Provider Command Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t LpActionCode;
} LiquidityProviderCommandMessageT;

/*
 * Structure: Price Input Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t InputPriceType;
    int64_t Price;
} PriceInputMessageT;

/*
 * Structure: Collar Breach Confirmation Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint64_t OrderId;
    int64_t OrigClientOrderId;
} CollarBreachConfirmationMessageT;

/*
 * Structure: Trade Bust Notification Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint32_t ExecutionId;
    int64_t LastTradedPx;
    uint64_t LastShares;
    uint32_t LisTransactionId;
    uint32_t ParentExecId;
    uint32_t ParentSymbolIndex;
} TradeBustNotificationMessageT;

/*
 * Structure: Ownership Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint64_t OrderId;
    int64_t OrigClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    uint8_t OrderCategory;
} OwnershipRequestMessageT;

/*
 * Structure: Ownership Request Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    int64_t ClientOrderId;
    uint64_t OrderId;
    uint32_t SymbolIndex;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    int32_t TotalAffectedOrders;
    uint8_t OrderCategory;
} OwnershipRequestAckMessageT;

/*
 * Structure: Open Order Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint64_t OrderId;
    int64_t OrigClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderCategory;
} OpenOrderRequestMessageT;

/*
 * Structure: Mi Fi D Fields Group
 */ 
typedef struct {
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    MiFidIndicatorsT MiFidIndicators;
} MiFiDFieldsGroupT;

/*
 * Structure: Mi Fi D Fields Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} MiFiDFieldsGroupsT;

/*
 * Structure: Mass Cancel Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    int32_t TotalAffectedOrders;
    uint32_t SymbolIndex;
    uint8_t Emm;
    char InstrumentGroupCode[2];
    uint8_t OrderSide;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    uint32_t ContractId;
    char Maturity[8];
    uint8_t AccountType;
    uint8_t OptionType;
    uint8_t OrderCategory;
    AckQualifiersT AckQualifiers;
    int32_t TargetExecutionWithinFirmShortCode;
} MassCancelAckMessageT;

/*
 * Structure: Quote Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint64_t OrderQty;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t FirmIdPublication;
    char EndClient[11];
    DarkExecutionInstructionT DarkExecutionInstruction;
    uint64_t MinOrderQty;
} QuoteRequestMessageT;

/*
 * Structure: Quote Acks Group
 */ 
typedef struct {
    uint64_t BidOrderId;
    uint64_t OfferOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t BuyRevisionFlag;
    uint8_t SellRevisionFlag;
    uint16_t BidErrorCode;
    uint16_t OfferErrorCode;
} QuoteAcksGroupT;

/*
 * Structure: Quote Acks Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} QuoteAcksGroupsT;

/*
 * Structure: Quote Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    uint8_t AccountType;
    uint8_t LpRole;
    int32_t ExecutionWithinFirmShortCode;
    AckQualifiersT AckQualifiers;
} QuoteAckMessageT;

/*
 * Structure: Quotes Rep Group
 */ 
typedef struct {
    uint64_t BidSize;
    int64_t BidPx;
    uint64_t OfferSize;
    int64_t OfferPx;
    uint32_t SymbolIndex;
    uint8_t Emm;
} QuotesRepGroupT;

/*
 * Structure: Quotes Rep Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} QuotesRepGroupsT;

/*
 * Structure: Clearing Dataset Group
 */ 
typedef struct {
    char ClearingFirmId[8];
    char ClientId[8];
    char AccountNumber[12];
    uint8_t TechnicalOrigin;
    OpenCloseT OpenClose;
    uint16_t ClearingInstruction;
    char FreeText[18];
} ClearingDatasetGroupT;

/*
 * Structure: Clearing Dataset Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} ClearingDatasetGroupsT;

/*
 * Bitfield: Execution Instruction
 */ 
typedef struct {
    uint8_t
    Reserved1 : 1,
    ConditionalOrder : 1,
    RfqConfirmation : 1,
    RfqAnswer : 1,
    DisabledCancelOnDisconnectIndicator : 1,
    DisclosedQuantityRandomization : 1,
    StpIncomingOrder : 1,
    StpRestingOrder : 1;
} ExecutionInstructionT;

/*
 * Structure: Collar Fields Group
 */ 
typedef struct {
    uint8_t CollarRejType;
    int64_t BreachedCollarPrice;
} CollarFieldsGroupT;

/*
 * Structure: Collar Fields Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} CollarFieldsGroupsT;

/*
 * Structure: Additional Infos Group
 */ 
typedef struct {
    char LongClientId[16];
} AdditionalInfosGroupT;

/*
 * Structure: Additional Infos Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} AdditionalInfosGroupsT;

/*
 * Structure: Clearing Fields Group
 */ 
typedef struct {
    char ClearingFirmId[8];
    char ClientId[8];
    char AccountNumber[12];
    uint8_t TechnicalOrigin;
    OpenCloseT OpenClose;
    uint16_t ClearingInstruction;
    uint8_t AccountTypeCross;
} ClearingFieldsGroupT;

/*
 * Structure: Clearing Fields Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} ClearingFieldsGroupsT;

/*
 * Bitfield: Trading Session
 */ 
typedef struct {
    uint8_t
    Reserved4 : 4,
    Session3 : 1,
    Session2 : 1,
    Session1 : 1,
    Reserved1 : 1;
} TradingSessionT;

/*
 * Structure: Optional Fields Group
 */ 
typedef struct {
    int64_t StopPx;
    int64_t UndisclosedPrice;
    uint64_t DisclosedQty;
    uint64_t MinOrderQty;
    uint64_t QuoteReqId;
    uint32_t OrderExpirationTime;
    uint16_t OrderExpirationDate;
    int8_t PegOffset;
    TradingSessionT TradingSession;
    uint8_t UndisclosedIcebergType;
    uint8_t StopTriggeredTimeInForce;
} OptionalFieldsGroupT;

/*
 * Structure: Optional Fields Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} OptionalFieldsGroupsT;

/*
 * Structure: Kill Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    int64_t OrigClientOrderId;
    uint64_t OrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint16_t KillReason;
    AckQualifiersT AckQualifiers;
} KillMessageT;

/*
 * Structure: Optional Fields Derivatives Group
 */ 
typedef struct {
    int64_t EvaluatedPrice;
    uint8_t MessagePriceNotation;
} OptionalFieldsDerivativesGroupT;

/*
 * Structure: Optional Fields Derivatives Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} OptionalFieldsDerivativesGroupsT;

/*
 * Structure: Optional Fields Fill Group
 */ 
typedef struct {
    char CounterpartFirmId[8];
    int64_t OtherLegLastPx;
    char PackageId[12];
    uint32_t UnderlyingInstrumentId;
} OptionalFieldsFillGroupT;

/*
 * Structure: Optional Fields Fill Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} OptionalFieldsFillGroupsT;

/*
 * Bitfield: Trade Qualifier
 */ 
typedef struct {
    uint8_t
    DeferredPublication : 1,
    NavTradeExpressedInPriceCurrency : 1,
    NavTradeExpressedInBps : 1,
    TradeCreationByMarketOperations : 1,
    AggressiveOrder : 1,
    PassiveOrder : 1,
    FirstTradePrice : 1,
    UncrossingTrade : 1;
} TradeQualifierT;

/*
 * Structure: Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    int64_t OrigClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t AckType;
    uint8_t AckPhase;
    uint64_t OrderId;
    uint64_t OrderPriority;
    int64_t OrderPx;
    uint64_t OrderQty;
    AckQualifiersT AckQualifiers;
} AckMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t BlockLengthUint16;
    uint16_t TemplateId;
    uint16_t SchemaId;
    uint16_t Version;
} MessageHeaderT;

/*
 * Structure: Message
 */ 
typedef struct {
    uint16_t Frame;
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Packet
 */ 
typedef struct {
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: European New Exchange Technology
   Version: 4.2
   Date: Friday, September 25, 2020
   Specification: Euronext Markets - Optiq OEG Client Specifications - SBE Interface - v4.2.2.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
