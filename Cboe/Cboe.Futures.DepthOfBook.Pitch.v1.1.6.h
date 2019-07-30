/*******************************************************************************
 * C Structs For Cboe Futures Pitch DepthOfBook 1.1.6 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Futures Flags Values
 */ 
#define ENUM_FUTURES_FLAGS_STANDARD_0 = 0
#define ENUM_FUTURES_FLAGS_VARIANCE_1 = 1

/*
 * Issue Values
 */ 
#define ENUM_ISSUE_INITIAL_SETTLEMENT_S = 'S'
#define ENUM_ISSUE_REISSUED_SETTLEMENT_R = 'R'

/*
 * Listing State Values
 */ 
#define ENUM_LISTING_STATE_ACTIVE_A = 'A'
#define ENUM_LISTING_STATE_INACTIVE_I = 'I'
#define ENUM_LISTING_STATE_TEST_T = 'T'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE_0X20 = 0x20
#define ENUM_MESSAGE_TYPE_UNIT_CLEAR_MESSAGE_0X97 = 0x97
#define ENUM_MESSAGE_TYPE_TIME_REFERENCE_MESSAGE_0_XB_1 = 0xB1
#define ENUM_MESSAGE_TYPE_FUTURES_INSTRUMENT_DEFINITION_MESSAGE_0_XBB = 0xBB
#define ENUM_MESSAGE_TYPE_ADD_ORDER_LONG_MESSAGE_0X21 = 0x21
#define ENUM_MESSAGE_TYPE_ADD_ORDER_SHORT_MESSAGE_0X22 = 0x22
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE_0X23 = 0x23
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_LONG_MESSAGE_0X25 = 0x25
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_SHORT_MESSAGE_0X26 = 0x26
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_LONG_MESSAGE_0X27 = 0x27
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_SHORT_MESSAGE_0X28 = 0x28
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE_0X29 = 0x29
#define ENUM_MESSAGE_TYPE_TRADE_LONG_MESSAGE_0X_2A = 0x2A
#define ENUM_MESSAGE_TYPE_TRADE_SHORT_MESSAGE_0X_2B = 0x2B
#define ENUM_MESSAGE_TYPE_TRANSACTION_BEGIN_0_XBC = 0xBC
#define ENUM_MESSAGE_TYPE_TRANSACTION_END_0_XBD = 0xBD
#define ENUM_MESSAGE_TYPE_TRADE_BREAK_MESSAGE_0X_2C = 0x2C
#define ENUM_MESSAGE_TYPE_SETTLEMENT_MESSAGE_0_XB_9 = 0xB9
#define ENUM_MESSAGE_TYPE_END_OF_DAY_SUMMARY_MESSAGE_0_XBA = 0xBA
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE_0X31 = 0x31
#define ENUM_MESSAGE_TYPE_END_OF_SESSION_MESSAGE_0X_2D = 0x2D

/*
 * Side Indicator Values
 */ 
#define ENUM_SIDE_INDICATOR_BUY_ORDER_B = 'B'
#define ENUM_SIDE_INDICATOR_SELL_ORDER_S = 'S'

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_NORMAL_TRADE = ''
#define ENUM_TRADE_CONDITION_OPENING_TRADE_O = 'O'
#define ENUM_TRADE_CONDITION_SPREAD_TRADE_S = 'S'
#define ENUM_TRADE_CONDITION_BLOCK_TRADE_B = 'B'
#define ENUM_TRADE_CONDITION_ECRP_TRADE_E = 'E'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_HALTED_H = 'H'
#define ENUM_TRADING_STATUS_QUOTE_ONLY_Q = 'Q'
#define ENUM_TRADING_STATUS_EXCHANGE_SPECIFIC_SUSPENSION_S = 'S'
#define ENUM_TRADING_STATUS_TRADING_T = 'T'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Add Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t LongQuantity;
    char Symbol[6];
    uint64_t LongPrice;
} AddOrderLongMessageT;

/*
 * Structure: Add Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t ShortQuantity;
    char Symbol[6];
    uint16_t ShortPrice;
} AddOrderShortMessageT;

/*
 * Structure: Delete Order Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
} DeleteOrderMessageT;

/*
 * Structure: End Of Day Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol[6];
    uint32_t TradeDate;
    uint32_t OpenInterest;
    uint64_t HighPrice;
    uint64_t LowPrice;
    uint64_t OpenPrice;
    uint64_t ClosePrice;
    uint32_t TotalVolume;
    uint32_t BlockVolume;
    uint32_t EcrpVolume;
    SummaryFlagsT SummaryFlags;
} EndOfDaySummaryMessageT;

/*
 * Structure: End Of Session Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} EndOfSessionMessageT;

/*
 * Structure: Future Leg
 */ 
typedef struct {
    int32_t LegRatio;
    char LegSymbol[6];
} FutureLegT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint8_t MessageLength;
    uint8_t MessageType;
} MessageHeaderT;

/*
 * Structure: Modify Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t LongQuantity;
    uint64_t LongPrice;
} ModifyOrderLongMessageT;

/*
 * Structure: Modify Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t ShortQuantity;
    uint16_t ShortPrice;
} ModifyOrderShortMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t ExecutedQuantity;
    uint64_t ExecutionId;
    char TradeCondition;
} OrderExecutedMessageT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint16_t Length;
    uint8_t Count;
    uint8_t Unit;
    uint32_t Sequence;
} PacketHeaderT;

/*
 * Structure: Reduce Size Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t CanceledLongQuantity;
} ReduceSizeLongMessageT;

/*
 * Structure: Reduce Size Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t CanceledShortQuantity;
} ReduceSizeShortMessageT;

/*
 * Structure: Settlement Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol[6];
    uint32_t TradeDate;
    uint64_t SettlementPrice;
    char Issue;
} SettlementMessageT;

/*
 * Structure: Standard
 */ 
typedef struct {
} StandardT;

/*
 * Structure: Summary Flags
 */ 
typedef struct {
    char ReservedFlags[7];
    char OfferCloseValid[1];
    char LowPriceIsOffer[1];
    char LowPriceValid[1];
    char HighPriceIsBid[1];
    char HighPriceValid[1];
} SummaryFlagsT;

/*
 * Structure: Time Message
 */ 
typedef struct {
    uint32_t Time;
    uint32_t Epoch;
} TimeMessageT;

/*
 * Structure: Time Reference Message
 */ 
typedef struct {
    uint32_t MidnightReference;
    uint32_t Time;
    uint32_t TimeOffset;
    uint32_t TradeDate;
} TimeReferenceMessageT;

/*
 * Structure: Trade Break Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t ExecutionId;
} TradeBreakMessageT;

/*
 * Structure: Trade Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t LongQuantity;
    char Symbol[6];
    uint64_t LongPrice;
    uint64_t ExecutionId;
    char TradeCondition;
} TradeLongMessageT;

/*
 * Structure: Trade Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t ShortQuantity;
    char Symbol[6];
    uint16_t ShortPrice;
    uint64_t ExecutionId;
    char TradeCondition;
} TradeShortMessageT;

/*
 * Structure: Trading Status Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol[6];
    char Reserved2[2];
    char TradingStatus;
    char Reserved3[3];
} TradingStatusMessageT;

/*
 * Structure: Transaction Begin
 */ 
typedef struct {
    uint32_t TimeOffset;
} TransactionBeginT;

/*
 * Structure: Transaction End
 */ 
typedef struct {
    uint32_t TimeOffset;
} TransactionEndT;

/*
 * Structure: Unit Clear Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} UnitClearMessageT;

/*
 * Structure: Variance
 */ 
typedef struct {
    int64_t RealizedVariance;
    uint16_t NumExpectedPrices;
    uint16_t NumElapsedReturns;
    uint64_t PreviousSettlement;
    int64_t DiscountFactor;
    uint64_t InitialStrike;
    int64_t PreviousArmvm;
    int64_t FedFundsRate;
} VarianceT;

