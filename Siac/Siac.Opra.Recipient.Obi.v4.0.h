/*******************************************************************************
 * C Structs For Siac Opra Obi Recipient 4.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Bbo Indicator Values
 */ 
#define ENUM_BBO_INDICATOR_NO_BEST_BID_CHANGE_OR_BEST_OFFER_CHANGE_A = 'A'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_CHANGE_QUOTE_CONTAINS_BEST_OFFER_B = 'B'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_CHANGE_BEST_OFFER_APPENDAGE_C = 'C'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_CHANGE_NO_BEST_OFFER_D = 'D'
#define ENUM_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_NO_BEST_OFFER_CHANGE_E = 'E'
#define ENUM_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_QUOTE_CONTAINS_BEST_OFFER_F = 'F'
#define ENUM_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_BEST_OFFER_APPENDAGE_G = 'G'
#define ENUM_BBO_INDICATOR_QUOTE_CONTAINS_BEST_BID_NO_BEST_OFFER_H = 'H'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_NO_BEST_OFFER_CHANGE_I = 'I'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_QUOTE_CONTAINS_BEST_OFFER_J = 'J'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_BEST_OFFER_APPENDAGE_K = 'K'
#define ENUM_BBO_INDICATOR_NO_BEST_BID_NO_BEST_OFFER_L = 'L'
#define ENUM_BBO_INDICATOR_BEST_BID_APPENDAGE_NO_BEST_OFFER_CHANGE_M = 'M'
#define ENUM_BBO_INDICATOR_BEST_BID_APPENDAGE_QUOTE_CONTAINS_BEST_OFFER_N = 'N'
#define ENUM_BBO_INDICATOR_BEST_BID_APPENDAGE_BEST_OFFER_APPENDAGE_O = 'O'
#define ENUM_BBO_INDICATOR_BEST_BID_APPENDAGE_NO_BEST_OFFER_P = 'P'
#define ENUM_BBO_INDICATOR_NOT_INCLUDED_IN_THE_BBO = ' '

/*
 * Index Value Denominator Code Values
 */ 
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_TEN_A = 'A'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_HUNDRED_B = 'B'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_THOUSAND_C = 'C'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_TEN_THOUSAND_D = 'D'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_HUNDRED_THOUSAND_E = 'E'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_MILLION_F = 'F'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_TEN_MILLION_G = 'G'
#define ENUM_INDEX_VALUE_DENOMINATOR_CODE_NO_FRACTION_I = 'I'

/*
 * Message Category Values
 */ 
#define ENUM_MESSAGE_CATEGORY_EQUITY_AND_INDEX_LAST_SALE_MESSAGE_A = 'a'
#define ENUM_MESSAGE_CATEGORY_OPEN_INTEREST_MESSAGE_D = 'd'
#define ENUM_MESSAGE_CATEGORY_EQUITY_AND_INDEX_END_OF_DAY_SUMMARY_MESSAGE_F = 'f'
#define ENUM_MESSAGE_CATEGORY_LONG_EQUITY_AND_INDEX_QUOTE_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_SHORT_EQUITY_AND_INDEX_QUOTE_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_ADMINISTRATIVE_MESSAGE_C = 'C'
#define ENUM_MESSAGE_CATEGORY_CONTROL_MESSAGE_H = 'H'
#define ENUM_MESSAGE_CATEGORY_UNDERLYING_VALUE_MESSAGE_Y = 'Y'

/*
 * Participant Id Values
 */ 
#define ENUM_PARTICIPANT_ID_NYSE_AMERICAN_A = 'A'
#define ENUM_PARTICIPANT_ID_BOSTON_OPTIONS_EXCHANGE_B = 'B'
#define ENUM_PARTICIPANT_ID_CBOE_OPTIONS_EXCHANGE_C = 'C'
#define ENUM_PARTICIPANT_ID_MIAX_EMERALD_D = 'D'
#define ENUM_PARTICIPANT_ID_CBOE_EDGX_OPTIONS_E = 'E'
#define ENUM_PARTICIPANT_ID_NASDAQ_GEMX_H = 'H'
#define ENUM_PARTICIPANT_ID_NASDAQ_ISE_I = 'I'
#define ENUM_PARTICIPANT_ID_NASDAQ_MRX_J = 'J'
#define ENUM_PARTICIPANT_ID_MIAMI_INTERNATIONAL_SECURITIES_EXCHANGE_M = 'M'
#define ENUM_PARTICIPANT_ID_NYSE_ARCA_N = 'N'
#define ENUM_PARTICIPANT_ID_OPTIONS_PRICE_REPORTING_AUTHORITY_O = 'O'
#define ENUM_PARTICIPANT_ID_MIAX_PEARL_P = 'P'
#define ENUM_PARTICIPANT_ID_NASDAQ_OPTIONS_MARKET_Q = 'Q'
#define ENUM_PARTICIPANT_ID_NASDAQ_BX_OPTIONS_T = 'T'
#define ENUM_PARTICIPANT_ID_CBOE_C2_OPTIONS_W = 'W'
#define ENUM_PARTICIPANT_ID_NASDAQ_PHLX_X = 'X'
#define ENUM_PARTICIPANT_ID_CBOE_BZX_OPTIONS_EXCHANGE_Z = 'Z'

/*
 * Premium Price Denominator Code Values
 */ 
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_TEN_A = 'A'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_HUNDRED_B = 'B'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_THOUSAND_C = 'C'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_TEN_THOUSAND_D = 'D'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_HUNDRED_THOUSAND_E = 'E'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_MILLION_F = 'F'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_TEN_MILLION_G = 'G'
#define ENUM_PREMIUM_PRICE_DENOMINATOR_CODE_NO_FRACTION_I = 'I'

/*
 * Session Indicator Values
 */ 
#define ENUM_SESSION_INDICATOR_REGULAR_0 = 0
#define ENUM_SESSION_INDICATOR_PRE_MARKET_88 = 88

/*
 * Strike Price Denominator Code Values
 */ 
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_TEN_A = 'A'
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_HUNDRED_B = 'B'
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_THOUSAND_C = 'C'
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_TEN_THOUSAND_D = 'D'
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_HUNDRED_THOUSAND_E = 'E'
#define ENUM_STRIKE_PRICE_DENOMINATOR_CODE_NO_FRACTION_I = 'I'

/*
 * Underlying Price Denominator Code Values
 */ 
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_TEN_A = 'A'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_HUNDRED_B = 'B'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_THOUSAND_C = 'C'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_TEN_THOUSAND_D = 'D'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_HUNDRED_THOUSAND_E = 'E'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_MILLION_F = 'F'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_TEN_MILLION_G = 'G'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_HUNDRED_MILLION_H = 'H'
#define ENUM_UNDERLYING_PRICE_DENOMINATOR_CODE_NO_FRACTION_I = 'I'

/*
 * Underlying Value Message Type Values
 */ 
#define ENUM_UNDERLYING_VALUE_MESSAGE_TYPE_UNDERLYING_VALUE_LAST_SALE_MESSAGE = ' '
#define ENUM_UNDERLYING_VALUE_MESSAGE_TYPE_UNDERLYING_VALUE_BID_AND_OFFER_MESSAGE_I = 'I'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Administrative Message
 */ 
typedef struct {
    char MessageType[1];
    char MessageIndicator[1];
    uint64_t TransactionId;
    uint16_t MessageDataLength;
} AdministrativeMessageT;

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
 * Structure: Best Offer Appendage
 */ 
typedef struct {
    char ParticipantId;
    char DenominatorCode[1];
    uint32_t Price;
    char Size[0];
} BestOfferAppendageT;

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

/*
 * Structure: Block Timestamp
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
} BlockTimestampT;

/*
 * Structure: Control Message
 */ 
typedef struct {
    char ControlMessageType[0];
    char MessageIndicator[1];
    uint64_t TransactionId;
    uint16_t MessageDataLength;
} ControlMessageT;

/*
 * Structure: Equity And Index End Of Day Summary Message
 */ 
typedef struct {
    char MessageType[1];
    char MessageIndicator[1];
    uint64_t TransactionId;
    char SecuritySymbol[5];
    char Reserved1[1];
    char ExpirationBlock[0];
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
 * Structure: Equity And Index Last Sale Message
 */ 
typedef struct {
    char TradeMessageType[0];
    char MessageIndicator[1];
    uint64_t TransactionId;
    char SecuritySymbol[5];
    char Reserved1[1];
    char ExpirationBlock[0];
    char StrikePriceDenominatorCode;
    uint32_t StrikePrice;
    uint32_t Volume;
    char PremiumPriceDenominatorCode;
    int32_t PremiumPrice;
    uint32_t TradeIdentifier;
    char Reserved4[4];
} EquityAndIndexLastSaleMessageT;

/*
 * Structure: Open Interest Message
 */ 
typedef struct {
    char MessageType[1];
    char MessageIndicator[1];
    uint64_t TransactionId;
    char SecuritySymbol[5];
    char Reserved1[1];
    char ExpirationBlock[0];
    char StrikePriceDenominatorCode;
    uint32_t StrikePrice;
    uint32_t OpenInterestVolume;
} OpenInterestMessageT;

/*
 * Structure: Underlying Value Bid And Offer Message
 */ 
typedef struct {
    char MessageIndicator[1];
    uint64_t TransactionId;
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
    uint64_t TransactionId;
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

