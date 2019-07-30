/*******************************************************************************
 * C Structs For Cboe Options Csm MarketDataFeed 1.4.2 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Eop Type Values
 */ 
#define ENUM_EOP_TYPE_UNDEFINED_0 = 0
#define ENUM_EOP_TYPE_OPENING_PRICE_1 = 1
#define ENUM_EOP_TYPE_NEED_MORE_SELLERS_2 = 2
#define ENUM_EOP_TYPE_NEED_MORE_BUYERS_3 = 3
#define ENUM_EOP_TYPE_NO_OPENING_TRADES_4 = 4
#define ENUM_EOP_TYPE_MULTIPLE_OPENING_PRICES_5 = 5
#define ENUM_EOP_TYPE_NEED_QUOTE_TO_OPEN_6 = 6
#define ENUM_EOP_TYPE_PRICE_NOT_IN_QUOTE_RANGE_7 = 7
#define ENUM_EOP_TYPE_NEED_DPM_QUOTE_TO_OPEN_8 = 8
#define ENUM_EOP_TYPE_DPM_QUOTE_INVALID_9 = 9
#define ENUM_EOP_TYPE_PRICE_NOT_IN_BOTR_RANGE_10 = 10

/*
 * Exercise Style Values
 */ 
#define ENUM_EXERCISE_STYLE_AMERICAN_0 = 0
#define ENUM_EXERCISE_STYLE_EUROPEAN_1 = 1

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY_BID_B = 'B'
#define ENUM_LEG_SIDE_SELL_ASK_S = 'S'

/*
 * Legal Market Values
 */ 
#define ENUM_LEGAL_MARKET_NOT_A_LEGAL_MARKET_0 = 0
#define ENUM_LEGAL_MARKET_LEGAL_MARKET_1 = 1

/*
 * Md Control Type Values
 */ 
#define ENUM_MD_CONTROL_TYPE_START_OF_SUMMARY_0 = 0
#define ENUM_MD_CONTROL_TYPE_END_OF_SUMMARY_1 = 1
#define ENUM_MD_CONTROL_TYPE_START_OF_SETTLEMENT_2 = 2
#define ENUM_MD_CONTROL_TYPE_END_OF_SETTLEMENT_3 = 3

/*
 * Md Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_BID_0 = '0'
#define ENUM_MD_ENTRY_TYPE_ASK_1 = '1'
#define ENUM_MD_ENTRY_TYPE_TRADE_2 = '2'
#define ENUM_MD_ENTRY_TYPE_INDEX_VALUE_3 = '3'
#define ENUM_MD_ENTRY_TYPE_OPENING_PRICE_4 = '4'
#define ENUM_MD_ENTRY_TYPE_SETTLEMENT_VALUE_6 = '6'
#define ENUM_MD_ENTRY_TYPE_HIGH_7 = '7'
#define ENUM_MD_ENTRY_TYPE_LOW_8 = '8'

/*
 * Md Volume Type Values
 */ 
#define ENUM_MD_VOLUME_TYPE_TOTAL_LIMIT_0 = 0
#define ENUM_MD_VOLUME_TYPE_CUSTOMER_LIMIT_1 = 1
#define ENUM_MD_VOLUME_TYPE_TOTAL_CONTINGENCY_ALL_OR_NONE_2 = 2
#define ENUM_MD_VOLUME_TYPE_CUSTOMER_CONTINGENCY_ALL_OR_NONE_3 = 3

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT_0 = 0
#define ENUM_PUT_OR_CALL_CALL_1 = 1

/*
 * Security Exchange Values
 */ 
#define ENUM_SECURITY_EXCHANGE_CBOE_C = 'C'
#define ENUM_SECURITY_EXCHANGE_ONE_CHICAGO_NOT_SUPPORTED_O = 'O'
#define ENUM_SECURITY_EXCHANGE_CBSX_NOT_SUPPORTED_W = 'W'
#define ENUM_SECURITY_EXCHANGE_CFECOF_F = 'F'
#define ENUM_SECURITY_EXCHANGE_CBOE_2_OPTIONS_2 = '2'

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_HALTED_2 = 2
#define ENUM_SECURITY_TRADING_STATUS_OPEN_17 = 17
#define ENUM_SECURITY_TRADING_STATUS_CLOSED_18 = 18
#define ENUM_SECURITY_TRADING_STATUS_PRE_OPEN_21 = 21
#define ENUM_SECURITY_TRADING_STATUS_OPENING_ROTATION_22 = 22
#define ENUM_SECURITY_TRADING_STATUS_FAST_MARKET_23 = 23
#define ENUM_SECURITY_TRADING_STATUS_STRATEGY_MARKET_IN_OPENING_ROTATION_24 = 24
#define ENUM_SECURITY_TRADING_STATUS_STRATEGY_MARKET_QUOTES_NON_FIRM_25 = 25
#define ENUM_SECURITY_TRADING_STATUS_SUSPENDED_26 = 26

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_MESSAGE_13 = 13
#define ENUM_TEMPLATE_ID_CURRENT_MARKET_REFRESH_MESSAGE_11 = 11
#define ENUM_TEMPLATE_ID_MARKET_DATA_REFRESH_MESSAGE_20 = 20
#define ENUM_TEMPLATE_ID_CURRENT_MARKET_UPDATE_MESSAGE_12 = 12
#define ENUM_TEMPLATE_ID_RECAP_UPDATE_MESSAGE_21 = 21
#define ENUM_TEMPLATE_ID_TICKER_MESSAGE_14 = 14
#define ENUM_TEMPLATE_ID_EXPECTED_OPENING_PRICE_AND_SIZE_MESSAGE_15 = 15
#define ENUM_TEMPLATE_ID_INDEX_VALUE_MESSAGE_22 = 22
#define ENUM_TEMPLATE_ID_SETTLEMENT_VALUE_MESSAGE_23 = 23
#define ENUM_TEMPLATE_ID_SUMMARY_MESSAGE_24 = 24
#define ENUM_TEMPLATE_ID_MARKET_DATA_CONTROL_MESSAGE_25 = 25
#define ENUM_TEMPLATE_ID_HEARTBEAT_MESSAGE_16 = 16


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Currency Code
 */ 
typedef struct {
    uint8_t CurrencyCodeLength;
} CurrencyCodeT;

/*
 * Structure: Current Market Refresh Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    uint8_t SecurityTradingStatus;
    uint8_t PriceType;
    uint32_t ApplSeqNum;
    uint8_t NoEntries;
} CurrentMarketRefreshMessageT;

/*
 * Structure: Current Market Update Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    uint8_t SecurityTradingStatus;
    uint8_t PriceType;
    uint8_t NoEntries;
} CurrentMarketUpdateMessageT;

/*
 * Structure: Eop
 */ 
typedef struct {
    int8_t EopExponent;
    int32_t EopMantissa;
} EopT;

/*
 * Structure: Expected Opening Price And Size Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    EopT Eop;
    uint32_t Eos;
    uint8_t EopType;
    uint8_t LegalMarket;
} ExpectedOpeningPriceAndSizeMessageT;

/*
 * Structure: Index Value Md Entry
 */ 
typedef struct {
    char MdEntryType;
    char MdEntryPx[0];
} IndexValueMdEntryT;

/*
 * Structure: Market Data Control Message
 */ 
typedef struct {
    uint8_t MdControlType;
} MarketDataControlMessageT;

/*
 * Structure: Market Data Refresh Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    uint8_t SecurityTradingStatus;
    uint8_t PriceType;
    uint32_t ApplSeqNum;
    PrevClosePxT PrevClosePx;
    uint32_t TradeVolume;
    uint8_t NoEntries;
} MarketDataRefreshMessageT;

/*
 * Structure: Max Strike Price
 */ 
typedef struct {
    int8_t MaxStrikePriceExponent;
    int32_t MaxStrikePriceMantissa;
} MaxStrikePriceT;

/*
 * Structure: Md Entry
 */ 
typedef struct {
    char MdEntryType;
    MdEntryPxT MdEntryPx;
    uint32_t MdEntrySize;
    uint8_t MdVolumeType;
} MdEntryT;

/*
 * Structure: Md Entry Px
 */ 
typedef struct {
    int8_t MdEntryPxExponent;
    int32_t MdEntryPxMantissa;
} MdEntryPxT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageLength;
    uint8_t TemplateId;
    char MessageType[1];
    uint32_t MessageSequenceNumber;
} MessageHeaderT;

/*
 * Structure: Minimum Above Premium Fraction
 */ 
typedef struct {
    int8_t MinimumAbovePremiumFractionExponent;
    int32_t MinimumAbovePremiumFractionMantissa;
} MinimumAbovePremiumFractionT;

/*
 * Structure: Minimum Below Premium Fraction
 */ 
typedef struct {
    int8_t MinimumBelowPremiumFractionExponent;
    int32_t MinimumBelowPremiumFractionMantissa;
} MinimumBelowPremiumFractionT;

/*
 * Structure: Minimum Strike Price Fraction
 */ 
typedef struct {
    int8_t MinimumStrikePriceFractionExponent;
    int32_t MinimumStrikePriceFractionMantissa;
} MinimumStrikePriceFractionT;

/*
 * Structure: Net Chg Prev Day
 */ 
typedef struct {
    int8_t NetChgPrevDayExponent;
    int32_t NetChgPrevDayMantissa;
} NetChgPrevDayT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint8_t Version;
    uint16_t PacketLength;
    uint64_t SendingTime;
    uint8_t MessageCount;
    uint32_t FirstMsgSeqNum;
} PacketHeaderT;

/*
 * Structure: Premium Break Point
 */ 
typedef struct {
    int8_t PremiumBreakPointExponent;
    int32_t PremiumBreakPointMantissa;
} PremiumBreakPointT;

/*
 * Structure: Prev Close Px
 */ 
typedef struct {
    int8_t PrevClosePxExponent;
    int32_t PrevClosePxMantissa;
} PrevClosePxT;

/*
 * Structure: Recap Update Md Entry
 */ 
typedef struct {
    char MdEntryType;
    char MdEntryPx[0];
    uint32_t MdEntrySize;
} RecapUpdateMdEntryT;

/*
 * Structure: Recap Update Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    uint8_t PriceType;
    char PrevClosePx[0];
    uint32_t TradeVolume;
    uint8_t NoEntries;
} RecapUpdateMessageT;

/*
 * Structure: Security Definition Leg
 */ 
typedef struct {
    uint32_t LegRatioQty;
    uint32_t LegSecurityId;
    char LegSide;
} SecurityDefinitionLegT;

/*
 * Structure: Security Type
 */ 
typedef struct {
    uint8_t SecurityTypeLength;
} SecurityTypeT;

/*
 * Structure: Settlement Value Md Entry
 */ 
typedef struct {
    char MdEntryType;
    char MdEntryPx[0];
} SettlementValueMdEntryT;

/*
 * Structure: Settlement Value Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    uint8_t PriceType;
    uint8_t NoEntries;
} SettlementValueMessageT;

/*
 * Structure: Strike Price
 */ 
typedef struct {
    int8_t StrikePriceExponent;
    int32_t StrikePriceMantissa;
} StrikePriceT;

/*
 * Structure: Summary Md Entry
 */ 
typedef struct {
    char MdEntryType;
    char MdEntryPx[0];
} SummaryMdEntryT;

/*
 * Structure: Summary Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    uint8_t PriceType;
    uint32_t TradeVolume;
    uint32_t OpenInterest;
    NetChgPrevDayT NetChgPrevDay;
    UnderlyingPxT UnderlyingPx;
    uint8_t NoEntries;
} SummaryMessageT;

/*
 * Structure: Symbol
 */ 
typedef struct {
    uint8_t SymbolLength;
} SymbolT;

/*
 * Structure: Target Location Id
 */ 
typedef struct {
    uint8_t TargetLocationIdLength;
} TargetLocationIdT;

/*
 * Structure: Ticker Md Entry
 */ 
typedef struct {
    char MdEntryType;
    char MdEntryPx[0];
    uint32_t MdEntrySize;
} TickerMdEntryT;

/*
 * Structure: Ticker Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    uint8_t PriceType;
    uint8_t NoEntries;
} TickerMessageT;

/*
 * Structure: Trade Condition
 */ 
typedef struct {
    uint8_t TradeConditionLength;
} TradeConditionT;

/*
 * Structure: Underlying Px
 */ 
typedef struct {
    int8_t UnderlyingPxExponent;
    int32_t UnderlyingPxMantissa;
} UnderlyingPxT;

/*
 * Structure: Underlying Symbol
 */ 
typedef struct {
    uint8_t UnderlyingSymbolLength;
} UnderlyingSymbolT;

/*
 * Structure: Underlying Type
 */ 
typedef struct {
    uint8_t UnderlyingTypeLength;
} UnderlyingTypeT;

