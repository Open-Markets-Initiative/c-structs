/*******************************************************************************
 * C Structs For Finra Orf Dfi Tdds 2.0 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Action Values
 */ 
#define ENUM_ACTION_TRADING_HALT 'H'
#define ENUM_ACTION_QUOTATION_RESUMPTION 'Q'
#define ENUM_ACTION_TRADING_RESUMPTION 'T'
#define ENUM_ACTION_QUOTATION_AND_TRADING_RESUMPTION 'X'

/*
 * Administrative Message Type Values
 */ 
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_GENERAL_ADMINISTRATIVE_MESSAGE 'A'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_CLOSING_TRADE_SUMMARY_REPORT_MESSAGE '2'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_TRADING_ACTION_MESSAGE 'H'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_MARKET_WIDE_CIRCUIT_BREAKER_EVENT_MESSAGE 'M'

/*
 * As Of Indicator Values
 */ 
#define ENUM_AS_OF_INDICATOR_AS_OF 'A'
#define ENUM_AS_OF_INDICATOR_REVERSAL 'R'
#define ENUM_AS_OF_INDICATOR_CURRENT_DAY_TRANSACTION ' '

/*
 * Closing Price Market Center Values
 */ 
#define ENUM_CLOSING_PRICE_MARKET_CENTER_OTCBB 'U'
#define ENUM_CLOSING_PRICE_MARKET_CENTER_OOTC 'u'
#define ENUM_CLOSING_PRICE_MARKET_CENTER_NOT_APPLICABLE ' '

/*
 * Control Message Type Values
 */ 
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_DAY_MESSAGE 'I'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_DAY_MESSAGE 'J'
#define ENUM_CONTROL_MESSAGE_TYPE_MARKET_SESSION_OPEN_MESSAGE 'O'
#define ENUM_CONTROL_MESSAGE_TYPE_MARKET_SESSION_CLOSE_MESSAGE 'O'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_RETRANSMISSION_REQUESTS_MESSAGE 'K'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_TRANSMISSIONS_MESSAGE 'Z'
#define ENUM_CONTROL_MESSAGE_TYPE_LINE_INTEGRITY_MESSAGE 'T'
#define ENUM_CONTROL_MESSAGE_TYPE_SEQUENCE_NUMBER_RESET_MESSAGE 'L'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_TRADE_REPORTING_MESSAGE 'X'

/*
 * Last Sale Price Market Center Values
 */ 
#define ENUM_LAST_SALE_PRICE_MARKET_CENTER_OTCBB 'U'
#define ENUM_LAST_SALE_PRICE_MARKET_CENTER_OOTC 'u'
#define ENUM_LAST_SALE_PRICE_MARKET_CENTER_NOT_APPLICABLE ' '

/*
 * Message Category Values
 */ 
#define ENUM_MESSAGE_CATEGORY_TRADE 'T'
#define ENUM_MESSAGE_CATEGORY_ADMINISTRATIVE 'A'
#define ENUM_MESSAGE_CATEGORY_CONTROL 'C'

/*
 * Net Change Direction Values
 */ 
#define ENUM_NET_CHANGE_DIRECTION_POSITIVE_OR_ZERO_NET_CHANGE '+'
#define ENUM_NET_CHANGE_DIRECTION_NEGATIVE_NET_CHANGE '-'
#define ENUM_NET_CHANGE_DIRECTION_NO_TRADE_OR_UNAFFECTED ' '

/*
 * Price Change Indicator Values
 */ 
#define ENUM_PRICE_CHANGE_INDICATOR_NO_PRICE_CHANGE '0'
#define ENUM_PRICE_CHANGE_INDICATOR_LAST_PRICE_CHANGED '1'
#define ENUM_PRICE_CHANGE_INDICATOR_LOW_PRICE_CHANGED '2'
#define ENUM_PRICE_CHANGE_INDICATOR_LAST_AND_LOW_PRICES_CHANGED '3'
#define ENUM_PRICE_CHANGE_INDICATOR_HIGH_PRICE_CHANGED '4'
#define ENUM_PRICE_CHANGE_INDICATOR_LAST_AND_HIGH_PRICES_CHANGED '5'
#define ENUM_PRICE_CHANGE_INDICATOR_HIGH_AND_LOW_PRICES_CHANGED '6'
#define ENUM_PRICE_CHANGE_INDICATOR_ALL_PRICES_CHANGED '7'

/*
 * Report Function Values
 */ 
#define ENUM_REPORT_FUNCTION_CANCEL 'C'
#define ENUM_REPORT_FUNCTION_ERROR 'E'
#define ENUM_REPORT_FUNCTION_CORRECTION 'N'

/*
 * Sale Condition Level 1 Values
 */ 
#define ENUM_SALE_CONDITION_LEVEL_1_REGULAR_TRADE '@'
#define ENUM_SALE_CONDITION_LEVEL_1_CASH_TRADE 'C'
#define ENUM_SALE_CONDITION_LEVEL_1_NEXT_DAY 'N'
#define ENUM_SALE_CONDITION_LEVEL_1_SELLER 'R'

/*
 * Sale Condition Level 3 Values
 */ 
#define ENUM_SALE_CONDITION_LEVEL_3_EXECUTED_OUTSIDE_NORMAL_MARKET_HOURS 'T'
#define ENUM_SALE_CONDITION_LEVEL_3_EXECUTED_OUTSIDE_NORMAL_MARKET_HOURS_AND_TRADE_REPORTED_LATE 'U'
#define ENUM_SALE_CONDITION_LEVEL_3_EXECUTED_DURING_NORMAL_MARKET_HOURS_AND_TRADE_REPORTED_LATE 'Z'
#define ENUM_SALE_CONDITION_LEVEL_3_NOT_AVAILABLE ' '

/*
 * Sale Condition Level 4 Values
 */ 
#define ENUM_SALE_CONDITION_LEVEL_4_ODD_LOT_TRADE 'I'
#define ENUM_SALE_CONDITION_LEVEL_4_PRIOR_REFERENCE_PRICE 'P'
#define ENUM_SALE_CONDITION_LEVEL_4_AVERAGE_PRICE_TRADE 'W'
#define ENUM_SALE_CONDITION_LEVEL_4_NOT_AVAILABLE ' '

/*
 * Session Identifier Values
 */ 
#define ENUM_SESSION_IDENTIFIER_ALL_MARKET_SESSIONS_OR_SESSION_INDEPENDENT 'A'
#define ENUM_SESSION_IDENTIFIER_US_MARKET_SESSION 'U'

/*
 * Trade Message Type Values
 */ 
#define ENUM_TRADE_MESSAGE_TYPE_TRADE_REPORT_SHORT_FORM_MESSAGE '5'
#define ENUM_TRADE_MESSAGE_TYPE_TRADE_REPORT_LONG_FORM_MESSAGE '6'
#define ENUM_TRADE_MESSAGE_TYPE_TRADE_CANCEL_ERROR_MESSAGE '7'
#define ENUM_TRADE_MESSAGE_TYPE_TRADE_CORRECTION_MESSAGE '8'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Datetime
 */ 
typedef struct {
    char Year[4];
    char Month[2];
    char Day[2];
    char Hour[2];
    char Minute[2];
    char Second[2];
    char Millisecond[3];
} DatetimeT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    char SessionIdentifier;
    char RetransmissionRequester[2];
    char MessageSequenceNumber[8];
    char MarketCenterOriginatorId[2];
    DatetimeT Datetime;
} MessageHeaderT;

/*
 * Structure: End Of Trade Reporting Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} EndOfTradeReportingMessageT;

/*
 * Structure: Sequence Number Reset Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} SequenceNumberResetMessageT;

/*
 * Structure: Line Integrity Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} LineIntegrityMessageT;

/*
 * Structure: End Of Transmissions Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} EndOfTransmissionsMessageT;

/*
 * Structure: End Of Retransmission Requests Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} EndOfRetransmissionRequestsMessageT;

/*
 * Structure: Market Session Close Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MarketSessionCloseMessageT;

/*
 * Structure: Market Session Open Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} MarketSessionOpenMessageT;

/*
 * Structure: End Of Day Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} EndOfDayMessageT;

/*
 * Structure: Start Of Day Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
} StartOfDayMessageT;

/*
 * Structure: Control
 */ 
typedef struct {
    char ControlMessageType;
} ControlT;

/*
 * Structure: Action Datetime
 */ 
typedef struct {
    char Year[4];
    char Month[2];
    char Day[2];
    char Hour[2];
    char Minute[2];
    char Second[2];
    char Millisecond[3];
} ActionDatetimeT;

/*
 * Structure: Market Wide Circuit Breaker Event Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
    char Action;
    ActionDatetimeT ActionDatetime;
    char ReasonCode[6];
} MarketWideCircuitBreakerEventMessageT;

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
    char SecuritySymbol[14];
    char Action;
    ActionDatetimeT ActionDatetime;
    char ReasonCode[6];
} TradingActionMessageT;

/*
 * Structure: Closing Trade Summary Report Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
    char SecuritySymbol[14];
    char DailyHighPriceDenominator[1];
    char DailyHighPrice[12];
    char DailyLowPriceDenominator[1];
    char DailyLowPrice[12];
    char ClosingPriceMarketCenter;
    char ClosingPriceDenominator[1];
    char ClosingPrice[12];
    char Reserved[1];
    char NetChangeDenominator[1];
    char NetChangeAmount[12];
    char NetChangeDirection;
    char Currency[3];
    char TotalSecurityVolume[11];
} ClosingTradeSummaryReportMessageT;

/*
 * Structure: General Administrative Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
    char Text[2];
} GeneralAdministrativeMessageT;

/*
 * Structure: Administrative
 */ 
typedef struct {
    char AdministrativeMessageType;
} AdministrativeT;

/*
 * Structure: Trade Summary Information
 */ 
typedef struct {
    char HighPriceDenominator[1];
    char HighPrice[12];
    char LowPriceDenominator[1];
    char LowPrice[12];
    char LastSalePriceDenominator[1];
    char LastSalePrice[12];
    char LastSalePriceMarketCenter;
    char TotalSecurityVolume[11];
    char PriceChangeIndicator;
} TradeSummaryInformationT;

/*
 * Structure: Execution Datetime
 */ 
typedef struct {
    char Year[4];
    char Month[2];
    char Day[2];
    char Hour[2];
    char Minute[2];
    char Second[2];
    char Millisecond[3];
} ExecutionDatetimeT;

/*
 * Structure: Corrected Trade Information
 */ 
typedef struct {
    char ReportVolume[8];
    char TradePriceDenominator[1];
    char TradePrice[12];
    char Currency[3];
    char AsOfIndicator;
    ExecutionDatetimeT ExecutionDatetime;
    char SaleConditionLevel1;
    char SaleConditionLevel2[1];
    char SaleConditionLevel3;
    char SaleConditionLevel4;
    char SellersSaleDays[2];
} CorrectedTradeInformationT;

/*
 * Structure: Original Trade Information
 */ 
typedef struct {
    char ReportVolume[8];
    char TradePriceDenominator[1];
    char TradePrice[12];
    char Currency[3];
    char AsOfIndicator;
    ExecutionDatetimeT ExecutionDatetime;
    char SaleConditionLevel1;
    char SaleConditionLevel2[1];
    char SaleConditionLevel3;
    char SaleConditionLevel4;
    char SellersSaleDays[2];
} OriginalTradeInformationT;

/*
 * Structure: Original Dissemination Date
 */ 
typedef struct {
    char Year[4];
    char Month[2];
    char Day[2];
} OriginalDisseminationDateT;

/*
 * Structure: Trade Correction Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
    char SecuritySymbol[14];
    OriginalDisseminationDateT OriginalDisseminationDate;
    char OriginalMessageSequenceNumber[8];
    char ReportFunction;
    OriginalTradeInformationT OriginalTradeInformation;
    CorrectedTradeInformationT CorrectedTradeInformation;
    TradeSummaryInformationT TradeSummaryInformation;
} TradeCorrectionMessageT;

/*
 * Structure: Trade Cancel Error Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
    char SecuritySymbol[14];
    OriginalDisseminationDateT OriginalDisseminationDate;
    char OriginalMessageSequenceNumber[8];
    char ReportFunction;
    OriginalTradeInformationT OriginalTradeInformation;
    TradeSummaryInformationT TradeSummaryInformation;
} TradeCancelErrorMessageT;

/*
 * Structure: Trade Information
 */ 
typedef struct {
    char ReportVolume[8];
    char TradePriceDenominator[1];
    char TradePrice[12];
    char Currency[3];
    char AsOfIndicator;
    ExecutionDatetimeT ExecutionDatetime;
    char SaleConditionLevel1;
    char SaleConditionLevel2[1];
    char SaleConditionLevel3;
    char SaleConditionLevel4;
    char SellersSaleDays[2];
    char PriceChangeIndicator;
} TradeInformationT;

/*
 * Structure: Trade Report Long Form Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
    char SecuritySymbol[14];
    OriginalDisseminationDateT OriginalDisseminationDate;
    TradeInformationT TradeInformation;
} TradeReportLongFormMessageT;

/*
 * Structure: Trade Report Short Form Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
    char SecuritySymbolShort[5];
    char SaleConditionLevel1;
    char TradePriceDenominator[1];
    char TradePriceShort[6];
    char ReportVolumeShort[6];
    char PriceChangeIndicator;
} TradeReportShortFormMessageT;

/*
 * Structure: Trade
 */ 
typedef struct {
    char TradeMessageType;
} TradeT;

/*
 * Structure: Packet
 */ 
typedef struct {
    uint8_t BlockSoh;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Financial Industry Regulatory Authority
   Version: 2.0
   Date: Monday, September 24, 2018
   Specification: TDDS2.0.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
