/*******************************************************************************
 * C Structs For Cme Futures Sbe Mdp3 1.9 Binary Model
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
 * Event Type Values
 */ 
#define ENUM_EVENT_TYPE_ACTIVATION 5
#define ENUM_EVENT_TYPE_LAST_ELIGIBLE_TRADE_DATE 7

/*
 * Halt Reason Values
 */ 
#define ENUM_HALT_REASON_GROUP_SCHEDULE 0
#define ENUM_HALT_REASON_SURVEILLANCE_INTERVENTION 1
#define ENUM_HALT_REASON_MARKET_EVENT 2
#define ENUM_HALT_REASON_INSTRUMENT_ACTIVATION 3
#define ENUM_HALT_REASON_INSTRUMENT_EXPIRATION 4
#define ENUM_HALT_REASON_UNKNOWN 5
#define ENUM_HALT_REASON_RECOVERY_IN_PROCESS 6

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY_SIDE 1
#define ENUM_LEG_SIDE_SELL_SIDE 2

/*
 * Md Entry Type  Values
 */ 
#define ENUM_MD_ENTRY_TYPE_BID '0'
#define ENUM_MD_ENTRY_TYPE_OFFER '1'
#define ENUM_MD_ENTRY_TYPE_TRADE '2'
#define ENUM_MD_ENTRY_TYPE_OPEN_PRICE '4'
#define ENUM_MD_ENTRY_TYPE_SETTLEMENT_PRICE '6'
#define ENUM_MD_ENTRY_TYPE_TRADING_SESSION_HIGH_PRICE '7'
#define ENUM_MD_ENTRY_TYPE_TRADING_SESSION_LOW_PRICE '8'
#define ENUM_MD_ENTRY_TYPE_CLEARED_VOLUME 'B'
#define ENUM_MD_ENTRY_TYPE_OPEN_INTEREST 'C'
#define ENUM_MD_ENTRY_TYPE_IMPLIED_BID 'E'
#define ENUM_MD_ENTRY_TYPE_IMPLIED_OFFER 'F'
#define ENUM_MD_ENTRY_TYPE_BOOK_RESET 'J'
#define ENUM_MD_ENTRY_TYPE_SESSION_HIGH_BID 'N'
#define ENUM_MD_ENTRY_TYPE_SESSION_LOW_OFFER 'O'
#define ENUM_MD_ENTRY_TYPE_FIXING_PRICE 'W'
#define ENUM_MD_ENTRY_TYPE_ELECTRONIC_VOLUME 'e'
#define ENUM_MD_ENTRY_TYPE_THRESHOLD_LIMITS_AND_PRICE_BAND_VARIATION 'g'

/*
 * Md Entry Type Book Values
 */ 
#define ENUM_MD_ENTRY_TYPE_BOOK_BID '0'
#define ENUM_MD_ENTRY_TYPE_BOOK_OFFER '1'
#define ENUM_MD_ENTRY_TYPE_BOOK_IMPLIED_BID 'E'
#define ENUM_MD_ENTRY_TYPE_BOOK_IMPLIED_OFFER 'F'
#define ENUM_MD_ENTRY_TYPE_BOOK_BOOK_RESET 'J'

/*
 * Md Entry Type Daily Statistics Values
 */ 
#define ENUM_MD_ENTRY_TYPE_DAILY_STATISTICS_SETTLEMENT_PRICE '6'
#define ENUM_MD_ENTRY_TYPE_DAILY_STATISTICS_CLEARED_VOLUME 'B'
#define ENUM_MD_ENTRY_TYPE_DAILY_STATISTICS_OPEN_INTEREST 'C'
#define ENUM_MD_ENTRY_TYPE_DAILY_STATISTICS_FIXING_PRICE 'W'

/*
 * Md Entry Type Statistics Values
 */ 
#define ENUM_MD_ENTRY_TYPE_STATISTICS_OPEN_PRICE '4'
#define ENUM_MD_ENTRY_TYPE_STATISTICS_HIGH_TRADE '7'
#define ENUM_MD_ENTRY_TYPE_STATISTICS_LOW_TRADE '8'
#define ENUM_MD_ENTRY_TYPE_STATISTICS_HIGHEST_BID 'N'
#define ENUM_MD_ENTRY_TYPE_STATISTICS_LOWEST_OFFER 'O'

/*
 * Md Security Trading Status Values
 */ 
#define ENUM_MD_SECURITY_TRADING_STATUS_NO_VALUE 255
#define ENUM_MD_SECURITY_TRADING_STATUS_TRADING_HALT 2
#define ENUM_MD_SECURITY_TRADING_STATUS_CLOSE 4
#define ENUM_MD_SECURITY_TRADING_STATUS_NEW_PRICE_INDICATION 15
#define ENUM_MD_SECURITY_TRADING_STATUS_READY_TO_TRADE 17
#define ENUM_MD_SECURITY_TRADING_STATUS_NOT_AVAILABLE_FOR_TRADING 18
#define ENUM_MD_SECURITY_TRADING_STATUS_UNKNOWNOR_INVALID 20
#define ENUM_MD_SECURITY_TRADING_STATUS_PRE_OPEN 21
#define ENUM_MD_SECURITY_TRADING_STATUS_PRE_CROSS 24
#define ENUM_MD_SECURITY_TRADING_STATUS_CROSS 25
#define ENUM_MD_SECURITY_TRADING_STATUS_POST_CLOSE 26
#define ENUM_MD_SECURITY_TRADING_STATUS_NO_CHANGE 103

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
 * Open Close Settl Flag Values
 */ 
#define ENUM_OPEN_CLOSE_SETTL_FLAG_NO_VALUE 255
#define ENUM_OPEN_CLOSE_SETTL_FLAG_DAILY_OPEN_PRICE 0
#define ENUM_OPEN_CLOSE_SETTL_FLAG_INDICATIVE_OPENING_PRICE 5

/*
 * Order Update Action Values
 */ 
#define ENUM_ORDER_UPDATE_ACTION_NEW 0
#define ENUM_ORDER_UPDATE_ACTION_UPDATE 1
#define ENUM_ORDER_UPDATE_ACTION_DELETE 2

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT 0
#define ENUM_PUT_OR_CALL_CALL 1

/*
 * Security Trading Event Values
 */ 
#define ENUM_SECURITY_TRADING_EVENT_NO_EVENT 0
#define ENUM_SECURITY_TRADING_EVENT_NO_CANCEL 1
#define ENUM_SECURITY_TRADING_EVENT_RESET_STATISTICS 4
#define ENUM_SECURITY_TRADING_EVENT_IMPLIED_MATCHING_ON 5
#define ENUM_SECURITY_TRADING_EVENT_IMPLIED_MATCHING_OFF 6

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_NO_VALUE 255
#define ENUM_SECURITY_TRADING_STATUS_TRADING_HALT 2
#define ENUM_SECURITY_TRADING_STATUS_CLOSE 4
#define ENUM_SECURITY_TRADING_STATUS_NEW_PRICE_INDICATION 15
#define ENUM_SECURITY_TRADING_STATUS_READY_TO_TRADE 17
#define ENUM_SECURITY_TRADING_STATUS_NOT_AVAILABLE_FOR_TRADING 18
#define ENUM_SECURITY_TRADING_STATUS_UNKNOWNOR_INVALID 20
#define ENUM_SECURITY_TRADING_STATUS_PRE_OPEN 21
#define ENUM_SECURITY_TRADING_STATUS_PRE_CROSS 24
#define ENUM_SECURITY_TRADING_STATUS_CROSS 25
#define ENUM_SECURITY_TRADING_STATUS_POST_CLOSE 26
#define ENUM_SECURITY_TRADING_STATUS_NO_CHANGE 103

/*
 * Security Update Action Values
 */ 
#define ENUM_SECURITY_UPDATE_ACTION_ADD 'A'
#define ENUM_SECURITY_UPDATE_ACTION_DELETE 'D'
#define ENUM_SECURITY_UPDATE_ACTION_MODIFY 'M'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_CHANNEL_RESET 4
#define ENUM_TEMPLATE_ID_ADMIN_HEARTBEAT 12
#define ENUM_TEMPLATE_ID_ADMIN_LOGIN 15
#define ENUM_TEMPLATE_ID_ADMIN_LOGOUT 16
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_FUTURE_27 27
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_SPREAD_29 29
#define ENUM_TEMPLATE_ID_SECURITY_STATUS 30
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_BOOK_32 32
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_DAILY_STATISTICS_33 33
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_LIMITS_BANDING_34 34
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_SESSION_STATISTICS_35 35
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_VOLUME 37
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_38 38
#define ENUM_TEMPLATE_ID_QUOTE_REQUEST 39
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_OPTION_41 41
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_SUMMARY_42 42
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ORDER_BOOK_43 43
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_ORDER_BOOK_44 44
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_BOOK_46 46
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ORDER_BOOK_47 47
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_SUMMARY_48 48
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_DAILY_STATISTICS_49 49
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_LIMITS_BANDING_50 50
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_SESSION_STATISTICS_51 51
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_52 52
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_ORDER_BOOK_53 53
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_FUTURE_54 54
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_OPTION_55 55
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_SPREAD_56 56


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: M D Instrument Definition Spread 56 Leg Group
 */ 
typedef struct {
    int32_t LegSecurityId;
    uint8_t LegSide;
    int8_t LegRatioQty;
    int64_t LegPricePricenulL9;
    int32_t LegOptionDelta;
} MDInstrumentDefinitionSpread56LegGroupT;

/*
 * Structure: Group Size
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeT;

/*
 * Structure: M D Instrument Definition Spread 56 Leg Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDInstrumentDefinitionSpread56LegGroupsT;

/*
 * Structure: Lot Type Rules Group
 */ 
typedef struct {
    int8_t LotType;
    int32_t MinLotSize;
} LotTypeRulesGroupT;

/*
 * Structure: Lot Type Rules Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} LotTypeRulesGroupsT;

/*
 * Bitfield: Inst Attrib Value
 */ 
typedef struct {
    uint32_t
    Reserved10 : 10,
    VariableCabEligible : 1,
    TriangulationEligible : 1,
    ImpliedMatchingEligibility : 1,
    GtOrdersEligibility : 1,
    DailyProductEligibility : 1,
    VariableProductEligibility : 1,
    DecayingProductEligibility : 1,
    ZeroPriceOutrightEligible : 1,
    RfqCrossEligible : 1,
    VolatilityQuotedOption : 1,
    IsFractional : 1,
    NegativePriceOutrightEligible : 1,
    NegativeStrikeEligible : 1,
    ILinkIndicativeMassQuotingEligible : 1,
    OtcEligible : 1,
    EfrEligible : 1,
    EfsEligible : 1,
    EbfEligible : 1,
    EfpEligible : 1,
    BlockTradeEligible : 1,
    OrderCrossEligible : 1,
    ElectronicMatchEligible : 1;
} InstAttribValueT;

/*
 * Structure: Inst Attrib Group
 */ 
typedef struct {
    InstAttribValueT InstAttribValue;
} InstAttribGroupT;

/*
 * Structure: Inst Attrib Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} InstAttribGroupsT;

/*
 * Structure: M D Feed Types Group
 */ 
typedef struct {
    char MdFeedType[3];
    int8_t MarketDepth;
} MDFeedTypesGroupT;

/*
 * Structure: M D Feed Types Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDFeedTypesGroupsT;

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
    GroupSizeT GroupSize;
} EventsGroupsT;

/*
 * Bitfield: Settl Price Type
 */ 
typedef struct {
    uint8_t
    NullValue : 1,
    ReservedBits : 3,
    Intraday : 1,
    Rounded : 1,
    Actual : 1,
    FinalDaily : 1;
} SettlPriceTypeT;

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
 * Structure: Related Instruments Group
 */ 
typedef struct {
    int32_t RelatedSecurityId;
    char RelatedSymbol[20];
} RelatedInstrumentsGroupT;

/*
 * Structure: Related Instruments Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} RelatedInstrumentsGroupsT;

/*
 * Structure: Underlyings Group
 */ 
typedef struct {
    int32_t UnderlyingSecurityId;
    char UnderlyingSymbol[20];
} UnderlyingsGroupT;

/*
 * Structure: Underlyings Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} UnderlyingsGroupsT;

/*
 * Structure: Snapshot Full Refresh Order Book 53 Group
 */ 
typedef struct {
    uint64_t OrderId;
    uint64_t MdOrderPriority;
    int64_t MdEntryPx;
    int32_t MdDisplayQty;
    char MdEntryTypeBook;
} SnapshotFullRefreshOrderBook53GroupT;

/*
 * Structure: Snapshot Full Refresh Order Book 53 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} SnapshotFullRefreshOrderBook53GroupsT;

/*
 * Structure: Snapshot Full Refresh Order Book
 */ 
typedef struct {
    uint32_t LastMsgSeqNumProcessed;
    uint32_t TotNumReports;
    int32_t SecurityId;
    uint32_t NoChunks;
    uint32_t CurrentChunk;
    uint64_t TransactTime;
} SnapshotFullRefreshOrderBookT;

/*
 * Structure: Snapshot Full Refresh 52 Group
 */ 
typedef struct {
    int64_t MdEntryPxOptional;
    int32_t MdEntrySizeOptional;
    int32_t NumberOfOrdersOptional;
    int8_t MdPriceLevelOptional;
    uint16_t TradingReferenceDate;
    uint8_t OpenCloseSettlFlag;
    SettlPriceTypeT SettlPriceType;
    char MdEntryType;
} SnapshotFullRefresh52GroupT;

/*
 * Structure: Snapshot Full Refresh 52 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} SnapshotFullRefresh52GroupsT;

/*
 * Structure: Snapshot Full Refresh
 */ 
typedef struct {
    uint32_t LastMsgSeqNumProcessed;
    uint32_t TotNumReports;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint64_t TransactTime;
    uint64_t LastUpdateTime;
    uint16_t TradeDate;
    uint8_t MdSecurityTradingStatus;
    int64_t HighLimitPricePricenulL9;
    int64_t LowLimitPricePricenulL9;
    int64_t MaxPriceVariationPricenulL9;
} SnapshotFullRefreshT;

/*
 * Structure: M D Incremental Refresh Session Statistics 51 Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint8_t OpenCloseSettlFlag;
    uint8_t MdUpdateAction;
    char MdEntryTypeStatistics;
    int32_t MdEntrySizeOptional;
    char Padding1[1];
} MDIncrementalRefreshSessionStatistics51GroupT;

/*
 * Structure: M D Incremental Refresh Session Statistics 51 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshSessionStatistics51GroupsT;

/*
 * Structure: Md Incremental Refresh Session Statistics
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char Padding2[2];
} MdIncrementalRefreshSessionStatisticsT;

/*
 * Structure: M D Incremental Refresh Limits Banding 50 Group
 */ 
typedef struct {
    int64_t HighLimitPricePricenulL9;
    int64_t LowLimitPricePricenulL9;
    int64_t MaxPriceVariationPricenulL9;
    int32_t SecurityId;
    uint32_t RptSeq;
} MDIncrementalRefreshLimitsBanding50GroupT;

/*
 * Structure: M D Incremental Refresh Limits Banding 50 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshLimitsBanding50GroupsT;

/*
 * Structure: Md Incremental Refresh Limits Banding
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char Padding2[2];
} MdIncrementalRefreshLimitsBandingT;

/*
 * Structure: M D Incremental Refresh Daily Statistics 49 Group
 */ 
typedef struct {
    int64_t MdEntryPxOptional;
    int32_t MdEntrySizeOptional;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint16_t TradingReferenceDate;
    SettlPriceTypeT SettlPriceType;
    uint8_t MdUpdateAction;
    char MdEntryTypeDailyStatistics;
    char Padding7[7];
} MDIncrementalRefreshDailyStatistics49GroupT;

/*
 * Structure: M D Incremental Refresh Daily Statistics 49 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshDailyStatistics49GroupsT;

/*
 * Structure: Md Incremental Refresh Daily Statistics
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char Padding2[2];
} MdIncrementalRefreshDailyStatisticsT;

/*
 * Structure: M D Incremental Refresh Trade Summary 48 Order Group
 */ 
typedef struct {
    uint64_t OrderId;
    int32_t LastQty;
    char Padding4[4];
} MDIncrementalRefreshTradeSummary48OrderGroupT;

/*
 * Structure: Group Size 8 Byte
 */ 
typedef struct {
    uint16_t BlockLength;
    char Padding5[5];
    uint8_t NumInGroup;
} GroupSize8ByteT;

/*
 * Structure: M D Incremental Refresh Trade Summary 48 Order Groups
 */ 
typedef struct {
    GroupSize8ByteT GroupSize8Byte;
} MDIncrementalRefreshTradeSummary48OrderGroupsT;

/*
 * Structure: M D Incremental Refresh Trade Summary 48 Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t MdEntrySize;
    int32_t SecurityId;
    uint32_t RptSeq;
    int32_t NumberOfOrders;
    uint8_t AggressorSide;
    uint8_t MdUpdateAction;
    uint32_t MdTradeEntryId;
    char Padding2[2];
} MDIncrementalRefreshTradeSummary48GroupT;

/*
 * Structure: M D Incremental Refresh Trade Summary 48 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshTradeSummary48GroupsT;

/*
 * Structure: M D Incremental Refresh Order Book 47 Group
 */ 
typedef struct {
    uint64_t OrderIdOptional;
    uint64_t MdOrderPriority;
    int64_t MdEntryPxOptional;
    int32_t MdDisplayQtyOptional;
    int32_t SecurityId;
    uint8_t MdUpdateAction;
    char MdEntryTypeBook;
    char Padding6[6];
} MDIncrementalRefreshOrderBook47GroupT;

/*
 * Structure: M D Incremental Refresh Order Book 47 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshOrderBook47GroupsT;

/*
 * Structure: Md Incremental Refresh Order Book
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char Padding2[2];
} MdIncrementalRefreshOrderBookT;

/*
 * Structure: M D Incremental Refresh Book 46 Order Group
 */ 
typedef struct {
    uint64_t OrderId;
    uint64_t MdOrderPriority;
    int32_t MdDisplayQtyOptional;
    uint8_t ReferenceId;
    uint8_t OrderUpdateAction;
    char Padding2[2];
} MDIncrementalRefreshBook46OrderGroupT;

/*
 * Structure: M D Incremental Refresh Book 46 Order Groups
 */ 
typedef struct {
    GroupSize8ByteT GroupSize8Byte;
} MDIncrementalRefreshBook46OrderGroupsT;

/*
 * Structure: M D Incremental Refresh Book 46 Group
 */ 
typedef struct {
    int64_t MdEntryPxOptional;
    int32_t MdEntrySizeOptional;
    int32_t SecurityId;
    uint32_t RptSeq;
    int32_t NumberOfOrdersOptional;
    uint8_t MdPriceLevel;
    uint8_t MdUpdateAction;
    char MdEntryTypeBook;
    char Padding5[5];
} MDIncrementalRefreshBook46GroupT;

/*
 * Structure: M D Incremental Refresh Book 46 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshBook46GroupsT;

/*
 * Structure: Snapshot Full Refresh Order Book 44 Group
 */ 
typedef struct {
    uint64_t OrderId;
    uint64_t MdOrderPriority;
    int64_t MdEntryPx;
    int32_t MdDisplayQty;
    char MdEntryTypeBook;
} SnapshotFullRefreshOrderBook44GroupT;

/*
 * Structure: Snapshot Full Refresh Order Book 44 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} SnapshotFullRefreshOrderBook44GroupsT;

/*
 * Structure: Snapshot Full Refresh Order Book Legacy
 */ 
typedef struct {
    uint32_t LastMsgSeqNumProcessed;
    uint32_t TotNumReports;
    int32_t SecurityId;
    uint32_t NoChunks;
    uint32_t CurrentChunk;
    uint64_t TransactTime;
} SnapshotFullRefreshOrderBookLegacyT;

/*
 * Structure: M D Incremental Refresh Order Book 43 Group
 */ 
typedef struct {
    uint64_t OrderIdOptional;
    uint64_t MdOrderPriority;
    int64_t MdEntryPxOptional;
    int32_t MdDisplayQtyOptional;
    int32_t SecurityId;
    uint8_t MdUpdateAction;
    char MdEntryTypeBook;
    char Padding6[6];
} MDIncrementalRefreshOrderBook43GroupT;

/*
 * Structure: M D Incremental Refresh Order Book 43 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshOrderBook43GroupsT;

/*
 * Structure: Md Incremental Refresh Order Book Legacy
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char Padding2[2];
} MdIncrementalRefreshOrderBookLegacyT;

/*
 * Structure: M D Incremental Refresh Trade Summary 42 Order Group
 */ 
typedef struct {
    uint64_t OrderId;
    int32_t LastQty;
    char Padding4[4];
} MDIncrementalRefreshTradeSummary42OrderGroupT;

/*
 * Structure: M D Incremental Refresh Trade Summary 42 Order Groups
 */ 
typedef struct {
    GroupSize8ByteT GroupSize8Byte;
} MDIncrementalRefreshTradeSummary42OrderGroupsT;

/*
 * Structure: M D Incremental Refresh Trade Summary 42 Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t MdEntrySize;
    int32_t SecurityId;
    uint32_t RptSeq;
    int32_t NumberOfOrdersOptional;
    uint8_t AggressorSide;
    uint8_t MdUpdateAction;
    uint32_t MdTradeEntryId;
    char Padding2[2];
} MDIncrementalRefreshTradeSummary42GroupT;

/*
 * Structure: M D Incremental Refresh Trade Summary 42 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshTradeSummary42GroupsT;

/*
 * Structure: Related Sym Group
 */ 
typedef struct {
    char Symbol[20];
    int32_t SecurityId;
    int32_t OrderQty;
    int8_t QuoteType;
    int8_t Side;
    char Padding2[2];
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
    char QuoteReqId[23];
    MatchEventIndicatorT MatchEventIndicator;
    char Padding3[3];
} QuoteRequestT;

/*
 * Structure: Snapshot Full Refresh 38 Group
 */ 
typedef struct {
    int64_t MdEntryPxOptional;
    int32_t MdEntrySizeOptional;
    int32_t NumberOfOrdersOptional;
    int8_t MdPriceLevelOptional;
    uint16_t TradingReferenceDate;
    uint8_t OpenCloseSettlFlag;
    SettlPriceTypeT SettlPriceType;
    char MdEntryType;
} SnapshotFullRefresh38GroupT;

/*
 * Structure: Snapshot Full Refresh 38 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} SnapshotFullRefresh38GroupsT;

/*
 * Structure: Snapshot Full Refresh Legacy
 */ 
typedef struct {
    uint32_t LastMsgSeqNumProcessed;
    uint32_t TotNumReports;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint64_t TransactTime;
    uint64_t LastUpdateTime;
    uint16_t TradeDate;
    uint8_t MdSecurityTradingStatus;
    int64_t HighLimitPricePricenull;
    int64_t LowLimitPricePricenull;
    int64_t MaxPriceVariationPricenull;
} SnapshotFullRefreshLegacyT;

/*
 * Structure: M D Incremental Refresh Volume Group
 */ 
typedef struct {
    int32_t MdEntrySize;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint8_t MdUpdateAction;
    char Padding3[3];
} MDIncrementalRefreshVolumeGroupT;

/*
 * Structure: M D Incremental Refresh Volume Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshVolumeGroupsT;

/*
 * Structure: Md Incremental Refresh Volume
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char Padding2[2];
} MdIncrementalRefreshVolumeT;

/*
 * Structure: M D Incremental Refresh Session Statistics 35 Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint8_t OpenCloseSettlFlag;
    uint8_t MdUpdateAction;
    char MdEntryTypeStatistics;
    int32_t MdEntrySizeOptional;
    char Padding1[1];
} MDIncrementalRefreshSessionStatistics35GroupT;

/*
 * Structure: M D Incremental Refresh Session Statistics 35 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshSessionStatistics35GroupsT;

/*
 * Structure: Md Incremental Refresh Session Statistics Legacy
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char Padding2[2];
} MdIncrementalRefreshSessionStatisticsLegacyT;

/*
 * Structure: M D Incremental Refresh Limits Banding 34 Group
 */ 
typedef struct {
    int64_t HighLimitPricePricenull;
    int64_t LowLimitPricePricenull;
    int64_t MaxPriceVariationPricenull;
    int32_t SecurityId;
    uint32_t RptSeq;
} MDIncrementalRefreshLimitsBanding34GroupT;

/*
 * Structure: M D Incremental Refresh Limits Banding 34 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshLimitsBanding34GroupsT;

/*
 * Structure: Md Incremental Refresh Limits Banding Legacy
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char Padding2[2];
} MdIncrementalRefreshLimitsBandingLegacyT;

/*
 * Structure: M D Incremental Refresh Daily Statistics 33 Group
 */ 
typedef struct {
    int64_t MdEntryPxOptional;
    int32_t MdEntrySizeOptional;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint16_t TradingReferenceDate;
    SettlPriceTypeT SettlPriceType;
    uint8_t MdUpdateAction;
    char MdEntryTypeDailyStatistics;
    char Padding7[7];
} MDIncrementalRefreshDailyStatistics33GroupT;

/*
 * Structure: M D Incremental Refresh Daily Statistics 33 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshDailyStatistics33GroupsT;

/*
 * Structure: Md Incremental Refresh Daily Statistics Legacy
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
    char Padding2[2];
} MdIncrementalRefreshDailyStatisticsLegacyT;

/*
 * Structure: M D Incremental Refresh Book 32 Order Group
 */ 
typedef struct {
    uint64_t OrderId;
    uint64_t MdOrderPriority;
    int32_t MdDisplayQtyOptional;
    uint8_t ReferenceId;
    uint8_t OrderUpdateAction;
    char Padding2[2];
} MDIncrementalRefreshBook32OrderGroupT;

/*
 * Structure: M D Incremental Refresh Book 32 Order Groups
 */ 
typedef struct {
    GroupSize8ByteT GroupSize8Byte;
} MDIncrementalRefreshBook32OrderGroupsT;

/*
 * Structure: M D Incremental Refresh Book 32 Group
 */ 
typedef struct {
    int64_t MdEntryPxOptional;
    int32_t MdEntrySizeOptional;
    int32_t SecurityId;
    uint32_t RptSeq;
    int32_t NumberOfOrdersOptional;
    uint8_t MdPriceLevel;
    uint8_t MdUpdateAction;
    char MdEntryTypeBook;
    char Padding5[5];
} MDIncrementalRefreshBook32GroupT;

/*
 * Structure: M D Incremental Refresh Book 32 Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshBook32GroupsT;

/*
 * Structure: Security Status
 */ 
typedef struct {
    uint64_t TransactTime;
    char SecurityGroup[6];
    char Asset[6];
    int32_t SecurityIdOptional;
    uint16_t TradeDate;
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t SecurityTradingStatus;
    uint8_t HaltReason;
    uint8_t SecurityTradingEvent;
} SecurityStatusT;

/*
 * Structure: M D Instrument Definition Spread 29 Leg Group
 */ 
typedef struct {
    int32_t LegSecurityId;
    uint8_t LegSide;
    int8_t LegRatioQty;
    int64_t LegPricePricenull;
    int32_t LegOptionDelta;
} MDInstrumentDefinitionSpread29LegGroupT;

/*
 * Structure: M D Instrument Definition Spread 29 Leg Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDInstrumentDefinitionSpread29LegGroupsT;

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
 * Structure: Channel Reset Group
 */ 
typedef struct {
    int16_t ApplId;
} ChannelResetGroupT;

/*
 * Structure: Channel Reset Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} ChannelResetGroupsT;

/*
 * Structure: Channel Reset
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
} ChannelResetT;

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
   Version: 1.9
   Date: Thursday, March 8, 2018

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
