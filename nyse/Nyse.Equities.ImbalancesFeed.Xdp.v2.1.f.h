/*******************************************************************************
 * C Structs For Nyse Equities Xdp ImbalancesFeed 2.1.f Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Status Values
 */ 
#define ENUM_AUCTION_STATUS_WILL_RUN_OPEN_CLOSE 0
#define ENUM_AUCTION_STATUS_WILL_RUN_INTEREST 1
#define ENUM_AUCTION_STATUS_WILL_NOT_RUN_IMBALANCE 2
#define ENUM_AUCTION_STATUS_WILL_NOT_RUN_TRANSITION_TO_CLOSING 3

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_EARLY_OPENING 'O'
#define ENUM_AUCTION_TYPE_CORE_OPENING 'M'
#define ENUM_AUCTION_TYPE_REOPENING 'H'
#define ENUM_AUCTION_TYPE_CLOSING 'C'
#define ENUM_AUCTION_TYPE_REGULATORY_IMBALANCE 'R'

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
 * Freeze Status Values
 */ 
#define ENUM_FREEZE_STATUS_NO_IMBALANCE_FREEZE 0
#define ENUM_FREEZE_STATUS_IMBALANCE_FREEZE 1

/*
 * Imbalance Side Values
 */ 
#define ENUM_IMBALANCE_SIDE_NO_IMBALANCE ' '
#define ENUM_IMBALANCE_SIDE_BUY_SIDE 'B'
#define ENUM_IMBALANCE_SIDE_SELL_SIDE 'S'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE 1
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_MESSAGE 3
#define ENUM_MESSAGE_TYPE_RETRANSMISSION_REQUEST_MESSAGE 10
#define ENUM_MESSAGE_TYPE_REQUEST_RESPONSE_MESSAGE 11
#define ENUM_MESSAGE_TYPE_HEARTBEAT_RESPONSE_MESSAGE 12
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_REQUEST_MESSAGE 13
#define ENUM_MESSAGE_TYPE_REFRESH_REQUEST_MESSAGE 15
#define ENUM_MESSAGE_TYPE_MESSAGE_UNAVAILABLE_MESSAGE 31
#define ENUM_MESSAGE_TYPE_SYMBOL_CLEAR_MESSAGE 32
#define ENUM_MESSAGE_TYPE_SECURITY_STATUS_MESSAGE 34
#define ENUM_MESSAGE_TYPE_REFRESH_HEADER_MESSAGE 35
#define ENUM_MESSAGE_TYPE_IMBALANCE_MESSAGE 105


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Imbalance Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint32_t ReferencePrice;
    uint32_t PairedQty;
    uint32_t TotalImbalanceQty;
    uint32_t MarketImbalanceQty;
    uint16_t AuctionTime;
    char AuctionType;
    char ImbalanceSide;
    uint32_t ContinuousBookClearingPrice;
    uint32_t ClosingOnlyClearingPrice;
    uint32_t SsrFilingPrice;
    uint32_t IndicativeMatchPrice;
    uint32_t UpperCollar;
    uint32_t LowerCollar;
    uint8_t AuctionStatus;
    uint8_t FreezeStatus;
    uint8_t NumExtensions;
} ImbalanceMessageT;

/*
 * Structure: Refresh Header Message
 */ 
typedef struct {
    uint16_t CurrentRefreshPkt;
    uint16_t TotalRefreshPkts;
    uint32_t LastSeqNum;
    uint32_t LastSymbolSeqNum;
} RefreshHeaderMessageT;

/*
 * Structure: Security Status Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    char SecurityStatus[1];
    char HaltCondition[1];
    char Reserved4[4];
    uint32_t Price1;
    uint32_t Price2;
    char SsrTriggeringExchangeId[1];
    uint32_t SsrTriggeringVolume;
    uint32_t Time;
    char SsrState[1];
    char MarketState[1];
    char SessionState[1];
} SecurityStatusMessageT;

/*
 * Structure: Symbol Clear Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t NextSourceSeqNum;
} SymbolClearMessageT;

/*
 * Structure: Message Unavailable Message
 */ 
typedef struct {
    uint32_t BeginSeqNum;
    uint32_t EndSeqNum;
    uint8_t ProductId;
    uint8_t ChannelId;
} MessageUnavailableMessageT;

/*
 * Structure: Refresh Request Message
 */ 
typedef struct {
    uint32_t SymbolIndex;
    char SourceId[10];
    uint8_t ProductId;
    uint8_t ChannelId;
} RefreshRequestMessageT;

/*
 * Structure: Symbol Index Mapping Request Message
 */ 
typedef struct {
    uint32_t SymbolIndex;
    char SourceId[10];
    uint8_t ProductId;
    uint8_t ChannelId;
    uint8_t RetransmitMethod;
} SymbolIndexMappingRequestMessageT;

/*
 * Structure: Heartbeat Response Message
 */ 
typedef struct {
    char SourceId[10];
} HeartbeatResponseMessageT;

/*
 * Structure: Request Response Message
 */ 
typedef struct {
    uint32_t RequestSeqNum;
    uint32_t BeginSeqNum;
    uint32_t EndSeqNum;
    char SourceId[10];
    uint8_t ProductId;
    uint8_t ChannelId;
    char Status[1];
} RequestResponseMessageT;

/*
 * Structure: Retransmission Request Message
 */ 
typedef struct {
    uint32_t BeginSeqNum;
    uint32_t EndSeqNum;
    char SourceId[10];
    uint8_t ProductId;
    uint8_t ChannelId;
} RetransmissionRequestMessageT;

/*
 * Structure: Symbol Index Mapping Message
 */ 
typedef struct {
    uint32_t SymbolIndex;
    char Symbol[11];
    char Reserved1[1];
    uint16_t MarketId;
    uint8_t SystemId;
    char ExchangeCode[1];
    uint8_t PriceScaleCode;
    char SecurityType[1];
    uint16_t LotSize;
    uint32_t PrevClosePrice;
    uint32_t PrevCloseVolume;
    uint8_t PriceResolution;
    char RoundLot[1];
    uint16_t Mpv;
    uint16_t UnitOfTrade;
    char Reserved2[2];
} SymbolIndexMappingMessageT;

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
   Version: 2.1.f
   Date: Thursday, February 1, 2018
   Specification: XDP_Imbalances_Feed_Client_Specification_v2.1f.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
