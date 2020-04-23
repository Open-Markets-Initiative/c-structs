/*******************************************************************************
 * C Structs For Cme Futures Sbe Mdp3 1.8 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_NO_VALUE_255 = 255
#define ENUM_AGGRESSOR_SIDE_NO_AGGRESSOR_0 = 0
#define ENUM_AGGRESSOR_SIDE_BUY_1 = 1
#define ENUM_AGGRESSOR_SIDE_SELL_2 = 2

/*
 * Event Type Values
 */ 
#define ENUM_EVENT_TYPE_ACTIVATION_5 = 5
#define ENUM_EVENT_TYPE_LAST_ELIGIBLE_TRADE_DATE_7 = 7

/*
 * Halt Reason Values
 */ 
#define ENUM_HALT_REASON_GROUP_SCHEDULE_0 = 0
#define ENUM_HALT_REASON_SURVEILLANCE_INTERVENTION_1 = 1
#define ENUM_HALT_REASON_MARKET_EVENT_2 = 2
#define ENUM_HALT_REASON_INSTRUMENT_ACTIVATION_3 = 3
#define ENUM_HALT_REASON_INSTRUMENT_EXPIRATION_4 = 4
#define ENUM_HALT_REASON_UNKNOWN_5 = 5
#define ENUM_HALT_REASON_RECOVERY_IN_PROCESS_6 = 6

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY_SIDE_1 = 1
#define ENUM_LEG_SIDE_SELL_SIDE_2 = 2

/*
 * Md Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_BID_0 = '0'
#define ENUM_MD_ENTRY_TYPE_OFFER_1 = '1'
#define ENUM_MD_ENTRY_TYPE_TRADE_2 = '2'
#define ENUM_MD_ENTRY_TYPE_OPEN_PRICE_4 = '4'
#define ENUM_MD_ENTRY_TYPE_SETTLEMENT_PRICE_6 = '6'
#define ENUM_MD_ENTRY_TYPE_TRADING_SESSION_HIGH_PRICE_7 = '7'
#define ENUM_MD_ENTRY_TYPE_TRADING_SESSION_LOW_PRICE_8 = '8'
#define ENUM_MD_ENTRY_TYPE_CLEARED_VOLUME_B = 'B'
#define ENUM_MD_ENTRY_TYPE_OPEN_INTEREST_C = 'C'
#define ENUM_MD_ENTRY_TYPE_IMPLIED_BID_E = 'E'
#define ENUM_MD_ENTRY_TYPE_IMPLIED_OFFER_F = 'F'
#define ENUM_MD_ENTRY_TYPE_BOOK_RESET_J = 'J'
#define ENUM_MD_ENTRY_TYPE_SESSION_HIGH_BID_N = 'N'
#define ENUM_MD_ENTRY_TYPE_SESSION_LOW_OFFER_O = 'O'
#define ENUM_MD_ENTRY_TYPE_FIXING_PRICE_W = 'W'
#define ENUM_MD_ENTRY_TYPE_ELECTRONIC_VOLUME_E = 'e'
#define ENUM_MD_ENTRY_TYPE_THRESHOLD_LIMITSAND_PRICE_BAND_VARIATION_G = 'g'

/*
 * Md Update Action Values
 */ 
#define ENUM_MD_UPDATE_ACTION_NEW_0 = 0
#define ENUM_MD_UPDATE_ACTION_CHANGE_1 = 1
#define ENUM_MD_UPDATE_ACTION_DELETE_2 = 2
#define ENUM_MD_UPDATE_ACTION_DELETE_THRU_3 = 3
#define ENUM_MD_UPDATE_ACTION_DELETE_FROM_4 = 4
#define ENUM_MD_UPDATE_ACTION_OVERLAY_5 = 5

/*
 * Open Close Settl Flag Values
 */ 
#define ENUM_OPEN_CLOSE_SETTL_FLAG_NO_VALUE_255 = 255
#define ENUM_OPEN_CLOSE_SETTL_FLAG_DAILY_OPEN_PRICE_0 = 0
#define ENUM_OPEN_CLOSE_SETTL_FLAG_INDICATIVE_OPENING_PRICE_5 = 5

/*
 * Order Update Action Values
 */ 
#define ENUM_ORDER_UPDATE_ACTION_NEW_0 = 0
#define ENUM_ORDER_UPDATE_ACTION_UPDATE_1 = 1
#define ENUM_ORDER_UPDATE_ACTION_DELETE_2 = 2

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT_0 = 0
#define ENUM_PUT_OR_CALL_CALL_1 = 1

/*
 * Security Trading Event Values
 */ 
#define ENUM_SECURITY_TRADING_EVENT_NO_EVENT_0 = 0
#define ENUM_SECURITY_TRADING_EVENT_NO_CANCEL_1 = 1
#define ENUM_SECURITY_TRADING_EVENT_RESET_STATISTICS_4 = 4
#define ENUM_SECURITY_TRADING_EVENT_IMPLIED_MATCHING_ON_5 = 5
#define ENUM_SECURITY_TRADING_EVENT_IMPLIED_MATCHING_OFF_6 = 6

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_NO_VALUE_255 = 255
#define ENUM_SECURITY_TRADING_STATUS_TRADING_HALT_2 = 2
#define ENUM_SECURITY_TRADING_STATUS_CLOSE_4 = 4
#define ENUM_SECURITY_TRADING_STATUS_NEW_PRICE_INDICATION_15 = 15
#define ENUM_SECURITY_TRADING_STATUS_READY_TO_TRADE_17 = 17
#define ENUM_SECURITY_TRADING_STATUS_NOT_AVAILABLE_FOR_TRADING_18 = 18
#define ENUM_SECURITY_TRADING_STATUS_UNKNOWNOR_INVALID_20 = 20
#define ENUM_SECURITY_TRADING_STATUS_PRE_OPEN_21 = 21
#define ENUM_SECURITY_TRADING_STATUS_PRE_CROSS_24 = 24
#define ENUM_SECURITY_TRADING_STATUS_CROSS_25 = 25
#define ENUM_SECURITY_TRADING_STATUS_POST_CLOSE_26 = 26
#define ENUM_SECURITY_TRADING_STATUS_NO_CHANGE_103 = 103

/*
 * Security Update Action Values
 */ 
#define ENUM_SECURITY_UPDATE_ACTION_ADD_A = 'A'
#define ENUM_SECURITY_UPDATE_ACTION_DELETE_D = 'D'
#define ENUM_SECURITY_UPDATE_ACTION_MODIFY_M = 'M'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_CHANNEL_RESET_4 = 4
#define ENUM_TEMPLATE_ID_ADMIN_HEARTBEAT_12 = 12
#define ENUM_TEMPLATE_ID_ADMIN_LOGIN_15 = 15
#define ENUM_TEMPLATE_ID_ADMIN_LOGOUT_16 = 16
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_FUTURE_27 = 27
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_SPREAD_29 = 29
#define ENUM_TEMPLATE_ID_SECURITY_STATUS_30 = 30
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_BOOK_32 = 32
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_DAILY_STATISTICS_33 = 33
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_LIMITS_BANDING_34 = 34
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_SESSION_STATISTICS_35 = 35
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_36 = 36
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_VOLUME_37 = 37
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_38 = 38
#define ENUM_TEMPLATE_ID_QUOTE_REQUEST_39 = 39
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_OPTION_41 = 41
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_SUMMARY_42 = 42
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_ORDER_BOOK_43 = 43
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_ORDER_BOOK_44 = 44


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Admin Login 15
 */ 
typedef struct {
    int8_t HeartBtInt;
} AdminLogin15T;

/*
 * Structure: Admin Logout 16
 */ 
typedef struct {
    char Text[180];
} AdminLogout16T;

/*
 * Structure: Binary Packet Header
 */ 
typedef struct {
    uint32_t MessageSequenceNumber;
    uint64_t SendingTime;
} BinaryPacketHeaderT;

/*
 * Structure: Channel Reset 4
 */ 
typedef struct {
    uint64_t TransactTime;
    MatchEventIndicatorT MatchEventIndicator;
} ChannelReset4T;

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
    char GroupSize[0];
} EventsGroupsT;

/*
 * Structure: Group Size
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeT;

/*
 * Structure: Group Size 8 Byte
 */ 
typedef struct {
    uint16_t BlockLength;
    char Padding5[5];
    uint8_t NumInGroup;
} GroupSize8ByteT;

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
    char GroupSize[0];
} InstAttribGroupsT;

/*
 * Structure: Inst Attrib Value
 */ 
typedef struct {
    char Reserved12[12];
    char ImpliedMatchingEligibility[1];
    char GtOrdersEligibility[1];
    char DailyProductEligibility[1];
    char VariableProductEligibility[1];
    char DecayingProductEligibility[1];
    char ZeroPriceOutrightEligible[1];
    char RfqCrossEligible[1];
    char VolatilityQuotedOption[1];
    char IsFractional[1];
    char NegativePriceOutrightEligible[1];
    char NegativeStrikeEligible[1];
    char ILinkIndicativeMassQuotingEligible[1];
    char OtcEligible[1];
    char EfrEligible[1];
    char EfsEligible[1];
    char EbfEligible[1];
    char EfpEligible[1];
    char BlockTradeEligible[1];
    char OrderCrossEligible[1];
    char ElectronicMatchEligible[1];
} InstAttribValueT;

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
    char GroupSize[0];
} LotTypeRulesGroupsT;

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
    char GroupSize[0];
} MDFeedTypesGroupsT;

/*
 * Structure: M D Incremental Refresh Book Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t MdEntrySize;
    int32_t SecurityId;
    uint32_t RptSeq;
    int32_t NumberOfOrders;
    uint8_t MdPriceLevel;
    uint8_t MdUpdateAction;
    char MdEntryType;
    char Padding5[5];
} MDIncrementalRefreshBookGroupT;

/*
 * Structure: M D Incremental Refresh Book Groups
 */ 
typedef struct {
    char GroupSize[0];
} MDIncrementalRefreshBookGroupsT;

/*
 * Structure: M D Incremental Refresh Book Order Group
 */ 
typedef struct {
    uint64_t OrderId;
    uint64_t MdOrderPriority;
    int32_t MdDisplayQty;
    uint8_t ReferenceId;
    uint8_t OrderUpdateAction;
    char Padding2[2];
} MDIncrementalRefreshBookOrderGroupT;

/*
 * Structure: M D Incremental Refresh Book Order Groups
 */ 
typedef struct {
    GroupSize8ByteT GroupSize8Byte;
} MDIncrementalRefreshBookOrderGroupsT;

/*
 * Structure: M D Incremental Refresh Daily Statistics Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t MdEntrySize;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint16_t TradingReferenceDate;
    char SettlPriceType[0];
    uint8_t MdUpdateAction;
    char MdEntryType;
    char Padding7[7];
} MDIncrementalRefreshDailyStatisticsGroupT;

/*
 * Structure: M D Incremental Refresh Daily Statistics Groups
 */ 
typedef struct {
    char GroupSize[0];
} MDIncrementalRefreshDailyStatisticsGroupsT;

/*
 * Structure: M D Incremental Refresh Limits Banding Group
 */ 
typedef struct {
    int64_t HighLimitPrice;
    int64_t LowLimitPrice;
    int64_t MaxPriceVariation;
    int32_t SecurityId;
    uint32_t RptSeq;
} MDIncrementalRefreshLimitsBandingGroupT;

/*
 * Structure: M D Incremental Refresh Limits Banding Groups
 */ 
typedef struct {
    char GroupSize[0];
} MDIncrementalRefreshLimitsBandingGroupsT;

/*
 * Structure: M D Incremental Refresh Order Book Group
 */ 
typedef struct {
    uint64_t OrderId;
    uint64_t MdOrderPriority;
    int64_t MdEntryPx;
    int32_t MdDisplayQty;
    int32_t SecurityId;
    uint8_t MdUpdateAction;
    char MdEntryType;
    char Padding6[6];
} MDIncrementalRefreshOrderBookGroupT;

/*
 * Structure: M D Incremental Refresh Order Book Groups
 */ 
typedef struct {
    char GroupSize[0];
} MDIncrementalRefreshOrderBookGroupsT;

/*
 * Structure: M D Incremental Refresh Session Statistics Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint8_t OpenCloseSettlFlag;
    uint8_t MdUpdateAction;
    char MdEntryType;
    int32_t MdEntrySize;
    char Padding1[1];
} MDIncrementalRefreshSessionStatisticsGroupT;

/*
 * Structure: M D Incremental Refresh Session Statistics Groups
 */ 
typedef struct {
    char GroupSize[0];
} MDIncrementalRefreshSessionStatisticsGroupsT;

/*
 * Structure: M D Incremental Refresh Trade Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t MdEntrySize;
    int32_t SecurityId;
    uint32_t RptSeq;
    int32_t NumberOfOrders;
    int32_t TradeId;
    uint8_t AggressorSide;
    uint8_t MdUpdateAction;
    char Padding2[2];
} MDIncrementalRefreshTradeGroupT;

/*
 * Structure: M D Incremental Refresh Trade Groups
 */ 
typedef struct {
    char GroupSize[0];
} MDIncrementalRefreshTradeGroupsT;

/*
 * Structure: M D Incremental Refresh Trade Summary Group
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
} MDIncrementalRefreshTradeSummaryGroupT;

/*
 * Structure: M D Incremental Refresh Trade Summary Groups
 */ 
typedef struct {
    char GroupSize[0];
} MDIncrementalRefreshTradeSummaryGroupsT;

/*
 * Structure: M D Incremental Refresh Trade Summary Order Group
 */ 
typedef struct {
    uint64_t OrderId;
    int32_t LastQty;
    char Padding4[4];
} MDIncrementalRefreshTradeSummaryOrderGroupT;

/*
 * Structure: M D Incremental Refresh Trade Summary Order Groups
 */ 
typedef struct {
    char GroupSize8Byte[0];
} MDIncrementalRefreshTradeSummaryOrderGroupsT;

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
    char GroupSize[0];
} MDIncrementalRefreshVolumeGroupsT;

/*
 * Structure: M D Instrument Definition Spread Leg Group
 */ 
typedef struct {
    int32_t LegSecurityId;
    uint8_t LegSide;
    int8_t LegRatioQty;
    int64_t LegPrice;
    int32_t LegOptionDelta;
} MDInstrumentDefinitionSpreadLegGroupT;

/*
 * Structure: M D Instrument Definition Spread Leg Groups
 */ 
typedef struct {
    char GroupSize[0];
} MDInstrumentDefinitionSpreadLegGroupsT;

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
 * Structure: Md Incremental Refresh Daily Statistics 33
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshDailyStatistics33T;

/*
 * Structure: Md Incremental Refresh Limits Banding 34
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshLimitsBanding34T;

/*
 * Structure: Md Incremental Refresh Order Book 43
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshOrderBook43T;

/*
 * Structure: Md Incremental Refresh Session Statistics 35
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshSessionStatistics35T;

/*
 * Structure: Md Incremental Refresh Trade 36
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshTrade36T;

/*
 * Structure: Md Incremental Refresh Volume 37
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshVolume37T;

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
 * Structure: Quote Request 39
 */ 
typedef struct {
    uint64_t TransactTime;
    char QuoteReqId[23];
    char MatchEventIndicator[0];
    char Padding3[3];
} QuoteRequest39T;

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
    char GroupSize[0];
} RelatedInstrumentsGroupsT;

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
    char GroupSize[0];
} RelatedSymGroupsT;

/*
 * Structure: Security Status 30
 */ 
typedef struct {
    uint64_t TransactTime;
    char SecurityGroup[6];
    char Asset[6];
    int32_t SecurityId;
    uint16_t TradeDate;
    char MatchEventIndicator[0];
    uint8_t SecurityTradingStatus;
    uint8_t HaltReason;
    uint8_t SecurityTradingEvent;
} SecurityStatus30T;

/*
 * Structure: Settl Price Type
 */ 
typedef struct {
    char NullValue[1];
    char ReservedBits[3];
    char Intraday[1];
    char Rounded[1];
    char Actual[1];
    char Final[1];
} SettlPriceTypeT;

/*
 * Structure: Snapshot Full Refresh 38
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
    int64_t HighLimitPrice;
    int64_t LowLimitPrice;
    int64_t MaxPriceVariation;
} SnapshotFullRefresh38T;

/*
 * Structure: Snapshot Full Refresh Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t MdEntrySize;
    int32_t NumberOfOrders;
    uint8_t MdPriceLevel;
    uint16_t TradingReferenceDate;
    uint8_t OpenCloseSettlFlag;
    char SettlPriceType[0];
    char MdEntryType;
} SnapshotFullRefreshGroupT;

/*
 * Structure: Snapshot Full Refresh Groups
 */ 
typedef struct {
    char GroupSize[0];
} SnapshotFullRefreshGroupsT;

/*
 * Structure: Snapshot Full Refresh Order Book 44
 */ 
typedef struct {
    uint32_t LastMsgSeqNumProcessed;
    uint32_t TotNumReports;
    int32_t SecurityId;
    uint32_t NoChunks;
    uint32_t CurrentChunk;
    uint64_t TransactTime;
} SnapshotFullRefreshOrderBook44T;

/*
 * Structure: Snapshot Full Refresh Order Book Group
 */ 
typedef struct {
    uint64_t OrderId;
    uint64_t MdOrderPriority;
    int64_t MdEntryPx;
    int32_t MdDisplayQty;
    char MdEntryType;
} SnapshotFullRefreshOrderBookGroupT;

/*
 * Structure: Snapshot Full Refresh Order Book Groups
 */ 
typedef struct {
    char GroupSize[0];
} SnapshotFullRefreshOrderBookGroupsT;

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
    char GroupSize[0];
} UnderlyingsGroupsT;

