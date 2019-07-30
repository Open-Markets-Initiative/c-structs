/*******************************************************************************
 * C Structs For Nasdaq Bx Options Itch TopOfMarket 1.2 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT_H = 'H'
#define ENUM_CURRENT_TRADING_STATE_TRADING_T = 'T'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES_O = 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS_S = 'S'
#define ENUM_EVENT_CODE_START_OF_MARKET_HOURS_Q = 'Q'
#define ENUM_EVENT_CODE_END_OF_MARKET_HOURS_M = 'M'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS_E = 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGES_C = 'C'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIMESTAMP_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_OPTIONS_DIRECTORY_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_SECURITY_OPEN_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_BEST_BID_AND_ASK_UPDATE_SHORT_FORM_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_TYPE_BEST_BID_AND_ASK_UPDATE_LONG_FORM_MESSAGE_Q = 'Q'
#define ENUM_MESSAGE_TYPE_BEST_BID_UPDATE_SHORT_FORM_MESSAGE_B = 'b'
#define ENUM_MESSAGE_TYPE_BEST_ASK_UPDATE_SHORT_FORM_MESSAGE_A = 'a'
#define ENUM_MESSAGE_TYPE_BEST_BID_UPDATE_LONG_FORM_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_BEST_ASK_UPDATE_LONG_FORM_MESSAGE_A = 'A'
#define ENUM_MESSAGE_TYPE_TRADE_REPORT_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_REPORT_MESSAGE_X = 'X'

/*
 * Minimum Price Variation Values
 */ 
#define ENUM_MINIMUM_PRICE_VARIATION_PENNY_EVERYWHERE_E = 'E'
#define ENUM_MINIMUM_PRICE_VARIATION_SCALED_S = 'S'
#define ENUM_MINIMUM_PRICE_VARIATION_PENNY_PILOT_P = 'P'

/*
 * Open State Values
 */ 
#define ENUM_OPEN_STATE_OPEN_Y = 'Y'
#define ENUM_OPEN_STATE_CLOSED_N = 'N'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL_C = 'C'
#define ENUM_OPTION_TYPE_PUT_P = 'P'

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_NONFIRM_QUOTE_F = 'F'
#define ENUM_QUOTE_CONDITION_ROTATIONAL_QUOTE_R = 'R'
#define ENUM_QUOTE_CONDITION_BID_SIDE_FIRM_X = 'X'
#define ENUM_QUOTE_CONDITION_ASK_SIDE_FIRM_Y = 'Y'
#define ENUM_QUOTE_CONDITION_REGULAR_QUOTE = ' '

/*
 * Tradable Values
 */ 
#define ENUM_TRADABLE_YES_Y = 'Y'
#define ENUM_TRADABLE_NO_N = 'N'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Best Ask Update Long Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint32_t PriceLong;
    uint32_t SizeLong;
} BestAskUpdateLongFormMessageT;

/*
 * Structure: Best Ask Update Short Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint16_t Price;
    uint16_t Size;
} BestAskUpdateShortFormMessageT;

/*
 * Structure: Best Bid And Ask Update Long Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint32_t BidPriceLong;
    uint32_t BidSizeLong;
    uint32_t AskPriceLong;
    uint32_t AskSizeLong;
} BestBidAndAskUpdateLongFormMessageT;

/*
 * Structure: Best Bid And Ask Update Short Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint16_t BidPrice;
    uint16_t BidSize;
    uint16_t AskPrice;
    uint16_t AskSize;
} BestBidAndAskUpdateShortFormMessageT;

/*
 * Structure: Best Bid Update Long Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint32_t PriceLong;
    uint32_t SizeLong;
} BestBidUpdateLongFormMessageT;

/*
 * Structure: Best Bid Update Short Form Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint16_t Price;
    uint16_t Size;
} BestBidUpdateShortFormMessageT;

/*
 * Structure: Broken Trade Report Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    uint32_t OriginalCrossId;
    uint32_t OriginalPrice;
    uint32_t OriginalVolume;
} BrokenTradeReportMessageT;

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
    uint16_t Length;
    char MessageType;
} MessageHeaderT;

/*
 * Structure: Options Directory Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[6];
    uint8_t ExpirationYear;
    uint8_t ExpirationMonth;
    uint8_t ExpirationDay;
    uint32_t StrikePrice;
    char OptionType;
    uint8_t Source;
    char UnderlyingSymbol[13];
    char OptionClosingType[1];
    char Tradable;
    char MinimumPriceVariation;
} OptionsDirectoryMessageT;

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
    char Session[10];
    uint64_t Sequence;
    uint16_t Count;
} PacketHeaderT;

/*
 * Structure: Security Open Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char OpenState;
} SecurityOpenMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    char EventCode;
    uint8_t Version;
    uint8_t Subversion;
} SystemEventMessageT;

/*
 * Structure: Timestamp Message
 */ 
typedef struct {
    uint32_t Seconds;
} TimestampMessageT;

/*
 * Structure: Trade Report Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    uint32_t CrossId;
    char TradeCondition[1];
    uint32_t PriceLong;
    uint32_t Volume;
} TradeReportMessageT;

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char CurrentTradingState;
} TradingActionMessageT;

