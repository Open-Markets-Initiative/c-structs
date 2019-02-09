/*******************************************************************************
 * C Structs For Nyse Options Xdp ComplexFeed 1.3.a protocol
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
 * Leg Security Type Values
 */ 
#define ENUM_LEG_SECURITY_TYPE_OPTIONS_SERIES_LEG_O = 'O'
#define ENUM_LEG_SECURITY_TYPE_EQUITY_STOCK_LEG_E = 'E'

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
#define ENUM_MESSAGE_TYPE_COMPLEX_QUOTE_MESSAGE_423 = "423"
#define ENUM_MESSAGE_TYPE_COMPLEX_TRADE_MESSAGE_425 = "425"
#define ENUM_MESSAGE_TYPE_COMPLEX_CROSSING_RFQ_MESSAGE_429 = "429"
#define ENUM_MESSAGE_TYPE_COMPLEX_CUBE_RFQ_MESSAGE_472 = "472"
#define ENUM_MESSAGE_TYPE_COMPLEX_STATUS_MESSAGE_433 = "433"
#define ENUM_MESSAGE_TYPE_REFRESH_COMPLEX_QUOTE_MESSAGE_511 = "511"
#define ENUM_MESSAGE_TYPE_REFRESH_COMPLEX_TRADE_MESSAGE_513 = "513"
#define ENUM_MESSAGE_TYPE_COMPLEX_SYMBOL_DEFINITION_MESSAGE_439 = "439"
#define ENUM_MESSAGE_TYPE_STREAM_ID_MESSAGE_455 = "455"
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE_1 = "1"

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
 * Side Values
 */ 
#define ENUM_SIDE_BUY_B = 'B'
#define ENUM_SIDE_SELL_S = 'S'

/*
 * Trade Cond 1 Values
 */ 
#define ENUM_TRADE_COND_1_REGULAR_TRADE = ' '
#define ENUM_TRADE_COND_1_LATE_REPORT_I = 'I'
#define ENUM_TRADE_COND_1_FLOOR_TRADE_R = 'R'
#define ENUM_TRADE_COND_1_SO_SWEEP_TRADE_S = 'S'

/*
 * Trade Cond 2 Values
 */ 
#define ENUM_TRADE_COND_2_COMPLEX_TRADE_WITH_EQUITY_P = 'P'
#define ENUM_TRADE_COND_2_COMPLEX_TRADE_L = 'L'


/*******************************************************************************
 * Structs
 *******************************************************************************/

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
    LegDefinitionT LegDefinition;
} ComplexSymbolDefinitionMessageT;

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
 * Structure: Leg Definition
 */ 
typedef struct {
    uint32_t SymbolIndex;
    uint16_t LegRatioQty;
    char Side;
    char LegSecurityType;
} LegDefinitionT;

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

