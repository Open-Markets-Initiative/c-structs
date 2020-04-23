/*******************************************************************************
 * C Structs For Nasdaq Equities Itch Level2 2.0 protocol
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
 * Current Trading State Values
 */ 
#define ENUM_CURRENT_TRADING_STATE_HALTED_H = 'H'
#define ENUM_CURRENT_TRADING_STATE_PAUSED_P = 'P'
#define ENUM_CURRENT_TRADING_STATE_QUOTATION_ONLY_PERIOD_Q = 'Q'
#define ENUM_CURRENT_TRADING_STATE_TRADING_T = 'T'

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
#define ENUM_FINANCIAL_STATUS_INDICATOR_IN_COMPLIANCE = ' '

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
#define ENUM_IPO_FLAG_SET_UP_FOR_IPO_RELEASE_Y = 'Y'
#define ENUM_IPO_FLAG_NOT_SET_UP_FOR_IPO_RELEASE_N = 'N'
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
 * Market Code Values
 */ 
#define ENUM_MARKET_CODE_NASDAQ_Q = 'Q'
#define ENUM_MARKET_CODE_BX_B = 'B'
#define ENUM_MARKET_CODE_PSX_X = 'X'

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
 * Market Side Values
 */ 
#define ENUM_MARKET_SIDE_BID_UPDATE_B = 'B'
#define ENUM_MARKET_SIDE_OFFER_ASK_UPDATE_S = 'S'

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_SYSTEM_EVENT_MESSAGE_S = 'S'
#define ENUM_MESSAGE_TYPE_STOCK_DIRECTORY_MESSAGE_R = 'R'
#define ENUM_MESSAGE_TYPE_STOCK_TRADING_ACTION_MESSAGE_H = 'H'
#define ENUM_MESSAGE_TYPE_REG_SHO_RESTRICTION_MESSAGE_Y = 'Y'
#define ENUM_MESSAGE_TYPE_PARTICIPANT_POSITION_SUMMARY_MESSAGE_P = 'P'
#define ENUM_MESSAGE_TYPE_OPERATIONAL_HALT_MESSAGE_H = 'h'
#define ENUM_MESSAGE_TYPE_MARKET_PARTICIPANT_BIDASK_UPDATE_MESSAGE_U = 'U'
#define ENUM_MESSAGE_TYPE_RETAIL_PRICE_INTEREST_INDICATOR_MESSAGE_N = 'N'
#define ENUM_MESSAGE_TYPE_MWCB_DECLINE_LEVEL_MESSAGE_V = 'V'
#define ENUM_MESSAGE_TYPE_MWCB_STATUS_MESSAGE_W = 'W'
#define ENUM_MESSAGE_TYPE_IPO_QUOTING_PERIOD_UPDATE_MESSAGE_K = 'K'

/*
 * Operational Halt Action Values
 */ 
#define ENUM_OPERATIONAL_HALT_ACTION_TRADING_HALTED_H = 'H'
#define ENUM_OPERATIONAL_HALT_ACTION_TRADING_RESUMED_T = 'T'

/*
 * Primary Market Maker Values
 */ 
#define ENUM_PRIMARY_MARKET_MAKER_PRIMARY_Y = 'Y'
#define ENUM_PRIMARY_MARKET_MAKER_NON_PRIMARY_N = 'N'

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


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Ipo Quoting Period Update Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    uint32_t IpoQuotationReleaseTime;
    char IpoQuotationReleaseQualifier;
    char IpoPrice[10];
} IpoQuotingPeriodUpdateMessageT;

/*
 * Structure: Market Participant Bidask Update Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char MarketSide;
    uint32_t ParticipantShares;
    char Stock[8];
    int32_t Price;
    char Mpid[4];
} MarketParticipantBidaskUpdateMessageT;

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
    uint16_t TrackingNumber;
    char Timestamp;
    int64_t Level1;
    int64_t Level2;
    int64_t Level3;
} MwcbDeclineLevelMessageT;

/*
 * Structure: Mwcb Status Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char BreachedLevel;
} MwcbStatusMessageT;

/*
 * Structure: Operational Halt Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char MarketCode;
    char OperationalHaltAction;
} OperationalHaltMessageT;

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
 * Structure: Participant Position Summary Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Mpid[4];
    char Stock[8];
    char PrimaryMarketMaker;
    char MarketMakerMode;
    char MarketParticipantState;
} ParticipantPositionSummaryMessageT;

/*
 * Structure: Reg Sho Restriction Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char RegShoAction;
} RegShoRestrictionMessageT;

/*
 * Structure: Retail Price Interest Indicator Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char InterestFlag;
} RetailPriceInterestIndicatorMessageT;

/*
 * Structure: Stock Directory Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char MarketCategory;
    char FinancialStatusIndicator;
    uint32_t RoundLotSize;
    char RoundLotsOnly;
    char IssueClassification;
    char IssueSubtype[2];
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
    uint16_t TrackingNumber;
    char Timestamp;
    char Stock[8];
    char CurrentTradingState;
    char TradingActionReason[4];
} StockTradingActionMessageT;

/*
 * Structure: System Event Message
 */ 
typedef struct {
    uint16_t TrackingNumber;
    char Timestamp;
    char EventCode;
} SystemEventMessageT;

