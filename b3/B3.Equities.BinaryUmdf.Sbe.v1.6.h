/*******************************************************************************
 * C Structs For B3 Equities Sbe BinaryUmdf 1.6 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_NOAGGRESSOR 0
#define ENUM_AGGRESSOR_SIDE_BUY 1
#define ENUM_AGGRESSOR_SIDE_SELL 2

/*
 * Exercise Style Values
 */ 
#define ENUM_EXERCISE_STYLE_EUROPEAN 0
#define ENUM_EXERCISE_STYLE_AMERICAN 1
#define ENUM_EXERCISE_STYLE_NO_VALUE 255

/*
 * Governance Indicator Values
 */ 
#define ENUM_GOVERNANCE_INDICATOR_NO 0
#define ENUM_GOVERNANCE_INDICATOR_N1 1
#define ENUM_GOVERNANCE_INDICATOR_N2 2
#define ENUM_GOVERNANCE_INDICATOR_NM 4
#define ENUM_GOVERNANCE_INDICATOR_MA 5
#define ENUM_GOVERNANCE_INDICATOR_MB 6
#define ENUM_GOVERNANCE_INDICATOR_M2 7
#define ENUM_GOVERNANCE_INDICATOR_NO_VALUE 255

/*
 * Instr Attrib Type Values
 */ 
#define ENUM_INSTR_ATTRIB_TYPE_TRADETYPEELIGIBILITY 24
#define ENUM_INSTR_ATTRIB_TYPE_GTDGTCELIGIBILITY 34

/*
 * Instr Attrib Value Values
 */ 
#define ENUM_INSTR_ATTRIB_VALUE_ELECTRONICMATCHORGTDGTCELIGIBLE 1
#define ENUM_INSTR_ATTRIB_VALUE_ORDERCROSSELIGIBLE 2
#define ENUM_INSTR_ATTRIB_VALUE_BLOCKTRADEELIGIBLE 3
#define ENUM_INSTR_ATTRIB_VALUE_FLAGRFQFORCROSSELIGIBLE 14
#define ENUM_INSTR_ATTRIB_VALUE_NEGOTIATEDQUOTEELIGIBLE 17

/*
 * Last Fragment Values
 */ 
#define ENUM_LAST_FRAGMENT_FALSEVALUE 0
#define ENUM_LAST_FRAGMENT_TRUEVALUE 1
#define ENUM_LAST_FRAGMENT_NO_VALUE 255

/*
 * Leg Security Type Values
 */ 
#define ENUM_LEG_SECURITY_TYPE_CASH 1
#define ENUM_LEG_SECURITY_TYPE_CORP 2
#define ENUM_LEG_SECURITY_TYPE_CS 3
#define ENUM_LEG_SECURITY_TYPE_DTERM 4
#define ENUM_LEG_SECURITY_TYPE_ETF 5
#define ENUM_LEG_SECURITY_TYPE_FOPT 6
#define ENUM_LEG_SECURITY_TYPE_FORWARD 7
#define ENUM_LEG_SECURITY_TYPE_FUT 8
#define ENUM_LEG_SECURITY_TYPE_INDEX 9
#define ENUM_LEG_SECURITY_TYPE_INDEXOPT 10
#define ENUM_LEG_SECURITY_TYPE_MLEG 11
#define ENUM_LEG_SECURITY_TYPE_OPT 12
#define ENUM_LEG_SECURITY_TYPE_OPTEXER 13
#define ENUM_LEG_SECURITY_TYPE_PS 14
#define ENUM_LEG_SECURITY_TYPE_SECLOAN 15
#define ENUM_LEG_SECURITY_TYPE_SOPT 16
#define ENUM_LEG_SECURITY_TYPE_SPOT 17

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY 1
#define ENUM_LEG_SIDE_SELL 2

/*
 * Lot Type Values
 */ 
#define ENUM_LOT_TYPE_ODDLOT 1
#define ENUM_LOT_TYPE_ROUNDLOT 2
#define ENUM_LOT_TYPE_BLOCKLOT 3
#define ENUM_LOT_TYPE_NO_VALUE 255

/*
 * Md Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_BID '0'
#define ENUM_MD_ENTRY_TYPE_OFFER '1'
#define ENUM_MD_ENTRY_TYPE_TRADE '2'
#define ENUM_MD_ENTRY_TYPE_INDEXVALUE '3'
#define ENUM_MD_ENTRY_TYPE_OPENINGPRICE '4'
#define ENUM_MD_ENTRY_TYPE_CLOSINGPRICE '5'
#define ENUM_MD_ENTRY_TYPE_SETTLEMENTPRICE '6'
#define ENUM_MD_ENTRY_TYPE_SESSIONHIGHPRICE '7'
#define ENUM_MD_ENTRY_TYPE_SESSIONLOWPRICE '8'
#define ENUM_MD_ENTRY_TYPE_EXECUTIONSTATISTICS '9'
#define ENUM_MD_ENTRY_TYPE_IMBALANCE 'A'
#define ENUM_MD_ENTRY_TYPE_TRADEVOLUME 'B'
#define ENUM_MD_ENTRY_TYPE_OPENINTEREST 'C'
#define ENUM_MD_ENTRY_TYPE_EMPTYBOOK 'J'
#define ENUM_MD_ENTRY_TYPE_SECURITYTRADINGSTATEPHASE 'c'
#define ENUM_MD_ENTRY_TYPE_PRICEBAND 'g'
#define ENUM_MD_ENTRY_TYPE_QUANTITYBAND 'h'
#define ENUM_MD_ENTRY_TYPE_COMPOSITEUNDERLYINGPRICE 'D'
#define ENUM_MD_ENTRY_TYPE_EXECUTIONSUMMARY 's'
#define ENUM_MD_ENTRY_TYPE_VOLATILITYPRICE 'v'
#define ENUM_MD_ENTRY_TYPE_TRADEBUST 'u'

/*
 * Md Update Action Values
 */ 
#define ENUM_MD_UPDATE_ACTION_NEW 0
#define ENUM_MD_UPDATE_ACTION_CHANGE 1
#define ENUM_MD_UPDATE_ACTION_DELETE 2
#define ENUM_MD_UPDATE_ACTION_DELETETHRU 3
#define ENUM_MD_UPDATE_ACTION_DELETEFROM 4
#define ENUM_MD_UPDATE_ACTION_OVERLAY 5

/*
 * Multi Leg Model Values
 */ 
#define ENUM_MULTI_LEG_MODEL_PREDEFINED 0
#define ENUM_MULTI_LEG_MODEL_USERDEFINED 1
#define ENUM_MULTI_LEG_MODEL_NO_VALUE 255

/*
 * Multi Leg Price Method Values
 */ 
#define ENUM_MULTI_LEG_PRICE_METHOD_NETPRICE 0
#define ENUM_MULTI_LEG_PRICE_METHOD_REVERSEDNETPRICE 1
#define ENUM_MULTI_LEG_PRICE_METHOD_YIELDDIFFERENCE 2
#define ENUM_MULTI_LEG_PRICE_METHOD_INDIVIDUAL 3
#define ENUM_MULTI_LEG_PRICE_METHOD_CONTRACTWEIGHTEDAVERAGEPRICE 4
#define ENUM_MULTI_LEG_PRICE_METHOD_MULTIPLIEDPRICE 5
#define ENUM_MULTI_LEG_PRICE_METHOD_NO_VALUE 255

/*
 * News Source Values
 */ 
#define ENUM_NEWS_SOURCE_OTHER 0
#define ENUM_NEWS_SOURCE_DCM 1
#define ENUM_NEWS_SOURCE_BBMNET 2
#define ENUM_NEWS_SOURCE_MARKETSURVEILLANCE 3
#define ENUM_NEWS_SOURCE_INTERNET 4
#define ENUM_NEWS_SOURCE_DPRVE 5
#define ENUM_NEWS_SOURCE_MKTOPSFXAGENCY 19
#define ENUM_NEWS_SOURCE_MKTOPSDERIVATIVESAGENCY 20
#define ENUM_NEWS_SOURCE_OVERTHECOUNTERNEWSAGENCY 11
#define ENUM_NEWS_SOURCE_ELECTRONICPURCHASEEXCHANGE 13
#define ENUM_NEWS_SOURCE_CBLCNEWSAGENCY 14
#define ENUM_NEWS_SOURCE_BOVESPAINDEXAGENCY 15
#define ENUM_NEWS_SOURCE_BOVESPAINSTITUTIONALAGENCY 16
#define ENUM_NEWS_SOURCE_MKTOPSEQUITIESAGENCY 17
#define ENUM_NEWS_SOURCE_BOVESPACOMPANIESAGENCY 18

/*
 * Open Close Settl Flag Values
 */ 
#define ENUM_OPEN_CLOSE_SETTL_FLAG_DAILY 0
#define ENUM_OPEN_CLOSE_SETTL_FLAG_SESSION 1
#define ENUM_OPEN_CLOSE_SETTL_FLAG_EXPECTEDENTRY 3
#define ENUM_OPEN_CLOSE_SETTL_FLAG_ENTRYFROMPREVIOUSBUSINESSDAY 4
#define ENUM_OPEN_CLOSE_SETTL_FLAG_THEORETICALPRICE 5

/*
 * Price Band Midpoint Price Type Values
 */ 
#define ENUM_PRICE_BAND_MIDPOINT_PRICE_TYPE_LASTTRADEDPRICE 0
#define ENUM_PRICE_BAND_MIDPOINT_PRICE_TYPE_COMPLEMENTARYLASTPRICE 1
#define ENUM_PRICE_BAND_MIDPOINT_PRICE_TYPE_THEORETICALPRICE 2
#define ENUM_PRICE_BAND_MIDPOINT_PRICE_TYPE_NO_VALUE 255

/*
 * Price Band Type Values
 */ 
#define ENUM_PRICE_BAND_TYPE_HARDLIMIT 1
#define ENUM_PRICE_BAND_TYPE_AUCTIONLIMITS 2
#define ENUM_PRICE_BAND_TYPE_REJECTIONBAND 3
#define ENUM_PRICE_BAND_TYPE_STATICLIMITS 4
#define ENUM_PRICE_BAND_TYPE_NO_VALUE 255

/*
 * Price Limit Type Values
 */ 
#define ENUM_PRICE_LIMIT_TYPE_PRICEUNIT 0
#define ENUM_PRICE_LIMIT_TYPE_TICKS 1
#define ENUM_PRICE_LIMIT_TYPE_PERCENTAGE 2
#define ENUM_PRICE_LIMIT_TYPE_NO_VALUE 255

/*
 * Price Type Values
 */ 
#define ENUM_PRICE_TYPE_PERCENTAGE 1
#define ENUM_PRICE_TYPE_PU 2
#define ENUM_PRICE_TYPE_FIXEDAMOUNT 3
#define ENUM_PRICE_TYPE_NO_VALUE 0

/*
 * Product Values
 */ 
#define ENUM_PRODUCT_COMMODITY 2
#define ENUM_PRODUCT_CORPORATE 3
#define ENUM_PRODUCT_CURRENCY 4
#define ENUM_PRODUCT_EQUITY 5
#define ENUM_PRODUCT_GOVERNMENT 6
#define ENUM_PRODUCT_INDEX 7
#define ENUM_PRODUCT_ECONOMICINDICATOR 15
#define ENUM_PRODUCT_MULTILEG 16

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT 0
#define ENUM_PUT_OR_CALL_CALL 1
#define ENUM_PUT_OR_CALL_NO_VALUE 255

/*
 * Security Id Source Values
 */ 
#define ENUM_SECURITY_ID_SOURCE_ISIN '4'
#define ENUM_SECURITY_ID_SOURCE_EXCHANGESYMBOL '8'

/*
 * Security Match Type Values
 */ 
#define ENUM_SECURITY_MATCH_TYPE_ISSUINGBUYBACKAUCTION 8
#define ENUM_SECURITY_MATCH_TYPE_NO_VALUE 255

/*
 * Security Trading Event Values
 */ 
#define ENUM_SECURITY_TRADING_EVENT_TRADINGSESSIONCHANGE 4
#define ENUM_SECURITY_TRADING_EVENT_SECURITYSTATUSCHANGE 101
#define ENUM_SECURITY_TRADING_EVENT_SECURITYREJOINSSECURITYGROUPSTATUS 102
#define ENUM_SECURITY_TRADING_EVENT_NO_VALUE 255

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_PAUSE 2
#define ENUM_SECURITY_TRADING_STATUS_CLOSE 4
#define ENUM_SECURITY_TRADING_STATUS_OPEN 17
#define ENUM_SECURITY_TRADING_STATUS_FORBIDDEN 18
#define ENUM_SECURITY_TRADING_STATUS_UNKNOWNORINVALID 20
#define ENUM_SECURITY_TRADING_STATUS_RESERVED 21
#define ENUM_SECURITY_TRADING_STATUS_FINALCLOSINGCALL 101

/*
 * Security Type Values
 */ 
#define ENUM_SECURITY_TYPE_CASH 1
#define ENUM_SECURITY_TYPE_CORP 2
#define ENUM_SECURITY_TYPE_CS 3
#define ENUM_SECURITY_TYPE_DTERM 4
#define ENUM_SECURITY_TYPE_ETF 5
#define ENUM_SECURITY_TYPE_FOPT 6
#define ENUM_SECURITY_TYPE_FORWARD 7
#define ENUM_SECURITY_TYPE_FUT 8
#define ENUM_SECURITY_TYPE_INDEX 9
#define ENUM_SECURITY_TYPE_INDEXOPT 10
#define ENUM_SECURITY_TYPE_MLEG 11
#define ENUM_SECURITY_TYPE_OPT 12
#define ENUM_SECURITY_TYPE_OPTEXER 13
#define ENUM_SECURITY_TYPE_PS 14
#define ENUM_SECURITY_TYPE_SECLOAN 15
#define ENUM_SECURITY_TYPE_SOPT 16
#define ENUM_SECURITY_TYPE_SPOT 17

/*
 * Security Update Action Values
 */ 
#define ENUM_SECURITY_UPDATE_ACTION_ADD 'A'
#define ENUM_SECURITY_UPDATE_ACTION_DELETE 'D'
#define ENUM_SECURITY_UPDATE_ACTION_MODIFY 'M'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_SEQUENCE_RESET_1_MESSAGE 1
#define ENUM_TEMPLATE_ID_SEQUENCE_2_MESSAGE 2
#define ENUM_TEMPLATE_ID_SECURITY_STATUS_3_MESSAGE 3
#define ENUM_TEMPLATE_ID_SECURITY_GROUP_PHASE_10_MESSAGE 10
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_4_MESSAGE 4
#define ENUM_TEMPLATE_ID_NEWS_5_MESSAGE 5
#define ENUM_TEMPLATE_ID_EMPTY_BOOK_9_MESSAGE 9
#define ENUM_TEMPLATE_ID_CHANNEL_RESET_11_MESSAGE 11
#define ENUM_TEMPLATE_ID_OPENING_PRICE_15_MESSAGE 15
#define ENUM_TEMPLATE_ID_THEORETICAL_OPENING_PRICE_16_MESSAGE 16
#define ENUM_TEMPLATE_ID_CLOSING_PRICE_17_MESSAGE 17
#define ENUM_TEMPLATE_ID_AUCTION_IMBALANCE_19_MESSAGE 19
#define ENUM_TEMPLATE_ID_PRICE_BAND_20_MESSAGE 20
#define ENUM_TEMPLATE_ID_QUANTITY_BAND_21_MESSAGE 21
#define ENUM_TEMPLATE_ID_HIGH_PRICE_24_MESSAGE 24
#define ENUM_TEMPLATE_ID_LOW_PRICE_25_MESSAGE 25
#define ENUM_TEMPLATE_ID_LAST_TRADE_PRICE_27_MESSAGE 27
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_HEADER_30_MESSAGE 30
#define ENUM_TEMPLATE_ID_ORDER_MB_O50_MESSAGE 50
#define ENUM_TEMPLATE_ID_DELETE_ORDER_MB_O51_MESSAGE 51
#define ENUM_TEMPLATE_ID_MASS_DELETE_ORDERS_MB_O52_MESSAGE 52
#define ENUM_TEMPLATE_ID_TRADE_53_MESSAGE 53
#define ENUM_TEMPLATE_ID_FORWARD_TRADE_54_MESSAGE 54
#define ENUM_TEMPLATE_ID_EXECUTION_SUMMARY_55_MESSAGE 55
#define ENUM_TEMPLATE_ID_EXECUTION_STATISTICS_56_MESSAGE 56
#define ENUM_TEMPLATE_ID_TRADE_BUST_57_MESSAGE 57
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_ORDERS_MB_O71_MESSAGE 71
#define ENUM_TEMPLATE_ID_HEADER_MESSAGE_0 0

/*
 * Trading Session Id Values
 */ 
#define ENUM_TRADING_SESSION_ID_REGULARTRADINGSESSION 1
#define ENUM_TRADING_SESSION_ID_NONREGULARTRADINGSESSION 6

/*
 * Trading Session Sub Id Values
 */ 
#define ENUM_TRADING_SESSION_SUB_ID_PAUSE 2
#define ENUM_TRADING_SESSION_SUB_ID_CLOSE 4
#define ENUM_TRADING_SESSION_SUB_ID_OPEN 17
#define ENUM_TRADING_SESSION_SUB_ID_FORBIDDEN 18
#define ENUM_TRADING_SESSION_SUB_ID_UNKNOWNORINVALID 20
#define ENUM_TRADING_SESSION_SUB_ID_RESERVED 21
#define ENUM_TRADING_SESSION_SUB_ID_FINALCLOSINGCALL 101

/*
 * Trd Sub Type Values
 */ 
#define ENUM_TRD_SUB_TYPE_MULTIASSETTRADE 101
#define ENUM_TRD_SUB_TYPE_LEGTRADE 102
#define ENUM_TRD_SUB_TYPE_MIDPOINTTRADE 103
#define ENUM_TRD_SUB_TYPE_BLOCKBOOKTRADE 104
#define ENUM_TRD_SUB_TYPE_RFQTRADE 105
#define ENUM_TRD_SUB_TYPE_RLPTRADE 106
#define ENUM_TRD_SUB_TYPE_TACTRADE 107
#define ENUM_TRD_SUB_TYPE_TAATRADE 108
#define ENUM_TRD_SUB_TYPE_NO_VALUE 0


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Framing Header
 */ 
typedef struct {
    uint16_t MessageLength;
    uint16_t EncodingType;
} FramingHeaderT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint8_t ChannelNumber;
    uint8_t Reserved;
    uint16_t SequenceVersion;
    uint32_t SequenceNumber;
    uint64_t SendingTime;
} PacketHeaderT;

/*
 * Structure: Header Message 0
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
    FramingHeaderT FramingHeader;
} HeaderMessage0T;

/*
 * Structure: No M D Entries Group
 */ 
typedef struct {
    int64_t MdEntryPx;
    int64_t MdEntrySize;
    uint32_t MdEntryPositionNo;
    uint32_t EnteringFirm;
    uint64_t MdInsertTimestamp;
    uint64_t SecondaryOrderId;
    char MdEntryType;
} NoMDEntriesGroupT;

/*
 * Structure: Group Size Encoding
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeEncodingT;

/*
 * Structure: No M D Entries Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} NoMDEntriesGroupsT;

/*
 * Structure: Snapshot Full Refresh Orders Mb O 71 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
} SnapshotFullRefreshOrdersMbO71MessageT;

/*
 * Bitfield: Match Event Indicator
 */ 
typedef struct {
    uint8_t
    EndOfEvent : 1,
    Unused : 1,
    RecoveryMsg : 1,
    LastImpliedMsg : 1,
    LastStatsMsg : 1,
    LastQuoteMsg : 1,
    LastVolumeMsg : 1,
    LastTradeMsg : 1;
} MatchEventIndicatorT;

/*
 * Structure: Trade Bust 57 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t TradingSessionId;
    int64_t MdEntryPx;
    int64_t MdEntrySize;
    uint32_t TradeId;
    uint16_t TradeDate;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} TradeBust57MessageT;

/*
 * Structure: Execution Statistics 56 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t TradingSessionId;
    uint16_t TradeDate;
    int64_t TradeVolume;
    int64_t VwapPx;
    int64_t NetChgPrevDay;
    uint32_t NumberOfTrades;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} ExecutionStatistics56MessageT;

/*
 * Structure: Execution Summary 55 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint8_t AggressorSide;
    int64_t LastPx;
    int64_t FillQty;
    int64_t TradedHiddenQty;
    int64_t CxlQty;
    uint64_t AggressorTime;
    uint32_t RptSeq;
    uint64_t MdEntryTimestamp;
} ExecutionSummary55MessageT;

/*
 * Bitfield: Trade Condition
 */ 
typedef struct {
    uint16_t
    Reserved1 : 1,
    BlockTrade : 1,
    RegularTrade : 1,
    TradeOnBehalf : 7,
    OutOfSequence : 3,
    LastTradeAtTheSamePrice : 1,
    Crossed : 1,
    OpeningPrice : 1;
} TradeConditionT;

/*
 * Structure: Forward Trade 54 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t TradingSessionId;
    TradeConditionT TradeCondition;
    int64_t MdEntryPx;
    int64_t MdEntrySize;
    uint32_t TradeId;
    uint32_t MdEntryBuyer;
    uint32_t MdEntrySeller;
    uint16_t TradeDate;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
    uint16_t SellerDays;
    int64_t MdEntryInterestRate;
    uint8_t TrdSubType;
} ForwardTrade54MessageT;

/*
 * Structure: Trade 53 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t TradingSessionId;
    TradeConditionT TradeCondition;
    int64_t MdEntryPx;
    int64_t MdEntrySize;
    uint32_t TradeId;
    uint32_t MdEntryBuyer;
    uint32_t MdEntrySeller;
    uint16_t TradeDate;
    uint8_t TrdSubType;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} Trade53MessageT;

/*
 * Structure: Mass Delete Orders Mb O 52 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t MdUpdateAction;
    char MdEntryType;
    uint32_t MdEntryPositionNo;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} MassDeleteOrdersMbO52MessageT;

/*
 * Structure: Delete Order Mb O 51 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    char MdEntryType;
    uint32_t MdEntryPositionNo;
    int64_t MdEntrySize;
    uint64_t SecondaryOrderId;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} DeleteOrderMbO51MessageT;

/*
 * Structure: Order Mb O 50 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t MdUpdateAction;
    char MdEntryType;
    int64_t MdEntryPx;
    int64_t MdEntrySize;
    uint32_t MdEntryPositionNo;
    uint32_t EnteringFirm;
    uint64_t MdInsertTimestamp;
    uint64_t SecondaryOrderId;
    uint32_t RptSeq;
    uint64_t MdEntryTimestamp;
} OrderMbO50MessageT;

/*
 * Structure: Snapshot Full Refresh Header 30 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    uint32_t LastMsgSeqNumProcessed;
    uint32_t TotNumReports;
    uint32_t TotNumBids;
    uint32_t TotNumOffers;
    uint16_t TotNumStats;
    uint32_t LastRptSeq;
} SnapshotFullRefreshHeader30MessageT;

/*
 * Structure: Last Trade Price 27 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t TradingSessionId;
    TradeConditionT TradeCondition;
    int64_t MdEntryPx;
    int64_t MdEntrySize;
    uint32_t TradeId;
    uint32_t MdEntryBuyer;
    uint32_t MdEntrySeller;
    uint16_t TradeDate;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
    uint16_t SellerDays;
    int64_t MdEntryInterestRate;
    uint8_t TrdSubType;
} LastTradePrice27MessageT;

/*
 * Structure: Low Price 25 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t MdUpdateAction;
    uint16_t TradeDate;
    int64_t MdEntryPx;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} LowPrice25MessageT;

/*
 * Structure: High Price 24 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t MdUpdateAction;
    uint16_t TradeDate;
    int64_t MdEntryPx;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} HighPrice24MessageT;

/*
 * Structure: Quantity Band 21 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    int64_t AvgDailyTradedQty;
    int64_t MaxTradeVol;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} QuantityBand21MessageT;

/*
 * Structure: Price Band 20 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t PriceBandType;
    uint8_t PriceLimitType;
    uint8_t PriceBandMidpointPriceType;
    int64_t LowLimitPrice;
    int64_t HighLimitPrice;
    int64_t TradingReferencePrice;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} PriceBand20MessageT;

/*
 * Bitfield: Imbalance Condition
 */ 
typedef struct {
    uint16_t
    Reserved6 : 6,
    ImbalanceMoreSellers : 1,
    ImbalanceMoreBuyers : 1,
    Reserved8 : 8;
} ImbalanceConditionT;

/*
 * Structure: Auction Imbalance 19 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t MdUpdateAction;
    ImbalanceConditionT ImbalanceCondition;
    int64_t MdEntrySize;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} AuctionImbalance19MessageT;

/*
 * Structure: Closing Price 17 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t OpenCloseSettlFlag;
    int64_t MdEntryPx;
    uint16_t LastTradeDate;
    uint16_t TradeDate;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} ClosingPrice17MessageT;

/*
 * Structure: Theoretical Opening Price 16 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t MdUpdateAction;
    uint16_t TradeDate;
    int64_t MdEntryPx;
    int64_t MdEntrySize;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} TheoreticalOpeningPrice16MessageT;

/*
 * Structure: Opening Price 15 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t MdUpdateAction;
    uint8_t OpenCloseSettlFlag;
    int64_t MdEntryPx;
    int64_t NetChgPrevDay;
    uint16_t TradeDate;
    uint64_t MdEntryTimestamp;
    uint32_t RptSeq;
} OpeningPrice15MessageT;

/*
 * Structure: Channel Reset 11 Message
 */ 
typedef struct {
    MatchEventIndicatorT MatchEventIndicator;
    uint64_t MdEntryTimestamp;
} ChannelReset11MessageT;

/*
 * Structure: Empty Book 9 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint64_t MdEntryTimestamp;
} EmptyBook9MessageT;

/*
 * Structure: Url Link
 */ 
typedef struct {
    char Length[0];
    char VarData[0];
} UrlLinkT;

/*
 * Structure: Text
 */ 
typedef struct {
    char Length[0];
    char VarData[0];
} TextT;

/*
 * Structure: Headline
 */ 
typedef struct {
    char Length[0];
    char VarData[0];
} HeadlineT;

/*
 * Structure: News 5 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t NewsSource;
    char LanguageCode[2];
    uint16_t PartCount;
    uint16_t PartNumber;
    uint64_t NewsId;
    uint64_t OrigTime;
    uint32_t TotalTextLength;
    HeadlineT Headline;
    TextT Text;
    UrlLinkT UrlLink;
} News5MessageT;

/*
 * Structure: Security Desc
 */ 
typedef struct {
    char Length[0];
    char VarData[0];
} SecurityDescT;

/*
 * Structure: No Instr Attribs Group
 */ 
typedef struct {
    uint8_t InstrAttribType;
    uint8_t InstrAttribValue;
} NoInstrAttribsGroupT;

/*
 * Structure: No Instr Attribs Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} NoInstrAttribsGroupsT;

/*
 * Structure: No Legs Group
 */ 
typedef struct {
    uint64_t LegSecurityId;
    char LegSecurityExchange[4];
    int64_t LegRatioQty;
    uint8_t LegSecurityType;
    uint8_t LegSide;
    char LegSymbol[20];
} NoLegsGroupT;

/*
 * Structure: No Legs Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} NoLegsGroupsT;

/*
 * Structure: No Underlyings Group
 */ 
typedef struct {
    uint64_t UnderlyingSecurityId;
    char UnderlyingSecurityExchange[4];
    int64_t IndexPct;
    int64_t IndexTheoreticalQty;
    char UnderlyingSymbol[20];
} NoUnderlyingsGroupT;

/*
 * Structure: No Underlyings Groups
 */ 
typedef struct {
    GroupSizeEncodingT GroupSizeEncoding;
} NoUnderlyingsGroupsT;

/*
 * Structure: Contract Settl Month
 */ 
typedef struct {
    uint16_t Year;
    uint8_t Month;
    uint8_t Day;
    uint8_t Week;
} ContractSettlMonthT;

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
 * Structure: Security Group Phase 10 Message
 */ 
typedef struct {
    char SecurityGroup[3];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t TradingSessionId;
    uint8_t TradingSessionSubId;
    uint8_t SecurityTradingEvent;
    uint16_t TradeDate;
    uint64_t TradSesOpenTime;
    uint64_t TransactTime;
} SecurityGroupPhase10MessageT;

/*
 * Structure: Security Status 3 Message
 */ 
typedef struct {
    uint64_t SecurityId;
    char SecurityExchange[4];
    MatchEventIndicatorT MatchEventIndicator;
    uint8_t TradingSessionId;
    uint8_t SecurityTradingStatus;
    uint8_t SecurityTradingEvent;
    uint16_t TradeDate;
    uint64_t TradSesOpenTime;
    uint64_t TransactTime;
    uint32_t RptSeq;
} SecurityStatus3MessageT;

/*
 * Structure: Sequence 2 Message
 */ 
typedef struct {
    uint32_t NextSeqNo;
} Sequence2MessageT;

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
    uint16_t MessageLength;
    uint16_t EncodingType;
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: B3
   Version: 1.6
   Date: Tuesday, June 13, 2023
   Specification: BinaryUMDF-MessageReference-v.1.6.0-enUS.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
