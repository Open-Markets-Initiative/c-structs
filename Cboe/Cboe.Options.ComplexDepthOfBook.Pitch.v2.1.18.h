/*******************************************************************************
 * C Structs For Cboe Options Pitch ComplexDepthOfBook 2.1.18 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Opening Type Values
 */ 
#define ENUM_AUCTION_OPENING_TYPE_GTH_G = 'G'
#define ENUM_AUCTION_OPENING_TYPE_RTH_O = 'O'
#define ENUM_AUCTION_OPENING_TYPE_HALT_REOPENING_H = 'H'

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_COMPLEX_AUCTION_C = 'C'
#define ENUM_AUCTION_TYPE_COMPLEX_SOLICITATION_AUCTION_S = 'S'
#define ENUM_AUCTION_TYPE_COMPLEX_AIM_B = 'B'
#define ENUM_AUCTION_TYPE_COA_ALL_OR_NONE_O = 'O'

/*
 * Customer Indicator Values
 */ 
#define ENUM_CUSTOMER_INDICATOR_NON_CUSTOMER_N = 'N'
#define ENUM_CUSTOMER_INDICATOR_CUSTOMER_C = 'C'

/*
 * Gth Trading Status Values
 */ 
#define ENUM_GTH_TRADING_STATUS_HALTED_H = 'H'
#define ENUM_GTH_TRADING_STATUS_QUOTE_ONLY_Q = 'Q'
#define ENUM_GTH_TRADING_STATUS_TRADING_T = 'T'

/*
 * Leg Security Type Values
 */ 
#define ENUM_LEG_SECURITY_TYPE_OPTION_O = 'O'
#define ENUM_LEG_SECURITY_TYPE_EQUITY_E = 'E'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE_0X20 = 0x20
#define ENUM_MESSAGE_TYPE_UNIT_CLEAR_MESSAGE_0X97 = 0x97
#define ENUM_MESSAGE_TYPE_TRANSACTION_BEGIN_0_XBC = 0xBC
#define ENUM_MESSAGE_TYPE_TRANSACTION_END_MESSAGE_0_XBD = 0xBD
#define ENUM_MESSAGE_TYPE_COMPLEX_INSTRUMENT_DEFINITION_EXPANDED_MESSAGE_0X_9A = 0x9A
#define ENUM_MESSAGE_TYPE_SYMBOL_MAPPING_MESSAGE_0X_2E = 0x2E
#define ENUM_MESSAGE_TYPE_ADD_ORDER_LONG_MESSAGE_0X21 = 0x21
#define ENUM_MESSAGE_TYPE_ADD_ORDER_SHORT_MESSAGE_0X22 = 0x22
#define ENUM_MESSAGE_TYPE_ADD_ORDER_EXPANDED_MESSAGE_0X_2F = 0x2F
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE_0X23 = 0x23
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_AT_PRICE_SIZE_MESSAGE_0X24 = 0x24
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_LONG_MESSAGE_0X25 = 0x25
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_SHORT_MESSAGE_0X26 = 0x26
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_LONG_MESSAGE_0X27 = 0x27
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_SHORT_MESSAGE_0X28 = 0x28
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE_0X29 = 0x29
#define ENUM_MESSAGE_TYPE_TRADE_LONG_MESSAGE_0X_2A = 0x2A
#define ENUM_MESSAGE_TYPE_TRADE_SHORT_MESSAGE_0X_2B = 0x2B
#define ENUM_MESSAGE_TYPE_AUCTION_NOTIFICATION_MESSAGE_0_XAD = 0xAD
#define ENUM_MESSAGE_TYPE_AUCTION_CANCEL_MESSAGE_0_XAE = 0xAE
#define ENUM_MESSAGE_TYPE_AUCTION_TRADE_MESSAGE_0_XAF = 0xAF
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE_0X31 = 0x31
#define ENUM_MESSAGE_TYPE_AUCTION_UPDATE_MESSAGE_0_XD_1 = 0xD1
#define ENUM_MESSAGE_TYPE_AUCTION_SUMMARY_MESSAGE_0X96 = 0x96
#define ENUM_MESSAGE_TYPE_END_OF_SESSION_MESSAGE_0X_2D = 0x2D

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
#define ENUM_TRADE_CONDITION_COMPLEX_TO_COMPLEX_ELECTRONIC_TRADE_F = 'F'
#define ENUM_TRADE_CONDITION_COMPLEX_AUCTION_TRADE_G = 'G'
#define ENUM_TRADE_CONDITION_COMPLEX_CROSS_H = 'H'
#define ENUM_TRADE_CONDITION_COMPLEX_ELECTRONIC_TRADE_AGAINST_SINGLE_J = 'J'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_OPTIONS_AUCTION_TRADE_K = 'K'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_ELECTRONIC_TRADE_N = 'N'
#define ENUM_TRADE_CONDITION_COMPLEX_WITH_STOCK_CROSS_O = 'O'
#define ENUM_TRADE_CONDITION_ELECTRONIC_TRADE_L = 'L'
#define ENUM_TRADE_CONDITION_OPENING_TRADE_O = 'O'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_HALTED_H = 'H'
#define ENUM_TRADING_STATUS_QUOTE_ONLY_Q = 'Q'
#define ENUM_TRADING_STATUS_TRADING_T = 'T'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Add Order Expanded Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char ComplexInstrumentId8[8];
    int64_t Price;
    char Reserved[1];
    char ParticipantId[4];
    char CustomerIndicator;
    char ClientId[4];
} AddOrderExpandedMessageT;

/*
 * Structure: Add Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char ComplexInstrumentId[6];
    int64_t Price;
    char Padding[1];
} AddOrderLongMessageT;

/*
 * Structure: Add Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t QuantityShort;
    char ComplexInstrumentId[6];
    int16_t PriceShort;
    char Padding[1];
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
    char ComplexInstrumentId[6];
    uint64_t AuctionId;
    char AuctionType;
    char SideIndicator;
    int64_t Price;
    uint32_t Quantity;
    char CustomerIndicator;
    char ParticipantId[4];
    uint32_t AuctionEndOffset;
    char ClientId[4];
} AuctionNotificationMessageT;

/*
 * Structure: Auction Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ComplexInstrumentId8[8];
    char AuctionOpeningType;
    int64_t Price;
    uint32_t Quantity;
} AuctionSummaryMessageT;

/*
 * Structure: Auction Trade Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
    uint64_t ExecutionId;
    int64_t Price;
    uint32_t Quantity;
} AuctionTradeMessageT;

/*
 * Structure: Auction Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ComplexInstrumentId8[8];
    char AuctionOpeningType;
    uint64_t ReferencePrice;
    uint32_t BuyContracts;
    uint32_t SellContracts;
    int64_t IndicativePrice;
    int64_t AuctionOnlyPrice;
    char OpeningCondition[1];
    int64_t CompositeMarketBidPrice;
    int64_t CompositeMarketOfferPrice;
} AuctionUpdateMessageT;

/*
 * Structure: Complex Instrument Definition Expanded Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ComplexInstrumentId[6];
    char ComplexInstrumentUnderlying[8];
    ComplexInstrumentTypeT ComplexInstrumentType;
    uint8_t LegCount;
} ComplexInstrumentDefinitionExpandedMessageT;

/*
 * Structure: Complex Instrument Leg
 */ 
typedef struct {
    char LegSymbol[8];
    int32_t LegRatio;
    char LegSecurityType;
} ComplexInstrumentLegT;

/*
 * Structure: Complex Instrument Type
 */ 
typedef struct {
    char ComplexAuctionType[1];
    char ComplexAuctionReservedBytes[3];
} ComplexInstrumentTypeT;

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
    uint32_t Quantity;
    int64_t Price;
    char Padding[1];
} ModifyOrderLongMessageT;

/*
 * Structure: Modify Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t QuantityShort;
    int16_t PriceShort;
    char Padding[1];
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
    int64_t Price;
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
    uint32_t CanceledQuantity;
} ReduceSizeLongMessageT;

/*
 * Structure: Reduce Size Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t CanceledQuantityShort;
} ReduceSizeShortMessageT;

/*
 * Structure: Symbol Mapping Message
 */ 
typedef struct {
    char FeedSymbol[6];
    char OsiSymbol[21];
    char SymbolCondition;
    char Underlying[8];
} SymbolMappingMessageT;

/*
 * Structure: Time Message
 */ 
typedef struct {
    uint32_t Time;
} TimeMessageT;

/*
 * Structure: Trade Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char ComplexInstrumentId[6];
    int64_t Price;
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
    uint16_t QuantityShort;
    char ComplexInstrumentId[6];
    int16_t PriceShort;
    uint64_t ExecutionId;
    char TradeCondition;
} TradeShortMessageT;

/*
 * Structure: Trading Status Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ComplexSymbolId[6];
    char Unused[2];
    char TradingStatus;
    char Reserved[1];
    char GthTradingStatus;
    char Padding[1];
} TradingStatusMessageT;

/*
 * Structure: Transaction Begin
 */ 
typedef struct {
    uint32_t TimeOffset;
} TransactionBeginT;

/*
 * Structure: Transaction End Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} TransactionEndMessageT;

/*
 * Structure: Unit Clear Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} UnitClearMessageT;

