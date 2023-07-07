/*******************************************************************************
 * C Structs For Cboe Futures Pitch DepthOfBook 1.1.12 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Futures Flags Values
 */ 
#define ENUM_FUTURES_FLAGS_STANDARD 0
#define ENUM_FUTURES_FLAGS_VARIANCE 1

/*
 * Issue Values
 */ 
#define ENUM_ISSUE_INITIAL_SETTLEMENT 'S'
#define ENUM_ISSUE_REISSUED_SETTLEMENT 'R'
#define ENUM_ISSUE_INDICATIVE_SETTLEMENT 'I'

/*
 * Listing State Values
 */ 
#define ENUM_LISTING_STATE_ACTIVE 'A'
#define ENUM_LISTING_STATE_INACTIVE 'I'
#define ENUM_LISTING_STATE_TEST 'T'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIME_MESSAGE 0x20
#define ENUM_MESSAGE_TYPE_UNIT_CLEAR_MESSAGE 0x97
#define ENUM_MESSAGE_TYPE_TIME_REFERENCE_MESSAGE 0xB1
#define ENUM_MESSAGE_TYPE_FUTURES_INSTRUMENT_DEFINITION_MESSAGE 0xBB
#define ENUM_MESSAGE_TYPE_ADD_ORDER_LONG_MESSAGE 0x21
#define ENUM_MESSAGE_TYPE_ADD_ORDER_SHORT_MESSAGE 0x22
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE 0x23
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_LONG_MESSAGE 0x25
#define ENUM_MESSAGE_TYPE_REDUCE_SIZE_SHORT_MESSAGE 0x26
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_LONG_MESSAGE 0x27
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_SHORT_MESSAGE 0x28
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE 0x29
#define ENUM_MESSAGE_TYPE_TRADE_LONG_MESSAGE 0x2A
#define ENUM_MESSAGE_TYPE_TRADE_SHORT_MESSAGE 0x2B
#define ENUM_MESSAGE_TYPE_TRANSACTION_BEGIN 0xBC
#define ENUM_MESSAGE_TYPE_TRANSACTION_END 0xBD
#define ENUM_MESSAGE_TYPE_TRADE_BREAK_MESSAGE 0x2C
#define ENUM_MESSAGE_TYPE_SETTLEMENT_MESSAGE 0xB9
#define ENUM_MESSAGE_TYPE_END_OF_DAY_SUMMARY_MESSAGE 0xBA
#define ENUM_MESSAGE_TYPE_TRADING_STATUS_MESSAGE 0x31
#define ENUM_MESSAGE_TYPE_END_OF_SESSION_MESSAGE 0x2D

/*
 * Side Indicator Values
 */ 
#define ENUM_SIDE_INDICATOR_BUY_ORDER 'B'
#define ENUM_SIDE_INDICATOR_SELL_ORDER 'S'

/*
 * Trade Condition Values
 */ 
#define ENUM_TRADE_CONDITION_NORMAL_TRADE ' '
#define ENUM_TRADE_CONDITION_OPENING_TRADE 'O'
#define ENUM_TRADE_CONDITION_SPREAD_TRADE 'S'
#define ENUM_TRADE_CONDITION_BLOCK_TRADE 'B'
#define ENUM_TRADE_CONDITION_ECRP_TRADE 'E'

/*
 * Trading Status Values
 */ 
#define ENUM_TRADING_STATUS_HALTED 'H'
#define ENUM_TRADING_STATUS_QUOTE_ONLY 'Q'
#define ENUM_TRADING_STATUS_EXCHANGE_SPECIFIC_SUSPENSION 'S'
#define ENUM_TRADING_STATUS_TRADING 'T'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: End Of Session Message
 */ 
typedef struct {
    uint32_t TimeOffset;
} EndOfSessionMessageT;

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
 * Bitfield: Summary Flags
 */ 
typedef struct {
    uint8_t
    ReservedFlags : 7,
    OfferCloseValid : 1,
    LowPriceIsOffer : 1,
    LowPriceValid : 1,
    HighPriceIsBid : 1,
    HighPriceValid : 1;
} SummaryFlagsT;

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
 * Structure: Trade Break Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t ExecutionId;
} TradeBreakMessageT;

/*
 * Structure: Transaction End
 */ 
typedef struct {
    uint32_t TimeOffset;
} TransactionEndT;

/*
 * Structure: Transaction Begin
 */ 
typedef struct {
    uint32_t TimeOffset;
} TransactionBeginT;

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
    uint16_t ShortQuantity;
    uint16_t ShortPrice;
} ModifyOrderShortMessageT;

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
 * Structure: Reduce Size Short Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint16_t CanceledShortQuantity;
} ReduceSizeShortMessageT;

/*
 * Structure: Reduce Size Long Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    uint64_t OrderId;
    uint32_t CanceledLongQuantity;
} ReduceSizeLongMessageT;

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
 * Structure: Future Leg
 */ 
typedef struct {
    int32_t LegRatio;
    char LegSymbol[6];
} FutureLegT;

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

/*
 * Structure: Standard
 */ 
typedef struct {
} StandardT;

/*
 * Structure: Futures Instrument Definition Message
 */ 
typedef struct {
    uint32_t TimeOffset;
    char Symbol[6];
    uint32_t UnitTimestamp;
    char ReportSymbol[6];
    uint8_t FuturesFlags;
    uint32_t ExpirationDate;
    uint16_t ContractSize;
    char ListingState;
    uint64_t PriceIncrement;
    uint8_t LegCount;
    uint8_t LegOffset;
    uint8_t VarianceBlockOffset;
    uint32_t ContractDate;
} FuturesInstrumentDefinitionMessageT;

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
    uint32_t Epoch;
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
   Version: 1.1.12
   Date: Tuesday, January 12, 2021
   Specification: CBOE_FUTURES_EXCHANGE_MULTICAST_PITCH_SPECIFICATION.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
