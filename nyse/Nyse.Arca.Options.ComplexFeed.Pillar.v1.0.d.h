/*******************************************************************************
 * C Structs For Nyse Arca Options Pillar ComplexFeed 1.0.d Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Capacity Values
 */ 
#define ENUM_CAPACITY_NOT_SPECIFIED ' '
#define ENUM_CAPACITY_CUSTOMER '0'
#define ENUM_CAPACITY_FIRM '1'
#define ENUM_CAPACITY_BROKER_DEALER '2'
#define ENUM_CAPACITY_MARKET_MAKER '3'
#define ENUM_CAPACITY_PROFESSIONAL_CUSTOMER '8'

/*
 * Closing Only Indicator Values
 */ 
#define ENUM_CLOSING_ONLY_INDICATOR_STANDARD_SERIES '0'
#define ENUM_CLOSING_ONLY_INDICATOR_CALL '1'

/*
 * Delivery Flag Values
 */ 
#define ENUM_DELIVERY_FLAG_HEARTBEAT 1
#define ENUM_DELIVERY_FLAG_PILLAR_FAILOVER 10
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
#define ENUM_EXCHANGE_CODE_LTSE 'L'
#define ENUM_EXCHANGE_CODE_NYSE 'N'
#define ENUM_EXCHANGE_CODE_NYSE_ARCA 'P'
#define ENUM_EXCHANGE_CODE_NASDAQ 'Q'
#define ENUM_EXCHANGE_CODE_IEX 'V'
#define ENUM_EXCHANGE_CODE_CBOE 'Z'
#define ENUM_EXCHANGE_CODE_OTC_OR_INDEXED_PRODUCT ' '

/*
 * Halt Condition Values
 */ 
#define ENUM_HALT_CONDITION_SECURITY_NOT_DELAYED_OR_HALTED '~'
#define ENUM_HALT_CONDITION_NEWS_RELEASED 'D'
#define ENUM_HALT_CONDITION_ORDER_IMBALANCE 'I'
#define ENUM_HALT_CONDITION_NEWS_PENDING 'P'
#define ENUM_HALT_CONDITION_LULD_PAUSE 'M'
#define ENUM_HALT_CONDITION_EQUIPMENT_CHANGEOVER 'X'
#define ENUM_HALT_CONDITION_ADDITIONAL_INFORMATION_REQUESTED 'A'
#define ENUM_HALT_CONDITION_REGULATORY_CONCERN 'C'
#define ENUM_HALT_CONDITION_MERGER_EFFECTIVE 'E'
#define ENUM_HALT_CONDITION_ETF_COMPONENT_PRICES_NOT_AVAILABLE 'F'
#define ENUM_HALT_CONDITION_CORPORATE_ACTION 'N'
#define ENUM_HALT_CONDITION_NEW_SECURITY_OFFERING 'O'
#define ENUM_HALT_CONDITION_INTRADAY_INDICATIVE_VALUE_NOT_AVAILABLE 'V'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_1 '1'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_2 '2'
#define ENUM_HALT_CONDITION_MARKET_WIDE_CIRCUIT_BREAKER_HALT_LEVEL_3 '3'

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
#define ENUM_MESSAGE_TYPE_TIME_REFERENCE_MESSAGE 2
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
#define ENUM_MESSAGE_TYPE_OUTRIGHT_SERIES_INDEX_MAPPING_MESSAGE 50
#define ENUM_MESSAGE_TYPE_OPTIONS_STATUS_MESSAGE 51
#define ENUM_MESSAGE_TYPE_COMPLEX_SERIES_INDEX_MAPPING_MESSAGE 60
#define ENUM_MESSAGE_TYPE_OPTIONS_QUOTE_MESSAGE 340
#define ENUM_MESSAGE_TYPE_OPTIONS_TRADE_MESSAGE 320
#define ENUM_MESSAGE_TYPE_SERIES_RFQ_MESSAGE 307

/*
 * Price Resolution Values
 */ 
#define ENUM_PRICE_RESOLUTION_ALL_PENNY 0
#define ENUM_PRICE_RESOLUTION_PENNY_NICKEL 1
#define ENUM_PRICE_RESOLUTION_NICKEL_DIME 5

/*
 * Price Scale Code Values
 */ 
#define ENUM_PRICE_SCALE_CODE_LOW_PRICED_SECURITIES 6
#define ENUM_PRICE_SCALE_CODE_MEDIUM_PRICED_SECURITIES 4
#define ENUM_PRICE_SCALE_CODE_HIGH_PRICED_SECURITIES 3

/*
 * Put Or Call Values
 */ 
#define ENUM_PUT_OR_CALL_PUT 0
#define ENUM_PUT_OR_CALL_CALL 1

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_NYSE_EQUITIES '1'
#define ENUM_QUOTE_CONDITION_NYSE_ARCA_EQUITIES '3'
#define ENUM_QUOTE_CONDITION_NYSE_ARCA_OPTIONS '4'
#define ENUM_QUOTE_CONDITION_NYSE_AMERICAN_OPTIONS '8'
#define ENUM_QUOTE_CONDITION_NYSE_AMERICAN_EQUITIES '9'
#define ENUM_QUOTE_CONDITION_NYSE_NATIONAL_EQUITIES '10'
#define ENUM_QUOTE_CONDITION_NYSE_CHICAGO '11'
#define ENUM_QUOTE_CONDITION_REGULAR_TRADING '1'
#define ENUM_QUOTE_CONDITION_ROTATION '2'
#define ENUM_QUOTE_CONDITION_TRADING_HALTED '3'

/*
 * Rfq Status Values
 */ 
#define ENUM_RFQ_STATUS_START 'O'
#define ENUM_RFQ_STATUS_END 'Q'

/*
 * Round Lot Values
 */ 
#define ENUM_ROUND_LOT_YES 'Y'
#define ENUM_ROUND_LOT_NO 'N'

/*
 * Security Status Values
 */ 
#define ENUM_SECURITY_STATUS_TRADING_HALT '4'
#define ENUM_SECURITY_STATUS_RESUME '5'
#define ENUM_SECURITY_STATUS_SUSPEND '6'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_ACTIVATED_DAY_1 'A'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_CONTINUED_DAY_2 'C'
#define ENUM_SECURITY_STATUS_SHORT_SALE_RESTRICTION_DEACTIVATED 'D'
#define ENUM_SECURITY_STATUS_PREOPENING 'P'
#define ENUM_SECURITY_STATUS_BEGIN_ACCEPTING_ORDERS 'B'
#define ENUM_SECURITY_STATUS_EARLY_SESSION 'E'
#define ENUM_SECURITY_STATUS_CORE_SESSION 'O'
#define ENUM_SECURITY_STATUS_LATE_SESSION 'L'
#define ENUM_SECURITY_STATUS_CLOSED 'X'
#define ENUM_SECURITY_STATUS_HALT_RESUME_PRICE_INDICATION 'I'
#define ENUM_SECURITY_STATUS_PRE_OPENING_PRICE_INDICATION 'G'

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
#define ENUM_SECURITY_TYPE_CLOSED_END_FUND 'U'
#define ENUM_SECURITY_TYPE_WARRANT 'W'

/*
 * Series Values
 */ 
#define ENUM_SERIES_CUBE 'a'
#define ENUM_SERIES_OCC 'c'
#define ENUM_SERIES_FLOOR_TRADE 'e'
#define ENUM_SERIES_OTHER_OUTRIGHT_SERIES 'I'
#define ENUM_SERIES_ISO_SWEEP 'S'
#define ENUM_SERIES_AFTER_90_SECONDS 'D'
#define ENUM_SERIES_COMPLEX_ORDERS 'f'
#define ENUM_SERIES_OTHER_COMPLEX_ORDERS 'f'
#define ENUM_SERIES_COMPLEX_CUBE 'g'
#define ENUM_SERIES_COMPLEX_QCC_ORDER 'H'
#define ENUM_SERIES_COMPLEX_FLOOR_ORDER 'i'
#define ENUM_SERIES_COMPLEX_ORDER_TRADING_WITH_THE_OUTRIGHT_SERIES 'j'
#define ENUM_SERIES_COMPLEX_ORDER_TO_OUTRIGHT_SERIES_ORDERFLOOR_TRADE 'm'
#define ENUM_SERIES_COMPLEX_ORDER_WITH_STOCK_TO_COMPLEX_ORDER_WITH_STOCK_FLOOR_TRADE 'p'
#define ENUM_SERIES_COMPLEX_ORDER_WITH_STOCK_TO_OUTRIGHT_SERIES_ORDER_FLOOR_TRADE 's'

/*
 * Series Status Values
 */ 
#define ENUM_SERIES_STATUS_TRADING_HALT '4'
#define ENUM_SERIES_STATUS_RESUME '5'
#define ENUM_SERIES_STATUS_SUSPEND '6'
#define ENUM_SERIES_STATUS_PREOPENING 'P'
#define ENUM_SERIES_STATUS_BEGIN_ACCEPTING_ORDERS 'B'
#define ENUM_SERIES_STATUS_CORE_SESSION 'O'
#define ENUM_SERIES_STATUS_CLOSED 'X'

/*
 * Series Type Values
 */ 
#define ENUM_SERIES_TYPE_STANDARD 0
#define ENUM_SERIES_TYPE_FLEX 1
#define ENUM_SERIES_TYPE_FLEX_PERCENTAGE 1

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
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CBOE_EDGX 'K'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_LTSE 'L'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_CHICAGO 'M'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE 'N'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NYSE_ARCA 'P'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ 'Q'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CTS 'S'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX 'T'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_IEX 'V'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CBSX 'W'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_NASDAQ_OMX_PSX 'X'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CBOE_BYX 'Y'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_CBOE_BZX 'Z'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_MIAX 'H'
#define ENUM_SSR_TRIGGERING_EXCHANGE_ID_MEMX 'U'

/*
 * Status Values
 */ 
#define ENUM_STATUS_ACCEPTED '0'
#define ENUM_STATUS_REJECTED '1'
#define ENUM_STATUS_INVALID_SEQUENCE_RANGE '2'
#define ENUM_STATUS_MAXIMUM_SEQUENCE_RANGE '3'
#define ENUM_STATUS_MAXIMUM_REQUEST_IN_A_DAY '4'
#define ENUM_STATUS_MAXIMUM_REFRESH_REQUESTS_IN_A_DAY '5'
#define ENUM_STATUS_OLD_SEQ_NUM_TTL '6'
#define ENUM_STATUS_INVALID_CHANNEL_ID '7'
#define ENUM_STATUS_INVALID_PRODUCT_ID '8'
#define ENUM_STATUS_INVALID_MSG_TYPE_OR_MSG_SIZE '9'

/*
 * Type Values
 */ 
#define ENUM_TYPE_PRICE_IMPROVEMENT 'P'
#define ENUM_TYPE_FACILITATION 'F'
#define ENUM_TYPE_SOLICITATION 'S'
#define ENUM_TYPE_BOLD 'B'
#define ENUM_TYPE_COA 'C'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Series Rfq Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SeriesIndex;
    uint32_t SeriesSeqNum;
    char Side;
    char Type;
    char Capacity;
    uint32_t TotalQuantity;
    int32_t WorkingPrice;
    uint32_t Participant;
    uint64_t AuctionId;
    char RfqStatus;
} SeriesRfqMessageT;

/*
 * Structure: Trade Condition
 */ 
typedef struct {
    char Series;
    char Reserved3[3];
} TradeConditionT;

/*
 * Structure: Options Trade Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SeriesIndex;
    uint32_t SeriesSeqNum;
    uint32_t TradeId;
    int32_t Price;
    uint32_t Volume;
    TradeConditionT TradeCondition;
} OptionsTradeMessageT;

/*
 * Structure: Options Quote Message
 */ 
typedef struct {
    uint32_t SourceTimeNs;
    uint32_t SeriesIndex;
    uint32_t SeriesSeqNum;
    int32_t AskPrice;
    uint32_t AskVolume;
    int32_t BidPrice;
    uint32_t BidVolume;
    char QuoteCondition;
    char Reserved1[1];
    uint32_t AskCustomerVolume;
    uint32_t BidCustomerVolume;
} OptionsQuoteMessageT;

/*
 * Structure: Leg Definition
 */ 
typedef struct {
    uint32_t SymbolIndex;
    uint16_t LegRatioQty;
    char Side;
    char LegSecurityType[1];
} LegDefinitionT;

/*
 * Structure: Complex Series Index Mapping Message
 */ 
typedef struct {
    uint32_t SeriesIndex;
    uint16_t MarketId;
    uint8_t SystemId;
    uint16_t NoOfLegs;
} ComplexSeriesIndexMappingMessageT;

/*
 * Structure: Options Status Message
 */ 
typedef struct {
    uint32_t SourceTime;
    uint32_t SourceTimeNs;
    uint32_t SeriesIndex;
    uint32_t SeriesSeqNum;
    char SeriesStatus;
    char MarketState;
    char HaltCondition;
} OptionsStatusMessageT;

/*
 * Structure: Outright Series Index Mapping Message
 */ 
typedef struct {
    uint32_t SeriesIndex;
    uint8_t SeriesType;
    uint16_t MarketId;
    uint8_t SystemId;
    char OptionSymbolRoot[6];
    char UnderlyingSymbol[11];
    uint32_t UnderlyingIndex;
    uint8_t PriceScaleCode;
    uint16_t ContractMultiplier;
    char MaturityDate[6];
    uint8_t PutOrCall;
    char StrikePrice[10];
    char ClosingOnlyIndicator;
    char Reserved1[1];
} OutrightSeriesIndexMappingMessageT;

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
    uint8_t SessionState;
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
    char Reserved6[6];
} SymbolIndexMappingMessageT;

/*
 * Structure: Time Reference Message
 */ 
typedef struct {
    uint32_t Id;
    char Reserved4[4];
    uint32_t SourceTime;
} TimeReferenceMessageT;

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
   Version: 1.0.d
   Date: Monday, March 21, 2022
   Specification: Pillar_Complex_Client_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
