/*******************************************************************************
 * C Structs For Cme Futures Sbe Derived 12.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Aggressor Side Values
 */ 
#define ENUM_AGGRESSOR_SIDE_NO_VALUE 255
#define ENUM_AGGRESSOR_SIDE_BUY 1
#define ENUM_AGGRESSOR_SIDE_SELL 2

/*
 * Md Entry Type Spectrum Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_SPECTRUM_ENTRY_TYPE_VWAP '9'
#define ENUM_MD_ENTRY_TYPE_SPECTRUM_ENTRY_TYPE_TWAP 't'

/*
 * Md Entry Type Ticker Entry Type Values
 */ 
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_TOUCH_HIGH 'k'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_TOUCH_LOW 'l'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_OPEN_BEST_BID 'm'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_OPEN_BEST_OFFER 'n'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_CLOSE_BEST_BID 'o'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_CLOSE_BEST_OFFER 'p'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_MARKET_HIGH 'q'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_MARKET_LOW 'r'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_MARKET_BEST_OFFER 'w'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_MARKET_BEST_BID 'x'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_PAID 'y'
#define ENUM_MD_ENTRY_TYPE_TICKER_ENTRY_TYPE_GIVEN 'z'

/*
 * Open Close Settl Flag Values
 */ 
#define ENUM_OPEN_CLOSE_SETTL_FLAG_CURRENT_DAY 0
#define ENUM_OPEN_CLOSE_SETTL_FLAG_PREVIOUS_DAY 4

/*
 * Security Trading Event Values
 */ 
#define ENUM_SECURITY_TRADING_EVENT_GLOBAL_DAY_ROLL 4

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_ADMIN_HEARTBEAT 302
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_SPECTRUM 303
#define ENUM_TEMPLATE_ID_MD_INCREMENTAL_REFRESH_TICKER 304
#define ENUM_TEMPLATE_ID_MD_SNAPSHOT_REFRESH_SPECTRUM 305
#define ENUM_TEMPLATE_ID_MD_SNAPSHOT_REFRESH_TICKER 306
#define ENUM_TEMPLATE_ID_GLOBAL_DAY_ROLL 307

/*
 * Trading Session Id Values
 */ 
#define ENUM_TRADING_SESSION_ID_NO_VALUE 255
#define ENUM_TRADING_SESSION_ID_GL 0
#define ENUM_TRADING_SESSION_ID_SY 1
#define ENUM_TRADING_SESSION_ID_TK 2
#define ENUM_TRADING_SESSION_ID_HK 3
#define ENUM_TRADING_SESSION_ID_LN 4
#define ENUM_TRADING_SESSION_ID_NY 5


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Global Day Roll
 */ 
typedef struct {
    uint64_t TransactTime;
    uint8_t SecurityTradingEvent;
} GlobalDayRollT;

/*
 * Structure: M D Snapshot Refresh Ticker Group
 */ 
typedef struct {
    char MdEntryTypeTickerEntryType;
    int64_t MdEntryPx;
    uint64_t MdEntrySize;
    uint64_t MdEntryTime;
    uint8_t OpenCloseSettlFlag;
    uint8_t TradingSessionId;
    uint8_t AggressorSide;
} MDSnapshotRefreshTickerGroupT;

/*
 * Structure: Group Size
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t NumInGroupUint8;
} GroupSizeT;

/*
 * Structure: M D Snapshot Refresh Ticker Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDSnapshotRefreshTickerGroupsT;

/*
 * Structure: Md Snapshot Refresh Ticker
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char FinancialInstrumentFullName[35];
    char Symbol[20];
    uint64_t InstrumentGuid;
    int32_t SecurityId;
} MdSnapshotRefreshTickerT;

/*
 * Structure: M D Snapshot Refresh Spectrum Group
 */ 
typedef struct {
    char MdEntryTypeSpectrumEntryType;
    int64_t MdEntryPx;
    uint64_t MdEntrySize;
    uint64_t MdEntryTime;
} MDSnapshotRefreshSpectrumGroupT;

/*
 * Structure: M D Snapshot Refresh Spectrum Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDSnapshotRefreshSpectrumGroupsT;

/*
 * Structure: Md Snapshot Refresh Spectrum
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
    char FinancialInstrumentFullName[35];
    char Symbol[20];
    uint64_t InstrumentGuid;
    int32_t SecurityId;
} MdSnapshotRefreshSpectrumT;

/*
 * Structure: M D Incremental Refresh Ticker Group
 */ 
typedef struct {
    char MdEntryTypeTickerEntryType;
    int32_t SecurityId;
    char Symbol[20];
    uint64_t InstrumentGuid;
    char FinancialInstrumentFullName[35];
    int64_t MdEntryPx;
    uint64_t MdEntrySize;
    uint64_t MdEntryTime;
    uint8_t OpenCloseSettlFlag;
    uint8_t TradingSessionId;
    uint8_t AggressorSide;
} MDIncrementalRefreshTickerGroupT;

/*
 * Structure: M D Incremental Refresh Ticker Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshTickerGroupsT;

/*
 * Structure: Md Incremental Refresh Ticker
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
} MdIncrementalRefreshTickerT;

/*
 * Structure: M D Incremental Refresh Spectrum Group
 */ 
typedef struct {
    char MdEntryTypeSpectrumEntryType;
    char FinancialInstrumentFullName[35];
    char Symbol[20];
    uint64_t InstrumentGuid;
    int32_t SecurityId;
    int64_t MdEntryPx;
    uint64_t MdEntrySize;
    uint64_t MdEntryTime;
} MDIncrementalRefreshSpectrumGroupT;

/*
 * Structure: M D Incremental Refresh Spectrum Groups
 */ 
typedef struct {
    GroupSizeT GroupSize;
} MDIncrementalRefreshSpectrumGroupsT;

/*
 * Structure: Md Incremental Refresh Spectrum
 */ 
typedef struct {
    uint64_t TransactTime;
    char MatchEventIndicator[0];
} MdIncrementalRefreshSpectrumT;

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
   Version: 12.0
   Date: Saturday, January 4, 2020

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
