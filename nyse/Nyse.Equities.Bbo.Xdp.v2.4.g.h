/*******************************************************************************
 * C Structs For Nyse Equities Xdp Bbo 2.4.g Binary Model
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
#define ENUM_EXCHANGE_CODE_NYSE_AMERICAN 'A'
#define ENUM_EXCHANGE_CODE_NYSE_NATIONAL 'C'
#define ENUM_EXCHANGE_CODE_NYSE 'N'
#define ENUM_EXCHANGE_CODE_NYSE_ARCA 'P'
#define ENUM_EXCHANGE_CODE_NASDAQ 'Q'
#define ENUM_EXCHANGE_CODE_IEX 'V'
#define ENUM_EXCHANGE_CODE_BATS 'Z'
#define ENUM_EXCHANGE_CODE_GLOBAL_OTC 'B'
#define ENUM_EXCHANGE_CODE_OTCBB 'U'
#define ENUM_EXCHANGE_CODE_OTHER_OTC 'V'

/*
 * Halt Condition Values
 */ 
#define ENUM_HALT_CONDITION_SECURITY_NOT_DELAYEDHALTED '~'
#define ENUM_HALT_CONDITION_NOT_DELAYEDHALTED_NYSE_TAPE_A_ONLY ' '
#define ENUM_HALT_CONDITION_NEWS_DISSEMINATION 'D'
#define ENUM_HALT_CONDITION_ORDER_IMBALANCE 'I'
#define ENUM_HALT_CONDITION_NEWS_PENDING 'P'
#define ENUM_HALT_CONDITION_LULD_PAUSE 'M'
#define ENUM_HALT_CONDITION_RELATED_SECURITY_NOT_USED 'S'
#define ENUM_HALT_CONDITION_EQUIPMENT_CHANGEOVER 'X'
#define ENUM_HALT_CONDITION_NO_OPEN_NO_RESUME 'Z'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_1 '1'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_2 '2'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_3 '3'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_NYSE_EQUITIES 1
#define ENUM_MARKET_ID_NYSE_ARCA_EQUITIES 3
#define ENUM_MARKET_ID_NYSE_ARCA_OPTIONS 4
#define ENUM_MARKET_ID_NYSE_BONDS 5
#define ENUM_MARKET_ID_GLOBAL_OTC 6
#define ENUM_MARKET_ID_NYSE_AMEX_OPTIONS 8
#define ENUM_MARKET_ID_NYSE_AMERICAN_EQUITIES 9
#define ENUM_MARKET_ID_NYSE_NATIONAL_EQUITIES 10

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE 1
#define ENUM_MESSAGE_TYPE_SOURCE_TIME_REFERENCE_MESSAGE 2
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_MESSAGE 3
#define ENUM_MESSAGE_TYPE_RETRANSMISSION_REQUEST_MESSAGE 10
#define ENUM_MESSAGE_TYPE_REQUEST_RESPONSE_MESSAGE 11
#define ENUM_MESSAGE_TYPE_HEARTBEAT_RESPONSE_MESSAGE 12
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_REQUEST_MESSAGE 13
#define ENUM_MESSAGE_TYPE_REFRESH_REQUEST_MESSAGE 15
#define ENUM_MESSAGE_TYPE_MESSAGE_UNAVAILABLE_MESSAGE 31
#define ENUM_MESSAGE_TYPE_SYMBOL_CLEAR_MESSAGE 32
#define ENUM_MESSAGE_TYPE_TRADING_SESSION_CHANGE_MESSAGE 33
#define ENUM_MESSAGE_TYPE_SECURITY_STATUS_MESSAGE 34
#define ENUM_MESSAGE_TYPE_REFRESH_HEADER_MESSAGE 35
#define ENUM_MESSAGE_TYPE_QUOTE_MESSAGE 140

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_CLOSING 'C'
#define ENUM_QUOTE_CONDITION_OPENING_QUOTE 'O'
#define ENUM_QUOTE_CONDITION_REGULAR_QUOTE 'R'
#define ENUM_QUOTE_CONDITION_SLOW_ON_THE_BID_AND_ASK 'W'

/*
 * Retransmit Method Values
 */ 
#define ENUM_RETRANSMIT_METHOD_UDP 0

/*
 * Rpi Indicator Values
 */ 
#define ENUM_RPI_INDICATOR_NO_RETAIL_INTEREST ' '
#define ENUM_RPI_INDICATOR_RETAIL_INTEREST_ON_BID_SIDE 'A'
#define ENUM_RPI_INDICATOR_RETAIL_INTEREST_ON_OFFER_SIDE 'B'
#define ENUM_RPI_INDICATOR_RETAIL_INTEREST_ON_THE_BID_AND_OFFER_SIDE 'C'

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_OPENING_DELAY '3'
#define ENUM_SECURITY_STATUS_TRADING_HALT '4'
#define ENUM_SECURITY_STATUS_RESUME '5'
#define ENUM_SECURITY_STATUS_NO_OPENNO_RESUME '6'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_ACTIVATED_DAY_1 'A'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_CONTINUED_DAY_2 'C'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_DEACTIVATED 'D'
#define ENUM_SECURITY_STATUS_PREOPENING 'P'
#define ENUM_SECURITY_STATUS_EARLY_SESSION 'E'
#define ENUM_SECURITY_STATUS_CORE_SESSION 'O'
#define ENUM_SECURITY_STATUS_LATE_SESSION_NON_NYSE_ONLY 'L'
#define ENUM_SECURITY_STATUS_CLOSED 'X'
#define ENUM_SECURITY_STATUS_TIME 'T'
#define ENUM_SECURITY_STATUS_PRICE_INDICATION 'I'
#define ENUM_SECURITY_STATUS_PRE_OPENING_PRICE_INDICATION 'G'
#define ENUM_SECURITY_STATUS_RULE_15_INDICATION 'R'

/*
 * Security Type Values
 */ 
#define ENUM_SECURITY_TYPE_ADR 'A'
#define ENUM_SECURITY_TYPE_COMMON_STOCK 'C'
#define ENUM_SECURITY_TYPE_DEBENTURES 'D'
#define ENUM_SECURITY_TYPE_ETF 'E'
#define ENUM_SECURITY_TYPE_FOREIGN 'F'
#define ENUM_SECURITY_TYPE_US_DEPOSITARY_SHARES 'H'
#define ENUM_SECURITY_TYPE_UNITS 'I'
#define ENUM_SECURITY_TYPE_INDEX_LINKED_NOTES 'L'
#define ENUM_SECURITY_TYPE_MISCLIQUID_TRUST 'M'
#define ENUM_SECURITY_TYPE_ORDINARY_SHARES 'O'
#define ENUM_SECURITY_TYPE_PREFERRED_STOCK 'P'
#define ENUM_SECURITY_TYPE_RIGHTS 'R'
#define ENUM_SECURITY_TYPE_SHARES_OF_BENEFICIARY_INTEREST 'S'
#define ENUM_SECURITY_TYPE_TEST 'T'
#define ENUM_SECURITY_TYPE_UNITS 'U'
#define ENUM_SECURITY_TYPE_WARRANT 'W'

/*
 * Ssr Triggering Exchange Id Values
 */ 
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_AMERICAN 'A'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_BX 'B'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_NATIONAL 'C'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_FINRA 'D'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_ISE 'I'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_EDGA 'J'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_EDGX 'K'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CHX 'M'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE 'N'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_ARCA 'P'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ 'Q'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CTS 'S'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX 'T'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_IEX 'V'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CBSX 'W'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_PSX 'X'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_BATS_Y 'Y'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_BATS 'Z'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Quote Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint32_t AskPrice;
    uint32_t AskVolume;
    uint32_t BidPrice;
    uint32_t BidVolume;
    char QuoteCondition;
    char RpiIndicator;
} QuoteMessageT;

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
    char SecurityStatus;
    char HaltCondition;
    char Reserved4[4];
    uint32_t Price1;
    uint32_t Price2;
    char SsrTriggeringExchangeId;
    uint32_t SsrTriggeringVolume;
    uint32_t Time;
    char SsrState[1];
    char MarketState[1];
    char SessionState[1];
} SecurityStatusMessageT;

/*
 * Structure: Trading Session Change Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint8_t TradingSession;
} TradingSessionChangeMessageT;

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
    char ExchangeCode;
    uint8_t PriceScaleCode;
    char SecurityType;
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
 * Structure: Source Time Reference Message
 */ 
typedef struct {
    uint32_t Id;
    uint32_t SymbolSeqNum;
    uint32_t SourceTime;
} SourceTimeReferenceMessageT;

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
   Version: 2.4.g
   Date: Monday, January 29, 2018
   Specification: XDP_BBO_Client_Specification_V2.4c.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
