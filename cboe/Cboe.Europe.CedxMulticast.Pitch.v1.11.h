/*******************************************************************************
 * C Structs For Cboe Europe Pitch CedxMulticast 1.11 Binary Model
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
#define ENUM_AUCTION_TYPE_AIM 'B'
#define ENUM_AUCTION_TYPE_CRFQ 'C'

/*
 * Call Put Values
 */ 
#define ENUM_CALL_PUT_PUT 'P'
#define ENUM_CALL_PUT_CALL 'C'

/*
 * Ex Cum Dividend Values
 */ 
#define ENUM_EX_CUM_DIVIDEND_EX_CUM_SPECIAL_DIVIDEND_IF_OPTIONALLY_SET_BY_REPORTING_PARTY 'E'
#define ENUM_EX_CUM_DIVIDEND_NOT_SPECIFIED '-'

/*
 * Issue Values
 */ 
#define ENUM_ISSUE_INITIAL_SETTLEMENT 'S'
#define ENUM_ISSUE_REISSUED_SETTLEMENT 'R'

/*
 * Listing State Values
 */ 
#define ENUM_LISTING_STATE_ACTIVE 'A'
#define ENUM_LISTING_STATE_INACTIVE 'I'
#define ENUM_LISTING_STATE_TEST 'T'

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
#define ENUM_MESSAGE_TYPE_END_OF_SESSION 0x2D
#define ENUM_MESSAGE_TYPE_TRANSACTION_BEGIN_MESSAGE 0xBC
#define ENUM_MESSAGE_TYPE_TRANSACTION_BEGIN_MESSAGE 0xBD
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE 0x31
#define ENUM_MESSAGE_TYPE_FAST_STATUS_MESSAGE 0xE2
#define ENUM_MESSAGE_TYPE_AUCTION_SUMMARY_MESSAGE 0x96
#define ENUM_MESSAGE_TYPE_OPENING_AUCTION_UPDATE_MESSAGE 0xD1
#define ENUM_MESSAGE_TYPE_AUCTION_NOTIFICATION_MESSAGE 0xAD
#define ENUM_MESSAGE_TYPE_AUCTION_CANCEL_MESSAGE 0xAE
#define ENUM_MESSAGE_TYPE_AUCTION_TRADE_MESSAGE 0xDF
#define ENUM_MESSAGE_TYPE_AUCTION_LIQUIDITY_MESSAGE 0xDE
#define ENUM_MESSAGE_TYPE_WIDTH_UPDATE_MESSAGE 0xD2
#define ENUM_MESSAGE_TYPE_FUTURES_INSTRUMENT_DEFINITION_MESSAGE 0xDA
#define ENUM_MESSAGE_TYPE_OPTIONS_INSTRUMENT_DEFINITION_MESSAGE 0xDB
#define ENUM_MESSAGE_TYPE_WIDTH_UPDATE_MESSAGE 0xDC
#define ENUM_MESSAGE_TYPE_TRADE_BREAK_MESSAGE 0x2C
#define ENUM_MESSAGE_TYPE_SETTLEMENT_MESSAGE 0xB9
#define ENUM_MESSAGE_TYPE_END_OF_DAY_SUMMARY_MESSAGE 0xBA

/*
 * Side Indicator Values
 */ 
#define ENUM_SIDE_INDICATOR_BUY_ORDER 'B'
#define ENUM_SIDE_INDICATOR_SELL_ORDER 'S'

/*
 * Status Values
 */ 
#define ENUM_STATUS_CLOSED 'C'
#define ENUM_STATUS_QUEUING 'Q'
#define ENUM_STATUS_OPENING_AUCTION 'O'
#define ENUM_STATUS_TRADING 'T'
#define ENUM_STATUS_SUSPENSION 'S'
#define ENUM_STATUS_HALTED 'H'

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

/*
 * Width Type Values
 */ 
#define ENUM_WIDTH_TYPE_REGULAR R


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Bitfield: Summary Flags
 */ 
typedef struct {
    uint8_t
    ReservedFlags : 3,
    OpenAndClosePrice : 1,
    Unused3 : 1,
    LowPriceBit1 : 1,
    Unused1 : 1,
    HighPriceBit1 : 1;
} SummaryFlagsT;

/*
 * Structure: End Of Day Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolPrintableAscii6[6];
    uint32_t TradeDate;
    uint32_t OpenInterest;
    uint64_t HighPriceBinaryPrice8;
    uint64_t LowPriceBinaryPrice8;
    uint64_t OpenPrice;
    uint64_t ClosePrice;
    uint32_t TotalVolume;
    uint32_t BlockVolume;
    uint32_t EcrpVolume;
    SummaryFlagsT SummaryFlags;
} EndOfDaySummaryMessageT;

/*
 * Structure: Settlement Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolPrintableAscii6[6];
    uint32_t TradeDate;
    uint64_t SettlementPrice;
    char Issue;
} SettlementMessageT;

/*
 * Structure: Trade Break Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t ExecutionId;
} TradeBreakMessageT;

/*
 * Structure: Width Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ProductCodeAlphanumeric8[8];
    uint8_t WidthType;
    uint32_t Multiplier;
} WidthUpdateMessageT;

/*
 * Structure: Options Instrument Definition Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolAlphanumeric6[6];
    char ProductCodeAlphanumeric8[8];
    char CallPut;
    uint32_t ExpirationDate;
    uint64_t StrikePrice;
    uint16_t ContractSize;
    char ListingState;
    uint64_t PriceIncrement;
} OptionsInstrumentDefinitionMessageT;

/*
 * Structure: Futures Instrument Definition Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolAlphanumeric6[6];
    char ProductCodeAlphanumeric8[8];
    uint32_t ExpirationDate;
    uint16_t ContractSize;
    char ListingState;
    uint64_t PriceIncrement;
} FuturesInstrumentDefinitionMessageT;

/*
 * Structure: Price Level Group
 */ 
typedef struct {
    uint64_t PriceLevel;
    uint32_t Volume;
} PriceLevelGroupT;

/*
 * Structure: Auction Liquidity Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
    uint8_t PriceLevelCount;
} AuctionLiquidityMessageT;

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
 * Structure: Auction Trade Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t AuctionId;
    uint64_t ExecutionId;
    uint64_t Price;
    uint32_t ContractsBinary4;
    ExecutionFlagsT ExecutionFlags;
} AuctionTradeMessageT;

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
    char SymbolAlphanumeric6[6];
    uint64_t AuctionId;
    char AuctionType;
    char Side[1];
    uint64_t Price;
    uint32_t ContractsBinary4;
    char CustomerIndicator[1];
    char ParticipantId[4];
    uint32_t AuctionEndOffset;
} AuctionNotificationMessageT;

/*
 * Structure: Opening Auction Update Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolAlphanumeric8[8];
    char AuctionType;
    uint64_t ReferencePrice;
    uint32_t BuyContracts;
    uint32_t SellContracts;
    uint64_t IndicativePrice;
    uint64_t AuctionOnlyPrice;
    char OpeningCondition[1];
    uint64_t CompositeMarketBidPrice;
    uint64_t CompositeMarketOfferPrice;
} OpeningAuctionUpdateMessageT;

/*
 * Structure: Auction Summary Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolAlphanumeric8[8];
    char AuctionOpeningType[1];
    uint64_t Price;
    uint32_t ContractsBinary4;
} AuctionSummaryMessageT;

/*
 * Structure: Fast Status Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char ProductCodeAlphanumeric6[6];
    uint8_t IsFast;
} FastStatusMessageT;

/*
 * Structure: Trading Status Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char SymbolAlphanumeric8[8];
    char Status;
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
 * Structure: Trade Extended Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t ContractsBinary8;
    char SymbolAlphanumeric8[8];
    uint64_t Price;
    uint64_t TradeId;
    uint64_t TradeTimestamp;
    char ExecutionVenue[4];
    char Currency[3];
    char CboeTradeFlags[1];
    char ExtendedTradeFlags[0];
} TradeExtendedMessageT;

/*
 * Structure: Trade Flags
 */ 
typedef struct {
    char MarketMechanism;
    char TradingMode;
    char TransactionCategory;
    char BenchmarkReferencePriceIndicator[1];
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
    uint32_t ContractsBinary4;
    char SymbolAlphanumeric8[8];
    uint64_t Price;
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
    uint16_t ContractsShort;
    uint16_t PriceShort;
} ModifyOrderShortMessageT;

/*
 * Structure: Modify Order Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t ContractsBinary4;
    uint64_t Price;
} ModifyOrderLongMessageT;

/*
 * Structure: Reduce Size Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t CanceledContractsBinary2;
} ReduceSizeShortMessageT;

/*
 * Structure: Reduce Size Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t CanceledContractsBinary4;
} ReduceSizeLongMessageT;

/*
 * Structure: Order Executed At Price Size Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t ExecutedQuantity;
    uint32_t RemainingQuantity;
    uint64_t ExecutionId;
    uint64_t Price;
    ExecutionFlagsT ExecutionFlags;
} OrderExecutedAtPriceSizeMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t ExecutedQuantity;
    uint64_t ExecutionId;
    ExecutionFlagsT ExecutionFlags;
} OrderExecutedMessageT;

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
    uint64_t Price;
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
   Version: 1.11
   Date: Monday, February 27, 2023
   Specification: Cboe_Europe_CEDX_MCP_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
