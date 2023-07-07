/*******************************************************************************
 * C Structs For Nyse Amex Equities Xdp IntegratedFeed 2.1.g Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Status Values
 */ 
#define ENUM_AUCTION_STATUS_WILL_RUN_OPEN_CLOSE 0
#define ENUM_AUCTION_STATUS_WILL_RUN_INTEREST 1
#define ENUM_AUCTION_STATUS_WILL_NOT_RUN_IMBALANCE 2
#define ENUM_AUCTION_STATUS_WILL_NOT_RUN_TRANSITION_TO_CLOSING 3

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_EARLY_OPENING 'O'
#define ENUM_AUCTION_TYPE_CORE_OPENING 'M'
#define ENUM_AUCTION_TYPE_REOPENING 'H'
#define ENUM_AUCTION_TYPE_CLOSING 'C'
#define ENUM_AUCTION_TYPE_REGULATORY_IMBALANCE 'R'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_EARLY_OPENING 'E'
#define ENUM_CROSS_TYPE_OPENING 'O'
#define ENUM_CROSS_TYPE_REOPENING '5'
#define ENUM_CROSS_TYPE_CLOSING '6'

/*
 * Delivery Flag Values
 */ 
#define ENUM_DELIVERY_FLAG_HEARTBEAT 1
#define ENUM_DELIVERY_FLAG_XDP_FAILOVER 10
#define ENUM_DELIVERY_FLAG_ORIGINAL_MESSAGE 11
#define ENUM_DELIVERY_FLAG_SEQUENCE_NUMBER_RESET_MESSAGE 12
#define ENUM_DELIVERY_FLAG_ONE_RETRANSMISSION_PACKET 13
#define ENUM_DELIVERY_FLAG_RETRANSMISSION_SEQUENCE_MESSAGE 15
#define ENUM_DELIVERY_FLAG_ONE_REFRESH_PACKET 17
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_START 18
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_MESSAGE 19
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_END 20
#define ENUM_DELIVERY_FLAG_MESSAGE_UNAVAILABLE 21

/*
 * Exchange Code Values
 */ 
#define ENUM_EXCHANGE_CODE_NYSE_AMERICAN 'A'
#define ENUM_EXCHANGE_CODE_NYSE_NATIONAL 'C'
#define ENUM_EXCHANGE_CODE_NYSE 'N'
#define ENUM_EXCHANGE_CODE_NYSE_ARCA 'P'
#define ENUM_EXCHANGE_CODE_NASDAQ 'Q'
#define ENUM_EXCHANGE_CODE_IEX 'V'
#define ENUM_EXCHANGE_CODE_BATS 'Z'
#define ENUM_EXCHANGE_CODE_GLOBAL_OTC 'B'
#define ENUM_EXCHANGE_CODE_OTCBB 'U'
#define ENUM_EXCHANGE_CODE_OTHER_OTC 'V'

/*
 * Freeze Status Values
 */ 
#define ENUM_FREEZE_STATUS_NO_IMBALANCE_FREEZE 0
#define ENUM_FREEZE_STATUS_IMBALANCE_FREEZE 1

/*
 * Halt Condition Values
 */ 
#define ENUM_HALT_CONDITION_SECURITY_NOT_DELAYEDHALTED '~'
#define ENUM_HALT_CONDITION_NOT_DELAYEDHALTED_NYSE_TAPE_A_ONLY ' '
#define ENUM_HALT_CONDITION_NEWS_DISSEMINATION 'D'
#define ENUM_HALT_CONDITION_ORDER_IMBALANCE 'I'
#define ENUM_HALT_CONDITION_NEWS_PENDING 'P'
#define ENUM_HALT_CONDITION_LULD_PAUSE 'M'
#define ENUM_HALT_CONDITION_RELATED_SECURITY_NOT_USED 'S'
#define ENUM_HALT_CONDITION_EQUIPMENT_CHANGEOVER 'X'
#define ENUM_HALT_CONDITION_NO_OPEN_NO_RESUME 'Z'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_1 '1'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_2 '2'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_3 '3'

/*
 * Imbalance Side Values
 */ 
#define ENUM_IMBALANCE_SIDE_NO_IMBALANCE ' '
#define ENUM_IMBALANCE_SIDE_BUY_SIDE 'B'
#define ENUM_IMBALANCE_SIDE_SELL_SIDE 'S'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_NYSE_EQUITIES 1
#define ENUM_MARKET_ID_NYSE_ARCA_EQUITIES 3
#define ENUM_MARKET_ID_NYSE_ARCA_OPTIONS 4
#define ENUM_MARKET_ID_NYSE_BONDS 5
#define ENUM_MARKET_ID_GLOBAL_OTC 6
#define ENUM_MARKET_ID_NYSE_AMEX_OPTIONS 8
#define ENUM_MARKET_ID_NYSE_AMERICAN_EQUITIES 9
#define ENUM_MARKET_ID_NYSE_NATIONAL_EQUITIES 10

/*
 * Market State Values
 */ 
#define ENUM_MARKET_STATE_PREOPENING 'P'
#define ENUM_MARKET_STATE_EARLY_SESSION 'E'
#define ENUM_MARKET_STATE_CORE_SESSION 'O'
#define ENUM_MARKET_STATE_LATE_SESSION 'L'
#define ENUM_MARKET_STATE_CLOSED 'X'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE 1
#define ENUM_MESSAGE_TYPE_SOURCE_TIME_REFERENCE_MESSAGE 2
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_MESSAGE 3
#define ENUM_MESSAGE_TYPE_RETRANSMISSION_REQUEST_MESSAGE 10
#define ENUM_MESSAGE_TYPE_REQUEST_RESPONSE_MESSAGE 11
#define ENUM_MESSAGE_TYPE_HEARTBEAT_RESPONSE_MESSAGE 12
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_REQUEST_MESSAGE 13
#define ENUM_MESSAGE_TYPE_REFRESH_REQUEST_MESSAGE 15
#define ENUM_MESSAGE_TYPE_MESSAGE_UNAVAILABLE_MESSAGE 31
#define ENUM_MESSAGE_TYPE_SYMBOL_CLEAR_MESSAGE 32
#define ENUM_MESSAGE_TYPE_SECURITY_STATUS_MESSAGE 34
#define ENUM_MESSAGE_TYPE_REFRESH_HEADER_MESSAGE 35
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE 100
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE 101
#define ENUM_MESSAGE_TYPE_REPLACE_ORDER_MESSAGE 104
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE 102
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_MESSAGE 112
#define ENUM_MESSAGE_TYPE_CROSS_TRADE_MESSAGE 111
#define ENUM_MESSAGE_TYPE_CROSS_CORRECTION_MESSAGE 113
#define ENUM_MESSAGE_TYPE_RETAIL_PRICE_IMPROVEMENT_MESSAGE 114
#define ENUM_MESSAGE_TYPE_ADD_ORDER_REFRESH_MESSAGE 106
#define ENUM_MESSAGE_TYPE_IMBALANCE_MESSAGE 105
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTION_MESSAGE 103
#define ENUM_MESSAGE_TYPE_NON_DISPLAYED_TRADE_MESSAGE 110
#define ENUM_MESSAGE_TYPE_STOCK_SUMMARY_MESSAGE 223

/*
 * Position Change Values
 */ 
#define ENUM_POSITION_CHANGE_KEPT 0
#define ENUM_POSITION_CHANGE_LOST 1

/*
 * Price Resolution Values
 */ 
#define ENUM_PRICE_RESOLUTION_ALL_PENNY 0
#define ENUM_PRICE_RESOLUTION_PENNY_NICKEL 1
#define ENUM_PRICE_RESOLUTION_NICKEL_DIME 5

/*
 * Printable Flag Values
 */ 
#define ENUM_PRINTABLE_FLAG_NOT_PRINTED 0
#define ENUM_PRINTABLE_FLAG_PRINTED 1

/*
 * Retransmit Method Values
 */ 
#define ENUM_RETRANSMIT_METHOD_UDP 0

/*
 * Round Lot Values
 */ 
#define ENUM_ROUND_LOT_YES 'Y'
#define ENUM_ROUND_LOT_NO 'N'

/*
 * Rpi Indicator Values
 */ 
#define ENUM_RPI_INDICATOR_NO_RETAIL_INTEREST ' '
#define ENUM_RPI_INDICATOR_INTEREST_ON_BID 'A'
#define ENUM_RPI_INDICATOR_INTEREST_ON_OFFER 'B'
#define ENUM_RPI_INDICATOR_INTEREST_ON_BID_AND_OFFER 'C'

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_OPENING_DELAY '3'
#define ENUM_SECURITY_STATUS_TRADING_HALT '4'
#define ENUM_SECURITY_STATUS_RESUME '5'
#define ENUM_SECURITY_STATUS_NO_OPENNO_RESUME '6'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_ACTIVATED_DAY_1 'A'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_CONTINUED_DAY_2 'C'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_DEACTIVATED 'D'
#define ENUM_SECURITY_STATUS_PREOPENING 'P'
#define ENUM_SECURITY_STATUS_EARLY_SESSION 'E'
#define ENUM_SECURITY_STATUS_CORE_SESSION 'O'
#define ENUM_SECURITY_STATUS_LATE_SESSION_NON_NYSE_ONLY 'L'
#define ENUM_SECURITY_STATUS_CLOSED 'X'
#define ENUM_SECURITY_STATUS_TIME 'T'
#define ENUM_SECURITY_STATUS_PRICE_INDICATION 'I'
#define ENUM_SECURITY_STATUS_PRE_OPENING_PRICE_INDICATION 'G'
#define ENUM_SECURITY_STATUS_RULE_15_INDICATION 'R'

/*
 * Security Type Values
 */ 
#define ENUM_SECURITY_TYPE_ADR 'A'
#define ENUM_SECURITY_TYPE_COMMON_STOCK 'C'
#define ENUM_SECURITY_TYPE_DEBENTURES 'D'
#define ENUM_SECURITY_TYPE_ETF 'E'
#define ENUM_SECURITY_TYPE_FOREIGN 'F'
#define ENUM_SECURITY_TYPE_US_DEPOSITARY_SHARES 'H'
#define ENUM_SECURITY_TYPE_UNITS 'I'
#define ENUM_SECURITY_TYPE_INDEX_LINKED_NOTES 'L'
#define ENUM_SECURITY_TYPE_MISCLIQUID_TRUST 'M'
#define ENUM_SECURITY_TYPE_ORDINARY_SHARES 'O'
#define ENUM_SECURITY_TYPE_PREFERRED_STOCK 'P'
#define ENUM_SECURITY_TYPE_RIGHTS 'R'
#define ENUM_SECURITY_TYPE_SHARES_OF_BENEFICIARY_INTEREST 'S'
#define ENUM_SECURITY_TYPE_TEST 'T'
#define ENUM_SECURITY_TYPE_UNITS 'U'
#define ENUM_SECURITY_TYPE_WARRANT 'W'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 'B'
#define ENUM_SIDE_SELL 'S'

/*
 * Ssr State Values
 */ 
#define ENUM_SSR_STATE_NO_SHORT_SALE_RESTRICTION_IN_EFFECT '~'
#define ENUM_SSR_STATE_SHORT_SALE_RESTRICTION_IN_EFFECT 'E'

/*
 * Ssr Triggering Exchange Id Values
 */ 
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_AMERICAN 'A'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_BX 'B'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_NATIONAL 'C'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_FINRA 'D'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_ISE 'I'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_EDGA 'J'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_EDGX 'K'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CHX 'M'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE 'N'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_ARCA 'P'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ 'Q'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CTS 'S'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX 'T'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_IEX 'V'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CBSX 'W'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_PSX 'X'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_BATS_Y 'Y'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_BATS 'Z'

/*
 * Status Values
 */ 
#define ENUM_STATUS_MESSAGE_WAS_ACCEPTED '0'
#define ENUM_STATUS_REJECTED_DUE_TO_AN_INVALID_SOURCE_ID '1'
#define ENUM_STATUS_INVALID_SEQUENCE_RANGE '2'
#define ENUM_STATUS_MAXIMUM_SEQUENCE_RANGE '3'
#define ENUM_STATUS_MAXIMUM_REQUEST_IN_A_DAY '4'
#define ENUM_STATUS_MAXIMUM_REFRESH_REQUESTS_IN_A_DAY '5'
#define ENUM_STATUS_OLD_SEQ_NUM_TTL '6'
#define ENUM_STATUS_INVALID_CHANNEL_ID '7'
#define ENUM_STATUS_INVALID_PRODUCT_ID '8'
#define ENUM_STATUS_1_INVALID_MSG_TYPE_OR_2_MISMATCH_BETWEEN_MSG_TYPE_AND_MSG_SIZE '9'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Stock Summary Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t HighPrice;
    uint32_t LowPrice;
    uint32_t Open;
    uint32_t Close;
    uint32_t TotalVolume;
} StockSummaryMessageT;

/*
 * Structure: Non Displayed Trade Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint32_t TradeId;
    uint32_t Price;
    uint32_t Volume;
    uint8_t PrintableFlag;
    uint32_t DbExecId;
} NonDisplayedTradeMessageT;

/*
 * Structure: Order Execution Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint64_t OrderId;
    uint32_t TradeId;
    uint32_t Price;
    uint32_t Volume;
    uint8_t PrintableFlag;
    uint8_t NumParitySplits;
    uint32_t DbExecId;
} OrderExecutionMessageT;

/*
 * Structure: Imbalance Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint32_t ReferencePrice;
    uint32_t PairedQty;
    uint32_t TotalImbalanceQty;
    uint32_t MarketImbalanceQty;
    uint16_t AuctionTime;
    char AuctionType;
    char ImbalanceSide;
    uint32_t ContinuousBookClearingPrice;
    uint32_t ClosingOnlyClearingPrice;
    uint32_t SsrFilingPrice;
    uint32_t IndicativeMatchPrice;
    uint32_t UpperCollar;
    uint32_t LowerCollar;
    uint8_t AuctionStatus;
    uint8_t FreezeStatus;
    uint8_t NumExtensions;
} ImbalanceMessageT;

/*
 * Structure: Add Order Refresh Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint64_t OrderId;
    uint32_t Price;
    uint32_t Volume;
    char Side;
    char FirmId[5];
    uint8_t NumParitySplits;
} AddOrderRefreshMessageT;

/*
 * Structure: Retail Price Improvement Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    char RpiIndicator;
} RetailPriceImprovementMessageT;

/*
 * Structure: Cross Correction Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint32_t CrossId;
    uint32_t Volume;
} CrossCorrectionMessageT;

/*
 * Structure: Cross Trade Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint32_t CrossId;
    uint32_t Price;
    uint32_t Volume;
    char CrossType;
} CrossTradeMessageT;

/*
 * Structure: Trade Cancel Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint32_t TradeId;
} TradeCancelMessageT;

/*
 * Structure: Delete Order Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint64_t OrderId;
    uint8_t NumParitySplits;
} DeleteOrderMessageT;

/*
 * Structure: Replace Order Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint64_t OrderId;
    uint64_t NewOrderId;
    uint32_t Price;
    uint32_t Volume;
    uint8_t PrevPriceParitySplits;
    uint8_t NewPriceParitySplits;
} ReplaceOrderMessageT;

/*
 * Structure: Modify Order Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint64_t OrderId;
    uint32_t Price;
    uint32_t Volume;
    uint8_t PositionChange;
    uint8_t PrevPriceParitySplits;
    uint8_t NewPriceParitySplits;
} ModifyOrderMessageT;

/*
 * Structure: Add Order Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint64_t OrderId;
    uint32_t Price;
    uint32_t Volume;
    char Side;
    char FirmId[5];
    uint8_t NumParitySplits;
} AddOrderMessageT;

/*
 * Structure: Refresh Header Message
 */ 
typedef struct {
    uint16_t CurrentRefreshPkt;
    uint16_t TotalRefreshPkts;
    uint32_t LastSeqNum;
    uint32_t LastSymbolSeqNum;
} RefreshHeaderMessageT;

/*
 * Structure: Security Status Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    char SecurityStatus;
    char HaltCondition;
    char Reserved4[4];
    uint32_t Price1;
    uint32_t Price2;
    char SsrTriggeringExchangeId;
    uint32_t SsrTriggeringVolume;
    uint32_t Time;
    char SsrState;
    char MarketState;
    char SessionState[1];
} SecurityStatusMessageT;

/*
 * Structure: Symbol Clear Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t NextSourceSeqNum;
} SymbolClearMessageT;

/*
 * Structure: Message Unavailable Message
 */ 
typedef struct {
    uint32_t BeginSeqNum;
    uint32_t EndSeqNum;
    uint8_t ProductId;
    uint8_t ChannelId;
} MessageUnavailableMessageT;

/*
 * Structure: Refresh Request Message
 */ 
typedef struct {
    uint32_t SymbolIndex;
    char SourceId[10];
    uint8_t ProductId;
    uint8_t ChannelId;
} RefreshRequestMessageT;

/*
 * Structure: Symbol Index Mapping Request Message
 */ 
typedef struct {
    uint32_t SymbolIndex;
    char SourceId[10];
    uint8_t ProductId;
    uint8_t ChannelId;
    uint8_t RetransmitMethod;
} SymbolIndexMappingRequestMessageT;

/*
 * Structure: Heartbeat Response Message
 */ 
typedef struct {
    char SourceId[10];
} HeartbeatResponseMessageT;

/*
 * Structure: Request Response Message
 */ 
typedef struct {
    uint32_t RequestSeqNum;
    uint32_t BeginSeqNum;
    uint32_t EndSeqNum;
    char SourceId[10];
    uint8_t ProductId;
    uint8_t ChannelId;
    char Status;
} RequestResponseMessageT;

/*
 * Structure: Retransmission Request Message
 */ 
typedef struct {
    uint32_t BeginSeqNum;
    uint32_t EndSeqNum;
    char SourceId[10];
    uint8_t ProductId;
    uint8_t ChannelId;
} RetransmissionRequestMessageT;

/*
 * Structure: Symbol Index Mapping Message
 */ 
typedef struct {
    uint32_t SymbolIndex;
    char Symbol[11];
    char Reserved1[1];
    uint16_t MarketId;
    uint8_t SystemId;
    char ExchangeCode;
    uint8_t PriceScaleCode;
    char SecurityType;
    uint16_t LotSize;
    uint32_t PrevClosePrice;
    uint32_t PrevCloseVolume;
    uint8_t PriceResolution;
    char RoundLot;
    uint16_t Mpv;
    uint16_t UnitOfTrade;
    char Reserved2[2];
} SymbolIndexMappingMessageT;

/*
 * Structure: Source Time Reference Message
 */ 
typedef struct {
    uint32_t Id;
    uint32_t SymbolSeqNum;
    uint32_t SourceTime;
} SourceTimeReferenceMessageT;

/*
 * Structure: Sequence Number Reset Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint8_t ProductId;
    uint8_t ChannelId;
} SequenceNumberResetMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageSize;
    uint16_t MessageType;
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
    uint16_t PacketSize;
    uint8_t DeliveryFlag;
    uint8_t MessageCount;
    uint32_t SequenceNumber;
    uint32_t Timestamp;
    uint32_t Nanoseconds;
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
   Organization: New York Stock Exchange
   Version: 2.1.g
   Date: Monday, January 29, 2018
   Specification: XDP_Integrated_Feed_Client_Specification_v2.1g.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
