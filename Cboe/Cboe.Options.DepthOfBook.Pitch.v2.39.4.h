/*******************************************************************************
 * C Structs For Cboe Options Pitch DepthOfBook 2.39.4 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_OPENING_O = 'O'
#define ENUM_AUCTION_TYPE_CLOSING_C = 'C'
#define ENUM_AUCTION_TYPE_HALT_H = 'H'
#define ENUM_AUCTION_TYPE_IPO_I = 'I'
#define ENUM_AUCTION_TYPE_CLOSE_M = 'M'
#define ENUM_AUCTION_TYPE_SUM_T = 'T'
#define ENUM_AUCTION_TYPE_BAM_B = 'B'

/*
 * Customer Indicator Values
 */ 
#define ENUM_CUSTOMER_INDICATOR_NON_CUSTOMER_N = 'N'
#define ENUM_CUSTOMER_INDICATOR_CUSTOMER_C = 'C'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE_0X20 = "0x20"
#define ENUM_MESSAGE_TYPE_UNIT_CLEAR_MESSAGE_0X97 = "0x97"
#define ENUM_MESSAGE_TYPE_ADD_ORDER_LONG_MESSAGE_0X21 = "0x21"
#define ENUM_MESSAGE_TYPE_ADD_ORDER_SHORT_MESSAGE_0X22 = "0x22"
#define ENUM_MESSAGE_TYPE_ADD_ORDER_EXPANDED_MESSAGE_0X_2F = "0x2F"
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE_0X23 = "0x23"
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_AT_PRICE_SIZE_MESSAGE_0X24 = "0x24"
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_LONG_MESSAGE_0X25 = "0x25"
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_SHORT_MESSAGE_0X26 = "0x26"
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_LONG_MESSAGE_0X27 = "0x27"
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_SHORT_MESSAGE_0X28 = "0x28"
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE_0X29 = "0x29"
#define ENUM_MESSAGE_TYPE_TRADE_LONG_MESSAGE_0X_2A = "0x2A"
#define ENUM_MESSAGE_TYPE_TRADE_SHORT_MESSAGE_0X_2B = "0x2B"
#define ENUM_MESSAGE_TYPE_TRADE_EXPANDED_MESSAGE_0X30 = "0x30"
#define ENUM_MESSAGE_TYPE_TRADE_BREAK_MESSAGE_0X_2C = "0x2C"
#define ENUM_MESSAGE_TYPE_END_OF_SESSION_MESSAGE_0X_2D = "0x2D"
#define ENUM_MESSAGE_TYPE_SYMBOL_MAPPING_MESSAGE_0X_2E = "0x2E"
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE_0X31 = "0x31"
#define ENUM_MESSAGE_TYPE_AUCTION_UPDATE_MESSAGE_0X95 = "0x95"
#define ENUM_MESSAGE_TYPE_AUCTION_SUMMARY_MESSAGE_0X96 = "0x96"
#define ENUM_MESSAGE_TYPE_AUCTION_NOTIFICATION_MESSAGE_0_XAD = "0xAD"
#define ENUM_MESSAGE_TYPE_AUCTION_CANCEL_MESSAGE_0_XAE = "0xAE"
#define ENUM_MESSAGE_TYPE_AUCTION_TRADE_MESSAGE_0_XAF = "0xAF"
#define ENUM_MESSAGE_TYPE_RETAIL_PRICE_IMPROVEMENT_MESSAGE_0X98 = "0x98"

/*
 * Reg Sho Action Values
 */ 
#define ENUM_REG_SHO_ACTION_NO_PRICE_TEST_IN_EFFECT_0 = '0'
#define ENUM_REG_SHO_ACTION_REG_SHO_PRICE_TEST_RESTRICTION_IN_EFFECT_1 = '1'

/*
 * Retail Price Improvement Values
 */ 
#define ENUM_RETAIL_PRICE_IMPROVEMENT_BUY_SIDE_B = 'B'
#define ENUM_RETAIL_PRICE_IMPROVEMENT_SELL_SIDE_S = 'S'
#define ENUM_RETAIL_PRICE_IMPROVEMENT_BUY_AND_SELL_A = 'A'
#define ENUM_RETAIL_PRICE_IMPROVEMENT_NO_RPI_N = 'N'

/*
 * Side Indicator Values
 */ 
#define ENUM_SIDE_INDICATOR_BUY_ORDER_B = 'B'
#define ENUM_SIDE_INDICATOR_SELL_ORDER_S = 'S'

/*
 * Symbol Condition Values
 */ 
#define ENUM_SYMBOL_CONDITION_NORMAL_N = 'N'
#define ENUM_SYMBOL_CONDITION_CLOSING_ONLY_C = 'C'

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_NORMAL_TRADE = ''
#define ENUM_TRADE_CONDITION_SPREAD_TRADE_S = 'S'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_ACCEPTING_ORDERS_A = 'A'
#define ENUM_TRADING_STATUS_HALTED_H = 'H'
#define ENUM_TRADING_STATUS_QUOTE_ONLY_Q = 'Q'
#define ENUM_TRADING_STATUS_EXCHANGE_SPECIFIC_SUSPENSION_S = 'S'
#define ENUM_TRADING_STATUS_TRADING_T = 'T'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Add Flags
 */ 
typedef struct {
    char Reserved7[7];
    char Display[1];
} AddFlagsT;

/*
 * Structure: Add Order Expanded Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t LongQuantity;
    char ExpandedSymbol[8];
    uint64_t LongPrice;
    char AddFlags[0];
    char ParticipantId[4];
    char CustomerIndicator;
} AddOrderExpandedMessageT;

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
    AddFlagsT AddFlags;
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
    char AddFlags[0];
} AddOrderShortMessageT;

/*
 * Structure: Auction Cancel Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
} AuctionCancelMessageT;

/*
 * Structure: Auction Notification Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol[6];
    uint64_t AuctionId;
    char AuctionType;
    char SideIndicator;
    uint64_t LongPrice;
    uint32_t Contracts;
    char CustomerIndicator;
    char ParticipantId[4];
    uint32_t AuctionEndOffset;
} AuctionNotificationMessageT;

/*
 * Structure: Auction Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char StockSymbol[8];
    char AuctionType;
    uint64_t LongPrice;
    uint32_t Shares;
} AuctionSummaryMessageT;

/*
 * Structure: Auction Trade Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
    uint64_t ExecutionId;
    uint64_t LongPrice;
    uint32_t Contracts;
} AuctionTradeMessageT;

/*
 * Structure: Auction Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char StockSymbol[8];
    char AuctionType;
    uint64_t ReferencePrice;
    uint32_t BuyShares;
    uint32_t SellShares;
    uint64_t IndicativePrice;
    uint64_t AuctionOnlyPrice;
} AuctionUpdateMessageT;

/*
 * Structure: Delete Order Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
} DeleteOrderMessageT;

/*
 * Structure: End Of Session Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} EndOfSessionMessageT;

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
    uint8_t MessageLength;
    uint8_t MessageType;
} MessageHeaderT;

/*
 * Structure: Modify Flags
 */ 
typedef struct {
    char Reserved6[6];
    char MaintainPriority[1];
    char Display[1];
} ModifyFlagsT;

/*
 * Structure: Modify Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t LongQuantity;
    uint64_t LongPrice;
    ModifyFlagsT ModifyFlags;
} ModifyOrderLongMessageT;

/*
 * Structure: Modify Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t ShortQuantity;
    uint16_t ShortPrice;
    char ModifyFlags[0];
} ModifyOrderShortMessageT;

/*
 * Structure: Order Executed At Price Size Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t ExecutedQuantity;
    uint32_t RemainingQuantity;
    uint64_t ExecutionId;
    uint64_t LongPrice;
    char TradeCondition;
} OrderExecutedAtPriceSizeMessageT;

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
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

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
 * Structure: Retail Price Improvement Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ExpandedSymbol[8];
    char RetailPriceImprovement;
} RetailPriceImprovementMessageT;

/*
 * Structure: Symbol Mapping Message
 */ 
typedef struct {
    char FeedSymbol[6];
    char OsiSymbol[21];
    char SymbolCondition;
} SymbolMappingMessageT;

/*
 * Structure: Time Message
 */ 
typedef struct {
    uint32_t Time;
} TimeMessageT;

/*
 * Structure: Trade Break Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t ExecutionId;
} TradeBreakMessageT;

/*
 * Structure: Trade Expanded Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t LongQuantity;
    char ExpandedSymbol[8];
    uint64_t LongPrice;
    uint64_t ExecutionId;
    char TradeCondition;
} TradeExpandedMessageT;

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
    char ExpandedSymbol[8];
    char TradingStatus;
    char RegShoAction;
    char Reserved1[1];
    char Reserved2[1];
} TradingStatusMessageT;

/*
 * Structure: Unit Clear Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} UnitClearMessageT;

