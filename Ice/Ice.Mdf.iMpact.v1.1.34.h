/*******************************************************************************
 * C Structs For Ice iMpact Mdf 1.1.34 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_NONE = ''
#define ENUM_AGGRESSOR_SIDE_BUY_1 = '1'
#define ENUM_AGGRESSOR_SIDE_SELL_2 = '2'

/*
 * Allow Options Values
 */ 
#define ENUM_ALLOW_OPTIONS_YES_Y = 'Y'
#define ENUM_ALLOW_OPTIONS_NO_N = 'N'

/*
 * Allows Implied Values
 */ 
#define ENUM_ALLOWS_IMPLIED_YES_Y = 'Y'
#define ENUM_ALLOWS_IMPLIED_NO_N = 'N'

/*
 * Cross Order Supported Values
 */ 
#define ENUM_CROSS_ORDER_SUPPORTED_YES_Y = 'Y'
#define ENUM_CROSS_ORDER_SUPPORTED_NO_N = 'N'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_NORMAL_TRADE_0 = '0'
#define ENUM_EVENT_CODE_CANCELLED_TRADE_1 = '1'
#define ENUM_EVENT_CODE_ADJUSTED_TRADE_2 = '2'

/*
 * Exchange Silo Values
 */ 
#define ENUM_EXCHANGE_SILO_ICE_0 = '0'
#define ENUM_EXCHANGE_SILO_ENDEX_1 = '1'
#define ENUM_EXCHANGE_SILO_LIFFE_2 = '2'

/*
 * Gt Allowed Values
 */ 
#define ENUM_GT_ALLOWED_YES_Y = 'Y'
#define ENUM_GT_ALLOWED_NO_N = 'N'

/*
 * Guaranteed Cross Supported Values
 */ 
#define ENUM_GUARANTEED_CROSS_SUPPORTED_YES_Y = 'Y'
#define ENUM_GUARANTEED_CROSS_SUPPORTED_NO_N = 'N'

/*
 * Has Previous Day Settlement Price Values
 */ 
#define ENUM_HAS_PREVIOUS_DAY_SETTLEMENT_PRICE_NO_N = 'N'
#define ENUM_HAS_PREVIOUS_DAY_SETTLEMENT_PRICE_YES_Y = 'Y'

/*
 * Hedge Only Values
 */ 
#define ENUM_HEDGE_ONLY_YES_Y = 'Y'
#define ENUM_HEDGE_ONLY_NO_N = 'N'

/*
 * Hedge Side Values
 */ 
#define ENUM_HEDGE_SIDE_NONE = ''
#define ENUM_HEDGE_SIDE_BID_1 = '1'
#define ENUM_HEDGE_SIDE_OFFER_2 = '2'

/*
 * Investigation Status Values
 */ 
#define ENUM_INVESTIGATION_STATUS_UNDER_INVESTIGATION_1 = '1'
#define ENUM_INVESTIGATION_STATUS_INVESTIGATION_COMPLETED_2 = '2'

/*
 * Ipl Hold Type Values
 */ 
#define ENUM_IPL_HOLD_TYPE_IPL_HOLD_START_S = 'S'
#define ENUM_IPL_HOLD_TYPE_IPL_HOLD_END_E = 'E'

/*
 * Is Balanced Values
 */ 
#define ENUM_IS_BALANCED_YES_Y = 'Y'
#define ENUM_IS_BALANCED_NO_N = 'N'

/*
 * Is Block Only Values
 */ 
#define ENUM_IS_BLOCK_ONLY_YES_Y = 'Y'
#define ENUM_IS_BLOCK_ONLY_NO_N = 'N'

/*
 * Is Final Values
 */ 
#define ENUM_IS_FINAL_YES_Y = 'Y'
#define ENUM_IS_FINAL_NO_N = 'N'

/*
 * Is Official Values
 */ 
#define ENUM_IS_OFFICIAL_YES_Y = 'Y'
#define ENUM_IS_OFFICIAL_NO_N = 'N'

/*
 * Is Settle Price Official Values
 */ 
#define ENUM_IS_SETTLE_PRICE_OFFICIAL_YES_Y = 'Y'
#define ENUM_IS_SETTLE_PRICE_OFFICIAL_NO_N = 'N'

/*
 * Is System Priced Leg Values
 */ 
#define ENUM_IS_SYSTEM_PRICED_LEG_YES_Y = 'Y'
#define ENUM_IS_SYSTEM_PRICED_LEG_NO_N = 'N'

/*
 * Is Tradable Values
 */ 
#define ENUM_IS_TRADABLE_YES_Y = 'Y'
#define ENUM_IS_TRADABLE_NO_N = 'N'

/*
 * Is Transaction End Values
 */ 
#define ENUM_IS_TRANSACTION_END_YES_Y = 'Y'
#define ENUM_IS_TRANSACTION_END_NO_N = 'N'

/*
 * Is Up Values
 */ 
#define ENUM_IS_UP_IPL_UPPER_BOUND_VIOLATION_Y = 'Y'
#define ENUM_IS_UP_IPL_LOWER_BOUND_VIOLATION_N = 'N'
#define ENUM_IS_UP_FINAL_F = 'F'
#define ENUM_IS_UP_NON_ENDEX_SPOT_MARKET = ''

/*
 * Leg Deal Suppressed Values
 */ 
#define ENUM_LEG_DEAL_SUPPRESSED_YES_Y = 'Y'
#define ENUM_LEG_DEAL_SUPPRESSED_NO_N = 'N'

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_NONE = ''
#define ENUM_LEG_SIDE_BID_1 = '1'
#define ENUM_LEG_SIDE_OFFER_2 = '2'

/*
 * Market Type Id Values
 */ 
#define ENUM_MARKET_TYPE_ID_FINANCIAL_GAS_0 = "0"
#define ENUM_MARKET_TYPE_ID_FINANCIAL_POWER_1 = "1"
#define ENUM_MARKET_TYPE_ID_OIL_2 = "2"
#define ENUM_MARKET_TYPE_ID_IPE_NATURAL_GAS_FUTURES_3 = "3"
#define ENUM_MARKET_TYPE_ID_IPE_GAS_OIL_FUTURES_4 = "4"
#define ENUM_MARKET_TYPE_ID_IPE_BRENT_FUTURES_5 = "5"
#define ENUM_MARKET_TYPE_ID_IPE_UK_ELECTRICITY_FUTURES_PEAK_7 = "7"
#define ENUM_MARKET_TYPE_ID_IPE_UK_ELECTRICITY_FUTURES_BASE_8 = "8"
#define ENUM_MARKET_TYPE_ID_ICE_WTI_CRUDE_FUTURES_9 = "9"
#define ENUM_MARKET_TYPE_ID_GC_NEWCASTLE_COAL_FUTURES_10 = "10"
#define ENUM_MARKET_TYPE_ID_ICE_BRENT_WTI_FUTURES_SPREAD_11 = "11"
#define ENUM_MARKET_TYPE_ID_IPEECX_EUROPEAN_EMISSIONS_12 = "12"
#define ENUM_MARKET_TYPE_ID_ICE_HEATING_OIL_FUTURES_13 = "13"
#define ENUM_MARKET_TYPE_ID_ICE_HEATING_OIL_WTI_FUTURES_CRACK_14 = "14"
#define ENUM_MARKET_TYPE_ID_ICE_NYH_RBOB_GASOLINE_FUTURES_15 = "15"
#define ENUM_MARKET_TYPE_ID_ICE_NYH_RBOB_GASOLINE_WTI_FUTURES_CRACK_16 = "16"
#define ENUM_MARKET_TYPE_ID_ICE_ROTTERDAM_COAL_FUTURES_17 = "17"
#define ENUM_MARKET_TYPE_ID_ICE_RICHARDS_BAY_COAL_FUTURES_18 = "18"
#define ENUM_MARKET_TYPE_ID_ICE_ROTTERDAM_RICHARDS_BAY_COAL_FUTURES_SPREAD_19 = "19"
#define ENUM_MARKET_TYPE_ID_COCOA_20 = "20"
#define ENUM_MARKET_TYPE_ID_COFFEE_C21 = "21"
#define ENUM_MARKET_TYPE_ID_COTTON_NO_222 = "22"
#define ENUM_MARKET_TYPE_ID_FCOJ_A23 = "23"
#define ENUM_MARKET_TYPE_ID_SUGAR_NO_1124 = "24"
#define ENUM_MARKET_TYPE_ID_HEAT_RATE_SPREAD_25 = "25"
#define ENUM_MARKET_TYPE_ID_US_DOLLAR_INDEX_26 = "26"
#define ENUM_MARKET_TYPE_ID_CANADIAN_OILSEEDS_36 = "36"
#define ENUM_MARKET_TYPE_ID_ECX_CER_FUTURES_38 = "38"
#define ENUM_MARKET_TYPE_ID_FOREIGN_EXCHANGE_39 = "39"
#define ENUM_MARKET_TYPE_ID_FINANCIAL_INDEX_DATA_40 = "40"
#define ENUM_MARKET_TYPE_ID_SUGAR_NO_1641 = "41"
#define ENUM_MARKET_TYPE_ID_ECX_EUACER_FUTURES_SPREAD_42 = "42"
#define ENUM_MARKET_TYPE_ID_HENRY_HUB_44 = "44"
#define ENUM_MARKET_TYPE_ID_DUTCH_TTF_GAS_FUTURES_48 = "48"
#define ENUM_MARKET_TYPE_ID_GERMAN_NATURAL_GAS_FUTURES_50 = "50"
#define ENUM_MARKET_TYPE_ID_EUROPEAN_GAS_SPREADS_51 = "51"
#define ENUM_MARKET_TYPE_ID_CANADIAN_FINANCIAL_GAS_53 = "53"
#define ENUM_MARKET_TYPE_ID_NGX_CANADIAN_PHYSICAL_CRUDE_54 = "54"
#define ENUM_MARKET_TYPE_ID_US_COAL_FUTURES_55 = "55"
#define ENUM_MARKET_TYPE_ID_FOB_INDO_SUBBIT_COAL_FUTURES_57 = "57"
#define ENUM_MARKET_TYPE_ID_HEATING_OIL_BRENT_FUTURES_CRACK_58 = "58"
#define ENUM_MARKET_TYPE_ID_NYH_RBOB_GASOLINE_BRENT_FUTURES_CRACK_59 = "59"
#define ENUM_MARKET_TYPE_ID_WET_FREIGHT_60 = "60"
#define ENUM_MARKET_TYPE_ID_DRY_FREIGHT_61 = "61"
#define ENUM_MARKET_TYPE_ID_FERROUS_METALS_62 = "62"
#define ENUM_MARKET_TYPE_ID_PLATTS_VARIABLE_OIL_63 = "63"
#define ENUM_MARKET_TYPE_ID_NYH_RBOB_GASOLINE_HEATING_OIL_SPREAD_66 = "66"
#define ENUM_MARKET_TYPE_ID_PHYSICAL_ENVIRONMENTAL_69 = "69"
#define ENUM_MARKET_TYPE_ID_HEATING_OIL_LS_GASOIL_FUTURES_SPREAD_70 = "70"
#define ENUM_MARKET_TYPE_ID_LS_GASOIL_BRENT_FUTURES_CRACK_71 = "71"
#define ENUM_MARKET_TYPE_ID_NYH_RBOB_GASOLINE_LS_GASOIL_FUTURES_SPREAD_72 = "72"
#define ENUM_MARKET_TYPE_ID_ECX_EUAA_FUTURES_84 = "84"
#define ENUM_MARKET_TYPE_ID_ECX_CEREUAA_FUTURES_SPREAD_85 = "85"
#define ENUM_MARKET_TYPE_ID_ECX_EUAAEUA_FUTURES_SPREAD_86 = "86"
#define ENUM_MARKET_TYPE_ID_SOYBEAN_89 = "89"
#define ENUM_MARKET_TYPE_ID_ECX_EUA_EIB_AUCTION_92 = "92"
#define ENUM_MARKET_TYPE_ID_FINANCIAL_LNG_93 = "93"
#define ENUM_MARKET_TYPE_ID_EUA_UK_AUCTION_95 = "95"
#define ENUM_MARKET_TYPE_ID_EUAA_UK_AUCTION_96 = "96"
#define ENUM_MARKET_TYPE_ID_CFR_SOUTH_CHINA_COAL_FUTURES_97 = "97"
#define ENUM_MARKET_TYPE_ID_BELGIAN_POWER_FUTURES_98 = "98"
#define ENUM_MARKET_TYPE_ID_DUTCH_POWER_FUTURES_99 = "99"
#define ENUM_MARKET_TYPE_ID_GC_NEWCASTLE_FOB_INDO_SUBBIT_COAL_FUTURES_SPREAD_100 = "100"
#define ENUM_MARKET_TYPE_ID_RICHARDS_BAYG_C_NEWCASTLE_COAL_FUTURES_SPREAD_101 = "101"
#define ENUM_MARKET_TYPE_ID_FCOJ_A_MINI_102 = "102"
#define ENUM_MARKET_TYPE_ID_CIF_US_104 = "104"
#define ENUM_MARKET_TYPE_ID_D6_RIN_108 = "108"
#define ENUM_MARKET_TYPE_ID_EUROPEAN_POWER_SPREADS_111 = "111"
#define ENUM_MARKET_TYPE_ID_TAQA_112 = "112"
#define ENUM_MARKET_TYPE_ID_BELGIAN_ZTP_GAS_SPOT_113 = "113"
#define ENUM_MARKET_TYPE_ID_DUTCH_TTF_GAS_SPOT_114 = "114"
#define ENUM_MARKET_TYPE_ID_DUTCH_TTF_GAS_STORAGE_115 = "115"
#define ENUM_MARKET_TYPE_ID_EUROPEAN_GAS_SPOT_SPREADS_116 = "116"
#define ENUM_MARKET_TYPE_ID_BELGIAN_ZTP_GAS_FUTURES_117 = "117"
#define ENUM_MARKET_TYPE_ID_UK_OCM_GAS_SPOT_118 = "118"
#define ENUM_MARKET_TYPE_ID_BELGIAN_GAS_SPREADS_119 = "119"
#define ENUM_MARKET_TYPE_ID_FINANCIAL_OLEFINS_124 = "124"
#define ENUM_MARKET_TYPE_ID_FINANCIAL_MONOMERS_125 = "125"
#define ENUM_MARKET_TYPE_ID_PLATTS_VARIABLE_OIL_URALS_126 = "126"
#define ENUM_MARKET_TYPE_ID_ENDEX_SPOT_MARKET_INDICES_127 = "127"
#define ENUM_MARKET_TYPE_ID_INTEREST_RATE_FUTURES_131 = "131"
#define ENUM_MARKET_TYPE_ID_SINGAPORE_ENERGY_133 = "133"
#define ENUM_MARKET_TYPE_ID_SINGAPORE_FINANCIALS_134 = "134"
#define ENUM_MARKET_TYPE_ID_SINGAPORE_METALS_135 = "135"
#define ENUM_MARKET_TYPE_ID_ITALIAN_NATURAL_GAS_FUTURES_136 = "136"
#define ENUM_MARKET_TYPE_ID_ITALIAN_POWER_FUTURES_137 = "137"
#define ENUM_MARKET_TYPE_ID_CREDIT_SWAP_DATA_139 = "139"
#define ENUM_MARKET_TYPE_ID_GOLD_FIXING_140 = "140"
#define ENUM_MARKET_TYPE_ID_NORTH_SEA_PARTIALS_141 = "141"
#define ENUM_MARKET_TYPE_ID_EU_FINANCIAL_POWER_SPREADS_142 = "142"
#define ENUM_MARKET_TYPE_ID_EU_FINANCIAL_POWER_FUTURES_143 = "143"
#define ENUM_MARKET_TYPE_ID_OIL_CAD_144 = "144"
#define ENUM_MARKET_TYPE_ID_SILVER_FIXING_147 = "147"
#define ENUM_MARKET_TYPE_ID_UK_SPARK_SPREAD_149 = "149"
#define ENUM_MARKET_TYPE_ID_UK_OCM_PHYSICAL_GAS_SPOT_150 = "150"
#define ENUM_MARKET_TYPE_ID_JAPAN_DOMESTIC_WATERBORNE_152 = "152"
#define ENUM_MARKET_TYPE_ID_DAILY_METALS_154 = "154"
#define ENUM_MARKET_TYPE_ID_BRIX_ENERGIA_FIN_155 = "155"
#define ENUM_MARKET_TYPE_ID_JAPAN_DOMESTIC_RACK_156 = "156"
#define ENUM_MARKET_TYPE_ID_FINANCIAL_US_LNG_157 = "157"
#define ENUM_MARKET_TYPE_ID_ICE_ROTTERDAM_NEWCASTLE_COAL_FUTURES_SPREAD_160 = "160"
#define ENUM_MARKET_TYPE_ID_OIL_AMERICAS_165 = "165"
#define ENUM_MARKET_TYPE_ID_PLATTS_PETROCHEMICAL_167 = "167"
#define ENUM_MARKET_TYPE_ID_PERMIAN_WTI_FUTURES_168 = "168"
#define ENUM_MARKET_TYPE_ID_ENDEX_EQUITY_INDICES_170 = "170"
#define ENUM_MARKET_TYPE_ID_ENDEX_SINGLE_STOCK_OPTIONS_171 = "171"
#define ENUM_MARKET_TYPE_ID_IFUS_ICE_INDICES_172 = "172"
#define ENUM_MARKET_TYPE_ID_PLATTS_ASIA_BUNKER_173 = "173"
#define ENUM_MARKET_TYPE_ID_SOFR_FUTURES_177 = "177"
#define ENUM_MARKET_TYPE_ID_DIGITAL_ASSET_FUTURES_178 = "178"
#define ENUM_MARKET_TYPE_ID_PERMIAN_BRENT_FUTURES_SPREAD_179 = "179"
#define ENUM_MARKET_TYPE_ID_PERMIAN_WTI_FUTURES_SPREAD_180 = "180"
#define ENUM_MARKET_TYPE_ID_LIFFE_STI_RS_200 = "200"
#define ENUM_MARKET_TYPE_ID_LIFFE_BONDS_202 = "202"
#define ENUM_MARKET_TYPE_ID_LIFFE_SWAPNOTES_203 = "203"
#define ENUM_MARKET_TYPE_ID_1205 = "205"
#define ENUM_MARKET_TYPE_ID_METALS_206 = "206"
#define ENUM_MARKET_TYPE_ID_IFUS_EQUITY_INDICES_207 = "207"
#define ENUM_MARKET_TYPE_ID_GCF_REPO_208 = "208"
#define ENUM_MARKET_TYPE_ID_LIFFE_THREE_MONTH_EURO_AND_EONIA_209 = "209"
#define ENUM_MARKET_TYPE_ID_EURODOLLAR_210 = "210"
#define ENUM_MARKET_TYPE_ID_LIFFE_EQUITY_DERIVATIVES_NON_US_BASED_211 = "211"
#define ENUM_MARKET_TYPE_ID_LIFFE_EQUITY_DERIVATIVES_US_BASED_212 = "212"
#define ENUM_MARKET_TYPE_ID_LIFFE_INDEX_OPTIONS_213 = "213"
#define ENUM_MARKET_TYPE_ID_LIFFE_INDEX_FUTURES_US_RESTRICTED_214 = "214"
#define ENUM_MARKET_TYPE_ID_LIFFE_INDEX_FUTURES_NON_US_RESTRICTED_215 = "215"
#define ENUM_MARKET_TYPE_ID_PHYSICAL_GAS_305 = "305"
#define ENUM_MARKET_TYPE_ID_POWER_306 = "306"
#define ENUM_MARKET_TYPE_ID_NGX_PHYSICAL_GAS_314 = "314"
#define ENUM_MARKET_TYPE_ID_NGX_FINANCIAL_POWER_315 = "315"
#define ENUM_MARKET_TYPE_ID_NGX_FINANCIAL_GAS_316 = "316"
#define ENUM_MARKET_TYPE_ID_FINANCIAL_NGL_317 = "317"
#define ENUM_MARKET_TYPE_ID_OLEFINS_POLYMERS_318 = "318"
#define ENUM_MARKET_TYPE_ID_PHYSICAL_NGL_319 = "319"
#define ENUM_MARKET_TYPE_ID_PHYSICAL_OIL_320 = "320"
#define ENUM_MARKET_TYPE_ID_TEST_IPE_600 = "600"
#define ENUM_MARKET_TYPE_ID_TEST_NYBOT_601 = "601"
#define ENUM_MARKET_TYPE_ID_TEST_NDEX_602 = "602"
#define ENUM_MARKET_TYPE_ID_TEST_LIFFEUK_1603 = "603"
#define ENUM_MARKET_TYPE_ID_TEST_LIFFEUK_2604 = "604"

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_MARKET_SNAPSHOT_MESSAGE_C = 'C'
#define ENUM_MESSAGE_TYPE_TRADE_MESSAGE_G = 'G'
#define ENUM_MESSAGE_TYPE_SPOT_MARKET_TRADE_MESSAGE_Y = 'Y'
#define ENUM_MESSAGE_TYPE_INVESTIGATED_TRADE_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_CANCELLED_TRADE_MESSAGE_I = 'I'
#define ENUM_MESSAGE_TYPE_MARKET_STATISTICS_MESSAGE_J = 'J'
#define ENUM_MESSAGE_TYPE_MARKET_STATE_CHANGE_MESSAGE_K = 'K'
#define ENUM_MESSAGE_TYPE_SYSTEM_TEXT_MESSAGE_L = 'L'
#define ENUM_MESSAGE_TYPE_OPEN_INTEREST_MESSAGE_M = 'M'
#define ENUM_MESSAGE_TYPE_OPEN_PRICE_MESSAGE_N = 'N'
#define ENUM_MESSAGE_TYPE_CLOSE_PRICE_MESSAGE_C = 'c'
#define ENUM_MESSAGE_TYPE_SETTLEMENT_PRICE_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_INDEX_PRICES_MESSAGE_Z = 'z'
#define ENUM_MESSAGE_TYPE_END_OF_DAY_MARKET_SUMMARY_MESSAGE_U = 'u'
#define ENUM_MESSAGE_TYPE_MARKET_EVENT_MESSAGE_F = 'f'
#define ENUM_MESSAGE_TYPE_PRE_OPEN_PRICE_INDICATOR_MESSAGE_G = 'g'
#define ENUM_MESSAGE_TYPE_STRIP_INFO_MESSAGE_I = 'i'
#define ENUM_MESSAGE_TYPE_INTERVAL_PRICE_LIMIT_NOTIFICATION_MESSAGE_V = 'V'
#define ENUM_MESSAGE_TYPE_NEW_FUTURES_STRATEGY_DEFINITION_MESSAGE_9 = '9'
#define ENUM_MESSAGE_TYPE_NEW_EXPIRY_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_SPECIAL_FIELD_MESSAGE_B = 'b'
#define ENUM_MESSAGE_TYPE_MARKET_SNAPSHOT_ORDER_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_ADD_OR_MODIFY_ORDER_MESSAGE_E = 'E'
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE_F = 'F'
#define ENUM_MESSAGE_TYPE_MESSAGE_BUNDLE_MARKER_T = 'T'
#define ENUM_MESSAGE_TYPE_FIXING_TRANSITION_MESSAGE_3 = '3'
#define ENUM_MESSAGE_TYPE_FIXING_LOCKDOWN_MESSAGE_4 = '4'
#define ENUM_MESSAGE_TYPE_FIXING_INDICATIVE_PRICE_MESSAGE_MESSAGE_0 = '0'
#define ENUM_MESSAGE_TYPE_TRANSACTION_END_MARKER_FOR_EMPTY_LAST_BUNDLE_MESSAGE_E = 'e'
#define ENUM_MESSAGE_TYPE_MARKET_SNAPSHOT_PRICE_LEVEL_MESSAGE_M = 'm'
#define ENUM_MESSAGE_TYPE_ADD_PRICE_LEVEL_MESSAGE_T = 't'
#define ENUM_MESSAGE_TYPE_CHANGE_PRICE_LEVEL_MESSAGE_S = 's'
#define ENUM_MESSAGE_TYPE_DELETE_PRICE_LEVEL_MESSAGE_R = 'r'
#define ENUM_MESSAGE_TYPE_NEW_OPTIONS_STRATEGY_DEFINITION_MESSAGE_U = 'U'
#define ENUM_MESSAGE_TYPE_NEW_OPTIONS_MARKET_DEFINITION_MESSAGE_L = 'l'
#define ENUM_MESSAGE_TYPE_RFQ_MESSAGE_K = 'k'
#define ENUM_MESSAGE_TYPE_OPTION_OPEN_INTEREST_MESSAGE_V = 'v'
#define ENUM_MESSAGE_TYPE_OPTION_SETTLEMENT_PRICE_MESSAGE_W = 'w'
#define ENUM_MESSAGE_TYPE_OLD_STYLE_OPTIONS_TRADE_AND_MARKET_STATS_MESSAGE_W = 'W'

/*
 * Mifid Regulated Market Values
 */ 
#define ENUM_MIFID_REGULATED_MARKET_YES_Y = 'Y'
#define ENUM_MIFID_REGULATED_MARKET_NO_N = 'N'

/*
 * Off Market Trade Indicator Values
 */ 
#define ENUM_OFF_MARKET_TRADE_INDICATOR_REGULAR = ''
#define ENUM_OFF_MARKET_TRADE_INDICATOR_BLOCK_K = 'K'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_EFS_S = 'S'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_EFP_E = 'E'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_EFP_EFS_O = 'O'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_EOO_Q = 'Q'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_EFM_I = 'I'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_GUARANTEED_CROSS_5 = '5'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_BASIS_5 = '5'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL_C = 'C'
#define ENUM_OPTION_TYPE_PUT_P = 'P'

/*
 * Options Expiration Type Values
 */ 
#define ENUM_OPTIONS_EXPIRATION_TYPE_MONTHLY_M = 'M'
#define ENUM_OPTIONS_EXPIRATION_TYPE_DAILY_D = 'D'

/*
 * Options Style Values
 */ 
#define ENUM_OPTIONS_STYLE_AMERICAN_A = 'A'
#define ENUM_OPTIONS_STYLE_EUROPEAN_E = 'E'
#define ENUM_OPTIONS_STYLE_NONE_0 = '0'
#define ENUM_OPTIONS_STYLE_ASIAN_3 = '3'
#define ENUM_OPTIONS_STYLE_ONE_TIME_4 = '4'

/*
 * Security Sub Type Values
 */ 
#define ENUM_SECURITY_SUB_TYPE_NONE_0 = "0"
#define ENUM_SECURITY_SUB_TYPE_CALL_1 = "1"
#define ENUM_SECURITY_SUB_TYPE_PUT_2 = "2"
#define ENUM_SECURITY_SUB_TYPE_FUTURES_BUTTERFLY_3 = "3"
#define ENUM_SECURITY_SUB_TYPE_CALL_BUTTERFLY_4 = "4"
#define ENUM_SECURITY_SUB_TYPE_PUT_BUTTERFLY_5 = "5"
#define ENUM_SECURITY_SUB_TYPE_CALL_SPREAD_6 = "6"
#define ENUM_SECURITY_SUB_TYPE_PUT_SPREAD_7 = "7"
#define ENUM_SECURITY_SUB_TYPE_DIAGONAL_CALL_SPREAD_9 = "9"
#define ENUM_SECURITY_SUB_TYPE_DIAGONAL_PUT_SPREAD_10 = "10"
#define ENUM_SECURITY_SUB_TYPE_GUT_STRANGLE_11 = "11"
#define ENUM_SECURITY_SUB_TYPE_1X2_CALL_SPREAD_TO_THE_212 = "12"
#define ENUM_SECURITY_SUB_TYPE_1X2_PUT_SPREAD_TO_THE_213 = "13"
#define ENUM_SECURITY_SUB_TYPE_IRON_BUTTERFLY_14 = "14"
#define ENUM_SECURITY_SUB_TYPE_STRANGLE_16 = "16"
#define ENUM_SECURITY_SUB_TYPE_CALL_LADDER_TREE_17 = "17"
#define ENUM_SECURITY_SUB_TYPE_PUT_LADDER_TREE_18 = "18"
#define ENUM_SECURITY_SUB_TYPE_STRADDLE_SPREAD_19 = "19"
#define ENUM_SECURITY_SUB_TYPE_REVERSAL_CONVERSION_TO_THE_CALL_21 = "21"
#define ENUM_SECURITY_SUB_TYPE_REVERSAL_CONVERSION_TO_THE_PUT_21 = "21"
#define ENUM_SECURITY_SUB_TYPE_STRADDLE_22 = "22"
#define ENUM_SECURITY_SUB_TYPE_FUTURES_CONDOR_23 = "23"
#define ENUM_SECURITY_SUB_TYPE_CALL_CONDOR_24 = "24"
#define ENUM_SECURITY_SUB_TYPE_PUT_CONDOR_25 = "25"
#define ENUM_SECURITY_SUB_TYPE_BOX_26 = "26"
#define ENUM_SECURITY_SUB_TYPE_SYNTHETIC_UNDERLYING_33 = "33"
#define ENUM_SECURITY_SUB_TYPE_CALL_SPREAD_VS_PUT_3_WAY_34 = "34"
#define ENUM_SECURITY_SUB_TYPE_PUT_SPREAD_VS_CALL_3_WAY_35 = "35"
#define ENUM_SECURITY_SUB_TYPE_STRADDLE_VS_CALL_3_WAY_36 = "36"
#define ENUM_SECURITY_SUB_TYPE_STRADDLE_VS_PUT_3_WAY_37 = "37"
#define ENUM_SECURITY_SUB_TYPE_CALL_CALENDAR_SPREAD_38 = "38"
#define ENUM_SECURITY_SUB_TYPE_PUT_CALENDAR_SPREAD_39 = "39"
#define ENUM_SECURITY_SUB_TYPE_IRON_CONDOR_40 = "40"
#define ENUM_SECURITY_SUB_TYPE_JELLY_ROLL_41 = "41"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_1X_2_CALL_SPREAD_TO_THE_242 = "42"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_1X_2_PUT_SPREAD_TO_THE_243 = "43"
#define ENUM_SECURITY_SUB_TYPE_CALL_SPREAD_VERSUS_SELL_PUT_HEDGE_44 = "44"
#define ENUM_SECURITY_SUB_TYPE_PUT_SPREAD_VERSUS_SELL_CALL_+_HEDGE_45 = "45"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_CALENDAR_46 = "46"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_CALENDAR_47 = "47"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_LADDER_TREE_48 = "48"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_LADDER_TREE_49 = "49"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_SPREAD_50 = "50"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_SPREAD_51 = "51"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_STRADDLE_53 = "53"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_STRANGLE_54 = "54"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_55 = "55"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_56 = "56"
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_58 = "58"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_STRADDLE_SPREAD_59 = "59"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_CONDOR_60 = "60"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_CONDOR_61 = "61"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_DIAGONAL_CALL_SPREAD_63 = "63"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_DIAGONAL_PUT_SPREAD_64 = "64"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_BUTTERLFY_65 = "65"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_BUTTERLFY_66 = "66"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_GUTS_STRANGLE_67 = "67"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_IRON_CONDOR_68 = "68"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_IRON_BUTTERFLY_69 = "69"
#define ENUM_SECURITY_SUB_TYPE_FENCE_TO_THE_CALL_70 = "70"
#define ENUM_SECURITY_SUB_TYPE_FENCE_TO_THE_PUT_71 = "71"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_FENCE_TO_THE_CALL_72 = "72"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_FENCE_TO_THE_PUT_73 = "73"
#define ENUM_SECURITY_SUB_TYPE_1X2_CALL_SPREAD_TO_THE_174 = "74"
#define ENUM_SECURITY_SUB_TYPE_1X2_PUT_SPREAD_TO_THE_175 = "75"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_1X_2_CALL_SPREAD_TO_THE_176 = "76"
#define ENUM_SECURITY_SUB_TYPE_HEDGED_1X_2_PUT_SPREAD_TO_THE_177 = "77"
#define ENUM_SECURITY_SUB_TYPE_DISCOUNT_SPREADS_88 = "88"
#define ENUM_SECURITY_SUB_TYPE_LOCATION_SPREADS_89 = "89"
#define ENUM_SECURITY_SUB_TYPE_PLATTS_DIFF_SPREAD_90 = "90"
#define ENUM_SECURITY_SUB_TYPE_PLATTS_SPREAD_91 = "91"
#define ENUM_SECURITY_SUB_TYPE_OTC_GAS_OIL_CRACK_92 = "92"
#define ENUM_SECURITY_SUB_TYPE_BALMO_OVER_MONTH_93 = "93"
#define ENUM_SECURITY_SUB_TYPE_RATIO_SPREAD_94 = "94"
#define ENUM_SECURITY_SUB_TYPE_VOLUMETRIC_SPREAD_95 = "95"
#define ENUM_SECURITY_SUB_TYPE_HEAT_RATE_96 = "96"
#define ENUM_SECURITY_SUB_TYPE_CRACK_SPREAD_97 = "97"
#define ENUM_SECURITY_SUB_TYPE_COMBO_SPREAD_98 = "98"
#define ENUM_SECURITY_SUB_TYPE_SPREAD_S99 = "99"
#define ENUM_SECURITY_SUB_TYPE_PACKNO_COLOR_100 = "100"
#define ENUM_SECURITY_SUB_TYPE_PACK_WHITE_101 = "101"
#define ENUM_SECURITY_SUB_TYPE_PACK_RED_102 = "102"
#define ENUM_SECURITY_SUB_TYPE_PACK_GREEN_103 = "103"
#define ENUM_SECURITY_SUB_TYPE_PACK_BLUE_104 = "104"
#define ENUM_SECURITY_SUB_TYPE_PACK_GOLD_105 = "105"
#define ENUM_SECURITY_SUB_TYPE_PACK_PURPLE_106 = "106"
#define ENUM_SECURITY_SUB_TYPE_PACK_ORANGE_107 = "107"
#define ENUM_SECURITY_SUB_TYPE_PACK_PINK_108 = "108"
#define ENUM_SECURITY_SUB_TYPE_PACK_SILVER_109 = "109"
#define ENUM_SECURITY_SUB_TYPE_PACK_COPPER_110 = "110"
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_NO_COLOR_200 = "200"
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_2_YR_201 = "201"
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_3_YR_202 = "202"
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_4_YR_203 = "203"
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_5_YR_204 = "204"
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_6_YR_205 = "205"
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_7_YR_206 = "206"
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_8_YR_207 = "207"
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_9_YR_208 = "208"
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_10_YR_209 = "209"
#define ENUM_SECURITY_SUB_TYPE_BALMO_400 = "400"
#define ENUM_SECURITY_SUB_TYPE_NEXT_DAY_410 = "410"
#define ENUM_SECURITY_SUB_TYPE_CFD_411 = "411"
#define ENUM_SECURITY_SUB_TYPE_WEEKEND_412 = "412"
#define ENUM_SECURITY_SUB_TYPE_SINGLE_DAY_413 = "413"
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_414 = "414"
#define ENUM_SECURITY_SUB_TYPE_HOURLY_415 = "415"
#define ENUM_SECURITY_SUB_TYPE_MONTH_416 = "416"
#define ENUM_SECURITY_SUB_TYPE_BALWEEK_450 = "450"
#define ENUM_SECURITY_SUB_TYPE_BASKET_500 = "500"
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_MONTHLY_550 = "550"
#define ENUM_SECURITY_SUB_TYPE_NEXT_WEEK_600 = "600"
#define ENUM_SECURITY_SUB_TYPE_PERIOD_700 = "700"
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_CFD_711 = "711"
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_7X_8712 = "712"
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_7X_16713 = "713"
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_7X_6714 = "714"
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_OFF_PEAK_X16715 = "715"
#define ENUM_SECURITY_SUB_TYPE_QUARTER_800 = "800"
#define ENUM_SECURITY_SUB_TYPE_YEAR_900 = "900"

/*
 * Settlement Type Values
 */ 
#define ENUM_SETTLEMENT_TYPE_FINANCIAL_0 = '0'
#define ENUM_SETTLEMENT_TYPE_PHYSICAL_1 = '1'

/*
 * Side Values
 */ 
#define ENUM_SIDE_NONE = ''
#define ENUM_SIDE_BID_1 = '1'
#define ENUM_SIDE_OFFER_2 = '2'

/*
 * Start Or End Values
 */ 
#define ENUM_START_OR_END_START_S = 'S'
#define ENUM_START_OR_END_END_E = 'E'

/*
 * Status Values
 */ 
#define ENUM_STATUS_CLOSED_C = 'C'
#define ENUM_STATUS_PREOPEN_P = 'P'
#define ENUM_STATUS_LOCKDOWN_L = 'L'

/*
 * System Priced Leg Type Values
 */ 
#define ENUM_SYSTEM_PRICED_LEG_TYPE_SYSTEM_PRICED_CRACK_SPREAD_LEG_C = 'C'
#define ENUM_SYSTEM_PRICED_LEG_TYPE_SYSTEM_PRICED_LEG_S = 'S'

/*
 * Test Market Indicator Values
 */ 
#define ENUM_TEST_MARKET_INDICATOR_YES_Y = 'Y'
#define ENUM_TEST_MARKET_INDICATOR_NO_N = 'N'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_OPEN_O = 'O'
#define ENUM_TRADING_STATUS_CLOSE_C = 'C'
#define ENUM_TRADING_STATUS_EXPIRED_E = 'E'
#define ENUM_TRADING_STATUS_PRE_OPEN_1 = '1'
#define ENUM_TRADING_STATUS_PRE_CLOSE_2 = '2'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Add Or Modify Order Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t OrderId;
    int16_t OrderSequenceId;
    char Side;
    int64_t Price;
    int32_t Quantity;
    char IsImplied[1];
    char IsRfq[1];
    int64_t OrderEntryDateTime;
    int8_t ExtraFlags;
    int32_t SequenceWithinMillis;
    int64_t ModificationTimestamp;
} AddOrModifyOrderMessageT;

/*
 * Structure: Add Price Level Message
 */ 
typedef struct {
    int32_t MarketId;
    char Side;
    int8_t PriceLevelPosition;
    int64_t Price;
    int32_t Quantity;
    int16_t OrderCount;
    int32_t ImpliedQuantity;
    int16_t ImpliedOrderCount;
    uint64_t Timestamp;
} AddPriceLevelMessageT;

/*
 * Structure: Cancelled Trade Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t TradeId;
    int64_t Price;
    int32_t Quantity;
    char OffMarketTradeIndicator;
    int64_t DateTime;
    char OffMarketTradeType[3];
} CancelledTradeMessageT;

/*
 * Structure: Change Price Level Message
 */ 
typedef struct {
    int32_t MarketId;
    char Side;
    int8_t PriceLevelPosition;
    int64_t Price;
    int32_t Quantity;
    int16_t OrderCount;
    int32_t ImpliedQuantity;
    int16_t ImpliedOrderCount;
    uint64_t Timestamp;
} ChangePriceLevelMessageT;

/*
 * Structure: Close Price Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t ClosePrice;
    int64_t DateTime;
} ClosePriceMessageT;

/*
 * Structure: Delete Order Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t OrderId;
    int64_t DateTime;
    int32_t SequenceWithinMillis;
} DeleteOrderMessageT;

/*
 * Structure: Delete Price Level Message
 */ 
typedef struct {
    int32_t MarketId;
    char Side;
    int8_t PriceLevelPosition;
    uint64_t Timestamp;
} DeletePriceLevelMessageT;

/*
 * Structure: End Of Day Market Summary Message
 */ 
typedef struct {
    int32_t MarketId;
    int32_t Volume;
    int32_t BlockVolume;
    int32_t EfsVolume;
    int32_t EfpVolume;
    int64_t OpeningPrice;
    int64_t High;
    int64_t Low;
    int64_t Vwap;
    int64_t SettlementPriceWithDealPricePrecision;
    int32_t OpenInterest;
    int64_t DateTime;
    int64_t SettlementPrice;
} EndOfDayMarketSummaryMessageT;

/*
 * Structure: Fixing Indicative Price Message Message
 */ 
typedef struct {
    int32_t MarketId;
    char IbaCurrency[3];
    int64_t Price;
    int64_t PriceInGram;
    int8_t NumDecimalsPrice;
    int8_t NumDecimalsPriceInGram;
} FixingIndicativePriceMessageMessageT;

/*
 * Structure: Fixing Lockdown Message
 */ 
typedef struct {
    int32_t MarketId;
    char AuctionDate[10];
    int64_t Time;
    char Description[20];
    int16_t Round;
    int32_t AggBidQty;
    int32_t AggOfferQty;
    int64_t UsdPrice;
    char IsBalanced;
    char IsFinal;
    int64_t GbpPrice;
    int64_t EurPrice;
} FixingLockdownMessageT;

/*
 * Structure: Fixing Transition Message
 */ 
typedef struct {
    int32_t MarketId;
    char Status;
    int64_t AuctionEndTime;
    int32_t ThresholdImbalanceQty;
    int64_t DateTime;
} FixingTransitionMessageT;

/*
 * Structure: Hedge Definition
 */ 
typedef struct {
    uint8_t HedgeBodyLength;
    uint32_t HedgeMarketId;
    char HedgeSecurityType[1];
    char HedgeSide;
    uint64_t HedgePrice;
    char HedgePriceDenominator[1];
    uint16_t HedgeDelta;
    uint16_t HedgeStrategyCode;
} HedgeDefinitionT;

/*
 * Structure: Index Prices Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t Price;
    char ShortName[30];
    int64_t PublishedDateTime;
    char ValuationDate[10];
    char Status;
    int32_t Quantity;
} IndexPricesMessageT;

/*
 * Structure: Interval Price Limit Notification Message
 */ 
typedef struct {
    int32_t MarketId;
    char IplHoldType;
    int64_t NotificationDateTime;
    char IsUp;
    int32_t IplHoldDuration;
    int64_t IplUp;
    int64_t IplDown;
} IntervalPriceLimitNotificationMessageT;

/*
 * Structure: Investigated Trade Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t TradeId;
    int64_t Price;
    int32_t Quantity;
    char FfMarketTradeIndicator[1];
    int64_t DateTime;
    char InvestigationStatus;
    char OffMarketTradeType[3];
} InvestigatedTradeMessageT;

/*
 * Structure: Leg Definition
 */ 
typedef struct {
    uint8_t LegBodyLength;
    uint32_t LegMarketId;
    uint16_t LegRatio;
    char LegSide;
    uint16_t LegStrategyCode;
    uint32_t LegRatioQtyNumerator;
    uint32_t LegRatioQtyDenominator;
    uint32_t LegRatioPriceNumerator;
    uint32_t LegRatioPriceDenominator;
} LegDefinitionT;

/*
 * Structure: Market Event Message
 */ 
typedef struct {
    int32_t MarketId;
    char EventType[1];
    int64_t DateTime;
} MarketEventMessageT;

/*
 * Structure: Market Snapshot Message
 */ 
typedef struct {
    int32_t MarketId;
    int16_t MarketType;
    char TradingStatus;
    int32_t Volume;
    int32_t BlockVolume;
    int32_t EfsVolume;
    int32_t EfpVolume;
    int32_t OpenInterest;
    int64_t OpeningPrice;
    int64_t SettlementPriceWithDealPricePrecision;
    int64_t High;
    int64_t Low;
    int64_t Vwap;
    int32_t NumOfBookEntries;
    int64_t LastTradePrice;
    int32_t LastTradeQuantity;
    int64_t LastTradeDateTime;
    int64_t SettlePriceDateTime;
    int32_t LastMessageSequenceId;
    char Reserved2Bytes[2];
    char OpenInterestDate[10];
    char IsSettlePriceOfficial;
    int64_t SettlementPrice;
    char HasPreviousDaySettlementPrice;
    int64_t PreviousDaySettlementPrice;
} MarketSnapshotMessageT;

/*
 * Structure: Market Snapshot Order Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t OrderId;
    int16_t OrderSequenceId;
    char Side;
    int64_t Price;
    int32_t Quantity;
    char IsImplied[1];
    char IsRfq[1];
    int64_t OrderEntryDateTime;
    int32_t SequenceWithinMillis;
} MarketSnapshotOrderMessageT;

/*
 * Structure: Market Snapshot Price Level Message
 */ 
typedef struct {
    int32_t MarketId;
    char Side;
    int8_t PriceLevelPosition;
    int64_t Price;
    int32_t Quantity;
    int16_t OrderCount;
    int32_t ImpliedQuantity;
    int16_t ImpliedOrderCount;
} MarketSnapshotPriceLevelMessageT;

/*
 * Structure: Market State Change Message
 */ 
typedef struct {
    int32_t MarketId;
    char TradingStatus;
    int64_t DateTime;
} MarketStateChangeMessageT;

/*
 * Structure: Market Statistics Message
 */ 
typedef struct {
    int32_t MarketId;
    int32_t Volume;
    int32_t BlockVolume;
    int32_t EfsVolume;
    int32_t EfpVolume;
    int64_t High;
    int64_t Low;
    int64_t Vwap;
    int64_t DateTime;
} MarketStatisticsMessageT;

/*
 * Structure: Message Bundle Marker
 */ 
typedef struct {
    char StartOrEnd;
    int64_t TradeTransactionId;
    char IsTransactionEnd;
} MessageBundleMarkerT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    char MessageType;
    uint16_t Length;
} MessageHeaderT;

/*
 * Structure: New Expiry Message
 */ 
typedef struct {
    int32_t MarketId;
    int16_t MarketTypeId;
    char OrderPriceDenominator[1];
    int32_t IncrementPrice;
    int32_t IncrementQty;
    int32_t LotSize;
    char MarketDesc[120];
    int16_t MaturityYear;
    int16_t MaturityMonth;
    int16_t MaturityDay;
    char DealPriceDenominator[1];
    int32_t MinQty;
    int32_t UnitQuantity;
    char Currency[20];
    char ClearedAlias[15];
    int64_t MinPrice;
    int64_t MaxPrice;
    int32_t ProductId;
    char ProductName[62];
    int32_t HubId;
    char HubAlias[80];
    int32_t StripId;
    char StripName[39];
    char SettlePriceDenominator[1];
    char MicCode[4];
    char UnitQtyDenominator[1];
    char OffExchangeIncrementQtyDenominator[1];
    int32_t OffExchangeIncrementQty;
    int32_t OffExchangeIncrementPrice;
    int32_t OffExchangeIncrementOptionPrice;
    char ContractSymbol[35];
    char Isin[12];
    char NumDecimalsOptionsPrice[1];
    uint32_t HedgeMarketId;
    char SettlementType;
    char GtAllowed;
    char CrossOrderSupported;
    char UnitOfMeasure[30];
    char MifidRegulatedMarket;
    int16_t ScreenLastTradeYear;
    int16_t ScreenLastTradeMonth;
    int16_t ScreenLastTradeDay;
} NewExpiryMessageT;

/*
 * Structure: New Options Market Definition Message
 */ 
typedef struct {
    int32_t MarketId;
    int32_t UnderlyingMarketId;
    char FuturesContractSymbol[70];
    char TradingStatus;
    char OrderPriceDenominator[1];
    int32_t IncrementQty;
    int32_t LotSize;
    char MarketDesc[120];
    char OptionType;
    int64_t StrikePrice;
    char DealPriceDenominator[1];
    int32_t MinQty;
    char Currency[20];
    char NumDecimalsStrikePrice[1];
    int64_t MinOptionsPrice;
    int64_t MaxOptionsPrice;
    int32_t IncrementPremiumPrice;
    int16_t OptionsExpirationYear;
    int16_t OptionsExpirationMonth;
    int16_t OptionsExpirationDay;
    char OptionsStyle;
    char OptionsExpirationType;
    uint32_t HedgeMarketId;
    char SettlePriceDenominator[1];
    char UnitQtyDenominator[1];
    int64_t TickValue;
    char FlexAllowed[1];
    char SettlementType;
    char IsBlockOnly;
    char GtAllowed;
    char CrossOrderSupported;
    char GuaranteedCrossSupported;
    char UnitOfMeasure[30];
    char MifidRegulatedMarket;
    int16_t ScreenLastTradeYear;
    int16_t ScreenLastTradeMonth;
    int16_t ScreenLastTradeDay;
    char IsTradable;
} NewOptionsMarketDefinitionMessageT;

/*
 * Structure: Old Style Options Trade And Market Stats Message
 */ 
typedef struct {
    int32_t UnderlyingMarketId;
    int64_t TradeId;
    int64_t Price;
    int32_t Quantity;
    char OffMarketTradeIndicator;
    int64_t TransactDateTime;
    char OptionType;
    int64_t StrikePrice;
    char EventCode;
    int32_t TotalVolume;
    int32_t BlockVolume;
    int32_t EfsVolume;
    int32_t EfpVolume;
    int64_t High;
    int64_t Low;
    int64_t Vwap;
} OldStyleOptionsTradeAndMarketStatsMessageT;

/*
 * Structure: Open Interest Message
 */ 
typedef struct {
    int32_t MarketId;
    int32_t OpenInterest;
    int32_t OpenInterestChange;
    int64_t DateTime;
    char OpenInterestDate[10];
} OpenInterestMessageT;

/*
 * Structure: Open Price Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t OpenPrice;
    int64_t DateTime;
} OpenPriceMessageT;

/*
 * Structure: Option Open Interest Message
 */ 
typedef struct {
    int32_t MarketId;
    int32_t OpenInterest;
    int64_t DateTime;
    char OpenInterestDate[10];
} OptionOpenInterestMessageT;

/*
 * Structure: Option Settlement Price Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t SettlementPriceWithDealPricePrecision;
    int64_t DateTime;
    char IsOfficial;
    int64_t ValuationDateTime;
    int64_t Volatility;
    int64_t SettlementPrice;
    int64_t Delta;
} OptionSettlementPriceMessageT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint16_t Session;
    uint32_t Sequence;
    uint16_t Count;
    uint64_t Timestamp;
} PacketHeaderT;

/*
 * Structure: Pre Open Price Indicator Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t PreOpenPrice;
    int64_t DateTime;
    char HasPreOpenVolume[1];
    int32_t PreOpenVolume;
} PreOpenPriceIndicatorMessageT;

/*
 * Structure: Rfq Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t MessageTimestamp;
    int64_t RfqSystemId;
    int16_t MarketTypeId;
    int32_t UnderlyingMarketId;
    int32_t Quantity;
    char Side;
} RfqMessageT;

/*
 * Structure: Settlement Price Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t SettlementPriceWithDealPricePrecision;
    int64_t DateTime;
    char IsOfficial;
    int64_t ValuationDateTime;
    int64_t SettlementPrice;
} SettlementPriceMessageT;

/*
 * Structure: Special Field
 */ 
typedef struct {
    uint8_t SpecialFieldId;
    uint16_t SpecialFieldLength;
} SpecialFieldT;

/*
 * Structure: Special Field Message
 */ 
typedef struct {
    int8_t NumberOfSpecialFields;
} SpecialFieldMessageT;

/*
 * Structure: Spot Market Trade Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t TradeId;
    int64_t Price;
    int32_t Quantity;
    int64_t TransactDateTime;
    int8_t ExtraFlags;
    int64_t DeliveryBeginDateTime;
    int64_t DeliveryEndDateTime;
    char IsSystemPricedLeg;
} SpotMarketTradeMessageT;

/*
 * Structure: Strategy Leg Definition
 */ 
typedef struct {
    uint8_t LegBodyLength;
    uint32_t LegMarketId;
    uint32_t LegUnderlyingMarketId;
    uint16_t LegRatio;
    char LegSide;
    uint16_t LegStrategyCode;
    uint32_t LegRatioQtyNumerator;
    uint32_t LegRatioQtyDenominator;
    uint32_t LegRatioPriceNumerator;
    uint32_t LegRatioPriceDenominator;
} StrategyLegDefinitionT;

/*
 * Structure: Strip Info Message
 */ 
typedef struct {
    int16_t OldStripId;
    char StripType[20];
    int16_t BeginYear;
    int16_t BeginMonth;
    int16_t BeginDay;
    int16_t EndYear;
    int16_t EndMonth;
    int16_t EndDay;
    char StripInfo[50];
    int32_t StripId;
} StripInfoMessageT;

/*
 * Structure: System Text Message
 */ 
typedef struct {
    char TextMessage[200];
    int64_t DateTime;
    char TextMessageExtraFld[800];
} SystemTextMessageT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t TradeId;
    char IsSystemPricedLeg;
    int64_t Price;
    int32_t Quantity;
    char OffMarketTradeIndicator;
    int64_t TransactDateTime;
    char SystemPricedLegType;
    char IsImpliedSpreadAtMarketOpen[1];
    char IsAdjustedTrade[1];
    char AggressorSide;
    int8_t ExtraFlags;
    char OffMarketTradeType[3];
    int32_t SequenceWithinMillis;
} TradeMessageT;

/*
 * Structure: Transaction End Marker For Empty Last Bundle Message
 */ 
typedef struct {
    int64_t TradeTransactionId;
} TransactionEndMarkerForEmptyLastBundleMessageT;

