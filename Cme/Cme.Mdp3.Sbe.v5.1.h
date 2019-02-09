/*******************************************************************************
 * C Structs For Cme Sbe Mdp3 5.1 protocol
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
 * Event Type Values
 */ 
#define ENUM_EVENT_TYPE_EVENT_TYPE_5 = "5"
#define ENUM_EVENT_TYPE_EVENT_TYPE_7 = "7"

/*
 * Halt Reason Values
 */ 
#define ENUM_HALT_REASON_HALT_REASON_0 = "0"
#define ENUM_HALT_REASON_HALT_REASON_1 = "1"
#define ENUM_HALT_REASON_HALT_REASON_2 = "2"
#define ENUM_HALT_REASON_HALT_REASON_3 = "3"
#define ENUM_HALT_REASON_HALT_REASON_4 = "4"
#define ENUM_HALT_REASON_HALT_REASON_5 = "5"
#define ENUM_HALT_REASON_HALT_REASON_6 = "6"

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_LEG_SIDE_1 = "1"
#define ENUM_LEG_SIDE_LEG_SIDE_2 = "2"

/*
 * Md Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_0 = '0'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_1 = '1'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_2 = '2'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_4 = '4'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_6 = '6'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_7 = '7'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_8 = '8'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_B = 'B'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_C = 'C'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_E = 'E'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_F = 'F'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_J = 'J'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_N = 'N'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_O = 'O'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_W = 'W'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_E = 'e'
#define ENUM_MD_ENTRY_TYPE_MD_ENTRY_TYPE_G = 'g'

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
 * Open Close Settl Flag Values
 */ 
#define ENUM_OPEN_CLOSE_SETTL_FLAG_OPEN_CLOSE_SETTL_FLAG_0 = "0"
#define ENUM_OPEN_CLOSE_SETTL_FLAG_OPEN_CLOSE_SETTL_FLAG_5 = "5"

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT_OR_CALL_0 = "0"
#define ENUM_PUT_OR_CALL_PUT_OR_CALL_1 = "1"

/*
 * Security Trading Event Values
 */ 
#define ENUM_SECURITY_TRADING_EVENT_SECURITY_TRADING_EVENT_0 = "0"
#define ENUM_SECURITY_TRADING_EVENT_SECURITY_TRADING_EVENT_1 = "1"
#define ENUM_SECURITY_TRADING_EVENT_SECURITY_TRADING_EVENT_4 = "4"
#define ENUM_SECURITY_TRADING_EVENT_SECURITY_TRADING_EVENT_5 = "5"
#define ENUM_SECURITY_TRADING_EVENT_SECURITY_TRADING_EVENT_6 = "6"

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_2 = "2"
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_4 = "4"
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_15 = "15"
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_17 = "17"
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_18 = "18"
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_20 = "20"
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_21 = "21"
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_24 = "24"
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_25 = "25"
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_26 = "26"
#define ENUM_SECURITY_TRADING_STATUS_SECURITY_TRADING_STATUS_103 = "103"

/*
 * Security Update Action Values
 */ 
#define ENUM_SECURITY_UPDATE_ACTION_SECURITY_UPDATE_ACTION_A = 'A'
#define ENUM_SECURITY_UPDATE_ACTION_SECURITY_UPDATE_ACTION_D = 'D'
#define ENUM_SECURITY_UPDATE_ACTION_SECURITY_UPDATE_ACTION_M = 'M'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_CHANNEL_RESET_4 = "4"
#define ENUM_TEMPLATE_ID_ADMIN_HEARTBEAT_12 = "12"
#define ENUM_TEMPLATE_ID_ADMIN_LOGIN_15 = "15"
#define ENUM_TEMPLATE_ID_ADMIN_LOGOUT_16 = "16"
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_FUTURE_27 = "27"
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_SPREAD_29 = "29"
#define ENUM_TEMPLATE_ID_SECURITY_STATUS_30 = "30"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_BOOK_32 = "32"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_DAILY_STATISTICS_33 = "33"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_LIMITS_BANDING_34 = "34"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_SESSION_STATISTICS_35 = "35"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_36 = "36"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_VOLUME_37 = "37"
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_38 = "38"
#define ENUM_TEMPLATE_ID_QUOTE_REQUEST_39 = "39"
#define ENUM_TEMPLATE_ID_MD_INSTRUMENT_DEFINITION_OPTION_41 = "41"
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TRADE_SUMMARY_42 = "42"


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
 * Structure: Group Size8 Byte
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
 * Structure: Legs Group
 */ 
typedef struct {
    int32_t LegSecurityId;
    uint8_t LegSide;
    int8_t LegRatioQty;
    int64_t LegPrice;
    int32_t LegOptionDelta;
} LegsGroupT;

/*
 * Structure: Legs Groups
 */ 
typedef struct {
    char GroupSize[0];
} LegsGroupsT;

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
    char MdFeedType[3];
    int8_t MarketDepth;
} MdFeedTypesGroupT;

/*
 * Structure: MD Feed Types Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdFeedTypesGroupsT;

/*
 * Structure: Md Incremental Refresh Book 32
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshBook32T;

/*
 * Structure: MD Incremental Refresh Book Group
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
} MdIncrementalRefreshBookGroupT;

/*
 * Structure: MD Incremental Refresh Book Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshBookGroupsT;

/*
 * Structure: Md Incremental Refresh Daily Statistics 33
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshDailyStatistics33T;

/*
 * Structure: MD Incremental Refresh Daily Statistics Group
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
} MdIncrementalRefreshDailyStatisticsGroupT;

/*
 * Structure: MD Incremental Refresh Daily Statistics Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshDailyStatisticsGroupsT;

/*
 * Structure: Md Incremental Refresh Limits Banding 34
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshLimitsBanding34T;

/*
 * Structure: MD Incremental Refresh Limits Banding Group
 */ 
typedef struct {
    int64_t HighLimitPrice;
    int64_t LowLimitPrice;
    int64_t MaxPriceVariation;
    int32_t SecurityId;
    uint32_t RptSeq;
} MdIncrementalRefreshLimitsBandingGroupT;

/*
 * Structure: MD Incremental Refresh Limits Banding Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshLimitsBandingGroupsT;

/*
 * Structure: Md Incremental Refresh Session Statistics 35
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshSessionStatistics35T;

/*
 * Structure: MD Incremental Refresh Session Statistics Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint8_t OpenCloseSettlFlag;
    uint8_t MdUpdateAction;
    char MdEntryType;
    char Padding5[5];
} MdIncrementalRefreshSessionStatisticsGroupT;

/*
 * Structure: MD Incremental Refresh Session Statistics Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshSessionStatisticsGroupsT;

/*
 * Structure: Md Incremental Refresh Trade 36
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshTrade36T;

/*
 * Structure: MD Incremental Refresh Trade Group
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
} MdIncrementalRefreshTradeGroupT;

/*
 * Structure: MD Incremental Refresh Trade Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshTradeGroupsT;

/*
 * Structure: MD Incremental Refresh Trade Summary Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int32_t MdEntrySize;
    int32_t SecurityId;
    uint32_t RptSeq;
    int32_t NumberOfOrders;
    uint8_t AggressorSide;
    uint8_t MdUpdateAction;
    char Padding6[6];
} MdIncrementalRefreshTradeSummaryGroupT;

/*
 * Structure: MD Incremental Refresh Trade Summary Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshTradeSummaryGroupsT;

/*
 * Structure: MD Incremental Refresh Trade Summary Order Group
 */ 
typedef struct {
    uint64_t OrderId;
    int32_t LastQty;
    char Padding4[4];
} MdIncrementalRefreshTradeSummaryOrderGroupT;

/*
 * Structure: MD Incremental Refresh Trade Summary Order Groups
 */ 
typedef struct {
    GroupSize8ByteT GroupSize8Byte;
} MdIncrementalRefreshTradeSummaryOrderGroupsT;

/*
 * Structure: Md Incremental Refresh Volume 37
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char Padding2[2];
} MdIncrementalRefreshVolume37T;

/*
 * Structure: MD Incremental Refresh Volume Group
 */ 
typedef struct {
    int32_t MdEntrySize;
    int32_t SecurityId;
    uint32_t RptSeq;
    uint8_t MdUpdateAction;
    char Padding3[3];
} MdIncrementalRefreshVolumeGroupT;

/*
 * Structure: MD Incremental Refresh Volume Groups
 */ 
typedef struct {
    char GroupSize[0];
} MdIncrementalRefreshVolumeGroupsT;

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
 * Structure: Quote Request 39
 */ 
typedef struct {
    uint64_t TransactTime;
    char QuoteReqId[23];
    char MatchEventIndicator[0];
    char Padding3[3];
} QuoteRequest39T;

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

