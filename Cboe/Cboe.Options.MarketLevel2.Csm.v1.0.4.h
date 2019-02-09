/*******************************************************************************
 * C Structs For Cboe Options Csm MarketLevel2 1.0.4 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Exercise Style Values
 */ 
#define ENUM_EXERCISE_STYLE_AMERICAN_0 = "0"
#define ENUM_EXERCISE_STYLE_EUROPEAN_1 = "1"

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY_BID_B = 'B'
#define ENUM_LEG_SIDE_SELL_ASK_S = 'S'

/*
 * Md Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_BUY_BID_0 = '0'
#define ENUM_MD_ENTRY_TYPE_SELL_ASK_1 = '1'

/*
 * Md Update Action Values
 */ 
#define ENUM_MD_UPDATE_ACTION_INSERT_0 = "0"
#define ENUM_MD_UPDATE_ACTION_CHANGE_1 = "1"
#define ENUM_MD_UPDATE_ACTION_DELETE_2 = "2"
#define ENUM_MD_UPDATE_ACTION_OVERLAY_5 = "5"

/*
 * Md Volume Type Values
 */ 
#define ENUM_MD_VOLUME_TYPE_TOTAL_LIMIT_0 = "0"
#define ENUM_MD_VOLUME_TYPE_CUSTOMER_LIMIT_1 = "1"
#define ENUM_MD_VOLUME_TYPE_TOTAL_CONTINGENCY_ALL_OR_NONE_2 = "2"
#define ENUM_MD_VOLUME_TYPE_CUSTOMER_CONTINGENCY_ALL_OR_NONE_3 = "3"

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT_0 = "0"
#define ENUM_PUT_OR_CALL_CALL_1 = "1"

/*
 * Refresh Indicator Values
 */ 
#define ENUM_REFRESH_INDICATOR_MANDATORY_REFRESH_Y = 'Y'
#define ENUM_REFRESH_INDICATOR_PROCESS_IF_NECESSARY_N = 'N'

/*
 * Security Exchange Values
 */ 
#define ENUM_SECURITY_EXCHANGE_CBOE_C = 'C'
#define ENUM_SECURITY_EXCHANGE_ONE_CHICAGO_NOT_SUPPORTED_O = 'O'
#define ENUM_SECURITY_EXCHANGE_CBSX_NOT_SUPPORTED_W = 'W'
#define ENUM_SECURITY_EXCHANGE_CFECOF_NOT_SUPPORTED_F = 'F'
#define ENUM_SECURITY_EXCHANGE_CBOE_2_OPTIONS_NOT_SUPPORTED_2 = '2'

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_HALTED_2 = "2"
#define ENUM_SECURITY_TRADING_STATUS_OPEN_17 = "17"
#define ENUM_SECURITY_TRADING_STATUS_CLOSED_18 = "18"
#define ENUM_SECURITY_TRADING_STATUS_PRE_OPEN_21 = "21"
#define ENUM_SECURITY_TRADING_STATUS_OPENING_ROTATION_22 = "22"
#define ENUM_SECURITY_TRADING_STATUS_FAST_MARKET_23 = "23"
#define ENUM_SECURITY_TRADING_STATUS_STRATEGY_MARKET_IN_OPENING_ROTATION_24 = "24"
#define ENUM_SECURITY_TRADING_STATUS_STRATEGY_MARKET_QUOTES_NON_FIRM_25 = "25"
#define ENUM_SECURITY_TRADING_STATUS_SUSPENDED_26 = "26"

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_MESSAGE_13 = "13"
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_MESSAGE_17 = "17"
#define ENUM_TEMPLATE_ID_INCREMENTAL_REFRESH_MESSAGE_18 = "18"
#define ENUM_TEMPLATE_ID_SECURITY_STATUS_MESSAGE_19 = "19"
#define ENUM_TEMPLATE_ID_HEARTBEAT_MESSAGE_16 = "16"


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
 * Structure: Incremental Refresh Md Entry
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    char MdEntryType;
    uint8_t MdPriceLevel;
    char MdEntryPx[0];
    uint8_t NoLegs;
} IncrementalRefreshMdEntryT;

/*
 * Structure: Incremental Refresh Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    uint32_t RptSeq;
    uint8_t SecurityTradingStatus;
    uint8_t PriceType;
    uint8_t NoEntries;
} IncrementalRefreshMessageT;

/*
 * Structure: Max Strike Price
 */ 
typedef struct {
    int8_t MaxStrikePriceExponent;
    int32_t MaxStrikePriceMantissa;
} MaxStrikePriceT;

/*
 * Structure: Md Entry Px
 */ 
typedef struct {
    int8_t MdEntryPxExponent;
    int32_t MdEntryPxMantissa;
} MdEntryPxT;

/*
 * Structure: Md Volume Entry
 */ 
typedef struct {
    uint8_t MdVolumeType;
    uint32_t MdEntrySize;
} MdVolumeEntryT;

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
 * Structure: Security Definition Leg
 */ 
typedef struct {
    uint32_t LegRatioQty;
    uint32_t LegSecurityId;
    char LegSide;
} SecurityDefinitionLegT;

/*
 * Structure: Security Status Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    uint32_t RptSeq;
    uint8_t SecurityTradingStatus;
} SecurityStatusMessageT;

/*
 * Structure: Security Type
 */ 
typedef struct {
    uint8_t SecurityTypeLength;
} SecurityTypeT;

/*
 * Structure: Snapshot Full Refresh Md Entry
 */ 
typedef struct {
    char MdEntryType;
    uint8_t MdPriceLevel;
    MdEntryPxT MdEntryPx;
    uint8_t NoLegs;
} SnapshotFullRefreshMdEntryT;

/*
 * Structure: Snapshot Full Refresh Message
 */ 
typedef struct {
    uint32_t ClassKey;
    uint32_t SecurityId;
    uint32_t RptSeq;
    uint8_t SecurityTradingStatus;
    uint8_t PriceType;
    char RefreshIndicator;
    uint8_t NoEntries;
} SnapshotFullRefreshMessageT;

/*
 * Structure: Strike Price
 */ 
typedef struct {
    int8_t StrikePriceExponent;
    int32_t StrikePriceMantissa;
} StrikePriceT;

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

