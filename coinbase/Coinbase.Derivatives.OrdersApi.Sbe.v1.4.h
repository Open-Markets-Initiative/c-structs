/*******************************************************************************
 * C Structs For Coinbase Derivatives Sbe OrdersApi 1.4 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Cancel Reason Values
 */ 
#define ENUM_CANCEL_REASON_EXPIRED 0
#define ENUM_CANCEL_REASON_CANCELEDBYUSER 1
#define ENUM_CANCEL_REASON_SELFMATCHPREVENTION 2
#define ENUM_CANCEL_REASON_CLIENTDISCONNECT 3
#define ENUM_CANCEL_REASON_PRICELIMIT 4
#define ENUM_CANCEL_REASON_ADMINCANCEL 5
#define ENUM_CANCEL_REASON_MASSCANCEL 6
#define ENUM_CANCEL_REASON_STREAMREPLACED 7
#define ENUM_CANCEL_REASON_ACTIVELIMITEXCEEDED 8

/*
 * Current Session Only Values
 */ 
#define ENUM_CURRENT_SESSION_ONLY_FALSE 0
#define ENUM_CURRENT_SESSION_ONLY_TRUE 1

/*
 * Is Aggressor Values
 */ 
#define ENUM_IS_AGGRESSOR_FALSE 0
#define ENUM_IS_AGGRESSOR_TRUE 1

/*
 * Is Last Message Values
 */ 
#define ENUM_IS_LAST_MESSAGE_FALSE 0
#define ENUM_IS_LAST_MESSAGE_TRUE 1

/*
 * Only Current Session Values
 */ 
#define ENUM_ONLY_CURRENT_SESSION_FALSE 0
#define ENUM_ONLY_CURRENT_SESSION_TRUE 1

/*
 * Reject Reason Values
 */ 
#define ENUM_REJECT_REASON_ERROR 1
#define ENUM_REJECT_REASON_INVALIDINSTRUMENT 2
#define ENUM_REJECT_REASON_CLORDIDINUSE 3
#define ENUM_REJECT_REASON_VALIDATIONFAILURE 8
#define ENUM_REJECT_REASON_UNKNOWNORDER 9
#define ENUM_REJECT_REASON_UNKNOWNORDER 2
#define ENUM_REJECT_REASON_ORDERFILLED 3
#define ENUM_REJECT_REASON_BEGINEXECIDTOOSMALL 1
#define ENUM_REJECT_REASON_ENDEXECIDTOOLARGE 2
#define ENUM_REJECT_REASON_RESENDALREADYINPROGRESS 3
#define ENUM_REJECT_REASON_TOOMANYRESENDREQUESTS 4
#define ENUM_REJECT_REASON_SERVERERROR 5

/*
 * Request Trading Lock Values
 */ 
#define ENUM_REQUEST_TRADING_LOCK_FALSE 0
#define ENUM_REQUEST_TRADING_LOCK_TRUE 1

/*
 * Reset Seq Num Values
 */ 
#define ENUM_RESET_SEQ_NUM_FALSE 0
#define ENUM_RESET_SEQ_NUM_TRUE 1

/*
 * Security Type Values
 */ 
#define ENUM_SECURITY_TYPE_FUTURES 0
#define ENUM_SECURITY_TYPE_OPTIONS 1

/*
 * Side Values
 */ 
#define ENUM_SIDE_BUY 1
#define ENUM_SIDE_SELL -1

/*
 * Status Values
 */ 
#define ENUM_STATUS_OK 0
#define ENUM_STATUS_TEMPORARILYUNAVAILABLE 1
#define ENUM_STATUS_BACKPRESSURED 2
#define ENUM_STATUS_PREOPEN 1
#define ENUM_STATUS_PREOPENNOCANCEL 2
#define ENUM_STATUS_READYTOTRADE 3
#define ENUM_STATUS_TRADINGHALT 4
#define ENUM_STATUS_CLOSE 5
#define ENUM_STATUS_POSTCLOSE 6

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_LOGON_MESSAGE 100
#define ENUM_TEMPLATE_ID_LOGON_CONF_MESSAGE 200
#define ENUM_TEMPLATE_ID_LOGOUT_MESSAGE 101
#define ENUM_TEMPLATE_ID_LOGGED_OUT_MESSAGE 201
#define ENUM_TEMPLATE_ID_HEARTBEAT_MESSAGE 10
#define ENUM_TEMPLATE_ID_TEST_REQUEST_MESSAGE 11
#define ENUM_TEMPLATE_ID_RESEND_REQUEST_MESSAGE 102
#define ENUM_TEMPLATE_ID_GAP_FILL_MESSAGE 202
#define ENUM_TEMPLATE_ID_PING_MESSAGE 102
#define ENUM_TEMPLATE_ID_PONG_MESSAGE 202
#define ENUM_TEMPLATE_ID_INSTRUMENT_INFO_REQUEST_MESSAGE 103
#define ENUM_TEMPLATE_ID_INSTRUMENT_INFO_MESSAGE 203
#define ENUM_TEMPLATE_ID_SET_ACCOUNT_MESSAGE 105
#define ENUM_TEMPLATE_ID_SET_TRADER_MESSAGE 106
#define ENUM_TEMPLATE_ID_SET_ACK_MESSAGE 205
#define ENUM_TEMPLATE_ID_NEW_ORDER_MESSAGE 110
#define ENUM_TEMPLATE_ID_ORDER_ENTERED_MESSAGE 210
#define ENUM_TEMPLATE_ID_REPLACE_ORDER_MESSAGE 120
#define ENUM_TEMPLATE_ID_STREAM_ORDER_MESSAGE 121
#define ENUM_TEMPLATE_ID_ORDER_REJECT_MESSAGE 221
#define ENUM_TEMPLATE_ID_ORDER_REPLACED_MESSAGE 220
#define ENUM_TEMPLATE_ID_CANCEL_ORDER_MESSAGE 130
#define ENUM_TEMPLATE_ID_ORDER_CANCELED_MESSAGE 230
#define ENUM_TEMPLATE_ID_CANCEL_ORDER_REJECT_MESSAGE 233
#define ENUM_TEMPLATE_ID_MASS_CANCEL_ORDER_MESSAGE 131
#define ENUM_TEMPLATE_ID_MASS_CANCEL_ORDER_ACK_MESSAGE 231
#define ENUM_TEMPLATE_ID_MASS_CANCEL_ORDER_REJECT_MESSAGE 232
#define ENUM_TEMPLATE_ID_UNLOCK_TRADING_MESSAGE 132
#define ENUM_TEMPLATE_ID_UNLOCK_TRADING_ACK_MESSAGE 234
#define ENUM_TEMPLATE_ID_UNLOCK_TRADING_REJECT_MESSAGE 235
#define ENUM_TEMPLATE_ID_ORDER_FILLED_MESSAGE 240
#define ENUM_TEMPLATE_ID_SPREAD_ORDER_FILLED_MESSAGE 241
#define ENUM_TEMPLATE_ID_LAST_EXEC_ID_REQUEST_MESSAGE 150
#define ENUM_TEMPLATE_ID_LAST_EXEC_ID_MESSAGE 250
#define ENUM_TEMPLATE_ID_EVENT_RESEND_REQUEST_MESSAGE 152
#define ENUM_TEMPLATE_ID_EVENT_RESEND_COMPLETE_MESSAGE 252
#define ENUM_TEMPLATE_ID_EVENT_RESEND_REJECT_MESSAGE 253

/*
 * Trading Lock Applied Values
 */ 
#define ENUM_TRADING_LOCK_APPLIED_FALSE 0
#define ENUM_TRADING_LOCK_APPLIED_TRUE 1


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Event Resend Reject Message
 */ 
typedef struct {
    int64_t CorrelationId;
    uint8_t RejectReason;
    char Details[47];
} EventResendRejectMessageT;

/*
 * Structure: Event Resend Complete Message
 */ 
typedef struct {
    int64_t CorrelationId;
    int32_t ResentEventCount;
} EventResendCompleteMessageT;

/*
 * Structure: Event Resend Request Message
 */ 
typedef struct {
    int64_t CorrelationId;
    int64_t BeginExecId;
    int64_t EndExecId;
} EventResendRequestMessageT;

/*
 * Structure: Last Exec Id Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t LastExecId;
    int64_t CorrelationId;
} LastExecIdMessageT;

/*
 * Structure: Last Exec Id Request Message
 */ 
typedef struct {
    int64_t CorrelationId;
} LastExecIdRequestMessageT;

/*
 * Structure: Spread Order Filled Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t ExecId;
    int64_t MatchId;
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int64_t OrderId;
    int64_t FilledVwap;
    int32_t TotalFilled;
    int32_t AvailableQty;
    int64_t FillPrice;
    int64_t Leg1FillPrice;
    int64_t Leg2FillPrice;
    int32_t FillQty;
    int32_t InstrumentId;
    int8_t IsAggressor;
} SpreadOrderFilledMessageT;

/*
 * Structure: Order Filled Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t ExecId;
    int64_t MatchId;
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int64_t OrderId;
    int64_t FilledVwap;
    int32_t TotalFilled;
    int32_t AvailableQty;
    int64_t FillPrice;
    int32_t FillQty;
    int32_t InstrumentId;
    int8_t IsAggressor;
} OrderFilledMessageT;

/*
 * Structure: Unlock Trading Reject Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t CorrelationId;
    char ErrorMessage[32];
} UnlockTradingRejectMessageT;

/*
 * Structure: Unlock Trading Ack Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t CorrelationId;
    int32_t NumUsersAffected;
} UnlockTradingAckMessageT;

/*
 * Structure: Unlock Trading Message
 */ 
typedef struct {
    int64_t CorrelationId;
    int8_t CurrentSessionOnly;
} UnlockTradingMessageT;

/*
 * Structure: Mass Cancel Order Reject Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t CorrelationId;
    char ErrorMessage[32];
} MassCancelOrderRejectMessageT;

/*
 * Structure: Mass Cancel Order Ack Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t ExecId;
    int64_t CorrelationId;
    int32_t CanceledCount;
    int8_t OnlyCurrentSession;
    int8_t TradingLockApplied;
} MassCancelOrderAckMessageT;

/*
 * Structure: Mass Cancel Order Message
 */ 
typedef struct {
    int64_t CorrelationId;
    int64_t LimitPrice;
    int32_t InstrumentId;
    int8_t Side;
    int8_t CurrentSessionOnly;
    int8_t RequestTradingLock;
} MassCancelOrderMessageT;

/*
 * Structure: Cancel Order Reject Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int64_t OrderId;
    uint8_t RejectReason;
    char Details[47];
} CancelOrderRejectMessageT;

/*
 * Structure: Order Canceled Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t ExecId;
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int64_t OrderId;
    int64_t ReceiveTime;
    int32_t TotalFilled;
    int32_t InstrumentId;
    uint8_t CancelReason;
} OrderCanceledMessageT;

/*
 * Structure: Cancel Order Message
 */ 
typedef struct {
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int32_t InstrumentId;
} CancelOrderMessageT;

/*
 * Structure: Order Replaced Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t ExecId;
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int64_t OrderId;
    int64_t ReceiveTime;
    int32_t TotalFilled;
    int32_t AvailableQty;
    int32_t InstrumentId;
} OrderReplacedMessageT;

/*
 * Structure: Order Reject Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int64_t OrderId;
    uint8_t RejectReason;
    char Details[47];
} OrderRejectMessageT;

/*
 * Structure: Stream Order Message
 */ 
typedef struct {
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int64_t LastProcessedFillId;
    int64_t LimitPrice;
    int32_t Quantity;
    int32_t InstrumentId;
    int8_t Side;
} StreamOrderMessageT;

/*
 * Structure: Replace Order Message
 */ 
typedef struct {
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int64_t NewLimitPrice;
    int32_t NewQuantity;
    int32_t InstrumentId;
} ReplaceOrderMessageT;

/*
 * Structure: Order Entered Message
 */ 
typedef struct {
    int64_t Timestamp;
    int64_t ExecId;
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int64_t OrderId;
    int64_t ReceiveTime;
} OrderEnteredMessageT;

/*
 * Structure: New Order Message
 */ 
typedef struct {
    int64_t ClientOrderId;
    int64_t CorrelationId;
    int64_t LimitPrice;
    int32_t Quantity;
    int32_t InstrumentId;
    int8_t Side;
} NewOrderMessageT;

/*
 * Structure: Set Ack Message
 */ 
typedef struct {
    int64_t CorrelationId;
} SetAckMessageT;

/*
 * Structure: Set Trader Message
 */ 
typedef struct {
    int64_t CorrelationId;
    char Trader[16];
} SetTraderMessageT;

/*
 * Structure: Set Account Message
 */ 
typedef struct {
    int64_t CorrelationId;
    char Account[16];
} SetAccountMessageT;

/*
 * Structure: Instrument Info Message
 */ 
typedef struct {
    int64_t CorrelationId;
    int32_t InstrumentId;
    uint8_t SecurityType;
    int8_t Status;
    int8_t IsLastMessage;
    uint32_t Reserved;
    char Symbol[32];
} InstrumentInfoMessageT;

/*
 * Structure: Instrument Info Request Message
 */ 
typedef struct {
    int64_t CorrelationId;
} InstrumentInfoRequestMessageT;

/*
 * Structure: Data
 */ 
typedef struct {
    uint8_t Length;
} DataT;

/*
 * Structure: Pong Message
 */ 
typedef struct {
    int64_t CorrelationId;
    int64_t RequestTime;
    int64_t ServerTime;
    int8_t Status;
} PongMessageT;

/*
 * Structure: Ping Message
 */ 
typedef struct {
    int64_t CorrelationId;
    int64_t RequestTime;
} PingMessageT;

/*
 * Structure: Gap Fill Message
 */ 
typedef struct {
    uint32_t NewSequenceNumber;
    uint32_t GapFillPadding;
} GapFillMessageT;

/*
 * Structure: Resend Request Message
 */ 
typedef struct {
    uint32_t FromSequenceNumber;
    uint32_t ToSequenceNumber;
} ResendRequestMessageT;

/*
 * Structure: Test Request Message
 */ 
typedef struct {
    int64_t CorrelationId;
} TestRequestMessageT;

/*
 * Structure: Heartbeat Message
 */ 
typedef struct {
    int64_t CorrelationId;
} HeartbeatMessageT;

/*
 * Structure: Logged Out Message
 */ 
typedef struct {
    char Reason[64];
} LoggedOutMessageT;

/*
 * Structure: Logout Message
 */ 
typedef struct {
    char Reason[64];
} LogoutMessageT;

/*
 * Structure: Logon Conf Message
 */ 
typedef struct {
    int32_t HeartbeatIntervalSeconds;
} LogonConfMessageT;

/*
 * Structure: Logon Message
 */ 
typedef struct {
    char Username[16];
    char Password[32];
    int8_t ResetSeqNum;
} LogonMessageT;

/*
 * Structure: Message Header
 */ 
typedef struct {
    uint8_t ProtocolId;
    uint8_t Flags;
    uint16_t MessageLength;
    uint32_t SequenceNumber;
    uint32_t LastProcessedSeqNo;
    uint32_t Reserved;
    int64_t SendTimeEpochNanos;
    uint16_t BlockLength;
    uint16_t TemplateId;
    uint16_t SchemaId;
    uint16_t Version;
} MessageHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Coinbase
   Version: 1.4
   Date: Monday, July 27, 2020

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
