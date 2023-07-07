/*******************************************************************************
 * C Structs For Nyse Options Xdp DeepFeed 1.3.a Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Delivery Flag Values
 */ 
#define ENUM_DELIVERY_FLAG_HEARTBEAT 1
#define ENUM_DELIVERY_FLAG_XDP_FAILOVER 10
#define ENUM_DELIVERY_FLAG_ORIGINAL_MESSAGE 11
#define ENUM_DELIVERY_FLAG_SEQUENCE_NUMBER_RESET_MESSAGE 12
#define ENUM_DELIVERY_FLAG_ONE_RETRANSMISSION_PACKET 13
#define ENUM_DELIVERY_FLAG_RETRANSMISSION_SEQUENCE_MESSAGE 15
#define ENUM_DELIVERY_FLAG_ONE_REFRESH_PACKET 17
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_START 18
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_MESSAGE 19
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_END 20
#define ENUM_DELIVERY_FLAG_MESSAGE_UNAVAILABLE 21

/*
 * Exchange Code Values
 */ 
#define ENUM_EXCHANGE_CODE_NYSE 'N'
#define ENUM_EXCHANGE_CODE_NYSE_ARCA 'P'
#define ENUM_EXCHANGE_CODE_NASDAQ 'Q'
#define ENUM_EXCHANGE_CODE_NYSE_MKT 'A'
#define ENUM_EXCHANGE_CODE_GLOBAL_OTC '1'
#define ENUM_EXCHANGE_CODE_ARCA_LOCAL_NONTAPEB_INDEX '2'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_NYSE_CASH 1
#define ENUM_MARKET_ID_EUROPE_CASH 2
#define ENUM_MARKET_ID_NYSE_ARCA_CASH 3
#define ENUM_MARKET_ID_NYSE_ARCA_OPTIONS 4
#define ENUM_MARKET_ID_NYSE_ARCA_BONDS 5
#define ENUM_MARKET_ID_ARCA_EDGE 6
#define ENUM_MARKET_ID_LIFFE 7
#define ENUM_MARKET_ID_NYSE_AMERICAN_OPTIONS 8
#define ENUM_MARKET_ID_NYSE_MKT_CASH 9

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_OUTRIGHT_MARKET_DEPTH_BUY_MESSAGE 403
#define ENUM_MESSAGE_TYPE_OUTRIGHT_MARKET_DEPTH_SELL_MESSAGE 405
#define ENUM_MESSAGE_TYPE_UNDERLYING_STATUS_MESSAGE 419
#define ENUM_MESSAGE_TYPE_OUTRIGHT_SERIES_STATUS_MESSAGE 421
#define ENUM_MESSAGE_TYPE_REFRESH_OUTRIGHT_MARKET_DEPTH_BUY_MESSAGE 503
#define ENUM_MESSAGE_TYPE_REFRESH_OUTRIGHT_MARKET_DEPTH_SELL_MESSAGE 505
#define ENUM_MESSAGE_TYPE_UNDERLYING_INDEX_MAPPING_MESSAGE 435
#define ENUM_MESSAGE_TYPE_SERIES_INDEX_MAPPING_MESSAGE 437
#define ENUM_MESSAGE_TYPE_STREAM_ID_MESSAGE 455
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE 1

/*
 * Price Resolution Values
 */ 
#define ENUM_PRICE_RESOLUTION_ALL_PENNY 0
#define ENUM_PRICE_RESOLUTION_PENNY_NICKEL 1
#define ENUM_PRICE_RESOLUTION_NICKEL_DIME 5

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT 0
#define ENUM_PUT_OR_CALL_CALL 1

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_REGULAR_TRADING '1'
#define ENUM_QUOTE_CONDITION_ROTATION '2'
#define ENUM_QUOTE_CONDITION_TRADING_HALTED '3'
#define ENUM_QUOTE_CONDITION_PREOPEN '4'
#define ENUM_QUOTE_CONDITION_ROTATION_LEGAL_WIDTH_QUOTE_PENDING '5'

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_LIGHT_UP_A_DARK_SERIES 'L'
#define ENUM_SECURITY_STATUS_OPEN_A_DARK_SERIES 'N'
#define ENUM_SECURITY_STATUS_OPEN 'O'
#define ENUM_SECURITY_STATUS_CLOSE 'X'
#define ENUM_SECURITY_STATUS_HALT 'S'
#define ENUM_SECURITY_STATUS_UNHALT 'U'
#define ENUM_SECURITY_STATUS_UNHALT_A_DARK_SERIES 'T'
#define ENUM_SECURITY_STATUS_END_OF_RFQ_AUCTION 'Q'

/*
 * Security Type Values
 */ 
#define ENUM_SECURITY_TYPE_ADR 'A'
#define ENUM_SECURITY_TYPE_COMMON_STOCK 'C'
#define ENUM_SECURITY_TYPE_DEBENTURES 'D'
#define ENUM_SECURITY_TYPE_ETF 'E'
#define ENUM_SECURITY_TYPE_FOREIGN 'F'
#define ENUM_SECURITY_TYPE_AMERICAN_DEPOSITORY_SHARES 'H'
#define ENUM_SECURITY_TYPE_UNITS 'I'
#define ENUM_SECURITY_TYPE_MISCLIQUID_TRUST 'M'
#define ENUM_SECURITY_TYPE_ORDINARY_SHARES 'O'
#define ENUM_SECURITY_TYPE_PREFERRED_STOCK 'P'
#define ENUM_SECURITY_TYPE_RIGHTS 'R'
#define ENUM_SECURITY_TYPE_SHARES_OF_BENEFICIARY_INTEREST 'S'
#define ENUM_SECURITY_TYPE_TEST 'T'
#define ENUM_SECURITY_TYPE_UNITS 'U'
#define ENUM_SECURITY_TYPE_WARRANT 'W'
#define ENUM_SECURITY_TYPE_INDEX 'X'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Sequence Number Reset Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint8_t ProductId;
    uint8_t ChannelId;
} SequenceNumberResetMessageT;

/*
 * Structure: Stream Id Message
 */ 
typedef struct {
    uint16_t StreamId;
    char Reserved2[2];
} StreamIdMessageT;

/*
 * Structure: Series Index Mapping Message
 */ 
typedef struct {
    uint32_t SeriesIndex;
    uint8_t ChannelId;
    char ReservedA1[1];
    uint16_t MarketId;
    uint8_t SystemId;
    char ReservedB1[1];
    uint16_t StreamId;
    uint32_t UnderlyingIndex;
    uint16_t ContractMultiplier;
    char MaturityDate[6];
    uint8_t PutOrCall;
    char StrikePrice[10];
    uint8_t PriceScaleCode;
    char UnderlyingSymbol[11];
    char OptionSymbolRoot[5];
    uint32_t GroupId;
} SeriesIndexMappingMessageT;

/*
 * Structure: Underlying Index Mapping Message
 */ 
typedef struct {
    uint32_t UnderlyingIndex;
    char UnderlyingSymbol[11];
    uint8_t ChannelId;
    uint16_t MarketId;
    uint8_t SystemId;
    char ExchangeCode;
    uint8_t PriceScaleCode;
    char SecurityType;
    uint8_t PriceResolution;
    char Reserved1[1];
} UnderlyingIndexMappingMessageT;

/*
 * Structure: Refresh Outright Market Depth Sell Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SeriesIndex;
    uint32_t SymbolSeqNum;
    int32_t FirstLevelPrice;
    int32_t SecondLevelPrice;
    int32_t ThirdLevelPrice;
    uint16_t FirstVolume;
    uint16_t SecondVolume;
    uint16_t ThirdVolume;
    char QuoteCondition;
    char Reserved1[1];
    uint16_t FirstLevelCustomerVolume;
    uint16_t SecondLevelCustomerVolume;
    uint16_t ThirdLevelCustomerVolume;
    char Reserved2[2];
} RefreshOutrightMarketDepthSellMessageT;

/*
 * Structure: Refresh Outright Market Depth Buy Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceNs;
    uint32_t SeriesIndex;
    uint32_t SymbolSeqNum;
    int32_t FirstLevelPrice;
    int32_t SecondLevelPrice;
    int32_t ThirdLevelPrice;
    uint16_t FirstVolume;
    uint16_t SecondVolume;
    uint16_t ThirdVolume;
    char QuoteCondition;
    char Reserved1[1];
    uint16_t FirstLevelCustomerVolume;
    uint16_t SecondLevelCustomerVolume;
    uint16_t ThirdLevelCustomerVolume;
    char Reserved2[2];
} RefreshOutrightMarketDepthBuyMessageT;

/*
 * Structure: Outright Series Status Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SeriesIndex;
    uint32_t SymbolSeqNum;
    char SecurityStatus;
    char HaltCondition[1];
    char Reserved2[2];
} OutrightSeriesStatusMessageT;

/*
 * Structure: Underlying Status Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t UnderlyingIndex;
    uint32_t UnderlyingSeqNum;
    char SecurityStatus;
    char HaltCondition[1];
    char Reserved2[2];
} UnderlyingStatusMessageT;

/*
 * Structure: Outright Market Depth Sell Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceNs;
    uint32_t SeriesIndex;
    uint32_t SymbolSeqNum;
    int32_t FirstLevelPrice;
    int32_t SecondLevelPrice;
    int32_t ThirdLevelPrice;
    uint16_t FirstVolume;
    uint16_t SecondVolume;
    uint16_t ThirdVolume;
    char QuoteCondition;
    char Reserved1[1];
    uint16_t FirstLevelCustomerVolume;
    uint16_t SecondLevelCustomerVolume;
    uint16_t ThirdLevelCustomerVolume;
    char Reserved2[2];
} OutrightMarketDepthSellMessageT;

/*
 * Structure: Outright Market Depth Buy Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceNs;
    uint32_t SeriesIndex;
    uint32_t SymbolSeqNum;
    int32_t FirstLevelPrice;
    int32_t SecondLevelPrice;
    int32_t ThirdLevelPrice;
    uint16_t FirstLevelVolume;
    uint16_t SecondLevelVolume;
    uint16_t ThirdLevelVolume;
    char QuoteCondition;
    char Reserved1[1];
    uint16_t FirstLevelCustomerVolume;
    uint16_t SecondLevelCustomerVolume;
    uint16_t ThirdLevelCustomerVolume;
    char Reserved2[2];
} OutrightMarketDepthBuyMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageSize;
    uint16_t MessageType;
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
    uint16_t PacketSize;
    uint8_t DeliveryFlag;
    uint8_t MessageCount;
    uint32_t SequenceNumber;
    uint32_t Timestamp;
    uint32_t Nanoseconds;
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
   Organization: New York Stock Exchange
   Version: 1.3.a
   Date: Wednesday, February 28, 2018
   Specification: XDP_Options_Client_Specification_v1.3a.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
