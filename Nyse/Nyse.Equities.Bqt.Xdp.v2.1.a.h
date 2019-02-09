/*******************************************************************************
 * C Structs For Nyse Equities Xdp Bqt 2.1.a protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Ask Quote Condition Values
 */ 
#define ENUM_ASK_QUOTE_CONDITION_CLOSING_C = 'C'
#define ENUM_ASK_QUOTE_CONDITION_OPENING_QUOTE_O = 'O'
#define ENUM_ASK_QUOTE_CONDITION_REGULAR_QUOTE_R = 'R'
#define ENUM_ASK_QUOTE_CONDITION_SLOW_ON_THE_BID_AND_ASK_W = 'W'

/*
 * Bid Quote Condition Values
 */ 
#define ENUM_BID_QUOTE_CONDITION_CLOSING_C = 'C'
#define ENUM_BID_QUOTE_CONDITION_OPENING_QUOTE_O = 'O'
#define ENUM_BID_QUOTE_CONDITION_REGULAR_QUOTE_R = 'R'
#define ENUM_BID_QUOTE_CONDITION_SLOW_ON_THE_BID_AND_ASK_W = 'W'

/*
 * Complete Values
 */ 
#define ENUM_COMPLETE_NORMAL_0 = "0"
#define ENUM_COMPLETE_ABNORMAL_1 = "1"

/*
 * Delivery Flag Values
 */ 
#define ENUM_DELIVERY_FLAG_HEARTBEAT_1 = "1"
#define ENUM_DELIVERY_FLAG_XDP_FAILOVER_10 = "10"
#define ENUM_DELIVERY_FLAG_ORIGINAL_MESSAGE_11 = "11"
#define ENUM_DELIVERY_FLAG_SEQUENCE_NUMBER_RESET_MESSAGE_12 = "12"
#define ENUM_DELIVERY_FLAG_ONE_RETRANSMISSION_PACKET_13 = "13"
#define ENUM_DELIVERY_FLAG_RETRANSMISSION_SEQUENCE_MESSAGE_15 = "15"
#define ENUM_DELIVERY_FLAG_ONE_REFRESH_PACKET_17 = "17"
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_START_18 = "18"
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_MESSAGE_19 = "19"
#define ENUM_DELIVERY_FLAG_REFRESH_SEQUENCE_END_20 = "20"
#define ENUM_DELIVERY_FLAG_MESSAGE_UNAVAILABLE_21 = "21"

/*
 * Exchange Code Values
 */ 
#define ENUM_EXCHANGE_CODE_NYSE_AMERICAN_A = 'A'
#define ENUM_EXCHANGE_CODE_GLOBAL_OTC_B = 'B'
#define ENUM_EXCHANGE_CODE_NYSE_N = 'N'
#define ENUM_EXCHANGE_CODE_NYSE_ARCA_P = 'P'
#define ENUM_EXCHANGE_CODE_NASDAQ_Q = 'Q'
#define ENUM_EXCHANGE_CODE_OTCBB_U = 'U'
#define ENUM_EXCHANGE_CODE_OTHER_OTC_V = 'V'
#define ENUM_EXCHANGE_CODE_BATS_Z = 'Z'

/*
 * Halt Condition Values
 */ 
#define ENUM_HALT_CONDITION_SECURITY_NOT_DELAYEDHALTED_~ = '~'
#define ENUM_HALT_CONDITION_NOT_APPLICABLE = ' '
#define ENUM_HALT_CONDITION_NEWS_DISSEMINATION_D = 'D'
#define ENUM_HALT_CONDITION_ORDER_IMBALANCE_I = 'I'
#define ENUM_HALT_CONDITION_NEWS_PENDING_P = 'P'
#define ENUM_HALT_CONDITION_VOLATILITY_TRADING_PAUSE_M = 'M'
#define ENUM_HALT_CONDITION_EQUIPMENT_CHANGEOVER_X = 'X'
#define ENUM_HALT_CONDITION_NO_OPEN_NO_RESUME_Z = 'Z'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_11 = '1'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_22 = '2'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_33 = '3'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_NYSE_GROUP_BQT_0 = "0"
#define ENUM_MARKET_ID_NYSE_1 = "1"
#define ENUM_MARKET_ID_NYSE_ARCA_3 = "3"
#define ENUM_MARKET_ID_NYSE_ARCA_OPTIONS_4 = "4"
#define ENUM_MARKET_ID_NYSE_BONDS_5 = "5"
#define ENUM_MARKET_ID_GLOBAL_OTC_6 = "6"
#define ENUM_MARKET_ID_NYSE_AMEX_OPTIONS_8 = "8"
#define ENUM_MARKET_ID_NYSE_AMERICAN_9 = "9"
#define ENUM_MARKET_ID_NYSE_NATIONAL_10 = "10"

/*
 * Market Id Of Best Ask Values
 */ 
#define ENUM_MARKET_ID_OF_BEST_ASK_NYSE_GROUP_BQT_0 = "0"
#define ENUM_MARKET_ID_OF_BEST_ASK_NYSE_1 = "1"
#define ENUM_MARKET_ID_OF_BEST_ASK_NYSE_ARCA_3 = "3"
#define ENUM_MARKET_ID_OF_BEST_ASK_NYSE_AMERICAN_9 = "9"

/*
 * Market Id Of Best Bid Values
 */ 
#define ENUM_MARKET_ID_OF_BEST_BID_NYSE_GROUP_BQT_0 = "0"
#define ENUM_MARKET_ID_OF_BEST_BID_NYSE_1 = "1"
#define ENUM_MARKET_ID_OF_BEST_BID_NYSE_ARCA_3 = "3"
#define ENUM_MARKET_ID_OF_BEST_BID_NYSE_AMERICAN_9 = "9"

/*
 * Market Id Of High Price Values
 */ 
#define ENUM_MARKET_ID_OF_HIGH_PRICE_NYSE_GROUP_BQT_0 = "0"
#define ENUM_MARKET_ID_OF_HIGH_PRICE_NYSE_1 = "1"
#define ENUM_MARKET_ID_OF_HIGH_PRICE_NYSE_ARCA_3 = "3"
#define ENUM_MARKET_ID_OF_HIGH_PRICE_NYSE_AMERICAN_9 = "9"

/*
 * Market Id Of Low Price Values
 */ 
#define ENUM_MARKET_ID_OF_LOW_PRICE_NYSE_GROUP_BQT_0 = "0"
#define ENUM_MARKET_ID_OF_LOW_PRICE_NYSE_1 = "1"
#define ENUM_MARKET_ID_OF_LOW_PRICE_NYSE_ARCA_3 = "3"
#define ENUM_MARKET_ID_OF_LOW_PRICE_NYSE_AMERICAN_9 = "9"

/*
 * Market Id Of Open Price Values
 */ 
#define ENUM_MARKET_ID_OF_OPEN_PRICE_NYSE_GROUP_BQT_0 = "0"
#define ENUM_MARKET_ID_OF_OPEN_PRICE_NYSE_1 = "1"
#define ENUM_MARKET_ID_OF_OPEN_PRICE_NYSE_ARCA_3 = "3"
#define ENUM_MARKET_ID_OF_OPEN_PRICE_NYSE_AMERICAN_9 = "9"

/*
 * Market ID of the Close Values
 */ 
#define ENUM_MARKET_ID_OF_THE_CLOSE_NYSE_GROUP_BQT_0 = "0"
#define ENUM_MARKET_ID_OF_THE_CLOSE_NYSE_1 = "1"
#define ENUM_MARKET_ID_OF_THE_CLOSE_NYSE_ARCA_3 = "3"
#define ENUM_MARKET_ID_OF_THE_CLOSE_NYSE_AMERICAN_9 = "9"

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
#define ENUM_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE_1 = "1"
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_MESSAGE_3 = "3"
#define ENUM_MESSAGE_TYPE_RETRANSMISSION_REQUEST_MESSAGE_10 = "10"
#define ENUM_MESSAGE_TYPE_REQUEST_RESPONSE_MESSAGE_11 = "11"
#define ENUM_MESSAGE_TYPE_HEARTBEAT_RESPONSE_MESSAGE_12 = "12"
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_REQUEST_MESSAGE_13 = "13"
#define ENUM_MESSAGE_TYPE_REFRESH_REQUEST_MESSAGE_15 = "15"
#define ENUM_MESSAGE_TYPE_MESSAGE_UNAVAILABLE_MESSAGE_31 = "31"
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_SYMBOL_CLEAR_MESSAGE_32 = "32"
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_TRADING_SESSION_CHANGE_MESSAGE_33 = "33"
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_SECURITY_STATUS_MESSAGE_34 = "34"
#define ENUM_MESSAGE_TYPE_REFRESH_HEADER_MESSAGE_35 = "35"
#define ENUM_MESSAGE_TYPE_BQT_MESSAGE_142 = "142"
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_SINGLE_SIDED_QUOTE_MESSAGE_143 = "143"
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_TRADE_MESSAGE_220 = "220"
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_TRADE_CANCEL_MESSAGE_221 = "221"
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_TRADE_CORRECTION_MESSAGE_222 = "222"
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_STOCK_SUMMARY_MESSAGE_229 = "229"
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_VOLUME_MESSAGE_240 = "240"

/*
 * Price Resolution Values
 */ 
#define ENUM_PRICE_RESOLUTION_ALL_PENNY_0 = "0"
#define ENUM_PRICE_RESOLUTION_PENNY_NICKEL_1 = "1"
#define ENUM_PRICE_RESOLUTION_NICKEL_DIME_5 = "5"

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_CLOSING_C = 'C'
#define ENUM_QUOTE_CONDITION_OPENING_QUOTE_O = 'O'
#define ENUM_QUOTE_CONDITION_REGULAR_QUOTE_R = 'R'
#define ENUM_QUOTE_CONDITION_SLOW_ON_THE_BID_AND_ASK_W = 'W'
#define ENUM_QUOTE_CONDITION_EMPTY_QUOTE_OXOO = 'OxOO'

/*
 * Reason Values
 */ 
#define ENUM_REASON_NEW_TRADE_0 = "0"
#define ENUM_REASON_TRADE_CANCELLATION_1 = "1"
#define ENUM_REASON_TRADE_ERROR_2 = "2"
#define ENUM_REASON_TRADE_CORRECTION_3 = "3"
#define ENUM_REASON_CLOSING_END_TRADE_SUMMARY_4 = "4"

/*
 * Retail Pricing Indicator Values
 */ 
#define ENUM_RETAIL_PRICING_INDICATOR_NO_RETAIL_INTEREST_0X00 = "0x00"
#define ENUM_RETAIL_PRICING_INDICATOR_RETAIL_INTEREST_ON_THE_BID_SIDE_0X01 = "0x01"
#define ENUM_RETAIL_PRICING_INDICATOR_RETAIL_INTEREST_ON_THE_ASK_SIDE_0X02 = "0x02"
#define ENUM_RETAIL_PRICING_INDICATOR_COMBINATION_OF_RETAIL_INTEREST_ON_BID_AND_ASK_SIDE_0X04 = "0x04"

/*
 * Retransmit Method Values
 */ 
#define ENUM_RETRANSMIT_METHOD_UDP_0 = "0"

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
#define ENUM_SECURITY_TYPE_ADR_A = 'A'
#define ENUM_SECURITY_TYPE_COMMON_STOCK_C = 'C'
#define ENUM_SECURITY_TYPE_DEBENTURES_D = 'D'
#define ENUM_SECURITY_TYPE_ETF_E = 'E'
#define ENUM_SECURITY_TYPE_FOREIGN_F = 'F'
#define ENUM_SECURITY_TYPE_US_DEPOSITARY_SHARES_H = 'H'
#define ENUM_SECURITY_TYPE_UNITS_I = 'I'
#define ENUM_SECURITY_TYPE_INDEX_LINKED_NOTES_L = 'L'
#define ENUM_SECURITY_TYPE_MISCLIQUID_TRUST_M = 'M'
#define ENUM_SECURITY_TYPE_ORDINARY_SHARES_O = 'O'
#define ENUM_SECURITY_TYPE_PREFERRED_STOCK_P = 'P'
#define ENUM_SECURITY_TYPE_RIGHTS_R = 'R'
#define ENUM_SECURITY_TYPE_SHARES_OF_BENEFICIARY_INTEREST_S = 'S'
#define ENUM_SECURITY_TYPE_TEST_T = 'T'
#define ENUM_SECURITY_TYPE_UNITS_U = 'U'
#define ENUM_SECURITY_TYPE_WARRANT_W = 'W'

/*
 * Session State Values
 */ 
#define ENUM_SESSION_STATE_EARLY_SESSION_STATE_X = 'X'
#define ENUM_SESSION_STATE_CORE_SESSION_STATE_Y = 'Y'
#define ENUM_SESSION_STATE_LATE_SESSION_STATE_Z = 'Z'

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
#define ENUM_STATUS_INVALID_MSG_TYPE_OR_MISMATCH_BETWEEN_MSG_TYPE_AND_MSG_SIZE_9 = '9'

/*
 * Trade Condition 1 Values
 */ 
#define ENUM_TRADE_CONDITION_1_REGULAR_SALE_@ = '@'
#define ENUM_TRADE_CONDITION_1_CASH_C = 'C'
#define ENUM_TRADE_CONDITION_1_NEXT_DAY_TRADE_N = 'N'
#define ENUM_TRADE_CONDITION_1_SELLER_R = 'R'

/*
 * Trade Condition 2 Values
 */ 
#define ENUM_TRADE_CONDITION_2_NA = ' '
#define ENUM_TRADE_CONDITION_2_INTERMARKET_SWEEP_ORDER_F = 'F'
#define ENUM_TRADE_CONDITION_2_MARKET_CENTER_OPENING_TRADE_O = 'O'
#define ENUM_TRADE_CONDITION_2_DERIVATIVELY_PRICED_4 = '4'
#define ENUM_TRADE_CONDITION_2_MARKET_CENTER_REOPENING_TRADE_5 = '5'
#define ENUM_TRADE_CONDITION_2_MARKET_CENTER_CLOSING_TRADE_6 = '6'
#define ENUM_TRADE_CONDITION_2_CORRECTED_LAST_SALE_PRICE_9 = '9'

/*
 * Trade Condition 3 Values
 */ 
#define ENUM_TRADE_CONDITION_3_NA = ' '
#define ENUM_TRADE_CONDITION_3_SOLD_LAST_L = 'L'
#define ENUM_TRADE_CONDITION_3_EXTENDED_HOURS_TRADE_T = 'T'
#define ENUM_TRADE_CONDITION_3_EXTENDED_HOURS_SOLD_OUT_OF_SEQUENCE_U = 'U'
#define ENUM_TRADE_CONDITION_3_SOLD_Z = 'Z'

/*
 * Trade Condition 4 Values
 */ 
#define ENUM_TRADE_CONDITION_4_NA = ' '
#define ENUM_TRADE_CONDITION_4_REGULAR_SALE_@ = '@'
#define ENUM_TRADE_CONDITION_4_AVERAGE_PRICE_TRADE_B = 'B'
#define ENUM_TRADE_CONDITION_4_AUTOMATIC_EXECUTION_E = 'E'
#define ENUM_TRADE_CONDITION_4_PRICE_VARIATION_TRADE_H = 'H'
#define ENUM_TRADE_CONDITION_4_ODD_LOT_TRADE_I = 'I'
#define ENUM_TRADE_CONDITION_4_RULE_127_NYSE_ONLY_OR_RULE_155_NYSE_AMERICAN_ONLY_K = 'K'
#define ENUM_TRADE_CONDITION_4_OFFICIAL_CLOSING_PRICE_M = 'M'
#define ENUM_TRADE_CONDITION_4_PRIOR_REFERENCE_PRICE_P = 'P'
#define ENUM_TRADE_CONDITION_4_OFFICIAL_OPEN_PRICE_Q = 'Q'
#define ENUM_TRADE_CONDITION_4_STOCK_OPTION_TRADE_V = 'V'
#define ENUM_TRADE_CONDITION_4_CROSS_TRADE_X = 'X'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Bqt Message
 */ 
typedef struct {
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNumber;
    uint32_t AskPrice;
    uint32_t AskVolume;
    uint32_t BidPrice;
    uint32_t BidVolume;
    char AskQuoteCondition;
    char BidQuoteCondition;
    uint8_t RetailPricingIndicator;
    uint16_t MarketIdOfBestAsk;
    uint16_t MarketIdOfBestBid;
} BqtMessageT;

/*
 * Structure: Close Price
 */ 
typedef struct {
    uint16_t MarketIdOfTheClose;
    uint32_t ClosingPrice;
} ClosePriceT;

/*
 * Structure: Consolidated Security Status Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    char SecurityStatus;
    char HaltCondition;
    uint16_t MarketId;
    char Reserved2[2];
    uint32_t Price1;
    uint32_t Price2;
    char SsrTriggeringExchangeId;
    uint32_t SsrTriggeringVolume;
    uint32_t Time;
    char SsrState;
    char MarketState;
    char SessionState;
} ConsolidatedSecurityStatusMessageT;

/*
 * Structure: Consolidated Single Sided Quote Message
 */ 
typedef struct {
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNumber;
    char Side;
    uint32_t Price;
    uint32_t Volume;
    char QuoteCondition;
    char RpiIndicator;
    uint16_t MarketId;
} ConsolidatedSingleSidedQuoteMessageT;

/*
 * Structure: Consolidated Stock Summary Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t HighPrice;
    uint32_t LowPrice;
    uint32_t Open;
    uint32_t TotalVolume;
    uint16_t MarketIdOfHighPrice;
    uint16_t MarketIdOfLowPrice;
    uint16_t MarketIdOfOpenPrice;
    uint8_t NumberOfClosePrices;
} ConsolidatedStockSummaryMessageT;

/*
 * Structure: Consolidated Symbol Clear Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t NextSourceSeqNum;
    uint16_t MarketId;
} ConsolidatedSymbolClearMessageT;

/*
 * Structure: Consolidated Trade Cancel Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNumber;
    uint32_t TradeId;
    uint16_t MarketId;
} ConsolidatedTradeCancelMessageT;

/*
 * Structure: Consolidated Trade Correction Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNumber;
    uint32_t OriginalTradeId;
    uint32_t TradeId;
    uint32_t Price;
    uint32_t Volume;
    char TradeCondition1;
    char TradeCondition2;
    char TradeCondition3;
    char TradeCondition4;
    uint16_t MarketId;
} ConsolidatedTradeCorrectionMessageT;

/*
 * Structure: Consolidated Trade Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint32_t TradeId;
    uint32_t Price;
    uint32_t Volume;
    char TradeCondition1;
    char TradeCondition2;
    char TradeCondition3;
    char TradeCondition4;
    uint16_t MarketId;
} ConsolidatedTradeMessageT;

/*
 * Structure: Consolidated Trading Session Change Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    TradeSessionT TradeSession;
    uint16_t MarketId;
} ConsolidatedTradingSessionChangeMessageT;

/*
 * Structure: Consolidated Volume Message
 */ 
typedef struct {
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNumber;
    uint32_t TotalVolume;
    uint8_t Reason;
    uint8_t Complete;
} ConsolidatedVolumeMessageT;

/*
 * Structure: Heartbeat Response Message
 */ 
typedef struct {
    char SourceId[10];
} HeartbeatResponseMessageT;

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
 * Structure: Sequence Number Reset Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint8_t ProductId;
    uint8_t ChannelId;
} SequenceNumberResetMessageT;

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
 * Structure: Trade Session
 */ 
typedef struct {
    char Reserved[5];
    char OkForLateHours[1];
    char OkForNationalHours[1];
    char OkForMorningHours[1];
} TradeSessionT;

