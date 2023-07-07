/*******************************************************************************
 * C Structs For Cme Futures Sbe Settlements 7.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * High Px Ind Values
 */ 
#define ENUM_HIGH_PX_IND_ASK 'A'
#define ENUM_HIGH_PX_IND_BID 'B'
#define ENUM_HIGH_PX_IND_TRADE 'T'

/*
 * Low Px Ind Values
 */ 
#define ENUM_LOW_PX_IND_ASK 'A'
#define ENUM_LOW_PX_IND_BID 'B'
#define ENUM_LOW_PX_IND_TRADE 'T'

/*
 * Md Update Action Values
 */ 
#define ENUM_MD_UPDATE_ACTION_NEW 0
#define ENUM_MD_UPDATE_ACTION_CHANGE 1
#define ENUM_MD_UPDATE_ACTION_DELETE 2

/*
 * Open Close Settl Flag Values
 */ 
#define ENUM_OPEN_CLOSE_SETTL_FLAG_ESTIMATED 3
#define ENUM_OPEN_CLOSE_SETTL_FLAG_ACTUAL_ADJUSTED 4

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_NO_VALUE 255
#define ENUM_PUT_OR_CALL_PUT 0
#define ENUM_PUT_OR_CALL_CALL 1

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_SETTLE 401
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_VOI 402
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_HIGH_LOW 403
#define ENUM_TEMPLATE_ID_ADMIN_HEARTBEAT 407


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: High Px
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} HighPxT;

/*
 * Structure: Low Px
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} LowPxT;

/*
 * Structure: Underlying Maturity Month Year
 */ 
typedef struct {
    uint16_t Year;
    uint8_t Month;
    uint8_t Day;
    uint8_t Week;
} UnderlyingMaturityMonthYearT;

/*
 * Structure: Strike Price
 */ 
typedef struct {
    int64_t Mantissa;
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
 * Structure: M D Incremental Refresh High Low Group
 */ 
typedef struct {
    uint64_t ProductGuid;
    char ClearingProductCode[12];
    char SecurityType[6];
    char SecurityExchange[8];
    MaturityMonthYearT MaturityMonthYear;
    uint8_t PutOrCall;
    StrikePriceT StrikePrice;
    uint64_t UnderlyingProductGuid;
    char UnderlyingClearingProductCode[12];
    char UnderlyingSecurityType[6];
    char UnderlyingSecurityExchange[8];
    UnderlyingMaturityMonthYearT UnderlyingMaturityMonthYear;
    char Symbol[20];
    uint64_t InstrumentGuid;
    uint32_t SecurityId;
    LowPxT LowPx;
    char LowPxInd;
    HighPxT HighPx;
    char HighPxInd;
    uint16_t TradingReferenceDate;
} MDIncrementalRefreshHighLowGroupT;

/*
 * Structure: Group Size
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroupUint8;
} GroupSizeT;

/*
 * Structure: M D Incremental Refresh High Low Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshHighLowGroupsT;

/*
 * Structure: Md Incremental Refresh High Low
 */ 
typedef struct {
    uint64_t TransactTime;
} MdIncrementalRefreshHighLowT;

/*
 * Structure: M D Incremental Refresh Voi Group
 */ 
typedef struct {
    uint64_t ProductGuid;
    char ClearingProductCode[12];
    char SecurityType[6];
    char SecurityExchange[8];
    MaturityMonthYearT MaturityMonthYear;
    uint8_t PutOrCall;
    StrikePriceT StrikePrice;
    uint64_t UnderlyingProductGuid;
    char UnderlyingClearingProductCode[12];
    char UnderlyingSecurityType[6];
    char UnderlyingSecurityExchange[8];
    UnderlyingMaturityMonthYearT UnderlyingMaturityMonthYear;
    char Symbol[20];
    uint64_t InstrumentGuid;
    uint32_t SecurityId;
    uint32_t ClearedVolume;
    uint32_t OpenInterestQty;
    uint8_t OpenCloseSettlFlag;
    uint16_t TradingReferenceDate;
} MDIncrementalRefreshVoiGroupT;

/*
 * Structure: M D Incremental Refresh Voi Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshVoiGroupsT;

/*
 * Structure: Md Incremental Refresh Voi
 */ 
typedef struct {
    uint64_t TransactTime;
} MdIncrementalRefreshVoiT;

/*
 * Bitfield: Settl Price Type
 */ 
typedef struct {
    uint8_t
    NullValue : 1,
    ReservedBits : 2,
    Cabinet : 1,
    Intraday : 1,
    Rounded : 1,
    Actual : 1,
    FinalDaily : 1;
} SettlPriceTypeT;

/*
 * Structure: Formatted Last Px
 */ 
typedef struct {
    int64_t Mantissa;
    int8_t Exponent;
} FormattedLastPxT;

/*
 * Structure: M D Incremental Refresh Settle Group
 */ 
typedef struct {
    uint8_t MdUpdateAction;
    char MdEntryType[1];
    uint64_t ProductGuid;
    char ClearingProductCode[12];
    char SecurityType[6];
    char SecurityExchange[8];
    MaturityMonthYearT MaturityMonthYear;
    uint8_t PutOrCall;
    StrikePriceT StrikePrice;
    uint64_t UnderlyingProductGuid;
    char UnderlyingClearingProductCode[12];
    char UnderlyingSecurityType[6];
    char UnderlyingSecurityExchange[8];
    UnderlyingMaturityMonthYearT UnderlyingMaturityMonthYear;
    char Symbol[20];
    uint64_t InstrumentGuid;
    uint32_t SecurityId;
    FormattedLastPxT FormattedLastPx;
    int64_t MdEntryPx;
    SettlPriceTypeT SettlPriceType;
    uint16_t TradingReferenceDate;
    char MdStatisticDesc[40];
} MDIncrementalRefreshSettleGroupT;

/*
 * Structure: M D Incremental Refresh Settle Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshSettleGroupsT;

/*
 * Structure: Md Incremental Refresh Settle
 */ 
typedef struct {
    uint64_t TransactTime;
} MdIncrementalRefreshSettleT;

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
   Version: 7.0
   Date: Monday, December 3, 2018

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
