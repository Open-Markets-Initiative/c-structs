/*******************************************************************************
 * C Structs For Nasdaq Ise Itch OrderComboFeed 1.1 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Event Values
 */ 
#define ENUM_AUCTION_EVENT_START_S = 'S'
#define ENUM_AUCTION_EVENT_AUCTION_UPDATE_U = 'U'
#define ENUM_AUCTION_EVENT_END_OF_AUCTION_E = 'E'

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_EXPOSURE_E = 'E'
#define ENUM_AUCTION_TYPE_FACILITATION_C = 'C'
#define ENUM_AUCTION_TYPE_SOLICITATION_S = 'S'
#define ENUM_AUCTION_TYPE_PIM_P = 'P'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT_IN_EFFECT_H = "H"
#define ENUM_CURRENT_TRADING_STATE_TRADING_RESUMED_T = "T"

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES_O = 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS_S = 'S'
#define ENUM_EVENT_CODE_START_OF_OPENING_PROCESS_Q = 'Q'
#define ENUM_EVENT_CODE_START_OF_NORMAL_HOURS_CLOSING_PROCESS_N = 'N'
#define ENUM_EVENT_CODE_START_OF_LATE_HOURS_CLOSING_PROCESS_L = 'L'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS_E = 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGES_C = 'C'
#define ENUM_EVENT_CODE_END_OF_WCO_EARLY_CLOSING_W = 'W'

/*
 * Exec Flag Values
 */ 
#define ENUM_EXEC_FLAG_NONE_N = 'N'
#define ENUM_EXEC_FLAG_AON_A = 'A'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_DIRECTORY_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_STRATEGY_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_STRATEGY_OPEN_CLOSED_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_ORDER_ON_BOOK_MESSAGE_L = 'L'
#define ENUM_MESSAGE_TYPE_COMPLEX_STRATEGY_AUCTION_MESSAGE_J = 'J'

/*
 * Open State Values
 */ 
#define ENUM_OPEN_STATE_OPEN_FOR_AUTO_EXECUTION_Y = 'Y'
#define ENUM_OPEN_STATE_CLOSED_FOR_AUTO_EXECUTION_N = 'N'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL_C = 'C'
#define ENUM_OPTION_TYPE_PUT_P = 'P'
#define ENUM_OPTION_TYPE_STOCK = ' '

/*
 * Order Capacity Values
 */ 
#define ENUM_ORDER_CAPACITY_CUSTOMER_C = 'C'
#define ENUM_ORDER_CAPACITY_CUSTOMER_PROFESSIONAL_D = 'D'
#define ENUM_ORDER_CAPACITY_FIRM_F = 'F'
#define ENUM_ORDER_CAPACITY_BROKER_DEALER_CUSTOMER_B = 'B'
#define ENUM_ORDER_CAPACITY_BROKER_DEALER_FIRM_K = 'K'
#define ENUM_ORDER_CAPACITY_PROPRIETARY_E = 'E'
#define ENUM_ORDER_CAPACITY_AWAY_MARKET_MAKER_N = 'N'
#define ENUM_ORDER_CAPACITY_MARKET_MAKER_M = 'M'

/*
 * Order Type Values
 */ 
#define ENUM_ORDER_TYPE_MARKET_M = 'M'
#define ENUM_ORDER_TYPE_LIMIT_L = 'L'

/*
 * Scope Values
 */ 
#define ENUM_SCOPE_LOCAL_L = 'L'
#define ENUM_SCOPE_NATIONAL_N = 'N'

/*
 * Side Values
 */ 
#define ENUM_SIDE_BID_B = 'B'
#define ENUM_SIDE_OFFER_ASK_A = 'A'
#define ENUM_SIDE_HIDDEN = ' '

/*
 * Strategy Type Values
 */ 
#define ENUM_STRATEGY_TYPE_VERTICAL_SPREAD_V = 'V'
#define ENUM_STRATEGY_TYPE_TIME_SPREAD_T = 'T'
#define ENUM_STRATEGY_TYPE_DIAGONAL_SPREAD_D = 'D'
#define ENUM_STRATEGY_TYPE_STRADDLE_S = 'S'
#define ENUM_STRATEGY_TYPE_STRANGLE_G = 'G'
#define ENUM_STRATEGY_TYPE_COMBO_C = 'C'
#define ENUM_STRATEGY_TYPE_RISK_REVERSAL_R = 'R'
#define ENUM_STRATEGY_TYPE_RATIO_SPREAD_A = 'A'
#define ENUM_STRATEGY_TYPE_CUSTOM_U = 'U'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Auction Response
 */ 
typedef struct {
    uint32_t ResponsePrice;
    uint32_t ResponseSize;
} AuctionResponseT;

/*
 * Structure: Complex Strategy Auction Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    uint32_t AuctionId;
    char OrderType;
    char Side;
    uint32_t Price;
    uint32_t Size;
    char ExecFlag;
    char OrderCapacity;
    char Scope;
    char OwnerId[6];
    char Giveup[6];
    char Cmta[6];
    char AuctionEvent;
    char AuctionType;
    uint8_t NumberOfResponses;
} ComplexStrategyAuctionMessageT;

/*
 * Structure: Complex Strategy Directory Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char StrategyType;
    uint8_t Source;
    char UnderlyingSymbol[13];
    uint8_t NumberOfLegs;
} ComplexStrategyDirectoryMessageT;

/*
 * Structure: Complex Strategy Order On Book Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char OrderType;
    char Side;
    uint32_t Price;
    uint32_t Size;
    char ExecFlag;
    char OrderCapacity;
    char Scope;
    char OwnerId[6];
    char Giveup[6];
    char Cmta[6];
} ComplexStrategyOrderOnBookMessageT;

/*
 * Structure: Leg Information
 */ 
typedef struct {
    uint32_t OptionId;
    char SecuritySymbol[6];
    uint8_t LegId;
    uint8_t ExpirationYear;
    uint8_t ExpirationMonth;
    uint8_t ExpirationDay;
    uint64_t ExplicitStrikePrice;
    char OptionType;
    char Side;
    uint32_t LegRatio;
} LegInformationT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t Length;
    char MessageType;
} MessageHeaderT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    char Session[10];
    uint64_t Sequence;
    uint16_t Count;
} PacketHeaderT;

/*
 * Structure: Strategy Open Closed Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    char OpenState;
} StrategyOpenClosedMessageT;

/*
 * Structure: Strategy Trading Action Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t StrategyId;
    uint8_t CurrentTradingState;
} StrategyTradingActionMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    char Timestamp;
    char EventCode;
    uint16_t CurrentYear;
    uint8_t CurrentMonth;
    uint8_t CurrentDay;
    uint8_t Version;
    uint8_t Subversion;
} SystemEventMessageT;

