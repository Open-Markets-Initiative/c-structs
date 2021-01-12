/*******************************************************************************
 * C Structs For Euronext Optiq Sbe MarketDataGateway 4.3.0 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_START_OF_DAY_MESSAGE = 1101
#define ENUM_TEMPLATE_ID_END_OF_DAY_MESSAGE = 1102
#define ENUM_TEMPLATE_ID_HEALTH_STATUS_MESSAGE = 1103
#define ENUM_TEMPLATE_ID_TECHNICAL_NOTIFICATION_MESSAGE = 1106
#define ENUM_TEMPLATE_ID_MARKET_UPDATE_MESSAGE = 1001
#define ENUM_TEMPLATE_ID_ORDER_UPDATE_MESSAGE = 1002
#define ENUM_TEMPLATE_ID_PRICE_UPDATE_MESSAGE = 1003
#define ENUM_TEMPLATE_ID_FULL_TRADE_INFORMATION_MESSAGE = 1004
#define ENUM_TEMPLATE_ID_MARKET_STATUS_CHANGE_MESSAGE = 1005
#define ENUM_TEMPLATE_ID_TIMETABLE_MESSAGE = 1006
#define ENUM_TEMPLATE_ID_STANDING_DATA_MESSAGE = 1007
#define ENUM_TEMPLATE_ID_REAL_TIME_INDEX_MESSAGE = 1008
#define ENUM_TEMPLATE_ID_STATISTICS_MESSAGE = 1009
#define ENUM_TEMPLATE_ID_INDEX_SUMMARY_MESSAGE = 1011
#define ENUM_TEMPLATE_ID_STRATEGY_STANDING_DATA_MESSAGE = 1012
#define ENUM_TEMPLATE_ID_CONTRACT_STANDING_DATA_MESSAGE = 1013
#define ENUM_TEMPLATE_ID_OUTRIGHT_STANDING_DATA_MESSAGE = 1014
#define ENUM_TEMPLATE_ID_LONG_ORDER_UPDATE_MESSAGE = 1015
#define ENUM_TEMPLATE_ID_LIS_PACKAGE_STRUCTURE_MESSAGE = 1016
#define ENUM_TEMPLATE_ID_APA_QUOTES_MESSAGE = 1026
#define ENUM_TEMPLATE_ID_APA_STANDING_DATA_MESSAGE = 1027
#define ENUM_TEMPLATE_ID_APA_FULL_TRADE_INFORMATION_MESSAGE = 1028
#define ENUM_TEMPLATE_ID_BF_INSTRUMENT_REFERENCE_MESSAGE = 1201
#define ENUM_TEMPLATE_ID_BF_TRADE_MESSAGE = 1202
#define ENUM_TEMPLATE_ID_BFNA_V_MESSAGE = 1203
#define ENUM_TEMPLATE_ID_BF_INSTRUMENT_SUSPENSION_MESSAGE = 1204
#define ENUM_TEMPLATE_ID_START_OF_SNAPSHOT_MESSAGE = 2101
#define ENUM_TEMPLATE_ID_END_OF_SNAPSHOT_MESSAGE = 2102


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: End Of Snapshot Message
 */ 
typedef struct {
    uint64_t LastMdSeqNum;
    uint64_t SnapshotTime;
} EndOfSnapshotMessageT;

/*
 * Structure: Start Of Snapshot Message
 */ 
typedef struct {
    uint64_t LastMdSeqNum;
    uint64_t SnapshotTime;
} StartOfSnapshotMessageT;

/*
 * Structure: Bf Instrument Suspension Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint32_t SymbolIndex;
    uint64_t EventTime;
    char SecurityCondition[1];
} BfInstrumentSuspensionMessageT;

/*
 * Structure: Bfna V Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint32_t SymbolIndex;
    uint64_t BidOfferDateTime;
    char MiFidTransactionId[52];
    char MmtModificationIndicator[4];
    int64_t NavPrice;
    uint64_t EventTime;
    int64_t NavBidPrice;
    int64_t NavOfferPrice;
} BfnaVMessageT;

/*
 * Structure: Bf Trade Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint32_t SymbolIndex;
    char MiFidTransactionId[52];
    uint64_t EventTime;
    uint64_t BidOfferDateTime;
    char MmtModificationIndicator[4];
    int64_t Price;
    int64_t BidPrice;
    int64_t OfferPrice;
    uint64_t Quantity;
    char MmtAgencyCrossTradeIndicator[4];
    char MmtBenchmarkIndicator[4];
    char MmtSpecialDividendIndicator[4];
    char MmtTradingMode[1];
    char MifidPriceNotation[4];
    char QuantityNotation[3];
    int64_t NotionalAmountTraded;
    char TradingCurrency[3];
} BfTradeMessageT;

/*
 * Structure: Bf Instrument Reference Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint32_t SymbolIndex;
    uint8_t OptiqSegment;
    char IsinCode[12];
    char SedolCode[7];
    char LongIssuerName[250];
    char LongInstrumentName[250];
    char Currency[3];
    uint16_t DateOfInitialListing;
    int64_t ShareAmountInIssue;
    char OpenedClosedFund[1];
    int64_t LastNavPrice;
    char GrossOfCdscIndicator[1];
    int64_t Coupon;
    char MaturityDate[8];
    int64_t ClosingPrice;
    char Mic[4];
    int64_t GrossDividendPayablePerUnit;
    char DividendCurrency[3];
    uint16_t DividendRecordDate;
    uint64_t DividendRate;
    uint16_t ExDividendDate;
    uint16_t DividendPaymentDate;
    char TaxDescriptionAttachingToADividend[1];
    char NextMeeting[8];
    int64_t GrossDividendInEuros;
    uint16_t IssueDate;
    char IssuingCountry[3];
    char Cfi[6];
    uint8_t PaymentFrequency;
    int64_t MinimumAmount;
    uint8_t InstrumentCategory;
    char SecurityCondition[1];
    char MifidPriceNotation[4];
    uint8_t PriceIndexLevelDecimals;
    uint8_t QuantityDecimals;
    uint8_t AmountDecimals;
    uint8_t RatioMultiplierDecimals;
} BfInstrumentReferenceMessageT;

/*
 * Structure: Apa Full Trade Information Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint64_t EventTime;
    char TradingDateTime[27];
    char PublicationDateTime[27];
    uint8_t TradeType;
    char MifidInstrumentIdType[4];
    char MifidInstrumentId[12];
    char MiFidTransactionId[52];
    char MifidPrice[20];
    char MifidQuantity[20];
    char MifidPriceNotation[4];
    char MifidCurrency[3];
    char MiFidQtyinMsrmtUnitNotation[25];
    char MifidQuantityMeasurementUnit[20];
    char MiFidNotionalAmount[20];
    char NotionalCurrency[3];
    char MiFidClearingFlag[5];
    uint8_t EfficientMmtMarketMechanism;
    char EfficientMmtTradingMode[1];
    char EfficientMmtTransactionCategory[1];
    char EfficientMmtNegotiationIndicator[1];
    char EfficientMmtAgencyCrossTradeIndicator[1];
    char EfficientMmtModificationIndicator[1];
    char EfficientMmtBenchmarkIndicator[1];
    char EfficientMmtSpecialDividendIndicator[1];
    char EfficientMmtOffBookAutomatedIndicator[1];
    char EfficientMmtContributiontoPrice[1];
    char EfficientMmtAlgorithmicIndicator[1];
    char EfficientMmtPublicationMode[1];
    char EfficientMmtPostTradeDeferral[1];
    char EfficientMmtDuplicativeIndicator[1];
    char TradeReference[30];
    uint64_t OriginalReportTimestamp;
    uint32_t PriceMultiplier;
    uint8_t PriceMultiplierDecimals;
    char Venue[11];
    char MiFidEmissionAllowanceType[4];
    char LongTradeReference[52];
} ApaFullTradeInformationMessageT;

/*
 * Structure: Apa Standing Data Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    char MifidInstrumentIdType[4];
    char MifidInstrumentId[12];
    char FullInstrumentName[102];
    char Cfi[6];
    char NotionalCurrency[3];
    char SecondNotionalCurrency[3];
    uint32_t PriceMultiplier;
    uint8_t PriceMultiplierDecimals;
    char UnderlyingIsinCode[12];
    char UnderlyingIndexName[25];
    char UnderlyingIndexTerm[8];
    uint8_t OptionType;
    int64_t StrikePrice;
    uint8_t StrikePriceDecimals;
    uint8_t ExerStyle;
    char MaturityDate[8];
    char ExpiryDate[8];
    char SettlementMethod[1];
} ApaStandingDataMessageT;

/*
 * Structure: Apa Quotes Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    char MifidInstrumentIdType[4];
    char MifidInstrumentId[12];
    char Mic[4];
    char Currency[3];
    char LeiCode[20];
    uint64_t EventTime;
    uint8_t QuoteUpdateType;
    char MifidPrice[20];
    char MifidQuantity[20];
} ApaQuotesMessageT;

/*
 * Structure: Lis Package Structure Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint64_t EventTime;
    uint32_t ContractSymbolIndex;
    char MifidExecutionId[52];
    char StrategyCode[1];
} LisPackageStructureMessageT;

/*
 * Structure: Long Order Update Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint64_t EventTime;
} LongOrderUpdateMessageT;

/*
 * Structure: Outright Standing Data Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint32_t SymbolIndex;
    uint32_t ContractSymbolIndex;
    uint16_t InstrumentEventDate;
    char IsinCode[12];
    char Cfi[6];
    char MaturityDate[8];
    uint64_t LotSize;
    int64_t StrikePrice;
    uint16_t LastTradingDate;
    uint16_t DaysToExpiry;
    char DerivativesInstrumentTradingCode[18];
    uint8_t DerivativesInstrumentType;
    uint8_t ExpiryCycleType;
    char UnderlyingDerivativesInstrumentTradingCode[18];
    uint32_t UnderlyingSymbolIndex;
    uint64_t TradingUnit;
} OutrightStandingDataMessageT;

/*
 * Structure: Contract Standing Data Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint32_t SymbolIndex;
    uint8_t OptiqSegment;
    uint16_t PartitionId;
    uint16_t ContractEventDate;
    char ExchangeCode[1];
    uint8_t ExerStyle;
    char ContractName[60];
    char ContractType[1];
    char UnderlyingType[1];
    uint8_t PriceDecimals;
    uint8_t QuantityDecimals;
    uint8_t AmountDecimals;
    uint8_t RatioDecimals;
    char MainDepositary[5];
    char Mic[4];
    char CountryOfExchange[3];
    char ProductCode[4];
    char UnderlyingMic[4];
    char UnderlyingIsinCode[12];
    uint32_t UnderlyingExpiry;
    uint16_t OrderTypeRules;
    char SettlementMethod[1];
    char TradingCurrency[3];
    uint8_t StrikePriceDecimalsRatio;
    uint8_t MmProtections;
    uint8_t ContractTradingType;
    uint8_t InstUnitExp;
    uint8_t UnderlyingSubtype;
    char MotherStockIsin[12];
    uint64_t SettlementTickSize;
    uint64_t EdspTickSize;
    uint32_t UnderlyingSymbolIndex;
    uint8_t TradingPolicy;
    uint16_t ReferenceSpreadTableId;
    uint8_t DerivativesMarketModel;
    uint64_t TradingUnit;
    uint8_t ReferencePriceOriginInOpeningCall;
    uint8_t ReferencePriceOriginInContinuous;
    uint8_t ReferencePriceOriginInTradingInterruption;
    uint8_t CollarExpansionFactor;
    uint8_t MifidiiLiquidFlag;
    uint8_t PricingAlgorithm;
} ContractStandingDataMessageT;

/*
 * Structure: Strategy Standing Data Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint32_t SymbolIndex;
    char DerivativesInstrumentTradingCode[18];
    char ExchangeCode[1];
    char MaturityDate[8];
    char StrategyCode[1];
    uint32_t ContractSymbolIndex;
    char Cfi[6];
} StrategyStandingDataMessageT;

/*
 * Structure: Index Summary Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint64_t EventTime;
    uint32_t SymbolIndex;
    int64_t OpeningLevel;
    uint64_t OpeningTime;
    int64_t ConfirmedReferenceLevel;
    uint64_t ConfirmedReferenceTime;
    int64_t ClosingReferenceLevel;
    uint64_t ClosingReferenceTime;
    int64_t PrctVarfromPrevClose;
    int64_t HighLevel;
    uint64_t HighTime;
    int64_t LowLevel;
    uint64_t LowTime;
    int64_t LiquidationLevel;
    uint64_t LiquidationTime;
} IndexSummaryMessageT;

/*
 * Structure: Statistics Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint32_t SymbolIndex;
} StatisticsMessageT;

/*
 * Structure: Real Time Index Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint64_t EventTime;
    uint32_t SymbolIndex;
    int64_t IndexLevel;
    uint64_t PctgOfCapitalization;
    int64_t PrctVarfromPrevClose;
    uint16_t NumTradedInstruments;
    uint8_t IndexLevelType;
    uint8_t IndexPriceCode;
} RealTimeIndexMessageT;

/*
 * Structure: Standing Data Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint32_t SymbolIndex;
    uint8_t OptiqSegment;
    uint16_t PartitionId;
    char FullInstrumentName[102];
    char InstrumentName[18];
    char InstrumentTradingCode[15];
    char InstrumentGroupCode[2];
    char IsinCode[12];
    uint8_t PriceDecimals;
    uint8_t QuantityDecimals;
    uint8_t AmountDecimals;
    uint8_t RatioDecimals;
    char Cfi[6];
    uint16_t InstrumentEventDate;
    int64_t StrikePrice;
    uint8_t DarkEligibility;
    uint64_t DarkLisThreshold;
    uint32_t DarkMinQuantity;
    uint16_t DateOfLastTrade;
    char DepositaryList[20];
    char MainDepositary[5];
    uint16_t FirstSettlementDate;
    uint8_t GuaranteeIndicator;
    char Icb[16];
    char IssuingCountry[3];
    int64_t LastAdjustedClosingPrice;
    uint64_t LotSize;
    char MaturityDate[8];
    uint8_t MaximumDecimalsInQuantity;
    char Mic[4];
    char MicList[20];
    char CountryOfExchange[3];
    char Mnemonic[5];
    char UnderlyingMic[4];
    char UnderlyingIsinCode[12];
    char TradingCurrency[3];
    uint32_t CurrencyCoefficient;
    uint8_t TradingCurrencyIndicator;
    uint8_t StrikeCurrencyIndicator;
    uint64_t NumberInstrumentCirculating;
    uint64_t ParValue;
    char QuantityNotation[3];
    uint8_t InstUnitExp;
    char SettlementDelay[2];
    char StrikeCurrency[3];
    uint8_t TaxCode;
    char TypeOfCorporateEvent[2];
    char TypeOfMarketAdmission[1];
    uint8_t RepoIndicator;
    int64_t IssuePrice;
    char NominalCurrency[3];
    uint8_t IssuePriceDecimals;
    uint8_t StrikePriceDecimals;
    uint8_t LiquidInstrumentIndicator;
    char MarketOfReferenceMic[4];
    char IcbCode[8];
    uint64_t ThresholdLisPostTrade60Mn;
    uint64_t ThresholdLisPostTrade120Mn;
    uint64_t ThresholdLisPostTradeEod;
} StandingDataMessageT;

/*
 * Structure: Timetable Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint16_t PatternId;
    uint32_t SymbolIndex;
} TimetableMessageT;

/*
 * Structure: Market Status Change Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
} MarketStatusChangeMessageT;

/*
 * Structure: Full Trade Information Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint64_t EventTime;
    uint32_t SymbolIndex;
    char TradingDateTime[27];
    char PublicationDateTime[27];
    uint8_t TradeType;
    char MifidInstrumentIdType[4];
    char MifidInstrumentId[12];
    char MifidExecutionId[52];
    char MifidPrice[20];
    char MifidQuantity[20];
    char MifidPriceNotation[4];
    char MifidCurrency[3];
    char MiFidQtyinMsrmtUnitNotation[25];
    char MifidQuantityMeasurementUnit[20];
    char MiFidNotionalAmount[20];
    char NotionalCurrency[3];
    char MiFidClearingFlag[5];
    uint8_t MmtMarketMechanism;
    char MmtTradingMode[1];
    char MmtTransactionCategory[4];
    char MmtNegotiationIndicator[4];
    char MmtAgencyCrossTradeIndicator[4];
    char MmtModificationIndicator[4];
    char MmtBenchmarkIndicator[4];
    char MmtSpecialDividendIndicator[4];
    char MmtOffBookAutomatedIndicator[1];
    char MmtContributiontoPrice[4];
    char MmtAlgorithmicIndicator[4];
    char MmtPublicationMode[4];
    char MmtPostTradeDeferral[4];
    char MmtDuplicativeIndicator[4];
    uint8_t TradeQualifier;
    uint8_t TransactionType;
    uint8_t EffectiveDateIndicator;
    char BlockTradeCode[1];
    char TradeReference[30];
    uint64_t OriginalReportTimestamp;
    uint8_t TransparencyIndicator;
    uint32_t CurrencyCoefficient;
    uint32_t PriceMultiplier;
    uint8_t PriceMultiplierDecimals;
    char Venue[11];
    uint32_t StartTimeVwap;
    uint32_t EndTimeVwap;
    char MiFidEmissionAllowanceType[4];
    char MarketOfReferenceMic[4];
    int64_t EvaluatedPrice;
    uint8_t MessagePriceNotation;
    uint16_t SettlementDate;
    uint16_t RepoSettlementDate;
} FullTradeInformationMessageT;

/*
 * Structure: Price Update Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint64_t EventTime;
} PriceUpdateMessageT;

/*
 * Structure: Order Update Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint64_t EventTime;
} OrderUpdateMessageT;

/*
 * Structure: Market Update Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t RebroadcastIndicator;
    uint8_t Emm;
    uint64_t EventTime;
} MarketUpdateMessageT;

/*
 * Structure: Technical Notification Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint8_t TechnicalNotificationType;
    uint8_t RebroadcastIndicator;
    uint64_t RetransmissionStartTime;
    uint64_t RetransmissionEndTime;
    uint32_t SymbolIndex;
} TechnicalNotificationMessageT;

/*
 * Structure: Health Status Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint64_t EventTime;
} HealthStatusMessageT;

/*
 * Structure: End Of Day Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint16_t SessionTradingDay;
} EndOfDayMessageT;

/*
 * Structure: Start Of Day Message
 */ 
typedef struct {
    uint64_t MdSeqNum;
    uint16_t SessionTradingDay;
} StartOfDayMessageT;

/*
 * Structure: Payload
 */ 
typedef struct {
    StartOfDayMessageT StartOfDayMessage;
    EndOfDayMessageT EndOfDayMessage;
    HealthStatusMessageT HealthStatusMessage;
    TechnicalNotificationMessageT TechnicalNotificationMessage;
    MarketUpdateMessageT MarketUpdateMessage;
    OrderUpdateMessageT OrderUpdateMessage;
    PriceUpdateMessageT PriceUpdateMessage;
    FullTradeInformationMessageT FullTradeInformationMessage;
    MarketStatusChangeMessageT MarketStatusChangeMessage;
    TimetableMessageT TimetableMessage;
    StandingDataMessageT StandingDataMessage;
    RealTimeIndexMessageT RealTimeIndexMessage;
    StatisticsMessageT StatisticsMessage;
    IndexSummaryMessageT IndexSummaryMessage;
    StrategyStandingDataMessageT StrategyStandingDataMessage;
    ContractStandingDataMessageT ContractStandingDataMessage;
    OutrightStandingDataMessageT OutrightStandingDataMessage;
    LongOrderUpdateMessageT LongOrderUpdateMessage;
    LisPackageStructureMessageT LisPackageStructureMessage;
    ApaQuotesMessageT ApaQuotesMessage;
    ApaStandingDataMessageT ApaStandingDataMessage;
    ApaFullTradeInformationMessageT ApaFullTradeInformationMessage;
    BfInstrumentReferenceMessageT BfInstrumentReferenceMessage;
    BfTradeMessageT BfTradeMessage;
    BfnaVMessageT BfnaVMessage;
    BfInstrumentSuspensionMessageT BfInstrumentSuspensionMessage;
    StartOfSnapshotMessageT StartOfSnapshotMessage;
    EndOfSnapshotMessageT EndOfSnapshotMessage;
} PayloadT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint16_t BlockLength;
    uint16_t TemplateId;
    uint16_t SchemaId;
    uint16_t Version;
} MessageHeaderT;

/*
 * Structure: Message
 */ 
typedef struct {
    uint16_t Frame;
    MessageHeaderT MessageHeader;
} MessageT;

/*
 * Bitfield: Packet Flags
 */ 
typedef struct {
    uint16_t
    ReservedBits : 6,
    HasStatusMessage : 1,
    HasEndOfDaySnapshot : 1,
    HasStartOfDaySnapshot : 1,
    PsnHighWeight : 3,
    MdgRestartCount : 3,
    Compression : 1;
} PacketFlagsT;

/*
 * Structure: Market Data Packet Header
 */ 
typedef struct {
    uint64_t PacketTime;
    uint32_t PacketSequenceNumber;
    PacketFlagsT PacketFlags;
    uint16_t ChannelId;
} MarketDataPacketHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    MarketDataPacketHeaderT MarketDataPacketHeader;
} PacketT;

