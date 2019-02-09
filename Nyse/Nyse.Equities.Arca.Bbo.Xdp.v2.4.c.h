/*******************************************************************************
 * C Structs For Nyse Equities Arca Xdp Bbo 2.4.c protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Delivery Flag Values
 */ 
#define ENUM_DELIVERY_FLAG_HEARTBEAT_1 = "1"
#define ENUM_DELIVERY_FLAG_XDP_FAILOVER_10 = "10"
#define ENUM_DELIVERY_FLAG_ORIGINAL_MESSAGE_11 = "11"
#define ENUM_DELIVERY_FLAG_SEQUENCE_NUMBER_RESET_MESSAGE_12 = "12"
#define ENUM_DELIVERY_FLAG_ONE_RETRANSMISSION_PACKET_13 = "13"
#define ENUM_DELIVERY_FLAG_RETRANSMISSION_SEQUENCE_MESSAGE_15 = "15"
#define ENUM_DELIVERY_FLAG_ONE_REFRESH_PACKET_17 = "17"
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_START_18 = "18"
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_MESSAGE_19 = "19"
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_END_20 = "20"
#define ENUM_DELIVERY_FLAG_MESSAGE_UNAVAILABLE_21 = "21"

/*
 * Exchange Code Values
 */ 
#define ENUM_EXCHANGE_CODE_NYSE_AMERICAN_A = 'A'
#define ENUM_EXCHANGE_CODE_NYSE_NATIONAL_C = 'C'
#define ENUM_EXCHANGE_CODE_NYSE_N = 'N'
#define ENUM_EXCHANGE_CODE_NYSE_ARCA_P = 'P'
#define ENUM_EXCHANGE_CODE_NASDAQ_Q = 'Q'
#define ENUM_EXCHANGE_CODE_IEX_V = 'V'
#define ENUM_EXCHANGE_CODE_BATS_Z = 'Z'
#define ENUM_EXCHANGE_CODE_GLOBAL_OTC_B = 'B'
#define ENUM_EXCHANGE_CODE_OTCBB_U = 'U'
#define ENUM_EXCHANGE_CODE_OTHER_OTC_V = 'V'

/*
 * Halt Condition Values
 */ 
#define ENUM_HALT_CONDITION_SECURITY_NOT_DELAYEDHALTED_~ = '~'
#define ENUM_HALT_CONDITION_NOT_DELAYEDHALTED_NYSE_TAPE_A_ONLY = ' '
#define ENUM_HALT_CONDITION_NEWS_DISSEMINATION_D = 'D'
#define ENUM_HALT_CONDITION_ORDER_IMBALANCE_I = 'I'
#define ENUM_HALT_CONDITION_NEWS_PENDING_P = 'P'
#define ENUM_HALT_CONDITION_LULD_PAUSE_M = 'M'
#define ENUM_HALT_CONDITION_RELATED_SECURITY_NOT_USED_S = 'S'
#define ENUM_HALT_CONDITION_EQUIPMENT_CHANGEOVER_X = 'X'
#define ENUM_HALT_CONDITION_NO_OPEN_NO_RESUME_Z = 'Z'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_11 = '1'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_22 = '2'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_33 = '3'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_NYSE_EQUITIES_1 = "1"
#define ENUM_MARKET_ID_NYSE_ARCA_EQUITIES_3 = "3"
#define ENUM_MARKET_ID_NYSE_ARCA_OPTIONS_4 = "4"
#define ENUM_MARKET_ID_NYSE_BONDS_5 = "5"
#define ENUM_MARKET_ID_GLOBAL_OTC_6 = "6"
#define ENUM_MARKET_ID_NYSE_AMEX_OPTIONS_8 = "8"
#define ENUM_MARKET_ID_NYSE_AMERICAN_EQUITIES_9 = "9"
#define ENUM_MARKET_ID_NYSE_NATIONAL_OPTIONS_10 = "10"

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE_1 = "1"
#define ENUM_MESSAGE_TYPE_SOURCE_TIME_REFERENCE_MESSAGE_2 = "2"
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_MESSAGE_3 = "3"
#define ENUM_MESSAGE_TYPE_RETRANSMISSION_REQUEST_MESSAGE_10 = "10"
#define ENUM_MESSAGE_TYPE_REQUEST_RESPONSE_MESSAGE_11 = "11"
#define ENUM_MESSAGE_TYPE_HEARTBEAT_RESPONSE_MESSAGE_12 = "12"
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_REQUEST_MESSAGE_13 = "13"
#define ENUM_MESSAGE_TYPE_REFRESH_REQUEST_MESSAGE_15 = "15"
#define ENUM_MESSAGE_TYPE_MESSAGE_UNAVAILABLE_MESSAGE_31 = "31"
#define ENUM_MESSAGE_TYPE_SYMBOL_CLEAR_MESSAGE_32 = "32"
#define ENUM_MESSAGE_TYPE_TRADING_SESSION_CHANGE_MESSAGE_33 = "33"
#define ENUM_MESSAGE_TYPE_SECURITY_STATUS_MESSAGE_34 = "34"
#define ENUM_MESSAGE_TYPE_REFRESH_HEADER_MESSAGE_35 = "35"
#define ENUM_MESSAGE_TYPE_QUOTE_MESSAGE_140 = "140"

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_CLOSING_C = 'C'
#define ENUM_QUOTE_CONDITION_OPENING_QUOTE_O = 'O'
#define ENUM_QUOTE_CONDITION_REGULAR_QUOTE_R = 'R'
#define ENUM_QUOTE_CONDITION_SLOW_ON_THE_BID_AND_ASK_W = 'W'

/*
 * Retransmit Method Values
 */ 
#define ENUM_RETRANSMIT_METHOD_UDP_0 = "0"

/*
 * Rpi Indicator Values
 */ 
#define ENUM_RPI_INDICATOR_NO_RETAIL_INTEREST = ' '
#define ENUM_RPI_INDICATOR_RETAIL_INTEREST_ON_BID_SIDE_A = 'A'
#define ENUM_RPI_INDICATOR_RETAIL_INTEREST_ON_OFFER_SIDE_B = 'B'
#define ENUM_RPI_INDICATOR_RETAIL_INTEREST_ON_THE_BID_AND_OFFER_SIDE_C = 'C'

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_OPENING_DELAY_3 = '3'
#define ENUM_SECURITY_STATUS_TRADING_HALT_4 = '4'
#define ENUM_SECURITY_STATUS_RESUME_5 = '5'
#define ENUM_SECURITY_STATUS_NO_OPENNO_RESUME_6 = '6'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_ACTIVATED_DAY_1A = 'A'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_CONTINUED_DAY_2C = 'C'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_DEACTIVATED_D = 'D'
#define ENUM_SECURITY_STATUS_PREOPENING_P = 'P'
#define ENUM_SECURITY_STATUS_EARLY_SESSION_E = 'E'
#define ENUM_SECURITY_STATUS_CORE_SESSION_O = 'O'
#define ENUM_SECURITY_STATUS_LATE_SESSION_NON_NYSE_ONLY_L = 'L'
#define ENUM_SECURITY_STATUS_CLOSED_X = 'X'
#define ENUM_SECURITY_STATUS_TIME_T = 'T'
#define ENUM_SECURITY_STATUS_PRICE_INDICATION_I = 'I'
#define ENUM_SECURITY_STATUS_PRE_OPENING_PRICE_INDICATION_G = 'G'
#define ENUM_SECURITY_STATUS_RULE_15_INDICATION_R = 'R'

/*
 * Security Type Values
 */ 
#define ENUM_SECURITY_TYPE_ADR_A = 'A'
#define ENUM_SECURITY_TYPE_COMMON_STOCK_C = 'C'
#define ENUM_SECURITY_TYPE_DEBENTURES_D = 'D'
#define ENUM_SECURITY_TYPE_ETF_E = 'E'
#define ENUM_SECURITY_TYPE_FOREIGN_F = 'F'
#define ENUM_SECURITY_TYPE_US_DEPOSITARY_SHARES_H = 'H'
#define ENUM_SECURITY_TYPE_UNITS_I = 'I'
#define ENUM_SECURITY_TYPE_INDEX_LINKED_NOTES_L = 'L'
#define ENUM_SECURITY_TYPE_MISCLIQUID_TRUST_M = 'M'
#define ENUM_SECURITY_TYPE_ORDINARY_SHARES_O = 'O'
#define ENUM_SECURITY_TYPE_PREFERRED_STOCK_P = 'P'
#define ENUM_SECURITY_TYPE_RIGHTS_R = 'R'
#define ENUM_SECURITY_TYPE_SHARES_OF_BENEFICIARY_INTEREST_S = 'S'
#define ENUM_SECURITY_TYPE_TEST_T = 'T'
#define ENUM_SECURITY_TYPE_UNITS_U = 'U'
#define ENUM_SECURITY_TYPE_WARRANT_W = 'W'

/*
 * Ssr Triggering Exchange Id Values
 */ 
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_AMERICAN_A = 'A'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_BX_B = 'B'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_NATIONAL_C = 'C'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_FINRA_D = 'D'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_ISE_I = 'I'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_EDGA_J = 'J'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_EDGX_K = 'K'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CHX_M = 'M'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_N = 'N'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_ARCA_P = 'P'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_Q = 'Q'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CTS_S = 'S'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_T = 'T'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_IEX_V = 'V'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CBSX_W = 'W'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_PSX_X = 'X'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_BATS_YY = 'Y'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_BATS_Z = 'Z'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Heartbeat Response Message
 */ 
typedef struct {
    char SourceId[10];
} HeartbeatResponseMessageT;

/*
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageSize;
    uint16_t MessageType;
} MessageHeaderT;

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
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

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
    char Reserved4[4];
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
 * Structure: Refresh Request Message
 */ 
typedef struct {
    uint32_t SymbolIndex;
    char SourceId[10];
    uint8_t ProductId;
    uint8_t ChannelId;
} RefreshRequestMessageT;

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
 * Structure: Sequence Number Reset Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint8_t ProductId;
    uint8_t ChannelId;
} SequenceNumberResetMessageT;

/*
 * Structure: Source Time Reference Message
 */ 
typedef struct {
    uint32_t Id;
    uint32_t SymbolSeqNum;
    uint32_t SourceTime;
} SourceTimeReferenceMessageT;

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
 * Structure: Trading Session Change Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint8_t TradingSession;
} TradingSessionChangeMessageT;

