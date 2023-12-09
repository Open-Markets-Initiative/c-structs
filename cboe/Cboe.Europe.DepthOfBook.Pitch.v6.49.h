/*******************************************************************************
 * C Structs For Cboe Europe Pitch DepthOfBook 6.49 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Algorithmic Trade Values
 */ 
#define ENUM_ALGORITHMIC_TRADE_ALGORITHMIC_TRADE 'H'
#define ENUM_ALGORITHMIC_TRADE_NONALGORITHMIC_TRADE '-'

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_OPENING_AUCTION 'O'
#define ENUM_AUCTION_TYPE_CLOSING_AUCTION 'C'
#define ENUM_AUCTION_TYPE_HALT_AUCTION 'H'
#define ENUM_AUCTION_TYPE_VOLATILITY_AUCTION 'V'
#define ENUM_AUCTION_TYPE_PERIODIC_AUCTION 'P'
#define ENUM_AUCTION_TYPE_CBOE_CLOSING_CROSS 'U'

/*
 * Cboe Trade Flags Values
 */ 
#define ENUM_CBOE_TRADE_FLAGS_ON_TIME_IN_THE_MAIN_SESSION '4'
#define ENUM_CBOE_TRADE_FLAGS_LATE '5'
#define ENUM_CBOE_TRADE_FLAGS_OUT_OF_THE_MAIN_SESSION '6'
#define ENUM_CBOE_TRADE_FLAGS_LATE_AND_OUT_OF_THE_MAIN_SESSION '7'
#define ENUM_CBOE_TRADE_FLAGS_ON_TIME_IN_THE_MAIN_SESSION_3_RD_COUNTRY_VENUE 'C'
#define ENUM_CBOE_TRADE_FLAGS_LATE_3_RD_COUNTRY_VENUE 'D'
#define ENUM_CBOE_TRADE_FLAGS_OUT_OF_THE_MAIN_SESSION_3_RD_COUNTRY_VENUE 'E'
#define ENUM_CBOE_TRADE_FLAGS_LATE_AND_OUT_OF_THE_MAIN_SESSION_3_RD_COUNTRY_VENUE 'F'

/*
 * Ex Cum Dividend Values
 */ 
#define ENUM_EX_CUM_DIVIDEND_EX_CUM_SPECIAL_DIVIDEND_IF_OPTIONALLY_SET_BY_REPORTING_PARTY 'E'
#define ENUM_EX_CUM_DIVIDEND_NOT_SPECIFIED '-'

/*
 * Includes Primary Values
 */ 
#define ENUM_INCLUDES_PRIMARY_INCLUDES_PRIMARY 'P'
#define ENUM_INCLUDES_PRIMARY_EXCLUDES_PRIMARY 'N'
#define ENUM_INCLUDES_PRIMARY_NOT_SPECIFIED '-'

/*
 * Index Status Values
 */ 
#define ENUM_INDEX_STATUS_NORMAL 'N'
#define ENUM_INDEX_STATUS_INDICATIVE 'I'
#define ENUM_INDEX_STATUS_CLOSING 'C'

/*
 * Market Mechanism Values
 */ 
#define ENUM_MARKET_MECHANISM_CENTRAL_LIMIT_ORDER_BOOK '1'
#define ENUM_MARKET_MECHANISM_QUOTE_DRIVEN_MARKET '2'
#define ENUM_MARKET_MECHANISM_DARK_ORDER_BOOK '3'
#define ENUM_MARKET_MECHANISM_OFF_BOOK '4'
#define ENUM_MARKET_MECHANISM_PERIODIC_AUCTION '5'
#define ENUM_MARKET_MECHANISM_REQUEST_FOR_QUOTES '6'
#define ENUM_MARKET_MECHANISM_ANY_OTHER_INCLUDING_HYBRID '7'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE 0x20
#define ENUM_MESSAGE_TYPE_UNIT_CLEAR_MESSAGE 0x97
#define ENUM_MESSAGE_TYPE_ADD_ORDER_LONG_MESSAGE 0x40
#define ENUM_MESSAGE_TYPE_ADD_ORDER_SHORT_MESSAGE 0x22
#define ENUM_MESSAGE_TYPE_ADD_ORDER_EXPANDED_MESSAGE 0x2f
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 0x23
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_AT_PRICE_SIZE_MESSAGE 0x24
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_LONG_MESSAGE 0x25
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_SHORT_MESSAGE 0x26
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_LONG_MESSAGE 0x27
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_SHORT_MESSAGE 0x28
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE 0x29
#define ENUM_MESSAGE_TYPE_TRADE_LONG_MESSAGE 0x41
#define ENUM_MESSAGE_TYPE_TRADE_SHORT_MESSAGE 0x2B
#define ENUM_MESSAGE_TYPE_TRADE_EXTENDED_MESSAGE 0x32
#define ENUM_MESSAGE_TYPE_TRADE_UNKNOWN_SYMBOL_MESSAGE 0x35
#define ENUM_MESSAGE_TYPE_END_OF_SESSION 0x2D
#define ENUM_MESSAGE_TYPE_TRANSACTION_BEGIN_MESSAGE 0xBC
#define ENUM_MESSAGE_TYPE_TRANSACTION_BEGIN_MESSAGE 0xBD
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE 0x31
#define ENUM_MESSAGE_TYPE_STATISTICS_MESSAGE 0x34
#define ENUM_MESSAGE_TYPE_AUCTION_UPDATE_MESSAGE 0xAC
#define ENUM_MESSAGE_TYPE_AUCTION_SUMMARY_MESSAGE 0x96
#define ENUM_MESSAGE_TYPE_INDEX_QUOTE_MESSAGE 0xD8
#define ENUM_MESSAGE_TYPE_INDEX_QUOTE_EDSP_MESSAGE 0xD9

/*
 * Outside Tolerance Values
 */ 
#define ENUM_OUTSIDE_TOLERANCE_OUTSIDE_TOLERANCE 'O'
#define ENUM_OUTSIDE_TOLERANCE_INSIDE_TOLERANCE 'I'
#define ENUM_OUTSIDE_TOLERANCE_NOT_SPECIFIED '-'

/*
 * Price Determination Values
 */ 
#define ENUM_PRICE_DETERMINATION_NORMAL '0'
#define ENUM_PRICE_DETERMINATION_MANUAL '1'

/*
 * Side Indicator Values
 */ 
#define ENUM_SIDE_INDICATOR_BUY_ORDER 'B'
#define ENUM_SIDE_INDICATOR_SELL_ORDER 'S'

/*
 * Statistic Type Values
 */ 
#define ENUM_STATISTIC_TYPE_CLOSING_PRICE 'C'
#define ENUM_STATISTIC_TYPE_HIGH_PRICE 'H'
#define ENUM_STATISTIC_TYPE_LOW_PRICE 'L'
#define ENUM_STATISTIC_TYPE_OPENING_PRICE 'O'
#define ENUM_STATISTIC_TYPE_PREVIOUS_CLOSING_PRICE 'P'

/*
 * Trading Mode Values
 */ 
#define ENUM_TRADING_MODE_UNDEFINED_AUCTION '1'
#define ENUM_TRADING_MODE_CONTINUOUS_TRADING '2'
#define ENUM_TRADING_MODE_AT_MARKET_CLOSE_TRADING '3'
#define ENUM_TRADING_MODE_OUT_OF_MAIN_SESSION '4'
#define ENUM_TRADING_MODE_TRADE_REPORTING_ON_EXCHANGE '5'
#define ENUM_TRADING_MODE_TRADE_REPORTING_OFF_EXCHANGE '6'
#define ENUM_TRADING_MODE_TRADE_REPORTING_SYSTEMATIC_INTERNALISER '7'
#define ENUM_TRADING_MODE_SCHEDULED_OPENING_AUCTION 'O'
#define ENUM_TRADING_MODE_SCHEDULED_CLOSING_AUCTION 'K'
#define ENUM_TRADING_MODE_SCHEDULED_INTRADAY_AUCTION 'I'
#define ENUM_TRADING_MODE_UNSCHEDULED_AUCTION 'U'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_TRADING 'T'
#define ENUM_TRADING_STATUS_OFF_BOOK_REPORTING 'R'
#define ENUM_TRADING_STATUS_CLOSED 'C'
#define ENUM_TRADING_STATUS_SUSPENSION 'S'
#define ENUM_TRADING_STATUS_NO_REFERENCE_PRICE 'N'
#define ENUM_TRADING_STATUS_VOLATILITY_INTERRUPTION 'V'
#define ENUM_TRADING_STATUS_OPENING_AUCTION 'O'
#define ENUM_TRADING_STATUS_CLOSING_AUCTION 'E'
#define ENUM_TRADING_STATUS_HALTED 'H'
#define ENUM_TRADING_STATUS_MARKET_ORDER_IMBALANCE_EXTENSION 'M'
#define ENUM_TRADING_STATUS_PRICE_MONITORING_EXTENSION 'P'
#define ENUM_TRADING_STATUS_CBOE_CLOSING_CROSS 'U'

/*
 * Transaction Category Values
 */ 
#define ENUM_TRANSACTION_CATEGORY_DARK_TRADE 'D'
#define ENUM_TRANSACTION_CATEGORY_TRADE_THAT_HAS_RECEIVED_PRICE_IMPROVEMENT 'R'
#define ENUM_TRANSACTION_CATEGORY_PACKAGED_TRADE 'Z'
#define ENUM_TRANSACTION_CATEGORY_EXCHANGE_FOR_PHYSICALS_TRADE 'Y'
#define ENUM_TRANSACTION_CATEGORY_NONE_OF_THE_ABOVE_APPLY '-'
#define ENUM_TRANSACTION_CATEGORY_NEGOTIATED_TRADE_IN_LIQUID_FINANCIAL_INSTRUMENTS '1'
#define ENUM_TRANSACTION_CATEGORY_NEGOTIATED_TRADE_IN_ILLIQUID_FINANCIAL_INSTRUMENTS '2'
#define ENUM_TRANSACTION_CATEGORY_NEGOTIATED_TRADE_SUBJECT_TO_CONDITIONS_OTHER_THAN_THE_CURRENT_MARKET_PRICE '3'
#define ENUM_TRANSACTION_CATEGORY_NEGOTIATED_TRADE_WHERE_NONE_OF_THE_ABOVE_APPLY 'N'
#define ENUM_TRANSACTION_CATEGORY_PRE_TRADE_TRANSPARENCY_WAIVER_FOR_ILLIQUID_INSTRUMENT_ON_AN_SI '4'
#define ENUM_TRANSACTION_CATEGORY_PRE_TRADE_TRANSPARENCY_WAIVER_FOR_ABOVE_STANDARD_MARKET_SIZE_ON_AN_SI '5'
#define ENUM_TRANSACTION_CATEGORY_PRE_TRADE_TRANSPARENCY_WAIVERS_FOR_ILLIQUID_INSTRUMENT_ON_AN_SI_AND_ABOVE_STANDARD_MARKET_SIZE_ON_AN_SI '6'
#define ENUM_TRANSACTION_CATEGORY_NOT_SPECIFIED '-'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Index Quote Edsp Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char IndexTicker[10];
    uint64_t IndexPrice;
} IndexQuoteEdspMessageT;

/*
 * Structure: Index Quote Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char IndexTicker[10];
    uint64_t IndexPrice;
    char IndexStatus;
} IndexQuoteMessageT;

/*
 * Structure: Auction Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolAlphanumeric8[8];
    char AuctionType;
    uint64_t PriceBinaryLongPrice8;
    uint32_t SharesBinary4;
} AuctionSummaryMessageT;

/*
 * Structure: Auction Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolAlphanumeric8[8];
    char AuctionType;
    uint64_t ReferencePrice;
    uint32_t IndicativePrice;
    uint32_t IndicativeShares;
    char OutsideTolerance;
    char IncludesPrimary;
} AuctionUpdateMessageT;

/*
 * Structure: Statistics Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolAlphanumeric8[8];
    uint64_t PriceBinaryLongPrice8;
    char StatisticType;
    char PriceDetermination;
} StatisticsMessageT;

/*
 * Structure: Trading Status Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolAlphanumeric8[8];
    char TradingStatus;
    char Reserved[3];
} TradingStatusMessageT;

/*
 * Structure: Transaction Begin Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} TransactionBeginMessageT;

/*
 * Structure: End Of Session
 */ 
typedef struct {
    uint32_t TimeOffset;
} EndOfSessionT;

/*
 * Structure: Trade Unknown Symbol Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t SharesBinary8;
    char SymbolAlphanumeric12[12];
    uint64_t PriceBinaryLongPrice8;
    uint64_t TradeId;
    uint64_t TradeTimestamp;
    char ExecutionVenue[4];
    char Currency[3];
    char CboeTradeFlags;
    char ExtendedTradeFlags[0];
} TradeUnknownSymbolMessageT;

/*
 * Structure: Trade Extended Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t SharesBinary8;
    char SymbolAlphanumeric8[8];
    uint64_t PriceBinaryLongPrice8;
    uint64_t TradeId;
    uint64_t TradeTimestamp;
    char ExecutionVenue[4];
    char Currency[3];
    char CboeTradeFlags;
    char ExtendedTradeFlags[0];
} TradeExtendedMessageT;

/*
 * Structure: Trade Flags
 */ 
typedef struct {
    char MarketMechanism;
    char TradingMode;
    char TransactionCategory;
    char TradeTypes[1];
    char AlgorithmicTrade;
} TradeFlagsT;

/*
 * Structure: Trade Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t ContractsShort;
    char SymbolAlphanumeric8[8];
    uint16_t PriceShort;
    uint64_t ExecutionId;
    TradeFlagsT TradeFlags;
} TradeShortMessageT;

/*
 * Structure: Trade Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t SharesBinary4;
    char SymbolAlphanumeric8[8];
    uint64_t PriceBinaryLongPrice8;
    uint64_t ExecutionId;
    TradeFlagsT TradeFlags;
} TradeLongMessageT;

/*
 * Structure: Delete Order Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
} DeleteOrderMessageT;

/*
 * Structure: Modify Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t SharesBinary2;
    uint16_t PriceBinaryShortPrice2;
} ModifyOrderShortMessageT;

/*
 * Structure: Modify Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t SharesBinary4;
    uint64_t PriceBinaryLongPrice8;
} ModifyOrderLongMessageT;

/*
 * Structure: Reduce Size Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t CanceledSharesBinary2;
} ReduceSizeShortMessageT;

/*
 * Structure: Reduce Size Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t CanceledSharesBinary4;
} ReduceSizeLongMessageT;

/*
 * Structure: Execution Flags
 */ 
typedef struct {
    char MarketMechanism;
    char TradingMode;
    char ExCumDividend;
    char AlgorithmicTrade;
} ExecutionFlagsT;

/*
 * Structure: Order Executed At Price Size Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t ExecutedShares;
    uint32_t RemainingShares;
    uint64_t ExecutionId;
    uint64_t PriceBinaryLongPrice8;
    ExecutionFlagsT ExecutionFlags;
} OrderExecutedAtPriceSizeMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t ExecutedShares;
    uint64_t ExecutionId;
    ExecutionFlagsT ExecutionFlags;
} OrderExecutedMessageT;

/*
 * Structure: Add Order Expanded Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char SymbolAlphanumeric8[8];
    uint64_t PriceBinaryLongPrice8;
    char AddOrderFlags[0];
    char ParticipantId[4];
} AddOrderExpandedMessageT;

/*
 * Structure: Add Order Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint16_t QuantityShort;
    char SymbolShort[6];
    uint16_t PriceShort;
} AddOrderShortMessageT;

/*
 * Structure: Add Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    char SideIndicator;
    uint32_t Quantity;
    char SymbolAlphanumeric8[8];
    uint64_t PriceBinaryLongPrice8;
} AddOrderLongMessageT;

/*
 * Structure: Unit Clear Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} UnitClearMessageT;

/*
 * Structure: Time Message
 */ 
typedef struct {
    uint32_t Time;
} TimeMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint8_t MessageLength;
    uint8_t MessageType;
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
    uint16_t Length;
    uint8_t Count;
    uint8_t Unit;
    uint32_t Sequence;
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
   Organization: Chicago Board Options Exchange
   Version: 6.49
   Date: Thursday, November 16, 2023
   Specification: BATS_Europe_MC_PITCH_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
