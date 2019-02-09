/*******************************************************************************
 * C Structs For Nasdaq Phlx Itch Topo 3.3 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT_IN_EFFECT_H = 'H'
#define ENUM_CURRENT_TRADING_STATE_TRADING_RESUMED_T = 'T'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES_O = "O"
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS_S = "S"
#define ENUM_EVENT_CODE_START_OF_OPENING_PROCESS_Q = "Q"
#define ENUM_EVENT_CODE_START_OF_NORMAL_HOURS_CLOSING_PROCESS_N = "N"
#define ENUM_EVENT_CODE_START_OF_LATE_HOURS_CLOSING_PROCESS_L = "L"
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS_E = "E"
#define ENUM_EVENT_CODE_END_OF_MESSAGES_C = "C"
#define ENUM_EVENT_CODE_END_OF_WCO_EARLY_CLOSING_W = "W"

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_TIMESTAMP_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_OPTIONS_DIRECTORY_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_SECURITY_OPEN_CLOSED_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_SHORT_BEST_BID_AND_ASK_UPDATE_MESSAGE_Q = 'q'
#define ENUM_MESSAGE_TYPE_LONG_BEST_BID_AND_ASK_UPDATE_MESSAGE_Q = 'Q'
#define ENUM_MESSAGE_TYPE_SHORT_BEST_ASK_UPDATE_MESSAGE_A = 'a'
#define ENUM_MESSAGE_TYPE_SHORT_BEST_BID_UPDATE_MESSAGE_B = 'b'
#define ENUM_MESSAGE_TYPE_LONG_BEST_ASK_UPDATE_MESSAGE_A = 'A'
#define ENUM_MESSAGE_TYPE_LONG_BEST_BID_UPDATE_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_TRADE_REPORT_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_REPORT_MESSAGE_X = 'X'

/*
 * Mpv Values
 */ 
#define ENUM_MPV_PENNY_EVERYWHERE_E = 'E'
#define ENUM_MPV_SCALED_S = 'S'
#define ENUM_MPV_PENNY_PILOT_P = 'P'

/*
 * Open State Values
 */ 
#define ENUM_OPEN_STATE_OPEN_FOR_AUTO_EXECUTION_Y = 'Y'
#define ENUM_OPEN_STATE_CLOSED_FOR_AUTO_EXECUTION_N = 'N'

/*
 * Option Closing Type Values
 */ 
#define ENUM_OPTION_CLOSING_TYPE_NORMAL_N = 'N'
#define ENUM_OPTION_CLOSING_TYPE_LATE_L = 'L'
#define ENUM_OPTION_CLOSING_TYPE_WCO_EARLY_CLOSING_W = 'W'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL_C = 'C'
#define ENUM_OPTION_TYPE_PUT_P = 'P'

/*
 * Quote Condition Values
 */ 
#define ENUM_QUOTE_CONDITION_REGULAR_QUOTEAUTOX_ELIGIBLE = ''
#define ENUM_QUOTE_CONDITION_NON_FIRM_QUOTE_F = 'F'
#define ENUM_QUOTE_CONDITION_ROTATIONAL_QUOTE_R = 'R'
#define ENUM_QUOTE_CONDITION_BID_SIDE_FIRM_X = 'X'
#define ENUM_QUOTE_CONDITION_ASK_SIDE_FIRM_Y = 'Y'

/*
 * Tradable Values
 */ 
#define ENUM_TRADABLE_TRADABLE_Y = 'Y'
#define ENUM_TRADABLE_NOT_TRADABLE_N = 'N'


/*******************************************************************************
 * Structs
 *******************************************************************************/

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
 * Structure: Long Best Ask Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint32_t Price4;
    uint32_t Size4;
} LongBestAskUpdateMessageT;

/*
 * Structure: Long Best Bid And Ask Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint32_t BidPrice4;
    uint32_t BidSize4;
    uint32_t AskPrice4;
    uint32_t AskSize4;
} LongBestBidAndAskUpdateMessageT;

/*
 * Structure: Long Best Bid Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint32_t Price4;
    uint32_t Size4;
} LongBestBidUpdateMessageT;

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
    char OptionClosingType;
    char Tradable;
    char Mpv;
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
 * Structure: Security Open Closed Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char OpenState;
} SecurityOpenClosedMessageT;

/*
 * Structure: Short Best Ask Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint16_t Price2;
    uint16_t Size2;
} ShortBestAskUpdateMessageT;

/*
 * Structure: Short Best Bid And Ask Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint16_t BidPrice2;
    uint16_t BidSize2;
    uint16_t AskPrice2;
    uint16_t AskSize2;
} ShortBestBidAndAskUpdateMessageT;

/*
 * Structure: Short Best Bid Update Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char QuoteCondition;
    uint16_t Price2;
    uint16_t Size2;
} ShortBestBidUpdateMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint8_t EventCode;
    uint8_t Version;
    uint8_t Subversion;
} SystemEventMessageT;

/*
 * Structure: Timestamp Message
 */ 
typedef struct {
    uint32_t Second;
} TimestampMessageT;

/*
 * Structure: Trade Report Message
 */ 
typedef struct {
    uint32_t Nanoseconds;
    uint32_t OptionId;
    uint32_t CrossId;
    char TradeCondition[1];
    uint32_t Price4;
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

