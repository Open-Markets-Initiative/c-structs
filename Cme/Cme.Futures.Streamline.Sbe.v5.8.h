/*******************************************************************************
 * C Structs For Cme Futures Sbe Streamline 5.8 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_NO_VALUE = 255
#define ENUM_AGGRESSOR_SIDE_NO_AGGRESSOR = 0
#define ENUM_AGGRESSOR_SIDE_BUY = 1
#define ENUM_AGGRESSOR_SIDE_SELL = 2

/*
 * Md Entry Code Values
 */ 
#define ENUM_MD_ENTRY_CODE_NO_VALUE = 255
#define ENUM_MD_ENTRY_CODE_INDICATIVE = 1
#define ENUM_MD_ENTRY_CODE_PRE_MARKET = 2
#define ENUM_MD_ENTRY_CODE_PRELIMINARY_CLOSE = 3
#define ENUM_MD_ENTRY_CODE_SESSION_CLOSE = 4
#define ENUM_MD_ENTRY_CODE_CLOSE = 5

/*
 * Md Update Action Values
 */ 
#define ENUM_MD_UPDATE_ACTION_NEW = 0
#define ENUM_MD_UPDATE_ACTION_CHANGE = 1
#define ENUM_MD_UPDATE_ACTION_DELETE = 2
#define ENUM_MD_UPDATE_ACTION_DELETE_THRU = 3
#define ENUM_MD_UPDATE_ACTION_DELETE_FROM = 4
#define ENUM_MD_UPDATE_ACTION_OVERLAY = 5

/*
 * Security Update Action Values
 */ 
#define ENUM_SECURITY_UPDATE_ACTION_ADD = 'A'
#define ENUM_SECURITY_UPDATE_ACTION_DELETE = 'D'
#define ENUM_SECURITY_UPDATE_ACTION_MODIFY = 'M'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_ADMIN_HEARTBEAT = 312
#define ENUM_TEMPLATE_ID_ADMIN_LOGIN = 315
#define ENUM_TEMPLATE_ID_ADMIN_LOGOUT = 316
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ERIS_REFERENCE_DATA_AND_DAILY_STATISTICS = 333
#define ENUM_TEMPLATE_ID_MD_NEWS_INDICES = 339
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_BLOCKS = 340
#define ENUM_TEMPLATE_ID_QUOTE_REQUEST = 345
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_INDICES = 347
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_INDICES = 348
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_BLOCKS = 349
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ERIS = 351
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ERIS = 353
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_OTC = 356
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_ERIS = 363


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Interpolation Factor
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} InterpolationFactorT;

/*
 * Structure: Previous Fixing Rate
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} PreviousFixingRateT;

/*
 * Structure: M D Instrument Definition Eris Leg Group
 */ 
typedef struct {
    char LegBenchmarkCurveName[5];
    char RateDescriptor[8];
    uint16_t PreviousFixingDate;
    char LegPayFrequencey[3];
    PreviousFixingRateT PreviousFixingRate;
    char LegSymbol[50];
    int32_t LegRatioQty;
    uint8_t LegSide;
    char LegCurrency[3];
    char LegSecurityType[8];
    char LegSecurityGroup[12];
    int8_t LegDateOffset;
    InterpolationFactorT InterpolationFactor;
} MDInstrumentDefinitionErisLegGroupT;

/*
 * Structure: Group Size
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeT;

/*
 * Structure: M D Instrument Definition Eris Leg Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDInstrumentDefinitionErisLegGroupsT;

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
    GroupSizeT GroupSize;
} SecurityAltIdGroupsT;

/*
 * Structure: Events Group
 */ 
typedef struct {
    uint8_t EventType;
    uint64_t EventTime;
} EventsGroupT;

/*
 * Structure: Group Size Encoding
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeEncodingT;

/*
 * Structure: Events Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} EventsGroupsT;

/*
 * Structure: M D Feed Types Group
 */ 
typedef struct {
    char MdFeedType[2];
    uint8_t MarketDepth;
} MDFeedTypesGroupT;

/*
 * Structure: M D Feed Types Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDFeedTypesGroupsT;

/*
 * Structure: Coupon Rate
 */ 
typedef struct {
    int32_t Mantissa32;
    int8_t Exponent;
} CouponRateT;

/*
 * Structure: Min Price Increment
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} MinPriceIncrementT;

/*
 * Structure: Unit Of Measure Qty
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} UnitOfMeasureQtyT;

/*
 * Structure: Strike Price
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} StrikePriceT;

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
 * Structure: Md Entry Size
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} MdEntrySizeT;

/*
 * Structure: Md Entry Px
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} MdEntryPxT;

/*
 * Structure: M D Incremental Refresh Otc Group
 */ 
typedef struct {
    char MdEntryType[1];
    uint32_t RptSeq;
    MdEntryPxT MdEntryPx;
    MdEntrySizeT MdEntrySize;
    char Symbol[50];
    char SecurityGroup[12];
    char SecurityType[4];
    MaturityMonthYearT MaturityMonthYear;
    char SecurityExchange[4];
    int8_t Product;
    uint16_t MaturityDate;
    CouponRateT CouponRate;
    char RestructuringType[2];
    char Seniority[2];
    int32_t NotionalPercentageOutstanding;
    uint8_t PutOrCall;
    StrikePriceT StrikePrice;
    char UnitOfMeasure[5];
    char UnitOfMeasureCurrency[3];
    UnitOfMeasureQtyT UnitOfMeasureQty;
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
} MDIncrementalRefreshOtcGroupT;

/*
 * Structure: M D Incremental Refresh Otc Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshOtcGroupsT;

/*
 * Bitfield: Match Event Indicator
 */ 
typedef struct {
    unsigned char EndOfEvent : 1;
    unsigned char Reserved : 1;
    unsigned char RecoveryMsg : 1;
    unsigned char LastImpliedMsg : 1;
    unsigned char LastStatsMsg : 1;
    unsigned char LastQuoteMsg : 1;
    unsigned char LastVolumeMsg : 1;
    unsigned char LastTradeMsg : 1;
} MatchEventIndicatorT;

/*
 * Structure: Md Incremental Refresh Ot C 356
 */ 
typedef struct {
    uint64_t TransactTime;
    uint16_t TradeDate;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshOtC356T;

/*
 * Structure: Cal Fut Px
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} CalFutPxT;

/*
 * Structure: M D Incremental Refresh Eris Group
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    char MdEntryType[1];
    uint32_t RptSeq;
    MdEntryPxT MdEntryPx;
    MdEntrySizeT MdEntrySize;
    CalFutPxT CalFutPx;
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
} MDIncrementalRefreshErisGroupT;

/*
 * Structure: M D Incremental Refresh Eris Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshErisGroupsT;

/*
 * Structure: Md Incremental Refresh Eris 353
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshEris353T;

/*
 * Structure: Md Incremental Refresh Eris 351
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshEris351T;

/*
 * Structure: M D Incremental Refresh Trade Blocks Group
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    uint64_t SecurityId;
    uint32_t RptSeq;
    MdEntryPxT MdEntryPx;
    MdEntrySizeT MdEntrySize;
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
    UnitOfMeasureQtyT UnitOfMeasureQty;
    CouponRateT CouponRate;
    uint16_t PriceType;
    uint8_t TrdType;
    char MdEntryId[26];
    uint8_t PutOrCall;
    StrikePriceT StrikePrice;
    char RestructuringType[2];
    char Seniority[2];
    char ReferenceId[50];
    char StrategyLinkId[26];
    char LegRefId[17];
} MDIncrementalRefreshTradeBlocksGroupT;

/*
 * Structure: M D Incremental Refresh Trade Blocks Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshTradeBlocksGroupsT;

/*
 * Structure: Md Incremental Refresh Trade Blocks 349
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessages;
    uint16_t TradeDate;
} MdIncrementalRefreshTradeBlocks349T;

/*
 * Structure: Percent Trading
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} PercentTradingT;

/*
 * Structure: Net Pct Chg
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} NetPctChgT;

/*
 * Structure: Net Chg Prev Day
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} NetChgPrevDayT;

/*
 * Structure: Yield
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} YieldT;

/*
 * Structure: M D Incremental Refresh Indices Group
 */ 
typedef struct {
    char MdEntryType[1];
    uint32_t RptSeq;
    MdEntryPxT MdEntryPx;
    MdEntrySizeT MdEntrySize;
    char Symbol[50];
    uint8_t OpenCloseSettlFlag;
    char YieldType[8];
    YieldT Yield;
    NetChgPrevDayT NetChgPrevDay;
    NetPctChgT NetPctChg;
    PercentTradingT PercentTrading;
    uint8_t MdEntryCode;
    int32_t MdEntryDate;
    int32_t MdEntryTime;
    char ReferenceId[50];
} MDIncrementalRefreshIndicesGroupT;

/*
 * Structure: M D Incremental Refresh Indices Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshIndicesGroupsT;

/*
 * Structure: Md Incremental Refresh Indices 348
 */ 
typedef struct {
    uint64_t TransactTime;
    char MdFeedType[2];
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshIndices348T;

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
 * Structure: Related Sym Group
 */ 
typedef struct {
    char Symbol[50];
} RelatedSymGroupT;

/*
 * Structure: Related Sym Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} RelatedSymGroupsT;

/*
 * Structure: Quote Request 345
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char QuoteReqId[26];
} QuoteRequest345T;

/*
 * Structure: Md Incremental Refresh Trade Blocks 340
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshTradeBlocks340T;

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
    GroupSizeT GroupSize;
} LinesOfTextGroupsT;

/*
 * Structure: Final Settlement Futures Price
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} FinalSettlementFuturesPriceT;

/*
 * Structure: Settlement Npv
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} SettlementNpvT;

/*
 * Structure: D V 01
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} DV01T;

/*
 * Structure: P V 01
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} PV01T;

/*
 * Structure: Leg Contract Multiplier
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} LegContractMultiplierT;

/*
 * Structure: Previous Eris Pai
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} PreviousErisPaiT;

/*
 * Structure: Next Floating Payment Amount
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} NextFloatingPaymentAmountT;

/*
 * Structure: Next Fixed Payment Amount
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} NextFixedPaymentAmountT;

/*
 * Structure: Floating Payment
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} FloatingPaymentT;

/*
 * Structure: Fixed Payment
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} FixedPaymentT;

/*
 * Structure: Fed Funds Rate
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} FedFundsRateT;

/*
 * Structure: Eris Pai
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} ErisPaiT;

/*
 * Structure: Daily Incremental Eris Pai
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} DailyIncrementalErisPaiT;

/*
 * Structure: Accrued Coupons
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} AccruedCouponsT;

/*
 * Structure: Npv
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} NpvT;

/*
 * Structure: Float Npv
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} FloatNpvT;

/*
 * Structure: Fixed Npv
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} FixedNpvT;

/*
 * Structure: Leg Purchase Rate
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} LegPurchaseRateT;

/*
 * Structure: Fair Coupon Pct
 */ 
typedef struct {
    int64_t Mantissa64;
    int8_t Exponent;
} FairCouponPctT;

/*
 * Bitfield: Settl Price Type
 */ 
typedef struct {
    unsigned char NullValue : 1;
    unsigned char ReservedBits : 4;
    unsigned char Rounded : 1;
    unsigned char Actual : 1;
    unsigned char Final : 1;
} SettlPriceTypeT;

/*
 * Structure: M D Incremental Refresh Eris Reference Data And Daily Statistics Group
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    char MdEntryType[1];
    uint32_t RptSeq;
    MdEntryPxT MdEntryPx;
    uint8_t OpenCloseSettlFlag;
    SettlPriceTypeT SettlPriceType;
    CalFutPxT CalFutPx;
    char ReferenceId[50];
    MdEntrySizeT MdEntrySize;
    char Symbol[50];
    char SecurityGroup[12];
    int8_t Product;
    char SecurityType[4];
    char SecurityExchange[4];
    uint16_t MaturityDate;
    CouponRateT CouponRate;
    uint16_t TradeDate;
    FairCouponPctT FairCouponPct;
    LegPurchaseRateT LegPurchaseRate;
    FixedNpvT FixedNpv;
    FloatNpvT FloatNpv;
    NpvT Npv;
    AccruedCouponsT AccruedCoupons;
    DailyIncrementalErisPaiT DailyIncrementalErisPai;
    ErisPaiT ErisPai;
    FedFundsRateT FedFundsRate;
    MinPriceIncrementT MinPriceIncrement;
    FixedPaymentT FixedPayment;
    FloatingPaymentT FloatingPayment;
    uint16_t NextFixedPaymentDate;
    NextFixedPaymentAmountT NextFixedPaymentAmount;
    NextFloatingPaymentAmountT NextFloatingPaymentAmount;
    uint16_t TradingReferenceDate;
    PreviousErisPaiT PreviousErisPai;
    uint16_t FedFundsDate;
    uint32_t AccrualDays;
    uint64_t Nominal;
    char LegCreditRating[6];
    LegContractMultiplierT LegContractMultiplier;
    uint16_t NextFloatingPaymentDate;
    PV01T PV01;
    DV01T DV01;
    SettlementNpvT SettlementNpv;
    FinalSettlementFuturesPriceT FinalSettlementFuturesPrice;
    char SecurityDescription[30];
} MDIncrementalRefreshErisReferenceDataAndDailyStatisticsGroupT;

/*
 * Structure: M D Incremental Refresh Eris Reference Data And Daily Statistics Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshErisReferenceDataAndDailyStatisticsGroupsT;

/*
 * Structure: Md Incremental Refresh Eris Reference Data And Daily Statistics 333
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshErisReferenceDataAndDailyStatistics333T;

/*
 * Structure: Admin Logout 316
 */ 
typedef struct {
    char Text[180];
} AdminLogout316T;

/*
 * Structure: Admin Login 315
 */ 
typedef struct {
    int8_t HeartBtInt;
} AdminLogin315T;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t BlockLength;
    uint16_t TemplateId;
    uint16_t SchemaId;
    uint16_t Version;
} MessageHeaderT;

/*
 * Structure: Binary Packet Header
 */ 
typedef struct {
    uint32_t MessageSequenceNumber;
    uint64_t SendingTime;
} BinaryPacketHeaderT;

