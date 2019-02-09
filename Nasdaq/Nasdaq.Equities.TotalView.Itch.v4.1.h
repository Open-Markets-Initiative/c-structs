/*******************************************************************************
 * C Structs For Nasdaq Equities Itch TotalView 4.1 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_OPENING_O = 'O'
#define ENUM_CROSS_TYPE_CLOSING_C = 'C'
#define ENUM_CROSS_TYPE_CROSS_FOR_IPO_AND_HALTED_H = 'H'
#define ENUM_CROSS_TYPE_NASDAQ_CROSS_NETWORK_I = 'I'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES_O = 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS_S = 'S'
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS_Q = 'Q'
#define ENUM_EVENT_CODE_END_OF_MARKET_HOURS_M = 'M'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS_E = 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGE_C = 'C'
#define ENUM_EVENT_CODE_HALT_A = 'A'
#define ENUM_EVENT_CODE_QUOTE_ONLY_PERIOD_R = 'R'
#define ENUM_EVENT_CODE_RESUMPTION_B = 'B'

/*
 * Financial Status Indicator Values
 */ 
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT_D = 'D'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_E = 'E'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT_Q = 'Q'
#define ENUM_FINANCIAL_STATUS_INDICATOR_SUSPENDED_S = 'S'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_BANKRUPT_G = 'G'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_DELINQUENT_H = 'H'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT_AND_BANKRUPT_J = 'J'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_DELINQUENT_AND_BANKRUPT_K = 'K'

/*
 * Imbalance Direction Values
 */ 
#define ENUM_IMBALANCE_DIRECTION_BUY_B = 'B'
#define ENUM_IMBALANCE_DIRECTION_SELL_S = 'S'
#define ENUM_IMBALANCE_DIRECTION_NO_N = 'N'
#define ENUM_IMBALANCE_DIRECTION_INSUFFICIENT_ORDERS_O = 'O'

/*
 * Interest Flag Values
 */ 
#define ENUM_INTEREST_FLAG_RPI_BUY_B = 'B'
#define ENUM_INTEREST_FLAG_RPI_SELL_S = 'S'
#define ENUM_INTEREST_FLAG_RPI_BOTH_A = 'A'
#define ENUM_INTEREST_FLAG_NO_RPI_N = 'N'

/*
 * Market Category Values
 */ 
#define ENUM_MARKET_CATEGORY_NYSE_N = 'N'
#define ENUM_MARKET_CATEGORY_AMEX_A = 'A'
#define ENUM_MARKET_CATEGORY_ARCA_P = 'P'
#define ENUM_MARKET_CATEGORY_NASDAQ_GSM_Q = 'Q'
#define ENUM_MARKET_CATEGORY_NASDAQ_GM_G = 'G'
#define ENUM_MARKET_CATEGORY_NASDAQ_CM_G = 'G'
#define ENUM_MARKET_CATEGORY_BATS_Z = 'Z'

/*
 * Market Maker Mode Values
 */ 
#define ENUM_MARKET_MAKER_MODE_NORMAL_N = 'N'
#define ENUM_MARKET_MAKER_MODE_PASSIVE_P = 'P'
#define ENUM_MARKET_MAKER_MODE_SYNDICATE_S = 'S'
#define ENUM_MARKET_MAKER_MODE_PENALTY_L = 'L'

/*
 * Market Participant State Values
 */ 
#define ENUM_MARKET_PARTICIPANT_STATE_ACTIVE_A = 'A'
#define ENUM_MARKET_PARTICIPANT_STATE_EXCUSED_WITHDRAWN_E = 'E'
#define ENUM_MARKET_PARTICIPANT_STATE_WITHDRAWN_W = 'W'
#define ENUM_MARKET_PARTICIPANT_STATE_SUSPENDED_S = 'S'
#define ENUM_MARKET_PARTICIPANT_STATE_DELETED_D = 'D'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_STAMP_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTED_INDICATOR_MESSAGE_Y = 'Y'
#define ENUM_MESSAGE_TYPE_MARKET_PARTICIPANT_POSITION_MESSAGE_L = 'L'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE_A = 'A'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_WITH_MPID_MESSAGE_F = 'F'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE_E = 'E'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_WITH_PRICE_MESSAGE_C = 'C'
#define ENUM_MESSAGE_TYPE_ORDER_CANCEL_MESSAGE_X = 'X'
#define ENUM_MESSAGE_TYPE_ORDER_DELETE_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_ORDER_REPLACE_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_TRADE_MESSAGE_P = 'P'
#define ENUM_MESSAGE_TYPE_CROSS_TRADE_MESSAGE_Q = 'Q'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_NET_ORDER_IMBALANCE_INDICATOR_MESSAGE_I = 'I'
#define ENUM_MESSAGE_TYPE_RETAIL_PRICE_IMPROVEMENT_INDICATOR_MESSAGE_N = 'N'

/*
 * Price Variation Indicator Values
 */ 
#define ENUM_PRICE_VARIATION_INDICATOR_LESS_L = 'L'
#define ENUM_PRICE_VARIATION_INDICATOR_1_TO_1991 = '1'
#define ENUM_PRICE_VARIATION_INDICATOR_2_TO_2992 = '2'
#define ENUM_PRICE_VARIATION_INDICATOR_3_TO_3993 = '3'
#define ENUM_PRICE_VARIATION_INDICATOR_4_TO_4994 = '4'
#define ENUM_PRICE_VARIATION_INDICATOR_5_TO_5995 = '5'
#define ENUM_PRICE_VARIATION_INDICATOR_6_TO_6996 = '6'
#define ENUM_PRICE_VARIATION_INDICATOR_7_TO_7997 = '7'
#define ENUM_PRICE_VARIATION_INDICATOR_8_TO_8998 = '8'
#define ENUM_PRICE_VARIATION_INDICATOR_9_TO_9999 = '9'
#define ENUM_PRICE_VARIATION_INDICATOR_10_TO_1999A = 'A'
#define ENUM_PRICE_VARIATION_INDICATOR_20_TO_2999B = 'B'
#define ENUM_PRICE_VARIATION_INDICATOR_30_OR_GREATER_C = 'C'
#define ENUM_PRICE_VARIATION_INDICATOR_NO_CALCULATION = ' '

/*
 * Primary Market Maker Values
 */ 
#define ENUM_PRIMARY_MARKET_MAKER_PRIMARY_Y = 'Y'
#define ENUM_PRIMARY_MARKET_MAKER_NONPRIMARY_N = 'N'

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_NONPRINTABLE_N = 'N'
#define ENUM_PRINTABLE_PRINTABLE_Y = 'Y'

/*
 * Reg Sho Action Values
 */ 
#define ENUM_REG_SHO_ACTION_NO_PRICE_0 = '0'
#define ENUM_REG_SHO_ACTION_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTION_1 = '1'
#define ENUM_REG_SHO_ACTION_REG_SHO_SHORT_SALE_PRICE_TEST_2 = '2'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY_B = 'B'
#define ENUM_SIDE_SELL_S = 'S'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Add Order Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    char Side;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
} AddOrderMessageT;

/*
 * Structure: Add Order With Mpid Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    char Side;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
    char Attribution[4];
} AddOrderWithMpidMessageT;

/*
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t MatchNumber;
} BrokenTradeMessageT;

/*
 * Structure: Cross Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t CrossShares;
    char Stock[8];
    uint32_t CrossPrice;
    uint64_t MatchNumber;
    char CrossType;
} CrossTradeMessageT;

/*
 * Structure: Market Participant Position Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char Mpid[4];
    char Stock[8];
    char PrimaryMarketMaker;
    char MarketMakerMode;
    char MarketParticipantState;
} MarketParticipantPositionMessageT;

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
    uint16_t Length;
    char MessageType;
} MessageHeaderT;

/*
 * Structure: Net Order Imbalance Indicator Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t PairedShares;
    uint64_t ImbalanceShares;
    char ImbalanceDirection;
    char Stock[8];
    uint32_t FarPrice;
    uint32_t NearPrice;
    uint32_t CurrentReferencePrice;
    char CrossType;
    char PriceVariationIndicator;
} NetOrderImbalanceIndicatorMessageT;

/*
 * Structure: Order Cancel Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t CanceledShares;
} OrderCancelMessageT;

/*
 * Structure: Order Delete Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
} OrderDeleteMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t ExecutedShares;
    uint64_t MatchNumber;
} OrderExecutedMessageT;

/*
 * Structure: Order Executed With Price Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t ExecutedShares;
    uint64_t MatchNumber;
    char Printable;
    uint32_t ExecutionPrice;
} OrderExecutedWithPriceMessageT;

/*
 * Structure: Order Replace Message
 */ 
typedef struct {
    uint32_t TimestampNanoseconds;
    uint64_t OriginalOrderReferenceNumber;
    uint64_t NewOrderReferenceNumber;
    uint32_t Shares;
    uint32_t Price;
} OrderReplaceMessageT;

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
    char Session[10];
    uint64_t Sequence;
    uint16_t Count;
} PacketHeaderT;

/*
 * Structure: Reg Sho Short Sale Price Test Restricted Indicator Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char Stock[8];
    char RegShoAction;
} RegShoShortSalePriceTestRestrictedIndicatorMessageT;

/*
 * Structure: Retail Price Improvement Indicator Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char Stock[8];
    char InterestFlag;
} RetailPriceImprovementIndicatorMessageT;

/*
 * Structure: Stock Directory Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char Stock[8];
    char MarketCategory;
    char FinancialStatusIndicator;
} StockDirectoryMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char EventCode;
} SystemEventMessageT;

/*
 * Structure: Time Stamp Message
 */ 
typedef struct {
    uint32_t Second;
} TimeStampMessageT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t OrderReferenceNumber;
    char Side;
    uint32_t Shares;
    char Stock[8];
    uint32_t Price;
    uint64_t MatchNumber;
} TradeMessageT;

