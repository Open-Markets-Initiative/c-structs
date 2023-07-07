/*******************************************************************************
 * C Structs For Siac Opra Obi Recipient 6.1 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Bbo Indicator Values
 */ 
#define ENUM_BBO_INDICATOR_NO_BEST_BID_CHANGE_OR_BEST_OFFER_CHANGE 'A'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_CHANGE_QUOTE_CONTAINS_BEST_OFFER 'B'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_CHANGE_BEST_OFFER_APPENDAGE 'C'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_CHANGE_NO_BEST_OFFER 'D'
#define ENUM_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_NO_BEST_OFFER_CHANGE 'E'
#define ENUM_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_QUOTE_CONTAINS_BEST_OFFER 'F'
#define ENUM_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_BEST_OFFER_APPENDAGE 'G'
#define ENUM_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_NO_BEST_OFFER 'H'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_NO_BEST_OFFER_CHANGE 'I'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_QUOTE_CONTAINS_BEST_OFFER 'J'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_BEST_OFFER_APPENDAGE 'K'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_NO_BEST_OFFER 'L'
#define ENUM_BBO_INDICATOR_BEST_BID_APPENDAGE_NO_BEST_OFFER_CHANGE 'M'
#define ENUM_BBO_INDICATOR_BEST_BID_APPENDAGE_QUOTE_CONTAINS_BEST_OFFER 'N'
#define ENUM_BBO_INDICATOR_BEST_BID_APPENDAGE_BEST_OFFER_APPENDAGE 'O'
#define ENUM_BBO_INDICATOR_BEST_BID_APPENDAGE_NO_BEST_OFFER 'P'
#define ENUM_BBO_INDICATOR_NOT_INCLUDED_IN_THE_BBO ' '

/*
 * Best Bid Denominator Code Values
 */ 
#define ENUM_BEST_BID_DENOMINATOR_CODE_TEN 'A'
#define ENUM_BEST_BID_DENOMINATOR_CODE_HUNDRED 'B'
#define ENUM_BEST_BID_DENOMINATOR_CODE_THOUSAND 'C'
#define ENUM_BEST_BID_DENOMINATOR_CODE_TEN_THOUSAND 'D'
#define ENUM_BEST_BID_DENOMINATOR_CODE_HUNDRED_THOUSAND 'E'
#define ENUM_BEST_BID_DENOMINATOR_CODE_MILLION 'F'
#define ENUM_BEST_BID_DENOMINATOR_CODE_TEN_MILLION 'G'
#define ENUM_BEST_BID_DENOMINATOR_CODE_HUNDRED_MILLION 'H'
#define ENUM_BEST_BID_DENOMINATOR_CODE_NO_FRACTION 'I'

/*
 * Best Bid Participant Id Values
 */ 
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_BEST_BID_PARTICIPANT_ID_BOSTON_OPTIONS_EXCHANGE 'B'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_OPTIONS_EXCHANGE 'C'
#define ENUM_BEST_BID_PARTICIPANT_ID_MIAX_EMERALD 'D'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_EDGX_OPTIONS 'E'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_GEMX 'H'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_ISE 'I'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_MRX 'J'
#define ENUM_BEST_BID_PARTICIPANT_ID_MIAMI_INTERNATIONAL_SECURITIES_EXCHANGE 'M'
#define ENUM_BEST_BID_PARTICIPANT_ID_NYSE_ARCA 'N'
#define ENUM_BEST_BID_PARTICIPANT_ID_OPTIONS_PRICE_REPORTING_AUTHORITY 'O'
#define ENUM_BEST_BID_PARTICIPANT_ID_MIAX_PEARL 'P'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_OPTIONS_MARKET 'Q'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_BX_OPTIONS 'T'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_C2_OPTIONS 'W'
#define ENUM_BEST_BID_PARTICIPANT_ID_NASDAQ_PHLX 'X'
#define ENUM_BEST_BID_PARTICIPANT_ID_CBOE_BZX_OPTIONS_EXCHANGE 'Z'

/*
 * Best Offer Denominator Code Values
 */ 
#define ENUM_BEST_OFFER_DENOMINATOR_CODE_TEN 'A'
#define ENUM_BEST_OFFER_DENOMINATOR_CODE_HUNDRED 'B'
#define ENUM_BEST_OFFER_DENOMINATOR_CODE_THOUSAND 'C'
#define ENUM_BEST_OFFER_DENOMINATOR_CODE_TEN_THOUSAND 'D'
#define ENUM_BEST_OFFER_DENOMINATOR_CODE_HUNDRED_THOUSAND 'E'
#define ENUM_BEST_OFFER_DENOMINATOR_CODE_MILLION 'F'
#define ENUM_BEST_OFFER_DENOMINATOR_CODE_TEN_MILLION 'G'
#define ENUM_BEST_OFFER_DENOMINATOR_CODE_HUNDRED_MILLION 'H'
#define ENUM_BEST_OFFER_DENOMINATOR_CODE_NO_FRACTION 'I'

/*
 * Best Offer Participant Id Values
 */ 
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_BOSTON_OPTIONS_EXCHANGE 'B'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_OPTIONS_EXCHANGE 'C'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_MIAX_EMERALD 'D'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_EDGX_OPTIONS 'E'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_GEMX 'H'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_ISE 'I'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_MRX 'J'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_MIAMI_INTERNATIONAL_SECURITIES_EXCHANGE 'M'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NYSE_ARCA 'N'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_OPTIONS_PRICE_REPORTING_AUTHORITY 'O'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_MIAX_PEARL 'P'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_OPTIONS_MARKET 'Q'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_BX_OPTIONS 'T'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_C2_OPTIONS 'W'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_NASDAQ_PHLX 'X'
#define ENUM_BEST_OFFER_PARTICIPANT_ID_CBOE_BZX_OPTIONS_EXCHANGE 'Z'

/*
 * Control Message Type Values
 */ 
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_TEST_CYCLE 'A'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_TEST_CYCLE 'B'
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_DAY 'C'
#define ENUM_CONTROL_MESSAGE_TYPE_GOOD_MORNING 'D'
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_SUMMARY 'E'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_SUMMARY 'F'
#define ENUM_CONTROL_MESSAGE_TYPE_EARLY_MARKET_CLOSE 'G'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_TRANSACTION_REPORTING 'H'
#define ENUM_CONTROL_MESSAGE_TYPE_GOOD_NIGHT 'I'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_DAY 'J'
#define ENUM_CONTROL_MESSAGE_TYPE_RESET_BLOCK_SEQUENCE_NUMBER 'K'
#define ENUM_CONTROL_MESSAGE_TYPE_START_OF_OPEN_INTEREST 'L'
#define ENUM_CONTROL_MESSAGE_TYPE_END_OF_OPEN_INTEREST 'M'
#define ENUM_CONTROL_MESSAGE_TYPE_LINE_INTEGRITY 'N'
#define ENUM_CONTROL_MESSAGE_TYPE_DISASTER_RECOVERY_DATA_CENTER_ACTIVATION 'P'

/*
 * Expiration Month Values
 */ 
#define ENUM_EXPIRATION_MONTH_JANUARY 'A'
#define ENUM_EXPIRATION_MONTH_JANUARY 'M'
#define ENUM_EXPIRATION_MONTH_FEBRUARY 'B'
#define ENUM_EXPIRATION_MONTH_FEBRUARY 'N'
#define ENUM_EXPIRATION_MONTH_MARCH 'C'
#define ENUM_EXPIRATION_MONTH_MARCH 'O'
#define ENUM_EXPIRATION_MONTH_APRIL 'D'
#define ENUM_EXPIRATION_MONTH_APRIL 'P'
#define ENUM_EXPIRATION_MONTH_MAY 'E'
#define ENUM_EXPIRATION_MONTH_MAY 'Q'
#define ENUM_EXPIRATION_MONTH_JUNE 'F'
#define ENUM_EXPIRATION_MONTH_JUNE 'R'
#define ENUM_EXPIRATION_MONTH_JULY 'G'
#define ENUM_EXPIRATION_MONTH_JULY 'S'
#define ENUM_EXPIRATION_MONTH_AUGUST 'H'
#define ENUM_EXPIRATION_MONTH_AUGUST 'T'
#define ENUM_EXPIRATION_MONTH_SEPTEMBER 'I'
#define ENUM_EXPIRATION_MONTH_SEPTEMBER 'U'
#define ENUM_EXPIRATION_MONTH_OCTOBER 'J'
#define ENUM_EXPIRATION_MONTH_OCTOBER 'V'
#define ENUM_EXPIRATION_MONTH_NOVEMBER 'K'
#define ENUM_EXPIRATION_MONTH_NOVEMBER 'W'
#define ENUM_EXPIRATION_MONTH_DECEMBER 'L'
#define ENUM_EXPIRATION_MONTH_DECEMBER 'X'

/*
 * Index Value Denominator Code Values
 */ 
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_TEN 'A'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_HUNDRED 'B'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_THOUSAND 'C'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_TEN_THOUSAND 'D'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_HUNDRED_THOUSAND 'E'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_MILLION 'F'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_TEN_MILLION 'G'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_NO_FRACTION 'I'

/*
 * Message Category Values
 */ 
#define ENUM_MESSAGE_CATEGORY_EQUITY_AND_INDEX_LAST_SALE_MESSAGE 'a'
#define ENUM_MESSAGE_CATEGORY_OPEN_INTEREST_MESSAGE 'd'
#define ENUM_MESSAGE_CATEGORY_EQUITY_AND_INDEX_END_OF_DAY_SUMMARY_MESSAGE 'f'
#define ENUM_MESSAGE_CATEGORY_LONG_EQUITY_AND_INDEX_QUOTE_MESSAGE 'k'
#define ENUM_MESSAGE_CATEGORY_SHORT_EQUITY_AND_INDEX_QUOTE_MESSAGE 'q'
#define ENUM_MESSAGE_CATEGORY_ADMINISTRATIVE_MESSAGE 'C'
#define ENUM_MESSAGE_CATEGORY_CONTROL_MESSAGE 'H'
#define ENUM_MESSAGE_CATEGORY_UNDERLYING_VALUE_MESSAGE 'Y'

/*
 * Participant Id Values
 */ 
#define ENUM_PARTICIPANT_ID_NYSE_AMERICAN 'A'
#define ENUM_PARTICIPANT_ID_BOSTON_OPTIONS_EXCHANGE 'B'
#define ENUM_PARTICIPANT_ID_CBOE_OPTIONS_EXCHANGE 'C'
#define ENUM_PARTICIPANT_ID_MIAX_EMERALD 'D'
#define ENUM_PARTICIPANT_ID_CBOE_EDGX_OPTIONS 'E'
#define ENUM_PARTICIPANT_ID_NASDAQ_GEMX 'H'
#define ENUM_PARTICIPANT_ID_NASDAQ_ISE 'I'
#define ENUM_PARTICIPANT_ID_NASDAQ_MRX 'J'
#define ENUM_PARTICIPANT_ID_MIAMI_INTERNATIONAL_SECURITIES_EXCHANGE 'M'
#define ENUM_PARTICIPANT_ID_NYSE_ARCA 'N'
#define ENUM_PARTICIPANT_ID_OPTIONS_PRICE_REPORTING_AUTHORITY 'O'
#define ENUM_PARTICIPANT_ID_MIAX_PEARL 'P'
#define ENUM_PARTICIPANT_ID_NASDAQ_OPTIONS_MARKET 'Q'
#define ENUM_PARTICIPANT_ID_NASDAQ_BX_OPTIONS 'T'
#define ENUM_PARTICIPANT_ID_CBOE_C2_OPTIONS 'W'
#define ENUM_PARTICIPANT_ID_NASDAQ_PHLX 'X'
#define ENUM_PARTICIPANT_ID_CBOE_BZX_OPTIONS_EXCHANGE 'Z'

/*
 * Premium Price Denominator Code Values
 */ 
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_TEN 'A'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_HUNDRED 'B'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_THOUSAND 'C'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_TEN_THOUSAND 'D'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_HUNDRED_THOUSAND 'E'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_MILLION 'F'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_TEN_MILLION 'G'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_NO_FRACTION 'I'

/*
 * Quote Message Type Values
 */ 
#define ENUM_QUOTE_MESSAGE_TYPE_REGULAR_TRADING ' '
#define ENUM_QUOTE_MESSAGE_TYPE_NON_FIRM_QUOTE 'F'
#define ENUM_QUOTE_MESSAGE_TYPE_INDICATIVE_VALUE 'I'
#define ENUM_QUOTE_MESSAGE_TYPE_ROTATION 'R'
#define ENUM_QUOTE_MESSAGE_TYPE_TRADING_HALTED 'T'
#define ENUM_QUOTE_MESSAGE_TYPE_ELIGIBLE_FOR_AUTOMATIC_EXECUTION 'A'
#define ENUM_QUOTE_MESSAGE_TYPE_BID_CONTAINS_CUSTOMER_TRADING_INTEREST 'B'
#define ENUM_QUOTE_MESSAGE_TYPE_OFFER_CONTAINS_CUSTOMER_TRADING_INTEREST 'O'
#define ENUM_QUOTE_MESSAGE_TYPE_BOTH_BID_AND_OFFER_CONTAIN_CUSTOMER_TRADING_INTEREST 'C'
#define ENUM_QUOTE_MESSAGE_TYPE_OFFER_SIDE_OF_QUOTE_NOT_FIRM_BID_SIDE_FIRM 'X'
#define ENUM_QUOTE_MESSAGE_TYPE_BID_SIDE_OF_QUOTE_NOT_FIRM_OFFER_SIDE_FIRM 'Y'

/*
 * Session Indicator Values
 */ 
#define ENUM_SESSION_INDICATOR_REGULAR 0
#define ENUM_SESSION_INDICATOR_PRE_MARKET 88

/*
 * Strike Price Denominator Code Values
 */ 
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_TEN 'A'
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_HUNDRED 'B'
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_THOUSAND 'C'
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_TEN_THOUSAND 'D'
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_HUNDRED_THOUSAND 'E'
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_NO_FRACTION 'I'

/*
 * Trade Message Type Values
 */ 
#define ENUM_TRADE_MESSAGE_TYPE_REGULAR ' '
#define ENUM_TRADE_MESSAGE_TYPE_CANC 'A'
#define ENUM_TRADE_MESSAGE_TYPE_OSEQ 'B'
#define ENUM_TRADE_MESSAGE_TYPE_CNCL 'C'
#define ENUM_TRADE_MESSAGE_TYPE_LATE 'D'
#define ENUM_TRADE_MESSAGE_TYPE_CNCO 'E'
#define ENUM_TRADE_MESSAGE_TYPE_OPEN 'F'
#define ENUM_TRADE_MESSAGE_TYPE_CNOL 'G'
#define ENUM_TRADE_MESSAGE_TYPE_OPNL 'H'
#define ENUM_TRADE_MESSAGE_TYPE_AUTO 'I'
#define ENUM_TRADE_MESSAGE_TYPE_REOP 'J'
#define ENUM_TRADE_MESSAGE_TYPE_AJST 'K'
#define ENUM_TRADE_MESSAGE_TYPE_SPRD 'L'
#define ENUM_TRADE_MESSAGE_TYPE_STDL 'M'
#define ENUM_TRADE_MESSAGE_TYPE_STPD 'N'
#define ENUM_TRADE_MESSAGE_TYPE_CSTP 'O'
#define ENUM_TRADE_MESSAGE_TYPE_BWRT 'P'
#define ENUM_TRADE_MESSAGE_TYPE_CMBO 'Q'
#define ENUM_TRADE_MESSAGE_TYPE_SPIM 'R'
#define ENUM_TRADE_MESSAGE_TYPE_ISOI 'S'
#define ENUM_TRADE_MESSAGE_TYPE_BNMT 'T'
#define ENUM_TRADE_MESSAGE_TYPE_XMPT 'X'

/*
 * Underlying Price Denominator Code Values
 */ 
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_TEN 'A'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_HUNDRED 'B'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_THOUSAND 'C'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_TEN_THOUSAND 'D'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_HUNDRED_THOUSAND 'E'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_MILLION 'F'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_TEN_MILLION 'G'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_HUNDRED_MILLION 'H'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_NO_FRACTION 'I'

/*
 * Underlying Value Message Type Values
 */ 
#define ENUM_UNDERLYING_VALUE_MESSAGE_TYPE_UNDERLYING_VALUE_LAST_SALE_MESSAGE ' '
#define ENUM_UNDERLYING_VALUE_MESSAGE_TYPE_UNDERLYING_VALUE_BID_AND_OFFER_MESSAGE 'I'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Underlying Value Bid And Offer Message
 */ 
typedef struct {
    char MessageIndicator[1];
    uint32_t TransactionId;
    uint32_t ParticipantReferenceNumber;
    char SecuritySymbol[5];
    char Reserved1[1];
    char IndexValueDenominatorCode;
    int32_t BidIndexValue;
    int64_t OfferIndexValue;
} UnderlyingValueBidAndOfferMessageT;

/*
 * Structure: Underlying Value Last Sale Message
 */ 
typedef struct {
    char MessageIndicator[1];
    uint32_t TransactionId;
    uint32_t ParticipantReferenceNumber;
    char SecuritySymbol[5];
    char Reserved1[1];
    char IndexValueDenominatorCode;
    int32_t IndexValue;
    char Reserved4[4];
} UnderlyingValueLastSaleMessageT;

/*
 * Structure: Underlying Value Message
 */ 
typedef struct {
    char UnderlyingValueMessageType;
} UnderlyingValueMessageT;

/*
 * Structure: Control Message
 */ 
typedef struct {
    char ControlMessageType;
    char MessageIndicator[1];
    uint32_t TransactionId;
    uint32_t ParticipantReferenceNumber;
    uint16_t MessageDataLength;
} ControlMessageT;

/*
 * Structure: Administrative Message
 */ 
typedef struct {
    char MessageType[1];
    char MessageIndicator[1];
    uint32_t TransactionId;
    uint32_t ParticipantReferenceNumber;
    uint16_t MessageDataLength;
} AdministrativeMessageT;

/*
 * Structure: Best Offer Appendage
 */ 
typedef struct {
    char ParticipantId;
    char DenominatorCode[1];
    uint32_t Price;
    char Size[0];
} BestOfferAppendageT;

/*
 * Structure: Best Bid Appendage
 */ 
typedef struct {
    char ParticipantId;
    char DenominatorCode[1];
    uint32_t Price;
    char Size[0];
} BestBidAppendageT;

/*
 * Structure: Expiration Block
 */ 
typedef struct {
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
} ExpirationBlockT;

/*
 * Structure: Best Bid And Offer Appendage
 */ 
typedef struct {
    char BestBidParticipantId;
    char BestBidDenominatorCode;
    int32_t BestBidPrice;
    uint32_t BestBidSize;
    char BestOfferParticipantId;
    char BestOfferDenominatorCode;
    int32_t BestOfferPrice;
    uint32_t BestOfferSize;
} BestBidAndOfferAppendageT;

/*
 * Structure: Equity And Index End Of Day Summary Message
 */ 
typedef struct {
    char MessageType[1];
    char MessageIndicator[1];
    uint32_t TransactionId;
    uint32_t ParticipantReferenceNumber;
    char SecuritySymbol[5];
    char Reserved1[1];
    ExpirationBlockT ExpirationBlock;
    char StrikePriceDenominatorCode;
    uint32_t StrikePrice;
    uint32_t Volume;
    uint32_t OpenInterestVolume;
    char PremiumPriceDenominatorCode;
    int32_t OpenPrice;
    int32_t HighPrice;
    int32_t LowPrice;
    int32_t LastPrice;
    int32_t NetChange;
    char UnderlyingPriceDenominatorCode;
    int64_t UnderlyingPrice;
    int32_t BidPrice;
    int32_t OfferPrice;
} EquityAndIndexEndOfDaySummaryMessageT;

/*
 * Structure: Open Interest Message
 */ 
typedef struct {
    char MessageType[1];
    char MessageIndicator[1];
    uint32_t TransactionId;
    uint32_t ParticipantReferenceNumber;
    char SecuritySymbol[5];
    char Reserved1[1];
    ExpirationBlockT ExpirationBlock;
    char StrikePriceDenominatorCode;
    uint32_t StrikePrice;
    uint32_t OpenInterestVolume;
} OpenInterestMessageT;

/*
 * Structure: Equity And Index Last Sale Message
 */ 
typedef struct {
    char TradeMessageType;
    char MessageIndicator[1];
    uint32_t TransactionId;
    uint32_t ParticipantReferenceNumber;
    char SecuritySymbol[5];
    char Reserved1[1];
    ExpirationBlockT ExpirationBlock;
    char StrikePriceDenominatorCode;
    uint32_t StrikePrice;
    uint32_t Volume;
    char PremiumPriceDenominatorCode;
    int32_t PremiumPrice;
    uint32_t TradeIdentifier;
    char Reserved4[4];
} EquityAndIndexLastSaleMessageT;

/*
 * Structure: Message
 */ 
typedef struct {
    char ParticipantId;
    char MessageCategory;
} MessageT;

/*
 * Structure: Block Timestamp
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} BlockTimestampT;

/*
 * Structure: Block Header
 */ 
typedef struct {
    uint8_t Version;
    uint16_t BlockSize;
    char DataFeedIndicator[1];
    char RetransmissionIndicator[1];
    uint8_t SessionIndicator;
    uint32_t BlockSequenceNumber;
    uint8_t MessagesInBlock;
    BlockTimestampT BlockTimestamp;
    uint16_t BlockChecksum;
} BlockHeaderT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Securities Industry Automation Corporation
   Version: 6.1
   Date: Friday, March 25, 2022
   Specification: 624057bbf5a8f4821840340e_OPRA Pillar Output Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
