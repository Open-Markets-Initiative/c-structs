/*******************************************************************************
 * C Structs For Nyse Equities Xdp Bqt 1.7.a Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Ask Quote Condition Values
 */ 
#define ENUM_ASK_QUOTE_CONDITION_CLOSING 'C'
#define ENUM_ASK_QUOTE_CONDITION_OPENING_QUOTE 'O'
#define ENUM_ASK_QUOTE_CONDITION_REGULAR_QUOTE 'R'
#define ENUM_ASK_QUOTE_CONDITION_SLOW_ON_THE_BID_AND_ASK 'W'

/*
 * Bid Quote Condition Values
 */ 
#define ENUM_BID_QUOTE_CONDITION_CLOSING 'C'
#define ENUM_BID_QUOTE_CONDITION_OPENING_QUOTE 'O'
#define ENUM_BID_QUOTE_CONDITION_REGULAR_QUOTE 'R'
#define ENUM_BID_QUOTE_CONDITION_SLOW_ON_THE_BID_AND_ASK 'W'

/*
 * Complete Values
 */ 
#define ENUM_COMPLETE_NORMAL 0
#define ENUM_COMPLETE_ABNORMAL 1

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
#define ENUM_EXCHANGE_CODE_GLOBAL_OTC 'B'
#define ENUM_EXCHANGE_CODE_NYSE 'N'
#define ENUM_EXCHANGE_CODE_NYSE_ARCA 'P'
#define ENUM_EXCHANGE_CODE_NASDAQ 'Q'
#define ENUM_EXCHANGE_CODE_OTCBB 'U'
#define ENUM_EXCHANGE_CODE_OTHER_OTC 'V'
#define ENUM_EXCHANGE_CODE_BATS 'Z'

/*
 * Halt Condition Values
 */ 
#define ENUM_HALT_CONDITION_SECURITY_NOT_DELAYEDHALTED '~'
#define ENUM_HALT_CONDITION_NOT_APPLICABLE ' '
#define ENUM_HALT_CONDITION_NEWS_DISSEMINATION 'D'
#define ENUM_HALT_CONDITION_ORDER_IMBALANCE 'I'
#define ENUM_HALT_CONDITION_NEWS_PENDING 'P'
#define ENUM_HALT_CONDITION_VOLATILITY_TRADING_PAUSE 'M'
#define ENUM_HALT_CONDITION_EQUIPMENT_CHANGEOVER 'X'
#define ENUM_HALT_CONDITION_NO_OPEN_NO_RESUME 'Z'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_1 '1'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_2 '2'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_3 '3'

/*
 * Market Id Values
 */ 
#define ENUM_MARKET_ID_NYSE_GROUP_BQT 0
#define ENUM_MARKET_ID_NYSE_CASH 1
#define ENUM_MARKET_ID_NYSE_ARCA_CASH 3
#define ENUM_MARKET_ID_NYSE_ARCA_OPTIONS 4
#define ENUM_MARKET_ID_NYSE_BONDS 5
#define ENUM_MARKET_ID_GLOBAL_OTC 6
#define ENUM_MARKET_ID_NYSE_AMEX_OPTIONS 8
#define ENUM_MARKET_ID_NYSE_AMERICAN_EQUITIES 9
#define ENUM_MARKET_ID_NYSE_NATIONAL_EQUITIES 10

/*
 * Market Id Of Best Ask Values
 */ 
#define ENUM_MARKET_ID_OF_BEST_ASK_NYSE_GROUP_BQT 0
#define ENUM_MARKET_ID_OF_BEST_ASK_NYSE 1
#define ENUM_MARKET_ID_OF_BEST_ASK_NYSE_ARCA 3
#define ENUM_MARKET_ID_OF_BEST_ASK_NYSE_AMERICAN 9

/*
 * Market Id Of Best Bid Values
 */ 
#define ENUM_MARKET_ID_OF_BEST_BID_NYSE_GROUP_BQT 0
#define ENUM_MARKET_ID_OF_BEST_BID_NYSE 1
#define ENUM_MARKET_ID_OF_BEST_BID_NYSE_ARCA 3
#define ENUM_MARKET_ID_OF_BEST_BID_NYSE_AMERICAN 9

/*
 * Market Id Of High Price Values
 */ 
#define ENUM_MARKET_ID_OF_HIGH_PRICE_NYSE_GROUP_BQT 0
#define ENUM_MARKET_ID_OF_HIGH_PRICE_NYSE 1
#define ENUM_MARKET_ID_OF_HIGH_PRICE_NYSE_ARCA 3
#define ENUM_MARKET_ID_OF_HIGH_PRICE_NYSE_AMERICAN 9

/*
 * Market Id Of Low Price Values
 */ 
#define ENUM_MARKET_ID_OF_LOW_PRICE_NYSE_GROUP_BQT 0
#define ENUM_MARKET_ID_OF_LOW_PRICE_NYSE 1
#define ENUM_MARKET_ID_OF_LOW_PRICE_NYSE_ARCA 3
#define ENUM_MARKET_ID_OF_LOW_PRICE_NYSE_AMERICAN 9

/*
 * Market Id Of Open Price Values
 */ 
#define ENUM_MARKET_ID_OF_OPEN_PRICE_NYSE_GROUP_BQT 0
#define ENUM_MARKET_ID_OF_OPEN_PRICE_NYSE 1
#define ENUM_MARKET_ID_OF_OPEN_PRICE_NYSE_ARCA 3
#define ENUM_MARKET_ID_OF_OPEN_PRICE_NYSE_AMERICAN 9

/*
 * Market Id Of The Close Values
 */ 
#define ENUM_MARKET_ID_OF_THE_CLOSE_NYSE_GROUP_BQT 0
#define ENUM_MARKET_ID_OF_THE_CLOSE_NYSE 1
#define ENUM_MARKET_ID_OF_THE_CLOSE_NYSE_ARCA 3
#define ENUM_MARKET_ID_OF_THE_CLOSE_NYSE_AMERICAN 9

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
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_MESSAGE 3
#define ENUM_MESSAGE_TYPE_RETRANSMISSION_REQUEST_MESSAGE 10
#define ENUM_MESSAGE_TYPE_REQUEST_RESPONSE_MESSAGE 11
#define ENUM_MESSAGE_TYPE_HEARTBEAT_RESPONSE_MESSAGE 12
#define ENUM_MESSAGE_TYPE_SYMBOL_INDEX_MAPPING_REQUEST_MESSAGE 13
#define ENUM_MESSAGE_TYPE_REFRESH_REQUEST_MESSAGE 15
#define ENUM_MESSAGE_TYPE_MESSAGE_UNAVAILABLE_MESSAGE 31
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_SYMBOL_CLEAR_MESSAGE 32
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_TRADING_SESSION_CHANGE_MESSAGE 33
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_SECURITY_STATUS_MESSAGE 34
#define ENUM_MESSAGE_TYPE_REFRESH_HEADER_MESSAGE 35
#define ENUM_MESSAGE_TYPE_BQT_MESSAGE 142
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_SINGLE_SIDED_QUOTE_MESSAGE 143
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_TRADE_MESSAGE 220
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_TRADE_CANCEL_MESSAGE 221
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_TRADE_CORRECTION_MESSAGE 222
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_STOCK_SUMMARY_MESSAGE 229
#define ENUM_MESSAGE_TYPE_CONSOLIDATED_VOLUME_MESSAGE 240

/*
 * Price Resolution Values
 */ 
#define ENUM_PRICE_RESOLUTION_ALL_PENNY 0
#define ENUM_PRICE_RESOLUTION_PENNY_NICKEL 1
#define ENUM_PRICE_RESOLUTION_NICKEL_DIME 5

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_CLOSING 'C'
#define ENUM_QUOTE_CONDITION_OPENING_QUOTE 'O'
#define ENUM_QUOTE_CONDITION_REGULAR_QUOTE 'R'
#define ENUM_QUOTE_CONDITION_SLOW_ON_THE_BID_AND_ASK 'W'
#define ENUM_QUOTE_CONDITION_EMPTY_QUOTE 'OxOO'

/*
 * Reason Values
 */ 
#define ENUM_REASON_NEW_TRADE 0
#define ENUM_REASON_TRADE_CANCELLATION 1
#define ENUM_REASON_TRADE_ERROR 2
#define ENUM_REASON_TRADE_CORRECTION 3
#define ENUM_REASON_CLOSING_END_TRADE_SUMMARY 4

/*
 * Retail Pricing Indicator Values
 */ 
#define ENUM_RETAIL_PRICING_INDICATOR_NO_RETAIL_INTEREST 0x00
#define ENUM_RETAIL_PRICING_INDICATOR_RETAIL_INTEREST_ON_THE_BID_SIDE 0x01
#define ENUM_RETAIL_PRICING_INDICATOR_RETAIL_INTEREST_ON_THE_ASK_SIDE 0x02
#define ENUM_RETAIL_PRICING_INDICATOR_COMBINATION_OF_RETAIL_INTEREST_ON_BID_AND_ASK_SIDE 0x04

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
 * Session State Values
 */ 
#define ENUM_SESSION_STATE_EARLY_SESSION_STATE 'X'
#define ENUM_SESSION_STATE_CORE_SESSION_STATE 'Y'
#define ENUM_SESSION_STATE_LATE_SESSION_STATE 'Z'

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

/*
 * Trade Condition 1 Values
 */ 
#define ENUM_TRADE_CONDITION_1_REGULAR_SALE '@'
#define ENUM_TRADE_CONDITION_1_CASH 'C'
#define ENUM_TRADE_CONDITION_1_NEXT_DAY_TRADE 'N'
#define ENUM_TRADE_CONDITION_1_SELLER 'R'

/*
 * Trade Condition 2 Values
 */ 
#define ENUM_TRADE_CONDITION_2_NA ' '
#define ENUM_TRADE_CONDITION_2_INTERMARKET_SWEEP_ORDER 'F'
#define ENUM_TRADE_CONDITION_2_MARKET_CENTER_OPENING_TRADE 'O'
#define ENUM_TRADE_CONDITION_2_DERIVATIVELY_PRICED '4'
#define ENUM_TRADE_CONDITION_2_MARKET_CENTER_REOPENING_TRADE '5'
#define ENUM_TRADE_CONDITION_2_MARKET_CENTER_CLOSING_TRADE '6'
#define ENUM_TRADE_CONDITION_2_CORRECTED_LAST_SALE_PRICE '9'

/*
 * Trade Condition 3 Values
 */ 
#define ENUM_TRADE_CONDITION_3_NA ' '
#define ENUM_TRADE_CONDITION_3_SOLD_LAST 'L'
#define ENUM_TRADE_CONDITION_3_EXTENDED_HOURS_TRADE 'T'
#define ENUM_TRADE_CONDITION_3_EXTENDED_HOURS_SOLD_OUT_OF_SEQUENCE 'U'
#define ENUM_TRADE_CONDITION_3_SOLD 'Z'

/*
 * Trade Condition 4 Values
 */ 
#define ENUM_TRADE_CONDITION_4_NA ' '
#define ENUM_TRADE_CONDITION_4_REGULAR_SALE '@'
#define ENUM_TRADE_CONDITION_4_AVERAGE_PRICE_TRADE 'B'
#define ENUM_TRADE_CONDITION_4_AUTOMATIC_EXECUTION 'E'
#define ENUM_TRADE_CONDITION_4_PRICE_VARIATION_TRADE 'H'
#define ENUM_TRADE_CONDITION_4_ODD_LOT_TRADE 'I'
#define ENUM_TRADE_CONDITION_4_RULE_127_NYSE_ONLY_OR_RULE_155_NYSE_AMERICAN_ONLY 'K'
#define ENUM_TRADE_CONDITION_4_OFFICIAL_CLOSING_PRICE 'M'
#define ENUM_TRADE_CONDITION_4_PRIOR_REFERENCE_PRICE 'P'
#define ENUM_TRADE_CONDITION_4_OFFICIAL_OPEN_PRICE 'Q'
#define ENUM_TRADE_CONDITION_4_STOCK_OPTION_TRADE 'V'
#define ENUM_TRADE_CONDITION_4_CROSS_TRADE 'X'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

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
    uint8_t NumClosePrices;
    uint16_t MarketIdOfTheClose;
    uint32_t Close;
} ConsolidatedStockSummaryMessageT;

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
 * Structure: Refresh Header Message
 */ 
typedef struct {
    uint16_t CurrentRefreshPkt;
    uint16_t TotalRefreshPkts;
    uint32_t LastSeqNum;
    uint32_t LastSymbolSeqNum;
} RefreshHeaderMessageT;

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
 * Structure: Consolidated Trading Session Change Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SymbolIndex;
    uint32_t SymbolSeqNum;
    uint8_t TradeSession;
    uint16_t MarketId;
} ConsolidatedTradingSessionChangeMessageT;

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
   Version: 1.7.a
   Date: Monday, July 24, 2017
   Specification: NYSE_BQT_Client_Specification_v2.1.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
