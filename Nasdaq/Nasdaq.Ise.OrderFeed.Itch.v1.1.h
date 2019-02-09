/*******************************************************************************
 * C Structs For Nasdaq Ise Itch OrderFeed 1.1 protocol
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
 * Closing Only Values
 */ 
#define ENUM_CLOSING_ONLY_CLOSING_POSITION_ONLY_Y = 'Y'
#define ENUM_CLOSING_ONLY_NOT_CLOSING_POSITION_ONLY_N = 'N'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT_IN_EFFECT_H = 'H'
#define ENUM_CURRENT_TRADING_STATE_TRADING_ON_THE_OPTIONS_SYSTEM_T = 'T'

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
#define ENUM_EXEC_FLAG_HIDDEN = ' '

/*
 * Imbalance Direction Values
 */ 
#define ENUM_IMBALANCE_DIRECTION_BUY_IMBALANCE_B = 'B'
#define ENUM_IMBALANCE_DIRECTION_SELL_IMBALANCE_S = 'S'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_OPTION_DIRECTORY_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_SECURITY_OPEN_CLOSED_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_OPENING_IMBALANCE_MESSAGE_N = 'N'
#define ENUM_MESSAGE_TYPE_ORDER_ON_BOOK_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_AUCTION_MESSAGE_A = 'A'

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

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL_C = 'C'
#define ENUM_OPTION_TYPE_PUT_P = 'P'

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
 * Side Values
 */ 
#define ENUM_SIDE_BID_B = 'B'
#define ENUM_SIDE_OFFER_ASK_A = 'A'
#define ENUM_SIDE_HIDDEN = ' '

/*
 * Tradable Values
 */ 
#define ENUM_TRADABLE_TRADABLE_Y = 'Y'
#define ENUM_TRADABLE_NOT_TRADABLE_N = 'N'

/*
 * Trading Type Values
 */ 
#define ENUM_TRADING_TYPE_EQUITY_E = 'E'
#define ENUM_TRADING_TYPE_INDEX_I = 'I'
#define ENUM_TRADING_TYPE_ETF_F = 'F'
#define ENUM_TRADING_TYPE_CURRENCY_C = 'C'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Auction Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    uint32_t AuctionId;
    char OrderType;
    char Side;
    uint32_t Price;
    uint32_t Size;
    char ExecFlag;
    char OrderCapacity;
    char OwnerId[6];
    char Giveup[6];
    char Cmta[6];
    char AuctionEvent;
    uint8_t NumberOfResponses;
} AuctionMessageT;

/*
 * Structure: Auction Response
 */ 
typedef struct {
    uint32_t ResponsePrice;
    uint32_t ResponseSize;
} AuctionResponseT;

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
 * Structure: Opening Imbalance Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    uint32_t PairedContracts;
    char ImbalanceDirection;
    uint32_t ImbalancePrice;
    uint32_t ImbalanceVolume;
} OpeningImbalanceMessageT;

/*
 * Structure: Option Directory Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    char SecuritySymbol[6];
    uint8_t ExpirationYear;
    uint8_t ExpirationMonth;
    uint8_t ExpirationDay;
    uint64_t StrikePrice;
    char OptionType;
    uint8_t Source;
    char UnderlyingSymbol[13];
    char TradingType;
    uint16_t ContractSize;
    char OptionClosingType;
    char Tradable;
    char Mpv;
    char ClosingOnly;
} OptionDirectoryMessageT;

/*
 * Structure: Order On Book Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    char OrderType;
    char Side;
    uint32_t Price;
    uint32_t Size;
    char ExecFlag;
    char OrderCapacity;
    char OwnerId[6];
    char Giveup[6];
    char Cmta[6];
} OrderOnBookMessageT;

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
    char Timestamp;
    uint32_t OptionId;
    char OpenState;
} SecurityOpenClosedMessageT;

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

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    char Timestamp;
    uint32_t OptionId;
    char CurrentTradingState;
} TradingActionMessageT;

