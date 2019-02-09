/*******************************************************************************
 * C Structs For Nyse Options Xdp DeepFeed 1.3.a protocol
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
#define ENUM_EXCHANGE_CODE_NYSE_N = 'N'
#define ENUM_EXCHANGE_CODE_NYSE_ARCA_P = 'P'
#define ENUM_EXCHANGE_CODE_NASDAQ_Q = 'Q'
#define ENUM_EXCHANGE_CODE_NYSE_MKT_A = 'A'
#define ENUM_EXCHANGE_CODE_GLOBAL_OTC_1 = '1'
#define ENUM_EXCHANGE_CODE_ARCA_LOCAL_NONTAPEB_INDEX_2 = '2'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_NYSE_CASH_1 = "1"
#define ENUM_MARKET_ID_EUROPE_CASH_2 = "2"
#define ENUM_MARKET_ID_NYSE_ARCA_CASH_3 = "3"
#define ENUM_MARKET_ID_NYSE_ARCA_OPTIONS_4 = "4"
#define ENUM_MARKET_ID_NYSE_ARCA_BONDS_5 = "5"
#define ENUM_MARKET_ID_ARCA_EDGE_6 = "6"
#define ENUM_MARKET_ID_LIFFE_7 = "7"
#define ENUM_MARKET_ID_NYSE_AMERICAN_OPTIONS_8 = "8"
#define ENUM_MARKET_ID_NYSE_MKT_CASH_9 = "9"

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_OUTRIGHT_MARKET_DEPTH_BUY_MESSAGE_403 = "403"
#define ENUM_MESSAGE_TYPE_OUTRIGHT_MARKET_DEPTH_SELL_MESSAGE_405 = "405"
#define ENUM_MESSAGE_TYPE_UNDERLYING_STATUS_MESSAGE_419 = "419"
#define ENUM_MESSAGE_TYPE_OUTRIGHT_SERIES_STATUS_MESSAGE_421 = "421"
#define ENUM_MESSAGE_TYPE_REFRESH_OUTRIGHT_MARKET_DEPTH_BUY_MESSAGE_503 = "503"
#define ENUM_MESSAGE_TYPE_REFRESH_OUTRIGHT_MARKET_DEPTH_SELL_MESSAGE_505 = "505"
#define ENUM_MESSAGE_TYPE_UNDERLYING_INDEX_MAPPING_MESSAGE_435 = "435"
#define ENUM_MESSAGE_TYPE_SERIES_INDEX_MAPPING_MESSAGE_437 = "437"
#define ENUM_MESSAGE_TYPE_STREAM_ID_MESSAGE_455 = "455"
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE_1 = "1"

/*
 * Price Resolution Values
 */ 
#define ENUM_PRICE_RESOLUTION_ALL_PENNY_0 = "0"
#define ENUM_PRICE_RESOLUTION_PENNY_NICKEL_1 = "1"
#define ENUM_PRICE_RESOLUTION_NICKEL_DIME_5 = "5"

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT_0 = "0"
#define ENUM_PUT_OR_CALL_CALL_1 = "1"

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_REGULAR_TRADING_1 = '1'
#define ENUM_QUOTE_CONDITION_ROTATION_2 = '2'
#define ENUM_QUOTE_CONDITION_TRADING_HALTED_3 = '3'
#define ENUM_QUOTE_CONDITION_PREOPEN_4 = '4'
#define ENUM_QUOTE_CONDITION_ROTATION_LEGAL_WIDTH_QUOTE_PENDING_5 = '5'

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_LIGHT_UP_A_DARK_SERIES_L = 'L'
#define ENUM_SECURITY_STATUS_OPEN_A_DARK_SERIES_N = 'N'
#define ENUM_SECURITY_STATUS_OPEN_O = 'O'
#define ENUM_SECURITY_STATUS_CLOSE_X = 'X'
#define ENUM_SECURITY_STATUS_HALT_S = 'S'
#define ENUM_SECURITY_STATUS_UNHALT_U = 'U'
#define ENUM_SECURITY_STATUS_UNHALT_A_DARK_SERIES_T = 'T'
#define ENUM_SECURITY_STATUS_END_OF_RFQ_AUCTION_Q = 'Q'

/*
 * Security Type Values
 */ 
#define ENUM_SECURITY_TYPE_ADR_A = 'A'
#define ENUM_SECURITY_TYPE_COMMON_STOCK_C = 'C'
#define ENUM_SECURITY_TYPE_DEBENTURES_D = 'D'
#define ENUM_SECURITY_TYPE_ETF_E = 'E'
#define ENUM_SECURITY_TYPE_FOREIGN_F = 'F'
#define ENUM_SECURITY_TYPE_AMERICAN_DEPOSITORY_SHARES_H = 'H'
#define ENUM_SECURITY_TYPE_UNITS_I = 'I'
#define ENUM_SECURITY_TYPE_MISCLIQUID_TRUST_M = 'M'
#define ENUM_SECURITY_TYPE_ORDINARY_SHARES_O = 'O'
#define ENUM_SECURITY_TYPE_PREFERRED_STOCK_P = 'P'
#define ENUM_SECURITY_TYPE_RIGHTS_R = 'R'
#define ENUM_SECURITY_TYPE_SHARES_OF_BENEFICIARY_INTEREST_S = 'S'
#define ENUM_SECURITY_TYPE_TEST_T = 'T'
#define ENUM_SECURITY_TYPE_UNITS_U = 'U'
#define ENUM_SECURITY_TYPE_WARRANT_W = 'W'
#define ENUM_SECURITY_TYPE_INDEX_X = 'X'


/*******************************************************************************
 * Structs
 *******************************************************************************/

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
 * Structure: Sequence Number Reset Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint8_t ProductId;
    uint8_t ChannelId;
} SequenceNumberResetMessageT;

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
 * Structure: Stream Id Message
 */ 
typedef struct {
    uint16_t StreamId;
    char Reserved2[2];
} StreamIdMessageT;

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

