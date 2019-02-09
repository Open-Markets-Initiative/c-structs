/*******************************************************************************
 * C Structs For Cme Sbe Streamline 9.5 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_AGGRESSOR_SIDE_0 = "0"
#define ENUM_AGGRESSOR_SIDE_AGGRESSOR_SIDE_1 = "1"
#define ENUM_AGGRESSOR_SIDE_AGGRESSOR_SIDE_2 = "2"

/*
 * Md Entry Code Values
 */ 
#define ENUM_MD_ENTRY_CODE_MD_ENTRY_CODE_1 = "1"
#define ENUM_MD_ENTRY_CODE_MD_ENTRY_CODE_2 = "2"
#define ENUM_MD_ENTRY_CODE_MD_ENTRY_CODE_3 = "3"
#define ENUM_MD_ENTRY_CODE_MD_ENTRY_CODE_4 = "4"
#define ENUM_MD_ENTRY_CODE_MD_ENTRY_CODE_5 = "5"

/*
 * Md Update Action Values
 */ 
#define ENUM_MD_UPDATE_ACTION_MD_UPDATE_ACTION_0 = "0"
#define ENUM_MD_UPDATE_ACTION_MD_UPDATE_ACTION_1 = "1"
#define ENUM_MD_UPDATE_ACTION_MD_UPDATE_ACTION_2 = "2"
#define ENUM_MD_UPDATE_ACTION_MD_UPDATE_ACTION_3 = "3"
#define ENUM_MD_UPDATE_ACTION_MD_UPDATE_ACTION_4 = "4"
#define ENUM_MD_UPDATE_ACTION_MD_UPDATE_ACTION_5 = "5"

/*
 * Security Update Action Values
 */ 
#define ENUM_SECURITY_UPDATE_ACTION_SECURITY_UPDATE_ACTION_A = 'A'
#define ENUM_SECURITY_UPDATE_ACTION_SECURITY_UPDATE_ACTION_D = 'D'
#define ENUM_SECURITY_UPDATE_ACTION_SECURITY_UPDATE_ACTION_M = 'M'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_ADMIN_HEARTBEAT_312 = "312"
#define ENUM_TEMPLATE_ID_ADMIN_LOGIN_315 = "315"
#define ENUM_TEMPLATE_ID_ADMIN_LOGOUT_316 = "316"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ERIS_REFERENCE_DATA_AND_DAILY_STATISTICS_333 = "333"
#define ENUM_TEMPLATE_ID_MD_NEWS_INDICES_339 = "339"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_BLOCKS_340 = "340"
#define ENUM_TEMPLATE_ID_QUOTE_REQUEST_345 = "345"
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_INDICES_347 = "347"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_INDICES_348 = "348"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_BLOCKS_349 = "349"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ERIS_351 = "351"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ERIS_353 = "353"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_OTC_356 = "356"
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_ERIS_363 = "363"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_BLOCKS_365 = "365"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_OTC_366 = "366"


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Admin Login 315
 */ 
typedef struct {
    int8_t HeartBtInt;
} AdminLogin315T;

/*
 * Structure: Admin Logout 316
 */ 
typedef struct {
    char Text[180];
} AdminLogout316T;

/*
 * Structure: Events Group
 */ 
typedef struct {
    uint8_t EventType;
    uint64_t EventTime;
} EventsGroupT;

/*
 * Structure: Events Groups
 */ 
typedef struct {
    char GroupSizeEncoding[0];
} EventsGroupsT;

/*
 * Structure: Group Size
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeT;

/*
 * Structure: Group Size Encoding
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeEncodingT;

/*
 * Structure: Inst Attrib Group
 */ 
typedef struct {
    uint8_t InstAttribType;
    char InstAttribValue[100];
} InstAttribGroupT;

/*
 * Structure: Inst Attrib Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} InstAttribGroupsT;

/*
 * Structure: Legs Group
 */ 
typedef struct {
    char LegBenchmarkCurveName[5];
    char RateDescriptor[8];
    uint16_t PreviousFixingDate;
    char LegPayFrequencey[3];
    int64_t PreviousFixingRate;
    char LegSymbol[50];
    int32_t LegRatioQty;
    uint8_t LegSide;
    char LegCurrency[3];
    char LegSecurityType[8];
    char LegSecurityGroup[12];
    int8_t LegDateOffset;
    int64_t InterpolationFactor;
} LegsGroupT;

/*
 * Structure: Legs Groups
 */ 
typedef struct {
    char GroupSize[0];
} LegsGroupsT;

/*
 * Structure: Lines Of Text Group
 */ 
typedef struct {
    char Text[180];
} LinesOfTextGroupT;

/*
 * Structure: Lines Of Text Groups
 */ 
typedef struct {
    char GroupSize[0];
} LinesOfTextGroupsT;

/*
 * Structure: Match Event Indicator
 */ 
typedef struct {
    char EndOfEvent[1];
    char Reserved[1];
    char RecoveryMsg[1];
    char LastImpliedMsg[1];
    char LastStatsMsg[1];
    char LastQuoteMsg[1];
    char LastVolumeMsg[1];
    char LastTradeMsg[1];
} MatchEventIndicatorT;

/*
 * Structure: Maturity Month Year
 */ 
typedef struct {
    uint16_t Year;
    uint8_t Month;
    uint8_t Day;
    uint8_t Week;
} MaturityMonthYearT;

/*
 * Structure: MD Feed Types Group
 */ 
typedef struct {
    char MdFeedType[2];
    uint8_t MarketDepth;
} MdFeedTypesGroupT;

/*
 * Structure: MD Feed Types Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdFeedTypesGroupsT;

/*
 * Structure: Md Incremental Refresh Eris 351
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshEris351T;

/*
 * Structure: Md Incremental Refresh Eris 353
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshEris353T;

/*
 * Structure: MD Incremental Refresh Eris Group
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    char MdEntryType[1];
    uint32_t RptSeq;
    int64_t MdEntryPx;
    uint64_t MdEntrySize;
    int64_t CalFutPx;
    int32_t MdEntryPositionNo;
    int32_t NumberOfOrders;
    int32_t TradeId;
    uint8_t AggressorSide;
    char Symbol[50];
    char SecurityGroup[12];
    char SecurityType[4];
    char SecurityExchange[4];
    int8_t Product;
    uint16_t MaturityDate;
    char ReferenceId[50];
} MdIncrementalRefreshErisGroupT;

/*
 * Structure: MD Incremental Refresh Eris Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshErisGroupsT;

/*
 * Structure: Md Incremental Refresh Eris Reference Data And Daily Statistics 333
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshErisReferenceDataAndDailyStatistics333T;

/*
 * Structure: MD Incremental Refresh Eris Reference Data And Daily Statistics Group
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    char MdEntryType[1];
    uint32_t RptSeq;
    int64_t MdEntryPx;
    uint8_t OpenCloseSettlFlag;
    SettlPriceTypeT SettlPriceType;
    int64_t CalFutPx;
    char ReferenceId[50];
    uint64_t MdEntrySize;
    char Symbol[50];
    char SecurityGroup[12];
    int8_t Product;
    char SecurityType[4];
    char SecurityExchange[4];
    uint16_t MaturityDate;
    int32_t CouponRate;
    uint16_t TradeDate;
    int64_t FairCouponPct;
    int64_t LegPurchaseRate;
    int64_t FixedNpv;
    int64_t FloatNpv;
    int64_t Npv;
    int64_t AccruedCoupons;
    int64_t DailyIncrementalErisPai;
    int64_t ErisPai;
    int64_t FedFundsRate;
    int64_t MinPriceIncrement;
    int64_t FixedPayment;
    int64_t FloatingPayment;
    uint16_t NextFixedPaymentDate;
    int64_t NextFixedPaymentAmount;
    int64_t NextFloatingPaymentAmount;
    uint16_t TradingReferenceDate;
    int64_t PreviousErisPai;
    uint16_t FedFundsDate;
    uint32_t AccrualDays;
    uint64_t Nominal;
    char LegCreditRating[6];
    int64_t LegContractMultiplier;
    uint16_t NextFloatingPaymentDate;
    int64_t Pv01;
    int64_t Dv01;
    int64_t SettlementNpv;
    int64_t FinalSettlementFuturesPrice;
    char SecurityDescription[30];
} MdIncrementalRefreshErisReferenceDataAndDailyStatisticsGroupT;

/*
 * Structure: MD Incremental Refresh Eris Reference Data And Daily Statistics Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MdIncrementalRefreshErisReferenceDataAndDailyStatisticsGroupsT;

/*
 * Structure: Md Incremental Refresh Indices 348
 */ 
typedef struct {
    uint64_t TransactTime;
    char MdFeedType[2];
    char MatchEventIndicator[0];
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshIndices348T;

/*
 * Structure: MD Incremental Refresh Indices Group
 */ 
typedef struct {
    char MdEntryType[1];
    uint32_t RptSeq;
    int64_t MdEntryPx;
    uint64_t MdEntrySize;
    char Symbol[50];
    uint8_t OpenCloseSettlFlag;
    char YieldType[8];
    int64_t Yield;
    int64_t NetChgPrevDay;
    int64_t NetPctChg;
    int64_t PercentTrading;
    uint8_t MdEntryCode;
    int32_t MdEntryDate;
    int32_t MdEntryTime;
    char ReferenceId[50];
} MdIncrementalRefreshIndicesGroupT;

/*
 * Structure: MD Incremental Refresh Indices Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshIndicesGroupsT;

/*
 * Structure: Md Incremental Refresh Ot C 356
 */ 
typedef struct {
    uint64_t TransactTime;
    uint16_t TradeDate;
    char MatchEventIndicator[0];
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshOtC356T;

/*
 * Structure: Md Incremental Refresh Ot C 366
 */ 
typedef struct {
    uint64_t TransactTime;
    uint16_t TradeDate;
    char MatchEventIndicator[0];
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshOtC366T;

/*
 * Structure: MD Incremental Refresh Otc Group
 */ 
typedef struct {
    char MdEntryType[1];
    uint32_t RptSeq;
    int64_t MdEntryPx;
    uint64_t MdEntrySize;
    char Symbol[50];
    char SecurityGroup[12];
    char SecurityType[4];
    char MaturityMonthYear[0];
    char SecurityExchange[4];
    int8_t Product;
    uint16_t MaturityDate;
    int32_t CouponRate;
    char RestructuringType[2];
    char Seniority[2];
    int32_t NotionalPercentageOutstanding;
    uint8_t PutOrCall;
    int64_t StrikePrice;
    char UnitOfMeasure[5];
    char UnitOfMeasureCurrency[3];
    int64_t UnitOfMeasureQty;
    int32_t MdEntryDate;
    uint8_t OpenCloseSettlFlag;
    uint16_t PriceType;
    uint16_t SettlDate;
    char QuoteCondition[1];
    char MarketSector[26];
    char SectorGroup[2];
    char SectorSubGroup[26];
    char ProductComplex[26];
    char SecuritySubType[2];
    uint16_t VolType;
    char ReferenceId[50];
} MdIncrementalRefreshOtcGroupT;

/*
 * Structure: MD Incremental Refresh Otc Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshOtcGroupsT;

/*
 * Structure: Md Incremental Refresh Trade Blocks 340
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshTradeBlocks340T;

/*
 * Structure: Md Incremental Refresh Trade Blocks 349
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    uint16_t BatchTotalMessages;
    uint16_t TradeDate;
} MdIncrementalRefreshTradeBlocks349T;

/*
 * Structure: Md Incremental Refresh Trade Blocks 365
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    uint16_t BatchTotalMessages;
    uint16_t TradeDate;
} MdIncrementalRefreshTradeBlocks365T;

/*
 * Structure: MD Incremental Refresh Trade Blocks Group
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    uint64_t SecurityId;
    uint32_t RptSeq;
    int64_t MdEntryPx;
    uint64_t MdEntrySize;
    int32_t NumberOfOrders;
    int32_t TradeId;
    uint8_t AggressorSide;
    char Symbol[50];
    char SecurityGroup[12];
    char SecurityType[4];
    char SecuritySubType[2];
    MaturityMonthYearT MaturityMonthYear;
    char SecurityExchange[4];
    uint16_t MaturityDate;
    char UnitOfMeasure[5];
    char UnitOfMeasureCurrency[3];
    int64_t UnitOfMeasureQty;
    int32_t CouponRate;
    uint16_t PriceType;
    uint8_t TrdType;
    char MdEntryId[26];
    uint8_t PutOrCall;
    int64_t StrikePrice;
    char RestructuringType[2];
    char Seniority[2];
    char ReferenceId[50];
    char StrategyLinkId[26];
    char LegRefId[17];
} MdIncrementalRefreshTradeBlocksGroupT;

/*
 * Structure: MD Incremental Refresh Trade Blocks Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshTradeBlocksGroupsT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageSize;
    uint16_t BlockLength;
    uint16_t TemplateId;
    uint16_t SchemaId;
    uint16_t Version;
} MessageHeaderT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint32_t MessageSequenceNumber;
    uint64_t SendingTime;
} PacketHeaderT;

/*
 * Structure: Quote Request 345
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char QuoteReqId[26];
} QuoteRequest345T;

/*
 * Structure: Related Sym Group
 */ 
typedef struct {
    char Symbol[50];
} RelatedSymGroupT;

/*
 * Structure: Related Sym Groups
 */ 
typedef struct {
    char GroupSize[0];
} RelatedSymGroupsT;

/*
 * Structure: Security Alt Id Group
 */ 
typedef struct {
    char SecurityAltId[26];
    char SecurityAltIdSource[1];
} SecurityAltIdGroupT;

/*
 * Structure: Security Alt Id Groups
 */ 
typedef struct {
    char GroupSize[0];
} SecurityAltIdGroupsT;

/*
 * Structure: Settl Price Type
 */ 
typedef struct {
    char NullValue[1];
    char ReservedBits[4];
    char Rounded[1];
    char Actual[1];
    char FinalDaily[1];
} SettlPriceTypeT;

