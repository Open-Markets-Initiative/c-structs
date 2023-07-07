/*******************************************************************************
 * C Structs For Coinbase Derivatives Sbe MarketDataApi 1.2 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Product Group Values
 */ 
#define ENUM_PRODUCT_GROUP_CURRENCY 0
#define ENUM_PRODUCT_GROUP_EQUITY 1
#define ENUM_PRODUCT_GROUP_ENERGY 2
#define ENUM_PRODUCT_GROUP_METALS 3
#define ENUM_PRODUCT_GROUP_INTERESTRATE 4
#define ENUM_PRODUCT_GROUP_AGRICULTURE 5

/*
 * Reason Values
 */ 
#define ENUM_REASON_SEQTOOLOW 1
#define ENUM_REASON_SEQTOOHIGH 2
#define ENUM_REASON_RATELIMITEXCEEDED 3
#define ENUM_REASON_OTHERERROR 4

/*
 * Spread Buy Convention Values
 */ 
#define ENUM_SPREAD_BUY_CONVENTION_USEFARBID 1
#define ENUM_SPREAD_BUY_CONVENTION_USENEARBID -1

/*
 * Stat Type Values
 */ 
#define ENUM_STAT_TYPE_DAYOPENINGPRICE '4'
#define ENUM_STAT_TYPE_CLOSINGPRICE '5'
#define ENUM_STAT_TYPE_SETTLEMENTPRICE '6'
#define ENUM_STAT_TYPE_TRADINGSESSIONHIGHPRICE '7'
#define ENUM_STAT_TYPE_TRADINGSESSIONLOWPRICE '8'
#define ENUM_STAT_TYPE_REFERENCEPRICE 'F'
#define ENUM_STAT_TYPE_INDICATIVEOPENINGPRICE 'I'

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_OUTRIGHT_INSTRUMENT_DEFINITION_MESSAGE 10
#define ENUM_TEMPLATE_ID_SPREAD_INSTRUMENT_DEFINITION_MESSAGE 11
#define ENUM_TEMPLATE_ID_TRADING_STATUS_UPDATE_MESSAGE 17
#define ENUM_TEMPLATE_ID_ORDER_PUT_MESSAGE 20
#define ENUM_TEMPLATE_ID_ORDER_DELETE_MESSAGE 21
#define ENUM_TEMPLATE_ID_IMPLIED_ORDER_UPDATE_MESSAGE 22
#define ENUM_TEMPLATE_ID_TRADE_SUMMARY_MESSAGE 33
#define ENUM_TEMPLATE_ID_TRADE_MESSAGE 30
#define ENUM_TEMPLATE_ID_TRADE_AMEND_MESSAGE 31
#define ENUM_TEMPLATE_ID_SPREAD_TRADE_AMEND_MESSAGE 34
#define ENUM_TEMPLATE_ID_TRADE_BUST_MESSAGE 32
#define ENUM_TEMPLATE_ID_MARKET_STAT_MESSAGE 40
#define ENUM_TEMPLATE_ID_TRADE_SESSION_VOLUME_MESSAGE 41
#define ENUM_TEMPLATE_ID_OPEN_INTEREST_MESSAGE 42
#define ENUM_TEMPLATE_ID_START_OF_OUTRIGHT_INSTRUMENT_SNAPSHOT_MESSAGE 110
#define ENUM_TEMPLATE_ID_START_OF_SPREAD_INSTRUMENT_SNAPSHOT_MESSAGE 111
#define ENUM_TEMPLATE_ID_ORDER_SNAPSHOT_MESSAGE 120
#define ENUM_TEMPLATE_ID_END_OF_SNAPSHOT_MESSAGE 122
#define ENUM_TEMPLATE_ID_RETRANSMIT_REQUEST_MESSAGE 200
#define ENUM_TEMPLATE_ID_RETRANSMIT_REJECT_MESSAGE 202

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_PREOPEN 0
#define ENUM_TRADING_STATUS_OPEN 1
#define ENUM_TRADING_STATUS_HALT 2
#define ENUM_TRADING_STATUS_PAUSE 3
#define ENUM_TRADING_STATUS_CLOSE 4
#define ENUM_TRADING_STATUS_PREOPENNOCANCEL 5
#define ENUM_TRADING_STATUS_EXPIRED 6


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Retransmit Reject Message
 */ 
typedef struct {
    int64_t RetryDelayNanos;
    char Details[40];
    int8_t Reason;
} RetransmitRejectMessageT;

/*
 * Structure: Retransmit Request Message
 */ 
typedef struct {
    int64_t BeginSeqNum;
    uint8_t MessageCount;
} RetransmitRequestMessageT;

/*
 * Bitfield: Definition Flags
 */ 
typedef struct {
    uint16_t
    Reserved15 : 15,
    IsPriorSettlementTheoretical : 1;
} DefinitionFlagsT;

/*
 * Structure: End Of Snapshot Message
 */ 
typedef struct {
    uint16_t SnapshotSeqNum;
    int32_t TradeVolume;
    int64_t IndicativeOpenPrice;
    int64_t DayOpenPrice;
    int64_t ClosePrice;
    int64_t LowPrice;
    int64_t HighPrice;
    int64_t VwapPrice;
    int64_t SettlementPrice;
    int64_t LastTradePrice;
    int64_t LastTradeTime;
    int64_t BestBidImpliedPrice;
    int64_t BestAskImpliedPrice;
    int64_t NextBidImpliedPrice;
    int64_t NextAskImpliedPrice;
    int64_t LimitDownPrice;
    int64_t LimitUpPrice;
    int32_t LastTradeQty;
    int32_t OpenInterest;
    int32_t BestBidImpliedQty;
    int32_t BestAskImpliedQty;
    int32_t NextBidImpliedQty;
    int32_t NextAskImpliedQty;
    int64_t PriorSettlementPrice;
    DefinitionFlagsT DefinitionFlags;
} EndOfSnapshotMessageT;

/*
 * Structure: Order Snapshot Message
 */ 
typedef struct {
    uint16_t SnapshotSeqNum;
    int32_t Quantity;
    int64_t TransactTime;
    int64_t OrderId;
    int64_t Price;
} OrderSnapshotMessageT;

/*
 * Structure: Start Of Spread Instrument Snapshot Message
 */ 
typedef struct {
    uint16_t SnapshotSeqNum;
    uint32_t LastInstrSeqNum;
    char Symbol[24];
    char ProductCode[8];
    char Description[32];
    int64_t PriceIncrement;
    char CfiCode[8];
    char Currency[8];
    int32_t ProductId;
    int32_t ContractSize;
    int32_t OrderCount;
    uint16_t FirstTradingSessionDate;
    uint16_t LastTradingSessionDate;
    uint16_t TradingSessionDate;
    int8_t ProductGroup;
    int8_t TradingStatus;
    int32_t Leg1InstrumentId;
    int32_t Leg2InstrumentId;
    int8_t SpreadBuyConvention;
} StartOfSpreadInstrumentSnapshotMessageT;

/*
 * Structure: Start Of Outright Instrument Snapshot Message
 */ 
typedef struct {
    uint16_t SnapshotSeqNum;
    uint32_t LastInstrSeqNum;
    char Symbol[24];
    char ProductCode[8];
    char Description[32];
    int64_t PriceIncrement;
    char CfiCode[8];
    char Currency[8];
    int32_t ProductId;
    int32_t ContractSize;
    int32_t OrderCount;
    uint16_t FirstTradingSessionDate;
    uint16_t LastTradingSessionDate;
    uint16_t TradingSessionDate;
    int8_t ProductGroup;
    int8_t TradingStatus;
} StartOfOutrightInstrumentSnapshotMessageT;

/*
 * Structure: Instr Header
 */ 
typedef struct {
    uint8_t InstrumentFlags;
    int8_t InstrumentSide;
    int32_t InstrumentId;
    uint32_t InstrSeqNum;
    uint16_t TradingSessionDate;
    int16_t Reserved;
    int64_t TransactTime;
} InstrHeaderT;

/*
 * Structure: Open Interest Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int32_t Quantity;
} OpenInterestMessageT;

/*
 * Structure: Trade Session Volume Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t VwapPrice;
    int32_t TradeVolume;
} TradeSessionVolumeMessageT;

/*
 * Structure: Market Stat Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t Price;
    char StatType;
} MarketStatMessageT;

/*
 * Structure: Trade Bust Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t MatchId;
    int64_t BuyOrderId;
    int64_t SellOrderId;
} TradeBustMessageT;

/*
 * Structure: Spread Trade Amend Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t MatchId;
    int64_t BuyOrderId;
    int64_t SellOrderId;
    int64_t OldPrice;
    int64_t NewPrice;
    int64_t OldLeg1Price;
    int64_t NewLeg1Price;
    int64_t OldLeg2Price;
    int64_t NewLeg2Price;
} SpreadTradeAmendMessageT;

/*
 * Structure: Trade Amend Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t MatchId;
    int64_t BuyOrderId;
    int64_t SellOrderId;
    int64_t OldPrice;
    int64_t NewPrice;
} TradeAmendMessageT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t MatchId;
    int64_t BuyOrderId;
    int64_t SellOrderId;
    int64_t Price;
    int32_t Quantity;
} TradeMessageT;

/*
 * Structure: Trade Summary Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t AggressorOrderId;
    int64_t AggressorReceiveTime;
    int64_t VwapPrice;
    int64_t DeepestPrice;
    int32_t Quantity;
} TradeSummaryMessageT;

/*
 * Structure: Implied Order Update Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t BestPrice;
    int64_t NextPrice;
    int32_t BestQty;
    int32_t NextQty;
} ImpliedOrderUpdateMessageT;

/*
 * Structure: Order Delete Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t OrderId;
} OrderDeleteMessageT;

/*
 * Structure: Order Put Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t OrderId;
    int64_t Price;
    int32_t Quantity;
} OrderPutMessageT;

/*
 * Structure: Trading Status Update Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    int64_t LimitDownPrice;
    int64_t LimitUpPrice;
    int8_t TradingStatus;
} TradingStatusUpdateMessageT;

/*
 * Structure: Spread Instrument Definition Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    char Symbol[24];
    char ProductCode[8];
    char Description[32];
    int64_t PriceIncrement;
    char CfiCode[8];
    char Currency[8];
    uint16_t FirstTradingSessionDate;
    uint16_t LastTradingSessionDate;
    int32_t ContractSize;
    int64_t PriorSettlementPrice;
    int64_t SettlementPrice;
    int64_t LimitDownPrice;
    int64_t LimitUpPrice;
    int32_t ProductId;
    int8_t ProductGroup;
    int8_t TradingStatus;
    int32_t Leg1InstrumentId;
    int32_t Leg2InstrumentId;
    int8_t SpreadBuyConvention;
    DefinitionFlagsT DefinitionFlags;
} SpreadInstrumentDefinitionMessageT;

/*
 * Structure: Outright Instrument Definition Message
 */ 
typedef struct {
    InstrHeaderT InstrHeader;
    char Symbol[24];
    char ProductCode[8];
    char Description[32];
    int64_t PriceIncrement;
    char CfiCode[8];
    char Currency[8];
    uint16_t FirstTradingSessionDate;
    uint16_t LastTradingSessionDate;
    int32_t ContractSize;
    int64_t PriorSettlementPrice;
    int64_t SettlementPrice;
    int64_t LimitDownPrice;
    int64_t LimitUpPrice;
    int32_t ProductId;
    int8_t ProductGroup;
    int8_t TradingStatus;
    DefinitionFlagsT DefinitionFlags;
} OutrightInstrumentDefinitionMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t FrameLength;
    uint16_t BlockLength;
    uint16_t TemplateId;
    uint16_t SchemaId;
    uint16_t Version;
} MessageHeaderT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    int64_t SendingTime;
    int64_t SeqNum;
    uint16_t ChannelId;
    uint8_t PacketFlags;
    uint8_t MessageCount;
    int32_t SnapshotInstrumentId;
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
   Organization: Coinbase
   Version: 1.2
   Date: Monday, July 27, 2020
   Specification: FairX_UDP_MarketData_API_V1.2.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
