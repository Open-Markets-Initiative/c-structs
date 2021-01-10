/*******************************************************************************
 * C Structs For Cme Futures Sbe Settlements 7.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Md Update Action Values
 */ 
#define ENUM_MD_UPDATE_ACTION_NEW = 0
#define ENUM_MD_UPDATE_ACTION_CHANGE = 1
#define ENUM_MD_UPDATE_ACTION_DELETE = 2

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_NO_VALUE = 255
#define ENUM_PUT_OR_CALL_PUT = 0
#define ENUM_PUT_OR_CALL_CALL = 1

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_SETTLE = 401
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_VOI = 402
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_HIGH_LOW = 403
#define ENUM_TEMPLATE_ID_ADMIN_HEARTBEAT = 407


/*******************************************************************************
 * Structs
 *******************************************************************************/

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
    char LowPxInd[1];
    HighPxT HighPx;
    char HighPxInd[1];
    uint16_t TradingReferenceDate;
} MDIncrementalRefreshHighLowGroupT;

/*
 * Structure: Group Size
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroup;
} GroupSizeT;

/*
 * Structure: M D Incremental Refresh High Low Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshHighLowGroupsT;

/*
 * Structure: Md Incremental Refresh High Low 403
 */ 
typedef struct {
    uint64_t TransactTime;
} MdIncrementalRefreshHighLow403T;

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
 * Structure: Md Incremental Refresh Vo I 402
 */ 
typedef struct {
    uint64_t TransactTime;
} MdIncrementalRefreshVoI402T;

/*
 * Bitfield: Settl Price Type
 */ 
typedef struct {
    unsigned char NullValue : 1;
    unsigned char ReservedBits : 2;
    unsigned char Cabinet : 1;
    unsigned char Intraday : 1;
    unsigned char Rounded : 1;
    unsigned char Actual : 1;
    unsigned char FinalDaily : 1;
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
 * Structure: Md Incremental Refresh Settle 401
 */ 
typedef struct {
    uint64_t TransactTime;
} MdIncrementalRefreshSettle401T;

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
 * Structure: Binary Packet Header
 */ 
typedef struct {
    uint32_t MessageSequenceNumber;
    uint64_t SendingTime;
} BinaryPacketHeaderT;

