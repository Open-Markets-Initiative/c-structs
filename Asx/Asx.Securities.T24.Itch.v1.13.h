/*******************************************************************************
 * C Structs For Asx Securities Itch T24 1.13 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Activated Values
 */ 
#define ENUM_ACTIVATED_YES_Y = 'Y'
#define ENUM_ACTIVATED_NO_N = 'N'

/*
 * Contract Type Values
 */ 
#define ENUM_CONTRACT_TYPE_CFUT_F = 'F'
#define ENUM_CONTRACT_TYPE_COPTA_O = 'O'
#define ENUM_CONTRACT_TYPE_EOPTA_E = 'E'
#define ENUM_CONTRACT_TYPE_OOPT_N = 'N'
#define ENUM_CONTRACT_TYPE_CSPRD_S = 'S'
#define ENUM_CONTRACT_TYPE_SPRD_A = 'A'
#define ENUM_CONTRACT_TYPE_SFUT_D = 'D'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_OPEN_O = 'O'
#define ENUM_EVENT_CODE_START_S = 'S'
#define ENUM_EVENT_CODE_END_C = 'C'
#define ENUM_EVENT_CODE_PAUSED_P = 'P'
#define ENUM_EVENT_CODE_RESUMED_R = 'R'

/*
 * Financial Type Values
 */ 
#define ENUM_FINANCIAL_TYPE_COMMODITY_C = 'C'
#define ENUM_FINANCIAL_TYPE_CFD_D = 'D'
#define ENUM_FINANCIAL_TYPE_EQUITY_E = 'E'
#define ENUM_FINANCIAL_TYPE_GOVERNMENT_BOND_X = 'X'
#define ENUM_FINANCIAL_TYPE_BANK_BILL_B = 'B'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_S = 'S'
#define ENUM_MESSAGE_TYPE_FUTURE_SYMBOL_DIRECTORY_F = 'f'
#define ENUM_MESSAGE_TYPE_SPREAD_SYMBOL_DIRECTORY_G = 'g'
#define ENUM_MESSAGE_TYPE_OPTION_SYMBOL_DIRECTORY_H = 'h'
#define ENUM_MESSAGE_TYPE_ORDER_BOOK_STATE_O = 'O'
#define ENUM_MESSAGE_TYPE_ORDER_ADDED_A = 'A'
#define ENUM_MESSAGE_TYPE_ORDER_REPLACED_U = 'U'
#define ENUM_MESSAGE_TYPE_ORDER_VOLUME_CANCELLED_X = 'X'
#define ENUM_MESSAGE_TYPE_ORDER_DELETED_D = 'D'
#define ENUM_MESSAGE_TYPE_IMPLIED_ORDER_ADDED_J = 'j'
#define ENUM_MESSAGE_TYPE_IMPLIED_ORDER_REPLACED_L = 'l'
#define ENUM_MESSAGE_TYPE_IMPLIED_ORDER_DELETED_K = 'k'
#define ENUM_MESSAGE_TYPE_CUSTOM_MARKET_ORDER_ADDED_M = 'm'
#define ENUM_MESSAGE_TYPE_CUSTOM_MARKET_ORDER_REPLACED_N = 'n'
#define ENUM_MESSAGE_TYPE_CUSTOM_MARKET_ORDER_DELETED_R = 'r'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_E = 'E'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_WITH_PRICE_C = 'C'
#define ENUM_MESSAGE_TYPE_SPREAD_EXECUTED_E = 'e'
#define ENUM_MESSAGE_TYPE_TRADE_SPREAD_EXECUTION_CHAIN_P = 'P'
#define ENUM_MESSAGE_TYPE_CUSTOM_MARKET_EXECUTED_U = 'u'
#define ENUM_MESSAGE_TYPE_CUSTOM_MARKET_TRADE_P = 'p'
#define ENUM_MESSAGE_TYPE_TRADE_CANCELLATION_B = 'B'
#define ENUM_MESSAGE_TYPE_EQUILIBRIUM_PRICE_AUCTION_INFO_Z = 'Z'
#define ENUM_MESSAGE_TYPE_OPEN_HIGH_LOW_LAST_TRADE_ADJUSTMENT_T = 't'
#define ENUM_MESSAGE_TYPE_MARKET_SETTLEMENT_Y = 'Y'
#define ENUM_MESSAGE_TYPE_AD_HOC_TEXT_X = 'x'
#define ENUM_MESSAGE_TYPE_REQUEST_FOR_QUOTE_Q = 'q'
#define ENUM_MESSAGE_TYPE_ANOMALOUS_ORDER_THRESHOLD_PUBLISH_W = 'W'
#define ENUM_MESSAGE_TYPE_VOLUME_AND_OPEN_INTEREST_V = 'V'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_PUT_P = 'P'
#define ENUM_OPTION_TYPE_CALL_C = 'C'

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_YES_Y = 'Y'
#define ENUM_PRINTABLE_NO_N = 'N'

/*
 * Side Values
 */ 
#define ENUM_SIDE_SELL_S = 'S'
#define ENUM_SIDE_BUY_B = 'B'

/*
 * Trade Type Values
 */ 
#define ENUM_TRADE_TYPE_NORMAL_T = 'T'
#define ENUM_TRADE_TYPE_CROSSING_NORMAL_T = 't'
#define ENUM_TRADE_TYPE_SWEEPING_W = 'W'
#define ENUM_TRADE_TYPE_CROSSING_SWEEPING_W = 'w'
#define ENUM_TRADE_TYPE_LEVELLING_L = 'L'
#define ENUM_TRADE_TYPE_CROSSING_LEVELLING_L = 'l'
#define ENUM_TRADE_TYPE_SPREAD_TO_UNDERLYING_S = 'S'
#define ENUM_TRADE_TYPE_CROSSING_SPREAD_TO_UNDERLYING_S = 's'
#define ENUM_TRADE_TYPE_INTRA_SPREAD_R = 'R'
#define ENUM_TRADE_TYPE_CROSSING_INTRA_SPREAD_R = 'r'
#define ENUM_TRADE_TYPE_INTER_SPREAD_Q = 'Q'
#define ENUM_TRADE_TYPE_CROSSING_INTER_SPREAD_Q = 'q'
#define ENUM_TRADE_TYPE_CUSTOM_U = 'U'
#define ENUM_TRADE_TYPE_CROSSING_CUSTOM_U = 'u'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_PENDING_P = 'p'
#define ENUM_TRADING_STATUS_HALTED_H = 'H'
#define ENUM_TRADING_STATUS_PRE_OPEN_P = 'P'
#define ENUM_TRADING_STATUS_CLOSED_C = 'C'
#define ENUM_TRADING_STATUS_LEVELLING_L = 'l'
#define ENUM_TRADING_STATUS_LOCKED_L = 'L'
#define ENUM_TRADING_STATUS_OPENED_O = 'O'
#define ENUM_TRADING_STATUS_UNAVAILABLE_U = 'U'
#define ENUM_TRADING_STATUS_PRE_PRICE_DISCOVERY_D = 'd'
#define ENUM_TRADING_STATUS_INACTIVE_I = 'I'
#define ENUM_TRADING_STATUS_PRICE_DISCOVERY_D = 'D'
#define ENUM_TRADING_STATUS_ACTIVATED_A = 'A'
#define ENUM_TRADING_STATUS_REGULATORY_HALT_R = 'R'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Ad Hoc Text
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    char SourceId[6];
    char TextMessage[100];
} AdHocTextT;

/*
 * Structure: Anomalous Order Threshold Publish
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    int32_t AotPrice;
    int32_t AotUpperPrice;
    int32_t AotLowerPrice;
    int32_t EtrPrice;
    int32_t EtrUpperPrice;
    int32_t EtrLowerPrice;
} AnomalousOrderThresholdPublishT;

/*
 * Structure: Custom Market Executed
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint64_t OrderNumber;
    uint32_t QuantityRemaining;
    char TradeType;
    uint32_t MatchNumber;
    uint32_t ExecutedQuantity;
    int32_t TradePrice;
    uint32_t TradedContractNumber;
    char TradeSideOfLeg[1];
    char Printable;
} CustomMarketExecutedT;

/*
 * Structure: Custom Market Order Added
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint64_t OrderNumber;
    uint32_t OrderBookPriority;
    uint32_t Quantity;
    uint8_t Legs;
    uint32_t ContractNumberLeg1;
    char SideLeg1[1];
    uint16_t RatioLeg1;
    int32_t PriceLeg1;
    uint32_t ContractNumberLeg2;
    char SideLeg2[1];
    uint16_t RatioLeg2;
    int32_t PriceLeg2;
    uint32_t ContractNumberLeg3;
    char SideLeg3[1];
    uint16_t RatioLeg3;
    int32_t PriceLeg3;
    uint32_t ContractNumberLeg4;
    char SideLeg4[1];
    uint16_t RatioLeg4;
    int32_t PriceLeg4;
    uint32_t ContractNumberLeg5;
    char SideLeg5[1];
    uint16_t RatioLeg5;
    int32_t PriceLeg5;
    uint32_t ContractNumberLeg6;
    char SideLeg6[1];
    uint16_t RatioLeg6;
    int32_t PriceLeg6;
} CustomMarketOrderAddedT;

/*
 * Structure: Custom Market Order Deleted
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint64_t OrderNumber;
} CustomMarketOrderDeletedT;

/*
 * Structure: Custom Market Order Replaced
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint64_t OrderNumber;
    uint32_t OrderBookPriority;
    uint32_t Quantity;
} CustomMarketOrderReplacedT;

/*
 * Structure: Custom Market Trade
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Side;
    uint64_t OrderNumber;
    uint32_t QuantityRemaining;
    uint64_t CustomMarketOrderNumber;
    uint32_t CustomMarketQuantityRemaining;
    char TradeType;
    uint32_t MatchNumber;
    uint32_t ExecutedQuantity;
    int32_t TradePrice;
    uint32_t TradedContractNumber;
    char TradeSideOfNonCustomOrder[1];
    char Printable;
} CustomMarketTradeT;

/*
 * Structure: Equilibrium Price Auction Info
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    int32_t EquilibriumPrice;
    int32_t BestBidPrice;
    int32_t BestAskPrice;
    uint32_t BestBidQuantity;
    uint32_t BestAskQuantity;
} EquilibriumPriceAuctionInfoT;

/*
 * Structure: Future Symbol Directory
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Exchange[6];
    char Instrument[6];
    char ContractType;
    uint16_t ExpiryYear;
    uint8_t ExpiryMonth;
    uint8_t PriceDecimalPosition;
    uint32_t PriceFractionalDenominator;
    uint16_t PriceMinimumTick;
    uint32_t LastTradingDate;
    int32_t PriorDaySettlement;
    char FinancialType;
    char Currency[3];
    uint32_t LotSizeOrFaceValue;
    uint8_t MaturityValue;
    uint16_t CouponRate;
    uint8_t PaymentsPerYear;
} FutureSymbolDirectoryT;

/*
 * Structure: Implied Order Added
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Side;
    uint64_t OrderNumber;
    uint32_t OrderBookPriority;
    uint32_t Quantity;
    int32_t Price;
} ImpliedOrderAddedT;

/*
 * Structure: Implied Order Deleted
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Side;
    uint64_t OrderNumber;
} ImpliedOrderDeletedT;

/*
 * Structure: Implied Order Replaced
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Side;
    uint64_t OrderNumber;
    uint32_t OrderBookPriority;
    uint32_t Quantity;
    int32_t Price;
} ImpliedOrderReplacedT;

/*
 * Structure: Market Settlement
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    int32_t SettlementPrice;
    uint32_t Volatility;
    char SettlementType[1];
} MarketSettlementT;

/*
 * Structure: Market Updates
 */ 
typedef struct {
    char Reserved[2];
    char LastTradedVolume[1];
    char LastTradedPrice[1];
    char TotalTradedVolumeAndTotalTrades[1];
    char LowestTradedPrice[1];
    char HighestTradedPrice[1];
    char OpeningTradePrice[1];
} MarketUpdatesT;

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
 * Structure: Open High Low Last Trade Adjustment
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    int32_t OpeningTrade;
    int32_t HighestTrade;
    int32_t LowestTrade;
    int32_t LastTrade;
    uint32_t LastVolume;
    uint32_t TotalTradedVolume;
    uint32_t TotalTrades;
    MarketUpdatesT MarketUpdates;
} OpenHighLowLastTradeAdjustmentT;

/*
 * Structure: Option Symbol Directory
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Exchange[6];
    char Instrument[6];
    char ContractType;
    uint16_t ExpiryYear;
    uint8_t ExpiryMonth;
    char OptionType;
    uint32_t Strike;
    uint32_t UnderlyingContractNumber;
    uint8_t PriceDecimalPosition;
    uint32_t PriceFractionalDenominator;
    uint16_t PriceMinimumTick;
    uint8_t StrikePriceDecimalPosition;
    uint32_t StrikePriceFractionalDenominator;
    uint16_t StrikePriceMinimumTick;
    uint32_t LastTradingDate;
    int32_t PriorDaySettlement;
    uint32_t Volatility;
    char FinancialType;
    char Currency[3];
    uint32_t LotSizeOrFaceValue;
    uint8_t MaturityValue;
    uint16_t CouponRate;
    uint8_t PaymentsPerYear;
    char Activated;
} OptionSymbolDirectoryT;

/*
 * Structure: Order Added
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Side;
    uint64_t OrderNumber;
    uint32_t OrderBookPriority;
    uint32_t Quantity;
    int32_t Price;
} OrderAddedT;

/*
 * Structure: Order Book State
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char TradingStatus;
} OrderBookStateT;

/*
 * Structure: Order Deleted
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Side;
    uint64_t OrderNumber;
} OrderDeletedT;

/*
 * Structure: Order Executed
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Side;
    uint64_t OrderNumber;
    uint32_t QuantityRemaining;
    char TradeType;
    uint32_t MatchNumber;
    uint32_t ExecutedQuantity;
    int32_t TradePrice;
} OrderExecutedT;

/*
 * Structure: Order Executed With Price
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    uint64_t BuyingOrderNumber;
    uint32_t BuyerQuantityRemaining;
    uint64_t SellingOrderNumber;
    uint32_t SellerQuantityRemaining;
    char TradeType;
    uint32_t MatchNumber;
    uint32_t ExecutedQuantity;
    int32_t TradePrice;
} OrderExecutedWithPriceT;

/*
 * Structure: Order Replaced
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Side;
    uint64_t OrderNumber;
    uint32_t OrderBookPriority;
    uint32_t Quantity;
    int32_t Price;
} OrderReplacedT;

/*
 * Structure: Order Volume Cancelled
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Side;
    uint64_t OrderNumber;
    uint32_t Quantity;
} OrderVolumeCancelledT;

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
    SessionT Session;
    uint64_t Sequence;
    uint16_t Count;
} PacketHeaderT;

/*
 * Structure: Request For Quote
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    int32_t Price;
    uint32_t Quantity;
} RequestForQuoteT;

/*
 * Structure: Session
 */ 
typedef struct {
    char ProtocolVersion[3];
    char SessionYear[2];
    char SessionWeek[2];
    char TradingService[3];
} SessionT;

/*
 * Structure: Spread Executed
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Side;
    uint64_t OrderNumber;
    uint32_t QuantityRemaining;
    char TradeType;
    uint32_t MatchNumber;
    uint32_t ExecutedQuantity;
    int32_t TradePrice;
    uint32_t TradedContractNumber;
    int32_t SpreadTradePrice;
    char TradeSideOfLeg[1];
    char Printable;
} SpreadExecutedT;

/*
 * Structure: Spread Symbol Directory
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    char Exchange[6];
    char ContractType;
    uint32_t FirstLegContractNumber;
    uint32_t SecondLegContractNumber;
    uint8_t PrimaryRatio;
    uint8_t SecondaryRatio;
    uint8_t PriceDecimalPosition;
    uint32_t PriceFractionalDenominator;
    uint16_t PriceMinimumTick;
} SpreadSymbolDirectoryT;

/*
 * Structure: System Event
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    char EventCode;
} SystemEventT;

/*
 * Structure: Time Message
 */ 
typedef struct {
    uint32_t Second;
} TimeMessageT;

/*
 * Structure: Trade Cancellation
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t MatchNumber;
} TradeCancellationT;

/*
 * Structure: Trade Spread Execution Chain
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t Buyer;
    char SideOfBuyer[1];
    uint64_t BuyerOrderNumber;
    uint32_t BuyerQuantityRemaining;
    uint32_t SellerContractNumber;
    char SideOfSeller[1];
    uint64_t SellingOrderNumber;
    uint32_t SellerQuantityRemaining;
    char TradeType;
    uint32_t MatchNumber;
    uint32_t ExecutedQuantity;
    int32_t TradePrice;
    uint32_t TradedContractNumber;
    int32_t SpreadTradePrice;
    char Printable;
} TradeSpreadExecutionChainT;

/*
 * Structure: Volume And Open Interest
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t ContractNumber;
    uint32_t CumulativeVolume;
    uint32_t OpenInterest;
    uint16_t VoiTradeDate;
} VolumeAndOpenInterestT;

