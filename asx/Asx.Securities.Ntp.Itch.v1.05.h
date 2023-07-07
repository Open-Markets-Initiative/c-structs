/*******************************************************************************
 * C Structs For Asx Securities Itch Ntp 1.05 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Buyer Side Values
 */ 
#define ENUM_BUYER_SIDE_SELL 'S'
#define ENUM_BUYER_SIDE_BUY 'B'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_BUSINESS_TRADE_DATE_HAS_ENDED 'C'

/*
 * Expiry Month Values
 */ 
#define ENUM_EXPIRY_MONTH_JAN 1
#define ENUM_EXPIRY_MONTH_FEB 2
#define ENUM_EXPIRY_MONTH_MAR 3
#define ENUM_EXPIRY_MONTH_APR 4
#define ENUM_EXPIRY_MONTH_MAY 5
#define ENUM_EXPIRY_MONTH_JUN 6
#define ENUM_EXPIRY_MONTH_JUL 7
#define ENUM_EXPIRY_MONTH_AUG 8
#define ENUM_EXPIRY_MONTH_SEP 9
#define ENUM_EXPIRY_MONTH_OCT 10
#define ENUM_EXPIRY_MONTH_NOV 11
#define ENUM_EXPIRY_MONTH_DEC 12

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SECONDS_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_END_OF_BUSINESS_TRADE_DATE_MESSAGE 'S'
#define ENUM_MESSAGE_TYPE_FUTURE_SYMBOL_DIRECTORY_MESSAGE 'f'
#define ENUM_MESSAGE_TYPE_OPTIONS_SYMBOL_DIRECTORY_MESSAGE 'h'
#define ENUM_MESSAGE_TYPE_COMBINATION_SYMBOL_DIRECTORY_MESSAGE 'M'
#define ENUM_MESSAGE_TYPE_BUNDLES_SYMBOL_DIRECTORY 'm'
#define ENUM_MESSAGE_TYPE_ORDER_BOOK_STATE_MESSAGE 'O'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE 'A'
#define ENUM_MESSAGE_TYPE_ORDER_VOLUME_CANCELLED_MESSAGE 'X'
#define ENUM_MESSAGE_TYPE_ORDER_DELETED_MESSAGE 'D'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 'E'
#define ENUM_MESSAGE_TYPE_AUCTION_ORDER_EXECUTED_MESSAGE 'C'
#define ENUM_MESSAGE_TYPE_COMBINATION_ORDER_EXECUTED_MESSAGE 'e'
#define ENUM_MESSAGE_TYPE_IMPLIED_ORDER_ADDED_MESSAGE 'j'
#define ENUM_MESSAGE_TYPE_IMPLIED_ORDER_REPLACED_MESSAGE 'l'
#define ENUM_MESSAGE_TYPE_IMPLIED_ORDER_DELETED_MESSAGE 'k'
#define ENUM_MESSAGE_TYPE_TRADE_EXECUTED_MESSAGE 'P'
#define ENUM_MESSAGE_TYPE_COMBINATION_TRADE_EXECUTED_MESSAGE 'p'
#define ENUM_MESSAGE_TYPE_TRADE_CANCELLATION_MESSAGE 'B'
#define ENUM_MESSAGE_TYPE_EQUILIBRIUM_PRICE_MESSAGE 'Z'
#define ENUM_MESSAGE_TYPE_OPEN_HIGH_LOW_LAST_TRADE_ADJUSTMENT_MESSAGE 't'
#define ENUM_MESSAGE_TYPE_MARKET_SETTLEMENT_MESSAGE 'Y'
#define ENUM_MESSAGE_TYPE_TEXT_MESSAGE 'x'
#define ENUM_MESSAGE_TYPE_REQUEST_FOR_QUOTE_MESSAGE 'q'
#define ENUM_MESSAGE_TYPE_ANOMALOUS_ORDER_THRESHOLD_PUBLISH_MESSAGE 'W'
#define ENUM_MESSAGE_TYPE_VOLUME_AND_OPEN_INTEREST_MESSAGE 'V'

/*
 * Opposite Side Values
 */ 
#define ENUM_OPPOSITE_SIDE_SELL 'S'
#define ENUM_OPPOSITE_SIDE_BUY 'B'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_PUT 'P'
#define ENUM_OPTION_TYPE_CALL 'C'

/*
 * Price Method Values
 */ 
#define ENUM_PRICE_METHOD_NET_PRICE 0
#define ENUM_PRICE_METHOD_YIELD_DIFFERENCE 2
#define ENUM_PRICE_METHOD_INDIVIDUAL 3
#define ENUM_PRICE_METHOD_AVERAGE_PRICE 4

/*
 * Rfq Side Values
 */ 
#define ENUM_RFQ_SIDE_TWO_SIDED_QUOTE 'T'
#define ENUM_RFQ_SIDE_BID_QUOTE 'B'
#define ENUM_RFQ_SIDE_ASK_QUOTE 'S'
#define ENUM_RFQ_SIDE_CROSSING 'X'

/*
 * Seller Side Values
 */ 
#define ENUM_SELLER_SIDE_SELL 'S'
#define ENUM_SELLER_SIDE_BUY 'B'

/*
 * Session State Values
 */ 
#define ENUM_SESSION_STATE_PRE_OPEN 'P'
#define ENUM_SESSION_STATE_OPENED 'O'
#define ENUM_SESSION_STATE_REGULATORY_HALT 'R'
#define ENUM_SESSION_STATE_HALTED 'H'
#define ENUM_SESSION_STATE_CLOSED 'C'
#define ENUM_SESSION_STATE_MAINTENANCE 'M'

/*
 * Side Values
 */ 
#define ENUM_SIDE_SELL 'S'
#define ENUM_SIDE_BUY 'B'

/*
 * Side Leg Values
 */ 
#define ENUM_SIDE_LEG_NOT_DEFINED ' '
#define ENUM_SIDE_LEG_BUY 'B'
#define ENUM_SIDE_LEG_SELL 'S'

/*
 * Trade Type Values
 */ 
#define ENUM_TRADE_TYPE_NORMAL_TRADE 'T'
#define ENUM_TRADE_TYPE_NORMAL_CROSS 't'
#define ENUM_TRADE_TYPE_AUCTION_TRADE 'L'
#define ENUM_TRADE_TYPE_AUCTION_CROSS 'l'
#define ENUM_TRADE_TYPE_COMBINATION_TO_UNDERLYING_TRADE 'S'
#define ENUM_TRADE_TYPE_COMBINATION_TO_UNDERLYING_CROSS 's'
#define ENUM_TRADE_TYPE_COMBINATION_TO_COMBINATION_TRADE 'R'
#define ENUM_TRADE_TYPE_COMBINATION_TO_COMBINATION_CROSS 'r'
#define ENUM_TRADE_TYPE_STRIP_TO_STRIP_TRADE 'A'
#define ENUM_TRADE_TYPE_STRIP_TO_STRIP_CROSS 'a'
#define ENUM_TRADE_TYPE_STRIP_TO_OUTRIGHT_TRADE 'B'
#define ENUM_TRADE_TYPE_STRIP_TO_OUTRIGHT_CROSS 'b'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Volume And Open Interest Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    uint64_t CumulativeVolume;
    uint64_t OpenInterest;
    uint16_t VoiTradeDate;
} VolumeAndOpenInterestMessageT;

/*
 * Structure: Anomalous Order Threshold Publish Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    int64_t AotPrice;
    int64_t AotUpperPrice;
    int64_t AotLowerPrice;
    int64_t EtrPrice;
    int64_t EtrUpperPrice;
    int64_t EtrLowerPrice;
} AnomalousOrderThresholdPublishMessageT;

/*
 * Structure: Request For Quote Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char RfqSide;
    uint32_t Quantity;
} RequestForQuoteMessageT;

/*
 * Structure: Text Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    char SourceId[6];
    char Text[100];
} TextMessageT;

/*
 * Structure: Market Settlement Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    int64_t OpeningTrade;
    int64_t HighestTrade;
    int64_t LowestTrade;
    int64_t LastTrade;
    uint32_t LastVolume;
    uint64_t TotalTradedVolume;
} MarketSettlementMessageT;

/*
 * Structure: Open High Low Last Trade Adjustment Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    int64_t OpeningTrade;
    int64_t HighestTrade;
    int64_t LowestTrade;
    int64_t LastTrade;
    uint32_t LastVolume;
    uint64_t TotalTradedVolume;
} OpenHighLowLastTradeAdjustmentMessageT;

/*
 * Structure: Equilibrium Price Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    int64_t EquilibriumPrice;
    uint64_t MatchedQuantity;
    uint64_t BidQuantity;
    uint64_t AskQuantity;
} EquilibriumPriceMessageT;

/*
 * Structure: Trade Cancellation Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    uint64_t TradeId;
} TradeCancellationMessageT;

/*
 * Structure: Combination Trade Executed Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char TradeType;
    uint64_t TradeId;
    uint32_t ExecutedQuantity;
    int64_t TradePrice;
    uint32_t BuyerTradeableInstrumentId;
    char BuyerSide;
    uint64_t BuyerOrderId;
    uint64_t BuyerCombinationTradeId;
    char BuyerParticipantId[3];
    uint32_t SellerTradeableInstrumentId;
    char SellerSide;
    uint64_t SellerOrderId;
    uint64_t SellerCombinationTradeId;
    char SellerParticipantId[3];
} CombinationTradeExecutedMessageT;

/*
 * Structure: Trade Executed Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char TradeType;
    uint64_t TradeId;
    uint32_t ExecutedQuantity;
    int64_t TradePrice;
    uint64_t CombinationTradeId;
    char ParticipantIdBuyer[3];
    char ParticipantIdSeller[3];
} TradeExecutedMessageT;

/*
 * Structure: Implied Order Deleted Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char Side;
    uint64_t OrderId;
} ImpliedOrderDeletedMessageT;

/*
 * Structure: Implied Order Replaced Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char Side;
    uint64_t OrderId;
    uint64_t OrderBookPriority;
    uint32_t Quantity;
    int64_t Price;
} ImpliedOrderReplacedMessageT;

/*
 * Structure: Implied Order Added Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char Side;
    uint64_t OrderId;
    uint64_t OrderBookPriority;
    uint32_t Quantity;
    int64_t Price;
} ImpliedOrderAddedMessageT;

/*
 * Structure: Combination Order Executed Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char Side;
    uint64_t OrderId;
    uint32_t QuantityRemaining;
    char TradeType;
    uint64_t TradeId;
    uint32_t ExecutedQuantity;
    int64_t TradePrice;
    uint32_t OppositeTradeableInstrumentId;
    char OppositeSide;
    uint64_t OppositeOrderId;
    uint64_t CombinationTradeId;
} CombinationOrderExecutedMessageT;

/*
 * Structure: Auction Order Executed Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char Side;
    uint64_t OrderId;
    uint32_t QuantityRemaining;
    char TradeType;
    uint64_t TradeId;
    uint32_t ExecutedQuantity;
    int64_t TradePrice;
    uint64_t OppositeOrderId;
} AuctionOrderExecutedMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char Side;
    uint64_t OrderId;
    uint32_t QuantityRemaining;
    char TradeType;
    uint64_t TradeId;
    uint32_t ExecutedQuantity;
    int64_t TradePrice;
    uint64_t CombinationTradeId;
    char CounterPartyId[3];
} OrderExecutedMessageT;

/*
 * Structure: Order Deleted Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char Side;
    uint64_t OrderId;
} OrderDeletedMessageT;

/*
 * Structure: Order Volume Cancelled Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char Side;
    uint64_t OrderId;
    uint32_t Quantity;
} OrderVolumeCancelledMessageT;

/*
 * Structure: Add Order Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char Side;
    uint64_t OrderId;
    uint64_t OrderBookPriority;
    uint32_t Quantity;
    int64_t Price;
} AddOrderMessageT;

/*
 * Structure: Order Book State Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char SessionState;
} OrderBookStateMessageT;

/*
 * Structure: Bundle Leg
 */ 
typedef struct {
    uint32_t TradeableInstrumentIdLeg;
    char SideLeg;
    uint32_t RatioLeg;
    int64_t PriceLeg;
} BundleLegT;

/*
 * Structure: Bundles Symbol Directory
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char SymbolName[32];
    char LongName[60];
    char CfiCode[6];
    uint8_t PriceMethod;
    uint8_t PriceDisplayDecimals;
    uint32_t PriceFractionalDenominator;
    uint32_t PriceMinimumTick;
    uint8_t Legs;
    BundleLegT BundleLeg;
} BundlesSymbolDirectoryT;

/*
 * Structure: Combination Leg
 */ 
typedef struct {
    uint32_t TradeableInstrumentIdLeg;
    char SideLeg;
    uint32_t RatioLeg;
    int64_t PriceLeg;
} CombinationLegT;

/*
 * Structure: Combination Symbol Directory Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char SymbolName[32];
    char LongName[60];
    char CfiCode[6];
    uint8_t PriceMethod;
    uint8_t PriceDisplayDecimals;
    uint32_t PriceFractionalDenominator;
    uint32_t PriceMinimumTick;
    uint8_t Legs;
    CombinationLegT CombinationLeg;
} CombinationSymbolDirectoryMessageT;

/*
 * Structure: Options Symbol Directory Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char SymbolName[32];
    char LongName[60];
    char Isin[12];
    char Exchange[6];
    char Instrument[6];
    char CfiCode[6];
    uint16_t ExpiryYear;
    uint8_t ExpiryMonth;
    char OptionType;
    int64_t Strike;
    uint32_t UnderlyingTradeableInstrumentId;
    uint8_t PriceDisplayDecimals;
    uint32_t PriceFractionalDenominator;
    uint32_t PriceMinimumTick;
    uint8_t StrikePriceDecimalPosition;
    uint32_t StrikePriceFractionalDenominator;
    uint32_t StrikePriceMinimumTick;
    uint32_t LastTradingDate;
    int64_t PriorDaySettlement;
    uint64_t Volatility;
    char Currency[3];
    uint64_t LotSizeOrFaceValue;
    uint8_t MaturityValue;
    uint16_t CouponRate;
    uint8_t PaymentsPerYear;
    uint32_t BlockLotSize;
    uint32_t ExpiryDate;
    char BasisOfQuotation[10];
} OptionsSymbolDirectoryMessageT;

/*
 * Structure: Future Symbol Directory Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t TradeableInstrumentId;
    char SymbolName[32];
    char LongName[60];
    char Isin[12];
    char Exchange[6];
    char Instrument[6];
    char CfiCode[6];
    uint16_t ExpiryYear;
    uint8_t ExpiryMonth;
    uint8_t PriceDisplayDecimals;
    uint32_t PriceFractionalDenominator;
    uint32_t PriceMinimumTick;
    uint32_t LastTradingDate;
    int64_t PriorDaySettlement;
    char Currency[3];
    uint64_t LotSizeOrFaceValue;
    uint8_t MaturityValue;
    uint16_t CouponRate;
    uint8_t PaymentsPerYear;
    uint32_t BlockLotSize;
    uint32_t ExpiryDate;
} FutureSymbolDirectoryMessageT;

/*
 * Structure: End Of Business Trade Date Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    char EventCode;
} EndOfBusinessTradeDateMessageT;

/*
 * Structure: Seconds Message
 */ 
typedef struct {
    uint32_t Seconds;
} SecondsMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t Length;
    char MessageType;
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
    char Session[10];
    uint64_t Sequence;
    uint16_t Count;
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
   Organization: Australian Securities Exchange
   Version: 1.05
   Date: Friday, December 1, 2017
   Specification: asx-market-data-protocol-specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
