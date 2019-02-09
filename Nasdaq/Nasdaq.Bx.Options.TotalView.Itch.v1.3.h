/*******************************************************************************
 * C Structs For Nasdaq Bx Options Itch TotalView 1.3 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_OPENING_O = 'O'
#define ENUM_AUCTION_TYPE_REOPENING_R = 'R'
#define ENUM_AUCTION_TYPE_EXPOSURE_I = 'I'
#define ENUM_AUCTION_TYPE_PRICE_IMPROVEMENT_P = 'P'

/*
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY_B = 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL_S = 'S'

/*
 * Change Reason Values
 */ 
#define ENUM_CHANGE_REASON_USER_U = 'U'
#define ENUM_CHANGE_REASON_REPRICE_R = 'R'
#define ENUM_CHANGE_REASON_SUSPEND_S = 'S'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_BX_OPENING_REOPENING_O = 'O'
#define ENUM_CROSS_TYPE_BX_OPENING_REOPENING_P = 'P'

/*
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALT_H = 'H'
#define ENUM_CURRENT_TRADING_STATE_TRADING_T = 'T'
#define ENUM_CURRENT_TRADING_STATE_BUY_SIDE_TRADING_SUSPENDED_B = 'B'
#define ENUM_CURRENT_TRADING_STATE_SELL_SIDE_TRADING_SUSPENDED_S = 'S'
#define ENUM_CURRENT_TRADING_STATE_OPEN_Y = 'Y'
#define ENUM_CURRENT_TRADING_STATE_CLOSED_N = 'N'

/*
 * Customer Firm Indicator Values
 */ 
#define ENUM_CUSTOMER_FIRM_INDICATOR_CUSTOMER_C = 'C'
#define ENUM_CUSTOMER_FIRM_INDICATOR_FIRM_JOINT_F = 'F'
#define ENUM_CUSTOMER_FIRM_INDICATOR_ONFLOOR_M = 'M'
#define ENUM_CUSTOMER_FIRM_INDICATOR_PROFESSIONAL_P = 'P'
#define ENUM_CUSTOMER_FIRM_INDICATOR_BROKER_DEALER_NON_REGISTERED_B = 'B'

/*
 * Event Code Values
 */ 
#define ENUM_EVENT_CODE_START_OF_MESSAGES_THIS_IS_ALWAYS_THE_FIRST_MESSAGE_SENT_IN_ANY_TRADING_DAY_O = 'O'
#define ENUM_EVENT_CODE_START_OF_SYSTEM_HOURS_THIS_MESSAGE_INDICATES_THAT_BX_IS_OPEN_AND_READY_TO_START_ACCEPTING_ORDERS_S = 'S'
#define ENUM_EVENT_CODE_START_OF_OPENING_PROCESS_THIS_MESSAGE_IS_INTENDED_TO_INDICATE_THAT_BX_HAS_STARTED_ITS_OPENING_AUCTION_PROCESS_Q = 'Q'
#define ENUM_EVENT_CODE_END_OF_NORMAL_HOURS_PROCESSING_THIS_MESSAGE_IS_INTENDED_TO_INDICATE_THAT_BX_WILL_NO_LONGER_ACCEPT_ANY_NEW_ORDERS_OR_CHANGES_TO_EXISTING_ORDERS_FOR_OPTIONS_THAT_TRADE_DURING_NORMAL_TRADING_HOURS_N = 'N'
#define ENUM_EVENT_CODE_END_OF_LATE_HOURS_PROCESSING_THIS_MESSAGE_IS_INTENDED_TO_INDICATE_THAT_BX_WILL_NO_LONGER_ACCEPT_ANY_NEW_ORDERS_OR_CHANGES_TO_EXISTING_ORDERS_FOR_OPTIONS_THAT_TRADE_DURING_EXTENDED_HOURS_L = 'L'
#define ENUM_EVENT_CODE_END_OF_SYSTEM_HOURS_THIS_MESSAGE_INDICATES_THAT_BX_OPTIONS_SYSTEM_IS_NOW_CLOSED_E = 'E'
#define ENUM_EVENT_CODE_END_OF_MESSAGES_THIS_IS_ALWAYS_THE_LAST_MESSAGE_SENT_IN_ANY_TRADING_DAY_C = 'C'

/*
 * Imbalance Direction Values
 */ 
#define ENUM_IMBALANCE_DIRECTION_BUY_B = 'B'
#define ENUM_IMBALANCE_DIRECTION_SELL_S = 'S'

/*
 * Market Side Values
 */ 
#define ENUM_MARKET_SIDE_BUY_B = 'B'
#define ENUM_MARKET_SIDE_SELL_S = 'S'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SECONDS_MESSAGE_T = 'T'
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_BASE_REFERENCE_MESSAGE_L = 'L'
#define ENUM_MESSAGE_TYPE_OPTION_DIRECTORY_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_OPTION_OPEN_MESSAGE_O = 'O'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE_SHORT_FORM_A = 'a'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_MESSAGE_LONG_FORM_A = 'A'
#define ENUM_MESSAGE_TYPE_ADD_QUOTE_MESSAGE_SHORT_FORM_J = 'j'
#define ENUM_MESSAGE_TYPE_ADD_QUOTE_MESSAGE_LONG_FORM_J = 'J'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_EXECUTED_MESSAGE_E = 'E'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_ORDER_EXECUTED_WITH_PRICE_MESSAGE_C = 'C'
#define ENUM_MESSAGE_TYPE_ORDER_CANCEL_MESSAGE_X = 'X'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_REPLACE_MESSAGE_SHORT_FORM_U = 'u'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_REPLACE_MESSAGE_LONG_FORM_U = 'U'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_DELETE_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_SINGLE_SIDE_UPDATE_MESSAGE_G = 'G'
#define ENUM_MESSAGE_TYPE_QUOTE_REPLACE_MESSAGE_SHORT_FORM_K = 'k'
#define ENUM_MESSAGE_TYPE_QUOTE_REPLACE_MESSAGE_LONG_FORM_K = 'K'
#define ENUM_MESSAGE_TYPE_QUOTE_DELETE_MESSAGE_Y = 'Y'
#define ENUM_MESSAGE_TYPE_BLOCK_DELETE_MESSAGE_Z = 'Z'
#define ENUM_MESSAGE_TYPE_NON_AUCTION_OPTIONS_TRADE_MESSAGE_P = 'P'
#define ENUM_MESSAGE_TYPE_OPTIONS_CROSS_TRADE_MESSAGE_Q = 'Q'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_OR_ORDER_EXECUTION_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_NET_ORDER_IMBALANCE_INDICATOR_MESSAGE_I = 'I'

/*
 * Mpv Values
 */ 
#define ENUM_MPV_EVERYWHERE_E = 'E'
#define ENUM_MPV_SCALED_S = 'S'
#define ENUM_MPV_PILOT_P = 'P'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_CALL_C = 'C'
#define ENUM_OPTION_TYPE_PUT_P = 'P'

/*
 * Options Closing Type Values
 */ 
#define ENUM_OPTIONS_CLOSING_TYPE_NORMAL_N = 'N'
#define ENUM_OPTIONS_CLOSING_TYPE_LATE_L = 'L'

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_NONPRINTABLE_N = 'N'
#define ENUM_PRINTABLE_PRINTABLE_Y = 'Y'

/*
 * Tradable Values
 */ 
#define ENUM_TRADABLE_NOT_TRADABLE_N = 'N'
#define ENUM_TRADABLE_IS_TRADABLE_Y = 'Y'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Add Order Message Long Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OrderReferenceNumberDelta;
    char MarketSide;
    uint32_t OptionId;
    uint16_t Price;
    uint16_t Volume;
} AddOrderMessageLongFormT;

/*
 * Structure: Add Order Message Short Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OrderReferenceNumberDelta;
    char MarketSide;
    uint32_t OptionId;
    uint16_t Price;
    uint16_t Volume;
} AddOrderMessageShortFormT;

/*
 * Structure: Add Quote Message Long Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t BidReferenceNumberDelta;
    uint32_t AskReferenceNumberDelta;
    uint32_t OptionId;
    uint32_t Bid;
    uint16_t BidSize;
    uint32_t Ask;
    uint16_t AskSize;
} AddQuoteMessageLongFormT;

/*
 * Structure: Add Quote Message Short Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t BidReferenceNumberDelta;
    uint32_t AskReferenceNumberDelta;
    uint32_t OptionId;
    uint16_t BidPrice;
    uint16_t BidSize;
    uint16_t AskPrice;
    uint16_t AskSize;
} AddQuoteMessageShortFormT;

/*
 * Structure: Base Reference Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint64_t BaseReferenceNumber;
} BaseReferenceMessageT;

/*
 * Structure: Block Delete Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint16_t TotalNumberOfReferenceNumberDeltas;
    uint32_t ReferenceNumberDeltan;
} BlockDeleteMessageT;

/*
 * Structure: Broken Trade Or Order Execution Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
} BrokenTradeOrOrderExecutionMessageT;

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
 * Structure: Net Order Imbalance Indicator Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t AuctionId;
    char AuctionType;
    uint32_t PairedContracts;
    char ImbalanceDirection;
    uint32_t OptionId;
    uint32_t ImbalancePrice;
    uint32_t ImbalanceVolume;
    char CustomerFirmIndicator;
    char Reserved;
} NetOrderImbalanceIndicatorMessageT;

/*
 * Structure: Non Auction Options Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char BuySellIndicator;
    uint32_t OptionId;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    uint16_t Price;
    uint16_t Volume;
} NonAuctionOptionsTradeMessageT;

/*
 * Structure: Option Directory Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OptionId;
    char SecuritySymbol[6];
    uint8_t ExpirationYear;
    uint8_t ExpirationMonth;
    uint8_t ExpirationDate;
    uint32_t ExplicitStrikePrice;
    char OptionType;
    uint8_t Source;
    char UnderlyingSymbol[13];
    char OptionsClosingType;
    char Tradable;
    char Mpv;
} OptionDirectoryMessageT;

/*
 * Structure: Option Open Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OptionId;
    char OpenState[1];
} OptionOpenMessageT;

/*
 * Structure: Options Cross Trade Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OptionId;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    char CrossType;
    uint16_t Price;
    uint16_t Volume;
} OptionsCrossTradeMessageT;

/*
 * Structure: Order Cancel Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OrderReferenceNumberDelta;
    uint32_t CancelledContracts;
} OrderCancelMessageT;

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
 * Structure: Quote Delete Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t BidReferenceNumberDelta;
    uint32_t AskReferenceNumberDelta;
} QuoteDeleteMessageT;

/*
 * Structure: Quote Replace Message Long Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalBidReferenceNumberDelta;
    uint32_t BidReferenceNumberDelta;
    uint32_t OriginalAskReferenceNumberDelta;
    uint32_t AskReferenceDeltaNumber;
    uint16_t BidPrice;
    uint16_t BidSize;
    uint16_t AskPrice;
    uint16_t AskSize;
} QuoteReplaceMessageLongFormT;

/*
 * Structure: Quote Replace Message Short Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalBidReferenceNumberDelta;
    uint32_t BidReferenceNumberDelta;
    uint32_t OriginalAskReferenceNumberDelta;
    uint32_t AskReferenceDeltaNumber;
    uint16_t BidPrice;
    uint16_t BidSize;
    uint16_t AskPrice;
    uint16_t AskSize;
} QuoteReplaceMessageShortFormT;

/*
 * Structure: Seconds Message
 */ 
typedef struct {
    uint32_t Second;
} SecondsMessageT;

/*
 * Structure: Single Side Delete Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
} SingleSideDeleteMessageT;

/*
 * Structure: Single Side Executed Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
    uint32_t ExecutedContracts;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
} SingleSideExecutedMessageT;

/*
 * Structure: Single Side Order Executed With Price Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
    uint32_t CrossNumber;
    uint32_t MatchNumber;
    char Printable;
    uint16_t Price;
    uint16_t Volume;
} SingleSideOrderExecutedWithPriceMessageT;

/*
 * Structure: Single Side Replace Message Long Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalReferenceNumberDelta;
    uint32_t NewReferenceNumberDelta;
    uint16_t Price;
    uint16_t Volume;
} SingleSideReplaceMessageLongFormT;

/*
 * Structure: Single Side Replace Message Short Form
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OriginalReferenceNumberDelta;
    uint32_t NewReferenceNumberDelta;
    uint16_t Price;
    uint16_t Volume;
} SingleSideReplaceMessageShortFormT;

/*
 * Structure: Single Side Update Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t ReferenceNumberDelta;
    char ChangeReason;
    uint16_t Price;
    uint16_t Volume;
} SingleSideUpdateMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint32_t Timestamp;
    char EventCode;
} SystemEventMessageT;

/*
 * Structure: Trading Action Message
 */ 
typedef struct {
    uint32_t Timestamp;
    uint32_t OptionId;
    char CurrentTradingState;
} TradingActionMessageT;

