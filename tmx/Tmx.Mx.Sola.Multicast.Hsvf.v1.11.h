/*******************************************************************************
 * C Structs For Tmx Mx Sola Hsvf Multicast 1.11 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Bulletin Type Values
 */ 
#define ENUM_BULLETIN_TYPE_REGULAR_TEXT_BULLETIN '1'
#define ENUM_BULLETIN_TYPE_SPECIAL_TEXT_BULLETIN '2'

/*
 * Call Put Code Values
 */ 
#define ENUM_CALL_PUT_CODE_CALL 'C'
#define ENUM_CALL_PUT_CODE_PUT 'P'

/*
 * Day Count Convention Values
 */ 
#define ENUM_DAY_COUNT_CONVENTION_ACT_365 'A'
#define ENUM_DAY_COUNT_CONVENTION_ACT_360 'B'
#define ENUM_DAY_COUNT_CONVENTION_30360 'C'
#define ENUM_DAY_COUNT_CONVENTION_START_OF_DAY 'S'
#define ENUM_DAY_COUNT_CONVENTION_END_OF_DAY 'E'
#define ENUM_DAY_COUNT_CONVENTION_INSTRUMENT_NEW_OR_UPDATE 'U'
#define ENUM_DAY_COUNT_CONVENTION_TRADE_CANCELLATION 'C'

/*
 * Delivery Type Values
 */ 
#define ENUM_DELIVERY_TYPE_CASH 'C'
#define ENUM_DELIVERY_TYPE_PHYSICAL 'P'

/*
 * Leg Ratio Sign Values
 */ 
#define ENUM_LEG_RATIO_SIGN_BUY_OF_THE_UNDERLYING '+'
#define ENUM_LEG_RATIO_SIGN_SELL_OF_THE_UNDERLYING '-'

/*
 * Option Type Values
 */ 
#define ENUM_OPTION_TYPE_AMERICAN 'A'
#define ENUM_OPTION_TYPE_EUROPEAN 'E'

/*
 * Requested Market Side Values
 */ 
#define ENUM_REQUESTED_MARKET_SIDE_BUY 'B'
#define ENUM_REQUESTED_MARKET_SIDE_SELL 'S'
#define ENUM_REQUESTED_MARKET_SIDE_BOTH '2'

/*
 * Strategy Allow Implied Values
 */ 
#define ENUM_STRATEGY_ALLOW_IMPLIED_YES 'Y'
#define ENUM_STRATEGY_ALLOW_IMPLIED_NO 'N'

/*
 * Tick Values
 */ 
#define ENUM_TICK_UPTICK '+'
#define ENUM_TICK_DOWNTICK '-'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

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
    char ExchangeIdA1[1];
    char Time[6];
} EndOfTransmissionMessageT;

/*
 * Structure: Tick Entry Group
 */ 
typedef struct {
    char MinPrice[6];
    char MinPriceFractionIndicator[1];
    char TickPrice[6];
    char TickPriceFractionIndicator[1];
} TickEntryGroupT;

/*
 * Structure: Tick Table Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char TickTableName[50];
    char TickTableShortName[2];
    char NumberOfEntries[2];
} TickTableMessageT;

/*
 * Structure: End Of Sales Message
 */ 
typedef struct {
    char Reserved[1];
    char Time[6];
} EndOfSalesMessageT;

/*
 * Structure: Special Text Bulletin
 */ 
typedef struct {
    char Symbol[30];
    char BulletinContentsX49[49];
    char ContinueMarker[1];
} SpecialTextBulletinT;

/*
 * Structure: Regular Text Bulletin
 */ 
typedef struct {
    char RegularBulletinContents[79];
    char ContinueMarker[1];
} RegularTextBulletinT;

/*
 * Structure: Bulletins Message
 */ 
typedef struct {
    char Reserved[1];
    char BulletinType;
} BulletinsMessageT;

/*
 * Structure: Strategies Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char GroupInstrument[2];
    char GroupStatus[1];
} StrategiesMessageT;

/*
 * Structure: Group Status Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char GroupStatus[1];
} GroupStatusMessageT;

/*
 * Structure: Swap Future Trade Correction Message
 */ 
typedef struct {
    char ExchangeID[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Tenor[2];
    char FixedRate[5];
    char FixedRateFractionIndicator[1];
    char TradeVolume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char Timestamp[9];
    char PriceIndicatorMarkerX1[1];
    char TradeNumber[8];
} SwapFutureTradeCorrectionMessageT;

/*
 * Structure: Strategy Trade Correction Message
 */ 
typedef struct {
    char ExchangeID[1];
    char Symbol[30];
    char Volume[8];
    char TradePriceSign[1];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char FillerN6[6];
    char Timestamp[9];
    char PriceIndicatorMarkerX1[1];
    char TradeNumber[8];
} StrategyTradeCorrectionMessageT;

/*
 * Structure: Futures Trade Correction Message
 */ 
typedef struct {
    char ExchangeID[1];
    char RootSymbolA6[6];
    char DeliveryMonth[1];
    char DeliveryYearN2[2];
    char DeliveryDay[2];
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char FillerN6[6];
    char Timestamp[9];
    char PriceIndicatorMarkerX1[1];
    char TradeNumber[8];
} FuturesTradeCorrectionMessageT;

/*
 * Structure: Future Options Trade Correction Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char ContractMonthCode[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char CallPutCode;
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char PriceIndicatorMarkerA1[1];
    char NetChangeSignA1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorA1[1];
    char FillerN6[6];
    char Timestamp[9];
    char OpenInterest[7];
    char FillerX2[2];
    char TradeNumber[8];
} FutureOptionsTradeCorrectionMessageT;

/*
 * Structure: Option Trade Correction Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char FillerA1[1];
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char NetChangeSignA1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char FillerN6[6];
    char Timestamp[9];
    char OpenInterest[7];
    char FillerX1[1];
    char PriceIndicatorMarkerA1[1];
    char TradeNumber[8];
} OptionTradeCorrectionMessageT;

/*
 * Structure: Swap Future Beginning Of Summary Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
} SwapFutureBeginningOfSummaryMessageT;

/*
 * Structure: Beginning Of Strategy Summary Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
} BeginningOfStrategySummaryMessageT;

/*
 * Structure: Beginning Of Futures Summary Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
} BeginningOfFuturesSummaryMessageT;

/*
 * Structure: Beginning Of Future Options Summary Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
} BeginningOfFutureOptionsSummaryMessageT;

/*
 * Structure: Beginning Of Options Summary Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
} BeginningOfOptionsSummaryMessageT;

/*
 * Structure: Swap Future Summary Message
 */ 
typedef struct {
    char ExchangeIdX1[1];
    char RootSymbolA6[6];
    char ExpiryMonth[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Tenor[2];
    char FixedRate[5];
    char FixedRateFractionIndicator[1];
    char BidPriceN6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceN6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char LastPrice[6];
    char LastPriceFractionIndicator[1];
    char OpenPrice[6];
    char OpenPriceFractionIndicator[1];
    char HighPrice[6];
    char HighPriceFractionIndicator[1];
    char LowPrice[6];
    char LowPriceFractionIndicator[1];
    char SettlementPrice[6];
    char SettlementPriceFractionIndicatorX1[1];
    char NetPresentValueA[11];
    char NetPresentValueFractionIndicator[1];
    char HistoricalCouponB[11];
    char HistoricalCouponFractionIndicator[1];
    char PriceAlignmentInterestC[11];
    char PriceAlignmentInterestFractionIndicator[1];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char Volume[8];
    char PreviousSettlementPrice[6];
    char PreviousSettlementPriceFractionIndicator[1];
    char PreviousResetRate[6];
    char PreviousResetRateFractionIndicator[1];
    char OpenInterest[7];
    char Reason[1];
} SwapFutureSummaryMessageT;

/*
 * Structure: Strategy Summary Strategy Leg
 */ 
typedef struct {
    char LegRatioSign;
    char LegRatio[2];
    char LegSymbol[30];
} StrategySummaryStrategyLegT;

/*
 * Structure: Strategy Summary Message
 */ 
typedef struct {
    char ExchangeIdX1[1];
    char StrategySymbol[30];
    char BidPriceSign[1];
    char BidPriceN6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceSign[1];
    char AskPriceN6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char LastPriceSign[1];
    char LastPrice[6];
    char LastPriceFractionIndicator[1];
    char OpenPriceSign[1];
    char OpenPrice[6];
    char OpenPriceFractionIndicator[1];
    char HighPriceSign[1];
    char HighPrice[6];
    char HighPriceFractionIndicator[1];
    char LowPriceSign[1];
    char LowPrice[6];
    char LowPriceFractionIndicator[1];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char Volume[8];
    char Reason[1];
    char NumberOfLegs[2];
} StrategySummaryMessageT;

/*
 * Structure: Futures Summary Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char DeliveryMonth[1];
    char DeliveryYearN2[2];
    char DeliveryDay[2];
    char BidPriceN6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceN6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char LastPrice[6];
    char LastPriceFractionIndicator[1];
    char OpenPrice[6];
    char OpenPriceFractionIndicator[1];
    char HighPrice[6];
    char HighPriceFractionIndicator[1];
    char LowPrice[6];
    char LowPriceFractionIndicator[1];
    char SettlementPrice[6];
    char SettlementPriceFractionIndicatorX1[1];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char Volume[8];
    char PreviousSettlement[6];
    char PreviousSettlementFractionIndicator[1];
    char OpenInterest[7];
    char Reason[1];
    char ExternalPriceAtSource[6];
    char ExternalPriceFractionIndicator[1];
} FuturesSummaryMessageT;

/*
 * Structure: Future Options Summary Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char ContractMonthCode[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char CallPutCode;
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char BidPriceN6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceN6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char LastPrice[6];
    char SettlementPriceFractionIndicatorX1[1];
    char OpenInterest[7];
    char Tick;
    char Volume[8];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char OpeningPrice[6];
    char OpeningPriceFractionIndicator[1];
    char HighPrice[6];
    char HighPriceFractionIndicator[1];
    char LowPrice[6];
    char LowPriceFractionIndicator[1];
    char FillerX2[2];
    char UnderlyingSymbolRootA3[3];
    char DeliveryMonth[1];
    char DeliveryYearN1[1];
    char SettlementPrice[6];
    char SettlementPriceFractionIndicatorX1[1];
    char PreviousSettlementPrice[6];
    char PreviousSettlementPriceFractionIndicator[1];
    char Reason[1];
} FutureOptionsSummaryMessageT;

/*
 * Structure: Option Summary Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char FillerA1[1];
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char BidPriceN6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceN6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char LastPrice[6];
    char LastPriceFractionIndicator[1];
    char OpenInterest[7];
    char Tick;
    char Volume[8];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char OpenPrice[6];
    char OpenPriceFractionIndicator[1];
    char HighPrice[6];
    char HighPriceFractionIndicator[1];
    char LowPrice[6];
    char LowPriceFractionIndicator[1];
    char OptionMarker[2];
    char UnderlyingSymbolRootX10[10];
    char SettlementPrice[6];
    char SettlementPriceFractionIndicatorN1[1];
    char PreviousSettlementPrice[6];
    char PreviousSettlementPriceFractionIndicator[1];
    char Reason[1];
} OptionSummaryMessageT;

/*
 * Structure: Swap Future Instrument Keys Message
 */ 
typedef struct {
    char ExchangeID[1];
    char RootSymbolA6[6];
    char ExpiryMonth[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Tenor[2];
    char FixedRate[5];
    char FixedRateFractionIndicator[1];
    char MaximumNumberOfContractsPerOrder[6];
    char MinimumNumberOfContractsPerOrder[6];
    char MaximumThresholdPriceX6[6];
    char MaximumThresholdPriceFractionIndicator[1];
    char MinimumThresholdPriceX6[6];
    char MinimumThresholdPriceFractionIndicator[1];
    char TickIncrement[6];
    char TickIncrementFractionIndicator[1];
    char MarketFlow[2];
    char GroupInstrument[2];
    char InstrumentId[4];
    char ExternalSymbol[30];
    char ContractSize[8];
    char TickValue[6];
    char TickValueFractionIndicator[1];
    char Currency[3];
    char EffectiveDate[6];
    char InitialEffectiveDate[6];
    char CashFlowAlignmentDate[6];
    char PaymentFrequency[2];
    char ResetFrequency[2];
    char NotionalPrincipalAmount[8];
    char NotionalPrincipalAmountFactionIndicator[1];
    char DayCountConvention;
    char FirstPaymentDate[6];
    char NextPaymentDate[6];
    char FirstResetDate[6];
    char NextResetDate[6];
    char PreviousResetDate[6];
    char DeliveryType;
} SwapFutureInstrumentKeysMessageT;

/*
 * Structure: Strategy Instrument Keys Message
 */ 
typedef struct {
    char ExchangeID[1];
    char StrategySymbol[30];
    char ExpiryYear[2];
    char DeliveryMonth[1];
    char ExpiryDay[2];
    char MaximumNumberOfContractsPerOrder[6];
    char MinimumNumberOfContractsPerOrder[6];
    char MaximumThresholdPriceX6[6];
    char MaximumThresholdPriceFractionIndicator[1];
    char MinimumThresholdPriceX6[6];
    char MinimumThresholdPriceFractionIndicator[1];
    char TickIncrement[6];
    char TickIncrementFractionIndicator[1];
    char MarketFlowIndicator[2];
    char GroupInstrument[2];
    char Instrument[4];
    char InstrumentExternalCode[30];
    char StrategyAllowImplied;
} StrategyInstrumentKeysMessageT;

/*
 * Structure: Futures Instrument Keys Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char DeliveryMonth[1];
    char DeliveryYearN2[2];
    char ExpiryDay[2];
    char MaximumNumberOfContractsPerOrder[6];
    char MinimumNumberOfContractsPerOrder[6];
    char MaximumThresholdPriceN6[6];
    char MaximumThresholdPriceFractionIndicator[1];
    char MinimumThresholdPriceN6[6];
    char MinimumThresholdPriceFractionIndicator[1];
    char TickIncrement[6];
    char TickIncrementFractionIndicator[1];
    char MarketFlowIndicator[2];
    char GroupInstrument[2];
    char Instrument[4];
    char InstrumentExternalCode[30];
    char ContractSize[8];
    char TickValue[6];
    char TickValueFractionIndicator[1];
    char Currency[3];
    char UnderlyingSymbol[10];
    char DeliveryType;
    char RootSymbolA6[6];
    char DeliveryMonth[1];
    char DeliveryYearN2[2];
    char ExpiryDay[2];
} FuturesInstrumentKeysMessageT;

/*
 * Structure: Underlying Instrument Keys Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char GroupInstrument[2];
    char Instrument[4];
    char InstrumentExternalCode[30];
} UnderlyingInstrumentKeysMessageT;

/*
 * Structure: Future Options Instrument Keys Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char ContractMonthCode[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char CallPutCode;
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char StrikePriceCurrency[3];
    char MaximumNumberOfContractsPerOrder[6];
    char MinimumNumberOfContractsPerOrder[6];
    char MaximumThresholdPriceX6[6];
    char MaximumThresholdPriceFractionIndicator[1];
    char MinimumThresholdPriceX6[6];
    char MinimumThresholdPriceFractionIndicator[1];
    char TickIncrement[6];
    char TickIncrementFractionIndicator[1];
    char MarketFlowIndicator[2];
    char GroupInstrument[2];
    char Instrument[4];
    char InstrumentExternalCode[30];
    char ContractSize[8];
    char TickValue[6];
    char TickValueFractionIndicator[1];
    char Currency[3];
    char DeliveryType;
} FutureOptionsInstrumentKeysMessageT;

/*
 * Structure: Option Instrument Keys Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char FillerA1[1];
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char StrikePriceCurrency[3];
    char MaximumNumberOfContractsPerOrder[6];
    char MinimumNumberOfContractsPerOrder[6];
    char MaximumThresholdPriceX6[6];
    char MaximumThresholdPriceFractionIndicator[1];
    char MinimumThresholdPriceX6[6];
    char MinimumThresholdPriceFractionIndicator[1];
    char TickIncrement[6];
    char TickIncrementFractionIndicator[1];
    char OptionType;
    char MarketFlowIndicator[2];
    char GroupInstrument[2];
    char Instrument[4];
    char InstrumentExternalCode[30];
    char OptionMarker[2];
    char UnderlyingSymbolRootX10[10];
    char ContractSize[8];
    char TickValue[6];
    char TickValueFractionIndicator[1];
    char Currency[3];
    char DeliveryType;
} OptionInstrumentKeysMessageT;

/*
 * Structure: Swap Future Trade Cancellation Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Tenor[2];
    char FixedRate[5];
    char FixedRateFractionIndicator[1];
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char Timestamp[9];
    char MarketPriceIndicator[1];
    char TradeNumber[8];
} SwapFutureTradeCancellationMessageT;

/*
 * Structure: Strategy Trade Cancellation Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char Symbol[30];
    char Volume[8];
    char TradePriceSign[1];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char FillerN6[6];
    char Timestamp[9];
    char FillerX1[1];
    char TradeNumber[8];
} StrategyTradeCancellationMessageT;

/*
 * Structure: Futures Trade Cancellation Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char DeliveryMonth[1];
    char DeliveryYearN2[2];
    char DeliveryDay[2];
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char FillerN6[6];
    char Timestamp[9];
    char PriceIndicatorMarkerX1[1];
    char TradeNumber[8];
} FuturesTradeCancellationMessageT;

/*
 * Structure: Future Options Trade Cancellation Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char ContractMonthCode[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char CallPutCode;
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char Volume[8];
    char Price[6];
    char PriceFractionIndicator[1];
    char PriceIndicatorMarkerA1[1];
    char FillerX6[6];
    char Timestamp[9];
    char OpenInterest[7];
    char FillerX2[2];
    char TradeNumber[8];
} FutureOptionsTradeCancellationMessageT;

/*
 * Structure: Option Trade Cancellation Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char FillerA1[1];
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char FillerN6[6];
    char Timestamp[9];
    char OpenInterest[7];
    char FillerX1[1];
    char PriceIndicatorMarkerA1[1];
    char TradeNumber[8];
} OptionTradeCancellationMessageT;

/*
 * Structure: Swap Future Market Depth Trading Instrument
 */ 
typedef struct {
    char Level[1];
    char BidPriceX6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char NumberOfBidOrders[2];
    char AskPriceX6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char NumberOfAskOrders[2];
} SwapFutureMarketDepthTradingInstrumentT;

/*
 * Structure: Swap Future Market Depth Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Tenor[2];
    char FixedRate[5];
    char FixedRateFractionIndicator[1];
    char InstrumentStatusMarkerA1[1];
    char NumberOfLevel[1];
} SwapFutureMarketDepthMessageT;

/*
 * Structure: Strategy Market Depth Trading Instrument
 */ 
typedef struct {
    char LevelOfMarketDepth[1];
    char BidPriceSign[1];
    char BidPriceX6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char NumberOfBidOrders[2];
    char AskPriceSign[1];
    char AskPriceX6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char NumberOfAskOrders[2];
} StrategyMarketDepthTradingInstrumentT;

/*
 * Structure: Strategy Market Depth Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char Symbol[30];
    char InstrumentStatusMarkerA1[1];
    char NumberOfLevel[1];
} StrategyMarketDepthMessageT;

/*
 * Structure: Futures Market Depth Trading Instrument
 */ 
typedef struct {
    char LevelOfMarketDepth[1];
    char BidPriceX6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char NumberOfBidOrders[2];
    char AskPriceN6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char NumberOfAskOrders[2];
} FuturesMarketDepthTradingInstrumentT;

/*
 * Structure: Futures Market Depth Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char DeliveryMonth[1];
    char DeliveryYearN2[2];
    char DeliveryDay[2];
    char InstrumentStatusMarkerA1[1];
    char NumberOfLevel[1];
} FuturesMarketDepthMessageT;

/*
 * Structure: Future Options Market Depth Trading Instrument
 */ 
typedef struct {
    char LevelOfMarketDepth[1];
    char BidPriceX6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char NumberOfBidOrders[2];
    char AskPriceX6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char NumberOfAskOrders[2];
} FutureOptionsMarketDepthTradingInstrumentT;

/*
 * Structure: Future Options Market Depth Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char ContractMonthCode[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char CallPutCode;
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char InstrumentStatusMarkerA1[1];
    char NumberOfLevel[1];
} FutureOptionsMarketDepthMessageT;

/*
 * Structure: Option Market Depth Trading Instrument
 */ 
typedef struct {
    char LevelOfMarketDepth[1];
    char BidPriceX6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char NumberOfBidOrders[2];
    char AskPriceX6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char NumberOfAskOrders[2];
} OptionMarketDepthTradingInstrumentT;

/*
 * Structure: Option Market Depth Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char FillerA1[1];
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char InstrumentStatusMarkerA1[1];
    char NumberOfLevel[1];
} OptionMarketDepthMessageT;

/*
 * Structure: Swap Future Quote Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Tenor[2];
    char FixedRate[5];
    char FixedRateFractionIndicator[1];
    char BidPriceX6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceX6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char InstrumentStatusMarkerX1[1];
} SwapFutureQuoteMessageT;

/*
 * Structure: Strategy Quote Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char Symbol[30];
    char BidPriceSign[1];
    char BidPriceX6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceSign[1];
    char AskPriceX6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char InstrumentStatusMarkerX1[1];
} StrategyQuoteMessageT;

/*
 * Structure: Futures Quote Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char DeliveryMonth[1];
    char DeliveryYearN2[2];
    char DeliveryDay[2];
    char BidPriceX6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceX6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char InstrumentStatusMarkerA1[1];
} FuturesQuoteMessageT;

/*
 * Structure: Future Options Quote Message
 */ 
typedef struct {
    char ExchangeID[1];
    char RootSymbolA6[6];
    char ContractMonthCode[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char CallPutCode;
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char BidPriceX6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceX6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char InstrumentStatusMarkerA1[1];
    char FillerX1[1];
} FutureOptionsQuoteMessageT;

/*
 * Structure: Option Quote Message
 */ 
typedef struct {
    char ExchangeID[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char FillerA1[1];
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char BidPriceX6[6];
    char BidPriceFractionIndicator[1];
    char BidSize[5];
    char AskPriceX6[6];
    char AskPriceFractionIndicator[1];
    char AskSize[5];
    char FillerX1[1];
    char InstrumentStatusMarkerA1[1];
} OptionQuoteMessageT;

/*
 * Structure: Instrument Schedule Notice Swap Future Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char ExpiryMonth[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Tenor[2];
    char FixedRate[5];
    char FixedRateFractionIndicator[1];
    char SeriesStatus[1];
    char ScheduledStatusChangeTime[6];
} InstrumentScheduleNoticeSwapFutureMessageT;

/*
 * Structure: Instrument Schedule Notice Strategy Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char StrategySymbol[30];
    char SeriesStatus[1];
    char ScheduledStatusChangeTime[6];
} InstrumentScheduleNoticeStrategyMessageT;

/*
 * Structure: Instrument Schedule Notice Future Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char DeliveryMonth[1];
    char DeliveryYearN2[2];
    char DeliveryDay[2];
    char SeriesStatus[1];
    char ScheduledStatusChangeTime[6];
} InstrumentScheduleNoticeFutureMessageT;

/*
 * Structure: Instrument Schedule Notice Futures Option Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char ContractMonthCode[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char CallPutCode;
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char SeriesStatus[1];
    char ScheduledStatusChangeTime[6];
} InstrumentScheduleNoticeFuturesOptionMessageT;

/*
 * Structure: Instrument Schedule Notice Option Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char FillerA1[1];
    char StrikePriceX7[7];
    char StrikePriceFractionIndicator[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char SeriesStatus[1];
    char ScheduledStatusChangeTime[6];
} InstrumentScheduleNoticeOptionMessageT;

/*
 * Structure: Swap Future Rfq Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Tenor[2];
    char FixedRate[5];
    char FixedRateFractionIndicator[1];
    char RequestedSize[8];
    char RequestedMarketSide;
} SwapFutureRfqMessageT;

/*
 * Structure: Strategy Rfq Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char Symbol[30];
    char RequestedSize[8];
    char RequestedMarketSide;
} StrategyRfqMessageT;

/*
 * Structure: Futures Rfq Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char DeliveryMonth[1];
    char DeliveryYearN2[2];
    char DeliveryDay[2];
    char RequestedSize[8];
    char RequestedMarketSide;
} FuturesRfqMessageT;

/*
 * Structure: Future Options Rfq Message
 */ 
typedef struct {
    char ExchangeID[1];
    char RootSymbolA6[6];
    char ContractMonthCode[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char CallPutCode;
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char RequestedSize[8];
    char RequestedMarketSide;
} FutureOptionsRfqMessageT;

/*
 * Structure: Option Rfq Message
 */ 
typedef struct {
    char ExchangeID[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char FillerA1[1];
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char RequestedSize[8];
    char RequestedMarketSide;
} OptionRfqMessageT;

/*
 * Structure: Swap Future Trade Message
 */ 
typedef struct {
    char ExchangeID[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Tenor[2];
    char FixedRate[5];
    char FixedRateFractionIndicator[1];
    char TradeVolume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char Timestamp[9];
    char PriceIndicatorMarkerX1[1];
    char TradeNumber[8];
} SwapFutureTradeMessageT;

/*
 * Structure: Strategy Trade Message
 */ 
typedef struct {
    char ExchangeID[1];
    char Symbol[30];
    char Volume[8];
    char TradePriceSign[1];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char FillerN6[6];
    char Timestamp[9];
    char PriceIndicatorMarkerX1[1];
    char TradeNumber[8];
} StrategyTradeMessageT;

/*
 * Structure: Futures Trade Message
 */ 
typedef struct {
    char ExchangeID[1];
    char RootSymbolA6[6];
    char DeliveryMonth[1];
    char DeliveryYearN2[2];
    char DeliveryDay[2];
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char NetChangeSignX1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char FillerN6[6];
    char Timestamp[9];
    char PriceIndicatorMarkerX1[1];
    char TradeNumber[8];
} FuturesTradeMessageT;

/*
 * Structure: Future Options Trade Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolA6[6];
    char ContractMonthCode[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char CallPutCode;
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char PriceIndicatorMarkerA1[1];
    char NetChangeSignA1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorA1[1];
    char FillerN6[6];
    char Timestamp[9];
    char OpenInterest[7];
    char FillerX2[2];
    char TradeNumber[8];
} FutureOptionsTradeMessageT;

/*
 * Structure: Option Trade Message
 */ 
typedef struct {
    char ExchangeIdA1[1];
    char RootSymbolX6[6];
    char ExpiryMonth[1];
    char FillerA1[1];
    char StrikePriceN7[7];
    char StrikePriceFractionIndicator[1];
    char ExpiryYear[2];
    char ExpiryDay[2];
    char Volume[8];
    char TradePrice[6];
    char TradePriceFractionIndicator[1];
    char NetChangeSignA1[1];
    char NetChange[6];
    char NetChangeFractionIndicatorX1[1];
    char FillerN6[6];
    char Timestamp[9];
    char OpenInterest[7];
    char FillerX1[1];
    char PriceIndicatorMarkerA1[1];
    char TradeNumber[8];
} OptionTradeMessageT;

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
   Organization: Tmx Group
   Version: 1.11
   Date: Wednesday, January 23, 2019
   Specification: hsvf-mx-005e-mx-sola-hsvf-multicast-specifications-guide-v1-11d5.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
