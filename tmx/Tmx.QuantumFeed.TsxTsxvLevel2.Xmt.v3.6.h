/*******************************************************************************
 * C Structs For Tmx QuantumFeed Xmt TsxTsxvLevel2 3.6 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Ack Required Poss Dup Values
 */ 
#define ENUM_ACK_REQUIRED_POSS_DUP_RECEIVER_NEEDS_TO_ACK 'A'
#define ENUM_ACK_REQUIRED_POSS_DUP_POSSIBLE_DUPLICATES 'D'

/*
 * Bypass Values
 */ 
#define ENUM_BYPASS_THE_ORDER_IS_A_BYPASS 'Y'
#define ENUM_BYPASS_THE_ORDER_IS_NOT_A_BYPASS 'N'

/*
 * Cross Type Values
 */ 
#define ENUM_CROSS_TYPE_INTERNAL 'I'
#define ENUM_CROSS_TYPE_BASIS 'B'
#define ENUM_CROSS_TYPE_CONTINGENT 'C'
#define ENUM_CROSS_TYPE_DERIVATIVE_RELATED 'D'
#define ENUM_CROSS_TYPE_REGULAR 'R'
#define ENUM_CROSS_TYPE_V_SPECIAL_TRADING_SESSION 'S'
#define ENUM_CROSS_TYPE_VOLUME_WEIGHTED_AVERAGE_PRICE 'V'
#define ENUM_CROSS_TYPE_DEFAULT_TRADE_WAS_NOT_A_CROSS ' '

/*
 * Currency Values
 */ 
#define ENUM_CURRENCY_USD 'U'
#define ENUM_CURRENCY_CAD 'C'

/*
 * Imbalance Side Values
 */ 
#define ENUM_IMBALANCE_SIDE_BUY 'B'
#define ENUM_IMBALANCE_SIDE_SELL 'S'
#define ENUM_IMBALANCE_SIDE_NO_IMBALANCE_EXISTS ' '

/*
 * Initiated By Values
 */ 
#define ENUM_INITIATED_BY_BUY 'B'
#define ENUM_INITIATED_BY_SELL 'S'
#define ENUM_INITIATED_BY_BOTH 'C'

/*
 * Is Conditional Values
 */ 
#define ENUM_IS_CONDITIONAL_YES 'Y'
#define ENUM_IS_CONDITIONAL_NO 'N'

/*
 * Is Dark Values
 */ 
#define ENUM_IS_DARK_YES 'Y'
#define ENUM_IS_DARK_NO 'N'

/*
 * Is Mid Only Values
 */ 
#define ENUM_IS_MID_ONLY_YES 'Y'
#define ENUM_IS_MID_ONLY_NO 'N'

/*
 * Listing Market Values
 */ 
#define ENUM_LISTING_MARKET_TSX 'T'
#define ENUM_LISTING_MARKET_TSX_VENTURE 'V'
#define ENUM_LISTING_MARKET_TSX_NA_VEX 'N'
#define ENUM_LISTING_MARKET_NASDAQ 'Q'
#define ENUM_LISTING_MARKET_NYSE 'S'
#define ENUM_LISTING_MARKET_NYSE_MKT 'M'
#define ENUM_LISTING_MARKET_N_NO_MARKET 'X'

/*
 * Market Order Imbalance Side Values
 */ 
#define ENUM_MARKET_ORDER_IMBALANCE_SIDE_BUY 'B'
#define ENUM_MARKET_ORDER_IMBALANCE_SIDE_SELL 'S'
#define ENUM_MARKET_ORDER_IMBALANCE_SIDE_NO_IMBALANCE_EXISTS ' '

/*
 * Market State Values
 */ 
#define ENUM_MARKET_STATE_PREOPEN 'P'
#define ENUM_MARKET_STATE_OPENING 'O'
#define ENUM_MARKET_STATE_OPEN 'S'
#define ENUM_MARKET_STATE_MOC_IMBALANCE 'M'
#define ENUM_MARKET_STATE_MOC_FREEZE 'T'
#define ENUM_MARKET_STATE_CCP_DETERMINATION 'A'
#define ENUM_MARKET_STATE_PRICE_MOVEMENT_EXTENSION 'E'
#define ENUM_MARKET_STATE_CLOSING 'L'
#define ENUM_MARKET_STATE_EXTENDED_HOURS_CXLS 'N'
#define ENUM_MARKET_STATE_EXTENDED_HOURS_OPEN 'R'
#define ENUM_MARKET_STATE_CLOSED 'C'
#define ENUM_MARKET_STATE_NAV_EX_CLOSED 'J'
#define ENUM_MARKET_STATE_NAV_EX_ORDER_ENTRY 'G'
#define ENUM_MARKET_STATE_NAV_EX_ORDER_ENTRY_CLOSE 'H'
#define ENUM_MARKET_STATE_NAV_EX_AM_EXECUTION 'K'
#define ENUM_MARKET_STATE_NAV_EX_PM_EXECUTION 'X'
#define ENUM_MARKET_STATE_NAV_EX_CLOSE 'Y'

/*
 * Moc Eligible Values
 */ 
#define ENUM_MOC_ELIGIBLE_YES 'Y'
#define ENUM_MOC_ELIGIBLE_NO 'N'

/*
 * Msg Type Values
 */ 
#define ENUM_MSG_TYPE_SYMBOL_STATUS_MESSAGE 'J'
#define ENUM_MSG_TYPE_ORDER_BOOK_MESSAGE 'G'
#define ENUM_MSG_TYPE_ORDER_BOOK_TERMS_MESSAGE 'j'
#define ENUM_MSG_TYPE_ASSIGN_COP_ORDERS_MESSAGE 'A'
#define ENUM_MSG_TYPE_ASSIGN_COP_NO_ORDERS_MESSAGE 'B'
#define ENUM_MSG_TYPE_ASSIGN_LIMIT_MESSAGE 'C'
#define ENUM_MSG_TYPE_MARKET_STATE_UPDATE_MESSAGE 'E'
#define ENUM_MSG_TYPE_MOC_IMBALANCE_MESSAGE 'F'
#define ENUM_MSG_TYPE_ORDER_BOOKED_MESSAGE 'P'
#define ENUM_MSG_TYPE_ORDER_BOOKED_TERMS_MESSAGE 'm'
#define ENUM_MSG_TYPE_ORDER_CANCELLED_MESSAGE 'Q'
#define ENUM_MSG_TYPE_ORDER_CANCELLED_TERMS_MESSAGE 'n'
#define ENUM_MSG_TYPE_ORDER_PRICE_TIME_ASSIGNED_MESSAGE 'R'
#define ENUM_MSG_TYPE_ORDER_PRICE_TIME_ASSIGNED_TERMS_MESSAGE 'o'
#define ENUM_MSG_TYPE_STOCK_STATUS_MESSAGE 'I'
#define ENUM_MSG_TYPE_TRADE_REPORT_MESSAGE 'S'
#define ENUM_MSG_TYPE_TRADE_REPORT_TERMS_MESSAGE 'P'
#define ENUM_MSG_TYPE_TRADE_CANCELLED_MESSAGE 'T'
#define ENUM_MSG_TYPE_TRADE_CANCELLED_TERMS_MESSAGE 'q'
#define ENUM_MSG_TYPE_TRADE_CORRECTION_MESSAGE 'U'
#define ENUM_MSG_TYPE_TRADE_CORRECTION_TERMS_MESSAGE 'r'

/*
 * Non Resident Values
 */ 
#define ENUM_NON_RESIDENT_YES 'Y'
#define ENUM_NON_RESIDENT_NO 'N'

/*
 * Order Side Values
 */ 
#define ENUM_ORDER_SIDE_BUY 'B'
#define ENUM_ORDER_SIDE_SELL 'S'

/*
 * Product Type Values
 */ 
#define ENUM_PRODUCT_TYPE_DEBENTURE 'B'
#define ENUM_PRODUCT_TYPE_EQUITY 'E'
#define ENUM_PRODUCT_TYPE_MUTUAL_FUND 'M'
#define ENUM_PRODUCT_TYPE_ETF 'F'
#define ENUM_PRODUCT_TYPE_US_EQUITY 'U'
#define ENUM_PRODUCT_TYPE_BOND 'O'

/*
 * Settlement Terms Values
 */ 
#define ENUM_SETTLEMENT_TERMS_CASH 'C'
#define ENUM_SETTLEMENT_TERMS_NN 'N'
#define ENUM_SETTLEMENT_TERMS_MS 'M'
#define ENUM_SETTLEMENT_TERMS_CT 'T'
#define ENUM_SETTLEMENT_TERMS_VALID_SETTLEMENT_DATE 'D'
#define ENUM_SETTLEMENT_TERMS_NO_SETTLEMENT_TERMS ' '

/*
 * Test Symbol Values
 */ 
#define ENUM_TEST_SYMBOL_YES 'Y'
#define ENUM_TEST_SYMBOL_NO 'N'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Trade Correction Terms Body
 */ 
typedef struct {
    char Symbol[12];
    uint32_t TradeNumber;
    uint64_t Price;
    uint32_t Volume;
    uint16_t BuyBrokerNumber;
    uint16_t SellBrokerNumber;
    char InitiatedBy;
    uint32_t OrigTradeNumber;
    uint32_t TradeTimeStamp;
    char NonResident;
    char SettlementTerms;
    uint32_t SettlementDate;
    char CrossType;
    uint64_t TradingSystemTimeStamp;
} TradeCorrectionTermsBodyT;

/*
 * Structure: Business Header
 */ 
typedef struct {
    uint8_t MsgVersion;
    char SourceId[1];
    uint16_t StreamId;
    uint8_t Sequence0;
    uint32_t Sequence1;
} BusinessHeaderT;

/*
 * Structure: Trade Correction Terms Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    TradeCorrectionTermsBodyT TradeCorrectionTermsBody;
} TradeCorrectionTermsMessageT;

/*
 * Structure: Trade Correction Body
 */ 
typedef struct {
    char Symbol[12];
    uint32_t TradeNumber;
    uint64_t Price;
    uint32_t Volume;
    uint16_t BuyBrokerNumber;
    uint16_t SellBrokerNumber;
    char InitiatedBy;
    uint32_t OrigTradeNumber;
    char Bypass;
    uint32_t TradeTimeStamp;
    char CrossType;
    uint64_t TradingSystemTimeStamp;
    char ListingMarket;
    char ProductType;
    uint32_t TradeDate;
    char IsMidOnly;
    char IsDark;
    char IsConditional;
} TradeCorrectionBodyT;

/*
 * Structure: Trade Correction Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    TradeCorrectionBodyT TradeCorrectionBody;
} TradeCorrectionMessageT;

/*
 * Structure: Trade Cancelled Terms Body
 */ 
typedef struct {
    char Symbol[12];
    uint32_t TradeNumber;
    uint64_t TradingSystemTimeStamp;
} TradeCancelledTermsBodyT;

/*
 * Structure: Trade Cancelled Terms Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    TradeCancelledTermsBodyT TradeCancelledTermsBody;
} TradeCancelledTermsMessageT;

/*
 * Structure: Trade Cancelled Body
 */ 
typedef struct {
    char Symbol[12];
    uint32_t TradeNumber;
    uint64_t TradingSystemTimeStamp;
    char ListingMarket;
    char ProductType;
    uint32_t TradeDate;
} TradeCancelledBodyT;

/*
 * Structure: Trade Cancelled Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    TradeCancelledBodyT TradeCancelledBody;
} TradeCancelledMessageT;

/*
 * Structure: Trade Report Terms Body
 */ 
typedef struct {
    char Symbol[12];
    uint32_t TradeNumber;
    uint64_t Price;
    uint32_t Volume;
    uint16_t BuyBrokerNumber;
    uint64_t BuyOrderId;
    uint32_t BuyDisplayVolume;
    uint16_t SellBrokerNumber;
    uint64_t SellOrderId;
    uint32_t SellDisplayVolume;
    uint32_t TradeTimeStamp;
    char NonResident;
    char SettlementTerms;
    uint32_t SettlementDate;
    char CrossType;
    uint64_t TradingSystemTimeStamp;
} TradeReportTermsBodyT;

/*
 * Structure: Trade Report Terms Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    TradeReportTermsBodyT TradeReportTermsBody;
} TradeReportTermsMessageT;

/*
 * Structure: Trade Report Body
 */ 
typedef struct {
    char Symbol[12];
    uint32_t TradeNumber;
    uint64_t Price;
    uint32_t Volume;
    uint16_t BuyBrokerNumber;
    uint64_t BuyOrderId;
    uint32_t BuyDisplayVolume;
    uint16_t SellBrokerNumber;
    uint64_t SellOrderId;
    uint32_t SellDisplayVolume;
    char Bypass;
    uint32_t TradeTimeStamp;
    char CrossType;
    uint64_t TradingSystemTimeStamp;
    char ListingMarket;
    char ProductType;
    uint32_t TradeDate;
    char IsMidOnly;
    char IsDark;
    char IsConditional;
} TradeReportBodyT;

/*
 * Structure: Trade Report Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    TradeReportBodyT TradeReportBody;
} TradeReportMessageT;

/*
 * Structure: Stock Status Body
 */ 
typedef struct {
    char Symbol[12];
    char Comment[40];
    char StockState[2];
    uint64_t TradingSystemTimeStamp;
    char ListingMarket;
    char ProductType;
} StockStatusBodyT;

/*
 * Structure: Stock Status Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    StockStatusBodyT StockStatusBody;
} StockStatusMessageT;

/*
 * Structure: Order Price Time Assigned Terms Body
 */ 
typedef struct {
    char Symbol[12];
    uint16_t BrokerNumber;
    char OrderSide;
    uint64_t OrderId;
    uint64_t Price;
    uint32_t Volume;
    uint64_t PriorityTimeStamp;
    uint64_t TradingSystemTimeStamp;
} OrderPriceTimeAssignedTermsBodyT;

/*
 * Structure: Order Price Time Assigned Terms Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    OrderPriceTimeAssignedTermsBodyT OrderPriceTimeAssignedTermsBody;
} OrderPriceTimeAssignedTermsMessageT;

/*
 * Structure: Order Price Time Assigned Body
 */ 
typedef struct {
    char Symbol[12];
    uint16_t BrokerNumber;
    char OrderSide;
    uint64_t OrderId;
    uint64_t Price;
    uint32_t Volume;
    uint64_t PriorityTimeStamp;
    uint64_t TradingSystemTimeStamp;
} OrderPriceTimeAssignedBodyT;

/*
 * Structure: Order Price Time Assigned Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    OrderPriceTimeAssignedBodyT OrderPriceTimeAssignedBody;
} OrderPriceTimeAssignedMessageT;

/*
 * Structure: Order Cancelled Terms Body
 */ 
typedef struct {
    char Symbol[12];
    uint16_t BrokerNumber;
    char OrderSide;
    uint64_t OrderId;
    uint64_t TradingSystemTimeStamp;
} OrderCancelledTermsBodyT;

/*
 * Structure: Order Cancelled Terms Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    OrderCancelledTermsBodyT OrderCancelledTermsBody;
} OrderCancelledTermsMessageT;

/*
 * Structure: Order Cancelled Body
 */ 
typedef struct {
    char Symbol[12];
    uint16_t BrokerNumber;
    char OrderSide;
    uint64_t OrderId;
    uint64_t TradingSystemTimeStamp;
} OrderCancelledBodyT;

/*
 * Structure: Order Cancelled Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    OrderCancelledBodyT OrderCancelledBody;
} OrderCancelledMessageT;

/*
 * Structure: Order Booked Terms Body
 */ 
typedef struct {
    char Symbol[12];
    uint16_t BrokerNumber;
    char OrderSide;
    uint64_t OrderId;
    uint64_t Price;
    uint32_t Volume;
    char NonResident;
    char SettlementTerms;
    uint32_t SettlementDate;
    uint64_t PriorityTimeStamp;
    uint64_t TradingSystemTimeStamp;
} OrderBookedTermsBodyT;

/*
 * Structure: Order Booked Terms Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    OrderBookedTermsBodyT OrderBookedTermsBody;
} OrderBookedTermsMessageT;

/*
 * Structure: Order Booked Body
 */ 
typedef struct {
    char Symbol[12];
    uint16_t BrokerNumber;
    char OrderSide;
    uint64_t OrderId;
    uint64_t Price;
    uint32_t Volume;
    uint64_t PriorityTimeStamp;
    uint64_t TradingSystemTimeStamp;
} OrderBookedBodyT;

/*
 * Structure: Order Booked Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    OrderBookedBodyT OrderBookedBody;
} OrderBookedMessageT;

/*
 * Structure: Moc Imbalance Body
 */ 
typedef struct {
    char Symbol[12];
    char ImbalanceSide;
    uint32_t ImbalanceVolume;
    uint64_t TradingSystemTimeStamp;
    uint64_t ImbalanceReferencePrice;
    uint32_t PairedVolume;
    uint32_t MarketOrderImbalanceVolume;
    char MarketOrderImbalanceSide;
    uint64_t NearIndicativeClosingPrice;
    uint64_t FarIndicativeClosingPrice;
} MocImbalanceBodyT;

/*
 * Structure: Moc Imbalance Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    MocImbalanceBodyT MocImbalanceBody;
} MocImbalanceMessageT;

/*
 * Structure: Market State Update Body
 */ 
typedef struct {
    char MarketState;
    uint8_t StockGroup;
    uint64_t TradingSystemTimeStamp;
} MarketStateUpdateBodyT;

/*
 * Structure: Market State Update Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    MarketStateUpdateBodyT MarketStateUpdateBody;
} MarketStateUpdateMessageT;

/*
 * Structure: Cop Limit 15
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit15T;

/*
 * Structure: Cop Limit 14
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit14T;

/*
 * Structure: Cop Limit 13
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit13T;

/*
 * Structure: Cop Limit 12
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit12T;

/*
 * Structure: Cop Limit 11
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit11T;

/*
 * Structure: Cop Limit 10
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit10T;

/*
 * Structure: Cop Limit 9
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit9T;

/*
 * Structure: Cop Limit 8
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit8T;

/*
 * Structure: Cop Limit 7
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit7T;

/*
 * Structure: Cop Limit 6
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit6T;

/*
 * Structure: Cop Limit 5
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit5T;

/*
 * Structure: Cop Limit 4
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit4T;

/*
 * Structure: Cop Limit 3
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit3T;

/*
 * Structure: Cop Limit 2
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit2T;

/*
 * Structure: Cop Limit 1
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
    uint64_t Price;
} CopLimit1T;

/*
 * Structure: Assign Limit Body
 */ 
typedef struct {
    char Symbol[12];
    uint64_t CalculatedOpeningPrice;
    char OrderSide;
    CopLimit1T CopLimit1;
    CopLimit2T CopLimit2;
    CopLimit3T CopLimit3;
    CopLimit4T CopLimit4;
    CopLimit5T CopLimit5;
    CopLimit6T CopLimit6;
    CopLimit7T CopLimit7;
    CopLimit8T CopLimit8;
    CopLimit9T CopLimit9;
    CopLimit10T CopLimit10;
    CopLimit11T CopLimit11;
    CopLimit12T CopLimit12;
    CopLimit13T CopLimit13;
    CopLimit14T CopLimit14;
    CopLimit15T CopLimit15;
    uint64_t TradingSystemTimeStamp;
} AssignLimitBodyT;

/*
 * Structure: Assign Limit Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    AssignLimitBodyT AssignLimitBody;
} AssignLimitMessageT;

/*
 * Structure: Assign Cop No Orders Body
 */ 
typedef struct {
    char Symbol[12];
    uint64_t CalculatedOpeningPrice;
    uint64_t TradingSystemTimeStamp;
} AssignCopNoOrdersBodyT;

/*
 * Structure: Assign Cop No Orders Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    AssignCopNoOrdersBodyT AssignCopNoOrdersBody;
} AssignCopNoOrdersMessageT;

/*
 * Structure: Cop Order 15
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder15T;

/*
 * Structure: Cop Order 14
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder14T;

/*
 * Structure: Cop Order 13
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder13T;

/*
 * Structure: Cop Order 12
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder12T;

/*
 * Structure: Cop Order 11
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder11T;

/*
 * Structure: Cop Order 10
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder10T;

/*
 * Structure: Cop Order 9
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder9T;

/*
 * Structure: Cop Order 8
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder8T;

/*
 * Structure: Cop Order 7
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder7T;

/*
 * Structure: Cop Order 6
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder6T;

/*
 * Structure: Cop Order 5
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder5T;

/*
 * Structure: Cop Order 4
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder4T;

/*
 * Structure: Cop Order 3
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder3T;

/*
 * Structure: Cop Order 2
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder2T;

/*
 * Structure: Cop Order 1
 */ 
typedef struct {
    uint16_t BrokerNumber;
    uint64_t OrderId;
} CopOrder1T;

/*
 * Structure: Assign Cop Orders Body
 */ 
typedef struct {
    char Symbol[12];
    uint64_t CalculatedOpeningPrice;
    char OrderSide;
    CopOrder1T CopOrder1;
    CopOrder2T CopOrder2;
    CopOrder3T CopOrder3;
    CopOrder4T CopOrder4;
    CopOrder5T CopOrder5;
    CopOrder6T CopOrder6;
    CopOrder7T CopOrder7;
    CopOrder8T CopOrder8;
    CopOrder9T CopOrder9;
    CopOrder10T CopOrder10;
    CopOrder11T CopOrder11;
    CopOrder12T CopOrder12;
    CopOrder13T CopOrder13;
    CopOrder14T CopOrder14;
    CopOrder15T CopOrder15;
    uint64_t TradingSystemTimeStamp;
} AssignCopOrdersBodyT;

/*
 * Structure: Assign Cop Orders Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    AssignCopOrdersBodyT AssignCopOrdersBody;
} AssignCopOrdersMessageT;

/*
 * Structure: Order Book Terms Body
 */ 
typedef struct {
    char Symbol[12];
    uint16_t BrokerNumber;
    char OrderSide;
    uint64_t OrderId;
    uint64_t Price;
    uint32_t Volume;
    char NonResident;
    char SettlementTerms;
    uint32_t SettlementDate;
    uint64_t PriorityTimeStamp;
} OrderBookTermsBodyT;

/*
 * Structure: Order Book Terms Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    OrderBookTermsBodyT OrderBookTermsBody;
} OrderBookTermsMessageT;

/*
 * Structure: Order Book Body
 */ 
typedef struct {
    char Symbol[12];
    uint16_t BrokerNumber;
    char OrderSide;
    uint64_t OrderId;
    uint64_t Price;
    uint32_t Volume;
    char NonResident;
    char SettlementTerms;
    uint32_t SettlementDate;
    uint64_t PriorityTimeStamp;
} OrderBookBodyT;

/*
 * Structure: Order Book Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    OrderBookBodyT OrderBookBody;
} OrderBookMessageT;

/*
 * Structure: Symbol Status Body
 */ 
typedef struct {
    char Symbol[12];
    uint8_t StockGroup;
    char Cusip[12];
    uint16_t BoardLot;
    char Currency;
    uint64_t FaceValue;
    uint64_t LastSale;
    char ListingMarket;
    char ProductType;
    uint32_t BuyMaximumQuantity;
    uint32_t BuyMinimumQuantity;
    uint32_t SellMaximumQuantity;
    uint32_t SellMinimumQuantity;
    char StockState[2];
    char TestSymbol;
    char MocEligible;
} SymbolStatusBodyT;

/*
 * Structure: Symbol Status Message
 */ 
typedef struct {
    BusinessHeaderT BusinessHeader;
    SymbolStatusBodyT SymbolStatusBody;
} SymbolStatusMessageT;

/*
 * Structure: Body Header
 */ 
typedef struct {
    uint16_t MsgLength;
    char MsgType;
} BodyHeaderT;

/*
 * Structure: Body
 */ 
typedef struct {
    BodyHeaderT BodyHeader;
} BodyT;

/*
 * Structure: Frame Header
 */ 
typedef struct {
    char StartOfFrame;
    char ProtocolName[1];
    char ProtocolVersion[1];
    uint16_t MessageLength;
    uint32_t SessionId;
    char AckRequiredPossDup;
    uint8_t NumBody;
} FrameHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    FrameHeaderT FrameHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Tmx Group
   Version: 3.6
   Date: Tuesday, October 20, 2020
   Specification: tsx_tsxv_level_2_quantumfeed_business_message_specifications-v3-6-0.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
