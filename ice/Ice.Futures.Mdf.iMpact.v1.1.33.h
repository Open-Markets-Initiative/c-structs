/*******************************************************************************
 * C Structs For Ice Futures iMpact Mdf 1.1.33 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_NONE ''
#define ENUM_AGGRESSOR_SIDE_BUY '1'
#define ENUM_AGGRESSOR_SIDE_SELL '2'

/*
 * Allow Options Values
 */ 
#define ENUM_ALLOW_OPTIONS_YES 'Y'
#define ENUM_ALLOW_OPTIONS_NO 'N'

/*
 * Allows Implied Values
 */ 
#define ENUM_ALLOWS_IMPLIED_YES 'Y'
#define ENUM_ALLOWS_IMPLIED_NO 'N'

/*
 * Cross Order Supported Values
 */ 
#define ENUM_CROSS_ORDER_SUPPORTED_YES 'Y'
#define ENUM_CROSS_ORDER_SUPPORTED_NO 'N'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_NORMAL_TRADE '0'
#define ENUM_EVENT_CODE_CANCELLED_TRADE '1'
#define ENUM_EVENT_CODE_ADJUSTED_TRADE '2'

/*
 * Exchange Silo Values
 */ 
#define ENUM_EXCHANGE_SILO_ICE '0'
#define ENUM_EXCHANGE_SILO_ENDEX '1'
#define ENUM_EXCHANGE_SILO_LIFFE '2'

/*
 * Gt Allowed Values
 */ 
#define ENUM_GT_ALLOWED_YES 'Y'
#define ENUM_GT_ALLOWED_NO 'N'

/*
 * Guaranteed Cross Supported Values
 */ 
#define ENUM_GUARANTEED_CROSS_SUPPORTED_YES 'Y'
#define ENUM_GUARANTEED_CROSS_SUPPORTED_NO 'N'

/*
 * Has Previous Day Settlement Price Values
 */ 
#define ENUM_HAS_PREVIOUS_DAY_SETTLEMENT_PRICE_NO 'N'
#define ENUM_HAS_PREVIOUS_DAY_SETTLEMENT_PRICE_YES 'Y'

/*
 * Hedge Only Values
 */ 
#define ENUM_HEDGE_ONLY_YES 'Y'
#define ENUM_HEDGE_ONLY_NO 'N'

/*
 * Hedge Side Values
 */ 
#define ENUM_HEDGE_SIDE_NONE ''
#define ENUM_HEDGE_SIDE_BID '1'
#define ENUM_HEDGE_SIDE_OFFER '2'

/*
 * Investigation Status Values
 */ 
#define ENUM_INVESTIGATION_STATUS_UNDER_INVESTIGATION '1'
#define ENUM_INVESTIGATION_STATUS_INVESTIGATION_COMPLETED '2'

/*
 * Ipl Hold Type Values
 */ 
#define ENUM_IPL_HOLD_TYPE_IPL_HOLD_START 'S'
#define ENUM_IPL_HOLD_TYPE_IPL_HOLD_END 'E'

/*
 * Is Balanced Values
 */ 
#define ENUM_IS_BALANCED_YES 'Y'
#define ENUM_IS_BALANCED_NO 'N'

/*
 * Is Block Only Values
 */ 
#define ENUM_IS_BLOCK_ONLY_YES 'Y'
#define ENUM_IS_BLOCK_ONLY_NO 'N'

/*
 * Is Final Values
 */ 
#define ENUM_IS_FINAL_YES 'Y'
#define ENUM_IS_FINAL_NO 'N'

/*
 * Is Official Values
 */ 
#define ENUM_IS_OFFICIAL_YES 'Y'
#define ENUM_IS_OFFICIAL_NO 'N'

/*
 * Is Settle Price Official Values
 */ 
#define ENUM_IS_SETTLE_PRICE_OFFICIAL_YES 'Y'
#define ENUM_IS_SETTLE_PRICE_OFFICIAL_NO 'N'

/*
 * Is System Priced Leg Values
 */ 
#define ENUM_IS_SYSTEM_PRICED_LEG_YES 'Y'
#define ENUM_IS_SYSTEM_PRICED_LEG_NO 'N'

/*
 * Is Tradable Values
 */ 
#define ENUM_IS_TRADABLE_YES 'Y'
#define ENUM_IS_TRADABLE_NO 'N'

/*
 * Is Up Values
 */ 
#define ENUM_IS_UP_IPL_UPPER_BOUND_VIOLATION 'Y'
#define ENUM_IS_UP_IPL_LOWER_BOUND_VIOLATION 'N'
#define ENUM_IS_UP_FINAL 'F'
#define ENUM_IS_UP_NON_ENDEX_SPOT_MARKET ''

/*
 * Leg Deal Suppressed Values
 */ 
#define ENUM_LEG_DEAL_SUPPRESSED_YES 'Y'
#define ENUM_LEG_DEAL_SUPPRESSED_NO 'N'

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_NONE ''
#define ENUM_LEG_SIDE_BID '1'
#define ENUM_LEG_SIDE_OFFER '2'

/*
 * Market Type Id Values
 */ 
#define ENUM_MARKET_TYPE_ID_FINANCIAL_GAS 0
#define ENUM_MARKET_TYPE_ID_FINANCIAL_POWER 1
#define ENUM_MARKET_TYPE_ID_OIL 2
#define ENUM_MARKET_TYPE_ID_IPE_NATURAL_GAS_FUTURES 3
#define ENUM_MARKET_TYPE_ID_IPE_GAS_OIL_FUTURES 4
#define ENUM_MARKET_TYPE_ID_IPE_BRENT_FUTURES 5
#define ENUM_MARKET_TYPE_ID_IPE_UK_ELECTRICITY_FUTURES_PEAK 7
#define ENUM_MARKET_TYPE_ID_IPE_UK_ELECTRICITY_FUTURES_BASE 8
#define ENUM_MARKET_TYPE_ID_ICE_WTI_CRUDE_FUTURES 9
#define ENUM_MARKET_TYPE_ID_GC_NEWCASTLE_COAL_FUTURES 10
#define ENUM_MARKET_TYPE_ID_ICE_BRENT_WTI_FUTURES_SPREAD 11
#define ENUM_MARKET_TYPE_ID_IPEECX_EUROPEAN_EMISSIONS 12
#define ENUM_MARKET_TYPE_ID_ICE_HEATING_OIL_FUTURES 13
#define ENUM_MARKET_TYPE_ID_ICE_HEATING_OIL_WTI_FUTURES_CRACK 14
#define ENUM_MARKET_TYPE_ID_ICE_NYH_RBOB_GASOLINE_FUTURES 15
#define ENUM_MARKET_TYPE_ID_ICE_NYH_RBOB_GASOLINE_WTI_FUTURES_CRACK 16
#define ENUM_MARKET_TYPE_ID_ICE_ROTTERDAM_COAL_FUTURES 17
#define ENUM_MARKET_TYPE_ID_ICE_RICHARDS_BAY_COAL_FUTURES 18
#define ENUM_MARKET_TYPE_ID_ICE_ROTTERDAM_RICHARDS_BAY_COAL_FUTURES_SPREAD 19
#define ENUM_MARKET_TYPE_ID_COCOA 20
#define ENUM_MARKET_TYPE_ID_COFFEE_C 21
#define ENUM_MARKET_TYPE_ID_COTTON_NO_2 22
#define ENUM_MARKET_TYPE_ID_FCOJ_A 23
#define ENUM_MARKET_TYPE_ID_SUGAR_NO_11 24
#define ENUM_MARKET_TYPE_ID_HEAT_RATE_SPREAD 25
#define ENUM_MARKET_TYPE_ID_US_DOLLAR_INDEX 26
#define ENUM_MARKET_TYPE_ID_CANADIAN_OILSEEDS 36
#define ENUM_MARKET_TYPE_ID_ECX_CER_FUTURES 38
#define ENUM_MARKET_TYPE_ID_FOREIGN_EXCHANGE 39
#define ENUM_MARKET_TYPE_ID_FINANCIAL_INDEX_DATA 40
#define ENUM_MARKET_TYPE_ID_SUGAR_NO_16 41
#define ENUM_MARKET_TYPE_ID_ECX_EUACER_FUTURES_SPREAD 42
#define ENUM_MARKET_TYPE_ID_HENRY_HUB 44
#define ENUM_MARKET_TYPE_ID_DUTCH_TTF_GAS_FUTURES 48
#define ENUM_MARKET_TYPE_ID_GERMAN_NATURAL_GAS_FUTURES 50
#define ENUM_MARKET_TYPE_ID_EUROPEAN_GAS_SPREADS 51
#define ENUM_MARKET_TYPE_ID_CANADIAN_FINANCIAL_GAS 53
#define ENUM_MARKET_TYPE_ID_NGX_CANADIAN_PHYSICAL_CRUDE 54
#define ENUM_MARKET_TYPE_ID_US_COAL_FUTURES 55
#define ENUM_MARKET_TYPE_ID_FOB_INDO_SUBBIT_COAL_FUTURES 57
#define ENUM_MARKET_TYPE_ID_HEATING_OIL_BRENT_FUTURES_CRACK 58
#define ENUM_MARKET_TYPE_ID_NYH_RBOB_GASOLINE_BRENT_FUTURES_CRACK 59
#define ENUM_MARKET_TYPE_ID_WET_FREIGHT 60
#define ENUM_MARKET_TYPE_ID_DRY_FREIGHT 61
#define ENUM_MARKET_TYPE_ID_FERROUS_METALS 62
#define ENUM_MARKET_TYPE_ID_PLATTS_VARIABLE_OIL 63
#define ENUM_MARKET_TYPE_ID_NYH_RBOB_GASOLINE_HEATING_OIL_SPREAD 66
#define ENUM_MARKET_TYPE_ID_PHYSICAL_ENVIRONMENTAL 69
#define ENUM_MARKET_TYPE_ID_HEATING_OIL_LS_GASOIL_FUTURES_SPREAD 70
#define ENUM_MARKET_TYPE_ID_LS_GASOIL_BRENT_FUTURES_CRACK 71
#define ENUM_MARKET_TYPE_ID_NYH_RBOB_GASOLINE_LS_GASOIL_FUTURES_SPREAD 72
#define ENUM_MARKET_TYPE_ID_ECX_EUAA_FUTURES 84
#define ENUM_MARKET_TYPE_ID_ECX_CEREUAA_FUTURES_SPREAD 85
#define ENUM_MARKET_TYPE_ID_ECX_EUAAEUA_FUTURES_SPREAD 86
#define ENUM_MARKET_TYPE_ID_SOYBEAN 89
#define ENUM_MARKET_TYPE_ID_ECX_EUA_EIB_AUCTION 92
#define ENUM_MARKET_TYPE_ID_FINANCIAL_LNG 93
#define ENUM_MARKET_TYPE_ID_EUA_UK_AUCTION 95
#define ENUM_MARKET_TYPE_ID_EUAA_UK_AUCTION 96
#define ENUM_MARKET_TYPE_ID_CFR_SOUTH_CHINA_COAL_FUTURES 97
#define ENUM_MARKET_TYPE_ID_BELGIAN_POWER_FUTURES 98
#define ENUM_MARKET_TYPE_ID_DUTCH_POWER_FUTURES 99
#define ENUM_MARKET_TYPE_ID_GC_NEWCASTLE_FOB_INDO_SUBBIT_COAL_FUTURES_SPREAD 100
#define ENUM_MARKET_TYPE_ID_RICHARDS_BAYG_C_NEWCASTLE_COAL_FUTURES_SPREAD 101
#define ENUM_MARKET_TYPE_ID_FCOJ_A_MINI 102
#define ENUM_MARKET_TYPE_ID_CIF_US 104
#define ENUM_MARKET_TYPE_ID_D6_RIN 108
#define ENUM_MARKET_TYPE_ID_EUROPEAN_POWER_SPREADS 111
#define ENUM_MARKET_TYPE_ID_TAQA 112
#define ENUM_MARKET_TYPE_ID_BELGIAN_ZTP_GAS_SPOT 113
#define ENUM_MARKET_TYPE_ID_DUTCH_TTF_GAS_SPOT 114
#define ENUM_MARKET_TYPE_ID_DUTCH_TTF_GAS_STORAGE 115
#define ENUM_MARKET_TYPE_ID_EUROPEAN_GAS_SPOT_SPREADS 116
#define ENUM_MARKET_TYPE_ID_BELGIAN_ZTP_GAS_FUTURES 117
#define ENUM_MARKET_TYPE_ID_UK_OCM_GAS_SPOT 118
#define ENUM_MARKET_TYPE_ID_BELGIAN_GAS_SPREADS 119
#define ENUM_MARKET_TYPE_ID_FINANCIAL_OLEFINS 124
#define ENUM_MARKET_TYPE_ID_FINANCIAL_MONOMERS 125
#define ENUM_MARKET_TYPE_ID_PLATTS_VARIABLE_OIL_URALS 126
#define ENUM_MARKET_TYPE_ID_ENDEX_SPOT_MARKET_INDICES 127
#define ENUM_MARKET_TYPE_ID_INTEREST_RATE_FUTURES 131
#define ENUM_MARKET_TYPE_ID_SINGAPORE_ENERGY 133
#define ENUM_MARKET_TYPE_ID_SINGAPORE_FINANCIALS 134
#define ENUM_MARKET_TYPE_ID_SINGAPORE_METALS 135
#define ENUM_MARKET_TYPE_ID_ITALIAN_NATURAL_GAS_FUTURES 136
#define ENUM_MARKET_TYPE_ID_ITALIAN_POWER_FUTURES 137
#define ENUM_MARKET_TYPE_ID_CREDIT_SWAP_DATA 139
#define ENUM_MARKET_TYPE_ID_GOLD_FIXING 140
#define ENUM_MARKET_TYPE_ID_NORTH_SEA_PARTIALS 141
#define ENUM_MARKET_TYPE_ID_EU_FINANCIAL_POWER_SPREADS 142
#define ENUM_MARKET_TYPE_ID_EU_FINANCIAL_POWER_FUTURES 143
#define ENUM_MARKET_TYPE_ID_OIL_CAD 144
#define ENUM_MARKET_TYPE_ID_SILVER_FIXING 147
#define ENUM_MARKET_TYPE_ID_UK_SPARK_SPREAD 149
#define ENUM_MARKET_TYPE_ID_UK_OCM_PHYSICAL_GAS_SPOT 150
#define ENUM_MARKET_TYPE_ID_JAPAN_DOMESTIC_WATERBORNE 152
#define ENUM_MARKET_TYPE_ID_DAILY_METALS 154
#define ENUM_MARKET_TYPE_ID_BRIX_ENERGIA_FIN 155
#define ENUM_MARKET_TYPE_ID_JAPAN_DOMESTIC_RACK 156
#define ENUM_MARKET_TYPE_ID_FINANCIAL_US_LNG 157
#define ENUM_MARKET_TYPE_ID_ICE_ROTTERDAM_NEWCASTLE_COAL_FUTURES_SPREAD 160
#define ENUM_MARKET_TYPE_ID_OIL_AMERICAS 165
#define ENUM_MARKET_TYPE_ID_PLATTS_PETROCHEMICAL 167
#define ENUM_MARKET_TYPE_ID_PERMIAN_WTI_FUTURES 168
#define ENUM_MARKET_TYPE_ID_ENDEX_EQUITY_INDICES 170
#define ENUM_MARKET_TYPE_ID_ENDEX_SINGLE_STOCK_OPTIONS 171
#define ENUM_MARKET_TYPE_ID_IFUS_ICE_INDICES 172
#define ENUM_MARKET_TYPE_ID_PLATTS_ASIA_BUNKER 173
#define ENUM_MARKET_TYPE_ID_SOFR_FUTURES 177
#define ENUM_MARKET_TYPE_ID_DIGITAL_ASSET_FUTURES 178
#define ENUM_MARKET_TYPE_ID_PERMIAN_BRENT_FUTURES_SPREAD 179
#define ENUM_MARKET_TYPE_ID_PERMIAN_WTI_FUTURES_SPREAD 180
#define ENUM_MARKET_TYPE_ID_LIFFE_STI_RS 200
#define ENUM_MARKET_TYPE_ID_LIFFE_BONDS 202
#define ENUM_MARKET_TYPE_ID_LIFFE_SWAPNOTES 203
#define ENUM_MARKET_TYPE_ID_1 205
#define ENUM_MARKET_TYPE_ID_METALS 206
#define ENUM_MARKET_TYPE_ID_IFUS_EQUITY_INDICES 207
#define ENUM_MARKET_TYPE_ID_GCF_REPO 208
#define ENUM_MARKET_TYPE_ID_LIFFE_THREE_MONTH_EURO_AND_EONIA 209
#define ENUM_MARKET_TYPE_ID_EURODOLLAR 210
#define ENUM_MARKET_TYPE_ID_LIFFE_EQUITY_DERIVATIVES_NON_US_BASED 211
#define ENUM_MARKET_TYPE_ID_LIFFE_EQUITY_DERIVATIVES_US_BASED 212
#define ENUM_MARKET_TYPE_ID_LIFFE_INDEX_OPTIONS 213
#define ENUM_MARKET_TYPE_ID_LIFFE_INDEX_FUTURES_US_RESTRICTED 214
#define ENUM_MARKET_TYPE_ID_LIFFE_INDEX_FUTURES_NON_US_RESTRICTED 215
#define ENUM_MARKET_TYPE_ID_PHYSICAL_GAS 305
#define ENUM_MARKET_TYPE_ID_POWER 306
#define ENUM_MARKET_TYPE_ID_NGX_PHYSICAL_GAS 314
#define ENUM_MARKET_TYPE_ID_NGX_FINANCIAL_POWER 315
#define ENUM_MARKET_TYPE_ID_NGX_FINANCIAL_GAS 316
#define ENUM_MARKET_TYPE_ID_FINANCIAL_NGL 317
#define ENUM_MARKET_TYPE_ID_OLEFINS_POLYMERS 318
#define ENUM_MARKET_TYPE_ID_PHYSICAL_NGL 319
#define ENUM_MARKET_TYPE_ID_PHYSICAL_OIL 320
#define ENUM_MARKET_TYPE_ID_TEST_IPE 600
#define ENUM_MARKET_TYPE_ID_TEST_NYBOT 601
#define ENUM_MARKET_TYPE_ID_TEST_NDEX 602
#define ENUM_MARKET_TYPE_ID_TEST_LIFFEUK_1 603
#define ENUM_MARKET_TYPE_ID_TEST_LIFFEUK_2 604

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_MARKET_SNAPSHOT_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_TRADE_MESSAGE 'G'
#define ENUM_MESSAGE_TYPE_SPOT_MARKET_TRADE_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_INVESTIGATED_TRADE_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_CANCELLED_TRADE_MESSAGE 'I'
#define ENUM_MESSAGE_TYPE_MARKET_STATISTICS_MESSAGE 'J'
#define ENUM_MESSAGE_TYPE_MARKET_STATE_CHANGE_MESSAGE 'K'
#define ENUM_MESSAGE_TYPE_SYSTEM_TEXT_MESSAGE 'L'
#define ENUM_MESSAGE_TYPE_OPEN_INTEREST_MESSAGE 'M'
#define ENUM_MESSAGE_TYPE_OPEN_PRICE_MESSAGE 'N'
#define ENUM_MESSAGE_TYPE_CLOSE_PRICE_MESSAGE 'c'
#define ENUM_MESSAGE_TYPE_SETTLEMENT_PRICE_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_INDEX_PRICES_MESSAGE 'z'
#define ENUM_MESSAGE_TYPE_END_OF_DAY_MARKET_SUMMARY_MESSAGE 'u'
#define ENUM_MESSAGE_TYPE_MARKET_EVENT_MESSAGE 'f'
#define ENUM_MESSAGE_TYPE_PRE_OPEN_PRICE_INDICATOR_MESSAGE 'g'
#define ENUM_MESSAGE_TYPE_STRIP_INFO_MESSAGE 'i'
#define ENUM_MESSAGE_TYPE_INTERVAL_PRICE_LIMIT_NOTIFICATION_MESSAGE 'V'
#define ENUM_MESSAGE_TYPE_NEW_FUTURES_STRATEGY_DEFINITION_MESSAGE '9'
#define ENUM_MESSAGE_TYPE_NEW_EXPIRY_MESSAGE 'R'
#define ENUM_MESSAGE_TYPE_SPECIAL_FIELD_MESSAGE 'b'
#define ENUM_MESSAGE_TYPE_MARKET_SNAPSHOT_ORDER_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_ADD_OR_MODIFY_ORDER_MESSAGE 'E'
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE 'F'
#define ENUM_MESSAGE_TYPE_MESSAGE_BUNDLE_MARKER 'T'
#define ENUM_MESSAGE_TYPE_FIXING_TRANSITION_MESSAGE '3'
#define ENUM_MESSAGE_TYPE_FIXING_LOCKDOWN_MESSAGE '4'
#define ENUM_MESSAGE_TYPE_FIXING_INDICATIVE_PRICE_MESSAGE_MESSAGE '0'
#define ENUM_MESSAGE_TYPE_MARKET_SNAPSHOT_PRICE_LEVEL_MESSAGE 'm'
#define ENUM_MESSAGE_TYPE_ADD_PRICE_LEVEL_MESSAGE 't'
#define ENUM_MESSAGE_TYPE_CHANGE_PRICE_LEVEL_MESSAGE 's'
#define ENUM_MESSAGE_TYPE_DELETE_PRICE_LEVEL_MESSAGE 'r'
#define ENUM_MESSAGE_TYPE_NEW_OPTIONS_STRATEGY_DEFINITION_MESSAGE 'U'
#define ENUM_MESSAGE_TYPE_NEW_OPTIONS_MARKET_DEFINITION_MESSAGE 'l'
#define ENUM_MESSAGE_TYPE_RFQ_MESSAGE 'k'
#define ENUM_MESSAGE_TYPE_OPTION_OPEN_INTEREST_MESSAGE 'v'
#define ENUM_MESSAGE_TYPE_OPTION_SETTLEMENT_PRICE_MESSAGE 'w'
#define ENUM_MESSAGE_TYPE_OLD_STYLE_OPTIONS_TRADE_AND_MARKET_STATS_MESSAGE 'W'

/*
 * Mifid Regulated Market Values
 */ 
#define ENUM_MIFID_REGULATED_MARKET_YES 'Y'
#define ENUM_MIFID_REGULATED_MARKET_NO 'N'

/*
 * Off Market Trade Indicator Values
 */ 
#define ENUM_OFF_MARKET_TRADE_INDICATOR_REGULAR ''
#define ENUM_OFF_MARKET_TRADE_INDICATOR_BLOCK 'K'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_EFS 'S'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_EFP 'E'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_EFP_EFS 'O'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_EOO 'Q'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_EFM 'I'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_GUARANTEED_CROSS '5'
#define ENUM_OFF_MARKET_TRADE_INDICATOR_BASIS '5'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL 'C'
#define ENUM_OPTION_TYPE_PUT 'P'

/*
 * Options Expiration Type Values
 */ 
#define ENUM_OPTIONS_EXPIRATION_TYPE_MONTHLY 'M'
#define ENUM_OPTIONS_EXPIRATION_TYPE_DAILY 'D'

/*
 * Options Style Values
 */ 
#define ENUM_OPTIONS_STYLE_AMERICAN 'A'
#define ENUM_OPTIONS_STYLE_EUROPEAN 'E'
#define ENUM_OPTIONS_STYLE_NONE '0'
#define ENUM_OPTIONS_STYLE_ASIAN '3'
#define ENUM_OPTIONS_STYLE_ONE_TIME '4'

/*
 * Security Sub Type Values
 */ 
#define ENUM_SECURITY_SUB_TYPE_NONE 0
#define ENUM_SECURITY_SUB_TYPE_CALL 1
#define ENUM_SECURITY_SUB_TYPE_PUT 2
#define ENUM_SECURITY_SUB_TYPE_FUTURES_BUTTERFLY 3
#define ENUM_SECURITY_SUB_TYPE_CALL_BUTTERFLY 4
#define ENUM_SECURITY_SUB_TYPE_PUT_BUTTERFLY 5
#define ENUM_SECURITY_SUB_TYPE_CALL_SPREAD 6
#define ENUM_SECURITY_SUB_TYPE_PUT_SPREAD 7
#define ENUM_SECURITY_SUB_TYPE_DIAGONAL_CALL_SPREAD 9
#define ENUM_SECURITY_SUB_TYPE_DIAGONAL_PUT_SPREAD 10
#define ENUM_SECURITY_SUB_TYPE_GUT_STRANGLE 11
#define ENUM_SECURITY_SUB_TYPE_1X2_CALL_SPREAD_TO_THE_2 12
#define ENUM_SECURITY_SUB_TYPE_1X2_PUT_SPREAD_TO_THE_2 13
#define ENUM_SECURITY_SUB_TYPE_IRON_BUTTERFLY 14
#define ENUM_SECURITY_SUB_TYPE_STRANGLE 16
#define ENUM_SECURITY_SUB_TYPE_CALL_LADDER_TREE 17
#define ENUM_SECURITY_SUB_TYPE_PUT_LADDER_TREE 18
#define ENUM_SECURITY_SUB_TYPE_STRADDLE_SPREAD 19
#define ENUM_SECURITY_SUB_TYPE_REVERSAL_CONVERSION_TO_THE_CALL 21
#define ENUM_SECURITY_SUB_TYPE_REVERSAL_CONVERSION_TO_THE_PUT 21
#define ENUM_SECURITY_SUB_TYPE_STRADDLE 22
#define ENUM_SECURITY_SUB_TYPE_FUTURES_CONDOR 23
#define ENUM_SECURITY_SUB_TYPE_CALL_CONDOR 24
#define ENUM_SECURITY_SUB_TYPE_PUT_CONDOR 25
#define ENUM_SECURITY_SUB_TYPE_BOX 26
#define ENUM_SECURITY_SUB_TYPE_SYNTHETIC_UNDERLYING 33
#define ENUM_SECURITY_SUB_TYPE_CALL_SPREAD_VS_PUT_3_WAY 34
#define ENUM_SECURITY_SUB_TYPE_PUT_SPREAD_VS_CALL_3_WAY 35
#define ENUM_SECURITY_SUB_TYPE_STRADDLE_VS_CALL_3_WAY 36
#define ENUM_SECURITY_SUB_TYPE_STRADDLE_VS_PUT_3_WAY 37
#define ENUM_SECURITY_SUB_TYPE_CALL_CALENDAR_SPREAD 38
#define ENUM_SECURITY_SUB_TYPE_PUT_CALENDAR_SPREAD 39
#define ENUM_SECURITY_SUB_TYPE_IRON_CONDOR 40
#define ENUM_SECURITY_SUB_TYPE_JELLY_ROLL 41
#define ENUM_SECURITY_SUB_TYPE_HEDGED_1X2_CALL_SPREAD_TO_THE_2 42
#define ENUM_SECURITY_SUB_TYPE_HEDGED_1X2_PUT_SPREAD_TO_THE_2 43
#define ENUM_SECURITY_SUB_TYPE_CALL_SPREAD_VERSUS_SELL_PUT_HEDGE 44
#define ENUM_SECURITY_SUB_TYPE_PUT_SPREAD_VERSUS_SELL_CALL_HEDGE 45
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_CALENDAR 46
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_CALENDAR 47
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_LADDER_TREE 48
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_LADDER_TREE 49
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_SPREAD 50
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_SPREAD 51
#define ENUM_SECURITY_SUB_TYPE_HEDGED_STRADDLE 53
#define ENUM_SECURITY_SUB_TYPE_HEDGED_STRANGLE 54
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL 55
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT 56
#define ENUM_SECURITY_SUB_TYPE_CUSTOM 58
#define ENUM_SECURITY_SUB_TYPE_HEDGED_STRADDLE_SPREAD 59
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_CONDOR 60
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_CONDOR 61
#define ENUM_SECURITY_SUB_TYPE_HEDGED_DIAGONAL_CALL_SPREAD 63
#define ENUM_SECURITY_SUB_TYPE_HEDGED_DIAGONAL_PUT_SPREAD 64
#define ENUM_SECURITY_SUB_TYPE_HEDGED_CALL_BUTTERLFY 65
#define ENUM_SECURITY_SUB_TYPE_HEDGED_PUT_BUTTERLFY 66
#define ENUM_SECURITY_SUB_TYPE_HEDGED_GUTS_STRANGLE 67
#define ENUM_SECURITY_SUB_TYPE_HEDGED_IRON_CONDOR 68
#define ENUM_SECURITY_SUB_TYPE_HEDGED_IRON_BUTTERFLY 69
#define ENUM_SECURITY_SUB_TYPE_FENCE_TO_THE_CALL 70
#define ENUM_SECURITY_SUB_TYPE_FENCE_TO_THE_PUT 71
#define ENUM_SECURITY_SUB_TYPE_HEDGED_FENCE_TO_THE_CALL 72
#define ENUM_SECURITY_SUB_TYPE_HEDGED_FENCE_TO_THE_PUT 73
#define ENUM_SECURITY_SUB_TYPE_1X2_CALL_SPREAD_TO_THE_1 74
#define ENUM_SECURITY_SUB_TYPE_1X2_PUT_SPREAD_TO_THE_1 75
#define ENUM_SECURITY_SUB_TYPE_HEDGED_1X2_CALL_SPREAD_TO_THE_1 76
#define ENUM_SECURITY_SUB_TYPE_HEDGED_1X2_PUT_SPREAD_TO_THE_1 77
#define ENUM_SECURITY_SUB_TYPE_DISCOUNT_SPREADS 88
#define ENUM_SECURITY_SUB_TYPE_LOCATION_SPREADS 89
#define ENUM_SECURITY_SUB_TYPE_PLATTS_DIFF_SPREAD 90
#define ENUM_SECURITY_SUB_TYPE_PLATTS_SPREAD 91
#define ENUM_SECURITY_SUB_TYPE_OTC_GAS_OIL_CRACK 92
#define ENUM_SECURITY_SUB_TYPE_BALMO_OVER_MONTH 93
#define ENUM_SECURITY_SUB_TYPE_RATIO_SPREAD 94
#define ENUM_SECURITY_SUB_TYPE_VOLUMETRIC_SPREAD 95
#define ENUM_SECURITY_SUB_TYPE_HEAT_RATE 96
#define ENUM_SECURITY_SUB_TYPE_CRACK_SPREAD 97
#define ENUM_SECURITY_SUB_TYPE_COMBO_SPREAD 98
#define ENUM_SECURITY_SUB_TYPE_SPREAD_S 99
#define ENUM_SECURITY_SUB_TYPE_PACKNO_COLOR 100
#define ENUM_SECURITY_SUB_TYPE_PACK_WHITE 101
#define ENUM_SECURITY_SUB_TYPE_PACK_RED 102
#define ENUM_SECURITY_SUB_TYPE_PACK_GREEN 103
#define ENUM_SECURITY_SUB_TYPE_PACK_BLUE 104
#define ENUM_SECURITY_SUB_TYPE_PACK_GOLD 105
#define ENUM_SECURITY_SUB_TYPE_PACK_PURPLE 106
#define ENUM_SECURITY_SUB_TYPE_PACK_ORANGE 107
#define ENUM_SECURITY_SUB_TYPE_PACK_PINK 108
#define ENUM_SECURITY_SUB_TYPE_PACK_SILVER 109
#define ENUM_SECURITY_SUB_TYPE_PACK_COPPER 110
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_NO_COLOR 200
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_2_YR 201
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_3_YR 202
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_4_YR 203
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_5_YR 204
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_6_YR 205
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_7_YR 206
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_8_YR 207
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_9_YR 208
#define ENUM_SECURITY_SUB_TYPE_BUNDLE_10_YR 209
#define ENUM_SECURITY_SUB_TYPE_BALMO 400
#define ENUM_SECURITY_SUB_TYPE_NEXT_DAY 410
#define ENUM_SECURITY_SUB_TYPE_CFD 411
#define ENUM_SECURITY_SUB_TYPE_WEEKEND 412
#define ENUM_SECURITY_SUB_TYPE_SINGLE_DAY 413
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY 414
#define ENUM_SECURITY_SUB_TYPE_HOURLY 415
#define ENUM_SECURITY_SUB_TYPE_MONTH 416
#define ENUM_SECURITY_SUB_TYPE_BALWEEK 450
#define ENUM_SECURITY_SUB_TYPE_BASKET 500
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_MONTHLY 550
#define ENUM_SECURITY_SUB_TYPE_NEXT_WEEK 600
#define ENUM_SECURITY_SUB_TYPE_PERIOD 700
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_CFD 711
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_7X8 712
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_7X16 713
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_7X6 714
#define ENUM_SECURITY_SUB_TYPE_CUSTOM_DAILY_OFF_PEAK_X16 715
#define ENUM_SECURITY_SUB_TYPE_QUARTER 800
#define ENUM_SECURITY_SUB_TYPE_YEAR 900

/*
 * Settlement Type Values
 */ 
#define ENUM_SETTLEMENT_TYPE_FINANCIAL '0'
#define ENUM_SETTLEMENT_TYPE_PHYSICAL '1'

/*
 * Side Values
 */ 
#define ENUM_SIDE_NONE ''
#define ENUM_SIDE_BID '1'
#define ENUM_SIDE_OFFER '2'

/*
 * Start Or End Values
 */ 
#define ENUM_START_OR_END_START 'S'
#define ENUM_START_OR_END_END 'E'

/*
 * Status Values
 */ 
#define ENUM_STATUS_CLOSED 'C'
#define ENUM_STATUS_PREOPEN 'P'
#define ENUM_STATUS_LOCKDOWN 'L'

/*
 * System Priced Leg Type Values
 */ 
#define ENUM_SYSTEM_PRICED_LEG_TYPE_SYSTEM_PRICED_CRACK_SPREAD_LEG 'C'
#define ENUM_SYSTEM_PRICED_LEG_TYPE_SYSTEM_PRICED_LEG 'S'

/*
 * Test Market Indicator Values
 */ 
#define ENUM_TEST_MARKET_INDICATOR_YES 'Y'
#define ENUM_TEST_MARKET_INDICATOR_NO 'N'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_OPEN 'O'
#define ENUM_TRADING_STATUS_CLOSE 'C'
#define ENUM_TRADING_STATUS_EXPIRED 'E'
#define ENUM_TRADING_STATUS_PRE_OPEN '1'
#define ENUM_TRADING_STATUS_PRE_CLOSE '2'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

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
 * Structure: Option Settlement Price Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t SettlementPriceWithDealPricePrecision;
    int64_t MessageDateTime;
    char IsOfficial;
    int64_t ValuationDateTime;
    int64_t Volatility;
    int64_t SettlementPrice;
    int64_t Delta;
} OptionSettlementPriceMessageT;

/*
 * Structure: Option Open Interest Message
 */ 
typedef struct {
    int32_t MarketId;
    int32_t OpenInterest;
    int64_t MessageDateTime;
    char OpenInterestDate[10];
} OptionOpenInterestMessageT;

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
} NewOptionsMarketDefinitionMessageT;

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
 * Structure: Delete Price Level Message
 */ 
typedef struct {
    int32_t MarketId;
    char Side;
    int8_t PriceLevelPosition;
    int64_t Timestamp;
} DeletePriceLevelMessageT;

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
    int64_t Timestamp;
} ChangePriceLevelMessageT;

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
    int64_t Timestamp;
} AddPriceLevelMessageT;

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
    int64_t MessageDateTime;
} FixingTransitionMessageT;

/*
 * Structure: Message Bundle Marker
 */ 
typedef struct {
    char StartOrEnd;
} MessageBundleMarkerT;

/*
 * Structure: Delete Order Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t OrderId;
    int64_t MessageDateTime;
    int32_t SequenceWithinMillis;
} DeleteOrderMessageT;

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
} NewExpiryMessageT;

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
 * Structure: Pre Open Price Indicator Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t PreOpenPrice;
    int64_t MessageDateTime;
    char HasPreOpenVolume[1];
    int32_t PreOpenVolume;
} PreOpenPriceIndicatorMessageT;

/*
 * Structure: Market Event Message
 */ 
typedef struct {
    int32_t MarketId;
    char EventType[1];
    int64_t MessageDateTime;
} MarketEventMessageT;

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
    int64_t MessageDateTime;
    int64_t SettlementPrice;
} EndOfDayMarketSummaryMessageT;

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
} IndexPricesMessageT;

/*
 * Structure: Settlement Price Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t SettlementPriceWithDealPricePrecision;
    int64_t MessageDateTime;
    char IsOfficial;
    int64_t ValuationDateTime;
    int64_t SettlementPrice;
} SettlementPriceMessageT;

/*
 * Structure: Close Price Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t ClosePrice;
    int64_t MessageDateTime;
} ClosePriceMessageT;

/*
 * Structure: Open Price Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t OpenPrice;
    int64_t MessageDateTime;
} OpenPriceMessageT;

/*
 * Structure: Open Interest Message
 */ 
typedef struct {
    int32_t MarketId;
    int32_t OpenInterest;
    int32_t OpenInterestChange;
    int64_t MessageDateTime;
    char OpenInterestDate[10];
} OpenInterestMessageT;

/*
 * Structure: System Text Message
 */ 
typedef struct {
    char TextMessage[200];
    int64_t MessageDateTime;
    char TextMessageExtraFld[800];
} SystemTextMessageT;

/*
 * Structure: Market State Change Message
 */ 
typedef struct {
    int32_t MarketId;
    char TradingStatus;
    int64_t MessageDateTime;
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
    int64_t MessageDateTime;
} MarketStatisticsMessageT;

/*
 * Structure: Cancelled Trade Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t TradeId;
    int64_t Price;
    int32_t Quantity;
    char OffMarketTradeIndicator;
    int64_t MessageDateTime;
    char OffMarketTradeType[3];
} CancelledTradeMessageT;

/*
 * Structure: Investigated Trade Message
 */ 
typedef struct {
    int32_t MarketId;
    int64_t TradeId;
    int64_t Price;
    int32_t Quantity;
    char OffMarketTradeIndicator;
    int64_t MessageDateTime;
    char InvestigationStatus;
    char OffMarketTradeType[3];
} InvestigatedTradeMessageT;

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
 * Structure: Message Header
 */ 
typedef struct {
    char MessageType;
    uint16_t Length;
} MessageHeaderT;

/*
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint16_t Session;
    uint32_t Sequence;
    uint16_t Count;
    int64_t Timestamp;
} PacketHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Intercontinental Exchange
   Version: 1.1.33
   Date: Monday, August 6, 2018
   Specification: ICE_iMpact_Multicast_Feed_Message_Spec_1.1.33.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
