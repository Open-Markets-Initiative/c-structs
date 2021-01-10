/*******************************************************************************
 * C Structs For Euronext Optiq Sbe OrderEntryGateway 4.2.2 protocol
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_NEW_ORDER_MESSAGE = 1
#define ENUM_TEMPLATE_ID_ACK_MESSAGE = 3
#define ENUM_TEMPLATE_ID_FILL_MESSAGE = 4
#define ENUM_TEMPLATE_ID_KILL_MESSAGE = 5
#define ENUM_TEMPLATE_ID_CANCEL_REPLACE_MESSAGE = 6
#define ENUM_TEMPLATE_ID_REJECT_MESSAGE = 7
#define ENUM_TEMPLATE_ID_QUOTES_MESSAGE = 8
#define ENUM_TEMPLATE_ID_QUOTE_ACK_MESSAGE = 9
#define ENUM_TEMPLATE_ID_QUOTE_REQUEST_MESSAGE = 10
#define ENUM_TEMPLATE_ID_CANCEL_REQUEST_MESSAGE = 12
#define ENUM_TEMPLATE_ID_MASS_CANCEL_MESSAGE = 13
#define ENUM_TEMPLATE_ID_MASS_CANCEL_ACK_MESSAGE = 14
#define ENUM_TEMPLATE_ID_OPEN_ORDER_REQUEST_MESSAGE = 15
#define ENUM_TEMPLATE_ID_OWNERSHIP_REQUEST_ACK_MESSAGE = 17
#define ENUM_TEMPLATE_ID_OWNERSHIP_REQUEST_MESSAGE = 18
#define ENUM_TEMPLATE_ID_TRADE_BUST_NOTIFICATION_MESSAGE = 19
#define ENUM_TEMPLATE_ID_COLLAR_BREACH_CONFIRMATION_MESSAGE = 20
#define ENUM_TEMPLATE_ID_PRICE_INPUT_MESSAGE = 28
#define ENUM_TEMPLATE_ID_LIQUIDITY_PROVIDER_COMMAND_MESSAGE = 32
#define ENUM_TEMPLATE_ID_ASK_FOR_QUOTE_MESSAGE = 33
#define ENUM_TEMPLATE_ID_REQUEST_FOR_EXECUTION_MESSAGE = 34
#define ENUM_TEMPLATE_ID_RFQ_NOTIFICATION_MESSAGE = 35
#define ENUM_TEMPLATE_ID_RFQ_MATCHING_STATUS_MESSAGE = 36
#define ENUM_TEMPLATE_ID_RFQLP_MATCHING_STATUS_MESSAGE = 37
#define ENUM_TEMPLATE_ID_USER_NOTIFICATION_MESSAGE = 39
#define ENUM_TEMPLATE_ID_MM_SIGN_IN_MESSAGE = 47
#define ENUM_TEMPLATE_ID_MM_SIGN_IN_ACK_MESSAGE = 48
#define ENUM_TEMPLATE_ID_INSTRUMENT_SYNCHRONIZATION_LIST_MESSAGE = 50
#define ENUM_TEMPLATE_ID_SYNCHRONIZATION_TIME_MESSAGE = 51
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_REQUEST_MESSAGE = 60
#define ENUM_TEMPLATE_ID_SECURITY_DEFINITION_ACK_MESSAGE = 61
#define ENUM_TEMPLATE_ID_MM_PROTECTION_REQUEST_MESSAGE = 62
#define ENUM_TEMPLATE_ID_MM_PROTECTION_ACK_MESSAGE = 63
#define ENUM_TEMPLATE_ID_NEW_WHOLESALE_ORDER_MESSAGE = 64
#define ENUM_TEMPLATE_ID_WHOLESALE_ORDER_ACK_MESSAGE = 65
#define ENUM_TEMPLATE_ID_REQUEST_FOR_IMPLIED_EXECUTION_MESSAGE = 66
#define ENUM_TEMPLATE_ID_CROSS_ORDER_MESSAGE = 67
#define ENUM_TEMPLATE_ID_LOGON_MESSAGE = 100
#define ENUM_TEMPLATE_ID_LOGON_ACK_MESSAGE = 101
#define ENUM_TEMPLATE_ID_LOGON_REJECT_MESSAGE = 102
#define ENUM_TEMPLATE_ID_LOGOUT_MESSAGE = 103
#define ENUM_TEMPLATE_ID_HEARTBEAT_MESSAGE = 106
#define ENUM_TEMPLATE_ID_TEST_REQUEST_MESSAGE = 107
#define ENUM_TEMPLATE_ID_TECHNICAL_REJECT_MESSAGE = 108
#define ENUM_TEMPLATE_ID_DECLARATION_ENTRY_MESSAGE = 40
#define ENUM_TEMPLATE_ID_DECLARATION_ENTRY_ACK_MESSAGE = 41
#define ENUM_TEMPLATE_ID_DECLARATION_NOTICE_MESSAGE = 42
#define ENUM_TEMPLATE_ID_DECLARATION_CANCEL_AND_REFUSAL_MESSAGE = 43
#define ENUM_TEMPLATE_ID_FUND_PRICE_INPUT_MESSAGE = 44
#define ENUM_TEMPLATE_ID_FUND_PRICE_INPUT_ACK_MESSAGE = 45
#define ENUM_TEMPLATE_ID_DECLARATION_ENTRY_REJECT_MESSAGE = 46


/*******************************************************************************
 * Structs
 *******************************************************************************/

/*
 * Structure: Declaration Entry Reject Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    char MiCofSecondaryListing[4];
    uint8_t OperationType;
    uint16_t ErrorCode;
    uint8_t RejectedMessage;
    uint16_t RejectedMessageId;
} DeclarationEntryRejectMessageT;

/*
 * Structure: Fund Price Input Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    int64_t Price;
    uint8_t BypassIndicator;
} FundPriceInputAckMessageT;

/*
 * Structure: Fund Price Input Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    int64_t Price;
    uint8_t BypassIndicator;
} FundPriceInputMessageT;

/*
 * Structure: Declaration Cancel And Refusal Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint64_t DeclarationId;
    uint8_t ActionType;
} DeclarationCancelAndRefusalMessageT;

/*
 * Structure: Declaration Notice Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    int64_t ClientOrderId;
    uint64_t DeclarationId;
    uint8_t DeclarationStatus;
    uint8_t OperationType;
    uint32_t SymbolIndex;
    uint8_t Emm;
    char EnteringCounterparty[8];
    uint8_t Side;
    uint64_t Quantity;
    int64_t Price;
    uint8_t PreMatchingType;
    uint64_t TradeTime;
    char MiCofSecondaryListing[4];
    char CentralisationDate[10];
    char ClearingFirmId[8];
    uint8_t AccountType;
    uint8_t AccountTypeCross;
    uint8_t TradingCapacity;
    uint8_t TradingCapacityCross;
    uint8_t SettlementFlag;
    uint8_t SettlementPeriod;
    uint8_t GuaranteeFlag;
    uint8_t TransactionPriceType;
    char PrincipalCode[8];
    char PrincipalCodeCross[8];
    uint32_t StartTimeVwap;
    uint32_t EndTimeVwap;
    int64_t GrossTradeAmount;
    char AccountNumber[12];
    char AccountNumberCross[12];
    char FreeText[18];
    char FreeTextCross[18];
    uint8_t WaiverIndicator;
    uint8_t PreviousDayIndicator;
    int64_t MiscellaneousFeeAmount;
    uint8_t Ccpid;
} DeclarationNoticeMessageT;

/*
 * Structure: Declaration Entry Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t DeclarationId;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    char MiCofSecondaryListing[4];
    uint8_t OperationType;
    uint8_t PreMatchingType;
    uint8_t WaiverIndicator;
} DeclarationEntryAckMessageT;

/*
 * Structure: Declaration Entry Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint8_t OperationType;
    uint32_t SymbolIndex;
    uint8_t Emm;
    char EnteringCounterparty[8];
    uint8_t Side;
    uint64_t Quantity;
    int64_t Price;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    char MiCofSecondaryListing[4];
    char CentralisationDate[10];
    char ClearingFirmId[8];
    uint8_t AccountType;
    uint8_t AccountTypeCross;
    uint8_t TradingCapacity;
    uint8_t TradingCapacityCross;
    uint8_t SettlementPeriod;
    uint8_t SettlementFlag;
    uint8_t GuaranteeFlag;
    uint8_t MiFidIndicators;
    uint8_t TransactionPriceType;
    char PrincipalCode[8];
    char PrincipalCodeCross[8];
    uint32_t StartTimeVwap;
    uint32_t EndTimeVwap;
    int64_t GrossTradeAmount;
    char AccountNumber[12];
    char AccountNumberCross[12];
    char FreeText[18];
    char FreeTextCross[18];
    int32_t InvestmentDecisionWFirmShortCode;
    int32_t ClientIdentificationShortCodeCross;
} DeclarationEntryMessageT;

/*
 * Structure: Technical Reject Message
 */ 
typedef struct {
    uint64_t OegoutToMember;
    uint32_t RejectedClientMessageSequenceNumber;
    uint8_t RejectedMessage;
    uint16_t ErrorCode;
    uint16_t RejectedMessageId;
} TechnicalRejectMessageT;

/*
 * Structure: Logout Message
 */ 
typedef struct {
    uint8_t LogOutReasonCode;
} LogoutMessageT;

/*
 * Structure: Logon Reject Message
 */ 
typedef struct {
    char ExchangeId[8];
    uint8_t LogonRejectCode;
    uint32_t LastClMsgSeqNum;
    uint32_t LastMsgSeqNum;
} LogonRejectMessageT;

/*
 * Structure: Logon Ack Message
 */ 
typedef struct {
    char ExchangeId[8];
    uint32_t LastClMsgSeqNum;
} LogonAckMessageT;

/*
 * Structure: Logon Message
 */ 
typedef struct {
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    uint32_t LastMsgSeqNum;
    char SoftwareProvider[8];
    uint8_t QueueingIndicator;
} LogonMessageT;

/*
 * Structure: Cross Order Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t OrderType;
    int64_t OrderPx;
    uint64_t OrderQty;
    int32_t ExecutionWithinFirmShortCode;
    uint8_t MiFidIndicators;
    uint16_t NonExecutingClientId;
    uint8_t OrderActorType;
    uint8_t MessagePriceNotation;
} CrossOrderMessageT;

/*
 * Structure: Request For Implied Execution Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint64_t OrderId;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    uint8_t MiFidIndicators;
} RequestForImpliedExecutionMessageT;

/*
 * Structure: Wholesale Order Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    uint32_t ContractSymbolIndex;
    uint8_t WholesaleTradeType;
    uint32_t LisTransactionId;
    char StrategyCode[1];
    int64_t Price;
    uint64_t Quantity;
    int32_t ExecutionWithinFirmShortCode;
    uint8_t MiFidIndicators;
    uint8_t WholesaleSide;
    uint8_t EscbMembership;
    uint8_t ResponseType;
    uint16_t ErrorCode;
    uint8_t AckQualifiers;
} WholesaleOrderAckMessageT;

/*
 * Structure: New Wholesale Order Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint32_t ContractSymbolIndex;
    uint8_t WholesaleTradeType;
    uint32_t LisTransactionId;
    char StrategyCode[1];
    int64_t Price;
    uint64_t Quantity;
    int32_t ExecutionWithinFirmShortCode;
    uint8_t MiFidIndicators;
    uint8_t WholesaleSide;
    uint8_t EscbMembership;
    uint8_t MessagePriceNotation;
} NewWholesaleOrderMessageT;

/*
 * Structure: Mm Protection Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    int32_t ExecutionWithinFirmShortCode;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t MmpExecutionType;
} MmProtectionAckMessageT;

/*
 * Structure: Mm Protection Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    int32_t ExecutionWithinFirmShortCode;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t RequestType;
} MmProtectionRequestMessageT;

/*
 * Structure: Security Definition Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t SecurityReqId;
    uint32_t SymbolIndex;
} SecurityDefinitionAckMessageT;

/*
 * Structure: Security Definition Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t SecurityReqId;
    uint32_t ContractSymbolIndex;
    char StrategyCode[1];
} SecurityDefinitionRequestMessageT;

/*
 * Structure: Synchronization Time Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    uint64_t OegoutToMember;
    uint16_t ResynchronizationId;
    uint64_t LastBookInTime;
} SynchronizationTimeMessageT;

/*
 * Structure: Instrument Synchronization List Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    uint64_t OegoutToMember;
    uint16_t ResynchronizationId;
} InstrumentSynchronizationListMessageT;

/*
 * Structure: Mm Sign In Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    int32_t ExecutionWithinFirmShortCode;
    char ClearingFirmId[8];
    char AccountNumber[12];
    uint8_t TechnicalOrigin;
    uint16_t OpenClose;
    uint16_t ClearingInstruction;
    char FreeText[18];
    char LongClientId[16];
} MmSignInAckMessageT;

/*
 * Structure: Mm Sign In Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    int32_t ExecutionWithinFirmShortCode;
    char ClearingFirmId[8];
    char AccountNumber[12];
    uint8_t TechnicalOrigin;
    uint16_t OpenClose;
    uint16_t ClearingInstruction;
    char FreeText[18];
    char LongClientId[16];
} MmSignInMessageT;

/*
 * Structure: User Notification Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    char FamilyId[8];
    uint32_t SymbolIndex;
    uint8_t UserStatus;
    uint32_t LogicalAccessId;
    uint64_t OrderSizeLimit;
} UserNotificationMessageT;

/*
 * Structure: Rfqlp Matching Status Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    uint64_t QuoteReqId;
    uint64_t PotentialMatchingQty;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
} RfqlpMatchingStatusMessageT;

/*
 * Structure: Rfq Matching Status Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    uint64_t QuoteReqId;
    int64_t PotentialMatchingPx;
    uint64_t PotentialMatchingQty;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t NumberOfLPs;
    uint8_t RecipientType;
} RfqMatchingStatusMessageT;

/*
 * Structure: Rfq Notification Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    uint64_t QuoteReqId;
    uint64_t OrderQty;
    char CounterpartFirmId[8];
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t RfqUpdateType;
    uint8_t OrderSide;
    char EndClient[11];
    uint8_t DarkExecutionInstruction;
    uint64_t MinOrderQty;
} RfqNotificationMessageT;

/*
 * Structure: Request For Execution Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint32_t SymbolIndex;
    uint8_t Emm;
} RequestForExecutionMessageT;

/*
 * Structure: Ask For Quote Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t AfqReason;
} AskForQuoteMessageT;

/*
 * Structure: Liquidity Provider Command Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t LpActionCode;
} LiquidityProviderCommandMessageT;

/*
 * Structure: Price Input Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t InputPriceType;
    int64_t Price;
} PriceInputMessageT;

/*
 * Structure: Collar Breach Confirmation Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint64_t OrderId;
    int64_t OrigClientOrderId;
} CollarBreachConfirmationMessageT;

/*
 * Structure: Trade Bust Notification Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint32_t ExecutionId;
    int64_t LastTradedPx;
    uint64_t LastShares;
    uint32_t LisTransactionId;
    uint32_t ParentExecId;
    uint32_t ParentSymbolIndex;
} TradeBustNotificationMessageT;

/*
 * Structure: Ownership Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint64_t OrderId;
    int64_t OrigClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    uint8_t OrderCategory;
} OwnershipRequestMessageT;

/*
 * Structure: Ownership Request Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    int64_t ClientOrderId;
    uint64_t OrderId;
    uint32_t SymbolIndex;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    int32_t TotalAffectedOrders;
    uint8_t OrderCategory;
} OwnershipRequestAckMessageT;

/*
 * Structure: Open Order Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint64_t OrderId;
    int64_t OrigClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderCategory;
} OpenOrderRequestMessageT;

/*
 * Structure: Mass Cancel Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    int32_t TotalAffectedOrders;
    uint32_t SymbolIndex;
    uint8_t Emm;
    char InstrumentGroupCode[2];
    uint8_t OrderSide;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    uint32_t ContractId;
    char Maturity[8];
    uint8_t AccountType;
    uint8_t OptionType;
    uint8_t OrderCategory;
    uint8_t AckQualifiers;
    int32_t TargetExecutionWithinFirmShortCode;
} MassCancelAckMessageT;

/*
 * Structure: Mass Cancel Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    char InstrumentGroupCode[2];
    uint8_t OrderSide;
    uint32_t LogicalAccessId;
    uint16_t OePartitionId;
    uint32_t ContractId;
    char Maturity[8];
    uint8_t AccountType;
    uint8_t OptionType;
    uint8_t OrderCategory;
    int32_t TargetExecutionWithinFirmShortCode;
} MassCancelMessageT;

/*
 * Structure: Cancel Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint64_t OrderId;
    int64_t OrigClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t OrderType;
    uint8_t OrderCategory;
} CancelRequestMessageT;

/*
 * Structure: Quote Request Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint64_t OrderQty;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t FirmIdPublication;
    char EndClient[11];
    uint8_t DarkExecutionInstruction;
    uint64_t MinOrderQty;
} QuoteRequestMessageT;

/*
 * Structure: Quote Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    uint8_t AccountType;
    uint8_t LpRole;
    int32_t ExecutionWithinFirmShortCode;
    uint8_t AckQualifiers;
} QuoteAckMessageT;

/*
 * Structure: Quotes Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    int32_t ExecutionWithinFirmShortCode;
    uint8_t TradingCapacity;
    uint8_t AccountType;
    uint8_t LpRole;
    uint8_t MiFidIndicators;
    uint8_t RfeAnswer;
    uint8_t ExecutionInstruction;
} QuotesMessageT;

/*
 * Structure: Reject Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    uint64_t OrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t RejectedMessage;
    uint16_t ErrorCode;
    uint16_t RejectedMessageId;
    uint8_t AckQualifiers;
} RejectMessageT;

/*
 * Structure: Cancel Replace Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int32_t ExecutionWithinFirmShortCode;
    int32_t ClientIdentificationShortcode;
    int64_t ClientOrderId;
    uint64_t OrderId;
    int64_t OrigClientOrderId;
    int64_t OrderPx;
    uint64_t OrderQty;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t OrderType;
    uint8_t TimeInForce;
    uint8_t AccountType;
    uint8_t LpRole;
    uint8_t ExecutionInstruction;
    uint8_t DarkExecutionInstruction;
    uint8_t MiFidIndicators;
    uint16_t Stpid;
} CancelReplaceMessageT;

/*
 * Structure: Kill Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    int64_t OrigClientOrderId;
    uint64_t OrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint16_t KillReason;
    uint8_t AckQualifiers;
} KillMessageT;

/*
 * Structure: Fill Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t TradeTime;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t TradeType;
    uint8_t TradeQualifier;
    uint64_t OrderId;
    int64_t LastTradedPx;
    uint64_t LastShares;
    uint64_t LeavesQty;
    uint32_t ExecutionId;
    uint8_t ExecutionPhase;
    uint32_t LisTransactionId;
    uint8_t EscbMembership;
} FillMessageT;

/*
 * Structure: Ack Message
 */ 
typedef struct {
    uint32_t MsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    uint64_t OeginFromMember;
    uint64_t OegoutTimeToMe;
    uint64_t BookIn;
    uint64_t BookOutTime;
    uint64_t OeginFromMe;
    uint64_t OegoutToMember;
    int64_t ClientOrderId;
    int64_t OrigClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t AckType;
    uint8_t AckPhase;
    uint64_t OrderId;
    uint64_t OrderPriority;
    int64_t OrderPx;
    uint64_t OrderQty;
    uint8_t AckQualifiers;
} AckMessageT;

/*
 * Structure: New Order Message
 */ 
typedef struct {
    uint32_t ClMsgSeqNum;
    char FirmId[8];
    uint64_t SendingTime;
    int64_t ClientOrderId;
    uint32_t SymbolIndex;
    uint8_t Emm;
    uint8_t OrderSide;
    uint8_t OrderType;
    uint8_t TimeInForce;
    int64_t OrderPx;
    uint64_t OrderQty;
    int32_t ExecutionWithinFirmShortCode;
    uint8_t TradingCapacity;
    uint8_t AccountType;
    uint8_t LpRole;
    uint8_t ExecutionInstruction;
    uint8_t DarkExecutionInstruction;
    uint8_t MiFidIndicators;
    uint16_t Stpid;
    uint16_t NonExecutingClientId;
} NewOrderMessageT;

/*
 * Structure: Payload
 */ 
typedef struct {
    NewOrderMessageT NewOrderMessage;
    AckMessageT AckMessage;
    FillMessageT FillMessage;
    KillMessageT KillMessage;
    CancelReplaceMessageT CancelReplaceMessage;
    RejectMessageT RejectMessage;
    QuotesMessageT QuotesMessage;
    QuoteAckMessageT QuoteAckMessage;
    QuoteRequestMessageT QuoteRequestMessage;
    CancelRequestMessageT CancelRequestMessage;
    MassCancelMessageT MassCancelMessage;
    MassCancelAckMessageT MassCancelAckMessage;
    OpenOrderRequestMessageT OpenOrderRequestMessage;
    OwnershipRequestAckMessageT OwnershipRequestAckMessage;
    OwnershipRequestMessageT OwnershipRequestMessage;
    TradeBustNotificationMessageT TradeBustNotificationMessage;
    CollarBreachConfirmationMessageT CollarBreachConfirmationMessage;
    PriceInputMessageT PriceInputMessage;
    LiquidityProviderCommandMessageT LiquidityProviderCommandMessage;
    AskForQuoteMessageT AskForQuoteMessage;
    RequestForExecutionMessageT RequestForExecutionMessage;
    RfqNotificationMessageT RfqNotificationMessage;
    RfqMatchingStatusMessageT RfqMatchingStatusMessage;
    RfqlpMatchingStatusMessageT RfqlpMatchingStatusMessage;
    UserNotificationMessageT UserNotificationMessage;
    MmSignInMessageT MmSignInMessage;
    MmSignInAckMessageT MmSignInAckMessage;
    InstrumentSynchronizationListMessageT InstrumentSynchronizationListMessage;
    SynchronizationTimeMessageT SynchronizationTimeMessage;
    SecurityDefinitionRequestMessageT SecurityDefinitionRequestMessage;
    SecurityDefinitionAckMessageT SecurityDefinitionAckMessage;
    MmProtectionRequestMessageT MmProtectionRequestMessage;
    MmProtectionAckMessageT MmProtectionAckMessage;
    NewWholesaleOrderMessageT NewWholesaleOrderMessage;
    WholesaleOrderAckMessageT WholesaleOrderAckMessage;
    RequestForImpliedExecutionMessageT RequestForImpliedExecutionMessage;
    CrossOrderMessageT CrossOrderMessage;
    LogonMessageT LogonMessage;
    LogonAckMessageT LogonAckMessage;
    LogonRejectMessageT LogonRejectMessage;
    LogoutMessageT LogoutMessage;
    char HeartbeatMessage[0];
    char TestRequestMessage[0];
    TechnicalRejectMessageT TechnicalRejectMessage;
    DeclarationEntryMessageT DeclarationEntryMessage;
    DeclarationEntryAckMessageT DeclarationEntryAckMessage;
    DeclarationNoticeMessageT DeclarationNoticeMessage;
    DeclarationCancelAndRefusalMessageT DeclarationCancelAndRefusalMessage;
    FundPriceInputMessageT FundPriceInputMessage;
    FundPriceInputAckMessageT FundPriceInputAckMessage;
    DeclarationEntryRejectMessageT DeclarationEntryRejectMessage;
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
 * Structure: Packet
 */ 
typedef struct {
} PacketT;

