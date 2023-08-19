/*******************************************************************************
 * C Structs For Siac Cqs Cta Snapshot 1.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Delivery Flag Values
 */ 
#define ENUM_DELIVERY_FLAG_FIRST_BLOCK_OF_SNAPSHOT_SEQUENCE 1
#define ENUM_DELIVERY_FLAG_INTERMEDIATE_BLOCK_OF_SNAPSHOT_SEQUENCE 2
#define ENUM_DELIVERY_FLAG_LAST_BLOCK_OF_SNAPSHOT_SEQUENCE 3
#define ENUM_DELIVERY_FLAG_ONLY_ONE_BLOCK_IN_SNAPSHOT_SEQUENCE 4

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
 * Finra Bbo Luld Indicator Values
 */ 
#define ENUM_FINRA_BBO_LULD_INDICATOR_LIMIT_UP_LIMIT_DOWN_NOT_APPLICABLE ''
#define ENUM_FINRA_BBO_LULD_INDICATOR_FINRA_BEST_BID_AND_OR_FINRA_BEST_OFFER_ARE_EXECUTABLE 'A'
#define ENUM_FINRA_BBO_LULD_INDICATOR_FINRA_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_FINRA_BEST_BID_IS_NON_EXECUTABLE 'B'
#define ENUM_FINRA_BBO_LULD_INDICATOR_FINRA_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_AND_FINRA_BEST_OFFER_IS_NON_EXECUTABLE 'C'
#define ENUM_FINRA_BBO_LULD_INDICATOR_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_BEST_OFFER_ABOVE_UPPER_LIMIT_PRICE_BAND_BEST_BID_AND_BEST_OFFER_ARE_NON_EXECUTABLE_FOR_FINRA 'D'

/*
 * Finra Best Bid Quote Condition Values
 */ 
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_QUOTE_CONDITION_NOT_APPLICABLE ' '
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_ON_OFFER_SIDE 'A'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_ON_BID_SIDE 'B'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_CLOSING 'C'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_BID_SIDE 'E'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_OFFER_SIDE 'F'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_ON_THE_BID_AND_OFFER_SIDES 'H'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_CLOSED_MARKET_MAKER 'L'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_NON_FIRM_QUOTE 'N'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_OPENING_QUOTE 'O'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_REGULAR_FINRA_OPEN 'R'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LIQUIDITY_REPLENISHMENT_POINT_OR_GAP_QUOTE_ON_BOTH_THE_BID_AND_OFFER_SIDES 'U'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_SET_SLOW_LIST_ON_BOTH_THE_BID_AND_OFFER_SIDES 'W'
#define ENUM_FINRA_BEST_BID_QUOTE_CONDITION_ON_DEMAND_INTRA_DAY_AUCTION '4'

/*
 * Finra Best Offer Quote Condition Values
 */ 
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_QUOTE_CONDITION_NOT_APPLICABLE ' '
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_ON_OFFER_SIDE 'A'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_ON_BID_SIDE 'B'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_CLOSING 'C'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_BID_SIDE 'E'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_OFFER_SIDE 'F'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_ON_THE_BID_AND_OFFER_SIDES 'H'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_CLOSED_MARKET_MAKER 'L'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_NON_FIRM_QUOTE 'N'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_OPENING_QUOTE 'O'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_REGULAR_FINRA_OPEN 'R'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LIQUIDITY_REPLENISHMENT_POINT_OR_GAP_QUOTE_ON_BOTH_THE_BID_AND_OFFER_SIDES 'U'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_SET_SLOW_LIST_ON_BOTH_THE_BID_AND_OFFER_SIDES 'W'
#define ENUM_FINRA_BEST_OFFER_QUOTE_CONDITION_ON_DEMAND_INTRA_DAY_AUCTION '4'

/*
 * Halt Reason Values
 */ 
#define ENUM_HALT_REASON_NOT_APPLICABLE ' '
#define ENUM_HALT_REASON_ADDITIONAL_INFORMATION_REQUESTED 'A'
#define ENUM_HALT_REASON_REGULATORY_CONCERN 'C'
#define ENUM_HALT_REASON_NEWS_RELEASED 'D'
#define ENUM_HALT_REASON_MERGER_EFFECTIVE 'E'
#define ENUM_HALT_REASON_ETF_COMPONENT_PRICES_NOT_AVAILABLE 'F'
#define ENUM_HALT_REASON_ORDER_IMBALANCE 'I'
#define ENUM_HALT_REASON_LIMIT_UP_LIMIT_DOWN_TRADING_PAUSE 'M'
#define ENUM_HALT_REASON_CORPORATE_ACTION 'N'
#define ENUM_HALT_REASON_NEW_SECURITY_OFFERING 'O'
#define ENUM_HALT_REASON_NEWS_PENDING 'P'
#define ENUM_HALT_REASON_INTRADAY_INDICATIVE_VALUE_NOT_AVAILABLE 'V'
#define ENUM_HALT_REASON_OPERATIONAL 'X'
#define ENUM_HALT_REASON_SUBPENNY_TRADING 'Y'
#define ENUM_HALT_REASON_MARKET_WIDE_CIRCUIT_BREAKER_LEVEL_1_BREACHED '1'
#define ENUM_HALT_REASON_MARKET_WIDE_CIRCUIT_BREAKER_LEVEL_2_BREACHED '2'
#define ENUM_HALT_REASON_MARKET_WIDE_CIRCUIT_BREAKER_LEVEL_3_BREACHED '3'

/*
 * Instrument Type Values
 */ 
#define ENUM_INSTRUMENT_TYPE_CTA_ELIGIBLE_EQUITY '0'
#define ENUM_INSTRUMENT_TYPE_LOCAL_ISSUE '1'
#define ENUM_INSTRUMENT_TYPE_CORPORATE_BOND '2'
#define ENUM_INSTRUMENT_TYPE_GOVERNMENT_BOND '3'

/*
 * Luld Indicator Values
 */ 
#define ENUM_LULD_INDICATOR_LIMIT_UP_LIMIT_DOWN_NOT_APPLICABLE ' '
#define ENUM_LULD_INDICATOR_BID_IS_NON_EXECUTABLE 'A'
#define ENUM_LULD_INDICATOR_OFFER_IS_NON_EXECUTABLE 'B'

/*
 * Market Condition Values
 */ 
#define ENUM_MARKET_CONDITION_NORMAL_AUCTION_MARKET ' '
#define ENUM_MARKET_CONDITION_CROSSED_MARKET 'A'
#define ENUM_MARKET_CONDITION_LOCKED_MARKET 'B'

/*
 * Message Category Values
 */ 
#define ENUM_MESSAGE_CATEGORY_SNAPSHOT 'K'

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
 * National Best Bid Participant Id Values
 */ 
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_NASDAQ_BX 'B'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_NYSE_NATIONAL 'C'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_ADF 'D'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_MIAX 'H'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_ISE 'I'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_CBOE_EDGA 'J'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_CBOE_EDGX 'K'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_LTSE 'L'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_NYSE_CHICAGO 'M'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_NYSE 'N'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_NYSE_ARCA 'P'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_CQS 'S'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_MEMX 'U'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_IEX 'V'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_CBSX 'W'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_NATIONAL_BEST_BID_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * National Best Bid Quote Condition Values
 */ 
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_QUOTE_CONDITION_NOT_APPLICABLE ' '
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_ON_OFFER_SIDE 'A'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_ON_BID_SIDE 'B'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_CLOSING 'C'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_BID_SIDE 'E'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_OFFER_SIDE 'F'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_ON_THE_BID_AND_OFFER_SIDES 'H'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_CLOSED_MARKET_MAKER 'L'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_NON_FIRM_QUOTE 'N'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_OPENING_QUOTE 'O'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_REGULAR_FINRA_OPEN 'R'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LIQUIDITY_REPLENISHMENT_POINT_OR_GAP_QUOTE_ON_BOTH_THE_BID_AND_OFFER_SIDES 'U'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_SET_SLOW_LIST_ON_BOTH_THE_BID_AND_OFFER_SIDES 'W'
#define ENUM_NATIONAL_BEST_BID_QUOTE_CONDITION_ON_DEMAND_INTRA_DAY_AUCTION '4'

/*
 * National Best Offer Participant Id Values
 */ 
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_NASDAQ_BX 'B'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_NYSE_NATIONAL 'C'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_ADF 'D'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_MIAX 'H'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_ISE 'I'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_CBOE_EDGA 'J'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_CBOE_EDGX 'K'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_LTSE 'L'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_NYSE_CHICAGO 'M'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_NYSE 'N'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_NYSE_ARCA 'P'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_CQS 'S'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_MEMX 'U'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_IEX 'V'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_CBSX 'W'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_NATIONAL_BEST_OFFER_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * National Best Offer Quote Condition Values
 */ 
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_QUOTE_CONDITION_NOT_APPLICABLE ' '
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_ON_OFFER_SIDE 'A'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_ON_BID_SIDE 'B'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_CLOSING 'C'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_BID_SIDE 'E'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LRP_OR_GAP_QUOTE_ON_THE_OFFER_SIDE 'F'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_ON_THE_BID_AND_OFFER_SIDES 'H'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_CLOSED_MARKET_MAKER 'L'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_NON_FIRM_QUOTE 'N'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_OPENING_QUOTE 'O'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_REGULAR_FINRA_OPEN 'R'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_LIQUIDITY_REPLENISHMENT_POINT_OR_GAP_QUOTE_ON_BOTH_THE_BID_AND_OFFER_SIDES 'U'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_SLOW_QUOTE_DUE_TO_SET_SLOW_LIST_ON_BOTH_THE_BID_AND_OFFER_SIDES 'W'
#define ENUM_NATIONAL_BEST_OFFER_QUOTE_CONDITION_ON_DEMAND_INTRA_DAY_AUCTION '4'

/*
 * Participant Id Values
 */ 
#define ENUM_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_PARTICIPANT_ID_NASDAQ_BX 'B'
#define ENUM_PARTICIPANT_ID_NYSE_NATIONAL 'C'
#define ENUM_PARTICIPANT_ID_ADF 'D'
#define ENUM_PARTICIPANT_ID_MIAX 'H'
#define ENUM_PARTICIPANT_ID_ISE 'I'
#define ENUM_PARTICIPANT_ID_CBOE_EDGA 'J'
#define ENUM_PARTICIPANT_ID_CBOE_EDGX 'K'
#define ENUM_PARTICIPANT_ID_LTSE 'L'
#define ENUM_PARTICIPANT_ID_NYSE_CHICAGO 'M'
#define ENUM_PARTICIPANT_ID_NYSE 'N'
#define ENUM_PARTICIPANT_ID_NYSE_ARCA 'P'
#define ENUM_PARTICIPANT_ID_CQS 'S'
#define ENUM_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_PARTICIPANT_ID_MEMX 'U'
#define ENUM_PARTICIPANT_ID_IEX 'V'
#define ENUM_PARTICIPANT_ID_CBSX 'W'
#define ENUM_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * Primary Listing Market Participant Id Values
 */ 
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NOT_APPLICABLE ' '
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ_BX 'B'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_NATIONAL 'C'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_ADF 'D'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_MIAX 'H'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_ISE 'I'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_EDGA 'J'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_EDGX 'K'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_LTSE 'L'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_CHICAGO 'M'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE 'N'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_ARCA 'P'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_MEMX 'U'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_IEX 'V'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBSX 'W'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_NOT_APPLICABLE ' '
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
 * Retail Interest Indicator Values
 */ 
#define ENUM_RETAIL_INTEREST_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_RETAIL_INTEREST_INDICATOR_RETAIL_INTEREST_ON_BID_QUOTE 'A'
#define ENUM_RETAIL_INTEREST_INDICATOR_RETAIL_INTEREST_ON_OFFER_QUOTE 'B'
#define ENUM_RETAIL_INTEREST_INDICATOR_RETAIL_INTEREST_ON_BOTH_THE_BID_AND_OFFER_QUOTES 'C'

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
 * Snapshot Message Type Values
 */ 
#define ENUM_SNAPSHOT_MESSAGE_TYPE_LINE_INTEGRITY_MESSAGE 'T'
#define ENUM_SNAPSHOT_MESSAGE_TYPE_MARKET_WIDE_CIRCUIT_BREAKER_DECLINE_LEVEL_STATUS_SNAPSHOT_MESSAGE 'K'
#define ENUM_SNAPSHOT_MESSAGE_TYPE_CONSOLIDATED_SNAPSHOT_MESSAGE 'C'
#define ENUM_SNAPSHOT_MESSAGE_TYPE_PARTICIPANT_SNAPSHOT_MESSAGE 'P'
#define ENUM_SNAPSHOT_MESSAGE_TYPE_FINRA_SNAPSHOT_MESSAGE 'F'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Finra Snapshot Message
 */ 
typedef struct {
    char ParticipantId;
    char SecuritySymbol[11];
    char FinraBestBidQuoteCondition;
    uint64_t FinraBestBidPrice;
    uint32_t FinraBestBidSize;
    char FinraBestBidMarketMakerId[4];
    char FinraBestOfferQuoteCondition;
    uint64_t FinraBestOfferPrice;
    uint32_t FinraBestOfferSize;
    char FinraBestOfferMarketMakerId[4];
    char FinraBboLuldIndicator;
    uint64_t HighIndicationPrice;
    uint64_t LowIndicationPrice;
    char HaltReason;
} FinraSnapshotMessageT;

/*
 * Structure: Participant Snapshot Message
 */ 
typedef struct {
    char ParticipantId;
    char SecuritySymbol[11];
    char QuoteCondition;
    uint64_t BidPrice;
    uint32_t BidSize;
    uint64_t OfferPrice;
    char OfferSize[0];
    char RetailInterestIndicator;
    char SettlementCondition;
    char MarketCondition;
    char LuldIndicator;
    uint64_t HighIndicationPrice;
    uint64_t LowIndicationPrice;
    char HaltReason;
} ParticipantSnapshotMessageT;

/*
 * Structure: Consolidated Snapshot Message
 */ 
typedef struct {
    char ParticipantId;
    char SecuritySymbol[11];
    char InstrumentType;
    uint64_t LowerLimitPriceBand;
    uint64_t UpperLimitPriceBand;
    uint64_t AuctionCollarReferencePrice;
    uint64_t AuctionCollarUpperThresholdPrice;
    uint64_t AuctionCollarLowerThresholdPrice;
    uint8_t NumberOfExtensions;
    char NationalBestBidParticipantId;
    char NationalBestBidQuoteCondition;
    uint64_t NationalBestBidPrice;
    uint32_t NationalBestBidSize;
    char FinraBestBidMarketMakerId[4];
    char NationalBestOfferParticipantId;
    char NationalBestOfferQuoteCondition;
    uint64_t NationalBestOfferPrice;
    uint32_t NationalBestOfferSize;
    char FinraBestOfferMarketMakerId[4];
    char NationalBboLuldIndicator;
    char PrimaryListingMarketParticipantId;
    char FinancialStatusIndicator;
    char ShortSaleRestrictionIndicator;
    char HaltReason;
    char Future[1];
} ConsolidatedSnapshotMessageT;

/*
 * Structure: Market Wide Circuit Breaker Decline Level Status Snapshot Message
 */ 
typedef struct {
    char ParticipantId;
    char MwcbLevel1[0];
    int64_t MwcbLevel2;
    int64_t MwcbLevel3;
    uint8_t Reserved;
} MarketWideCircuitBreakerDeclineLevelStatusSnapshotMessageT;

/*
 * Structure: Line Integrity Message
 */ 
typedef struct {
    char ParticipantId;
} LineIntegrityMessageT;

/*
 * Structure: Snapshot
 */ 
typedef struct {
    char SnapshotMessageType;
} SnapshotT;

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
    uint32_t BlockSequenceNumber;
    uint8_t MessagesInBlock;
    uint8_t DeliveryFlag;
    char LastSeqNum[1];
    uint8_t TotPubSeqRollover;
    SipBlockTimestampT SipBlockTimestamp;
    uint16_t BlockChecksum;
} BlockHeaderT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Securities Industry Automation Corporation
   Version: 1.0
   Date: Monday, January 24, 2022
   Specification: CQS_Pillar_Snapshot_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
