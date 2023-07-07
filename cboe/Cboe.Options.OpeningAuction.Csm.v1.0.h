/*******************************************************************************
 * C Structs For Cboe Options Csm OpeningAuction 1.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Eop Type Values
 */ 
#define ENUM_EOP_TYPE_UNDEFINED 0
#define ENUM_EOP_TYPE_OPENING_PRICE 1
#define ENUM_EOP_TYPE_NEED_MORE_SELLERS 2
#define ENUM_EOP_TYPE_NEED_MORE_BUYERS 3
#define ENUM_EOP_TYPE_NO_OPENING_TRADES 4
#define ENUM_EOP_TYPE_MULTIPLE_OPENING_PRICES 5
#define ENUM_EOP_TYPE_NEED_QUOTE_TO_OPEN 6
#define ENUM_EOP_TYPE_PRICE_NOT_IN_QUOTE_RANGE 7
#define ENUM_EOP_TYPE_NEED_DPM_QUOTE_TO_OPEN 8
#define ENUM_EOP_TYPE_DPM_QUOTE_INVALID 9
#define ENUM_EOP_TYPE_PRICE_NOT_IN_BOTR_RANGE 10

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
 * Legal Market Values
 */ 
#define ENUM_LEGAL_MARKET_NOT_A_LEGAL_MARKET 0
#define ENUM_LEGAL_MARKET_LEGAL_MARKET 1

/*
 * Md Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_BID '0'
#define ENUM_MD_ENTRY_TYPE_ASK '1'
#define ENUM_MD_ENTRY_TYPE_TRADE '2'
#define ENUM_MD_ENTRY_TYPE_INDEX_VALUE '3'
#define ENUM_MD_ENTRY_TYPE_OPENING_PRICE '4'
#define ENUM_MD_ENTRY_TYPE_SETTLEMENT_VALUE '6'
#define ENUM_MD_ENTRY_TYPE_HIGH '7'
#define ENUM_MD_ENTRY_TYPE_LOW '8'

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
 * Security Exchange Values
 */ 
#define ENUM_SECURITY_EXCHANGE_CBOE 'C'
#define ENUM_SECURITY_EXCHANGE_ONE_CHICAGO_NOT_SUPPORTED 'O'
#define ENUM_SECURITY_EXCHANGE_CBSX_NOT_SUPPORTED 'W'
#define ENUM_SECURITY_EXCHANGE_CFECOF 'F'
#define ENUM_SECURITY_EXCHANGE_CBOE_2_OPTIONS '2'

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
#define ENUM_TEMPLATE_ID_MARKET_DATA_REFRESH_MESSAGE 20
#define ENUM_TEMPLATE_ID_CURRENT_MARKET_UPDATE_MESSAGE 12
#define ENUM_TEMPLATE_ID_EXPECTED_OPENING_PRICE_AND_SIZE_MESSAGE 15
#define ENUM_TEMPLATE_ID_HEARTBEAT_MESSAGE 16


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

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
 * Structure: Md Entry Px
 */ 
typedef struct {
    int8_t MdEntryPxExponent;
    int32_t MdEntryPxMantissa;
} MdEntryPxT;

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
 * Structure: Prev Close Px
 */ 
typedef struct {
    int8_t PrevClosePxExponent;
    int32_t PrevClosePxMantissa;
} PrevClosePxT;

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
   Version: 1.0
   Date: Wednesday, July 18, 2018
   Specification: CBOEStreamingOpeningAuction.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
