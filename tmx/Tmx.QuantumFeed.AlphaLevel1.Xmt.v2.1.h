/*******************************************************************************
 * C Structs For Tmx QuantumFeed Xmt AlphaLevel1 2.1 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Ack Required Poss Dup Values
 */ 
#define ENUM_ACK_REQUIRED_POSS_DUP_RECEIVER_NEEDS_TO_ACK 'A'
#define ENUM_ACK_REQUIRED_POSS_DUP_POSSIBLE_DUPLICATES 'D'

/*
 * Bypass Values
 */ 
#define ENUM_BYPASS_THE_ORDER_IS_A_BYPASS 'Y'
#define ENUM_BYPASS_THE_ORDER_IS_NOT_A_BYPASS 'N'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_INTERNAL 'I'
#define ENUM_CROSS_TYPE_BASIS 'B'
#define ENUM_CROSS_TYPE_CONTINGENT 'C'
#define ENUM_CROSS_TYPE_DERIVATIVE_RELATED 'D'
#define ENUM_CROSS_TYPE_REGULAR 'R'
#define ENUM_CROSS_TYPE_VOLUME_WEIGHTED_AVERAGE_PRICE 'V'
#define ENUM_CROSS_TYPE_DEFAULT_TRADE_WAS_NOT_A_CROSS ' '

/*
 * Currency Values
 */ 
#define ENUM_CURRENCY_USD 'U'
#define ENUM_CURRENCY_CAD 'C'

/*
 * Listing Market Values
 */ 
#define ENUM_LISTING_MARKET_TSX 'T'
#define ENUM_LISTING_MARKET_TSXV 'V'

/*
 * Msg Type Values
 */ 
#define ENUM_MSG_TYPE_SYMBOL_STATUS_MESSAGE 'J'
#define ENUM_MSG_TYPE_TRADE_MESSAGE 's'
#define ENUM_MSG_TYPE_TRADE_CANCELLED_MESSAGE 't'
#define ENUM_MSG_TYPE_STOCK_STATUS_MESSAGE 'v'
#define ENUM_MSG_TYPE_EQUITY_QUOTE_MESSAGE 'w'

/*
 * Opening Trade Values
 */ 
#define ENUM_OPENING_TRADE_YES 'Y'
#define ENUM_OPENING_TRADE_NO 'N'

/*
 * Product Type Values
 */ 
#define ENUM_PRODUCT_TYPE_DEBENTURE 'B'
#define ENUM_PRODUCT_TYPE_EQUITY 'E'
#define ENUM_PRODUCT_TYPE_MUTUAL_FUND 'M'
#define ENUM_PRODUCT_TYPE_ETF 'F'

/*
 * Settlement Terms Values
 */ 
#define ENUM_SETTLEMENT_TERMS_CASH 'C'
#define ENUM_SETTLEMENT_TERMS_NN 'N'
#define ENUM_SETTLEMENT_TERMS_MS_DERIVATIVESRELATED_CONTINGENT_EQUITY_TRADE 'M'
#define ENUM_SETTLEMENT_TERMS_CT_CASH_TODAY 'T'
#define ENUM_SETTLEMENT_TERMS_IF_THERE_IS_A_VALID_SETTLEMENT_DATE_ASSOCIATED_WITH_THE_ORDER 'D'
#define ENUM_SETTLEMENT_TERMS_NO_SETTLEMENT_TERMS ' '

/*
 * Test Symbol Values
 */ 
#define ENUM_TEST_SYMBOL_YES 'Y'
#define ENUM_TEST_SYMBOL_NO 'N'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Equity Quote Body
 */ 
typedef struct {
    char Symbol[12];
    uint64_t BidPrice;
    uint32_t BidSize;
    uint64_t AskPrice;
    uint32_t AskSize;
} EquityQuoteBodyT;

/*
 * Structure: Business Header
 */ 
typedef struct {
    uint8_t MsgVersion;
    char SourceId[1];
    uint16_t StreamId;
    uint8_t Sequence0;
    uint32_t Sequence1;
} BusinessHeaderT;

/*
 * Structure: Equity Quote Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    EquityQuoteBodyT EquityQuoteBody;
} EquityQuoteMessageT;

/*
 * Structure: Stock Status Body
 */ 
typedef struct {
    char Symbol[12];
    char Comment[40];
    char StockState[2];
    uint64_t TradingSystemTimeStamp;
    uint32_t ResumeTradeTime;
} StockStatusBodyT;

/*
 * Structure: Stock Status Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    StockStatusBodyT StockStatusBody;
} StockStatusMessageT;

/*
 * Structure: Trade Cancelled Body
 */ 
typedef struct {
    char Symbol[12];
    uint32_t Volume;
    uint64_t Price;
    uint16_t BuyBrokerNumber;
    uint16_t SellBrokerNumber;
    uint32_t TradeTimeStamp;
    uint64_t LastSale;
    uint32_t TradeNumber;
} TradeCancelledBodyT;

/*
 * Structure: Trade Cancelled Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    TradeCancelledBodyT TradeCancelledBody;
} TradeCancelledMessageT;

/*
 * Structure: Trade Body
 */ 
typedef struct {
    char Symbol[12];
    uint64_t Price;
    uint32_t Volume;
    uint16_t BuyBrokerNumber;
    uint16_t SellBrokerNumber;
    char Bypass;
    uint32_t TradeTimeStamp;
    char SettlementTerms;
    char CrossType;
    uint64_t LastSale;
    char OpeningTrade;
    char IsDark[1];
    uint32_t TradeNumber;
} TradeBodyT;

/*
 * Structure: Trade Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    TradeBodyT TradeBody;
} TradeMessageT;

/*
 * Structure: Symbol Status Body
 */ 
typedef struct {
    char Symbol[12];
    uint8_t StockGroup;
    char ListingMarket;
    char ProductType;
    char Cusip[12];
    uint16_t BoardLot;
    char Currency;
    uint64_t FaceValue;
    uint64_t LastSale;
    uint32_t MinPoQty;
    char StockState[2];
    char TestSymbol;
} SymbolStatusBodyT;

/*
 * Structure: Symbol Status Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    SymbolStatusBodyT SymbolStatusBody;
} SymbolStatusMessageT;

/*
 * Structure: Body Header
 */ 
typedef struct {
    uint16_t MsgLength;
    char MsgType;
} BodyHeaderT;

/*
 * Structure: Body
 */ 
typedef struct {
    BodyHeaderT BodyHeader;
} BodyT;

/*
 * Structure: Frame Header
 */ 
typedef struct {
    char StartOfFrame;
    char ProtocolName[1];
    char ProtocolVersion[1];
    uint16_t MessageLength;
    uint32_t SessionId;
    char AckRequiredPossDup;
    uint8_t NumBody;
} FrameHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    FrameHeaderT FrameHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Tmx Group
   Version: 2.1
   Date: Tuesday, October 20, 2020
   Specification: alpha_level_1_quantumfeed_business_message_specification-v2-1-0.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
