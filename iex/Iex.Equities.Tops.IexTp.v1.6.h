/*******************************************************************************
 * C Structs For Iex Equities IexTp Tops 1.6 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_OPENING_AUCTION 'O'
#define ENUM_AUCTION_TYPE_CLOSING_AUCTION 'C'
#define ENUM_AUCTION_TYPE_IPO_AUCTION 'I'
#define ENUM_AUCTION_TYPE_HALT_AUCTION 'H'
#define ENUM_AUCTION_TYPE_VOLATILITY_AUCTION 'V'

/*
 * Detail Values
 */ 
#define ENUM_DETAIL_NO_PRICE_TEST_IN_PLACE ' '
#define ENUM_DETAIL_SHORT_SALE_PRICE_TEST_RESTRICTION_IN_EFFECT_DUE_TO_AN_INTRADAY_PRICE_DROP_IN_THE_SECURITY 'A'
#define ENUM_DETAIL_SHORT_SALE_PRICE_TEST_RESTRICTION_REMAINS_IN_EFFECT_FROM_PRIOR_DAY 'C'
#define ENUM_DETAIL_SHORT_SALE_PRICE_TEST_RESTRICTION_DEACTIVATED 'D'
#define ENUM_DETAIL_DETAIL_NOT_AVAILABLE 'N'

/*
 * Imbalance Side Values
 */ 
#define ENUM_IMBALANCE_SIDE_BUY 'B'
#define ENUM_IMBALANCE_SIDE_SELL 'S'
#define ENUM_IMBALANCE_SIDE_NONE 'N'

/*
 * Luld Tier Values
 */ 
#define ENUM_LULD_TIER_NOT_APPLICABLE 0
#define ENUM_LULD_TIER_TIER_1_NMS_STOCK 1
#define ENUM_LULD_TIER_TIER_2_NMS_STOCK 2

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_SECURITY_DIRECTORY_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE 'H'
#define ENUM_MESSAGE_TYPE_OPERATIONAL_HALT_STATUS_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_SHORT_SALE_PRICE_TEST_STATUS_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_SECURITY_EVENT_MESSAGE 'E'
#define ENUM_MESSAGE_TYPE_QUOTE_UPDATE_MESSAGE 'Q'
#define ENUM_MESSAGE_TYPE_TRADE_REPORT_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_OFFICIAL_PRICE_MESSAGE 'X'
#define ENUM_MESSAGE_TYPE_TRADE_BREAK_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_AUCTION_INFORMATION_MESSAGE 'A'

/*
 * Operational Halt Status Values
 */ 
#define ENUM_OPERATIONAL_HALT_STATUS_IEX_SPECIFIC_OPERATIONAL_TRADING_HALT 'O'
#define ENUM_OPERATIONAL_HALT_STATUS_NOT_OPERATIONALLY_HALTED_ON_IEX 'N'

/*
 * Price Type Values
 */ 
#define ENUM_PRICE_TYPE_IEX_OFFICIAL_OPENING_PRICE 'Q'
#define ENUM_PRICE_TYPE_IEX_OFFICIAL_CLOSING_PRICE 'M'

/*
 * Security Event Values
 */ 
#define ENUM_SECURITY_EVENT_OPENING_PROCESS_COMPLETE 'O'
#define ENUM_SECURITY_EVENT_CLOSING_PROCESS_COMPLETE 'C'

/*
 * Short Sale Price Test Status Values
 */ 
#define ENUM_SHORT_SALE_PRICE_TEST_STATUS_NOT_IN_EFFECT 0
#define ENUM_SHORT_SALE_PRICE_TEST_STATUS_IN_EFFECT 1

/*
 * System Event Values
 */ 
#define ENUM_SYSTEM_EVENT_START_OF_SYSTEM_HOURS 'S'
#define ENUM_SYSTEM_EVENT_START_OF_REGULAR_MARKET_HOURS 'R'
#define ENUM_SYSTEM_EVENT_END_OF_REGULAR_MARKET_HOURS 'M'
#define ENUM_SYSTEM_EVENT_END_OF_SYSTEM_HOURS 'E'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_TRADING_HALTED_ACROSS_ALL_US_EQUITY_MARKETS 'H'
#define ENUM_TRADING_STATUS_TRADING_PAUSED_AND_ORDER_ACCEPTANCE_PERIOD_ON_IEX 'P'
#define ENUM_TRADING_STATUS_TRADING_ON_IEX 'T'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Auction Information Message
 */ 
typedef struct {
    char AuctionType;
    int64_t Timestamp;
    char Symbol[8];
    uint32_t PairedShares;
    int64_t ReferencePrice;
    int64_t IndicativeClearingPrice;
    uint32_t ImbalanceShares;
    char ImbalanceSide;
    char ExtensionNumber[1];
    uint32_t ScheduledAuctionTime;
    int64_t AuctionBookClearingPrice;
    int64_t CollarReferencePrice;
    int64_t LowerAuctionCollar;
    int64_t UpperAuctionCollar;
} AuctionInformationMessageT;

/*
 * Bitfield: Sale Condition Flags
 */ 
typedef struct {
    uint8_t
    IntermarketSweep : 1,
    ExtendedHours : 1,
    OddLot : 1,
    TradeThroughExempt : 1,
    SinglepriceCrossTrade : 1,
    Unused3 : 3;
} SaleConditionFlagsT;

/*
 * Structure: Trade Break Message
 */ 
typedef struct {
    SaleConditionFlagsT SaleConditionFlags;
    int64_t Timestamp;
    char Symbol[8];
    uint32_t Size;
    int64_t Price;
    uint64_t TradeId;
} TradeBreakMessageT;

/*
 * Structure: Official Price Message
 */ 
typedef struct {
    char PriceType;
    int64_t Timestamp;
    char Symbol[8];
    int64_t OfficialPrice;
} OfficialPriceMessageT;

/*
 * Structure: Trade Report Message
 */ 
typedef struct {
    SaleConditionFlagsT SaleConditionFlags;
    int64_t Timestamp;
    char Symbol[8];
    uint32_t Size;
    int64_t Price;
    uint64_t TradeId;
} TradeReportMessageT;

/*
 * Bitfield: Quote Update Flags
 */ 
typedef struct {
    uint8_t
    SymbolAvailability : 1,
    MarketSession : 1,
    Unused6 : 6;
} QuoteUpdateFlagsT;

/*
 * Structure: Quote Update Message
 */ 
typedef struct {
    QuoteUpdateFlagsT QuoteUpdateFlags;
    int64_t Timestamp;
    char Symbol[8];
    uint32_t BidSize;
    int64_t BidPrice;
    int64_t AskPrice;
    uint32_t AskSize;
} QuoteUpdateMessageT;

/*
 * Structure: Security Event Message
 */ 
typedef struct {
    char SecurityEvent;
    int64_t Timestamp;
    char Symbol[8];
} SecurityEventMessageT;

/*
 * Structure: Short Sale Price Test Status Message
 */ 
typedef struct {
    uint8_t ShortSalePriceTestStatus;
    int64_t Timestamp;
    char Symbol[8];
    char Detail;
} ShortSalePriceTestStatusMessageT;

/*
 * Structure: Operational Halt Status Message
 */ 
typedef struct {
    char OperationalHaltStatus;
    int64_t Timestamp;
    char Symbol[8];
} OperationalHaltStatusMessageT;

/*
 * Structure: Trading Status Message
 */ 
typedef struct {
    char TradingStatus;
    int64_t Timestamp;
    char Symbol[8];
    char Reason[4];
} TradingStatusMessageT;

/*
 * Bitfield: Security Directory Flags
 */ 
typedef struct {
    uint8_t
    Etp : 1,
    WhenIssued : 1,
    TestSecurity : 1,
    Unused5 : 5;
} SecurityDirectoryFlagsT;

/*
 * Structure: Security Directory Message
 */ 
typedef struct {
    SecurityDirectoryFlagsT SecurityDirectoryFlags;
    int64_t Timestamp;
    char Symbol[8];
    uint32_t RoundLotSize;
    int64_t AdjustedPocPrice;
    uint8_t LuldTier;
} SecurityDirectoryMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    char SystemEvent;
    int64_t Timestamp;
} SystemEventMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageLength;
    char MessageType;
} MessageHeaderT;

/*
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Iex Tp Header
 */ 
typedef struct {
    uint8_t Version;
    char Reserved[1];
    uint16_t MessageProtocolId;
    uint32_t ChannelId;
    uint32_t SessionId;
    uint16_t PayloadLength;
    uint16_t MessageCount;
    uint64_t StreamOffset;
    uint64_t FirstMessageSequenceNumber;
    uint64_t SendTime;
} IexTpHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    IexTpHeaderT IexTpHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Investors Exchange
   Version: 1.6
   Date: Tuesday, February 27, 2018
   Specification: IEX TOPS Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
