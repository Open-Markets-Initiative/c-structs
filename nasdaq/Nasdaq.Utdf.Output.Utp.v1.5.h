/*******************************************************************************
 * C Structs For Nasdaq Utdf Utp Output 1.5 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Administrative Message Type Values
 */ 
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_GENERAL_ADMINISTRATIVE_MESSAGE 'A'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_CROSS_SRO_TRADING_ACTION_MESSAGE 'H'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_MARKET_CENTER_TRADING_ACTION_MESSAGE 'H'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_ISSUE_SYMBOL_DIRECTORY_MESSAGE 'B'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_REGULATION_SHO_SHORT_SALE_PRICE_TEST_RESTRICTED_INDICATOR_MESSAGE 'V'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_LIMIT_UP_LIMIT_DOWN_PRICE_BAND_MESSAGE 'P'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_MARKET_WIDE_CIRCUIT_BREAKER_DECLINE_LEVEL_MESSAGE 'C'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_MARKET_WIDE_CIRCUIT_BREAKER_DECLINE_LEVEL_MESSAGE 'D'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_AUCTION_COLLAR_MESSAGE 'E'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_CLOSING_TRADE_SUMMARY_REPORT_MESSAGE 'Z'

/*
 * As Of Action Values
 */ 
#define ENUM_AS_OF_ACTION_TRADE_ADDITION 'A'
#define ENUM_AS_OF_ACTION_TRADE_CANCEL 'C'

/*
 * Authenticity Values
 */ 
#define ENUM_AUTHENTICITY_PRODUCTION 'P'
#define ENUM_AUTHENTICITY_TEST 'T'
#define ENUM_AUTHENTICITY_DEMO 'D'
#define ENUM_AUTHENTICITY_DELETED 'X'

/*
 * Consolidated Price Change Indicator Values
 */ 
#define ENUM_CONSOLIDATED_PRICE_CHANGE_INDICATOR_NO_PRICES_CHANGED '0'
#define ENUM_CONSOLIDATED_PRICE_CHANGE_INDICATOR_CONSOLIDATED_LAST_PRICE_CHANGED '1'
#define ENUM_CONSOLIDATED_PRICE_CHANGE_INDICATOR_CONSOLIDATED_LOW_PRICE_CHANGED '2'
#define ENUM_CONSOLIDATED_PRICE_CHANGE_INDICATOR_CONSOLIDATED_LAST_AND_CONSOLIDATED_LOW_PRICES_CHANGED '3'
#define ENUM_CONSOLIDATED_PRICE_CHANGE_INDICATOR_CONSOLIDATED_HIGH_PRICE_CHANGED '4'
#define ENUM_CONSOLIDATED_PRICE_CHANGE_INDICATOR_CONSOLIDATED_LAST_AND_CONSOLIDATED_HIGH_PRICES_CHANGED '5'
#define ENUM_CONSOLIDATED_PRICE_CHANGE_INDICATOR_CONSOLIDATED_HIGH_AND_CONSOLIDATED_LOW_PRICES_CHANGED '6'
#define ENUM_CONSOLIDATED_PRICE_CHANGE_INDICATOR_ALL_CONSOLIDATED_PRICES_CHANGED '7'

/*
 * Control Message Type Values
 */ 
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_DAY_MESSAGE 'I'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_DAY_MESSAGE 'J'
#define ENUM_CONTROL_MESSAGE_TYPE_MARKET_SESSION_OPEN_MESSAGE 'O'
#define ENUM_CONTROL_MESSAGE_TYPE_MARKET_SESSION_CLOSE_MESSAGE 'C'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_TRANSMISSIONS_MESSAGE 'Z'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_TRADE_REPORTING_MESSAGE 'X'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_CONSOLIDATED_LAST_SALE_ELIGIBILITY 'S'

/*
 * Financial Status Indicator Values
 */ 
#define ENUM_FINANCIAL_STATUS_INDICATOR_CREATIONS_AND_OR_REDEMPTIONS_SUSPENDED 'C'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT 'D'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT 'E'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT 'Q'
#define ENUM_FINANCIAL_STATUS_INDICATOR_NORMAL 'Q'
#define ENUM_FINANCIAL_STATUS_INDICATOR_NORMAL 'G'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_DELINQUENT 'H'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT_AND_BANKRUPT 'J'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_DELINQUENT_AND_BANKRUPT 'K'

/*
 * Issue Type Values
 */ 
#define ENUM_ISSUE_TYPE_AMERICAN_DEPOSITORY_RECEIPT 'A'
#define ENUM_ISSUE_TYPE_BOND 'B'
#define ENUM_ISSUE_TYPE_COMMON_STOCK 'C'
#define ENUM_ISSUE_TYPE_DEPOSITORY_RECEIPT 'F'
#define ENUM_ISSUE_TYPE_RULE_144A 'I'
#define ENUM_ISSUE_TYPE_LIMITED_PARTNERSHIP 'L'
#define ENUM_ISSUE_TYPE_NOTE 'N'
#define ENUM_ISSUE_TYPE_ORDINARY_SHARES 'O'
#define ENUM_ISSUE_TYPE_PREFERRED_STOCK 'P'
#define ENUM_ISSUE_TYPE_OTHER_SECURITIES 'Q'
#define ENUM_ISSUE_TYPE_RIGHTS 'R'
#define ENUM_ISSUE_TYPE_SHARES_OF_BENEFICIAL_INTEREST 'S'
#define ENUM_ISSUE_TYPE_CONVERTIBLE_DEBENTURE 'T'
#define ENUM_ISSUE_TYPE_UNIT 'U'
#define ENUM_ISSUE_TYPE_UNITS_OF_BENEFICIAL_INTEREST 'V'
#define ENUM_ISSUE_TYPE_WARRANT 'W'

/*
 * Level 1 Values
 */ 
#define ENUM_LEVEL_1_REGULAR_TRADE '@'
#define ENUM_LEVEL_1_CASH 'C'
#define ENUM_LEVEL_1_NEXT_DAY 'N'
#define ENUM_LEVEL_1_SELLER 'R'
#define ENUM_LEVEL_1_YELLOW_FLAG 'Y'
#define ENUM_LEVEL_1_NOT_AVAILABLE ' '

/*
 * Level 2 Values
 */ 
#define ENUM_LEVEL_2_INTERMARKET_SWEEP 'F'
#define ENUM_LEVEL_2_OPENING_PRINTS 'O'
#define ENUM_LEVEL_2_DERIVATIVELY_PRICED '4'
#define ENUM_LEVEL_2_RE_OPENING_PRINTS '5'
#define ENUM_LEVEL_2_CLOSING_PRINTS '6'
#define ENUM_LEVEL_2_QUALIFIED_CONTINGENT_TRADE '7'
#define ENUM_LEVEL_2_PLACEHOLDER_FOR_611_EXEMPT '8'
#define ENUM_LEVEL_2_CORRECTED_CONSOLIDATED_CLOSE '9'
#define ENUM_LEVEL_2_NOT_AVAILABLE ' '

/*
 * Level 3 Values
 */ 
#define ENUM_LEVEL_3_FORM_T 'T'
#define ENUM_LEVEL_3_SOLD_LAST 'L'
#define ENUM_LEVEL_3_SOLD_OUT_OF_SEQUENCE 'Z'
#define ENUM_LEVEL_3_EXTENDED_TRADING_HOURS 'U'
#define ENUM_LEVEL_3_NOT_AVAILABLE ' '
#define ENUM_LEVEL_3_STOPPED_STOCK '1'
#define ENUM_LEVEL_3_ACQUISITION 'A'
#define ENUM_LEVEL_3_BUNCHED 'B'
#define ENUM_LEVEL_3_DISTRIBUTION 'D'
#define ENUM_LEVEL_3_PLACEHOLDER_FUTURE 'E'
#define ENUM_LEVEL_3_BUNCHED_SOLD_TRADE 'G'
#define ENUM_LEVEL_3_PRICE_VARIATION 'H'
#define ENUM_LEVEL_3_ODD_LOT_TRADE 'I'
#define ENUM_LEVEL_3_RULE_155 'K'
#define ENUM_LEVEL_3_MARKET_CENTER_OFFICIAL_CLOSE_PRICE 'M'
#define ENUM_LEVEL_3_PRIOR_REFERENCE_PRICE 'P'
#define ENUM_LEVEL_3_MARKET_CENTER_OFFICIAL_OPEN_PRICE 'Q'
#define ENUM_LEVEL_3_SPLIT_TRADE 'S'
#define ENUM_LEVEL_3_CONTINGENT_TRADE 'V'
#define ENUM_LEVEL_3_AVERAGE_PRICE_TRADE 'W'
#define ENUM_LEVEL_3_CROSS_TRADE 'X'

/*
 * Luld Price Band Indicator Values
 */ 
#define ENUM_LULD_PRICE_BAND_INDICATOR_OPENING_UPDATE 'A'
#define ENUM_LULD_PRICE_BAND_INDICATOR_INTRA_DAY_UPDATE 'B'
#define ENUM_LULD_PRICE_BAND_INDICATOR_RESTATED_VALUE 'C'
#define ENUM_LULD_PRICE_BAND_INDICATOR_SUSPENDED_DURING_TRADING_HALT_OR_TRADING_PAUSE 'D'
#define ENUM_LULD_PRICE_BAND_INDICATOR_RE_OPENING_UPDATE 'E'
#define ENUM_LULD_PRICE_BAND_INDICATOR_OUTSIDE_PRICE_BAND_RULE_HOURS 'F'
#define ENUM_LULD_PRICE_BAND_INDICATOR_NONE_PROVIDED ' '

/*
 * Market Center Close Indicator Values
 */ 
#define ENUM_MARKET_CENTER_CLOSE_INDICATOR_BASED_ON_M_SALE_CONDITION 'M'
#define ENUM_MARKET_CENTER_CLOSE_INDICATOR_NOT_BASED_ON_M_SALE_CONDITION ' '

/*
 * Market Center Originator Id Values
 */ 
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_BYX 'Y'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_BZX 'Z'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_EDGA 'J'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_EDGX 'K'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_CBOE 'W'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_BX 'B'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_PHLX 'X'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_NASDAQ 'Q'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_ISE 'I'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_NYSE 'N'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_ARCA 'P'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_AMERICAN 'A'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_NATIONAL 'C'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_CHICAGO 'M'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_FINRA 'D'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_IEX 'V'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_LTSE 'L'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_PEARL 'H'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_MEMX 'U'
#define ENUM_MARKET_CENTER_ORIGINATOR_ID_MARKET_INDEPENDENT 'E'

/*
 * Market Tier Values
 */ 
#define ENUM_MARKET_TIER_NASDAQ_GLOBAL_SELECT_MARKET 'Q'
#define ENUM_MARKET_TIER_NASDAQ_GLOBAL_MARKET 'G'
#define ENUM_MARKET_TIER_NASDAQ_CAPITAL_MARKET 'S'

/*
 * Participant Price Change Indicator Values
 */ 
#define ENUM_PARTICIPANT_PRICE_CHANGE_INDICATOR_NO_PRICES_CHANGED '0'
#define ENUM_PARTICIPANT_PRICE_CHANGE_INDICATOR_PARTICIPANT_LAST_PRICE_CHANGED '1'
#define ENUM_PARTICIPANT_PRICE_CHANGE_INDICATOR_PARTICIPANT_LOW_PRICE_CHANGED '2'
#define ENUM_PARTICIPANT_PRICE_CHANGE_INDICATOR_PARTICIPANT_LAST_AND_LOW_PRICES_CHANGED '3'
#define ENUM_PARTICIPANT_PRICE_CHANGE_INDICATOR_PARTICIPANT_HIGH_PRICE_CHANGED '4'
#define ENUM_PARTICIPANT_PRICE_CHANGE_INDICATOR_PARTICIPANT_LAST_AND_HIGH_PRICES_CHANGED '5'
#define ENUM_PARTICIPANT_PRICE_CHANGE_INDICATOR_PARTICIPANT_HIGH_AND_LOW_PRICES_CHANGED '6'
#define ENUM_PARTICIPANT_PRICE_CHANGE_INDICATOR_ALL_PARTICIPANT_PRICES_CHANGED '7'

/*
 * Reg Sho Action Values
 */ 
#define ENUM_REG_SHO_ACTION_NO_PRICE_TEST_IN_EFFECT '0'
#define ENUM_REG_SHO_ACTION_REG_SHO_IN_EFFECT_DUE_TO_AN_INTRA_DAY_PRICE_DROP '1'
#define ENUM_REG_SHO_ACTION_REG_SHO_RESTRICTION_REMAINS_IN_EFFECT '2'

/*
 * Short Sale Threshold Indicator Values
 */ 
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_ISSUE_IS_RESTRICTED 'Y'
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_ISSUE_IS_NOT_RESTRICTED 'N'
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_NOT_AVAILABLE ' '

/*
 * Sub Market Center Id Values
 */ 
#define ENUM_SUB_MARKET_CENTER_ID_NYSE_TRF 'N'
#define ENUM_SUB_MARKET_CENTER_ID_NASDAQ_TRF_CARTERET 'Q'
#define ENUM_SUB_MARKET_CENTER_ID_NASDAQ_TRF_CHICAGO 'B'
#define ENUM_SUB_MARKET_CENTER_ID_FINRA_ALTERNATIVE_DISPLAY_FACILITY ' '

/*
 * Trade Message Type Values
 */ 
#define ENUM_TRADE_MESSAGE_TYPE_TRADE_REPORT_MESSAGE_SHORT_FORM_MESSAGE 'A'
#define ENUM_TRADE_MESSAGE_TYPE_TRADE_REPORT_MESSAGE_LONG_FORM_MESSAGE 'W'
#define ENUM_TRADE_MESSAGE_TYPE_TRADE_CANCEL_ERROR_MESSAGE 'Z'
#define ENUM_TRADE_MESSAGE_TYPE_TRADE_CORRECTION_MESSAGE 'Y'
#define ENUM_TRADE_MESSAGE_TYPE_PRIOR_DAY_AS_OF_TRADE_MESSAGE 'H'

/*
 * Trading Action Code Values
 */ 
#define ENUM_TRADING_ACTION_CODE_TRADING_HALT 'H'
#define ENUM_TRADING_ACTION_CODE_QUOTATION_RESUMPTION_INCLUDING_AFTER_EMA 'Q'
#define ENUM_TRADING_ACTION_CODE_TRADING_RESUMPTION 'T'
#define ENUM_TRADING_ACTION_CODE_VOLATILITY_TRADING_PAUSE 'P'

/*
 * Trading Action Indicator Values
 */ 
#define ENUM_TRADING_ACTION_INDICATOR_TRADING_HALT 'H'
#define ENUM_TRADING_ACTION_INDICATOR_REGULAR_TRADING ' '

/*
 * Volume Message Type Values
 */ 
#define ENUM_VOLUME_MESSAGE_TYPE_TOTAL_CONSOLIDATED_AND_MARKET_CENTER_VOLUME_MESSAGE 'M'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Message Info
 */ 
typedef struct {
    char MarketCenterOriginatorId;
    char SubMarketCenterId;
    uint64_t SipTimestamp;
    uint64_t ParticipantTimestamp;
    uint64_t ParticipantToken;
} MessageInfoT;

/*
 * Structure: End Of Consolidated Last Sale Eligibility
 */ 
typedef struct {
    MessageInfoT MessageInfo;
} EndOfConsolidatedLastSaleEligibilityT;

/*
 * Structure: End Of Trade Reporting Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
} EndOfTradeReportingMessageT;

/*
 * Structure: End Of Transmissions Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
} EndOfTransmissionsMessageT;

/*
 * Structure: Market Session Close Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
} MarketSessionCloseMessageT;

/*
 * Structure: Market Session Open Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
} MarketSessionOpenMessageT;

/*
 * Structure: End Of Day Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
} EndOfDayMessageT;

/*
 * Structure: Start Of Day Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
} StartOfDayMessageT;

/*
 * Structure: Control
 */ 
typedef struct {
    char ControlMessageType;
} ControlT;

/*
 * Structure: Market Center Volume Attachment
 */ 
typedef struct {
    char MarketCenterIdentifier[1];
    uint64_t CurrentMarketCenterVolume;
} MarketCenterVolumeAttachmentT;

/*
 * Structure: Total Consolidated And Market Center Volume Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    uint64_t TotalConsolidatedVolume;
    uint16_t NumberOfMarketCenterVolumes;
} TotalConsolidatedAndMarketCenterVolumeMessageT;

/*
 * Structure: Volume
 */ 
typedef struct {
    char VolumeMessageType;
} VolumeT;

/*
 * Structure: Market Center Closing Price And Volume Summary
 */ 
typedef struct {
    char MarketCenterIdentifier[1];
    uint64_t MarketCenterClosingPrice;
    uint64_t MarketCenterVolume;
    char MarketCenterCloseIndicator;
    uint64_t MarketParticipantHighPrice;
    uint64_t MarketParticipantLowPrice;
} MarketCenterClosingPriceAndVolumeSummaryT;

/*
 * Structure: Closing Trade Summary Report Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[5];
    uint64_t DailyConsolidatedHighPrice;
    uint64_t DailyConsolidatedLowPrice;
    uint64_t DailyConsolidatedClosingPrice;
    char MarketCenterOriginatorId;
    uint64_t ConsolidatedVolume;
    char TradingActionIndicator;
    uint16_t NumberOfMarketCenterSummaries;
} ClosingTradeSummaryReportMessageT;

/*
 * Structure: Auction Collar Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[5];
    uint32_t TradingActionSequenceNumber;
    uint64_t CollarReferencePrice;
    uint64_t CollarUpPrice;
    uint64_t CollarDownPrice;
    char CollarExtensionIndicator[1];
} AuctionCollarMessageT;

/*
 * Structure: Market Wide Circuit Breaker Decline Level Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    uint64_t MwcbLevel1;
    uint64_t MwcbLevel2;
    uint64_t MwcbLevel3;
} MarketWideCircuitBreakerDeclineLevelMessageT;

/*
 * Structure: Limit Up Limit Down Price Band Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[5];
    char LuldPriceBandIndicator;
    uint64_t LuldTimestamp;
    uint64_t LimitDownPrice;
    uint64_t LimitUpPrice;
} LimitUpLimitDownPriceBandMessageT;

/*
 * Structure: Regulation Sho Short Sale Price Test Restricted Indicator Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[5];
    char RegShoAction;
} RegulationShoShortSalePriceTestRestrictedIndicatorMessageT;

/*
 * Structure: Issue Symbol Directory Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[5];
    char OldSymbol[11];
    char IssueName[30];
    char IssueType;
    char IssueSubtype[2];
    char MarketTier;
    char Authenticity;
    char ShortSaleThresholdIndicator;
    uint16_t RoundLotSize;
    char FinancialStatusIndicator;
} IssueSymbolDirectoryMessageT;

/*
 * Structure: Market Center Trading Action Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[5];
    char TradingActionCode;
    uint64_t ActionTimestamp;
    char MarketCenterIdentifier[1];
} MarketCenterTradingActionMessageT;

/*
 * Structure: Cross Sro Trading Action Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[5];
    char TradingActionCode;
    uint32_t TradingActionSequenceNumber;
    uint64_t ActionTimestamp;
    char TradingActionReason[6];
} CrossSroTradingActionMessageT;

/*
 * Structure: General Administrative Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    uint16_t TextLength;
} GeneralAdministrativeMessageT;

/*
 * Structure: Administrative
 */ 
typedef struct {
    char AdministrativeMessageType;
} AdministrativeT;

/*
 * Structure: Sale Condition
 */ 
typedef struct {
    char Level1;
    char Level2;
    char Level3;
    char Level4[1];
} SaleConditionT;

/*
 * Structure: Prior Day As Of Trade Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    uint64_t FinraTimestamp;
    char Symbol[5];
    uint64_t TradeId;
    uint64_t TradePrice;
    uint32_t TradeVolume;
    SaleConditionT SaleCondition;
    char TradeThroughExemptFlag[1];
    uint16_t SellersSaleDays;
    char AsOfAction;
    uint64_t TimestampOfTrade;
} PriorDayAsOfTradeMessageT;

/*
 * Structure: Trade Correction Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    uint64_t FinraTimestamp;
    char Symbol[5];
    uint64_t OriginalTradeId;
    uint64_t OriginalTradePrice;
    uint32_t OriginalVolume;
    char OriginalSaleCondition[0];
    char OriginalTradeThroughExemptFlag[1];
    uint16_t OriginalSellersSaleDays;
    uint64_t CorrectedTradeId;
    uint64_t CorrectedTradePrice;
    uint32_t CorrectedVolume;
    char CorrectedSaleCondition[0];
    char CorrectedTradeThroughExemptFlag[1];
    uint16_t CorrectedSellersSaleDays;
    uint64_t ConsolidatedHighPrice;
    uint64_t ConsolidatedLowPrice;
    uint64_t ConsolidatedLastPrice;
    uint64_t ConsolidatedVolume;
    char ConsolidatedPriceChangeIndicator;
    char MarketCenterOriginatorId;
    uint64_t MarketParticipantHighPrice;
    uint64_t MarketParticipantLowPrice;
    uint64_t MarketParticipantLastPrice;
    uint64_t MarketParticipantVolume;
} TradeCorrectionMessageT;

/*
 * Structure: Trade Cancel Error Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    uint64_t FinraTimestamp;
    char Symbol[5];
    char TradeCancellationType[1];
    uint64_t OriginalTradeId;
    uint64_t OriginalTradePrice;
    uint32_t OriginalVolume;
    char OriginalSaleCondition[0];
    char OriginalTradeThroughExemptFlag[1];
    uint16_t OriginalSellersSaleDays;
    uint64_t ConsolidatedHighPrice;
    uint64_t ConsolidatedLowPrice;
    uint64_t ConsolidatedLastPrice;
    uint64_t ConsolidatedVolume;
    char ConsolidatedPriceChangeIndicator;
    char MarketCenterOriginatorId;
    uint64_t MarketParticipantHighPrice;
    uint64_t MarketParticipantLowPrice;
    uint64_t MarketParticipantLastPrice;
    uint64_t MarketParticipantVolume;
} TradeCancelErrorMessageT;

/*
 * Structure: Trade Report Message Long Form Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    uint64_t FinraTimestamp;
    char Symbol[5];
    uint64_t TradeId;
    uint64_t TradePrice;
    uint32_t TradeVolume;
    SaleConditionT SaleCondition;
    char TradeThroughExemptFlag[1];
    uint16_t SellersSaleDays;
    char ConsolidatedPriceChangeIndicator;
    char ParticipantPriceChangeIndicator;
} TradeReportMessageLongFormMessageT;

/*
 * Structure: Trade Report Message Short Form Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    uint64_t FinraTimestamp;
    char Symbol[5];
    uint64_t TradeId;
    uint16_t TradePriceShort;
    uint16_t TradeVolumeShort;
    SaleConditionT SaleCondition;
    char TradeThroughExemptFlag[1];
    char ConsolidatedPriceChangeIndicator;
    char ParticipantPriceChangeIndicator;
} TradeReportMessageShortFormMessageT;

/*
 * Structure: Trade
 */ 
typedef struct {
    char TradeMessageType;
} TradeT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageLength;
    uint8_t Version;
    char MessageCategory[1];
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
    char Session[10];
    uint64_t Sequence;
    uint16_t Count;
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
   Organization: National Association of Securities Dealers Automated Quotations
   Version: 1.5
   Date: Friday, May 1, 2020
   Specification: UtpBinaryOutputSpec.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
