/*******************************************************************************
 * C Structs For Nasdaq Uqdf Utp Output 1.5 Binary Model
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
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_SESSION_CLOSE_RECAP_MESSAGE 'R'

/*
 * Authenticity Values
 */ 
#define ENUM_AUTHENTICITY_PRODUCTION 'P'
#define ENUM_AUTHENTICITY_TEST 'T'
#define ENUM_AUTHENTICITY_DEMO 'D'
#define ENUM_AUTHENTICITY_DELETED 'X'

/*
 * Control Message Type Values
 */ 
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_DAY_MESSAGE 'I'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_DAY_MESSAGE 'J'
#define ENUM_CONTROL_MESSAGE_TYPE_MARKET_SESSION_OPEN_MESSAGE 'O'
#define ENUM_CONTROL_MESSAGE_TYPE_MARKET_SESSION_CLOSE_MESSAGE 'C'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_TRANSMISSIONS_MESSAGE 'Z'
#define ENUM_CONTROL_MESSAGE_TYPE_QUOTE_WIPE_OUT_MESSAGE 'P'

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
 * Finra Adf Mpid Appendage Indicator Values
 */ 
#define ENUM_FINRA_ADF_MPID_APPENDAGE_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_FINRA_ADF_MPID_APPENDAGE_INDICATOR_NO_ADF_MPID_CHANGES '0'
#define ENUM_FINRA_ADF_MPID_APPENDAGE_INDICATOR_NO_ADF_MPID_EXISTS '1'
#define ENUM_FINRA_ADF_MPID_APPENDAGE_INDICATOR_ADF_MPI_DS_ATTACHED '2'

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
 * Luld Bbo Indicator Values
 */ 
#define ENUM_LULD_BBO_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_LULD_BBO_INDICATOR_BID_PRICE_ABOVE_UPPER_LIMIT_PRICE_BAND 'A'
#define ENUM_LULD_BBO_INDICATOR_ASK_PRICE_BELOW_LOWER_LIMIT_PRICE_BAND 'B'
#define ENUM_LULD_BBO_INDICATOR_BID_AND_ASK_OUTSIDE_PRICE_BAND 'C'

/*
 * Luld National Bbo Indicator Values
 */ 
#define ENUM_LULD_NATIONAL_BBO_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_LULD_NATIONAL_BBO_INDICATOR_NATIONAL_BEST_BID_AND_NATIONAL_BEST_ASK_ARE_EXECUTABLE 'A'
#define ENUM_LULD_NATIONAL_BBO_INDICATOR_NATIONAL_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND 'B'
#define ENUM_LULD_NATIONAL_BBO_INDICATOR_NATIONAL_BEST_ASK_ABOVE_UPPER_LIMIT_PRICE_BAND 'C'
#define ENUM_LULD_NATIONAL_BBO_INDICATOR_NATIONAL_BEST_BID_BELOW_LOWER_LIMIT_PRICE_BAND_AND_NATIONAL_BEST_ASK_ABOVE_UPPER_LIMIT_PRICE_BAND 'D'
#define ENUM_LULD_NATIONAL_BBO_INDICATOR_NATIONAL_BEST_BID_EQUALS_UPPER_LIMIT_PRICE_BAND 'E'
#define ENUM_LULD_NATIONAL_BBO_INDICATOR_NATIONAL_BEST_OFFER_EQUALS_LOWER_LIMIT_PRICE_BAND 'F'
#define ENUM_LULD_NATIONAL_BBO_INDICATOR_NATIONAL_BEST_BID_EQUALS_UPPER_LIMIT_PRICE_BAND 'G'
#define ENUM_LULD_NATIONAL_BBO_INDICATOR_NATIONAL_BEST_ASK_EQUALS_LOWER_LIMIT_PRICE_BAND 'H'
#define ENUM_LULD_NATIONAL_BBO_INDICATOR_NATIONAL_BEST_BID_EQUALS_UPPER_LIMIT_PRICE_BAND_AND_NATIONAL_BEST_ASK_EQUALS_LOWER_LIMIT_PRICE_BAND 'I'

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
 * Nbbo Appendage Indicator Values
 */ 
#define ENUM_NBBO_APPENDAGE_INDICATOR_NO_NATIONAL_BBO_CHANGE '0'
#define ENUM_NBBO_APPENDAGE_INDICATOR_NO_NATIONAL_BBO_CAN_BE_CALCULATED '1'
#define ENUM_NBBO_APPENDAGE_INDICATOR_SHORT_FORM_NATIONAL_BBO_APPENDAGE '2'
#define ENUM_NBBO_APPENDAGE_INDICATOR_LONG_FORM_NATIONAL_BBO_APPENDAGE '3'
#define ENUM_NBBO_APPENDAGE_INDICATOR_QUOTE_CONTAINS_ALL_NATIONAL_BBO_INFORMATION '4'

/*
 * Nbbo Quote Condition Values
 */ 
#define ENUM_NBBO_QUOTE_CONDITION_MANUAL_ASK_AUTOMATED_BID 'A'
#define ENUM_NBBO_QUOTE_CONDITION_MANUAL_BID_AUTOMATED_ASK 'B'
#define ENUM_NBBO_QUOTE_CONDITION_FAST_TRADING 'F'
#define ENUM_NBBO_QUOTE_CONDITION_MANUAL_BID_AND_ASK 'H'
#define ENUM_NBBO_QUOTE_CONDITION_ORDER_IMBALANCE 'I'
#define ENUM_NBBO_QUOTE_CONDITION_CLOSED_QUOTE 'L'
#define ENUM_NBBO_QUOTE_CONDITION_NON_FIRM_QUOTE 'N'
#define ENUM_NBBO_QUOTE_CONDITION_OPENING_QUOTE_AUTOMATED 'O'
#define ENUM_NBBO_QUOTE_CONDITION_REGULAR_TWO_SIDED_OPEN_QUOTE_AUTOMATED 'R'
#define ENUM_NBBO_QUOTE_CONDITION_MANUAL_BID_AND_ASK_NON_FIRM 'U'
#define ENUM_NBBO_QUOTE_CONDITION_ORDER_INFLUX 'X'
#define ENUM_NBBO_QUOTE_CONDITION_AUTOMATED_BID_NO_OFFER_OR_AUTOMATED_OFFER_NO_BID 'Y'
#define ENUM_NBBO_QUOTE_CONDITION_NO_OPEN_NO_RESUME 'Z'
#define ENUM_NBBO_QUOTE_CONDITION_INTRADAY_AUCTION '4'

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_MANUAL_ASK_AUTOMATED_BID 'A'
#define ENUM_QUOTE_CONDITION_MANUAL_BID_AUTOMATED_ASK 'B'
#define ENUM_QUOTE_CONDITION_FAST_TRADING 'F'
#define ENUM_QUOTE_CONDITION_MANUAL_BID_AND_ASK 'H'
#define ENUM_QUOTE_CONDITION_ORDER_IMBALANCE 'I'
#define ENUM_QUOTE_CONDITION_CLOSED_QUOTE 'L'
#define ENUM_QUOTE_CONDITION_NON_FIRM_QUOTE 'N'
#define ENUM_QUOTE_CONDITION_OPENING_QUOTE_AUTOMATED 'O'
#define ENUM_QUOTE_CONDITION_REGULAR_TWO_SIDED_OPEN_QUOTE_AUTOMATED 'R'
#define ENUM_QUOTE_CONDITION_MANUAL_BID_AND_ASK_NON_FIRM 'U'
#define ENUM_QUOTE_CONDITION_ORDER_INFLUX 'X'
#define ENUM_QUOTE_CONDITION_AUTOMATED_BID_NO_OFFER_OR_AUTOMATED_OFFER_NO_BID 'Y'
#define ENUM_QUOTE_CONDITION_NO_OPEN_NO_RESUME 'Z'
#define ENUM_QUOTE_CONDITION_INTRADAY_AUCTION '4'

/*
 * Quote Message Type Values
 */ 
#define ENUM_QUOTE_MESSAGE_TYPE_QUOTE_SHORT_FORM_MESSAGE 'E'
#define ENUM_QUOTE_MESSAGE_TYPE_QUOTE_LONG_FORM_MESSAGE 'F'
#define ENUM_QUOTE_MESSAGE_TYPE_FINRA_ADF_MARKET_PARTICIPANT_QUOTATION_MESSAGE 'M'

/*
 * Reg Sho Action Values
 */ 
#define ENUM_REG_SHO_ACTION_NO_PRICE_TEST_IN_EFFECT '0'
#define ENUM_REG_SHO_ACTION_REG_SHO_IN_EFFECT_DUE_TO_AN_INTRA_DAY_PRICE_DROP '1'
#define ENUM_REG_SHO_ACTION_REG_SHO_RESTRICTION_REMAINS_IN_EFFECT '2'

/*
 * Retail Interest Indicator Values
 */ 
#define ENUM_RETAIL_INTEREST_INDICATOR_NOT_APPLICABLE ' '
#define ENUM_RETAIL_INTEREST_INDICATOR_ON_BID_QUOTE 'A'
#define ENUM_RETAIL_INTEREST_INDICATOR_ON_ASK_QUOTE 'B'
#define ENUM_RETAIL_INTEREST_INDICATOR_ON_BOTH_BID_AND_ASK_QUOTE 'C'

/*
 * Short Sale Threshold Indicator Values
 */ 
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_ISSUE_IS_RESTRICTED 'Y'
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_ISSUE_IS_NOT_RESTRICTED 'N'
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_NOT_AVAILABLE ' '

/*
 * Sip Generated Update Values
 */ 
#define ENUM_SIP_GENERATED_UPDATE_ORIGINATED_FROM_THE_MARKET_PARTICIPANT ' '
#define ENUM_SIP_GENERATED_UPDATE_SI_PGENERATED_TRANSACTION 'E'

/*
 * Special Condition Values
 */ 
#define ENUM_SPECIAL_CONDITION_ONE_SIDED_NATIONAL_BBO_AT_MARKET_CLOSE 'O'
#define ENUM_SPECIAL_CONDITION_TRADING_HALT_IN_EFFECT_AT_MARKET_CLOSE 'H'
#define ENUM_SPECIAL_CONDITION_NO_ELIGIBLE_MARKET_PARTICIPANT_QUOTES_IN_ISSUE_AT_MARKET_CLOSE 'M'
#define ENUM_SPECIAL_CONDITION_NO_SPECIAL_CONDITION_EXISTS ' '

/*
 * Sub Market Center Id Values
 */ 
#define ENUM_SUB_MARKET_CENTER_ID_NYSE_TRF 'N'
#define ENUM_SUB_MARKET_CENTER_ID_NASDAQ_TRF_CARTERET 'Q'
#define ENUM_SUB_MARKET_CENTER_ID_NASDAQ_TRF_CHICAGO 'B'
#define ENUM_SUB_MARKET_CENTER_ID_FINRA_ALTERNATIVE_DISPLAY_FACILITY ' '

/*
 * Trading Action Code Values
 */ 
#define ENUM_TRADING_ACTION_CODE_TRADING_HALT 'H'
#define ENUM_TRADING_ACTION_CODE_QUOTATION_RESUMPTION_INCLUDING_AFTER_EMA 'Q'
#define ENUM_TRADING_ACTION_CODE_TRADING_RESUMPTION 'T'
#define ENUM_TRADING_ACTION_CODE_VOLATILITY_TRADING_PAUSE 'P'


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
 * Structure: Quote Wipe Out Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
} QuoteWipeOutMessageT;

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
 * Structure: Market Center Close Recap
 */ 
typedef struct {
    char MarketCenterIdentifier[1];
    uint64_t MarketCenterBidPrice;
    uint64_t MarketCenterBidSize;
    uint64_t MarketCenterAskPrice;
    uint64_t MarketCenterAskSize;
} MarketCenterCloseRecapT;

/*
 * Structure: Session Close Recap Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[11];
    char NationalBestBidMarketCenter[1];
    uint64_t NationalBestBidPrice;
    uint64_t NationalBestBidSize;
    char NationalBestAskMarketCenter[1];
    uint64_t NationalBestAskPrice;
    uint64_t NationalBestAskSize;
    char SpecialCondition;
    uint16_t NumberOfMarketCenterAttachments;
} SessionCloseRecapMessageT;

/*
 * Structure: Auction Collar Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[11];
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
    char Symbol[11];
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
    char Symbol[11];
    char RegShoAction;
} RegulationShoShortSalePriceTestRestrictedIndicatorMessageT;

/*
 * Structure: Issue Symbol Directory Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[11];
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
    char Symbol[11];
    char TradingActionCode;
    uint64_t ActionTimestamp;
    char MarketCenterIdentifier[1];
} MarketCenterTradingActionMessageT;

/*
 * Structure: Cross Sro Trading Action Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    char Symbol[11];
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
 * Structure: Finra Adf Market Participant Quotation Message
 */ 
typedef struct {
    MessageInfoT MessageInfo;
    uint64_t FinraTimestamp;
    char Symbol[11];
    uint64_t BidPrice;
    uint32_t BidSize;
    uint64_t AskPrice;
    uint32_t AskSize;
    char QuoteCondition;
    char FinraMarketParticipant[4];
} FinraAdfMarketParticipantQuotationMessageT;

/*
 * Structure: Finra Adf Mpid Appendage
 */ 
typedef struct {
    char BidAdfMpid[4];
    char AskAdfMpid[4];
} FinraAdfMpidAppendageT;

/*
 * Structure: Long Form National Bbo Appendage
 */ 
typedef struct {
    char NbboQuoteCondition;
    char BestBidMarketCenter[1];
    uint64_t BestBidPrice;
    uint32_t BestBidSize;
    char BestAskMarketCenter[1];
    uint64_t BestAskPrice;
    uint32_t BestAskSize;
} LongFormNationalBboAppendageT;

/*
 * Structure: Short Form National Bbo Appendage
 */ 
typedef struct {
    char NbboQuoteCondition;
    char NationalBestBidMarketCenter[1];
    uint16_t NationalBestBidPriceShort;
    uint16_t NationalBestBidSizeShort;
    char NationalBestAskMarketCenter[1];
    uint16_t NationalBestAskPriceShort;
    uint16_t NationalBestAskSizeShort;
} ShortFormNationalBboAppendageT;

/*
 * Structure: Quote
 */ 
typedef struct {
    char QuoteMessageType;
} QuoteT;

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
