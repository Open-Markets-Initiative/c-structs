/*******************************************************************************
 * C Structs For Cme Futures Sbe Streamlined 5.8 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_NO_VALUE 255
#define ENUM_AGGRESSOR_SIDE_NO_AGGRESSOR 0
#define ENUM_AGGRESSOR_SIDE_BUY 1
#define ENUM_AGGRESSOR_SIDE_SELL 2

/*
 * Event Type Indices Values
 */ 
#define ENUM_EVENT_TYPE_INDICES_ACTIVATION 5
#define ENUM_EVENT_TYPE_INDICES_DELETION 6
#define ENUM_EVENT_TYPE_INDICES_MODIFICATION 120

/*
 * Md Entry Code Values
 */ 
#define ENUM_MD_ENTRY_CODE_NO_VALUE 255
#define ENUM_MD_ENTRY_CODE_INDICATIVE 1
#define ENUM_MD_ENTRY_CODE_PRE_MARKET 2
#define ENUM_MD_ENTRY_CODE_PRELIMINARY_CLOSE 3
#define ENUM_MD_ENTRY_CODE_SESSION_CLOSE 4
#define ENUM_MD_ENTRY_CODE_CLOSE 5

/*
 * Md Entry Type Indices Values
 */ 
#define ENUM_MD_ENTRY_TYPE_INDICES_BID '0'
#define ENUM_MD_ENTRY_TYPE_INDICES_OFFER '1'
#define ENUM_MD_ENTRY_TYPE_INDICES_TRADE '2'
#define ENUM_MD_ENTRY_TYPE_INDICES_INDEX_VALUE '3'
#define ENUM_MD_ENTRY_TYPE_INDICES_OPENING_VALUE '4'
#define ENUM_MD_ENTRY_TYPE_INDICES_CLOSING_PRICE '5'
#define ENUM_MD_ENTRY_TYPE_INDICES_SETTLEMENT_PRICE '6'
#define ENUM_MD_ENTRY_TYPE_INDICES_SESSION_HIGH_PRICE '7'
#define ENUM_MD_ENTRY_TYPE_INDICES_SESSION_LOW_PRICE '8'
#define ENUM_MD_ENTRY_TYPE_INDICES_TRADE_VOLUME 'e'

/*
 * Md Update Action Values
 */ 
#define ENUM_MD_UPDATE_ACTION_NEW 0
#define ENUM_MD_UPDATE_ACTION_CHANGE 1
#define ENUM_MD_UPDATE_ACTION_DELETE 2
#define ENUM_MD_UPDATE_ACTION_DELETE_THRU 3
#define ENUM_MD_UPDATE_ACTION_DELETE_FROM 4
#define ENUM_MD_UPDATE_ACTION_OVERLAY 5

/*
 * Security Update Action Values
 */ 
#define ENUM_SECURITY_UPDATE_ACTION_ADD 'A'
#define ENUM_SECURITY_UPDATE_ACTION_DELETE 'D'
#define ENUM_SECURITY_UPDATE_ACTION_MODIFY 'M'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_ADMIN_HEARTBEAT 312
#define ENUM_TEMPLATE_ID_ADMIN_LOGIN 315
#define ENUM_TEMPLATE_ID_ADMIN_LOGOUT 316
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ERIS_REFERENCE_DATA_AND_DAILY_STATISTICS 333
#define ENUM_TEMPLATE_ID_MD_NEWS_INDICES 339
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_BLOCKS_340 340
#define ENUM_TEMPLATE_ID_QUOTE_REQUEST 345
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_INDICES 347
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_INDICES 348
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_BLOCKS_349 349
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ERIS_351 351
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ERIS_353 353
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_OTC 356
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_ERIS 363


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Interpolation Factor
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} InterpolationFactorT;

/*
 * Structure: Previous Fixing Rate
 */ 
typedef struct {
    int64_t Mantissa;
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
    uint8_t NumInGroupUint8;
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
    uint8_t EventTypeIndices;
    uint64_t EventTime;
} EventsGroupT;

/*
 * Structure: Group Size Encoding
 */ 
typedef struct {
    uint16_t BlockLength;
    uint16_t NumInGroup16;
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
    char MdFeedType3[3];
    uint8_t MarketDepth;
} MDFeedTypesGroupT;

/*
 * Structure: M D Feed Types Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDFeedTypesGroupsT;

/*
 * Structure: Min Price Increment
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} MinPriceIncrementT;

/*
 * Structure: Unit Of Measure Qty Decimal
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} UnitOfMeasureQtyDecimalT;

/*
 * Structure: Strike Price Decimal
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} StrikePriceDecimalT;

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
    int64_t Mantissa;
    int8_t Exponent;
} MdEntrySizeT;

/*
 * Structure: M D Incremental Refresh Otc Group
 */ 
typedef struct {
    char MdEntryType[1];
    uint32_t RptSeq;
    int64_t MdEntryPxOptional;
    MdEntrySizeT MdEntrySize;
    char Symbol[50];
    char SecurityGroup12[12];
    char SecurityType[9];
    MaturityMonthYearT MaturityMonthYear;
    char SecurityExchange[4];
    uint8_t ProductOptional;
    uint16_t MaturityDate;
    int32_t CouponRate;
    char RestructuringType[2];
    char Seniority[2];
    int32_t NotionalPercentageOutstanding;
    uint8_t PutOrCall;
    StrikePriceDecimalT StrikePriceDecimal;
    char UnitOfMeasure[5];
    char UnitOfMeasureCurrency[3];
    UnitOfMeasureQtyDecimalT UnitOfMeasureQtyDecimal;
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
    char ReferenceId100[100];
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
    uint8_t
    EndOfEvent : 1,
    Reserved : 1,
    RecoveryMsg : 1,
    LastImpliedMsg : 1,
    LastStatsMsg : 1,
    LastQuoteMsg : 1,
    LastVolumeMsg : 1,
    LastTradeMsg : 1;
} MatchEventIndicatorT;

/*
 * Structure: Md Incremental Refresh Otc
 */ 
typedef struct {
    uint64_t TransactTime;
    uint16_t TradeDate;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessagesOptional;
} MdIncrementalRefreshOtcT;

/*
 * Structure: Cal Fut Px
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} CalFutPxT;

/*
 * Structure: Md Entry Px Decimal
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} MdEntryPxDecimalT;

/*
 * Structure: M D Incremental Refresh Eris 353 Group
 */ 
typedef struct {
    char MdUpdateActionChar[1];
    char MdEntryType[1];
    uint32_t RptSeq;
    MdEntryPxDecimalT MdEntryPxDecimal;
    uint64_t MdEntrySizeOptional;
    CalFutPxT CalFutPx;
    int32_t MdEntryPositionNo;
    int32_t NumberOfOrders;
    int32_t TradeId;
    uint8_t AggressorSide;
    char Symbol[50];
    char SecurityGroup26[26];
    char SecurityType[9];
    char SecurityExchange[4];
    uint8_t ProductOptional;
    uint16_t MaturityDate;
    char ReferenceId50[50];
    uint8_t MdQuoteType;
} MDIncrementalRefreshEris353GroupT;

/*
 * Structure: M D Incremental Refresh Eris 353 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshEris353GroupsT;

/*
 * Structure: Md Incremental Refresh Eris
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessagesOptional;
} MdIncrementalRefreshErisT;

/*
 * Structure: M D Incremental Refresh Eris 351 Group
 */ 
typedef struct {
    char MdUpdateActionChar[1];
    char MdEntryType[1];
    uint32_t RptSeq;
    MdEntryPxDecimalT MdEntryPxDecimal;
    uint64_t MdEntrySizeOptional;
    CalFutPxT CalFutPx;
    int32_t MdEntryPositionNo;
    int32_t NumberOfOrders;
    int32_t TradeId;
    uint8_t AggressorSide;
    char Symbol[50];
    char SecurityGroup26[26];
    char SecurityType[9];
    char SecurityExchange[4];
    uint8_t ProductOptional;
    uint16_t MaturityDate;
    char ReferenceId50[50];
} MDIncrementalRefreshEris351GroupT;

/*
 * Structure: M D Incremental Refresh Eris 351 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshEris351GroupsT;

/*
 * Structure: Md Incremental Refresh Eris No Quote
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessagesOptional;
} MdIncrementalRefreshErisNoQuoteT;

/*
 * Structure: M D Incremental Refresh Trade Blocks 349 Group
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    uint64_t SecurityId;
    uint32_t RptSeq;
    int64_t MdEntryPxOptional;
    MdEntrySizeT MdEntrySize;
    int32_t NumberOfOrders;
    int32_t TradeId;
    uint8_t AggressorSide;
    char Symbol[50];
    char SecurityGroup12[12];
    char SecurityType[9];
    char SecuritySubType[2];
    MaturityMonthYearT MaturityMonthYear;
    char SecurityExchange4[4];
    uint16_t MaturityDate;
    char UnitOfMeasure[5];
    char UnitOfMeasureCurrency3[3];
    int64_t UnitOfMeasureQtyOptional;
    int32_t CouponRate;
    uint16_t PriceType;
    uint8_t TrdType;
    char MdEntryId[26];
    uint8_t PutOrCall;
    int64_t StrikePrice;
    char RestructuringType[2];
    char Seniority[2];
    char ReferenceId100[100];
    char StrategyLinkId[26];
    char LegRefId[17];
} MDIncrementalRefreshTradeBlocks349GroupT;

/*
 * Structure: M D Incremental Refresh Trade Blocks 349 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshTradeBlocks349GroupsT;

/*
 * Structure: Md Incremental Refresh Trade Blocks
 */ 
typedef struct {
    uint64_t TransactTimeOptional;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessages;
    uint16_t TradeDate;
} MdIncrementalRefreshTradeBlocksT;

/*
 * Structure: Percent Trading
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} PercentTradingT;

/*
 * Structure: Net Pct Chg
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} NetPctChgT;

/*
 * Structure: Net Chg Prev Day
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} NetChgPrevDayT;

/*
 * Structure: Yield
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} YieldT;

/*
 * Structure: M D Incremental Refresh Indices Group
 */ 
typedef struct {
    char MdEntryTypeIndices;
    uint32_t RptSeq;
    MdEntryPxDecimalT MdEntryPxDecimal;
    uint64_t MdEntrySizeOptional;
    char Symbol[50];
    int8_t OpenCloseSettlFlag;
    char YieldType[8];
    YieldT Yield;
    NetChgPrevDayT NetChgPrevDay;
    NetPctChgT NetPctChg;
    PercentTradingT PercentTrading;
    uint8_t MdEntryCode;
    int32_t MdEntryDate;
    int32_t MdEntryTime;
    char ReferenceId50[50];
} MDIncrementalRefreshIndicesGroupT;

/*
 * Structure: M D Incremental Refresh Indices Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshIndicesGroupsT;

/*
 * Structure: Md Incremental Refresh Indices
 */ 
typedef struct {
    uint64_t TransactTime;
    char MdFeedType[2];
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessagesOptional;
} MdIncrementalRefreshIndicesT;

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
 * Structure: Quote Request
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char QuoteReqId[26];
} QuoteRequestT;

/*
 * Structure: M D Incremental Refresh Trade Blocks 340 Group
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    uint64_t SecurityId;
    uint32_t RptSeq;
    int64_t MdEntryPxOptional;
    uint64_t MdEntrySizeOptional;
    int32_t NumberOfOrders;
    int32_t TradeId;
    uint8_t AggressorSide;
    char Symbol[50];
    char SecurityGroup12[12];
    char SecurityType[9];
    char SecuritySubType[2];
    MaturityMonthYearT MaturityMonthYear;
    char SecurityExchange4[4];
    uint16_t MaturityDate;
    char UnitOfMeasure[5];
    char UnitOfMeasureCurrency3[3];
    int64_t UnitOfMeasureQtyOptional;
    int32_t CouponRate;
    uint16_t PriceType;
    uint8_t TrdType;
    char MdEntryId[26];
    uint8_t PutOrCall;
    int64_t StrikePrice;
    char RestructuringType[2];
    char Seniority[2];
    char ReferenceId100[100];
    char StrategyLinkId[26];
    char LegRefId[17];
} MDIncrementalRefreshTradeBlocks340GroupT;

/*
 * Structure: M D Incremental Refresh Trade Blocks 340 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshTradeBlocks340GroupsT;

/*
 * Structure: Md Incremental Refresh Trade Blocks No Date
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessages;
} MdIncrementalRefreshTradeBlocksNoDateT;

/*
 * Structure: Lines Of Text Group
 */ 
typedef struct {
    char Text500[500];
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
    int64_t Mantissa;
    int8_t Exponent;
} FinalSettlementFuturesPriceT;

/*
 * Structure: Settlement Npv
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} SettlementNpvT;

/*
 * Structure: D V 01
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} DV01T;

/*
 * Structure: P V 01
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} PV01T;

/*
 * Structure: Leg Contract Multiplier
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} LegContractMultiplierT;

/*
 * Structure: Previous Eris Pai
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} PreviousErisPaiT;

/*
 * Structure: Next Floating Payment Amount
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} NextFloatingPaymentAmountT;

/*
 * Structure: Next Fixed Payment Amount
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} NextFixedPaymentAmountT;

/*
 * Structure: Floating Payment
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} FloatingPaymentT;

/*
 * Structure: Fixed Payment
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} FixedPaymentT;

/*
 * Structure: Min Price Increment Optional
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} MinPriceIncrementOptionalT;

/*
 * Structure: Fed Funds Rate
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} FedFundsRateT;

/*
 * Structure: Eris Pai
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} ErisPaiT;

/*
 * Structure: Daily Incremental Eris Pai
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} DailyIncrementalErisPaiT;

/*
 * Structure: Accrued Coupons
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} AccruedCouponsT;

/*
 * Structure: Npv
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} NpvT;

/*
 * Structure: Float Npv
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} FloatNpvT;

/*
 * Structure: Fixed Npv
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} FixedNpvT;

/*
 * Structure: Leg Purchase Rate
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} LegPurchaseRateT;

/*
 * Structure: Fair Coupon Pct
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} FairCouponPctT;

/*
 * Structure: Coupon Rate Optional
 */ 
typedef struct {
    int32_t Mantissa32;
    int8_t Exponent;
} CouponRateOptionalT;

/*
 * Structure: Cal Fut Px Optional
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} CalFutPxOptionalT;

/*
 * Bitfield: Settl Price Type
 */ 
typedef struct {
    uint8_t
    NullValue : 1,
    ReservedBits : 4,
    Rounded : 1,
    Actual : 1,
    Final : 1;
} SettlPriceTypeT;

/*
 * Structure: Md Entry Px Decimal Optional
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} MdEntryPxDecimalOptionalT;

/*
 * Structure: M D Incremental Refresh Eris Reference Data And Daily Statistics Group
 */ 
typedef struct {
    char MdUpdateActionChar[1];
    char MdEntryType[1];
    uint32_t RptSeq;
    MdEntryPxDecimalOptionalT MdEntryPxDecimalOptional;
    uint8_t OpenCloseSettlFlag;
    SettlPriceTypeT SettlPriceType;
    CalFutPxOptionalT CalFutPxOptional;
    char ReferenceId50[50];
    uint64_t MdEntrySizeOptional;
    char Symbol[50];
    char SecurityGroup26[26];
    uint8_t ProductOptional;
    char SecurityType[9];
    char SecurityExchange[4];
    uint16_t MaturityDate;
    CouponRateOptionalT CouponRateOptional;
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
    MinPriceIncrementOptionalT MinPriceIncrementOptional;
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
 * Structure: Md Incremental Refresh Eris Reference Data And Daily Statistics
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    uint16_t BatchTotalMessagesOptional;
} MdIncrementalRefreshErisReferenceDataAndDailyStatisticsT;

/*
 * Structure: Admin Logout
 */ 
typedef struct {
    char Text[180];
} AdminLogoutT;

/*
 * Structure: Admin Login
 */ 
typedef struct {
    int8_t HeartBtInt;
} AdminLoginT;

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
 * Structure: Message
 */ 
typedef struct {
    uint16_t MessageSize;
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Binary Packet Header
 */ 
typedef struct {
    uint32_t MessageSequenceNumber;
    uint64_t SendingTime;
} BinaryPacketHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    BinaryPacketHeaderT BinaryPacketHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Chicago Mercantile Exchange
   Version: 5.8
   Date: Friday, June 2, 2017

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
