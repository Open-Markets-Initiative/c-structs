/*******************************************************************************
 * C Structs For Nyse Equities Amex Xdp IntegratedFeed 2.1.g protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Status Values
 */ 
#define ENUM_AUCTION_STATUS_WILL_RUN_OPEN_CLOSE_0 = 0
#define ENUM_AUCTION_STATUS_WILL_RUN_INTEREST_1 = 1
#define ENUM_AUCTION_STATUS_WILL_NOT_RUN_IMBALANCE_2 = 2
#define ENUM_AUCTION_STATUS_WILL_NOT_RUN_TRANSITION_TO_CLOSING_3 = 3

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_EARLY_OPENING_O = 'O'
#define ENUM_AUCTION_TYPE_CORE_OPENING_M = 'M'
#define ENUM_AUCTION_TYPE_REOPENING_H = 'H'
#define ENUM_AUCTION_TYPE_CLOSING_C = 'C'
#define ENUM_AUCTION_TYPE_REGULATORY_IMBALANCE_R = 'R'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_EARLY_OPENING_E = 'E'
#define ENUM_CROSS_TYPE_OPENING_O = 'O'
#define ENUM_CROSS_TYPE_REOPENING_5 = '5'
#define ENUM_CROSS_TYPE_CLOSING_6 = '6'

/*
 * Delivery Flag Values
 */ 
#define ENUM_DELIVERY_FLAG_HEARTBEAT_1 = 1
#define ENUM_DELIVERY_FLAG_XDP_FAILOVER_10 = 10
#define ENUM_DELIVERY_FLAG_ORIGINAL_MESSAGE_11 = 11
#define ENUM_DELIVERY_FLAG_SEQUENCE_NUMBER_RESET_MESSAGE_12 = 12
#define ENUM_DELIVERY_FLAG_ONE_RETRANSMISSION_PACKET_13 = 13
#define ENUM_DELIVERY_FLAG_RETRANSMISSION_SEQUENCE_MESSAGE_15 = 15
#define ENUM_DELIVERY_FLAG_ONE_REFRESH_PACKET_17 = 17
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_START_18 = 18
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_MESSAGE_19 = 19
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_END_20 = 20
#define ENUM_DELIVERY_FLAG_MESSAGE_UNAVAILABLE_21 = 21

/*
 * Exchange Code Values
 */ 
#define ENUM_EXCHANGE_CODE_NYSE_AMERICAN_A = 'A'
#define ENUM_EXCHANGE_CODE_NYSE_NATIONAL_C = 'C'
#define ENUM_EXCHANGE_CODE_NYSE_N = 'N'
#define ENUM_EXCHANGE_CODE_NYSE_ARCA_P = 'P'
#define ENUM_EXCHANGE_CODE_NASDAQ_Q = 'Q'
#define ENUM_EXCHANGE_CODE_IEX_V = 'V'
#define ENUM_EXCHANGE_CODE_BATS_Z = 'Z'
#define ENUM_EXCHANGE_CODE_GLOBAL_OTC_B = 'B'
#define ENUM_EXCHANGE_CODE_OTCBB_U = 'U'
#define ENUM_EXCHANGE_CODE_OTHER_OTC_V = 'V'

/*
 * Freeze Status Values
 */ 
#define ENUM_FREEZE_STATUS_NO_IMBALANCE_FREEZE_0 = 0
#define ENUM_FREEZE_STATUS_IMBALANCE_FREEZE_1 = 1

/*
 * Halt Condition Values
 */ 
#define ENUM_HALT_CONDITION_SECURITY_NOT_DELAYEDHALTED_~ = '~'
#define ENUM_HALT_CONDITION_NOT_DELAYEDHALTED_NYSE_TAPE_A_ONLY = ' '
#define ENUM_HALT_CONDITION_NEWS_DISSEMINATION_D = 'D'
#define ENUM_HALT_CONDITION_ORDER_IMBALANCE_I = 'I'
#define ENUM_HALT_CONDITION_NEWS_PENDING_P = 'P'
#define ENUM_HALT_CONDITION_LULD_PAUSE_M = 'M'
#define ENUM_HALT_CONDITION_RELATED_SECURITY_NOT_USED_S = 'S'
#define ENUM_HALT_CONDITION_EQUIPMENT_CHANGEOVER_X = 'X'
#define ENUM_HALT_CONDITION_NO_OPEN_NO_RESUME_Z = 'Z'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_11 = '1'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_22 = '2'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_33 = '3'

/*
 * Imbalance Side Values
 */ 
#define ENUM_IMBALANCE_SIDE_NO_IMBALANCE = ' '
#define ENUM_IMBALANCE_SIDE_BUY_SIDE_B = 'B'
#define ENUM_IMBALANCE_SIDE_SELL_SIDE_S = 'S'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_NYSE_EQUITIES_1 = 1
#define ENUM_MARKET_ID_NYSE_ARCA_EQUITIES_3 = 3
#define ENUM_MARKET_ID_NYSE_ARCA_OPTIONS_4 = 4
#define ENUM_MARKET_ID_NYSE_BONDS_5 = 5
#define ENUM_MARKET_ID_GLOBAL_OTC_6 = 6
#define ENUM_MARKET_ID_NYSE_AMEX_OPTIONS_8 = 8
#define ENUM_MARKET_ID_NYSE_AMERICAN_EQUITIES_9 = 9
#define ENUM_MARKET_ID_NYSE_NATIONAL_EQUITIES_10 = 10

/*
 * Market State Values
 */ 
#define ENUM_MARKET_STATE_PREOPENING_P = 'P'
#define ENUM_MARKET_STATE_EARLY_SESSION_E = 'E'
#define ENUM_MARKET_STATE_CORE_SESSION_O = 'O'
#define ENUM_MARKET_STATE_LATE_SESSION_L = 'L'
#define ENUM_MARKET_STATE_CLOSED_X = 'X'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE_1 = 1
#define ENUM_MESSAGE_TYPE_SOURCE_TIME_REFERENCE_MESSAGE_2 = 2
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_MESSAGE_3 = 3
#define ENUM_MESSAGE_TYPE_RETRANSMISSION_REQUEST_MESSAGE_10 = 10
#define ENUM_MESSAGE_TYPE_REQUEST_RESPONSE_MESSAGE_11 = 11
#define ENUM_MESSAGE_TYPE_HEARTBEAT_RESPONSE_MESSAGE_12 = 12
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_REQUEST_MESSAGE_13 = 13
#define ENUM_MESSAGE_TYPE_REFRESH_REQUEST_MESSAGE_15 = 15
#define ENUM_MESSAGE_TYPE_MESSAGE_UNAVAILABLE_MESSAGE_31 = 31
#define ENUM_MESSAGE_TYPE_SYMBOL_CLEAR_MESSAGE_32 = 32
#define ENUM_MESSAGE_TYPE_SECURITY_STATUS_MESSAGE_34 = 34
#define ENUM_MESSAGE_TYPE_REFRESH_HEADER_MESSAGE_35 = 35
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE_100 = 100
#define ENUM_MESSAGE_TYPE_MODIFY_ORDER_MESSAGE_101 = 101
#define ENUM_MESSAGE_TYPE_REPLACE_ORDER_MESSAGE_104 = 104
#define ENUM_MESSAGE_TYPE_DELETE_ORDER_MESSAGE_102 = 102
#define ENUM_MESSAGE_TYPE_TRADE_CANCEL_MESSAGE_112 = 112
#define ENUM_MESSAGE_TYPE_CROSS_TRADE_MESSAGE_111 = 111
#define ENUM_MESSAGE_TYPE_CROSS_CORRECTION_MESSAGE_113 = 113
#define ENUM_MESSAGE_TYPE_RETAIL_PRICE_IMPROVEMENT_MESSAGE_114 = 114
#define ENUM_MESSAGE_TYPE_ADD_ORDER_REFRESH_MESSAGE_106 = 106
#define ENUM_MESSAGE_TYPE_IMBALANCE_MESSAGE_105 = 105
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTION_MESSAGE_103 = 103
#define ENUM_MESSAGE_TYPE_NON_DISPLAYED_TRADE_MESSAGE_110 = 110
#define ENUM_MESSAGE_TYPE_STOCK_SUMMARY_MESSAGE_223 = 223

/*
 * Position Change Values
 */ 
#define ENUM_POSITION_CHANGE_KEPT_0 = 0
#define ENUM_POSITION_CHANGE_LOST_1 = 1

/*
 * Price Resolution Values
 */ 
#define ENUM_PRICE_RESOLUTION_ALL_PENNY_0 = 0
#define ENUM_PRICE_RESOLUTION_PENNY_NICKEL_1 = 1
#define ENUM_PRICE_RESOLUTION_NICKEL_DIME_5 = 5

/*
 * Printable Flag Values
 */ 
#define ENUM_PRINTABLE_FLAG_NOT_PRINTED_0 = 0
#define ENUM_PRINTABLE_FLAG_PRINTED_1 = 1

/*
 * Retransmit Method Values
 */ 
#define ENUM_RETRANSMIT_METHOD_UDP_0 = 0

/*
 * Round Lot Values
 */ 
#define ENUM_ROUND_LOT_YES_Y = 'Y'
#define ENUM_ROUND_LOT_NO_N = 'N'

/*
 * Rpi Indicator Values
 */ 
#define ENUM_RPI_INDICATOR_NO_RETAIL_INTEREST = ' '
#define ENUM_RPI_INDICATOR_INTEREST_ON_BID_A = 'A'
#define ENUM_RPI_INDICATOR_INTEREST_ON_OFFER_B = 'B'
#define ENUM_RPI_INDICATOR_INTEREST_ON_BID_AND_OFFER_C = 'C'

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_OPENING_DELAY_3 = '3'
#define ENUM_SECURITY_STATUS_TRADING_HALT_4 = '4'
#define ENUM_SECURITY_STATUS_RESUME_5 = '5'
#define ENUM_SECURITY_STATUS_NO_OPENNO_RESUME_6 = '6'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_ACTIVATED_DAY_1A = 'A'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_CONTINUED_DAY_2C = 'C'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_DEACTIVATED_D = 'D'
#define ENUM_SECURITY_STATUS_PREOPENING_P = 'P'
#define ENUM_SECURITY_STATUS_EARLY_SESSION_E = 'E'
#define ENUM_SECURITY_STATUS_CORE_SESSION_O = 'O'
#define ENUM_SECURITY_STATUS_LATE_SESSION_NON_NYSE_ONLY_L = 'L'
#define ENUM_SECURITY_STATUS_CLOSED_X = 'X'
#define ENUM_SECURITY_STATUS_TIME_T = 'T'
#define ENUM_SECURITY_STATUS_PRICE_INDICATION_I = 'I'
#define ENUM_SECURITY_STATUS_PRE_OPENING_PRICE_INDICATION_G = 'G'
#define ENUM_SECURITY_STATUS_RULE_15_INDICATION_R = 'R'

/*
 * Security Type Values
 */ 
#define ENUM_SECURITY_TYPE_COMMON_STOCK_A = 'A'
#define ENUM_SECURITY_TYPE_PREFERRED_STOCK_B = 'B'
#define ENUM_SECURITY_TYPE_WARRANT_C = 'C'
#define ENUM_SECURITY_TYPE_RIGHT_D = 'D'
#define ENUM_SECURITY_TYPE_CORPORATE_BOND_E = 'E'
#define ENUM_SECURITY_TYPE_TREASURY_BOND_F = 'F'
#define ENUM_SECURITY_TYPE_STRUCTURED_PRODUCT_G = 'G'
#define ENUM_SECURITY_TYPE_ADR_COMMON_H = 'H'
#define ENUM_SECURITY_TYPE_ADR_PREFERRED_I = 'I'
#define ENUM_SECURITY_TYPE_ADR_WARRANTS_J = 'J'
#define ENUM_SECURITY_TYPE_ADR_RIGHTS_K = 'K'
#define ENUM_SECURITY_TYPE_ADR_CORPORATE_BOND_L = 'L'
#define ENUM_SECURITY_TYPE_NY_REGISTERED_SHARE_M = 'M'
#define ENUM_SECURITY_TYPE_GLOBAL_REGISTERED_SHARE_N = 'N'
#define ENUM_SECURITY_TYPE_INDEX_O = 'O'
#define ENUM_SECURITY_TYPE_FUND_P = 'P'
#define ENUM_SECURITY_TYPE_BASKET_Q = 'Q'
#define ENUM_SECURITY_TYPE_UNIT_R = 'R'
#define ENUM_SECURITY_TYPE_LIQUIDATING_TRUST_S = 'S'
#define ENUM_SECURITY_TYPE_UNKNOWN_U = 'U'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY_B = 'B'
#define ENUM_SIDE_SELL_S = 'S'

/*
 * Ssr State Values
 */ 
#define ENUM_SSR_STATE_NO_SHORT_SALE_RESTRICTION_IN_EFFECT_~ = '~'
#define ENUM_SSR_STATE_SHORT_SALE_RESTRICTION_IN_EFFECT_E = 'E'

/*
 * Ssr Triggering Exchange Id Values
 */ 
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_AMERICAN_A = 'A'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_BX_B = 'B'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_NATIONAL_C = 'C'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_FINRA_D = 'D'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_ISE_I = 'I'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_EDGA_J = 'J'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_EDGX_K = 'K'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CHX_M = 'M'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_N = 'N'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_ARCA_P = 'P'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_Q = 'Q'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CTS_S = 'S'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_T = 'T'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_IEX_V = 'V'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CBSX_W = 'W'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_PSX_X = 'X'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_BATS_YY = 'Y'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_BATS_Z = 'Z'

/*
 * Status Values
 */ 
#define ENUM_STATUS_MESSAGE_WAS_ACCEPTED_0 = '0'
#define ENUM_STATUS_REJECTED_DUE_TO_AN_INVALID_SOURCE_ID_1 = '1'
#define ENUM_STATUS_INVALID_SEQUENCE_RANGE_2 = '2'
#define ENUM_STATUS_MAXIMUM_SEQUENCE_RANGE_3 = '3'
#define ENUM_STATUS_MAXIMUM_REQUEST_IN_A_DAY_4 = '4'
#define ENUM_STATUS_MAXIMUM_REFRESH_REQUESTS_IN_A_DAY_5 = '5'
#define ENUM_STATUS_OLD_SEQ_NUM_TTL_6 = '6'
#define ENUM_STATUS_INVALID_CHANNEL_ID_7 = '7'
#define ENUM_STATUS_INVALID_PRODUCT_ID_8 = '8'
#define ENUM_STATUS_1_INVALID_MSG_TYPE_OR_2_MISMATCH_BETWEEN_MSG_TYPE_AND_MSG_SIZE_9 = '9'


/*******************************************************************************
 * Structs
 *******************************************************************************/

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
 * Structure: Heartbeat Response Message
 */ 
typedef struct {
    char SourceId[10];
} HeartbeatResponseMessageT;

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
 * Structure: Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t MessageSize;
    uint16_t MessageType;
} MessageHeaderT;

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
 * Structure: Packet
 */ 
typedef struct {
    PacketHeaderT PacketHeader;
} PacketT;

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
 * Structure: Refresh Header Message
 */ 
typedef struct {
    uint16_t CurrentRefreshPkt;
    uint16_t TotalRefreshPkts;
    uint32_t LastSeqNum;
    uint32_t LastSymbolSeqNum;
} RefreshHeaderMessageT;

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
 * Structure: Retail Price Improvement Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    char RpiIndicator;
} RetailPriceImprovementMessageT;

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
 * Structure: Sequence Number Reset Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint8_t ProductId;
    uint8_t ChannelId;
} SequenceNumberResetMessageT;

/*
 * Structure: Source Time Reference Message
 */ 
typedef struct {
    uint32_t Id;
    uint32_t SymbolSeqNum;
    uint32_t SourceTime;
} SourceTimeReferenceMessageT;

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
 * Structure: Symbol Clear Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t NextSourceSeqNum;
} SymbolClearMessageT;

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
 * Structure: Trade Cancel Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint32_t TradeId;
} TradeCancelMessageT;

