/*******************************************************************************
 * C Structs For Cboe Options Csm MarketLevel2 1.0.4 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Exercise Style Values
 */ 
#define ENUM_EXERCISE_STYLE_AMERICAN 0
#define ENUM_EXERCISE_STYLE_EUROPEAN 1

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY_BID 'B'
#define ENUM_LEG_SIDE_SELL_ASK 'S'

/*
 * Md Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_BUY_BID '0'
#define ENUM_MD_ENTRY_TYPE_SELL_ASK '1'

/*
 * Md Update Action Values
 */ 
#define ENUM_MD_UPDATE_ACTION_INSERT 0
#define ENUM_MD_UPDATE_ACTION_CHANGE 1
#define ENUM_MD_UPDATE_ACTION_DELETE 2
#define ENUM_MD_UPDATE_ACTION_OVERLAY 5

/*
 * Md Volume Type Values
 */ 
#define ENUM_MD_VOLUME_TYPE_TOTAL_LIMIT 0
#define ENUM_MD_VOLUME_TYPE_CUSTOMER_LIMIT 1
#define ENUM_MD_VOLUME_TYPE_TOTAL_CONTINGENCY_ALL_OR_NONE 2
#define ENUM_MD_VOLUME_TYPE_CUSTOMER_CONTINGENCY_ALL_OR_NONE 3

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT 0
#define ENUM_PUT_OR_CALL_CALL 1

/*
 * Refresh Indicator Values
 */ 
#define ENUM_REFRESH_INDICATOR_MANDATORY_REFRESH 'Y'
#define ENUM_REFRESH_INDICATOR_PROCESS_IF_NECESSARY 'N'

/*
 * Security Exchange Values
 */ 
#define ENUM_SECURITY_EXCHANGE_CBOE 'C'
#define ENUM_SECURITY_EXCHANGE_ONE_CHICAGO_NOT_SUPPORTED 'O'
#define ENUM_SECURITY_EXCHANGE_CBSX_NOT_SUPPORTED 'W'
#define ENUM_SECURITY_EXCHANGE_CFECOF_NOT_SUPPORTED 'F'
#define ENUM_SECURITY_EXCHANGE_CBOE_2_OPTIONS_NOT_SUPPORTED '2'

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_HALTED 2
#define ENUM_SECURITY_TRADING_STATUS_OPEN 17
#define ENUM_SECURITY_TRADING_STATUS_CLOSED 18
#define ENUM_SECURITY_TRADING_STATUS_PRE_OPEN 21
#define ENUM_SECURITY_TRADING_STATUS_OPENING_ROTATION 22
#define ENUM_SECURITY_TRADING_STATUS_FAST_MARKET 23
#define ENUM_SECURITY_TRADING_STATUS_STRATEGY_MARKET_IN_OPENING_ROTATION 24
#define ENUM_SECURITY_TRADING_STATUS_STRATEGY_MARKET_QUOTES_NON_FIRM 25
#define ENUM_SECURITY_TRADING_STATUS_SUSPENDED 26

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_MESSAGE 13
#define ENUM_TEMPLATE_ID_SNAPSHOT_FULL_REFRESH_MESSAGE 17
#define ENUM_TEMPLATE_ID_INCREMENTAL_REFRESH_MESSAGE 18
#define ENUM_TEMPLATE_ID_SECURITY_STATUS_MESSAGE 19
#define ENUM_TEMPLATE_ID_HEARTBEAT_MESSAGE 16


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

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
 * Structure: Md Volume Entry
 */ 
typedef struct {
    uint8_t MdVolumeType;
    uint32_t MdEntrySize;
} MdVolumeEntryT;

/*
 * Structure: Md Entry Px
 */ 
typedef struct {
    int8_t MdEntryPxExponent;
    int32_t MdEntryPxMantissa;
} MdEntryPxT;

/*
 * Structure: Incremental Refresh Md Entry
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    char MdEntryType;
    uint8_t MdPriceLevel;
    MdEntryPxT MdEntryPx;
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
 * Structure: Security Definition Leg
 */ 
typedef struct {
    uint32_t LegRatioQty;
    uint32_t LegSecurityId;
    char LegSide;
} SecurityDefinitionLegT;

/*
 * Structure: Underlying Type
 */ 
typedef struct {
    uint8_t UnderlyingTypeLength;
} UnderlyingTypeT;

/*
 * Structure: Underlying Symbol
 */ 
typedef struct {
    uint8_t UnderlyingSymbolLength;
} UnderlyingSymbolT;

/*
 * Structure: Currency Code
 */ 
typedef struct {
    uint8_t CurrencyCodeLength;
} CurrencyCodeT;

/*
 * Structure: Minimum Below Premium Fraction
 */ 
typedef struct {
    int8_t MinimumBelowPremiumFractionExponent;
    int32_t MinimumBelowPremiumFractionMantissa;
} MinimumBelowPremiumFractionT;

/*
 * Structure: Minimum Above Premium Fraction
 */ 
typedef struct {
    int8_t MinimumAbovePremiumFractionExponent;
    int32_t MinimumAbovePremiumFractionMantissa;
} MinimumAbovePremiumFractionT;

/*
 * Structure: Premium Break Point
 */ 
typedef struct {
    int8_t PremiumBreakPointExponent;
    int32_t PremiumBreakPointMantissa;
} PremiumBreakPointT;

/*
 * Structure: Max Strike Price
 */ 
typedef struct {
    int8_t MaxStrikePriceExponent;
    int32_t MaxStrikePriceMantissa;
} MaxStrikePriceT;

/*
 * Structure: Minimum Strike Price Fraction
 */ 
typedef struct {
    int8_t MinimumStrikePriceFractionExponent;
    int32_t MinimumStrikePriceFractionMantissa;
} MinimumStrikePriceFractionT;

/*
 * Structure: Strike Price
 */ 
typedef struct {
    int8_t StrikePriceExponent;
    int32_t StrikePriceMantissa;
} StrikePriceT;

/*
 * Structure: Target Location Id
 */ 
typedef struct {
    uint8_t TargetLocationIdLength;
} TargetLocationIdT;

/*
 * Structure: Symbol
 */ 
typedef struct {
    uint8_t SymbolLength;
} SymbolT;

/*
 * Structure: Security Type
 */ 
typedef struct {
    uint8_t SecurityTypeLength;
} SecurityTypeT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageLength;
    uint8_t TemplateId;
    char MessageType[1];
    uint32_t MsgSeqNum;
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
    uint8_t Version;
    uint16_t PacketLength;
    uint64_t SendingTime;
    uint8_t MessageCount;
    uint32_t FirstMsgSeqNum;
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
   Organization: Chicago Board Options Exchange
   Version: 1.0.4
   Date: Tuesday, May 8, 2018
   Specification: cboestreamingbookdepthv1.0.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
