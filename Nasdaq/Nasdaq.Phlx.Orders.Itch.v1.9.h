/*******************************************************************************
 * C Structs For Nasdaq Phlx Itch Orders 1.9 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Action Values
 */ 
#define ENUM_ACTION_ADD_A = 'A'
#define ENUM_ACTION_DELETE_D = 'D'

/*
 * All Or None Values
 */ 
#define ENUM_ALL_OR_NONE_ALL_OR_NONE_ORDER_Y = 'Y'
#define ENUM_ALL_OR_NONE_NOT_ALL_OR_NONE_ORDER_N = 'N'

/*
 * Auction Side Values
 */ 
#define ENUM_AUCTION_SIDE_BUY_B = 'B'
#define ENUM_AUCTION_SIDE_SELL_S = 'S'
#define ENUM_AUCTION_SIDE_SOLICITATION_AUCTION = '*'

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_COLA_C = 'C'
#define ENUM_AUCTION_TYPE_OPENING_O = 'O'
#define ENUM_AUCTION_TYPE_REOPENING_R = 'R'
#define ENUM_AUCTION_TYPE_PIXL_P = 'P'
#define ENUM_AUCTION_TYPE_SOLICITATION_S = 'S'
#define ENUM_AUCTION_TYPE_ORDER_EXPOSURE_I = 'I'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT_IN_EFFECT_H = "H"
#define ENUM_CURRENT_TRADING_STATE_PHLX_TRADING_RESUMED_T = "T"

/*
 * Customer Firm Indicator Values
 */ 
#define ENUM_CUSTOMER_FIRM_INDICATOR_CUSTOMER_ORDER_C = 'C'
#define ENUM_CUSTOMER_FIRM_INDICATOR_FIRM_ORDER_F = 'F'
#define ENUM_CUSTOMER_FIRM_INDICATOR_ONFLOOR_MARKET_MAKER_M = 'M'
#define ENUM_CUSTOMER_FIRM_INDICATOR_BROKER_DEALER_ORDER_B = 'B'
#define ENUM_CUSTOMER_FIRM_INDICATOR_PROFESSIONAL_ORDER_P = 'P'
#define ENUM_CUSTOMER_FIRM_INDICATOR_NA_FOR_IMPLIED_ORDER = ' '

/*
 * Debit Or Credit Values
 */ 
#define ENUM_DEBIT_OR_CREDIT_NET_DEBIT_D = 'D'
#define ENUM_DEBIT_OR_CREDIT_NET_CREDIT_C = 'C'
#define ENUM_DEBIT_OR_CREDIT_EVEN_OR_MARKET_ORDER = ' '
#define ENUM_DEBIT_OR_CREDIT_ANONYMOUS = '*'

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
 * Leg Open Close Indicator Values
 */ 
#define ENUM_LEG_OPEN_CLOSE_INDICATOR_OPENS_POSITION_O = 'O'
#define ENUM_LEG_OPEN_CLOSE_INDICATOR_CLOSES_POSITION_C = 'C'
#define ENUM_LEG_OPEN_CLOSE_INDICATOR_STOCK_LEG = ' '

/*
 * Market Qualifier Values
 */ 
#define ENUM_MARKET_QUALIFIER_OPENING_ORDER_O = 'O'
#define ENUM_MARKET_QUALIFIER_IMPLIED_ORDER_I = 'I'
#define ENUM_MARKET_QUALIFIER_NA = ' '

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_OPTIONS_DIRECTORY_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_COMPLEX_ORDER_STRATEGY_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_SECURITY_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_COMPLEX_TRADING_ACTION_MESSAGE_I = 'I'
#define ENUM_MESSAGE_TYPE_SECURITY_OPEN_CLOSED_MESSAGE_P = 'P'
#define ENUM_MESSAGE_TYPE_STRATEGY_OPEN_CLOSED_MESSAGE_Q = 'Q'
#define ENUM_MESSAGE_TYPE_SIMPLE_ORDER_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_COMPLEX_ORDER_MESSAGE_X = 'X'
#define ENUM_MESSAGE_TYPE_AUCTION_NOTIFICATION_MESSAGE_A = 'A'
#define ENUM_MESSAGE_TYPE_COMPLEX_AUCTION_NOTIFICATION_MESSAGE_C = 'C'

/*
 * Open Close Indicator Values
 */ 
#define ENUM_OPEN_CLOSE_INDICATOR_OPENS_POSITION_O = 'O'
#define ENUM_OPEN_CLOSE_INDICATOR_CLOSES_POSITION_C = 'C'
#define ENUM_OPEN_CLOSE_INDICATOR_NA = ' '

/*
 * Open State Values
 */ 
#define ENUM_OPEN_STATE_OPEN_FOR_AUTO_EXECUTION_Y = "Y"
#define ENUM_OPEN_STATE_CLOSED_FOR_AUTO_EXECUTION_N = "N"

/*
 * Option Closing Type Values
 */ 
#define ENUM_OPTION_CLOSING_TYPE_NORMAL_N = "N"
#define ENUM_OPTION_CLOSING_TYPE_LATE_L = "L"
#define ENUM_OPTION_CLOSING_TYPE_WCO_EARLY_CLOSING_W = "W"

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL_C = 'C'
#define ENUM_OPTION_TYPE_PUT_P = 'P'
#define ENUM_OPTION_TYPE_STOCK = ' '

/*
 * Order Status Values
 */ 
#define ENUM_ORDER_STATUS_OPEN_O = 'O'
#define ENUM_ORDER_STATUS_FILLED_F = 'F'
#define ENUM_ORDER_STATUS_CANCELLED_C = 'C'
#define ENUM_ORDER_STATUS_RENOTIFICATION_R = 'R'

/*
 * Order Type Values
 */ 
#define ENUM_ORDER_TYPE_MARKET_M = 'M'
#define ENUM_ORDER_TYPE_LIMIT_L = 'L'
#define ENUM_ORDER_TYPE_ANONYMOUS = '*'

/*
 * Phlx Tradable Values
 */ 
#define ENUM_PHLX_TRADABLE_TRADABLE_Y = "Y"
#define ENUM_PHLX_TRADABLE_NOT_TRADABLE_N = "N"

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY_B = 'B'
#define ENUM_SIDE_SELL_S = 'S'
#define ENUM_SIDE_HIDDEN = '*'

/*
 * Time In Force Values
 */ 
#define ENUM_TIME_IN_FORCE_DAY_ORDER_D = 'D'
#define ENUM_TIME_IN_FORCE_GTC_G = 'G'
#define ENUM_TIME_IN_FORCE_IOC_I = 'I'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Auction Notification Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[5];
    char Expiration[0];
    uint32_t ExplicitStrikePrice;
    char OptionType;
    uint32_t AuctionId;
    char AuctionType;
    uint32_t Price;
    char AuctionSide;
    uint32_t MatchedVolume;
    uint32_t ImbalanceVolume;
    uint32_t Reserved;
} AuctionNotificationMessageT;

/*
 * Structure: Complex Auction Notification Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t StrategyId;
    uint32_t AuctionId;
    char AuctionType;
    uint32_t Price;
    char AuctionSide;
    char DebitOrCredit;
    uint32_t Volume;
} ComplexAuctionNotificationMessageT;

/*
 * Structure: Complex Order Leg
 */ 
typedef struct {
    char LegOpenCloseIndicator;
    uint32_t OptionId;
    char SecuritySymbol[5];
    char Expiration[0];
    uint32_t ExplicitStrikePrice;
    char OptionType;
    char Side;
    uint32_t LegRatio;
} ComplexOrderLegT;

/*
 * Structure: Complex Order Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t StrategyId;
    uint32_t OrderId;
    char Side;
    uint32_t OriginalOrderVolume;
    uint32_t ExecutableOrderVolume;
    char OrderStatus;
    char OrderType;
    uint32_t LimitPrice;
    char DebitOrCredit;
    char AllOrNone;
    char TimeInForce;
    char CustomerFirmIndicator;
    char UnderlyingSymbol[13];
    uint8_t NumberOfLegs;
} ComplexOrderMessageT;

/*
 * Structure: Complex Order Strategy Leg
 */ 
typedef struct {
    uint32_t OptionId;
    char SecuritySymbol[5];
    char Expiration[0];
    uint32_t ExplicitStrikePrice;
    char OptionType;
    char Side;
    uint32_t LegRatio;
} ComplexOrderStrategyLegT;

/*
 * Structure: Complex Order Strategy Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t StrategyId;
    uint8_t Source;
    char UnderlyingSymbol[13];
    char Action;
    uint8_t NumberOfLegs;
} ComplexOrderStrategyMessageT;

/*
 * Structure: Complex Trading Action Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t StrategyId;
    uint8_t CurrentTradingState;
} ComplexTradingActionMessageT;

/*
 * Structure: Expiration
 */ 
typedef struct {
    char Year[7];
    char Month[4];
    char Day[5];
} ExpirationT;

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
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[5];
    ExpirationT Expiration;
    uint32_t ExplicitStrikePrice;
    char OptionType;
    uint8_t Source;
    char UnderlyingSymbol[13];
    uint8_t OptionClosingType;
    uint8_t PhlxTradable;
} OptionsDirectoryMessageT;

/*
 * Structure: Packet Header
 */ 
typedef struct {
    char Session[10];
    uint32_t Sequence;
    uint16_t Count;
} PacketHeaderT;

/*
 * Structure: Security Open Closed Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[5];
    char Expiration[0];
    uint32_t ExplicitStrikePrice;
    char OptionType;
    uint8_t OpenState;
} SecurityOpenClosedMessageT;

/*
 * Structure: Security Trading Action Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[5];
    char Expiration[0];
    uint32_t ExplicitStrikePrice;
    char OptionType;
    uint8_t CurrentTradingState;
} SecurityTradingActionMessageT;

/*
 * Structure: Simple Order Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t OptionId;
    char SecuritySymbol[5];
    char Expiration[0];
    uint32_t ExplicitStrikePrice;
    char OptionType;
    uint32_t OrderId;
    char Side;
    uint32_t OriginalOrderVolume;
    uint32_t ExecutableOrderVolume;
    char OrderStatus;
    char OrderType;
    char MarketQualifier;
    uint32_t LimitPrice;
    char AllOrNone;
    char TimeInForce;
    char CustomerFirmIndicator;
    char OpenCloseIndicator;
} SimpleOrderMessageT;

/*
 * Structure: Strategy Open Closed Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    uint32_t StrategyId;
    uint8_t OpenState;
} StrategyOpenClosedMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t Seconds;
    uint32_t Nanoseconds;
    char EventCode;
    uint8_t Version;
} SystemEventMessageT;

