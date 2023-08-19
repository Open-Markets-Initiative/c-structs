/*******************************************************************************
 * C Structs For Siac Cts Cta Output 2.9 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Administrative Message Type Values
 */ 
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_START_OF_END_OF_DAY_MESSAGE 'A'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_END_OF_END_OF_DAY_MESSAGE 'B'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_START_OF_START_OF_DAY_MESSAGE 'C'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_END_OF_START_OF_DAY_MESSAGE 'D'

/*
 * Cancel Error Action Values
 */ 
#define ENUM_CANCEL_ERROR_ACTION_CANCEL '1'
#define ENUM_CANCEL_ERROR_ACTION_ERROR '2'

/*
 * Consolidated High Low Last Indicator Values
 */ 
#define ENUM_CONSOLIDATED_HIGH_LOW_LAST_INDICATOR_NONE 'A'
#define ENUM_CONSOLIDATED_HIGH_LOW_LAST_INDICATOR_HIGH 'B'
#define ENUM_CONSOLIDATED_HIGH_LOW_LAST_INDICATOR_LOW 'C'
#define ENUM_CONSOLIDATED_HIGH_LOW_LAST_INDICATOR_LAST 'D'
#define ENUM_CONSOLIDATED_HIGH_LOW_LAST_INDICATOR_HIGH_LAST 'E'
#define ENUM_CONSOLIDATED_HIGH_LOW_LAST_INDICATOR_LOW_LAST 'F'
#define ENUM_CONSOLIDATED_HIGH_LOW_LAST_INDICATOR_HIGH_LOW_LAST 'G'
#define ENUM_CONSOLIDATED_HIGH_LOW_LAST_INDICATOR_HIGH_LOW 'H'

/*
 * Control Message Type Values
 */ 
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_DAY_MESSAGE 'A'
#define ENUM_CONTROL_MESSAGE_TYPE_RESET_BLOCK_SEQUENCE_NUMBER_MESSAGE 'L'
#define ENUM_CONTROL_MESSAGE_TYPE_DISASTER_RECOVERY_DATA_CENTER_ACTIVATION_MESSAGE 'P'
#define ENUM_CONTROL_MESSAGE_TYPE_LINE_INTEGRITY_MESSAGE 'T'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_DAY_MESSAGE 'Z'

/*
 * Financial Status Indicator Values
 */ 
#define ENUM_FINANCIAL_STATUS_INDICATOR_NOT_APPLICABLE '0'
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
 * Held Trade Indicator Values
 */ 
#define ENUM_HELD_TRADE_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_HELD_TRADE_INDICATOR_CANNOT_BE_USED_AS_A_LAST_SALE_FOR_BOTH_PARTICIPANT_AND_CONSOLIDATED_BASIS 'A'
#define ENUM_HELD_TRADE_INDICATOR_CAN_BE_USED_AS_A_LAST_SALE_FOR_PARTICIPANT_BUT_NOT_CONSOLIDATED_BASIS 'B'
#define ENUM_HELD_TRADE_INDICATOR_CAN_BE_USED_AS_A_LAST_SALE_FOR_PARTICIPANT_AND_CONSOLIDATED_BASIS 'C'

/*
 * Index Message Type Values
 */ 
#define ENUM_INDEX_MESSAGE_TYPE_INDEX_MESSAGE 'I'
#define ENUM_INDEX_MESSAGE_TYPE_BID_AND_OFFER_INDEX_MESSAGE 'Q'

/*
 * Initiating Participant Id Values
 */ 
#define ENUM_INITIATING_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_INITIATING_PARTICIPANT_ID_NASDAQ_BX 'B'
#define ENUM_INITIATING_PARTICIPANT_ID_NYSE_NATIONAL 'C'
#define ENUM_INITIATING_PARTICIPANT_ID_ADF 'D'
#define ENUM_INITIATING_PARTICIPANT_ID_MIAX 'H'
#define ENUM_INITIATING_PARTICIPANT_ID_ISE 'I'
#define ENUM_INITIATING_PARTICIPANT_ID_CBOE_EDGA 'J'
#define ENUM_INITIATING_PARTICIPANT_ID_CBOE_EDGX 'K'
#define ENUM_INITIATING_PARTICIPANT_ID_LTSE 'L'
#define ENUM_INITIATING_PARTICIPANT_ID_NYSE_CHICAGO 'M'
#define ENUM_INITIATING_PARTICIPANT_ID_NYSE 'N'
#define ENUM_INITIATING_PARTICIPANT_ID_NYSE_ARCA 'P'
#define ENUM_INITIATING_PARTICIPANT_ID_CTS 'S'
#define ENUM_INITIATING_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_INITIATING_PARTICIPANT_ID_MEMBERS_EXCHANGE 'U'
#define ENUM_INITIATING_PARTICIPANT_ID_IEX 'V'
#define ENUM_INITIATING_PARTICIPANT_ID_CBSX 'W'
#define ENUM_INITIATING_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_INITIATING_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_INITIATING_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * Instrument Type Values
 */ 
#define ENUM_INSTRUMENT_TYPE_CTA_ELIGIBLE_EQUITY '0'
#define ENUM_INSTRUMENT_TYPE_LOCAL_ISSUE '1'
#define ENUM_INSTRUMENT_TYPE_CORPORATE_BOND '2'
#define ENUM_INSTRUMENT_TYPE_GOVERNMENT_BOND '3'

/*
 * Last Participant Id Values
 */ 
#define ENUM_LAST_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_LAST_PARTICIPANT_ID_NASDAQ_BX 'B'
#define ENUM_LAST_PARTICIPANT_ID_NYSE_NATIONAL 'C'
#define ENUM_LAST_PARTICIPANT_ID_FINRA_ADF 'D'
#define ENUM_LAST_PARTICIPANT_ID_ISE 'I'
#define ENUM_LAST_PARTICIPANT_ID_CBOE_EDGA 'J'
#define ENUM_LAST_PARTICIPANT_ID_CBOE_EDGX 'K'
#define ENUM_LAST_PARTICIPANT_ID_LTSE 'L'
#define ENUM_LAST_PARTICIPANT_ID_NYSE_CHICAGO 'M'
#define ENUM_LAST_PARTICIPANT_ID_NYSE 'N'
#define ENUM_LAST_PARTICIPANT_ID_NYSE_ARCA 'P'
#define ENUM_LAST_PARTICIPANT_ID_CTS 'S'
#define ENUM_LAST_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_LAST_PARTICIPANT_ID_IEX 'V'
#define ENUM_LAST_PARTICIPANT_ID_CBSX 'W'
#define ENUM_LAST_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_LAST_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_LAST_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * Limit Up Limit Down Indicator Values
 */ 
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_LIMIT_UP_LIMIT_DOWN_PRICE_BAND 'A'
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_REPUBLISHED_LIMIT_UP_LIMIT_DOWN_PRICE_BAND 'B'
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_NATIONAL_BEST_BID_LIMIT_STATE_ENTERED 'C'
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_NATIONAL_BEST_BID_LIMIT_STATE_EXITED 'D'
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_NATIONAL_BEST_OFFER_LIMIT_STATE_ENTERED 'E'
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_NATIONAL_BEST_OFFER_LIMIT_STATE_EXITED 'F'
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_NATIONAL_BEST_BID_AND_NATIONAL_BEST_OFFER_LIMIT_STATE_ENTERED 'G'
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_NATIONAL_BEST_BID_AND_NATIONAL_BEST_OFFER_LIMIT_STATE_EXITED 'H'
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_NATIONAL_BEST_BID_LIMIT_STATE_ENTERED_AND_NATIONAL_BEST_OFFER_LIMIT_STATE_EXITED 'I'
#define ENUM_LIMIT_UP_LIMIT_DOWN_INDICATOR_NATIONAL_BEST_BID_LIMIT_STATE_EXITED_AND_NATIONAL_BEST_OFFER_LIMIT_STATE_ENTERED 'J'

/*
 * Market Status Message Type Values
 */ 
#define ENUM_MARKET_STATUS_MESSAGE_TYPE_MARKET_WIDE_CIRCUIT_BREAKER_DECLINE_LEVEL_STATUS_MESSAGE 'M'
#define ENUM_MARKET_STATUS_MESSAGE_TYPE_MARKET_WIDE_CIRCUIT_BREAKER_STATUS_MESSAGE 'L'
#define ENUM_MARKET_STATUS_MESSAGE_TYPE_APPROXIMATE_ADJUSTED_VOLUME_MARKET_CENTER_MESSAGE 'N'
#define ENUM_MARKET_STATUS_MESSAGE_TYPE_APPROXIMATE_TRADES_AND_TOTAL_DOLLAR_VALUE_MESSAGE 'O'
#define ENUM_MARKET_STATUS_MESSAGE_TYPE_CROSSING_SESSION_SUMMARY_MESSAGE 'P'

/*
 * Message Category Values
 */ 
#define ENUM_MESSAGE_CATEGORY_ADMINISTRATIVE 'A'
#define ENUM_MESSAGE_CATEGORY_CONTROL 'C'
#define ENUM_MESSAGE_CATEGORY_INDEX 'I'
#define ENUM_MESSAGE_CATEGORY_MARKET_STATUS 'M'
#define ENUM_MESSAGE_CATEGORY_PRIOR_DAY 'P'
#define ENUM_MESSAGE_CATEGORY_SUMMARY 'S'
#define ENUM_MESSAGE_CATEGORY_TRADE 'T'

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
#define ENUM_PARTICIPANT_ID_CTS 'S'
#define ENUM_PARTICIPANT_ID_NASDAQ 'T'
#define ENUM_PARTICIPANT_ID_MEMBERS_EXCHANGE 'U'
#define ENUM_PARTICIPANT_ID_IEX 'V'
#define ENUM_PARTICIPANT_ID_CBSX 'W'
#define ENUM_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * Participant Open High Low Last Indicator Values
 */ 
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_NONE 'A'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_HIGH 'B'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_LOW 'C'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_LAST 'D'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_HIGH_LAST 'E'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_LOW_LAST 'F'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_UNUSED 'G'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_OPEN 'H'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_OPEN_HIGH 'I'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_OPEN_LOW 'J'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_OPEN_HIGH_LOW_LAST 'K'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_OPEN_LAST 'L'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_OPEN_HIGH_LOW 'M'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_OPEN_HIGH_LAST 'N'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_OPEN_LOW_LAST 'O'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_HIGH_LOW 'P'
#define ENUM_PARTICIPANT_OPEN_HIGH_LOW_LAST_INDICATOR_HIGH_LOW_LAST 'Q'

/*
 * Primary Listing Market Participant Id Values
 */ 
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ_BX 'B'
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
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_NASDAQ_PSX 'X'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_BYX 'Y'
#define ENUM_PRIMARY_LISTING_MARKET_PARTICIPANT_ID_CBOE_BZX 'Z'

/*
 * Prior Day Message Type Values
 */ 
#define ENUM_PRIOR_DAY_MESSAGE_TYPE_PRIOR_DAY_TRADE_CORRECTION_MESSAGE 'C'
#define ENUM_PRIOR_DAY_MESSAGE_TYPE_PRIOR_DAY_TRADE_MESSAGE 'L'
#define ENUM_PRIOR_DAY_MESSAGE_TYPE_PRIOR_DAY_TRADE_MESSAGE 'X'

/*
 * Retransmission Indicator Values
 */ 
#define ENUM_RETRANSMISSION_INDICATOR_ORIGINAL 'O'
#define ENUM_RETRANSMISSION_INDICATOR_RETRANSMITTED 'V'

/*
 * Sale Condition Values
 */ 
#define ENUM_SALE_CONDITION_REGULAR_SALE ' '
#define ENUM_SALE_CONDITION_AVERAGE_PRICE_TRADE 'B'
#define ENUM_SALE_CONDITION_CASH_TRADE 'C'
#define ENUM_SALE_CONDITION_AUTOMATIC_EXECUTION 'E'
#define ENUM_SALE_CONDITION_INTERMARKET_SWEEP_ORDER 'F'
#define ENUM_SALE_CONDITION_PRICE_VARIATION_TRADE 'H'
#define ENUM_SALE_CONDITION_ODD_LOT_TRADE 'I'
#define ENUM_SALE_CONDITION_RULE_127_OR_155 'K'
#define ENUM_SALE_CONDITION_SOLD_LAST 'L'
#define ENUM_SALE_CONDITION_MARKET_CENTER_OFFICIAL_CLOSE 'M'
#define ENUM_SALE_CONDITION_NEXT_DAY_TRADE 'N'
#define ENUM_SALE_CONDITION_MARKET_CENTER_OPENING_TRADE 'O'
#define ENUM_SALE_CONDITION_PRIOR_REFERENCE_PRICE 'P'
#define ENUM_SALE_CONDITION_MARKET_CENTER_OFFICIAL_OPEN 'Q'
#define ENUM_SALE_CONDITION_SELLER 'R'
#define ENUM_SALE_CONDITION_EXTENDED_HOURS_TRADE 'T'
#define ENUM_SALE_CONDITION_EXTENDED_HOURS_SOLD 'U'
#define ENUM_SALE_CONDITION_CONTINGENT_TRADE 'V'
#define ENUM_SALE_CONDITION_CROSS_TRADE 'X'
#define ENUM_SALE_CONDITION_SOLD 'Z'
#define ENUM_SALE_CONDITION_DERIVATIVELY_PRICED '4'
#define ENUM_SALE_CONDITION_MARKET_CENTER_REOPENING_TRADE '5'
#define ENUM_SALE_CONDITION_MARKET_CENTER_CLOSING_TRADE '6'
#define ENUM_SALE_CONDITION_QUALIFIED_CONTINGENT_TRADE '7'
#define ENUM_SALE_CONDITION_RESERVED '8'
#define ENUM_SALE_CONDITION_CORRECTED_CONSOLIDATED_CLOSE_PRICE_AS_PER_LISTING_MARKET '9'

/*
 * Sale Condition Category Values
 */ 
#define ENUM_SALE_CONDITION_CATEGORY_NOT_APPLICABLE ' '
#define ENUM_SALE_CONDITION_CATEGORY_CATEGORY_1 '1'
#define ENUM_SALE_CONDITION_CATEGORY_CATEGORY_2 '2'
#define ENUM_SALE_CONDITION_CATEGORY_CATEGORY_3 '3'
#define ENUM_SALE_CONDITION_CATEGORY_CATEGORY_4 '4'

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_NOT_APPLICABLE ' '
#define ENUM_SECURITY_STATUS_TRADING_HALT '2'
#define ENUM_SECURITY_STATUS_RESUME '3'
#define ENUM_SECURITY_STATUS_PRICE_INDICATION '5'
#define ENUM_SECURITY_STATUS_TRADING_RANGE_INDICATION '6'
#define ENUM_SECURITY_STATUS_MARKET_IMBALANCE_BUY '7'
#define ENUM_SECURITY_STATUS_MARKET_IMBALANCE_SELL '8'
#define ENUM_SECURITY_STATUS_MARKET_ON_CLOSE_IMBALANCE_BUY '9'
#define ENUM_SECURITY_STATUS_MARKET_ON_CLOSE_IMBALANCE_SELL 'A'
#define ENUM_SECURITY_STATUS_NO_MARKET_IMBALANCE 'C'
#define ENUM_SECURITY_STATUS_NO_MARKET_ON_CLOSE_IMBALANCE 'D'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION 'E'
#define ENUM_SECURITY_STATUS_LIMIT_UP_LIMIT_DOWN 'F'

/*
 * Settlement Type Values
 */ 
#define ENUM_SETTLEMENT_TYPE_REGULAR_SETTLEMENT ' '
#define ENUM_SETTLEMENT_TYPE_CASH_TRADE 'C'
#define ENUM_SETTLEMENT_TYPE_NEXT_DAY_TRADE 'N'
#define ENUM_SETTLEMENT_TYPE_SELLER 'R'

/*
 * Short Sale Restriction Indicator Values
 */ 
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_NOT_IN_EFFECT ' '
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_ACTIVATED 'A'
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_CONTINUED 'C'
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_DEACTIVATED 'D'
#define ENUM_SHORT_SALE_RESTRICTION_INDICATOR_RESTRICTION_IN_EFFECT 'E'

/*
 * Stop Stock Indicator Values
 */ 
#define ENUM_STOP_STOCK_INDICATOR_NOT_APPLICABLE '0'
#define ENUM_STOP_STOCK_INDICATOR_STOP_STOCK '1'

/*
 * Summary Message Type Values
 */ 
#define ENUM_SUMMARY_MESSAGE_TYPE_CONSOLIDATED_START_OF_DAY_SUMMARY_MESSAGE 'A'
#define ENUM_SUMMARY_MESSAGE_TYPE_PARTICIPANT_START_OF_DAY_SUMMARY_MESSAGE 'B'
#define ENUM_SUMMARY_MESSAGE_TYPE_CONSOLIDATED_END_OF_DAY_SUMMARY_MESSAGE 'C'
#define ENUM_SUMMARY_MESSAGE_TYPE_PARTICIPANT_END_OF_DAY_SUMMARY_MESSAGE 'D'

/*
 * Tick Values
 */ 
#define ENUM_TICK_NOT_APPLICABLE ' '
#define ENUM_TICK_UPWARD '1'
#define ENUM_TICK_DOWNWARD '2'
#define ENUM_TICK_UNCHANGED_UPWARD '3'
#define ENUM_TICK_UNCHANGED_DOWNWARD '4'

/*
 * Trade Message Type Values
 */ 
#define ENUM_TRADE_MESSAGE_TYPE_AUCTION_STATUS_MESSAGE 'A'
#define ENUM_TRADE_MESSAGE_TYPE_TRADE_CORRECTION_MESSAGE 'C'
#define ENUM_TRADE_MESSAGE_TYPE_LONG_TRADE_MESSAGE 'L'
#define ENUM_TRADE_MESSAGE_TYPE_TRADING_STATUS_MESSAGE 'S'
#define ENUM_TRADE_MESSAGE_TYPE_SHORT_TRADE_MESSAGE 'T'
#define ENUM_TRADE_MESSAGE_TYPE_TRADE_CANCEL_ERROR_MESSAGE 'X'

/*
 * Trade Reporting Facility Id Values
 */ 
#define ENUM_TRADE_REPORTING_FACILITY_ID_NOT_APPLICABLE ' '
#define ENUM_TRADE_REPORTING_FACILITY_ID_FINRA_NASDAQ_CHICAGO 'B'
#define ENUM_TRADE_REPORTING_FACILITY_ID_FINRA_NYSE 'N'
#define ENUM_TRADE_REPORTING_FACILITY_ID_FINRA_NASDAQ_CARTERET 'B'

/*
 * Trade Through Exempt Indicator Values
 */ 
#define ENUM_TRADE_THROUGH_EXEMPT_INDICATOR_NOT_A_TRADE_THROUGH_EXEMPTION '0'
#define ENUM_TRADE_THROUGH_EXEMPT_INDICATOR_TRADE_THROUGH_EXEMPTION '1'

/*
 * Trade Through Exempt Reason Values
 */ 
#define ENUM_TRADE_THROUGH_EXEMPT_REASON_NO_REASON ' '
#define ENUM_TRADE_THROUGH_EXEMPT_REASON_INTERMARKET_SWEEP_ORDER 'F'
#define ENUM_TRADE_THROUGH_EXEMPT_REASON_MARKET_CENTER_OPENING_TRADE 'O'
#define ENUM_TRADE_THROUGH_EXEMPT_REASON_DERIVATIVELY_PRICED '4'
#define ENUM_TRADE_THROUGH_EXEMPT_REASON_MARKET_CENTER_REOPENING_TRADE '5'
#define ENUM_TRADE_THROUGH_EXEMPT_REASON_MARKET_CENTER_CLOSING_TRADE '6'
#define ENUM_TRADE_THROUGH_EXEMPT_REASON_QUALIFIED_CONTINGENT_TRADE '7'
#define ENUM_TRADE_THROUGH_EXEMPT_REASON_RESERVED '8'
#define ENUM_TRADE_THROUGH_EXEMPT_REASON_CORRECTED_CONSOLIDATED_CLOSE_PRICE_AS_PER_LISTING_MARKET '9'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Participant Data
 */ 
typedef struct {
    uint32_t PreviousClosePriceDate;
    char LastParticipantId;
    uint64_t LastPrice;
    uint64_t HighPrice;
    uint64_t LowPrice;
    uint64_t TotalVolume;
    char Tick;
} ParticipantDataT;

/*
 * Structure: Consolidated Data
 */ 
typedef struct {
    uint32_t PreviousClosePriceDate;
    char LastParticipantId;
    uint64_t LastPrice;
    uint64_t HighPrice;
    uint64_t LowPrice;
    uint64_t TotalVolume;
    char Tick;
} ConsolidatedDataT;

/*
 * Structure: Timestamp 2
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} Timestamp2T;

/*
 * Structure: Sale Conditions
 */ 
typedef struct {
    char SettlementType;
    char TradeThroughExemptReason;
    char Category3[0];
    char Category4[0];
} SaleConditionsT;

/*
 * Structure: Timestamp 1
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} Timestamp1T;

/*
 * Structure: Trade Cancel Error Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    SaleConditionsT SaleConditions;
    uint64_t TradePrice;
    uint32_t TradeVolume;
    uint8_t SellersSaleDays;
    char StopStockIndicator;
    char TradeThroughExemptIndicator;
    char TradeReportingFacilityId;
    char OriginalParticipantReferenceNumberOfOriginalTransactionBeingCancelledOrErrored[0];
    Timestamp2T Timestamp2;
    char CancelErrorAction;
    char ShortSaleRestrictionIndicator;
    char PrimaryListingMarketParticipantId;
    char FinancialStatusIndicator;
    ConsolidatedDataT ConsolidatedData;
    ParticipantDataT ParticipantData;
} TradeCancelErrorMessageT;

/*
 * Structure: Short Trade Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbolShort[5];
    char SaleCondition;
    char SaleConditionCategory;
    uint16_t TradePriceShort;
    uint16_t TradeVolumeShort;
    char PrimaryListingMarketParticipantId;
    char ConsolidatedHighLowLastIndicator;
    char ParticipantOpenHighLowLastIndicator;
} ShortTradeMessageT;

/*
 * Structure: Trading Status Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    uint64_t LastPrice;
    uint64_t HighIndicationPriceUpperLimitPriceBand;
    uint64_t LowIndicationPriceLowerLimitPriceBand;
    uint32_t BuyVolume;
    uint32_t SellVolume;
    char SecurityStatus;
    char HaltReason;
    char ShortSaleRestrictionIndicator;
    char PrimaryListingMarketParticipantId;
    char FinancialStatusIndicator;
    char LimitUpLimitDownIndicator;
} TradingStatusMessageT;

/*
 * Structure: Long Trade Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    SaleConditionsT SaleConditions;
    uint64_t TradePrice;
    uint32_t TradeVolume;
    uint8_t SellersSaleDays;
    char StopStockIndicator;
    char TradeThroughExemptIndicator;
    char TradeReportingFacilityId;
    Timestamp2T Timestamp2;
    char ShortSaleRestrictionIndicator;
    char PrimaryListingMarketParticipantId;
    char FinancialStatusIndicator;
    char HeldTradeIndicator;
    char ConsolidatedHighLowLastIndicator;
    char ParticipantOpenHighLowLastIndicator;
} LongTradeMessageT;

/*
 * Structure: Prior Day Trade Date And Time
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} PriorDayTradeDateAndTimeT;

/*
 * Structure: Original Trade
 */ 
typedef struct {
    SaleConditionsT SaleConditions;
    char TradePriceLong[0];
    char TradeVolumeLong[0];
    uint8_t SellersSaleDays;
    char StopStockIndicator;
    char TradeThroughExemptIndicator;
    char ShortSaleRestrictionIndicator;
    PriorDayTradeDateAndTimeT PriorDayTradeDateAndTime;
} OriginalTradeT;

/*
 * Structure: Corrected Trade
 */ 
typedef struct {
    SaleConditionsT SaleConditions;
    char TradePriceLong[0];
    char TradeVolumeLong[0];
    uint8_t SellersSaleDays;
    char StopStockIndicator;
    char TradeThroughExemptIndicator;
    char ShortSaleRestrictionIndicator;
    PriorDayTradeDateAndTimeT PriorDayTradeDateAndTime;
} CorrectedTradeT;

/*
 * Structure: Trade Correction Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    CorrectedTradeT CorrectedTrade;
    char TradeReportingFacilityId;
    Timestamp2T Timestamp2;
    int64_t OriginalParticipantReferenceNumber;
    OriginalTradeT OriginalTrade;
    char PrimaryListingMarketParticipantId;
    char FinancialStatusIndicator;
    ConsolidatedDataT ConsolidatedData;
    ParticipantDataT ParticipantData;
} TradeCorrectionMessageT;

/*
 * Structure: Auction Status Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    uint64_t AuctionCollarReferencePrice;
    uint64_t AuctionCollarUpperThresholdPrice;
    uint64_t AuctionCollarLowerThresholdPrice;
    uint8_t NumberOfExtensions;
    char ShortSaleRestrictionIndicator;
    char PrimaryListingMarketParticipantId;
    char FinancialStatusIndicator;
    char FutureUse[62];
} AuctionStatusMessageT;

/*
 * Structure: Trade
 */ 
typedef struct {
    char TradeMessageType;
} TradeT;

/*
 * Structure: Participant End Of Day Summary Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    char InitiatingParticipantId;
    uint32_t PreviousClosePriceDate;
    uint64_t LastPrice;
    uint64_t HighPrice;
    uint64_t LowPrice;
    uint64_t OpenPrice;
    uint64_t TotalVolume;
    char Tick;
} ParticipantEndOfDaySummaryMessageT;

/*
 * Structure: Consolidated End Of Day Summary Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    char LastParticipantId;
    uint32_t PreviousClosePriceDate;
    uint64_t LastPrice;
    uint64_t HighPrice;
    uint64_t LowPrice;
    uint64_t TotalVolume;
    char ShortSaleRestrictionIndicator;
    char PrimaryListingMarketParticipantId;
    char FinancialStatusIndicator;
    uint8_t NumberOfParticipants;
} ConsolidatedEndOfDaySummaryMessageT;

/*
 * Structure: Participant Start Of Day Summary Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    char ParticipantId;
    uint32_t PreviousClosePriceDate;
    uint64_t PreviousClosePrice;
} ParticipantStartOfDaySummaryMessageT;

/*
 * Structure: Consolidated Start Of Day Summary Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    char ParticipantId;
    uint32_t PreviousClosePriceDate;
    uint64_t PreviousClosePrice;
    char ShortSaleRestrictionIndicator;
    char PrimaryListingMarketParticipantId;
    char FinancialStatusIndicator;
    uint8_t NumberOfParticipants;
} ConsolidatedStartOfDaySummaryMessageT;

/*
 * Structure: Summary
 */ 
typedef struct {
    char SummaryMessageType;
} SummaryT;

/*
 * Structure: Prior Day Trade Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    SaleConditionsT SaleConditions;
    uint64_t TradePrice;
    uint32_t TradeVolume;
    uint8_t SellersSaleDays;
    char StopStockIndicator;
    char TradeThroughExemptIndicator;
    char ShortSaleRestrictionIndicator;
    char TradeReportingFacilityId;
    PriorDayTradeDateAndTimeT PriorDayTradeDateAndTime;
} PriorDayTradeMessageT;

/*
 * Structure: Prior Day Trade Correction Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char SecuritySymbol[11];
    char InstrumentType;
    CorrectedTradeT CorrectedTrade;
    char TradeReportingFacilityId;
    OriginalTradeT OriginalTrade;
} PriorDayTradeCorrectionMessageT;

/*
 * Structure: Prior Day
 */ 
typedef struct {
    char PriorDayMessageType;
} PriorDayT;

/*
 * Structure: Crossing Session Summary Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    uint64_t CrossingSession1TotalTradesVolume;
    uint64_t CrossingSession2DollarValue;
    uint64_t CrossingSession2TotalTradesVolume;
} CrossingSessionSummaryMessageT;

/*
 * Structure: Approximate Trades And Total Dollar Value Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    uint32_t TotalTrades;
    uint64_t DollarValue;
} ApproximateTradesAndTotalDollarValueMessageT;

/*
 * Structure: Participants
 */ 
typedef struct {
    char ParticipantId;
    uint64_t TradeTotalVolume;
} ParticipantsT;

/*
 * Structure: Approximate Adjusted Volume Market Center Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    uint8_t NumberOfParticipants;
} ApproximateAdjustedVolumeMarketCenterMessageT;

/*
 * Structure: Market Wide Circuit Breaker Status Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
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
    Timestamp1T Timestamp1;
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
 * Structure: Bid And Offer Index Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char IndexSymbol[11];
    int64_t BidIndexValue;
    int64_t OfferIndexValue;
} BidAndOfferIndexMessageT;

/*
 * Structure: Index Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
    char IndexSymbol[11];
    int64_t IndexValue;
} IndexMessageT;

/*
 * Structure: Index
 */ 
typedef struct {
    char IndexMessageType;
} IndexT;

/*
 * Structure: End Of Day Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} EndOfDayMessageT;

/*
 * Structure: Line Integrity Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} LineIntegrityMessageT;

/*
 * Structure: Disaster Recovery Data Center Activation Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} DisasterRecoveryDataCenterActivationMessageT;

/*
 * Structure: Reset Block Sequence Number Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} ResetBlockSequenceNumberMessageT;

/*
 * Structure: Start Of Day Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
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
 * Structure: End Of Start Of Day Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} EndOfStartOfDayMessageT;

/*
 * Structure: Start Of Start Of Day Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} StartOfStartOfDayMessageT;

/*
 * Structure: End Of End Of Day Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} EndOfEndOfDayMessageT;

/*
 * Structure: Start Of End Of Day Message
 */ 
typedef struct {
    char ParticipantId;
    Timestamp1T Timestamp1;
    uint8_t MessageId;
    uint32_t TransactionId;
    int64_t ParticipantReferenceNumber;
} StartOfEndOfDayMessageT;

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
   Version: 2.9
   Date: Friday, December 16, 2022
   Specification: CTS_Pillar_Output_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
