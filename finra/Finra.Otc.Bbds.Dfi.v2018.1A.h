/*******************************************************************************
 * C Structs For Finra Otc Dfi Bbds 2018.1A Binary Model
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

/*
 * Administrative Message Type Values
 */ 
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_GENERAL_ADMINISTRATIVE_MESSAGE 'A'
#define ENUM_ADMINISTRATIVE_MESSAGE_TYPE_TRADING_ACTION_MESSAGE 'H'

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
 * Inside Appendage Indicator Values
 */ 
#define ENUM_INSIDE_APPENDAGE_INDICATOR_NO_CHANGE_TO_INSIDE_QUOTE '1'
#define ENUM_INSIDE_APPENDAGE_INDICATOR_NO_INSIDE_EXISTS '2'
#define ENUM_INSIDE_APPENDAGE_INDICATOR_INSIDE_QUOTE_APPENDAGE_IS_ATTACHED '3'

/*
 * Inside Quote Condition Values
 */ 
#define ENUM_INSIDE_QUOTE_CONDITION_OPEN 'O'
#define ENUM_INSIDE_QUOTE_CONDITION_CLOSED 'C'

/*
 * Market Participant Quote Condition Values
 */ 
#define ENUM_MARKET_PARTICIPANT_QUOTE_CONDITION_OPEN 'O'
#define ENUM_MARKET_PARTICIPANT_QUOTE_CONDITION_CLOSED 'C'
#define ENUM_MARKET_PARTICIPANT_QUOTE_CONDITION_BID 'B'
#define ENUM_MARKET_PARTICIPANT_QUOTE_CONDITION_NOT_APPLICABLE 'N'
#define ENUM_MARKET_PARTICIPANT_QUOTE_CONDITION_OFFER 'O'
#define ENUM_MARKET_PARTICIPANT_QUOTE_CONDITION_BID_AND_OFFER 'W'
#define ENUM_MARKET_PARTICIPANT_QUOTE_CONDITION_PERIODIC_INDICATIVE_OTHER_SECURITIES 'I'
#define ENUM_MARKET_PARTICIPANT_QUOTE_CONDITION_REALTIME_QUOTES 'K'
#define ENUM_MARKET_PARTICIPANT_QUOTE_CONDITION_PERIODIC_INDICATIVE_QUOTES 'L'

/*
 * Market Participant Status Values
 */ 
#define ENUM_MARKET_PARTICIPANT_STATUS_ACTIVE 'A'
#define ENUM_MARKET_PARTICIPANT_STATUS_DELETED 'D'
#define ENUM_MARKET_PARTICIPANT_STATUS_EXCUSED 'E'
#define ENUM_MARKET_PARTICIPANT_STATUS_WITHDRAWN 'W'
#define ENUM_MARKET_PARTICIPANT_STATUS_SUSPENDED 'S'

/*
 * Message Category Values
 */ 
#define ENUM_MESSAGE_CATEGORY_QUOTATION 'Q'
#define ENUM_MESSAGE_CATEGORY_ADMINISTRATIVE 'A'
#define ENUM_MESSAGE_CATEGORY_CONTROL 'C'

/*
 * Quotation Message Type Values
 */ 
#define ENUM_QUOTATION_MESSAGE_TYPE_MARKET_PARTICIPANT_QUOTE_UPDATE_MESSAGE '1'

/*
 * Session Identifier Values
 */ 
#define ENUM_SESSION_IDENTIFIER_ALL_MARKET_SESSIONS_OR_SESSION_INDEPENDENT 'A'
#define ENUM_SESSION_IDENTIFIER_US_MARKET_SESSION 'U'

/*
 * Unsolicited Indicator Values
 */ 
#define ENUM_UNSOLICITED_INDICATOR_UNSOLICITED_ASK 'A'
#define ENUM_UNSOLICITED_INDICATOR_UNSOLICITED_BID 'B'
#define ENUM_UNSOLICITED_INDICATOR_UNSOLICITED_BID_AND_ASK 'U'
#define ENUM_UNSOLICITED_INDICATOR_NOT_APPLICABLE ' '


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Datetime
 */ 
typedef struct {
    char Year[2];
    char Month[1];
    char Day[1];
    char Hour[1];
    char Minute[1];
    char Second[1];
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
    char Reserved[1];
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
    char Year[2];
    char Month[1];
    char Day[1];
    char Hour[1];
    char Minute[1];
    char Second[1];
} ActionDatetimeT;

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    MessageHeaderT MessageHeader;
    char SecuritySymbol[0];
    char Action;
    ActionDatetimeT ActionDatetime;
    char ReasonCode[6];
} TradingActionMessageT;

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
 * Structure: Inside Appendage
 */ 
typedef struct {
    char InsideQuoteCondition;
    char InsideBidPriceDenominator[1];
    char InsideBidPrice[12];
    char InsideBidSize[12];
    char InsideAskPriceDenominator[1];
    char InsideAskPrice[12];
    char InsideAskSize[12];
} InsideAppendageT;

/*
 * Structure: Market Participant Quote Update Message
 */ 
typedef struct {
    char OtcbbSymbol[11];
    char OtcbbType[1];
    char MarketParticipantIdentifier[1];
    char MarketParticipantLocationId[1];
    char MarketParticipantStatus;
    char MarketParticipantQuoteCondition;
    char Reserved[1];
    char WantedIndicator[1];
    char UnsolicitedIndicator;
    char BidPriceDenominator[1];
    char BidPrice[12];
    char BidSize[7];
    char AskPriceDenominator[1];
    char AskPrice[12];
    char AskSize[7];
    char Currency[3];
    char InsideAppendageIndicator;
} MarketParticipantQuoteUpdateMessageT;

/*
 * Structure: Quotation
 */ 
typedef struct {
    char QuotationMessageType;
} QuotationT;

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
   Version: 2018.1A
   Date: Monday, May 14, 2018
   Specification: BBDS_Specs_v2018-1.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
