/*******************************************************************************
 * C Structs For Asx Securities Itch T24 1.13 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Activated Values
 */ 
#define ENUM_ACTIVATED_YES 'Y'
#define ENUM_ACTIVATED_NO 'N'

/*
 * Contract Type Values
 */ 
#define ENUM_CONTRACT_TYPE_CFUT 'F'
#define ENUM_CONTRACT_TYPE_COPTA 'O'
#define ENUM_CONTRACT_TYPE_EOPTA 'E'
#define ENUM_CONTRACT_TYPE_OOPT 'N'
#define ENUM_CONTRACT_TYPE_CSPRD 'S'
#define ENUM_CONTRACT_TYPE_SPRD 'A'
#define ENUM_CONTRACT_TYPE_SFUT 'D'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_OPEN 'O'
#define ENUM_EVENT_CODE_START 'S'
#define ENUM_EVENT_CODE_END 'C'
#define ENUM_EVENT_CODE_PAUSED 'P'
#define ENUM_EVENT_CODE_RESUMED 'R'

/*
 * Financial Type Values
 */ 
#define ENUM_FINANCIAL_TYPE_COMMODITY 'C'
#define ENUM_FINANCIAL_TYPE_CFD 'D'
#define ENUM_FINANCIAL_TYPE_EQUITY 'E'
#define ENUM_FINANCIAL_TYPE_GOVERNMENT_BOND 'X'
#define ENUM_FINANCIAL_TYPE_BANK_BILL 'B'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT 'S'
#define ENUM_MESSAGE_TYPE_FUTURE_SYMBOL_DIRECTORY 'f'
#define ENUM_MESSAGE_TYPE_SPREAD_SYMBOL_DIRECTORY 'g'
#define ENUM_MESSAGE_TYPE_OPTION_SYMBOL_DIRECTORY 'h'
#define ENUM_MESSAGE_TYPE_ORDER_BOOK_STATE 'O'
#define ENUM_MESSAGE_TYPE_ORDER_ADDED 'A'
#define ENUM_MESSAGE_TYPE_ORDER_REPLACED 'U'
#define ENUM_MESSAGE_TYPE_ORDER_VOLUME_CANCELLED 'X'
#define ENUM_MESSAGE_TYPE_ORDER_DELETED 'D'
#define ENUM_MESSAGE_TYPE_IMPLIED_ORDER_ADDED 'j'
#define ENUM_MESSAGE_TYPE_IMPLIED_ORDER_REPLACED 'l'
#define ENUM_MESSAGE_TYPE_IMPLIED_ORDER_DELETED 'k'
#define ENUM_MESSAGE_TYPE_CUSTOM_MARKET_ORDER_ADDED 'm'
#define ENUM_MESSAGE_TYPE_CUSTOM_MARKET_ORDER_REPLACED 'n'
#define ENUM_MESSAGE_TYPE_CUSTOM_MARKET_ORDER_DELETED 'r'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED 'E'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_WITH_PRICE 'C'
#define ENUM_MESSAGE_TYPE_SPREAD_EXECUTED 'e'
#define ENUM_MESSAGE_TYPE_TRADE_SPREAD_EXECUTION_CHAIN 'P'
#define ENUM_MESSAGE_TYPE_CUSTOM_MARKET_EXECUTED 'u'
#define ENUM_MESSAGE_TYPE_CUSTOM_MARKET_TRADE 'p'
#define ENUM_MESSAGE_TYPE_TRADE_CANCELLATION 'B'
#define ENUM_MESSAGE_TYPE_EQUILIBRIUM_PRICE_AUCTION_INFO 'Z'
#define ENUM_MESSAGE_TYPE_OPEN_HIGH_LOW_LAST_TRADE_ADJUSTMENT 't'
#define ENUM_MESSAGE_TYPE_MARKET_SETTLEMENT 'Y'
#define ENUM_MESSAGE_TYPE_AD_HOC_TEXT 'x'
#define ENUM_MESSAGE_TYPE_REQUEST_FOR_QUOTE 'q'
#define ENUM_MESSAGE_TYPE_ANOMALOUS_ORDER_THRESHOLD_PUBLISH 'W'
#define ENUM_MESSAGE_TYPE_VOLUME_AND_OPEN_INTEREST 'V'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_PUT 'P'
#define ENUM_OPTION_TYPE_CALL 'C'

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_YES 'Y'
#define ENUM_PRINTABLE_NO 'N'

/*
 * Side Values
 */ 
#define ENUM_SIDE_SELL 'S'
#define ENUM_SIDE_BUY 'B'

/*
 * Trade Type Values
 */ 
#define ENUM_TRADE_TYPE_NORMAL 'T'
#define ENUM_TRADE_TYPE_CROSSING_NORMAL 't'
#define ENUM_TRADE_TYPE_SWEEPING 'W'
#define ENUM_TRADE_TYPE_CROSSING_SWEEPING 'w'
#define ENUM_TRADE_TYPE_LEVELLING 'L'
#define ENUM_TRADE_TYPE_CROSSING_LEVELLING 'l'
#define ENUM_TRADE_TYPE_SPREAD_TO_UNDERLYING 'S'
#define ENUM_TRADE_TYPE_CROSSING_SPREAD_TO_UNDERLYING 's'
#define ENUM_TRADE_TYPE_INTRA_SPREAD 'R'
#define ENUM_TRADE_TYPE_CROSSING_INTRA_SPREAD 'r'
#define ENUM_TRADE_TYPE_INTER_SPREAD 'Q'
#define ENUM_TRADE_TYPE_CROSSING_INTER_SPREAD 'q'
#define ENUM_TRADE_TYPE_CUSTOM 'U'
#define ENUM_TRADE_TYPE_CROSSING_CUSTOM 'u'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_PENDING 'p'
#define ENUM_TRADING_STATUS_HALTED 'H'
#define ENUM_TRADING_STATUS_PRE_OPEN 'P'
#define ENUM_TRADING_STATUS_CLOSED 'C'
#define ENUM_TRADING_STATUS_LEVELLING 'l'
#define ENUM_TRADING_STATUS_LOCKED 'L'
#define ENUM_TRADING_STATUS_OPENED 'O'
#define ENUM_TRADING_STATUS_UNAVAILABLE 'U'
#define ENUM_TRADING_STATUS_PRE_PRICE_DISCOVERY 'd'
#define ENUM_TRADING_STATUS_INACTIVE 'I'
#define ENUM_TRADING_STATUS_PRICE_DISCOVERY 'D'
#define ENUM_TRADING_STATUS_ACTIVATED 'A'
#define ENUM_TRADING_STATUS_REGULATORY_HALT 'R'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

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
 * Structure: Ad Hoc Text
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    char SourceId[6];
    char TextMessage[100];
} AdHocTextT;

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
 * Bitfield: Market Updates
 */ 
typedef struct {
    uint8_t
    Reserved : 2,
    LastTradedVolume : 1,
    LastTradedPrice : 1,
    TotalTradedVolumeAndTotalTrades : 1,
    LowestTradedPrice : 1,
    HighestTradedPrice : 1,
    OpeningTradePrice : 1;
} MarketUpdatesT;

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
 * Structure: Trade Cancellation
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TradeDate;
    uint32_t MatchNumber;
} TradeCancellationT;

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
 * Structure: Session
 */ 
typedef struct {
    char ProtocolVersion[3];
    char SessionYear[2];
    char SessionWeek[2];
    char TradingService[3];
} SessionT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    SessionT Session;
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
   Version: 1.13
   Date: Tuesday, July 15, 2014
   Specification: T24ITCH_External_Message_Specification_V1.13.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
