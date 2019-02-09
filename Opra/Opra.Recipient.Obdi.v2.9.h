/*******************************************************************************
 * C Structs For Opra Obdi Recipient 2.9 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Expiration Month Values
 */ 
#define ENUM_EXPIRATION_MONTH_JANUARY_A = 'A'
#define ENUM_EXPIRATION_MONTH_JANUARY_M = 'M'
#define ENUM_EXPIRATION_MONTH_FEBRUARY_B = 'B'
#define ENUM_EXPIRATION_MONTH_FEBRUARY_N = 'N'
#define ENUM_EXPIRATION_MONTH_MARCH_C = 'C'
#define ENUM_EXPIRATION_MONTH_MARCH_O = 'O'
#define ENUM_EXPIRATION_MONTH_APRIL_D = 'D'
#define ENUM_EXPIRATION_MONTH_APRIL_P = 'P'
#define ENUM_EXPIRATION_MONTH_MAY_E = 'E'
#define ENUM_EXPIRATION_MONTH_MAY_Q = 'Q'
#define ENUM_EXPIRATION_MONTH_JUNE_F = 'F'
#define ENUM_EXPIRATION_MONTH_JUNE_R = 'R'
#define ENUM_EXPIRATION_MONTH_JULY_G = 'G'
#define ENUM_EXPIRATION_MONTH_JULY_S = 'S'
#define ENUM_EXPIRATION_MONTH_AUGUST_H = 'H'
#define ENUM_EXPIRATION_MONTH_AUGUST_T = 'T'
#define ENUM_EXPIRATION_MONTH_SEPTEMBER_I = 'I'
#define ENUM_EXPIRATION_MONTH_SEPTEMBER_U = 'U'
#define ENUM_EXPIRATION_MONTH_OCTOBER_J = 'J'
#define ENUM_EXPIRATION_MONTH_OCTOBER_V = 'V'
#define ENUM_EXPIRATION_MONTH_NOVEMBER_K = 'K'
#define ENUM_EXPIRATION_MONTH_NOVEMBER_W = 'W'
#define ENUM_EXPIRATION_MONTH_DECEMBER_L = 'L'
#define ENUM_EXPIRATION_MONTH_DECEMBER_X = 'X'

/*
 * Message Category Values
 */ 
#define ENUM_MESSAGE_CATEGORY_EQUITY_AND_INDEX_LAST_SALE_MESSAGE_A = 'a'
#define ENUM_MESSAGE_CATEGORY_OPEN_INTEREST_MESSAGE_D = 'd'
#define ENUM_MESSAGE_CATEGORY_EQUITY_EOD_MESSAGE_F = 'f'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_A_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_B_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_C_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_D_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_E_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_F_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_G_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_H_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_I_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_J_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_K_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_L_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_M_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_N_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_O_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_P_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_LONG_QUOTE_SPACE_MESSAGE_K = 'k'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_A_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_B_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_C_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_D_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_E_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_F_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_G_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_H_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_I_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_J_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_K_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_L_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_M_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_N_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_O_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_P_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_SHORT_QUOTE_SPACE_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_CATEGORY_ADMINISTRATIVE_MESSAGE_C = 'C'
#define ENUM_MESSAGE_CATEGORY_CONTROL_MESSAGE_H = 'H'
#define ENUM_MESSAGE_CATEGORY_UNDERLYING_VALUE_MESSAGE_Y = 'Y'

/*
 * Participant Id Values
 */ 
#define ENUM_PARTICIPANT_ID_NYSE_AMERICAN_A = 'A'
#define ENUM_PARTICIPANT_ID_BOSTON_OPTIONS_EXCHANGE_B = 'B'
#define ENUM_PARTICIPANT_ID_CHICAGO_BOARD_OPTIONS_EXCHANGE_C = 'C'
#define ENUM_PARTICIPANT_ID_MIAX_EMERALD_D = 'D'
#define ENUM_PARTICIPANT_ID_EDGX_OPTIONS_E = 'E'
#define ENUM_PARTICIPANT_ID_ISE_GEMINI_H = 'H'
#define ENUM_PARTICIPANT_ID_INTERNATIONAL_SECURITIES_EXCHANGE_I = 'I'
#define ENUM_PARTICIPANT_ID_ISE_MERCURY_EXCHANGE_J = 'J'
#define ENUM_PARTICIPANT_ID_MIAMI_INTERNATIONAL_SECURITIES_EXCHANGE_M = 'M'
#define ENUM_PARTICIPANT_ID_NYSE_ARCA_N = 'N'
#define ENUM_PARTICIPANT_ID_OPTIONS_PRICE_REPORTING_AUTHORITY_O = 'O'
#define ENUM_PARTICIPANT_ID_MIAX_PEARL_P = 'P'
#define ENUM_PARTICIPANT_ID_NASDAQ_STOCK_MARKET_Q = 'Q'
#define ENUM_PARTICIPANT_ID_NASDAQ_OMX_BX_OPTIONS_T = 'T'
#define ENUM_PARTICIPANT_ID_C2W = 'W'
#define ENUM_PARTICIPANT_ID_NASDAQ_OMX_PHLX_X = 'X'
#define ENUM_PARTICIPANT_ID_BATS_Z = 'Z'

/*
 * Session Indicator Values
 */ 
#define ENUM_SESSION_INDICATOR_REGULAR_0 = "0"
#define ENUM_SESSION_INDICATOR_PRE_MARKET_88 = "88"

/*
 * Volume Values
 */ 
#define ENUM_VOLUME_NYSE_AMERICAN_A = "A"
#define ENUM_VOLUME_BOX_B = "B"
#define ENUM_VOLUME_CBOE_C = "C"
#define ENUM_VOLUME_EDGX_E = "E"
#define ENUM_VOLUME_GEMINI_H = "H"
#define ENUM_VOLUME_ISE_I = "I"
#define ENUM_VOLUME_MERCURY_J = "J"
#define ENUM_VOLUME_MIAX_M = "M"
#define ENUM_VOLUME_NYSE_ARCA_N = "N"
#define ENUM_VOLUME_OPRA_O = "O"
#define ENUM_VOLUME_MIAX_PEARL_P = "P"
#define ENUM_VOLUME_NASDAQ_Q = "Q"
#define ENUM_VOLUME_C2W = "W"
#define ENUM_VOLUME_NASDAQ_BX_T = "T"
#define ENUM_VOLUME_NASDAQ_PHLX_X = "X"
#define ENUM_VOLUME_BATS_Z = "Z"


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: ADMINISTRATIVE Category
 */ 
typedef struct {
    char AdministrativeMessageType[0];
    char AdministrativeMessageIndicator[0];
    uint64_t TransactionId;
} AdministrativeCategoryT;

/*
 * Structure: Administrative Message
 */ 
typedef struct {
    uint16_t MessageDataLength;
} AdministrativeMessageT;

/*
 * Structure: CONTROL Category
 */ 
typedef struct {
    char ControlMessageType[0];
    char ControlMessageIndicator[0];
    uint64_t TransactionId;
} ControlCategoryT;

/*
 * Structure: Control Message
 */ 
typedef struct {
    uint16_t MessageDataLength;
} ControlMessageT;

/*
 * Structure: Equity And Index Last Sale Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    uint32_t Volume;
    char PremiumPriceDenominatorCode[1];
    int32_t PremiumPrice;
    uint32_t TradeIdentifier;
    char Reserved4[4];
} EquityAndIndexLastSaleMessageT;

/*
 * Structure: Equity EOD Category
 */ 
typedef struct {
    char EquityEodMessageType[0];
    char EquityEodMessageIndicator[0];
    uint64_t TransactionId;
} EquityEodCategoryT;

/*
 * Structure: Equity Eod Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    uint32_t Volume;
    uint32_t OpenInterestVolume;
    char PremiumPriceDenominatorCode[1];
    int32_t OpenPrice;
    int32_t HighPrice;
    int32_t LowPrice;
    int32_t LastPrice;
    int32_t NetChange;
    char UnderlyingPriceDenominatorCode[1];
    int64_t UnderlyingPrice;
    int32_t BidPrice4;
    int32_t OfferPrice4;
} EquityEodMessageT;

/*
 * Structure: Equity Index Last Sale Category
 */ 
typedef struct {
    char EquityIndexLastSaleMessageType[0];
    char EquityIndexLastSaleMessageIndicator[0];
    uint64_t TransactionId;
} EquityIndexLastSaleCategoryT;

/*
 * Structure: Long Quote A Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteAMessageT;

/*
 * Structure: Long Quote B Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteBMessageT;

/*
 * Structure: Long Quote C Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
    char ParticipantId;
    char DenominatorCode[1];
    uint32_t Price;
    uint16_t Size;
} LongQuoteCMessageT;

/*
 * Structure: Long Quote Category
 */ 
typedef struct {
    char LongQuoteMessageType[0];
    char LongQuoteMessageIndicator[0];
    uint64_t TransactionId;
} LongQuoteCategoryT;

/*
 * Structure: Long Quote D Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteDMessageT;

/*
 * Structure: Long Quote E Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteEMessageT;

/*
 * Structure: Long Quote F Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteFMessageT;

/*
 * Structure: Long Quote G Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
    char ParticipantId;
    char DenominatorCode[1];
    uint32_t Price;
    uint16_t Size;
} LongQuoteGMessageT;

/*
 * Structure: Long Quote H Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteHMessageT;

/*
 * Structure: Long Quote I Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteIMessageT;

/*
 * Structure: Long Quote J Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteJMessageT;

/*
 * Structure: Long Quote K Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
    char ParticipantId;
    char DenominatorCode[1];
    uint32_t Price;
    uint16_t Size;
} LongQuoteKMessageT;

/*
 * Structure: Long Quote L Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteLMessageT;

/*
 * Structure: Long Quote M Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
    char BestBidParticipantId[1];
    char BestBidDenominatorCode[1];
    char BestBidPrice4[0];
    uint32_t BestBidSize;
    char BestOfferParticipantId[1];
    char BestOfferDenominatorCode[1];
    int32_t BestOfferPrice;
    uint32_t BestOfferSize;
} LongQuoteMMessageT;

/*
 * Structure: Long Quote N Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
    char BestBidParticipantId[1];
    char BestBidDenominatorCode[1];
    int32_t BestBidPrice;
    uint32_t BestBidSize;
    char BestOfferParticipantId[1];
    char BestOfferDenominatorCode[1];
    int32_t BestOfferPrice;
    uint32_t BestOfferSize;
} LongQuoteNMessageT;

/*
 * Structure: Long Quote O Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteOMessageT;

/*
 * Structure: Long Quote P Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
    char BestBidParticipantId[1];
    char BestBidDenominatorCode[1];
    int32_t BestBidPrice;
    uint32_t BestBidSize;
    char BestOfferParticipantId[1];
    char BestOfferDenominatorCode[1];
    int32_t BestOfferPrice;
    uint32_t BestOfferSize;
} LongQuotePMessageT;

/*
 * Structure: Long Quote Space Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    char PremiumPriceDenominatorCode[1];
    int32_t BidPrice4;
    uint32_t BidSize4;
    int32_t OfferPrice4;
    uint32_t OfferSize4;
} LongQuoteSpaceMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    char ParticipantId;
    char MessageCategory;
} MessageHeaderT;

/*
 * Structure: Open Interest Category
 */ 
typedef struct {
    char OpenInterestMessageType[0];
    char OpenInterestMessageIndicator[0];
    uint64_t TransactionId;
} OpenInterestCategoryT;

/*
 * Structure: Open Interest Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    char StrikePriceDenominatorCode[1];
    uint32_t StrikePrice4;
    uint32_t OpenInterestVolume;
} OpenInterestMessageT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    uint8_t Version;
    uint16_t Size;
    char DataFeedIndicator[1];
    char RetransmissionIndicator[1];
    uint8_t SessionIndicator;
    uint32_t BlockSeqNum;
    uint8_t MessageCount;
    char BlockTimestamp[0];
    uint16_t Checksum;
} PacketHeaderT;

/*
 * Structure: Short Quote A Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteAMessageT;

/*
 * Structure: Short Quote B Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteBMessageT;

/*
 * Structure: Short Quote C Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
    char ParticipantId;
    char DenominatorCode[1];
    uint32_t Price;
    uint16_t Size;
} ShortQuoteCMessageT;

/*
 * Structure: Short Quote Category
 */ 
typedef struct {
    char ShortQuoteMessageType[0];
    char ShortQuoteMessageIndicator[0];
    uint64_t TransactionId;
} ShortQuoteCategoryT;

/*
 * Structure: Short Quote D Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteDMessageT;

/*
 * Structure: Short Quote E Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteEMessageT;

/*
 * Structure: Short Quote F Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteFMessageT;

/*
 * Structure: Short Quote G Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
    char ParticipantId;
    char DenominatorCode[1];
    uint32_t Price;
    uint16_t Size;
} ShortQuoteGMessageT;

/*
 * Structure: Short Quote H Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteHMessageT;

/*
 * Structure: Short Quote I Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteIMessageT;

/*
 * Structure: Short Quote J Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteJMessageT;

/*
 * Structure: Short Quote K Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
    char ParticipantId;
    char DenominatorCode[1];
    uint32_t Price;
    uint16_t Size;
} ShortQuoteKMessageT;

/*
 * Structure: Short Quote L Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteLMessageT;

/*
 * Structure: Short Quote M Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
    char BestBidParticipantId[1];
    char BestBidDenominatorCode[1];
    int32_t BestBidPrice;
    uint32_t BestBidSize;
    char BestOfferParticipantId[1];
    char BestOfferDenominatorCode[1];
    int32_t BestOfferPrice;
    uint32_t BestOfferSize;
} ShortQuoteMMessageT;

/*
 * Structure: Short Quote N Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    char BidPrice[0];
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
    char BestBidParticipantId[1];
    char BestBidDenominatorCode[1];
    int32_t BestBidPrice;
    uint32_t BestBidSize;
    char BestOfferParticipantId[1];
    char BestOfferDenominatorCode[1];
    int32_t BestOfferPrice;
    uint32_t BestOfferSize;
} ShortQuoteNMessageT;

/*
 * Structure: Short Quote O Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteOMessageT;

/*
 * Structure: Short Quote P Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
    char BestBidParticipantId[1];
    char BestBidDenominatorCode[1];
    int32_t BestBidPrice;
    uint32_t BestBidSize;
    char BestOfferParticipantId[1];
    char BestOfferDenominatorCode[1];
    int32_t BestOfferPrice;
    uint32_t BestOfferSize;
} ShortQuotePMessageT;

/*
 * Structure: Short Quote Space Message
 */ 
typedef struct {
    char SecuritySymbol4[4];
    char ExpirationMonth;
    uint8_t ExpirationDay;
    uint8_t ExpirationYear;
    uint16_t StrikePrice2;
    int16_t BidPrice2;
    uint16_t BidSize2;
    int16_t OfferPrice2;
    uint16_t OfferSize2;
} ShortQuoteSpaceMessageT;

/*
 * Structure: UNDERLYING VALUE Category
 */ 
typedef struct {
    char UnderlyingValueMessageType[0];
    char UnderlyingValueMessageIndicator[0];
    uint64_t TransactionId;
} UnderlyingValueCategoryT;

/*
 * Structure: Underlying Value Message
 */ 
typedef struct {
    char SecuritySymbol5[5];
    char Reserved1[1];
    char IndexValueDenominatorCode[1];
    int32_t IndexValue;
    char Reserved4[4];
} UnderlyingValueMessageT;

