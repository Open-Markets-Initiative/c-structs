/*******************************************************************************
 * C Structs For Nyse Options Xdp ComplexFeed 1.3.a Binary Model
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
 * Leg Security Type Values
 */ 
#define ENUM_LEG_SECURITY_TYPE_OPTIONS_SERIES_LEG 'O'
#define ENUM_LEG_SECURITY_TYPE_EQUITY_STOCK_LEG 'E'

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
#define ENUM_MESSAGE_TYPE_COMPLEX_QUOTE_MESSAGE 423
#define ENUM_MESSAGE_TYPE_COMPLEX_TRADE_MESSAGE 425
#define ENUM_MESSAGE_TYPE_COMPLEX_CROSSING_RFQ_MESSAGE 429
#define ENUM_MESSAGE_TYPE_COMPLEX_CUBE_RFQ_MESSAGE 472
#define ENUM_MESSAGE_TYPE_COMPLEX_STATUS_MESSAGE 433
#define ENUM_MESSAGE_TYPE_REFRESH_COMPLEX_QUOTE_MESSAGE 511
#define ENUM_MESSAGE_TYPE_REFRESH_COMPLEX_TRADE_MESSAGE 513
#define ENUM_MESSAGE_TYPE_COMPLEX_SYMBOL_DEFINITION_MESSAGE 439
#define ENUM_MESSAGE_TYPE_STREAM_ID_MESSAGE 455
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE 1

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
 * Side Values
 */ 
#define ENUM_SIDE_BUY 'B'
#define ENUM_SIDE_SELL 'S'

/*
 * Trade Cond 1 Values
 */ 
#define ENUM_TRADE_COND_1_REGULAR_TRADE ' '
#define ENUM_TRADE_COND_1_LATE_REPORT 'I'
#define ENUM_TRADE_COND_1_FLOOR_TRADE 'R'
#define ENUM_TRADE_COND_1_SO_SWEEP_TRADE 'S'

/*
 * Trade Cond 2 Values
 */ 
#define ENUM_TRADE_COND_2_COMPLEX_TRADE_WITH_EQUITY 'P'
#define ENUM_TRADE_COND_2_COMPLEX_TRADE 'L'


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
 * Structure: Leg Definition
 */ 
typedef struct {
    uint32_t SymbolIndex;
    uint16_t LegRatioQty;
    char Side;
    char LegSecurityType;
} LegDefinitionT;

/*
 * Structure: Complex Symbol Definition Message
 */ 
typedef struct {
    uint32_t ComplexIndex;
    char ComplexSymbol[21];
    uint8_t ChannelId;
    uint16_t MarketId;
    uint8_t SystemId;
    char Reserved1[1];
    uint16_t StreamId;
    uint16_t NoOfLegs;
    char Reserved2[2];
} ComplexSymbolDefinitionMessageT;

/*
 * Structure: Refresh Complex Trade Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t ComplexIndex;
    uint32_t SymbolSeqNum;
    uint32_t TradeId;
    int32_t Price;
    uint32_t Volume4;
    char TradeCond1;
    char TradeCond2;
    char Reserved2[2];
} RefreshComplexTradeMessageT;

/*
 * Structure: Refresh Complex Quote Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t ComplexIndex;
    uint32_t SymbolSeqNum;
    int32_t AskPrice;
    int32_t BidPrice;
    uint16_t AskVolume;
    uint16_t BidVolume;
    uint16_t AskCustomerVolume;
    uint16_t BidCustomerVolume;
    char QuoteCondition;
    char Reserved1[1];
    char Reserved2[2];
} RefreshComplexQuoteMessageT;

/*
 * Structure: Complex Status Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t ComplexIndex;
    uint32_t SymbolSeqNum;
    char SecurityStatus;
    char HaltCondition[1];
    char Reserved2[2];
} ComplexStatusMessageT;

/*
 * Structure: Complex Cube Rfq Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceNs;
    uint32_t ComplexIndex;
    uint32_t SymbolSeqNum;
    char Side;
    char Reserved1[1];
    uint16_t Volume2;
    int32_t Price;
} ComplexCubeRfqMessageT;

/*
 * Structure: Complex Crossing Rfq Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceNs;
    uint32_t ComplexIndex;
    uint32_t SymbolSeqNum;
    char Side;
    char Reserved1[1];
    uint16_t Volume2;
    int32_t Price;
} ComplexCrossingRfqMessageT;

/*
 * Structure: Complex Trade Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t ComplexIndex;
    uint32_t SymbolSeqNum;
    uint32_t TradeId;
    int32_t Price;
    uint32_t Volume4;
    char TradeCond1;
    char TradeCond2;
    char Reserved2[2];
} ComplexTradeMessageT;

/*
 * Structure: Complex Quote Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t ComplexIndex;
    uint32_t SymbolSeqNum;
    int32_t AskPrice;
    int32_t BidPrice;
    uint16_t AskVolume;
    uint16_t BidVolume;
    uint16_t AskCustomerVolume;
    uint16_t BidCustomerVolume;
    char QuoteCondition;
    char Reserved1[1];
    char Reserved2[2];
} ComplexQuoteMessageT;

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
