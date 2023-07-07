/*******************************************************************************
 * C Structs For Box Options Sola Hsvf Unicast 4.5.1 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Ask Price Sign Values
 */ 
#define ENUM_ASK_PRICE_SIGN_POSITIVE '+'
#define ENUM_ASK_PRICE_SIGN_NEGATIVE '-'

/*
 * Auction Type Values
 */ 
#define ENUM_AUCTION_TYPE_REGULAR_PIP 'G'
#define ENUM_AUCTION_TYPE_SOLICITATION 'B'
#define ENUM_AUCTION_TYPE_FACILITATION 'C'
#define ENUM_AUCTION_TYPE_EXPOSED_ORDER 'F'

/*
 * Bulletin Type Values
 */ 
#define ENUM_BULLETIN_TYPE_REGULAR '1'
#define ENUM_BULLETIN_TYPE_SPECIAL '2'

/*
 * Complex Order Instrument Allow Implied Values
 */ 
#define ENUM_COMPLEX_ORDER_INSTRUMENT_ALLOW_IMPLIED_NO 'N'
#define ENUM_COMPLEX_ORDER_INSTRUMENT_ALLOW_IMPLIED_CONTINUOUS_IMPLIED 'C'
#define ENUM_COMPLEX_ORDER_INSTRUMENT_ALLOW_IMPLIED_SNAPSHOT_IMPLIED 'S'

/*
 * Continue Marker Values
 */ 
#define ENUM_CONTINUE_MARKER_BULLETIN_CONTINUES_IN_NEXT_RECORD '0'
#define ENUM_CONTINUE_MARKER_BULLETIN_ENDED '1'

/*
 * Deletion Type Values
 */ 
#define ENUM_DELETION_TYPE_PRECISE_ORDER '1'
#define ENUM_DELETION_TYPE_ALL_PREVIOUS_ORDERS_IN_THE_SPECIFIED_SIDE '2'
#define ENUM_DELETION_TYPE_ALL_ORDERS '3'

/*
 * Delivery Month Values
 */ 
#define ENUM_DELIVERY_MONTH_JANUARY_PUT 'M'
#define ENUM_DELIVERY_MONTH_FEBRUARY_PUT 'N'
#define ENUM_DELIVERY_MONTH_MARCH_PUT 'O'
#define ENUM_DELIVERY_MONTH_APRIL_PUT 'P'
#define ENUM_DELIVERY_MONTH_MAY_PUT 'Q'
#define ENUM_DELIVERY_MONTH_JUNE_PUT 'R'
#define ENUM_DELIVERY_MONTH_JULY_PUT 'S'
#define ENUM_DELIVERY_MONTH_AUGUST_PUT 'T'
#define ENUM_DELIVERY_MONTH_SEPTEMBER_PUT 'U'
#define ENUM_DELIVERY_MONTH_OCTOBER_PUT 'V'
#define ENUM_DELIVERY_MONTH_NOVEMBER_PUT 'W'

/*
 * Expiry Month Code Values
 */ 
#define ENUM_EXPIRY_MONTH_CODE_JANUARY_PUT 'M'
#define ENUM_EXPIRY_MONTH_CODE_FEBRUARY_PUT 'N'
#define ENUM_EXPIRY_MONTH_CODE_MARCH_PUT 'O'
#define ENUM_EXPIRY_MONTH_CODE_APRIL_PUT 'P'
#define ENUM_EXPIRY_MONTH_CODE_MAY_PUT 'Q'
#define ENUM_EXPIRY_MONTH_CODE_JUNE_PUT 'R'
#define ENUM_EXPIRY_MONTH_CODE_JULY_PUT 'S'
#define ENUM_EXPIRY_MONTH_CODE_AUGUST_PUT 'T'
#define ENUM_EXPIRY_MONTH_CODE_SEPTEMBER_PUT 'U'
#define ENUM_EXPIRY_MONTH_CODE_OCTOBER_PUT 'V'
#define ENUM_EXPIRY_MONTH_CODE_NOVEMBER_PUT 'W'

/*
 * Gap Control Values
 */ 
#define ENUM_GAP_CONTROL_WILL_RECEIVE_GAP_MESSAGES '0'
#define ENUM_GAP_CONTROL_WILL_NOT_RECEIVE_GAP_MESSAGES '1'

/*
 * Group Status Values
 */ 
#define ENUM_GROUP_STATUS_PREOPENING_PHASE 'Y'
#define ENUM_GROUP_STATUS_OPENING_PHASE 'O'
#define ENUM_GROUP_STATUS_OPENED_FOR_TRADING 'T'
#define ENUM_GROUP_STATUS_FORBIDDEN_PHASE 'F'
#define ENUM_GROUP_STATUS_TRADING_HALTED 'H'
#define ENUM_GROUP_STATUS_SURVEILLANCE_INTERVENTION_PHASE 'A'
#define ENUM_GROUP_STATUS_CLOSED 'C'
#define ENUM_GROUP_STATUS_BEGINNING_OF_DAY_INQUIRIES 'C'

/*
 * High Price Sign Values
 */ 
#define ENUM_HIGH_PRICE_SIGN_POSITIVE '+'
#define ENUM_HIGH_PRICE_SIGN_NEGATIVE '-'

/*
 * Improvement Order Side Values
 */ 
#define ENUM_IMPROVEMENT_ORDER_SIDE_BUY 'B'
#define ENUM_IMPROVEMENT_ORDER_SIDE_SELL 'S'
#define ENUM_IMPROVEMENT_ORDER_SIDE_ALL ' '

/*
 * Initial Order Price Sign Values
 */ 
#define ENUM_INITIAL_ORDER_PRICE_SIGN_POSITIVE '+'
#define ENUM_INITIAL_ORDER_PRICE_SIGN_NEGATIVE '-'

/*
 * Initial Order Side Values
 */ 
#define ENUM_INITIAL_ORDER_SIDE_BUY 'B'
#define ENUM_INITIAL_ORDER_SIDE_SELL 'S'

/*
 * Instrument Status Marker Values
 */ 
#define ENUM_INSTRUMENT_STATUS_MARKER_PREOPENING_PHASE 'Y'
#define ENUM_INSTRUMENT_STATUS_MARKER_OPENING_PHASE 'O'
#define ENUM_INSTRUMENT_STATUS_MARKER_OPENED_FOR_TRADING 'T'
#define ENUM_INSTRUMENT_STATUS_MARKER_FORBIDDEN_PHASE 'F'
#define ENUM_INSTRUMENT_STATUS_MARKER_TRADING_HALTED 'H'
#define ENUM_INSTRUMENT_STATUS_MARKER_RESERVED_PHASE 'R'
#define ENUM_INSTRUMENT_STATUS_MARKER_SUSPENDED_PHASE 'S'
#define ENUM_INSTRUMENT_STATUS_MARKER_FROZEN 'Z'
#define ENUM_INSTRUMENT_STATUS_MARKER_SURVEILLANCE_INTERVENTION_PHASE 'A'
#define ENUM_INSTRUMENT_STATUS_MARKER_CLOSED 'C'
#define ENUM_INSTRUMENT_STATUS_MARKER_BEGINNING_OF_DAY_INQUIRIES 'C'

/*
 * Leg Ratio Sign Values
 */ 
#define ENUM_LEG_RATIO_SIGN_POSITIVE '+'
#define ENUM_LEG_RATIO_SIGN_NEGATIVE '-'

/*
 * Level Of Market Depth Values
 */ 
#define ENUM_LEVEL_OF_MARKET_DEPTH_LEVEL_1 '1'
#define ENUM_LEVEL_OF_MARKET_DEPTH_LEVEL_2 '2'
#define ENUM_LEVEL_OF_MARKET_DEPTH_LEVEL_3 '3'
#define ENUM_LEVEL_OF_MARKET_DEPTH_LEVEL_4 '4'
#define ENUM_LEVEL_OF_MARKET_DEPTH_LEVEL_5 '5'
#define ENUM_LEVEL_OF_MARKET_DEPTH_LEVEL_6 '6'
#define ENUM_LEVEL_OF_MARKET_DEPTH_IMPLIED_PRICE 'A'
#define ENUM_LEVEL_OF_MARKET_DEPTH_PUBLIC_CUSTOMER_VOLUME 'P'

/*
 * Limit Entered For An Order Sign Values
 */ 
#define ENUM_LIMIT_ENTERED_FOR_AN_ORDER_SIGN_POSITIVE '+'
#define ENUM_LIMIT_ENTERED_FOR_AN_ORDER_SIGN_NEGATIVE '-'

/*
 * Low Price Sign Values
 */ 
#define ENUM_LOW_PRICE_SIGN_POSITIVE '+'
#define ENUM_LOW_PRICE_SIGN_NEGATIVE '-'

/*
 * Market Summaries Values
 */ 
#define ENUM_MARKET_SUMMARIES_YES 'Y'
#define ENUM_MARKET_SUMMARIES_NO 'N'

/*
 * Max Threshold Price Sign Values
 */ 
#define ENUM_MAX_THRESHOLD_PRICE_SIGN_POSITIVE '+'
#define ENUM_MAX_THRESHOLD_PRICE_SIGN_NEGATIVE '-'

/*
 * Min Threshold Price Sign Values
 */ 
#define ENUM_MIN_THRESHOLD_PRICE_SIGN_POSITIVE '+'
#define ENUM_MIN_THRESHOLD_PRICE_SIGN_NEGATIVE '-'

/*
 * Net Change Sign Values
 */ 
#define ENUM_NET_CHANGE_SIGN_POSITIVE '+'
#define ENUM_NET_CHANGE_SIGN_NEGATIVE '-'

/*
 * Open Price Sign Values
 */ 
#define ENUM_OPEN_PRICE_SIGN_POSITIVE '+'
#define ENUM_OPEN_PRICE_SIGN_NEGATIVE '-'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_AMERICAN 'A'
#define ENUM_OPTION_TYPE_EUROPEAN 'E'

/*
 * Order Side Values
 */ 
#define ENUM_ORDER_SIDE_BUY 'B'
#define ENUM_ORDER_SIDE_SELL 'S'

/*
 * Price Indicator Marker Values
 */ 
#define ENUM_PRICE_INDICATOR_MARKER_AS_OF_TRADE 'A'
#define ENUM_PRICE_INDICATOR_MARKER_TRADES_PERFORMED_AT_THE_END_OF_A_PIP_ALLOCATION_PHASE 'C'
#define ENUM_PRICE_INDICATOR_MARKER_LATE_TRADE 'L'
#define ENUM_PRICE_INDICATOR_MARKER_TRADES_PERFORMED_DURING_THE_OPENING 'O'
#define ENUM_PRICE_INDICATOR_MARKER_REFERENCE_PRICE 'S'
#define ENUM_PRICE_INDICATOR_MARKER_TRADES_RESULTING_FROM_THE_TRANSMISSION_OF_AN_ISO_INBOUND_ORDER 'W'
#define ENUM_PRICE_INDICATOR_MARKER_TRADES_PERFORMED_WHEN_THE_MARKET_IS_CROSSED 'X'
#define ENUM_PRICE_INDICATOR_MARKER_CONTINGENT_TRADE_PRICE_OF_THE_TRADE_WAS_NOT_CONTROLLED_AGAINST_THE_NBBO 'G'
#define ENUM_PRICE_INDICATOR_MARKER_TRADE_INVOLVING_AN_IMPLIED_ORDER_OR_LEG_TRADE_OF_A_COMPLEX_ORDER_INSTRUMENT 'I'
#define ENUM_PRICE_INDICATOR_MARKER_TRADE_DONE_ON_A_COMPLEX_ORDER_INSTRUMENT 'P'
#define ENUM_PRICE_INDICATOR_MARKER_ACTUAL_TRANSACTION_TOOK_PLACE ' '

/*
 * Tick Values
 */ 
#define ENUM_TICK_UPTICK '+'
#define ENUM_TICK_DOWNTICK '-'

/*
 * Type Of Clearing Account Values
 */ 
#define ENUM_TYPE_OF_CLEARING_ACCOUNT_PUBLIC_CUSTOMER '6'
#define ENUM_TYPE_OF_CLEARING_ACCOUNT_BROKER_DEALER '7'
#define ENUM_TYPE_OF_CLEARING_ACCOUNT_MARKET_MAKER '8'
#define ENUM_TYPE_OF_CLEARING_ACCOUNT_PROFESSIONAL_CUSTOMER 'T'
#define ENUM_TYPE_OF_CLEARING_ACCOUNT_BROKER_DEALER_CLEARED_AS_CUSTOMER 'W'
#define ENUM_TYPE_OF_CLEARING_ACCOUNT_AWAY_MARKET_MAKER 'X'

/*
 * Type Of Instrument Values
 */ 
#define ENUM_TYPE_OF_INSTRUMENT_OPTIONS 'O'
#define ENUM_TYPE_OF_INSTRUMENT_LONG_TERM 'L'

/*
 * Type Of Market Data Values
 */ 
#define ENUM_TYPE_OF_MARKET_DATA_MARKET_DEPTH_MESSAGES_ON_THE_TOP_5_BIDSASKS_FOR_THE_TYPE_OF_TRADING_INSTRUMENTS_CHOSEN 'Y'
#define ENUM_TYPE_OF_MARKET_DATA_BEST 'N'
#define ENUM_TYPE_OF_MARKET_DATA_TRADE 'T'
#define ENUM_TYPE_OF_MARKET_DATA_PRICE_IMPROVEMENT_AND_EXPOSED_ORDER_MESSAGES 'P'
#define ENUM_TYPE_OF_MARKET_DATA_MARKET_DEPTH_MESSAGES_ON_THE_TOP_5_AND_THE_CALCULATED_IMPLIED_BEST_LIMIT 'I'
#define ENUM_TYPE_OF_MARKET_DATA_QUOTE_MESSAGE_ON_THE_FIRST_LEVEL_AND_THE_CALCULATED_IMPLIED_BEST_LIMIT 'G'

/*
 * Type Of Options Values
 */ 
#define ENUM_TYPE_OF_OPTIONS_REGULAR ' '

/*
 * Type Of Order Values
 */ 
#define ENUM_TYPE_OF_ORDER_INITIAL_ORDER 'A'
#define ENUM_TYPE_OF_ORDER_EXPOSED_ORDER 'P'

/*
 * Type Of Underlying Values
 */ 
#define ENUM_TYPE_OF_UNDERLYING_INDEX 'X'
#define ENUM_TYPE_OF_UNDERLYING_EQUITIES 'E'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Complex Order Initial And Improvement Order Message
 */ 
typedef struct {
    char ExchangeId[1];
    char ComplexOrderInstrumentSymbol[30];
    char DeletionType;
    char OrderSequenceNumber[6];
    char OrderSide;
    char ImprovementPhaseSequentialNumber[6];
    char AuctionType;
} ComplexOrderInitialAndImprovementOrderMessageT;

/*
 * Structure: Instrument Description
 */ 
typedef struct {
    char RootSymbol[6];
    char ExpiryMonthCode;
    char Filler1[1];
    char StrikePrice[7];
    char StrikePriceFractionIndicator[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
} InstrumentDescriptionT;

/*
 * Structure: Initial And Improvement Order Message
 */ 
typedef struct {
    char ExchangeId[1];
    InstrumentDescriptionT InstrumentDescription;
    char DeletionType;
    char OrderSequenceNumber[6];
    char ImprovementOrderSide;
    char ImprovementPhaseSequentialNumber[6];
    char AuctionType;
} InitialAndImprovementOrderMessageT;

/*
 * Structure: Complex Order Market Sheet Initial And Improvement Order Message
 */ 
typedef struct {
    char ExchangeId[1];
    char ComplexOrderInstrumentSymbol[30];
    char OrderSide;
    char TypeOfOrder;
    char LimitEnteredForAnOrderSign;
    char Filler1[1];
    char LimitFractionIndicator[1];
    char OrderQuantity[8];
    char OrderSequenceNumber[6];
    char ImprovementPhaseSequentialNumber[6];
    char TypeOfClearingAccount;
    char Filler1[1];
    char EndOfTheExposition[8];
    char AuctionType;
    char FirmId[4];
    char Cmta[4];
} ComplexOrderMarketSheetInitialAndImprovementOrderMessageT;

/*
 * Structure: Market Sheet Initial And Improvement Order Message
 */ 
typedef struct {
    char ExchangeId[1];
    InstrumentDescriptionT InstrumentDescription;
    char OrderSide;
    char TypeOfOrder;
    char Filler1[1];
    char LimitFractionIndicator[1];
    char OrderQuantity[8];
    char OrderSequenceNumber[6];
    char ImprovementPhaseSequentialNumber[6];
    char TypeOfClearingAccount;
    char Filler1[1];
    char EndOfTheExposition[8];
    char AuctionType;
    char FirmId[4];
    char Cmta[4];
} MarketSheetInitialAndImprovementOrderMessageT;

/*
 * Structure: Complex Order Improvement Process Beginning Message Message
 */ 
typedef struct {
    char ExchangeId[1];
    char ComplexOrderInstrumentSymbol[30];
    char ImprovementPhaseSequentialNumber[6];
    char InitialOrderPriceSign;
    char InitialOrderPrice[6];
    char InitialOrderPriceFractionIndicator[1];
    char InitialOrderQuantity[8];
    char InitialOrderSide;
    char ImprovementPhaseExpiryTime[8];
    char ImprovementProcessExpiryDuration[4];
    char MinimumQuantityForImprovementOrder[8];
    char PercentageAssuredToInitialOrder[8];
    char AuctionType;
} ComplexOrderImprovementProcessBeginningMessageMessageT;

/*
 * Structure: Option Improvement Process Beginning Message
 */ 
typedef struct {
    char ExchangeId[1];
    InstrumentDescriptionT InstrumentDescription;
    char ImprovementPhaseSequentialNumber[6];
    char InitialOrderPrice[6];
    char InitialOrderPriceFractionIndicator[1];
    char InitialOrderQuantity[8];
    char InitialOrderSide;
    char ImprovementPhaseExpiryTime[8];
    char ImprovementProcessExpiryDuration[4];
    char MinimumQuantityForImprovementOrder[8];
    char PercentageAssuredToInitialOrder[8];
    char AuctionType;
    char Filler1[1];
} OptionImprovementProcessBeginningMessageT;

/*
 * Structure: End Of Sales Message
 */ 
typedef struct {
    char Reserved[1];
    char Time[6];
} EndOfSalesMessageT;

/*
 * Structure: Bulletins Message
 */ 
typedef struct {
    char Filler1[1];
    char BulletinType;
    char BulletinContents[79];
    char ContinueMarker;
} BulletinsMessageT;

/*
 * Structure: Complex Order Group Status Message
 */ 
typedef struct {
    char ExchangeId[1];
    char GroupOfTheComplexOrderInstrument[2];
    char GroupStatus;
} ComplexOrderGroupStatusMessageT;

/*
 * Structure: Group Status Message
 */ 
typedef struct {
    char ExchangeId[1];
    char RootSymbol[6];
    char GroupStatus;
} GroupStatusMessageT;

/*
 * Structure: Group Opening Time Message
 */ 
typedef struct {
    char ExchangeId[1];
    char RootSymbol[6];
    char GroupStatus;
    char ScheduledTime[6];
} GroupOpeningTimeMessageT;

/*
 * Structure: Beginning Of Complex Order Summary Message
 */ 
typedef struct {
    char ExchangeId[1];
} BeginningOfComplexOrderSummaryMessageT;

/*
 * Structure: Beginning Of Options Summary Message
 */ 
typedef struct {
    char ExchangeId[1];
} BeginningOfOptionsSummaryMessageT;

/*
 * Structure: Complex Order Summary Message
 */ 
typedef struct {
    char ExchangeId[1];
    char ComplexOrderInstrumentSymbol[30];
    char BidPriceSign[1];
    char BidPrice[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceSign;
    char AskPrice[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char LastPriceSign[1];
    char LastPrice[6];
    char LastPriceFractionIndicator[1];
    char OpenPriceSign;
    char OpenPrice[6];
    char OpenPriceFractionIndicator[1];
    char HighPriceSign;
    char HighPrice[6];
    char HighPriceFractionIndicator[1];
    char LowPriceSign;
    char LowPrice[6];
    char LowPriceFractionIndicator[1];
    char NetChangeSign;
    char NetChange[6];
    char NetChangeFractionIndicator[1];
    char Volume[8];
} ComplexOrderSummaryMessageT;

/*
 * Structure: Option Marker
 */ 
typedef struct {
    char TypeOfMarket[1];
    char TypeOfOptions;
} OptionMarkerT;

/*
 * Structure: Option Summary Message
 */ 
typedef struct {
    char ExchangeId[1];
    InstrumentDescriptionT InstrumentDescription;
    char BidPrice[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPrice[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char LastPrice[6];
    char LastPriceFractionIndicator[1];
    char OpenInterest[7];
    char Tick;
    char Volume[8];
    char NetChangeSign;
    char NetChange[6];
    char NetChangeFractionIndicator[1];
    char OpenPrice[6];
    char OpenPriceFractionIndicator[1];
    char HighPrice[6];
    char HighPriceFractionIndicator[1];
    char LowPrice[6];
    char LowPriceFractionIndicator[1];
    OptionMarkerT OptionMarker;
    char UnderlyingSymbol[10];
    char ReferencePrice[6];
    char ReferencePriceFractionIndicator[1];
} OptionSummaryMessageT;

/*
 * Structure: Instrument Leg
 */ 
typedef struct {
    char LegRatioSign;
    char LegRatio[8];
    char LegSymbol[30];
} InstrumentLegT;

/*
 * Structure: Complex Order Instrument Keys Message
 */ 
typedef struct {
    char ExchangeId[1];
    char ComplexOrderInstrumentSymbol[30];
    char ExpiryYear[2];
    char DeliveryMonth;
    char ExpiryDay[2];
    char MaxNumberOfContractsPerOrder[6];
    char MinNumberOfContractsPerOrder[6];
    char MaxThresholdPriceSign;
    char MaxThresholdPrice[6];
    char MaxThresholdPriceFractionIndicator[1];
    char MinThresholdPriceSign;
    char MinThresholdPrice[6];
    char MinThresholdPriceFractionIndicator[1];
    char TickIncrement[6];
    char TickIncrementFractionIndicator[1];
    char FillerX2[2];
    char Group[2];
    char Instrument[4];
    char InstrumentExternalCode[30];
    char ComplexOrderInstrumentAllowImplied;
    char NumberOfLegs[2];
} ComplexOrderInstrumentKeysMessageT;

/*
 * Structure: Market Flow Indicator
 */ 
typedef struct {
    char TypeOfInstrument;
    char TypeOfUnderlying;
} MarketFlowIndicatorT;

/*
 * Structure: Option Instrument Keys Message
 */ 
typedef struct {
    char ExchangeId[1];
    InstrumentDescriptionT InstrumentDescription;
    char StrikePriceCurrency[3];
    char MaximumNumberOfContractsPerOrder[6];
    char MinimumNumberOfContractsPerOrder[6];
    char MaximumThresholdPrice[6];
    char MaximumThresholdPriceFractionIndicator[1];
    char MinimumThresholdPrice[6];
    char MinimumThresholdPriceFractionIndicator[1];
    char TickIncrement[6];
    char TickIncrementFractionIndicator[1];
    char OptionType;
    MarketFlowIndicatorT MarketFlowIndicator;
    char GroupInstrument[2];
    char Instrument[4];
    char InstrumentExternalCode[30];
    OptionMarkerT OptionMarker;
    char UnderlyingSymbolRoot[10];
} OptionInstrumentKeysMessageT;

/*
 * Structure: Complex Order Trade Cancellation Message
 */ 
typedef struct {
    char ExchangeId[1];
    char ComplexOrderInstrumentSymbol[30];
    char Volume[8];
    char TradePriceSign[1];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char Filler6[6];
    char Timestamp[6];
    char PriceIndicatorMarker;
} ComplexOrderTradeCancellationMessageT;

/*
 * Structure: Option Trade Cancellation Message
 */ 
typedef struct {
    char ExchangeId[1];
    InstrumentDescriptionT InstrumentDescription;
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char Filler6[6];
    char Timestamp[6];
    char OpenInterest[7];
    char Filler1[1];
    char PriceIndicatorMarker;
} OptionTradeCancellationMessageT;

/*
 * Structure: Complex Market Depth Level
 */ 
typedef struct {
    char LevelOfMarketDepth;
    char BidPriceSign[1];
    char BidPrice[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char NumberOfBidOrders[2];
    char AskPriceSign;
    char AskPrice[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char NumberOfAskOrders[2];
} ComplexMarketDepthLevelT;

/*
 * Structure: Complex Order Market Depth Message
 */ 
typedef struct {
    char ExchangeId[1];
    char ComplexOrderInstrumentSymbol[30];
    char InstrumentStatusMarker;
    char NumberOfLevels[1];
} ComplexOrderMarketDepthMessageT;

/*
 * Structure: Market Depth Level
 */ 
typedef struct {
    char LevelOfMarketDepth;
    char BidPrice[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char NumberOfBidOrders[2];
    char AskPrice[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char NumberOfAskOrders[2];
} MarketDepthLevelT;

/*
 * Structure: Option Market Depth Message
 */ 
typedef struct {
    char ExchangeId[1];
    InstrumentDescriptionT InstrumentDescription;
    char InstrumentStatusMarker;
    char NumberOfLevels[1];
} OptionMarketDepthMessageT;

/*
 * Structure: Complex Order Quote Message
 */ 
typedef struct {
    char ExchangeId[1];
    char ComplexOrderInstrumentSymbol[30];
    char BidPriceSign[1];
    char BidPrice[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceSign;
    char AskPrice[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char InstrumentStatusMarker;
    char PublicCustomerBidSize[5];
    char PublicCustomerAskSize[5];
} ComplexOrderQuoteMessageT;

/*
 * Structure: Option Quote Message
 */ 
typedef struct {
    char ExchangeId[1];
    InstrumentDescriptionT InstrumentDescription;
    char BidPrice[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPrice[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char Filler1[1];
    char InstrumentStatusMarker;
    char PublicCustomerBidSize[5];
    char PublicCustomerAskSize[5];
} OptionQuoteMessageT;

/*
 * Structure: Option Request For Quote Message
 */ 
typedef struct {
    char ExchangeId[1];
    InstrumentDescriptionT InstrumentDescription;
    char RequestedSize[8];
} OptionRequestForQuoteMessageT;

/*
 * Structure: Complex Order Instrument Trade Message
 */ 
typedef struct {
    char ExchangeId[1];
    char ComplexOrderInstrumentSymbol[30];
    char Volume[8];
    char TradePriceSign[1];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char NetChangeSign;
    char NetChange[6];
    char NetChangeFractionIndicator[1];
    char Filler6[6];
    char Timestamp[6];
    char PriceIndicatorMarker;
} ComplexOrderInstrumentTradeMessageT;

/*
 * Structure: Option Trade Message
 */ 
typedef struct {
    char ExchangeId[1];
    InstrumentDescriptionT InstrumentDescription;
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char NetChangeSign;
    char NetChange[6];
    char NetChangeFractionIndicator[1];
    char Filler6[6];
    char Timestamp[6];
    char OpenInterest[7];
    char Filler1[1];
    char PriceIndicatorMarker;
} OptionTradeMessageT;

/*
 * Structure: System Timestamp Message
 */ 
typedef struct {
    char TradingEngineTimestamp[9];
} SystemTimestampMessageT;

/*
 * Structure: Gap Sequence Message
 */ 
typedef struct {
    char SequenceNumbersSkipped[9];
} GapSequenceMessageT;

/*
 * Structure: Circuit Assurance Message
 */ 
typedef struct {
    char Time[6];
} CircuitAssuranceMessageT;

/*
 * Structure: End Of Transmission Message
 */ 
typedef struct {
    char ExchangeId[1];
    char Time[6];
} EndOfTransmissionMessageT;

/*
 * Structure: Connection Message
 */ 
typedef struct {
    char ResetSequence[10];
    char SystemDefault[1];
    char SystemValue[1];
    char TypeOfMarketData;
    char ComplexOrder[1];
    char MarketSummaries;
    char GapControl;
    char HsvfProtocol[2];
    char NumberOfOptionClassesRequested[3];
    char OptionClassesRequested[0];
} ConnectionMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    char SequenceNumber[9];
    char MessageType[2];
} MessageHeaderT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Boston Options Exchange
   Version: 4.5.1
   Date: Monday, March 15, 2021
   Specification: HSVF-BX-001E-BOX-SOLA-HSVF-Unicast-Specifications-Guide-v4.51.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
