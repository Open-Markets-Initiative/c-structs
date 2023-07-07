/*******************************************************************************
 * C Structs For Nyse Options Pillar StreamProtocol 1.6 Binary Model
 *******************************************************************************/

/*******************************************************************************
 * Enum Values
 *******************************************************************************/

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
 * Status Values
 */ 
#define ENUM_STATUS_REQUEST_PROCESSED_SUCCESSFULLY 0
#define ENUM_STATUS_NOT_LOGGED_IN 18


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
 * Structure: Sequenced Message
 */ 
typedef struct {
    SeqMsgHeaderT SeqMsgHeader;
} SequencedMessageT;

/*
 * Structure: Stream Id
 */ 
typedef struct {
    uint32_t Sess;
    uint32_t User;
} StreamIdT;

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
   Version: 1.6
   Date: Thursday, September 26, 2019
   Specification: NYSE_Pillar_Stream_Protocol_Specification.pdf

Source:
   Generator: 1.0.0.0
   Compiler: 2.0
   License: MIT No Attribution License
   Authors: Omi Developers

This file was generated by the Open Markets Initiative (Omi).

Information relating to Omi:
https://github.com/Open-Markets-Initiative/Directory

*******************************************************************************/
