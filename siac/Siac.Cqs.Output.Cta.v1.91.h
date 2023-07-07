/*******************************************************************************
 * C Structs For Siac Cqs Cta Output 1.91 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Administrative Message Type Values
 */ 
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_ADMINISTRATIVE_UNFORMATTED_MESSAGE 'H'

/*
 * Best Bid Participant Id Values
 */ 
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_BX 'B'
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_NATIONAL 'C'
#define ENUM_BEST_BID_PARTICIPANT_ID_FINRA_ADF 'D'
#define ENUM_BEST_BID_PARTICIPANT_ID_ISE 'I'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_EDGA 'J'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_EDGX 'K'
#define ENUM_BEST_BID_PARTICIPANT_ID_LTSE 'L'
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_CHICAGO 'M'
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE 'N'
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_ARCA 'P'
#define ENUM_BEST_BID_PARTICIPANT_ID_CQS 'S'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_BEST_BID_PARTICIPANT_ID_IEX 'V'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBSX 'W'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * Best Offer Participant Id Values
 */ 
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_BX 'B'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_NATIONAL 'C'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_FINRA_ADF 'D'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_ISE 'I'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_EDGA 'J'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_EDGX 'K'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_LTSE 'L'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_CHICAGO 'M'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE 'N'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_ARCA 'P'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CQS 'S'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_IEX 'V'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBSX 'W'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * Control Message Type Values
 */ 
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_DAY_MESSAGE 'A'
#define ENUM_CONTROL_MESSAGE_TYPE_FINRA_CLOSE_MESSAGE 'C'
#define ENUM_CONTROL_MESSAGE_TYPE_RESET_BLOCK_SEQUENCE_NUMBER_MESSAGE 'L'
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_TEST_CYCLE_MESSAGE 'M'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_TEST_CYCLE_MESSAGE 'N'
#define ENUM_CONTROL_MESSAGE_TYPE_FINRA_OPEN_MESSAGE 'O'
#define ENUM_CONTROL_MESSAGE_TYPE_DISASTER_RECOVERY_DATA_CENTER_ACTIVATION_MESSAGE 'P'
#define ENUM_CONTROL_MESSAGE_TYPE_LINE_INTEGRITY_MESSAGE 'T'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_DAY_MESSAGE 'Z'

/*
 * Financial Status Indicator Values
 */ 
#define ENUM_FINANCIAL_STATUS_INDICATOR_FINANCIAL_STATUS_NOT_APPLICABLE '0'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT '1'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BELOW_CONTINUING_LISTING_STANDARDS '2'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT_AND_BELOW_CONTINUING_LISTING_STANDARDS '3'
#define ENUM_FINANCIAL_STATUS_INDICATOR_LATE_FILING '4'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT_AND_LATE_FILING '5'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BELOW_CONTINUING_LISTING_STANDARDS_AND_LATE_FILING '6'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT_BELOW_CONTINUING_LISTING_STANDARDS_AND_LATE_FILING '7'
#define ENUM_FINANCIAL_STATUS_INDICATOR_CREATIONS_SUSPENDED '8'
#define ENUM_FINANCIAL_STATUS_INDICATOR_REDEMPTIONS_SUSPENDED '9'
#define ENUM_FINANCIAL_STATUS_INDICATOR_LIQUIDATION 'A'

/*
 * Finra Bbo Indicator Values
 */ 
#define ENUM_FINRA_BBO_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_FINRA_BBO_INDICATOR_NO_FINRA_BBO_CHANGE 'A'
#define ENUM_FINRA_BBO_INDICATOR_NO_FINRA_BBO_EXISTS 'B'

/*
 * Finra Bbo Luld Indicator Values
 */ 
#define ENUM_FINRA_BBO_LULD_INDICATOR_LIMIT_UP_LIMIT_DOWN_NOT_APPLICABLE ''
#define ENUM_FINRA_BBO_LULD_INDICATOR_FINRA_BEST_BID_AND_OR_FINRA_BEST_OFFER_ARE_EXECUTABLE 'A'
#define ENUM_FINRA_BBO_LULD_INDICATOR_FINRA_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_FINRA_BEST_BID_IS_NON_EXECUTABLE 'B'
#define ENUM_FINRA_BBO_LULD_INDICATOR_FINRA_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_AND_FINRA_BEST_OFFER_IS_NON_EXECUTABLE 'C'
#define ENUM_FINRA_BBO_LULD_INDICATOR_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_BEST_BID_AND_BEST_OFFER_ARE_NON_EXECUTABLE_FOR_FINRA 'D'

/*
 * Instrument Type Values
 */ 
#define ENUM_INSTRUMENT_TYPE_CTA_ELIGIBLE_EQUITY '0'
#define ENUM_INSTRUMENT_TYPE_LOCAL_ISSUE '1'
#define ENUM_INSTRUMENT_TYPE_CORPORATE_BOND '2'
#define ENUM_INSTRUMENT_TYPE_GOVERNMENT_BOND '3'

/*
 * Market Condition Values
 */ 
#define ENUM_MARKET_CONDITION_NORMAL_AUCTION_MARKET ' '
#define ENUM_MARKET_CONDITION_CROSSED_MARKET 'A'
#define ENUM_MARKET_CONDITION_LOCKED_MARKET 'B'

/*
 * Market Status Message Type Values
 */ 
#define ENUM_MARKET_STATUS_MESSAGE_TYPE_MARKET_WIDE_CIRCUIT_BREAKER_DECLINE_LEVEL_STATUS_MESSAGE 'M'
#define ENUM_MARKET_STATUS_MESSAGE_TYPE_MARKET_WIDE_CIRCUIT_BREAKER_STATUS_MESSAGE 'L'

/*
 * Message Category Values
 */ 
#define ENUM_MESSAGE_CATEGORY_ADMINISTRATIVE 'A'
#define ENUM_MESSAGE_CATEGORY_CONTROL 'C'
#define ENUM_MESSAGE_CATEGORY_MARKET_STATUS 'M'
#define ENUM_MESSAGE_CATEGORY_QUOTE 'Q'

/*
 * National Bbo Indicator Values
 */ 
#define ENUM_NATIONAL_BBO_INDICATOR_NOT_INCLUDED ' '
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_CHANGE_OR_BEST_OFFER_CHANGE 'A'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_CHANGE_QUOTE_CONTAINS_BEST_OFFER 'B'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_CHANGE_BEST_OFFER_SHORT_APPENDAGE 'C'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_CHANGE_BEST_OFFER_LONG_APPENDAGE 'D'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_CHANGE_NO_BEST_OFFER 'E'
#define ENUM_NATIONAL_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_NO_BEST_OFFER_CHANGE 'F'
#define ENUM_NATIONAL_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_QUOTE_CONTAINS_BEST_OFFER 'G'
#define ENUM_NATIONAL_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_BEST_OFFER_SHORT_APPENDAGE 'H'
#define ENUM_NATIONAL_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_BEST_OFFER_LONG_APPENDAGE 'I'
#define ENUM_NATIONAL_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_NO_BEST_OFFER 'J'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_NO_BEST_OFFER_CHANGE 'K'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_QUOTE_CONTAINS_BEST_OFFER 'L'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_BEST_OFFER_SHORT_APPENDAGE 'M'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_BEST_OFFER_LONG_APPENDAGE 'N'
#define ENUM_NATIONAL_BBO_INDICATOR_NO_BEST_BID_NO_BEST_OFFER 'O'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_SHORT_APPENDAGE_NO_BEST_OFFER_CHANGE 'P'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_LONG_APPENDAGE_NO_BEST_OFFER_CHANGE 'Q'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_SHORT_APPENDAGE_QUOTE_CONTAINS_BEST_OFFER 'R'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_LONG_APPENDAGE_QUOTE_CONTAINS_BEST_OFFER 'S'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_SHORT_APPENDAGE_BEST_OFFER_SHORT_APPENDAGE 'T'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_LONG_APPENDAGE_BEST_OFFER_LONG_APPENDAGE 'U'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_SHORT_APPENDAGE_NO_BEST_OFFER 'V'
#define ENUM_NATIONAL_BBO_INDICATOR_BEST_BID_LONG_APPENDAGE_NO_BEST_OFFER 'W'

/*
 * National Bbo Luld Indicator Values
 */ 
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_AND_OR_NATIONAL_BEST_OFFER_ARE_EXECUTABLE 'A'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_IS_NON_EXECUTABLE 'B'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_AND_IS_NON_EXECUTABLE 'C'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_NATIONAL_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_BOTH_ARE_NON_EXECUTABLE 'D'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_EQUALS_UPPER_LIMIT_PRICE_BAND_AND_IS_IN_LIMIT_STATE 'E'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_OFFER_EQUALS_LOWER_LIMIT_PRICE_BAND_AND_IS_IN_LIMIT_STATE 'F'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_EQUALS_UPPER_LIMIT_PRICE_BAND_AND_IS_IN_LIMIT_STATE_AND_NATIONAL_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_AND_IS_NON_EXECUTABLE 'G'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_IS_NON_EXECUTABLE_AND_NATIONAL_BEST_OFFER_EQUALS_LOWER_LIMIT_PRICE_BAND_AND_IS_IN_LIMIT_STATE 'H'
#define ENUM_NATIONAL_BBO_LULD_INDICATOR_NATIONAL_BEST_BID_EQUALS_UPPER_LIMIT_PRICE_BAND_AND_NATIONAL_BEST_OFFER_EQUALS_LOWER_LIMIT_PRICE_BAND 'I'

/*
 * Participant Id Values
 */ 
#define ENUM_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_PARTICIPANT_ID_NASDAQ_BX 'B'
#define ENUM_PARTICIPANT_ID_NYSE_NATIONAL 'C'
#define ENUM_PARTICIPANT_ID_FINRA_ADF 'D'
#define ENUM_PARTICIPANT_ID_ISE 'I'
#define ENUM_PARTICIPANT_ID_CBOE_EDGA 'J'
#define ENUM_PARTICIPANT_ID_CBOE_EDGX 'K'
#define ENUM_PARTICIPANT_ID_LTSE 'L'
#define ENUM_PARTICIPANT_ID_NYSE_CHICAGO 'M'
#define ENUM_PARTICIPANT_ID_NYSE 'N'
#define ENUM_PARTICIPANT_ID_NYSE_ARCA 'P'
#define ENUM_PARTICIPANT_ID_CQS 'S'
#define ENUM_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_PARTICIPANT_ID_IEX 'V'
#define ENUM_PARTICIPANT_ID_CBSX 'W'
#define ENUM_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * Primary Listing Market Participant Id Values
 */ 
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NOT_APPLICABLE 'Space'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ_OMX_BX 'B'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_NATIONAL 'C'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_FINRA_ADF 'D'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_ISE 'I'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_EDGA 'J'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_EDGX 'K'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_CHICAGO 'M'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE 'N'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_ARCA 'P'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_IEX 'V'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBSX 'W'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ_OMX_PSX 'X'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_QUOTE_CONDITION_NOT_APPLICABLE ' '
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_ON_OFFER_SIDE 'A'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_ON_BID_SIDE 'B'
#define ENUM_QUOTE_CONDITION_CLOSING 'C'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_BID_SIDE 'E'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_OFFER_SIDE 'F'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_ON_THE_BID_AND_OFFER_SIDES 'H'
#define ENUM_QUOTE_CONDITION_CLOSED_MARKET_MAKER 'L'
#define ENUM_QUOTE_CONDITION_NON_FIRM_QUOTE 'N'
#define ENUM_QUOTE_CONDITION_OPENING_QUOTE 'O'
#define ENUM_QUOTE_CONDITION_REGULAR_FINRA_OPEN 'R'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LIQUIDITY_REPLENISHMENT_POINT_OR_GAP_QUOTE_ON_BOTH_THE_BID_AND_OFFER_SIDES 'U'
#define ENUM_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_SET_SLOW_LIST_ON_BOTH_THE_BID_AND_OFFER_SIDES 'W'
#define ENUM_QUOTE_CONDITION_ON_DEMAND_INTRA_DAY_AUCTION '4'

/*
 * Quote Message Type Values
 */ 
#define ENUM_QUOTE_MESSAGE_TYPE_AUCTION_STATUS_MESSAGE 'A'
#define ENUM_QUOTE_MESSAGE_TYPE_LONG_QUOTE_MESSAGE 'L'
#define ENUM_QUOTE_MESSAGE_TYPE_SHORT_QUOTE_MESSAGE 'Q'
#define ENUM_QUOTE_MESSAGE_TYPE_SPECIAL_LONG_QUOTE_MESSAGE 'S'

/*
 * Retail Interest Indicator Values
 */ 
#define ENUM_RETAIL_INTEREST_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_RETAIL_INTEREST_INDICATOR_RETAIL_INTEREST_ON_BID_QUOTE 'A'
#define ENUM_RETAIL_INTEREST_INDICATOR_RETAIL_INTEREST_ON_OFFER_QUOTE 'B'
#define ENUM_RETAIL_INTEREST_INDICATOR_RETAIL_INTEREST_ON_BOTH_THE_BID_AND_OFFER_QUOTES 'C'

/*
 * Retransmission Indicator Values
 */ 
#define ENUM_RETRANSMISSION_INDICATOR_ORIGINAL 'O'
#define ENUM_RETRANSMISSION_INDICATOR_RETRANSMITTED 'V'

/*
 * Security Status Indicator Values
 */ 
#define ENUM_SECURITY_STATUS_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_SECURITY_STATUS_INDICATOR_NEWS_DISSEMINATION 'D'
#define ENUM_SECURITY_STATUS_INDICATOR_TRADING_RANGE_INDICATION 'G'
#define ENUM_SECURITY_STATUS_INDICATOR_ORDER_IMBALANCE 'I'
#define ENUM_SECURITY_STATUS_INDICATOR_LULD_TRADING_PAUSE 'M'
#define ENUM_SECURITY_STATUS_INDICATOR_NEWS_PENDING 'P'
#define ENUM_SECURITY_STATUS_INDICATOR_RESUME 'T'
#define ENUM_SECURITY_STATUS_INDICATOR_OPERATIONAL 'X'
#define ENUM_SECURITY_STATUS_INDICATOR_SUP_PENNY_TRADING 'Y'
#define ENUM_SECURITY_STATUS_INDICATOR_NO_OPEN_NO_RESUME 'Z'
#define ENUM_SECURITY_STATUS_INDICATOR_LULD_PRICE_BAND '0'
#define ENUM_SECURITY_STATUS_INDICATOR_MARKET_WIDE_CIRCUIT_BREAKER_LEVEL_1_BREACHED '1'
#define ENUM_SECURITY_STATUS_INDICATOR_MARKET_WIDE_CIRCUIT_BREAKER_LEVEL_2_BREACHED '2'
#define ENUM_SECURITY_STATUS_INDICATOR_MARKET_WIDE_CIRCUIT_BREAKER_LEVEL_3_BREACHED '3'
#define ENUM_SECURITY_STATUS_INDICATOR_REPUBLISHED_LULD_PRICE_BAND '9'

/*
 * Settlement Condition Values
 */ 
#define ENUM_SETTLEMENT_CONDITION_REGULAR_WAY_SETTLEMENT ' '
#define ENUM_SETTLEMENT_CONDITION_CASH_ONLY_SETTLEMENT 'A'
#define ENUM_SETTLEMENT_CONDITION_NEXT_DAY_ONLY_SETTLEMENT 'B'

/*
 * Short Sale Restriction Indicator Values
 */ 
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_NOT_IN_EFFECT ' '
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_SHORT_SALE_RESTRICTION_ACTIVATED 'A'
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_SHORT_SALE_RESTRICTION_CONTINUED 'C'
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_SHORT_SALE_RESTRICTION_DEACTIVATED 'D'
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_SHORT_SALE_RESTRICTION_IN_EFFECT 'E'

/*
 * Sip Generated Message Identifier Values
 */ 
#define ENUM_SIP_GENERATED_MESSAGE_IDENTIFIER_NOT_APPLICABLE ' '
#define ENUM_SIP_GENERATED_MESSAGE_IDENTIFIER_CONSOLIDATED_QUOTATION_SYSTEM 'S'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: National Best Offer Short Appendage
 */ 
typedef struct {
    char BestOfferParticipantId;
    uint16_t BestOfferPriceShort;
    uint16_t BestOfferSizeShort;
} NationalBestOfferShortAppendageT;

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
 * Structure: Adf Timestamp
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} AdfTimestampT;

/*
 * Structure: Participant Timestamp
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} ParticipantTimestampT;

/*
 * Structure: Auction Status Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
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
 * Structure: Quote
 */ 
typedef struct {
    char QuoteMessageType;
} QuoteT;

/*
 * Structure: Market Wide Circuit Breaker Status Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char MarketWideCircuitBreakerLevelIndicator[0];
    uint8_t Reserved;
} MarketWideCircuitBreakerStatusMessageT;

/*
 * Structure: Market Wide Circuit Breaker Decline Level Status Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char MwcbLevel1[0];
    int64_t MwcbLevel2;
    int64_t MwcbLevel3;
    uint8_t Reserved;
} MarketWideCircuitBreakerDeclineLevelStatusMessageT;

/*
 * Structure: Market Status
 */ 
typedef struct {
    char MarketStatusMessageType;
} MarketStatusT;

/*
 * Structure: End Of Day Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} EndOfDayMessageT;

/*
 * Structure: Line Integrity Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} LineIntegrityMessageT;

/*
 * Structure: Disaster Recovery Data Center Activation Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} DisasterRecoveryDataCenterActivationMessageT;

/*
 * Structure: Finra Open Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} FinraOpenMessageT;

/*
 * Structure: End Of Test Cycle Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} EndOfTestCycleMessageT;

/*
 * Structure: Start Of Test Cycle Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} StartOfTestCycleMessageT;

/*
 * Structure: Reset Block Sequence Number Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} ResetBlockSequenceNumberMessageT;

/*
 * Structure: Finra Close Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} FinraCloseMessageT;

/*
 * Structure: Start Of Day Message
 */ 
typedef struct {
    char ParticipantId;
    ParticipantTimestampT ParticipantTimestamp;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} StartOfDayMessageT;

/*
 * Structure: Control
 */ 
typedef struct {
    char ControlMessageType;
} ControlT;

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
 * Structure: Administrative
 */ 
typedef struct {
    char AdministrativeMessageType;
} AdministrativeT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageLength;
    char MessageCategory;
} MessageHeaderT;

/*
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Sip Block Timestamp
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} SipBlockTimestampT;

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

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Securities Industry Automation Corporation
   Version: 1.91
   Date: Thursday, January 2, 2020
   Specification: CQS_BINARY_OUTPUT_SPECIFICATION.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
