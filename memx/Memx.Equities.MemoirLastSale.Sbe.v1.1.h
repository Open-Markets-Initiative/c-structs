/*******************************************************************************
 * C Structs For Memx Equities Sbe MemoirLastSale 1.1 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

/*
 * Corrected Sale Condition 1 Values
 */ 
#define ENUM_CORRECTED_SALE_CONDITION_1_REGULAR '@'

/*
 * Corrected Sale Condition 2 Values
 */ 
#define ENUM_CORRECTED_SALE_CONDITION_2_INTERMARKET_SWEEP 'F'
#define ENUM_CORRECTED_SALE_CONDITION_2_NOT_APPLICABLE ' '

/*
 * Corrected Sale Condition 3 Values
 */ 
#define ENUM_CORRECTED_SALE_CONDITION_3_FORM_T 'T'
#define ENUM_CORRECTED_SALE_CONDITION_3_NOT_APPLICABLE ' '

/*
 * Corrected Sale Condition 4 Values
 */ 
#define ENUM_CORRECTED_SALE_CONDITION_4_PRICE_VARIATION 'H'
#define ENUM_CORRECTED_SALE_CONDITION_4_ODD_LOT 'I'
#define ENUM_CORRECTED_SALE_CONDITION_4_CROSS 'X'
#define ENUM_CORRECTED_SALE_CONDITION_4_NOT_APPLICABLE ' '

/*
 * Is Test Symbol Values
 */ 
#define ENUM_IS_TEST_SYMBOL_FALSE 0
#define ENUM_IS_TEST_SYMBOL_TRUE 1

/*
 * Message Type Values
 */ 
#define ENUM_MESSAGE_TYPE_HEARTBEAT_MESSAGE 0
#define ENUM_MESSAGE_TYPE_SESSION_SHUTDOWN_MESSAGE 1
#define ENUM_MESSAGE_TYPE_SEQUENCED_MESSAGE 2

/*
 * Original Sale Condition 1 Values
 */ 
#define ENUM_ORIGINAL_SALE_CONDITION_1_REGULAR '@'

/*
 * Original Sale Condition 2 Values
 */ 
#define ENUM_ORIGINAL_SALE_CONDITION_2_INTERMARKET_SWEEP 'F'
#define ENUM_ORIGINAL_SALE_CONDITION_2_NOT_APPLICABLE ' '

/*
 * Original Sale Condition 3 Values
 */ 
#define ENUM_ORIGINAL_SALE_CONDITION_3_FORM_T 'T'
#define ENUM_ORIGINAL_SALE_CONDITION_3_NOT_APPLICABLE ' '

/*
 * Original Sale Condition 4 Values
 */ 
#define ENUM_ORIGINAL_SALE_CONDITION_4_PRICE_VARIATION 'H'
#define ENUM_ORIGINAL_SALE_CONDITION_4_ODD_LOT 'I'
#define ENUM_ORIGINAL_SALE_CONDITION_4_CROSS 'X'
#define ENUM_ORIGINAL_SALE_CONDITION_4_NOT_APPLICABLE ' '

/*
 * Sale Condition 1 Values
 */ 
#define ENUM_SALE_CONDITION_1_REGULAR '@'

/*
 * Sale Condition 2 Values
 */ 
#define ENUM_SALE_CONDITION_2_INTERMARKET_SWEEP 'F'
#define ENUM_SALE_CONDITION_2_NOT_APPLICABLE ' '

/*
 * Sale Condition 3 Values
 */ 
#define ENUM_SALE_CONDITION_3_FORM_T 'T'
#define ENUM_SALE_CONDITION_3_NOT_APPLICABLE ' '

/*
 * Sale Condition 4 Values
 */ 
#define ENUM_SALE_CONDITION_4_PRICE_VARIATION 'H'
#define ENUM_SALE_CONDITION_4_ODD_LOT 'I'
#define ENUM_SALE_CONDITION_4_CROSS 'X'
#define ENUM_SALE_CONDITION_4_NOT_APPLICABLE ' '

/*
 * Security Trading Status Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_HALTED 'H'
#define ENUM_SECURITY_TRADING_STATUS_PAUSED 'P'
#define ENUM_SECURITY_TRADING_STATUS_QUOTING 'Q'
#define ENUM_SECURITY_TRADING_STATUS_TRADING 'T'

/*
 * Security Trading Status Reason Values
 */ 
#define ENUM_SECURITY_TRADING_STATUS_REASON_NONE 'X'
#define ENUM_SECURITY_TRADING_STATUS_REASON_REGULATORY 'R'
#define ENUM_SECURITY_TRADING_STATUS_REASON_ADMINISTRATIVE 'A'

/*
 * Short Sale Restriction Values
 */ 
#define ENUM_SHORT_SALE_RESTRICTION_FALSE 0
#define ENUM_SHORT_SALE_RESTRICTION_TRUE 1

/*
 * Template Id Values
 */ 
#define ENUM_TEMPLATE_ID_INSTRUMENT_DIRECTORY_MESSAGE 1
#define ENUM_TEMPLATE_ID_REG_SHO_RESTRICTION_MESSAGE 2
#define ENUM_TEMPLATE_ID_SECURITY_TRADING_STATUS_MESSAGE 3
#define ENUM_TEMPLATE_ID_TRADING_SESSION_STATUS_MESSAGE 5
#define ENUM_TEMPLATE_ID_TRADE_REPORT_MESSAGE 10
#define ENUM_TEMPLATE_ID_TRADE_CANCEL_MESSAGE 11
#define ENUM_TEMPLATE_ID_TRADE_CORRECT_MESSAGE 12

/*
 * Trading Session Values
 */ 
#define ENUM_TRADING_SESSION_OPENING '1'
#define ENUM_TRADING_SESSION_TRADING '2'
#define ENUM_TRADING_SESSION_POST_TRADING '3'
#define ENUM_TRADING_SESSION_CLOSED '4'


/*******************************************************************************
 * Structs
 *******************************************************************************/

#pragma pack(push, 1)

/*
 * Structure: Trade Correct Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t TradeId;
    uint32_t OriginalTradeQty;
    int64_t OriginalTradePrice;
    char OriginalSaleCondition1;
    char OriginalSaleCondition2;
    char OriginalSaleCondition3;
    char OriginalSaleCondition4;
    uint32_t CorrectedTradeQty;
    int64_t CorrectedTradePrice;
    char CorrectedSaleCondition1;
    char CorrectedSaleCondition2;
    char CorrectedSaleCondition3;
    char CorrectedSaleCondition4;
} TradeCorrectMessageT;

/*
 * Structure: Trade Cancel Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t TradeId;
    uint32_t TradeQty;
    int64_t LastPrice;
    char SaleCondition1;
    char SaleCondition2;
    char SaleCondition3;
    char SaleCondition4;
} TradeCancelMessageT;

/*
 * Structure: Trade Report Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint64_t TradeId;
    uint32_t TradeQty;
    int64_t TradePrice;
    char SaleCondition1;
    char SaleCondition2;
    char SaleCondition3;
    char SaleCondition4;
} TradeReportMessageT;

/*
 * Structure: Trading Session Status Message
 */ 
typedef struct {
    uint64_t Timestamp;
    char TradingSession;
} TradingSessionStatusMessageT;

/*
 * Structure: Security Trading Status Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    char SecurityTradingStatus;
    char SecurityTradingStatusReason;
} SecurityTradingStatusMessageT;

/*
 * Structure: Reg Sho Restriction Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    uint8_t ShortSaleRestriction;
} RegShoRestrictionMessageT;

/*
 * Structure: Instrument Directory Message
 */ 
typedef struct {
    uint64_t Timestamp;
    uint16_t SecurityId;
    char Symbol[6];
    char SymbolSfx[6];
    uint32_t RoundLot;
    uint8_t IsTestSymbol;
    int64_t Mpv;
} InstrumentDirectoryMessageT;

/*
 * Structure: Sbe Header
 */ 
typedef struct {
    uint16_t BlockLength;
    uint8_t TemplateId;
    uint8_t SchemaId;
    uint16_t Version;
} SbeHeaderT;

/*
 * Structure: Sbe Message
 */ 
typedef struct {
    SbeHeaderT SbeHeader;
} SbeMessageT;

/*
 * Structure: Message
 */ 
typedef struct {
    uint16_t MessageLength;
} MessageT;

/*
 * Structure: Sequenced Message
 */ 
typedef struct {
    uint16_t MessageCount;
} SequencedMessageT;

/*
 * Structure: Common Header
 */ 
typedef struct {
    uint8_t MessageType;
    uint8_t HeaderLength;
    uint64_t SessionId;
    uint64_t SequenceNumber;
} CommonHeaderT;

/*
 * Structure: Packet
 */ 
typedef struct {
    CommonHeaderT CommonHeader;
} PacketT;

#pragma pack(pop)

/*******************************************************************************

Protocol:
   Organization: Members Exchange
   Version: 1.1
   Date: Monday, July 27, 2020
   Specification: MEMOIR Last Sale Feed-v1_1.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
