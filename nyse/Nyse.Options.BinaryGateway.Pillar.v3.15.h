/*******************************************************************************
 * C Structs For Nyse Options Pillar BinaryGateway 3.15 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Bold Designation Values
 */ 
#define ENUM_BOLD_DESIGNATION_NOT_APPLICABLE '0'
#define ENUM_BOLD_DESIGNATION_EXPOSE_ORDER_INFO_ONLY '4'
#define ENUM_BOLD_DESIGNATION_EXPOSE_ORDER_INFO_AND_CAPACITY_ONLY '5'
#define ENUM_BOLD_DESIGNATION_EXPOSE_ORDER_INFO_AND_PARTICIPANT_ID_ONLY '6'
#define ENUM_BOLD_DESIGNATION_EXPOSE_ORDER_INFO_CAPACITY_AND_PARTICIPANT_ID '7'
#define ENUM_BOLD_DESIGNATION_NO_BOLD_DESIGNATION_DEFAULTING '8'

/*
 * Breach Action Request Values
 */ 
#define ENUM_BREACH_ACTION_REQUEST_NOT_APPLICABLE 0
#define ENUM_BREACH_ACTION_REQUEST_NOTIFICATIONS_ONLY 1
#define ENUM_BREACH_ACTION_REQUEST_CANCEL_NON_AUCTION_ORDERS_AND_BLOCK 2
#define ENUM_BREACH_ACTION_REQUEST_BLOCK_ONLY 3

/*
 * Bulk Action Values
 */ 
#define ENUM_BULK_ACTION_NOT_APPLICABLE 0
#define ENUM_BULK_ACTION_CANCEL_SINGLE_LEG_ONLY 1
#define ENUM_BULK_ACTION_CANCEL_COMPLEX_ONLY 2
#define ENUM_BULK_ACTION_CANCEL_BOTH_SINGLE_LEG_AND_COMPLEX 3
#define ENUM_BULK_ACTION_BLOCK_AND_CANCEL 4
#define ENUM_BULK_ACTION_UNBLOCK 5

/*
 * Cancel On Disconnect Values
 */ 
#define ENUM_CANCEL_ON_DISCONNECT_ENABLE_CANCEL_ON_DISCONNECT_DAY 1
#define ENUM_CANCEL_ON_DISCONNECT_ENABLE_CANCEL_ON_DISCONNECT_ALL 2

/*
 * Cancel Scope Values
 */ 
#define ENUM_CANCEL_SCOPE_ORDERS_ONLY 0
#define ENUM_CANCEL_SCOPE_OPTIONS_MM_QUOTES_ONLY 1
#define ENUM_CANCEL_SCOPE_BOTH_ORDERS_AND_OPTIONS_MM_QUOTES 2

/*
 * Ioc Attribution Values
 */ 
#define ENUM_IOC_ATTRIBUTION_NOT_APPLICABLE 0
#define ENUM_IOC_ATTRIBUTION_INCLUDE_IOC_AND_GTX_ORDERS_IN_ACTIVITYBASED_CALCULATIONS_AND_CANCELLATIONS 1
#define ENUM_IOC_ATTRIBUTION_EXCLUDE_IOC_AND_GTX_ORDERS_FROM_ACTIVITYBASED_CALCULATIONS_AND_CANCELLATIONS 2

/*
 * Leg Open Close Values
 */ 
#define ENUM_LEG_OPEN_CLOSE_OPEN 0
#define ENUM_LEG_OPEN_CLOSE_CLOSE 1
#define ENUM_LEG_OPEN_CLOSE_USE_CURRENT_SESSION_CONFIGURATION_STP_SETTING_FOR_THE_USERNAME 0
#define ENUM_LEG_OPEN_CLOSE_NO_SELF_TRADE_PREVENTION 1
#define ENUM_LEG_OPEN_CLOSE_CANCEL_NEWEST 2
#define ENUM_LEG_OPEN_CLOSE_CANCEL_OLDEST 3
#define ENUM_LEG_OPEN_CLOSE_CANCEL_BOTH 4
#define ENUM_LEG_OPEN_CLOSE_CANCEL_DECREMENT 5

/*
 * Leg Side Values
 */ 
#define ENUM_LEG_SIDE_BUY 1
#define ENUM_LEG_SIDE_SELL 2

/*
 * Locate Reqd Values
 */ 
#define ENUM_LOCATE_REQD_NO_LOCATE_REQD 0
#define ENUM_LOCATE_REQD_LOCATE_REQ_FOR_SSH_ORDERS 1

/*
 * Mpid Status Values
 */ 
#define ENUM_MPID_STATUS_ACTIVE 1
#define ENUM_MPID_STATUS_INACTIVE 2
#define ENUM_MPID_STATUS_PROSPECT 3

/*
 * Msg Type Values
 */ 
#define ENUM_MSG_TYPE_LOGIN 0x0201
#define ENUM_MSG_TYPE_LOGIN_RESPONSE 0x0202
#define ENUM_MSG_TYPE_STREAM_AVAIL 0x0203
#define ENUM_MSG_TYPE_HEARTBEAT 0x0204
#define ENUM_MSG_TYPE_OPEN 0x0205
#define ENUM_MSG_TYPE_OPEN_RESPONSE 0x0206
#define ENUM_MSG_TYPE_CLOSE 0x0207
#define ENUM_MSG_TYPE_CLOSE_RESPONSE 0x0208
#define ENUM_MSG_TYPE_SEQ_MSG 0x0905

/*
 * Open Close Values
 */ 
#define ENUM_OPEN_CLOSE_NOT_APPLICABLE 0
#define ENUM_OPEN_CLOSE_OPEN 1
#define ENUM_OPEN_CLOSE_CLOSE 2

/*
 * Order Priority Update Ack Subscription Values
 */ 
#define ENUM_ORDER_PRIORITY_UPDATE_ACK_SUBSCRIPTION_UNSOLICITED_ORDER_PRIORITY_UPDATE_ACK 1
#define ENUM_ORDER_PRIORITY_UPDATE_ACK_SUBSCRIPTION_UNSOLICITED_ORDER_PRIORITY_UPDATE_ACK_AND_UNSOLICITED_REPRICING_ACK 2

/*
 * Risk Control Activation Values
 */ 
#define ENUM_RISK_CONTROL_ACTIVATION_RISK_CONTROL_TURNED_OFF 0
#define ENUM_RISK_CONTROL_ACTIVATION_RISK_CONTROL_TURNED_ON 1

/*
 * Risk Control Type Values
 */ 
#define ENUM_RISK_CONTROL_TYPE_NOT_APPLICABLE 0
#define ENUM_RISK_CONTROL_TYPE_SINGLE_ORDER_MAX_QTY 1
#define ENUM_RISK_CONTROL_TYPE_SINGLE_ORDER_MAX_NOTIONAL_VALUE 2
#define ENUM_RISK_CONTROL_TYPE_GROSS_CREDIT 3
#define ENUM_RISK_CONTROL_TYPE_ACTIVITYBASED_ROLLING_TRANSACTION 8
#define ENUM_RISK_CONTROL_TYPE_ACTIVITYBASED_ROLLING_VOLUME 9
#define ENUM_RISK_CONTROL_TYPE_ACTIVITYBASED_ROLLING_PERCENTAGE 10
#define ENUM_RISK_CONTROL_TYPE_ACTIVITYBASED_GLOBAL_RISK_MITIGATION_PROTECTION_FOR_TRANSACTION_VOLUME_PERCENTAGE 11

/*
 * Risk User Type Values
 */ 
#define ENUM_RISK_USER_TYPE_ENTERING_FIRM 'E'
#define ENUM_RISK_USER_TYPE_CLEARING_FIRM 'C'
#define ENUM_RISK_USER_TYPE_NYSE_FLOOR_BROKER_FIRM 'F'
#define ENUM_RISK_USER_TYPE_OPTIONS_MARKET_MAKER_FIRM 'O'

/*
 * Self Trade Prevention Values
 */ 
#define ENUM_SELF_TRADE_PREVENTION_NO_SELF_TRADE_PREVENTION 1
#define ENUM_SELF_TRADE_PREVENTION_CANCEL_NEWEST 2
#define ENUM_SELF_TRADE_PREVENTION_CANCEL_OLDEST 3
#define ENUM_SELF_TRADE_PREVENTION_CANCEL_BOTH 4
#define ENUM_SELF_TRADE_PREVENTION_CANCEL_DECREMENT 5

/*
 * Self Trade Type Values
 */ 
#define ENUM_SELF_TRADE_TYPE_USE_CURRENT_SESSION_CONFIGURATION_STP_SETTING_FOR_THE_USERNAME 0
#define ENUM_SELF_TRADE_TYPE_NO_SELF_TRADE_PREVENTION 1
#define ENUM_SELF_TRADE_TYPE_CANCEL_NEWEST 2
#define ENUM_SELF_TRADE_TYPE_CANCEL_OLDEST 3
#define ENUM_SELF_TRADE_TYPE_CANCEL_BOTH 4
#define ENUM_SELF_TRADE_TYPE_CANCEL_DECREMENT 5

/*
 * Seq Msg Type Values
 */ 
#define ENUM_SEQ_MSG_TYPE_SESSION_CONFIGURATION_REQUEST_MESSAGE 0x0220
#define ENUM_SEQ_MSG_TYPE_SEQUENCED_FILLER 0x0282
#define ENUM_SEQ_MSG_TYPE_ORDER_REQUEST 0x0248
#define ENUM_SEQ_MSG_TYPE_ORDER_CANCEL_REQUEST 0x0250
#define ENUM_SEQ_MSG_TYPE_ORDER_MODIFY_REQUEST 0x0282
#define ENUM_SEQ_MSG_TYPE_NEW_BULK_QUOTE 0x0243
#define ENUM_SEQ_MSG_TYPE_NEW_ORDER_CROSS 0x0222
#define ENUM_SEQ_MSG_TYPE_BULK_CANCEL_REQUEST 0x0223
#define ENUM_SEQ_MSG_TYPE_RISK_LIMIT_UPDATE_REQUEST 0x0330
#define ENUM_SEQ_MSG_TYPE_RISK_ACTION_REQUEST 0x0331
#define ENUM_SEQ_MSG_TYPE_NEW_COMPLEX_SERIES_REQUEST 0x0357
#define ENUM_SEQ_MSG_TYPE_UNDERLYING_SYMBOL_REFERENCE_DATA 0x0233
#define ENUM_SEQ_MSG_TYPE_SEQUENCED_FILLER 0X0234
#define ENUM_SEQ_MSG_TYPE_MINIMUM_PRICE_VARIANT_CLASS_REFERENCE_DATA 0x0230
#define ENUM_SEQ_MSG_TYPE_MINIMUM_PRICE_VARIANT_LEVEL_REFERENCE_DATA 0x0231
#define ENUM_SEQ_MSG_TYPE_MPID_CONFIGURATION 0x0272
#define ENUM_SEQ_MSG_TYPE_OPTIONS_MARKET_MAKER_SYMBOL_APPOINTMENT_REFERENCE_DATA 0x0833
#define ENUM_SEQ_MSG_TYPE_SESSION_CONFIGURATION_ACKNOWLEDGEMENT 0x0221
#define ENUM_SEQ_MSG_TYPE_ORDER_ACKNOWLEDGEMENT 0x026
#define ENUM_SEQ_MSG_TYPE_BULK_QUOTE_ACKNOWLEDGMENT 0x0294
#define ENUM_SEQ_MSG_TYPE_ORDER_REQUEST_ACKNOWLEDGMENT 0x0278
#define ENUM_SEQ_MSG_TYPE_ORDER_PRIORITY_UPDATE_ACKNOWLEDGMENT 0x0268
#define ENUM_SEQ_MSG_TYPE_EXECUTION_REPORT 0x0295
#define ENUM_SEQ_MSG_TYPE_TRADE_BUST_OR_CORRECT 0x0293
#define ENUM_SEQ_MSG_TYPE_APPLICATION_LAYER_REJECT 0x0267
#define ENUM_SEQ_MSG_TYPE_RISK_CONTROL_ACKNOWLEDGEMENT 0x0332
#define ENUM_SEQ_MSG_TYPE_RISK_CONTROL_ALERT 0x0333
#define ENUM_SEQ_MSG_TYPE_COMPLEX_SERIES_REQUEST_ACKNOWLEDGEMENT 0x0358

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 1
#define ENUM_SIDE_SELL 2
#define ENUM_SIDE_SELL_SHORT 3
#define ENUM_SIDE_SELL_SHORT_EXEMPT 4
#define ENUM_SIDE_CROSS 5
#define ENUM_SIDE_CROSS_SHORT 6
#define ENUM_SIDE_CROSS_SHORT_EXEMPT 7

/*
 * Status Values
 */ 
#define ENUM_STATUS_REQUEST_PROCESSED_SUCCESSFULLY 0
#define ENUM_STATUS_NOT_LOGGED_IN 18

/*
 * Test Symbol Indicator Values
 */ 
#define ENUM_TEST_SYMBOL_INDICATOR_PRODUCTION_SYMBOL 0
#define ENUM_TEST_SYMBOL_INDICATOR_TEST_SYMBOL 1

/*
 * Throttle Preference Values
 */ 
#define ENUM_THROTTLE_PREFERENCE_QUEUE_ORDERS_WHEN_THROTTLED 0
#define ENUM_THROTTLE_PREFERENCE_REJECT_ORDERS_WHEN_THROTTLED 1

/*
 * Underlying Type Values
 */ 
#define ENUM_UNDERLYING_TYPE_ADR 'A'
#define ENUM_UNDERLYING_TYPE_COMMON_STOCK 'C'
#define ENUM_UNDERLYING_TYPE_DEBENTURES 'D'
#define ENUM_UNDERLYING_TYPE_ETF 'E'
#define ENUM_UNDERLYING_TYPE_FOREIGN 'F'
#define ENUM_UNDERLYING_TYPE_ADS 'H'
#define ENUM_UNDERLYING_TYPE_UNITS 'I'
#define ENUM_UNDERLYING_TYPE_MISC_OTHERS 'M'
#define ENUM_UNDERLYING_TYPE_INDEX_LINKED_NOTES 'L'
#define ENUM_UNDERLYING_TYPE_BONDS 'N'
#define ENUM_UNDERLYING_TYPE_ORDINARY_SHARES 'O'
#define ENUM_UNDERLYING_TYPE_PREFERRED_STOCK 'P'
#define ENUM_UNDERLYING_TYPE_RIGHTS 'R'
#define ENUM_UNDERLYING_TYPE_BENEFICIARY_INTEREST 'S'
#define ENUM_UNDERLYING_TYPE_STRUCTURED_NOTES 'T'
#define ENUM_UNDERLYING_TYPE_CLOSED_END_FUND 'U'
#define ENUM_UNDERLYING_TYPE_WARRANT 'W'
#define ENUM_UNDERLYING_TYPE_INDEX 'X'
#define ENUM_UNDERLYING_TYPE_OPTIONS 'Z'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Seq Msg Header
 */ 
typedef struct {
    uint16_t SeqMsgType;
    uint16_t SeqMsgLength;
} SeqMsgHeaderT;

/*
 * Structure: Complex Series Request Acknowledgement
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    uint64_t ClOrdId;
    uint16_t ReasonCode;
    uint32_t SymbolId;
    uint8_t Side;
    uint8_t RepeatingGroups;
    char ComplexAck[0];
} ComplexSeriesRequestAcknowledgementT;

/*
 * Structure: Risk Control Alert
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    char MarketMaker[10];
    char MpSubId[4];
    uint32_t FloorBrokerFirmCrd;
    char ClearingNumber[5];
    uint32_t RiskUserCrd;
    char RiskUserType;
    uint8_t RiskControlType;
    int64_t UsdLimit;
    int32_t TimeLimit;
    int32_t PercentageLimit;
    int32_t CountLimit;
    uint8_t BreachActionResponse;
    uint8_t IocAttribution;
    int64_t UsdCalculation1;
    int64_t UsdCalculation2;
    int64_t UsdCalculation3;
    int64_t UsdCalculation4;
    uint32_t CountCalculation;
    uint8_t RiskActionType;
    uint8_t ThresholdBreachLevel;
    uint8_t BlockedByBreachIndicator;
    uint8_t BlockedByKillSwitchIndicator;
    uint8_t ReinstatementRequiredbySelf;
    uint8_t ReinstatementRequiredbyOther;
    char Reserved200[200];
} RiskControlAlertT;

/*
 * Structure: Risk Control Acknowledgement
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    char MarketMaker[10];
    char MpSubId[4];
    uint32_t FloorBrokerFirmCrd;
    char ClearingNumber[5];
    uint64_t ClOrdId;
    uint8_t RiskAckType;
    uint32_t RiskUserCrd;
    char RiskUserType;
    uint8_t RiskControlType;
    uint8_t RiskControlActivation;
    uint8_t RiskActionType;
    int64_t UsdLimit;
    int32_t TimeLimit;
    int32_t PercentageLimit;
    int32_t CountLimit;
    uint8_t BreachActionResponse;
    uint8_t IocAttribution;
    int64_t UsdCalculation1;
    int64_t UsdCalculation2;
    int64_t UsdCalculation3;
    int64_t UsdCalculation4;
    uint32_t CountCalculation;
    uint8_t BlockedByBreachIndicator;
    uint8_t BlockedByKillSwitchIndicator;
    uint8_t ReinstatementRequiredbySelf;
    uint8_t ReinstatementRequiredbyOther;
    char Reserved200[200];
} RiskControlAcknowledgementT;

/*
 * Structure: Application Layer Reject
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    uint32_t SymbolId;
    char Mpid[4];
    uint64_t ClOrdId;
    uint16_t ReasonCode;
    uint8_t RejectType;
    char UserData[10];
    char Reserved4[4];
} ApplicationLayerRejectT;

/*
 * Structure: Stream Id
 */ 
typedef struct {
    uint32_t Sess;
    uint32_t User;
} StreamIdT;

/*
 * Structure: Refseqmsgid
 */ 
typedef struct {
    StreamIdT StreamId;
    uint64_t Seq;
} RefseqmsgidT;

/*
 * Structure: Trade Bust Or Correct
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    uint32_t SymbolId;
    char Mpid[4];
    uint64_t OrderId;
    uint64_t ClOrdId;
    RefseqmsgidT Refseqmsgid;
    uint64_t DealId;
    int64_t LastPx;
    uint32_t LastQty;
    uint16_t ReasonCode;
    char UserData[10];
    uint8_t BustCorrectIndicator;
} TradeBustOrCorrectT;

/*
 * Structure: Sub Msg Header
 */ 
typedef struct {
    uint16_t SeqMsgType;
    uint16_t SeqMsgLength;
} SubMsgHeaderT;

/*
 * Structure: Optional Order Add On
 */ 
typedef struct {
    SubMsgHeaderT SubMsgHeader;
    int64_t StopPx;
    uint32_t MaxFloor;
    char DeliverToCompId[5];
    char ClearingFirm[5];
    char OptionalData[16];
    char ClearingAccount[5];
} OptionalOrderAddOnT;

/*
 * Structure: Execution Report
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    uint32_t SymbolId;
    char Mpid[4];
    uint64_t OrderId;
    uint64_t ClOrdId;
    uint64_t DealId;
    int64_t LastPx;
    uint32_t LeavesQty;
    uint32_t CumQty;
    uint32_t LastQty;
    char LiquidityIndicator[4];
    uint8_t MultilegReportingType;
    char Reserved1[1];
    char Reserved2[2];
    uint8_t LocateReqd;
    uint8_t ParticipantType;
    uint16_t ReasonCode;
    char UserData[10];
    uint8_t Side;
    char MarketMaker[10];
    char ContraMarketMaker[10];
    char ContraClearingFirm[5];
    char ContraMpid[4];
    uint8_t ContraOpenClose;
    uint8_t ContraCustomerOrFirm;
    char ContraClearingAccount[5];
    uint16_t ContraCrossType;
    uint8_t ContraCoveredOrUncovered;
    uint8_t CoveredOrUncovered;
    uint64_t CrossId;
    uint8_t OpenClose;
} ExecutionReportT;

/*
 * Structure: Order Priority Update Acknowledgment
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    uint32_t SymbolId;
    char Mpid[4];
    uint64_t OrderId;
    uint64_t ClOrdId;
    int64_t WorkingPrice;
    uint32_t OrderQty;
    uint8_t WorkingAwayFromDisplay;
    char PreLiquidityIndicator[4];
    uint8_t AckType;
    char UserData[10];
} OrderPriorityUpdateAcknowledgmentT;

/*
 * Structure: Order Request Acknowledgment
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    uint32_t SymbolId;
    char Mpid[4];
    uint64_t OrderId;
    uint64_t RefClOrdId;
    uint64_t OrigClOrdId;
    int64_t PricePrice8;
    uint32_t OrderQty;
    uint32_t LeavesQty;
    uint8_t Side;
    uint8_t LocateReqd;
    uint16_t ReasonCode;
    uint8_t AckType;
    char FlowIndicator[0];
    char UserData[10];
    uint32_t GroupId;
    char MarketMaker[10];
    char TargetCancelUsername[16];
    char TargetCancelMpid[4];
    uint8_t BulkAction;
    uint8_t CancelScope;
} OrderRequestAcknowledgmentT;

/*
 * Structure: Quote Ack
 */ 
typedef struct {
    uint32_t SeriesIndex;
    uint8_t Side;
    uint8_t AckType;
    int64_t PricePrice8;
    uint32_t Quantity;
    uint16_t ReasonCode;
    uint8_t WorkingAwayFromDisplay;
} QuoteAckT;

/*
 * Structure: Bulk Quote Acknowledgment
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    char Mpid[4];
    char MarketMaker[10];
    char SubId[4];
    uint64_t ClOrdId;
    char FlowIndicator[0];
    uint8_t SelfTradeType;
    uint32_t GroupId;
    uint8_t RepeatingGroups;
} BulkQuoteAcknowledgmentT;

/*
 * Structure: Order Acknowledgement
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    char MarketMaker[10];
    char MpSubId[4];
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    char OrderInstructions[16];
    int64_t PricePrice8;
    uint32_t OrderQty;
    uint32_t MinQty;
    char UserData[10];
    uint64_t TransactTime;
    uint64_t OrderId;
    uint32_t LeavesQty;
    int64_t WorkingPrice;
    uint8_t WorkingAwayFromDisplay;
    char PreLiquidityIndicator[4];
    uint16_t ReasonCode;
    uint8_t AckType;
    char FlowIndicator[0];
    uint64_t LegOpenClose;
    uint64_t AuctionId;
} OrderAcknowledgementT;

/*
 * Structure: Session Configuration Acknowledgement
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    uint8_t UserSessionType;
    uint8_t UserSessionStatus;
    char Username[16];
    char Mic[4];
    uint8_t CancelOnDisconnect;
    uint8_t ThrottlePreference;
    uint16_t ThrottleWindow;
    uint16_t ThrottleThreshold;
    uint8_t SymbolEligibility;
    uint32_t MaxOrderQuantity;
    uint8_t SelfTradePrevention;
    uint8_t OrderPriorityUpdateAckSubscription;
    uint8_t AckStatus;
    char BoldDesignation;
    char Reserved49[49];
} SessionConfigurationAcknowledgementT;

/*
 * Structure: Options Market Maker Symbol Appointment Reference Data
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    uint32_t SymbolId;
    char NyseSymbol[24];
    char MarketMaker[10];
    char Mpid[4];
    uint8_t MmType;
    uint8_t AppointmentStatus;
    char Reserved50[50];
} OptionsMarketMakerSymbolAppointmentReferenceDataT;

/*
 * Structure: Mpid Configuration
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    uint8_t MpidStatus;
    char Mpid[4];
    char Username[16];
    char Reserved50[50];
} MpidConfigurationT;

/*
 * Structure: Mpv Level Definition
 */ 
typedef struct {
    char MpvLevelName[24];
    uint64_t PriceUPrice8;
    uint64_t QuotingMpv;
    uint64_t TradingMpv;
    uint16_t MpvClassId;
} MpvLevelDefinitionT;

/*
 * Structure: Minimum Price Variant Level Reference Data
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
} MinimumPriceVariantLevelReferenceDataT;

/*
 * Structure: Minimum Price Variant Class Reference Data
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    char MpvClassName[20];
    uint16_t MpvClassId;
    uint64_t Rpimpv;
    uint64_t Luldmpv;
} MinimumPriceVariantClassReferenceDataT;

/*
 * Structure: Sequenced Filler
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
} SequencedFillerT;

/*
 * Structure: Underlying Symbol Reference Data
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t TransactTime;
    uint32_t SymbolId;
    char NyseSymbol[24];
    char ListedMic[4];
    char UnderlyingType;
    int64_t MaxOrderPrice;
    uint16_t MpvClassId;
    uint8_t TestSymbolIndicator;
    uint8_t ChannelId;
    uint8_t LegalWidthMultiplier;
} UnderlyingSymbolReferenceDataT;

/*
 * Structure: Complex Leg
 */ 
typedef struct {
    uint32_t LegSymbolId;
    uint16_t LegRatioQty;
    uint8_t LegSide;
} ComplexLegT;

/*
 * Structure: New Complex Series Request
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t ClOrdId;
    char Mpid[4];
} NewComplexSeriesRequestT;

/*
 * Structure: Risk Action Request
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    char MarketMaker[10];
    char MpSubId[4];
    uint32_t FloorBrokerFirmCrd;
    char ClearingNumber[5];
    uint64_t ClOrdId;
    uint32_t RiskUserCrd;
    char RiskUserType;
    uint8_t RiskControlType;
    uint8_t RiskActionType;
    char Reserved200[200];
} RiskActionRequestT;

/*
 * Structure: Risk Limit Update Request
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    char MarketMaker[10];
    char MpSubId[4];
    uint32_t FloorBrokerFirmCrd;
    char ClearingNumber[5];
    uint64_t ClOrdId;
    uint32_t RiskUserCrd;
    char RiskUserType;
    uint8_t RiskControlType;
    uint8_t RiskControlActivation;
    int64_t UsdLimit;
    int32_t TimeLimit;
    int32_t PercentageLimit;
    int32_t CountLimit;
    uint8_t BreachActionRequest;
    uint8_t IocAttribution;
    char Reserved200[200];
} RiskLimitUpdateRequestT;

/*
 * Structure: Bulk Cancel Request
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    char MarketMaker[10];
    uint64_t ClOrdId;
    uint64_t MmSentTime;
    uint8_t Side;
    uint32_t GroupId;
    char TargetCancelUsername[16];
    uint8_t BulkAction;
    uint8_t CancelScope;
    char TargetCancelMpid[4];
} BulkCancelRequestT;

/*
 * Structure: Covered
 */ 
typedef struct {
    SubMsgHeaderT SubMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    char MarketMaker[10];
    char MpSubId[4];
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    char OrderInstructions[16];
    int64_t PricePrice8;
    uint32_t OrderQty;
    uint32_t MinQty;
    char UserData[10];
    uint64_t LegOpenClose;
    uint64_t AuctionId;
} CoveredT;

/*
 * Structure: Exposed
 */ 
typedef struct {
    SubMsgHeaderT SubMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    char MarketMaker[10];
    char MpSubId[4];
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    char OrderInstructions[16];
    int64_t PricePrice8;
    uint32_t OrderQty;
    uint32_t MinQty;
    char UserData[10];
    uint64_t LegOpenClose;
    uint64_t AuctionId;
} ExposedT;

/*
 * Structure: New Order Cross
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint64_t CrossId;
    uint8_t AllocationPct;
    char ClearingFirmExposed[5];
    char ClearingAccountExposed[5];
    char ClearingFirmCovered[5];
    char ClearingAccountCovered[5];
    char Reserved16[16];
    ExposedT Exposed;
} NewOrderCrossT;

/*
 * Structure: Bulk Quote
 */ 
typedef struct {
    uint32_t SeriesIndex;
    uint8_t BitFieldQuoteInst;
    int64_t PricePrice8;
    uint32_t OrderQty;
} BulkQuoteT;

/*
 * Structure: New Bulk Quote
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    char Mpid[4];
    char MarketMaker[10];
    char SubId[4];
    uint64_t ClOrdId;
    uint8_t SelfTradeType;
    uint32_t GroupId;
    uint64_t MmSentTime;
} NewBulkQuoteT;

/*
 * Structure: Order Modify Request
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    uint32_t OrderQty;
    uint8_t Side;
    uint8_t LocateReqd;
} OrderModifyRequestT;

/*
 * Structure: Order Cancel Request
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
} OrderCancelRequestT;

/*
 * Structure: Order Request
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    uint32_t SymbolId;
    char Mpid[4];
    char MarketMaker[10];
    char MpSubId[4];
    uint64_t ClOrdId;
    uint64_t OrigClOrdId;
    char OrderInstructions[16];
    int64_t PricePrice8;
    uint32_t OrderQty;
    uint32_t MinQty;
    char UserData[10];
    uint64_t LegOpenClose;
    uint64_t AuctionId;
} OrderRequestT;

/*
 * Structure: Session Configuration Request Message
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
    char Username[16];
    uint8_t CancelOnDisconnect;
    uint8_t ThrottlePreference;
    uint8_t SelfTradePrevention;
    uint8_t OrderPriorityUpdateAckSubscription;
    char BoldDesignation;
    char Reserved49[49];
} SessionConfigurationRequestMessageT;

/*
 * Structure: Seqmsgid
 */ 
typedef struct {
    StreamIdT StreamId;
    uint64_t Seq;
} SeqmsgidT;

/*
 * Structure: Msg Header
 */ 
typedef struct {
    uint16_t MsgType;
    uint16_t MsgLength;
} MsgHeaderT;

/*
 * Structure: Seq Msg
 */ 
typedef struct {
    MsgHeaderT MsgHeader;
    SeqmsgidT Seqmsgid;
    char Reserved4[4];
    uint64_t Timestamp;
} SeqMsgT;

/*
 * Structure: Close Response
 */ 
typedef struct {
    MsgHeaderT MsgHeader;
    StreamIdT StreamId;
    uint8_t Status;
} CloseResponseT;

/*
 * Structure: Close
 */ 
typedef struct {
    MsgHeaderT MsgHeader;
    StreamIdT StreamId;
} CloseT;

/*
 * Structure: Open Response
 */ 
typedef struct {
    MsgHeaderT MsgHeader;
    StreamIdT StreamId;
    uint8_t Status;
    uint8_t Access;
} OpenResponseT;

/*
 * Structure: Open
 */ 
typedef struct {
    MsgHeaderT MsgHeader;
    StreamIdT StreamId;
    uint64_t StartSeq;
    uint64_t EndSeq;
    uint8_t Access;
    uint8_t Mode;
} OpenT;

/*
 * Structure: Heartbeat
 */ 
typedef struct {
    MsgHeaderT MsgHeader;
} HeartbeatT;

/*
 * Structure: Stream Avail
 */ 
typedef struct {
    MsgHeaderT MsgHeader;
    StreamIdT StreamId;
    uint64_t NextSeq;
    uint8_t Access;
} StreamAvailT;

/*
 * Structure: Login Response
 */ 
typedef struct {
    MsgHeaderT MsgHeader;
    char Username[16];
    uint8_t Status;
} LoginResponseT;

/*
 * Structure: Login Message
 */ 
typedef struct {
    MsgHeaderT MsgHeader;
    char Username[16];
    char Password[32];
    char Mic[4];
    char Version[20];
} LoginMessageT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: New York Stock Exchange
   Version: 3.15
   Date: Monday, May 8, 2023
   Specification: NYSE_Pillar_Options_Gateway_Binary_Protocol_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
