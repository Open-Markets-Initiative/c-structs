/*******************************************************************************
 * C Structs For Siac Cqs Cta Output 1.91 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Administrative Message Type Values
 */ 
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_ADMINISTRATIVE_UNFORMATTED_MESSAGE_H = 'H'

/*
 * Best Bid Participant Id Values
 */ 
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_AMERICAN_A = 'A'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_BX_B = 'B'
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_NATIONAL_C = 'C'
#define ENUM_BEST_BID_PARTICIPANT_ID_FINRA_ADF_D = 'D'
#define ENUM_BEST_BID_PARTICIPANT_ID_ISE_I = 'I'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_EDGA_J = 'J'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_EDGX_K = 'K'
#define ENUM_BEST_BID_PARTICIPANT_ID_LTSE_L = 'L'
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_CHICAGO_M = 'M'
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_N = 'N'
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_ARCA_P = 'P'
#define ENUM_BEST_BID_PARTICIPANT_ID_CQS_S = 'S'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_T = 'T'
#define ENUM_BEST_BID_PARTICIPANT_ID_IEX_V = 'V'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBSX_W = 'W'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_PSX_X = 'X'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_BYX_Y = 'Y'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_BZX_Z = 'Z'

/*
 * Best Offer Participant Id Values
 */ 
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_AMERICAN_A = 'A'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_BX_B = 'B'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_NATIONAL_C = 'C'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_FINRA_ADF_D = 'D'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_ISE_I = 'I'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_EDGA_J = 'J'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_EDGX_K = 'K'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_LTSE_L = 'L'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_CHICAGO_M = 'M'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_N = 'N'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_ARCA_P = 'P'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CQS_S = 'S'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_T = 'T'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_IEX_V = 'V'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBSX_W = 'W'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_PSX_X = 'X'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_BYX_Y = 'Y'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_BZX_Z = 'Z'

/*
 * Control Message Type Values
 */ 
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_DAY_MESSAGE_A = 'A'
#define ENUM_CONTROL_MESSAGE_TYPE_FINRA_CLOSE_MESSAGE_C = 'C'
#define ENUM_CONTROL_MESSAGE_TYPE_RESET_BLOCK_SEQUENCE_NUMBER_MESSAGE_L = 'L'
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_TEST_CYCLE_MESSAGE_M = 'M'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_TEST_CYCLE_MESSAGE_N = 'N'
#define ENUM_CONTROL_MESSAGE_TYPE_FINRA_OPEN_MESSAGE_O = 'O'
#define ENUM_CONTROL_MESSAGE_TYPE_DISASTER_RECOVERY_DATA_CENTER_ACTIVATION_MESSAGE_P = 'P'
#define ENUM_CONTROL_MESSAGE_TYPE_LINE_INTEGRITY_MESSAGE_T = 'T'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_DAY_MESSAGE_Z = 'Z'

/*
 * Financial Status Indicator Values
 */ 
#define ENUM_FINANCIAL_STATUS_INDICATOR_FINANCIAL_STATUS_NOT_APPLICABLE_0 = '0'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT_1 = '1'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BELOW_CONTINUING_LISTING_STANDARDS_2 = '2'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT_AND_BELOW_CONTINUING_LISTING_STANDARDS_3 = '3'
#define ENUM_FINANCIAL_STATUS_INDICATOR_LATE_FILING_4 = '4'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT_AND_LATE_FILING_5 = '5'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BELOW_CONTINUING_LISTING_STANDARDS_AND_LATE_FILING_6 = '6'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT_BELOW_CONTINUING_LISTING_STANDARDS_AND_LATE_FILING_7 = '7'
#define ENUM_FINANCIAL_STATUS_INDICATOR_CREATIONS_SUSPENDED_8 = '8'
#define ENUM_FINANCIAL_STATUS_INDICATOR_REDEMPTIONS_SUSPENDED_9 = '9'
#define ENUM_FINANCIAL_STATUS_INDICATOR_LIQUIDATION_A = 'A'

/*
 * Finra Bbo Indicator Values
 */ 
#define ENUM_FINRA_BBO_INDICATOR_NOT_APPLICABLE = ' '
#define ENUM_FINRA_BBO_INDICATOR_NO_FINRA_BBO_CHANGE_A = 'A'
#define ENUM_FINRA_BBO_INDICATOR_NO_FINRA_BBO_EXISTS_B = 'B'

/*
 * Finra Bbo Luld Indicator Values
 */ 
#define ENUM_FINRA_BBO_LULD_INDICATOR_LIMIT_UP_LIMIT_DOWN_NOT_APPLICABLE = ''
#define ENUM_FINRA_BBO_LULD_INDICATOR_FINRA_BEST_BID_AND_OR_FINRA_BEST_OFFER_ARE_EXECUTABLE_A = 'A'
#define ENUM_FINRA_BBO_LULD_INDICATOR_FINRA_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_FINRA_BEST_BID_IS_NON_EXECUTABLE_B = 'B'
#define ENUM_FINRA_BBO_LULD_INDICATOR_FINRA_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_AND_FINRA_BEST_OFFER_IS_NON_EXECUTABLE_C = 'C'
#define ENUM_FINRA_BBO_LULD_INDICATOR_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_BEST_BID_AND_BEST_OFFER_ARE_NON_EXECUTABLE_FOR_FINRA_D = 'D'

/*
 * Instrument Type Values
 */ 
#define ENUM_INSTRUMENT_TYPE_CTA_ELIGIBLE_EQUITY_0 = '0'
#define ENUM_INSTRUMENT_TYPE_LOCAL_ISSUE_1 = '1'
#define ENUM_INSTRUMENT_TYPE_CORPORATE_BOND_2 = '2'
#define ENUM_INSTRUMENT_TYPE_GOVERNMENT_BOND_3 = '3'

/*
 * Market Condition Values
 */ 
#define ENUM_MARKET_CONDITION_NORMAL_AUCTION_MARKET = ' '
#define ENUM_MARKET_CONDITION_CROSSED_MARKET_A = 'A'
#define ENUM_MARKET_CONDITION_LOCKED_MARKET_B = 'B'

/*
 * Market Status Message Type Values
 */ 
#define ENUM_MARKET_STATUS_MESSAGE_TYPE_MARKET_WIDE_CIRCUIT_BREAKER_DECLINE_LEVEL_STATUS_MESSAGE_M = 'M'
#define ENUM_MARKET_STATUS_MESSAGE_TYPE_MARKET_WIDE_CIRCUIT_BREAKER_STATUS_MESSAGE_L = 'L'

/*
 * Message Category Values
 */ 
#define ENUM_MESSAGE_CATEGORY_ADMINISTRATIVE_A = 'A'
#define ENUM_MESSAGE_CATEGORY_CONTROL_C = 'C'
#define ENUM_MESSAGE_CATEGORY_MARKET_STATUS_M = 'M'
#define ENUM_MESSAGE_CATEGORY_QUOTE_Q = 'Q'

/*
 * National Bbo Indicator Values
 */ 
#define ENUM_NATIONAL_BBO_INDICATOR_NOT_INCLUDED = ' '
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_CHANGE_OR_BEST_OFFER_CHANGE_A = 'A'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_CHANGE_QUOTE_CONTAINS_BEST_OFFER_B = 'B'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_CHANGE_BEST_OFFER_SHORT_APPENDAGE_C = 'C'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_CHANGE_BEST_OFFER_LONG_APPENDAGE_D = 'D'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_CHANGE_NO_BEST_OFFER_E = 'E'
#define ENUM_NATIONAL_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_NO_BEST_OFFER_CHANGE_F = 'F'
#define ENUM_NATIONAL_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_QUOTE_CONTAINS_BEST_OFFER_G = 'G'
#define ENUM_NATIONAL_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_BEST_OFFER_SHORT_APPENDAGE_H = 'H'
#define ENUM_NATIONAL_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_BEST_OFFER_LONG_APPENDAGE_I = 'I'
#define ENUM_NATIONAL_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_NO_BEST_OFFER_J = 'J'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_NO_BEST_OFFER_CHANGE_K = 'K'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_QUOTE_CONTAINS_BEST_OFFER_L = 'L'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_BEST_OFFER_SHORT_APPENDAGE_M = 'M'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_BEST_OFFER_LONG_APPENDAGE_N = 'N'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_NO_BEST_OFFER_O = 'O'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_SHORT_APPENDAGE_NO_BEST_OFFER_CHANGE_P = 'P'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_LONG_APPENDAGE_NO_BEST_OFFER_CHANGE_Q = 'Q'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_SHORT_APPENDAGE_QUOTE_CONTAINS_BEST_OFFER_R = 'R'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_LONG_APPENDAGE_QUOTE_CONTAINS_BEST_OFFER_S = 'S'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_SHORT_APPENDAGE_BEST_OFFER_SHORT_APPENDAGE_T = 'T'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_LONG_APPENDAGE_BEST_OFFER_LONG_APPENDAGE_U = 'U'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_SHORT_APPENDAGE_NO_BEST_OFFER_V = 'V'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_LONG_APPENDAGE_NO_BEST_OFFER_W = 'W'

/*
 * National Bbo Luld Indicator Values
 */ 
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NOT_APPLICABLE = ' '
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_AND_OR_NATIONAL_BEST_OFFER_ARE_EXECUTABLE_A = 'A'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_IS_NON_EXECUTABLE_B = 'B'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_AND_IS_NON_EXECUTABLE_C = 'C'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_NATIONAL_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_BOTH_ARE_NON_EXECUTABLE_D = 'D'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_EQUALS_UPPER_LIMIT_PRICE_BAND_AND_IS_IN_LIMIT_STATE_E = 'E'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_OFFER_EQUALS_LOWER_LIMIT_PRICE_BAND_AND_IS_IN_LIMIT_STATE_F = 'F'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_EQUALS_UPPER_LIMIT_PRICE_BAND_AND_IS_IN_LIMIT_STATE_AND_NATIONAL_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_AND_IS_NON_EXECUTABLE_G = 'G'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_IS_NON_EXECUTABLE_AND_NATIONAL_BEST_OFFER_EQUALS_LOWER_LIMIT_PRICE_BAND_AND_IS_IN_LIMIT_STATE_H = 'H'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_EQUALS_UPPER_LIMIT_PRICE_BAND_AND_NATIONAL_BEST_OFFER_EQUALS_LOWER_LIMIT_PRICE_BAND_I = 'I'

/*
 * Participant Id Values
 */ 
#define ENUM_PARTICIPANT_ID_NYSE_AMERICAN_A = 'A'
#define ENUM_PARTICIPANT_ID_NASDAQ_BX_B = 'B'
#define ENUM_PARTICIPANT_ID_NYSE_NATIONAL_C = 'C'
#define ENUM_PARTICIPANT_ID_FINRA_ADF_D = 'D'
#define ENUM_PARTICIPANT_ID_ISE_I = 'I'
#define ENUM_PARTICIPANT_ID_CBOE_EDGA_J = 'J'
#define ENUM_PARTICIPANT_ID_CBOE_EDGX_K = 'K'
#define ENUM_PARTICIPANT_ID_LTSE_L = 'L'
#define ENUM_PARTICIPANT_ID_NYSE_CHICAGO_M = 'M'
#define ENUM_PARTICIPANT_ID_NYSE_N = 'N'
#define ENUM_PARTICIPANT_ID_NYSE_ARCA_P = 'P'
#define ENUM_PARTICIPANT_ID_CQS_S = 'S'
#define ENUM_PARTICIPANT_ID_NASDAQ_T = 'T'
#define ENUM_PARTICIPANT_ID_IEX_V = 'V'
#define ENUM_PARTICIPANT_ID_CBSX_W = 'W'
#define ENUM_PARTICIPANT_ID_NASDAQ_PSX_X = 'X'
#define ENUM_PARTICIPANT_ID_CBOE_BYX_Y = 'Y'
#define ENUM_PARTICIPANT_ID_CBOE_BZX_Z = 'Z'

/*
 * Primary Listing Market Participant Id Values
 */ 
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NOT_APPLICABLE_SPACE = 'Space'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_AMERICAN_A = 'A'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ_OMX_BX_B = 'B'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_NATIONAL_C = 'C'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_FINRA_ADF_D = 'D'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_ISE_I = 'I'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_EDGA_J = 'J'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_EDGX_K = 'K'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_CHICAGO_M = 'M'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_N = 'N'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_ARCA_P = 'P'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ_T = 'T'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_IEX_V = 'V'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBSX_W = 'W'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ_OMX_PSX_X = 'X'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_BYX_Y = 'Y'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_BZX_Z = 'Z'

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_QUOTE_CONDITION_NOT_APPLICABLE = ' '
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_ON_OFFER_SIDE_A = 'A'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_ON_BID_SIDE_B = 'B'
#define ENUM_QUOTE_CONDITION_CLOSING_C = 'C'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_BID_SIDE_E = 'E'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_OFFER_SIDE_F = 'F'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_ON_THE_BID_AND_OFFER_SIDES_H = 'H'
#define ENUM_QUOTE_CONDITION_CLOSED_MARKET_MAKER_L = 'L'
#define ENUM_QUOTE_CONDITION_NON_FIRM_QUOTE_N = 'N'
#define ENUM_QUOTE_CONDITION_OPENING_QUOTE_O = 'O'
#define ENUM_QUOTE_CONDITION_REGULAR_FINRA_OPEN_R = 'R'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LIQUIDITY_REPLENISHMENT_POINT_OR_GAP_QUOTE_ON_BOTH_THE_BID_AND_OFFER_SIDES_U = 'U'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_SET_SLOW_LIST_ON_BOTH_THE_BID_AND_OFFER_SIDES_W = 'W'
#define ENUM_QUOTE_CONDITION_ON_DEMAND_INTRA_DAY_AUCTION_4 = '4'

/*
 * Quote Message Type Values
 */ 
#define ENUM_QUOTE_MESSAGE_TYPE_AUCTION_STATUS_MESSAGE_A = 'A'
#define ENUM_QUOTE_MESSAGE_TYPE_LONG_QUOTE_MESSAGE_L = 'L'
#define ENUM_QUOTE_MESSAGE_TYPE_SHORT_QUOTE_MESSAGE_Q = 'Q'
#define ENUM_QUOTE_MESSAGE_TYPE_SPECIAL_LONG_QUOTE_MESSAGE_S = 'S'

/*
 * Retail Interest Indicator Values
 */ 
#define ENUM_RETAIL_INTEREST_INDICATOR_NOT_APPLICABLE = ' '
#define ENUM_RETAIL_INTEREST_INDICATOR_RETAIL_INTEREST_ON_BID_QUOTE_A = 'A'
#define ENUM_RETAIL_INTEREST_INDICATOR_RETAIL_INTEREST_ON_OFFER_QUOTE_B = 'B'
#define ENUM_RETAIL_INTEREST_INDICATOR_RETAIL_INTEREST_ON_BOTH_THE_BID_AND_OFFER_QUOTES_C = 'C'

/*
 * Retransmission Indicator Values
 */ 
#define ENUM_RETRANSMISSION_INDICATOR_ORIGINAL_O = 'O'
#define ENUM_RETRANSMISSION_INDICATOR_RETRANSMITTED_V = 'V'

/*
 * Security Status Indicator Values
 */ 
#define ENUM_SECURITY_STATUS_INDICATOR_NOT_APPLICABLE = ' '
#define ENUM_SECURITY_STATUS_INDICATOR_NEWS_DISSEMINATION_D = 'D'
#define ENUM_SECURITY_STATUS_INDICATOR_TRADING_RANGE_INDICATION_G = 'G'
#define ENUM_SECURITY_STATUS_INDICATOR_ORDER_IMBALANCE_I = 'I'
#define ENUM_SECURITY_STATUS_INDICATOR_LULD_TRADING_PAUSE_M = 'M'
#define ENUM_SECURITY_STATUS_INDICATOR_NEWS_PENDING_P = 'P'
#define ENUM_SECURITY_STATUS_INDICATOR_RESUME_T = 'T'
#define ENUM_SECURITY_STATUS_INDICATOR_OPERATIONAL_X = 'X'
#define ENUM_SECURITY_STATUS_INDICATOR_SUP_PENNY_TRADING_Y = 'Y'
#define ENUM_SECURITY_STATUS_INDICATOR_NO_OPEN_NO_RESUME_Z = 'Z'
#define ENUM_SECURITY_STATUS_INDICATOR_LULD_PRICE_BAND_0 = '0'
#define ENUM_SECURITY_STATUS_INDICATOR_MARKET_WIDE_CIRCUIT_BREAKER_LEVEL_1_BREACHED_1 = '1'
#define ENUM_SECURITY_STATUS_INDICATOR_MARKET_WIDE_CIRCUIT_BREAKER_LEVEL_2_BREACHED_2 = '2'
#define ENUM_SECURITY_STATUS_INDICATOR_MARKET_WIDE_CIRCUIT_BREAKER_LEVEL_3_BREACHED_3 = '3'
#define ENUM_SECURITY_STATUS_INDICATOR_REPUBLISHED_LULD_PRICE_BAND_9 = '9'

/*
 * Settlement Condition Values
 */ 
#define ENUM_SETTLEMENT_CONDITION_REGULAR_WAY_SETTLEMENT = ' '
#define ENUM_SETTLEMENT_CONDITION_CASH_ONLY_SETTLEMENT_A = 'A'
#define ENUM_SETTLEMENT_CONDITION_NEXT_DAY_ONLY_SETTLEMENT_B = 'B'

/*
 * Short Sale Restriction Indicator Values
 */ 
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_NOT_IN_EFFECT = ' '
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_SHORT_SALE_RESTRICTION_ACTIVATED_A = 'A'
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_SHORT_SALE_RESTRICTION_CONTINUED_C = 'C'
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_SHORT_SALE_RESTRICTION_DEACTIVATED_D = 'D'
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_SHORT_SALE_RESTRICTION_IN_EFFECT_E = 'E'

/*
 * Sip Generated Message Identifier Values
 */ 
#define ENUM_SIP_GENERATED_MESSAGE_IDENTIFIER_NOT_APPLICABLE = ' '
#define ENUM_SIP_GENERATED_MESSAGE_IDENTIFIER_CONSOLIDATED_QUOTATION_SYSTEM_S = 'S'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Adf Timestamp
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} AdfTimestampT;

/*
 * Structure: Administrative
 */ 
typedef struct {
    char AdministrativeMessageType;
} AdministrativeT;

/*
 * Structure: Administrative Unformatted Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char Text[0];
} AdministrativeUnformattedMessageT;

/*
 * Structure: Auction Status Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbolLong[11];
    char InstrumentType;
    char AuctionCollarReferencePrice[0];
    char AuctionCollarUpperThresholdPrice[0];
    char AuctionCollarLowerThresholdPrice[0];
    uint8_t NumberOfExtensions;
    char ShortSaleRestrictionIndicator;
    char PrimaryListingMarketParticipantId;
    char FinancialStatusIndicator;
    char Future[1];
} AuctionStatusMessageT;

/*
 * Structure: Block Header
 */ 
typedef struct {
    uint8_t Version;
    uint16_t BlockSize;
    char DataFeedIndicator[1];
    char RetransmissionIndicator;
    uint32_t BlockSequenceNumber;
    uint8_t MessagesInBlock;
    SipBlockTimestampT SipBlockTimestamp;
    uint16_t BlockChecksum;
} BlockHeaderT;

/*
 * Structure: Disaster Recovery Data Center Activation Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} DisasterRecoveryDataCenterActivationMessageT;

/*
 * Structure: End Of Day Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} EndOfDayMessageT;

/*
 * Structure: End Of Test Cycle Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} EndOfTestCycleMessageT;

/*
 * Structure: Finra Close Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} FinraCloseMessageT;

/*
 * Structure: Finra Open Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} FinraOpenMessageT;

/*
 * Structure: Line Integrity Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} LineIntegrityMessageT;

/*
 * Structure: Market Wide Circuit Breaker Decline Level Status Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char MwcbLevel1[0];
    int64_t MwcbLevel2;
    int64_t MwcbLevel3;
    uint8_t Reserved;
} MarketWideCircuitBreakerDeclineLevelStatusMessageT;

/*
 * Structure: Market Wide Circuit Breaker Status Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char MarketWideCircuitBreakerLevelIndicator[0];
    uint8_t Reserved;
} MarketWideCircuitBreakerStatusMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageLength;
    char MessageCategory;
} MessageHeaderT;

/*
 * Structure: National Best Bid Long Appendage
 */ 
typedef struct {
    char BestBidParticipantId;
    char BestBidQuoteCondition[1];
    uint64_t BestBidPriceLong;
    uint32_t BestBidSizeLong;
    char FinraBestBidMarketMakerId[4];
} NationalBestBidLongAppendageT;

/*
 * Structure: National Best Bid Short Appendage
 */ 
typedef struct {
    char BestBidParticipantId;
    uint16_t BestBidPriceShort;
    uint16_t BestBidSizeShort;
} NationalBestBidShortAppendageT;

/*
 * Structure: National Best Offer Long Appendage
 */ 
typedef struct {
    char BestOfferParticipantId;
    char BestOfferQuoteCondition[1];
    uint64_t BestOfferPriceLong;
    uint32_t BestOfferSizeLong;
    char FinraBestOfferMarketMakerId[4];
} NationalBestOfferLongAppendageT;

/*
 * Structure: National Best Offer Short Appendage
 */ 
typedef struct {
    char BestOfferParticipantId;
    uint16_t BestOfferPriceShort;
    uint16_t BestOfferSizeShort;
} NationalBestOfferShortAppendageT;

/*
 * Structure: Participant Timestamp
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} ParticipantTimestampT;

/*
 * Structure: Reset Block Sequence Number Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} ResetBlockSequenceNumberMessageT;

/*
 * Structure: Sip Block Timestamp
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} SipBlockTimestampT;

/*
 * Structure: Start Of Day Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} StartOfDayMessageT;

/*
 * Structure: Start Of Test Cycle Message
 */ 
typedef struct {
    char ParticipantId;
    char ParticipantTimestamp[0];
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} StartOfTestCycleMessageT;

