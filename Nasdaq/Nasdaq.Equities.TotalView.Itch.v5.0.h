/*******************************************************************************
 * C Structs For Nasdaq Equities Itch TotalView 5.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Authenticity Values
 */ 
#define ENUM_AUTHENTICITY_LIVE_PRODUCTION_P = 'P'
#define ENUM_AUTHENTICITY_TEST_T = 'T'

/*
 * Breached Level Values
 */ 
#define ENUM_BREACHED_LEVEL_LEVEL_11 = '1'
#define ENUM_BREACHED_LEVEL_LEVEL_22 = '2'
#define ENUM_BREACHED_LEVEL_LEVEL_33 = '3'

/*
 * Buy Sell Indicator Values
 */ 
#define ENUM_BUY_SELL_INDICATOR_BUY_B = 'B'
#define ENUM_BUY_SELL_INDICATOR_SELL_S = 'S'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_OPENING_CROSS_O = 'O'
#define ENUM_CROSS_TYPE_CLOSING_CROSS_C = 'C'
#define ENUM_CROSS_TYPE_CROSS_HALTED_OR_PAUSED_H = 'H'
#define ENUM_CROSS_TYPE_INTRADAY_CROSS_AND_POST_CLOSE_CROSS_I = 'I'

/*
 * Etp Flag Values
 */ 
#define ENUM_ETP_FLAG_ETP_Y = 'Y'
#define ENUM_ETP_FLAG_NOT_ETP_N = 'N'
#define ENUM_ETP_FLAG_NOT_AVAILABLE = ' '

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
 * Financial Status Indicator Values
 */ 
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_D = 'D'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT_E = 'E'
#define ENUM_FINANCIAL_STATUS_INDICATOR_BANKRUPT_Q = 'Q'
#define ENUM_FINANCIAL_STATUS_INDICATOR_SUSPENDED_S = 'S'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_BANKRUPT_G = 'G'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_AND_DELINQUENT_H = 'H'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DELINQUENT_AND_BANKRUPT_J = 'J'
#define ENUM_FINANCIAL_STATUS_INDICATOR_DEFICIENT_DELINQUENT_AND_BANKRUPT_K = 'K'
#define ENUM_FINANCIAL_STATUS_INDICATOR_CREATIONS_AND_REDEMPTIONS_SUSPENDED_C = 'C'
#define ENUM_FINANCIAL_STATUS_INDICATOR_NORMAL_N = 'N'
#define ENUM_FINANCIAL_STATUS_INDICATOR_NA = ' '

/*
 * Imbalance Direction Values
 */ 
#define ENUM_IMBALANCE_DIRECTION_BUY_B = 'B'
#define ENUM_IMBALANCE_DIRECTION_SELL_S = 'S'
#define ENUM_IMBALANCE_DIRECTION_NO_IMBALANCE_N = 'N'
#define ENUM_IMBALANCE_DIRECTION_INSUFFICIENT_ORDERS_O = 'O'

/*
 * Interest Flag Values
 */ 
#define ENUM_INTEREST_FLAG_BUY_SIDE_RPI_ORDERS_AVAILABLE_B = 'B'
#define ENUM_INTEREST_FLAG_SELL_SIDE_RPI_ORDERS_AVAILABLE_S = 'S'
#define ENUM_INTEREST_FLAG_BOTH_SIDES_RPI_ORDERS_AVAILABLE_A = 'A'
#define ENUM_INTEREST_FLAG_NO_RPI_ORDERS_AVAILABLE_N = 'N'

/*
 * Inverse Indicator Values
 */ 
#define ENUM_INVERSE_INDICATOR_INVERSE_ETP_Y = 'Y'
#define ENUM_INVERSE_INDICATOR_NOT_INVERSE_ETP_N = 'N'

/*
 * Ipo Flag Values
 */ 
#define ENUM_IPO_FLAG_SET_UP_FOR_IPO_REALEASE_Y = 'Y'
#define ENUM_IPO_FLAG_NOT_SET_UP_FOR_IPO_REALEASE_N = 'N'
#define ENUM_IPO_FLAG_NOT_AVAILABLE = ' '

/*
 * Ipo Quotation Release Qualifier Values
 */ 
#define ENUM_IPO_QUOTATION_RELEASE_QUALIFIER_ANTICIPATED_QUOTATION_RELEASE_TIME_A = 'A'
#define ENUM_IPO_QUOTATION_RELEASE_QUALIFIER_IPO_RELEASE_CANCELED_OR_POSTPONED_C = 'C'

/*
 * Issue Classification Values
 */ 
#define ENUM_ISSUE_CLASSIFICATION_AMERICAN_DEPOSITARY_SHARE_A = 'A'
#define ENUM_ISSUE_CLASSIFICATION_BOND_B = 'B'
#define ENUM_ISSUE_CLASSIFICATION_COMMON_C = 'C'
#define ENUM_ISSUE_CLASSIFICATION_DEPOSITORY_F = 'F'
#define ENUM_ISSUE_CLASSIFICATION_144AI = 'I'
#define ENUM_ISSUE_CLASSIFICATION_LIMITED_L = 'L'
#define ENUM_ISSUE_CLASSIFICATION_NOTES_N = 'N'
#define ENUM_ISSUE_CLASSIFICATION_ORDINARY_SHARE_O = 'O'
#define ENUM_ISSUE_CLASSIFICATION_PREFERRED_P = 'P'
#define ENUM_ISSUE_CLASSIFICATION_OTHER_Q = 'Q'
#define ENUM_ISSUE_CLASSIFICATION_RIGHT_R = 'R'
#define ENUM_ISSUE_CLASSIFICATION_SHARES_S = 'S'
#define ENUM_ISSUE_CLASSIFICATION_CONVERTIBLE_T = 'T'
#define ENUM_ISSUE_CLASSIFICATION_UNIT_U = 'U'
#define ENUM_ISSUE_CLASSIFICATION_UNITS_BENIF_INT_V = 'V'
#define ENUM_ISSUE_CLASSIFICATION_WARRANT_W = 'W'

/*
 * Luld Reference Price Tier Values
 */ 
#define ENUM_LULD_REFERENCE_PRICE_TIER_TIER_11 = '1'
#define ENUM_LULD_REFERENCE_PRICE_TIER_TIER_22 = '2'
#define ENUM_LULD_REFERENCE_PRICE_TIER_NOT_AVAILABLE = ' '

/*
 * Market Category Values
 */ 
#define ENUM_MARKET_CATEGORY_NASDAQ_GLOBAL_SELECT_MARKET_Q = 'Q'
#define ENUM_MARKET_CATEGORY_NASDAQ_GLOBAL_MARKET_G = 'G'
#define ENUM_MARKET_CATEGORY_NASDAQ_CAPITAL_MARKET_S = 'S'
#define ENUM_MARKET_CATEGORY_NYSE_N = 'N'
#define ENUM_MARKET_CATEGORY_NYSE_MKT_A = 'A'
#define ENUM_MARKET_CATEGORY_NYSE_ARCA_P = 'P'
#define ENUM_MARKET_CATEGORY_BATS_ZZ = 'Z'
#define ENUM_MARKET_CATEGORY_INVESTORS_EXCHANGE_V = 'V'
#define ENUM_MARKET_CATEGORY_NA = ' '

/*
 * Market Maker Mode Values
 */ 
#define ENUM_MARKET_MAKER_MODE_NORMAL_N = 'N'
#define ENUM_MARKET_MAKER_MODE_PASSIVE_P = 'P'
#define ENUM_MARKET_MAKER_MODE_SYNDICATE_S = 'S'
#define ENUM_MARKET_MAKER_MODE_PRE_SYNDICATE_R = 'R'
#define ENUM_MARKET_MAKER_MODE_PENALTY_L = 'L'

/*
 * Market Participant State Values
 */ 
#define ENUM_MARKET_PARTICIPANT_STATE_ACTIVE_A = 'A'
#define ENUM_MARKET_PARTICIPANT_STATE_EXCUSED_E = 'E'
#define ENUM_MARKET_PARTICIPANT_STATE_WITHDRAWN_W = 'W'
#define ENUM_MARKET_PARTICIPANT_STATE_SUSPENDED_S = 'S'
#define ENUM_MARKET_PARTICIPANT_STATE_DELETED_D = 'D'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_STOCK_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTED_INDICATOR_MESSAGE_Y = 'Y'
#define ENUM_MESSAGE_TYPE_MARKET_PARTICIPANT_POSITION_MESSAGE_L = 'L'
#define ENUM_MESSAGE_TYPE_MWCB_DECLINE_LEVEL_MESSAGE_V = 'V'
#define ENUM_MESSAGE_TYPE_MWCB_STATUS_LEVEL_MESSAGE_W = 'W'
#define ENUM_MESSAGE_TYPE_IPO_QUOTING_PERIOD_UPDATE_K = 'K'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_NO_MPID_ATTRIBUTION_MESSAGE_A = 'A'
#define ENUM_MESSAGE_TYPE_LULD_AUCTION_COLLAR_MESSAGE_J = 'J'
#define ENUM_MESSAGE_TYPE_ADD_ORDER_WITH_MPID_ATTRIBUTION_MESSAGE_F = 'F'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_MESSAGE_E = 'E'
#define ENUM_MESSAGE_TYPE_ORDER_EXECUTED_WITH_PRICE_MESSAGE_C = 'C'
#define ENUM_MESSAGE_TYPE_ORDER_CANCEL_MESSAGE_X = 'X'
#define ENUM_MESSAGE_TYPE_ORDER_DELETE_MESSAGE_D = 'D'
#define ENUM_MESSAGE_TYPE_ORDER_REPLACE_MESSAGE_U = 'U'
#define ENUM_MESSAGE_TYPE_NON_CROSS_TRADE_MESSAGE_P = 'P'
#define ENUM_MESSAGE_TYPE_CROSS_TRADE_MESSAGE_Q = 'Q'
#define ENUM_MESSAGE_TYPE_BROKEN_TRADE_MESSAGE_B = 'B'
#define ENUM_MESSAGE_TYPE_NET_ORDER_IMBALANCE_INDICATOR_MESSAGE_I = 'I'
#define ENUM_MESSAGE_TYPE_RETAIL_INTEREST_MESSAGE_N = 'N'

/*
 * Price Variation Indicator Values
 */ 
#define ENUM_PRICE_VARIATION_INDICATOR_LESS_L = 'L'
#define ENUM_PRICE_VARIATION_INDICATOR_1_TO_1991 = '1'
#define ENUM_PRICE_VARIATION_INDICATOR_2_TO_2992 = '2'
#define ENUM_PRICE_VARIATION_INDICATOR_3_TO_3993 = '3'
#define ENUM_PRICE_VARIATION_INDICATOR_4_TO_4994 = '4'
#define ENUM_PRICE_VARIATION_INDICATOR_5_TO_5995 = '5'
#define ENUM_PRICE_VARIATION_INDICATOR_6_TO_6996 = '6'
#define ENUM_PRICE_VARIATION_INDICATOR_7_TO_7997 = '7'
#define ENUM_PRICE_VARIATION_INDICATOR_8_TO_8998 = '8'
#define ENUM_PRICE_VARIATION_INDICATOR_9_TO_9999 = '9'
#define ENUM_PRICE_VARIATION_INDICATOR_10_TO_1999A = 'A'
#define ENUM_PRICE_VARIATION_INDICATOR_20_TO_2999B = 'B'
#define ENUM_PRICE_VARIATION_INDICATOR_30_OR_GREATER_C = 'C'
#define ENUM_PRICE_VARIATION_INDICATOR_NO_CALCULATION = ' '

/*
 * Primary Market Maker Values
 */ 
#define ENUM_PRIMARY_MARKET_MAKER_PRIMARY_Y = 'Y'
#define ENUM_PRIMARY_MARKET_MAKER_NON_PRIMARY_N = 'N'

/*
 * Printable Values
 */ 
#define ENUM_PRINTABLE_NON_PRINTABLE_N = 'N'
#define ENUM_PRINTABLE_PRINTABLE_Y = 'Y'

/*
 * Reg Sho Action Values
 */ 
#define ENUM_REG_SHO_ACTION_NO_PRICE_TEST_0 = '0'
#define ENUM_REG_SHO_ACTION_REG_SHO_SHORT_SALE_PRICE_TEST_RESTRICTION_1 = '1'
#define ENUM_REG_SHO_ACTION_TEST_RESTRICTION_REMAINS_2 = '2'

/*
 * Round Lots Only Values
 */ 
#define ENUM_ROUND_LOTS_ONLY_ROUND_LOTS_ONLY_Y = 'Y'
#define ENUM_ROUND_LOTS_ONLY_NO_RESTRICTIONS_N = 'N'

/*
 * Short Sale Threshold Indicator Values
 */ 
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_RESTRICTED_Y = 'Y'
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_NOT_RESTRICTED_N = 'N'
#define ENUM_SHORT_SALE_THRESHOLD_INDICATOR_NA = ' '

/*
 * Trading State Values
 */ 
#define ENUM_TRADING_STATE_HALTED_H = 'H'
#define ENUM_TRADING_STATE_PAUSED_P = 'P'
#define ENUM_TRADING_STATE_QUOTATION_ONLY_PERIOD_Q = 'Q'
#define ENUM_TRADING_STATE_TRADING_T = 'T'


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Add Order No Mpid Attribution Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    char BuySellIndicator;
    uint32_t Shares;
    char Stock[8];
    int32_t Price;
} AddOrderNoMpidAttributionMessageT;

/*
 * Structure: Add Order With Mpid Attribution Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    char BuySellIndicator;
    uint32_t Shares;
    char Stock[8];
    int32_t Price;
    char Attribution[4];
} AddOrderWithMpidAttributionMessageT;

/*
 * Structure: Broken Trade Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t MatchNumber;
} BrokenTradeMessageT;

/*
 * Structure: Cross Trade Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t CrossShares;
    char Stock[8];
    int32_t CrossPrice;
    uint64_t MatchNumber;
    char CrossType;
} CrossTradeMessageT;

/*
 * Structure: Ipo Quoting Period Update
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    uint32_t IpoQuotationReleaseTime;
    char IpoQuotationReleaseQualifier;
    int32_t IpoPrice;
} IpoQuotingPeriodUpdateT;

/*
 * Structure: Luld Auction Collar Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    int32_t AuctionCollarReferencePrice;
    int32_t UpperAuctionCollarPrice;
    int32_t LowerAuctionCollarPrice;
    uint32_t AuctionCollarExtension;
} LuldAuctionCollarMessageT;

/*
 * Structure: Market Participant Position Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Mpid[4];
    char Stock[8];
    char PrimaryMarketMaker;
    char MarketMakerMode;
    char MarketParticipantState;
} MarketParticipantPositionMessageT;

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
 * Structure: Mwcb Decline Level Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    int64_t Level1;
    int64_t Level2;
    int64_t Level3;
} MwcbDeclineLevelMessageT;

/*
 * Structure: Mwcb Status Level Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char BreachedLevel;
} MwcbStatusLevelMessageT;

/*
 * Structure: Net Order Imbalance Indicator Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t PairedShares;
    uint64_t ImbalanceShares;
    char ImbalanceDirection;
    char Stock[8];
    int32_t FarPrice;
    int32_t NearPrice;
    int32_t CurrentReferencePrice;
    char CrossType;
    char PriceVariationIndicator;
} NetOrderImbalanceIndicatorMessageT;

/*
 * Structure: Non Cross Trade Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    char BuySellIndicator;
    uint32_t Shares;
    char Stock[8];
    int32_t Price;
    uint64_t MatchNumber;
} NonCrossTradeMessageT;

/*
 * Structure: Order Cancel Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t CanceledShares;
} OrderCancelMessageT;

/*
 * Structure: Order Delete Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
} OrderDeleteMessageT;

/*
 * Structure: Order Executed Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t ExecutedShares;
    uint64_t MatchNumber;
} OrderExecutedMessageT;

/*
 * Structure: Order Executed With Price Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OrderReferenceNumber;
    uint32_t ExecutedShares;
    uint64_t MatchNumber;
    char Printable;
    int32_t ExecutionPrice;
} OrderExecutedWithPriceMessageT;

/*
 * Structure: Order Replace Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    uint64_t OriginalOrderReferenceNumber;
    uint64_t NewOrderReferenceNumber;
    uint32_t Shares;
    int32_t Price;
} OrderReplaceMessageT;

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
 * Structure: Reg Sho Short Sale Price Test Restricted Indicator Message
 */ 
typedef struct {
    uint16_t LocateCode;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char RegShoAction;
} RegShoShortSalePriceTestRestrictedIndicatorMessageT;

/*
 * Structure: Retail Interest Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char InterestFlag;
} RetailInterestMessageT;

/*
 * Structure: Stock Directory Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char MarketCategory;
    char FinancialStatusIndicator;
    uint32_t RoundLotSize;
    char RoundLotsOnly;
    char IssueClassification;
    char IssueSubType[2];
    char Authenticity;
    char ShortSaleThresholdIndicator;
    char IpoFlag;
    char LuldReferencePriceTier;
    char EtpFlag;
    uint32_t EtpLeverageFactor;
    char InverseIndicator;
} StockDirectoryMessageT;

/*
 * Structure: Stock Trading Action Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char TradingState;
    char Reserved[1];
    char Reason[4];
} StockTradingActionMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint16_t StockLocate;
    uint16_t TrackingNumber;
    char Timestamp;
    char EventCode;
} SystemEventMessageT;

