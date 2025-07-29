#pragma once
// MESSAGE MY_CUSTOM_MESSAGE PACKING

#define MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE 200


typedef struct __mavlink_my_custom_message_t {
 float value; /*<  Some value*/
 uint8_t flag; /*<  Flag indicator*/
} mavlink_my_custom_message_t;

#define MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN 5
#define MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN 5
#define MAVLINK_MSG_ID_200_LEN 5
#define MAVLINK_MSG_ID_200_MIN_LEN 5

#define MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC 82
#define MAVLINK_MSG_ID_200_CRC 82



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MY_CUSTOM_MESSAGE { \
    200, \
    "MY_CUSTOM_MESSAGE", \
    2, \
    {  { "value", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_my_custom_message_t, value) }, \
         { "flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_my_custom_message_t, flag) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MY_CUSTOM_MESSAGE { \
    "MY_CUSTOM_MESSAGE", \
    2, \
    {  { "value", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_my_custom_message_t, value) }, \
         { "flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_my_custom_message_t, flag) }, \
         } \
}
#endif

/**
 * @brief Pack a my_custom_message message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  Some value
 * @param flag  Flag indicator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_my_custom_message_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float value, uint8_t flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN];
    _mav_put_float(buf, 0, value);
    _mav_put_uint8_t(buf, 4, flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#else
    mavlink_my_custom_message_t packet;
    packet.value = value;
    packet.flag = flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
}

/**
 * @brief Pack a my_custom_message message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  Some value
 * @param flag  Flag indicator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_my_custom_message_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float value, uint8_t flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN];
    _mav_put_float(buf, 0, value);
    _mav_put_uint8_t(buf, 4, flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#else
    mavlink_my_custom_message_t packet;
    packet.value = value;
    packet.flag = flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#endif
}

/**
 * @brief Pack a my_custom_message message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param value  Some value
 * @param flag  Flag indicator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_my_custom_message_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float value,uint8_t flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN];
    _mav_put_float(buf, 0, value);
    _mav_put_uint8_t(buf, 4, flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#else
    mavlink_my_custom_message_t packet;
    packet.value = value;
    packet.flag = flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
}

/**
 * @brief Encode a my_custom_message struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param my_custom_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_my_custom_message_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_my_custom_message_t* my_custom_message)
{
    return mavlink_msg_my_custom_message_pack(system_id, component_id, msg, my_custom_message->value, my_custom_message->flag);
}

/**
 * @brief Encode a my_custom_message struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param my_custom_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_my_custom_message_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_my_custom_message_t* my_custom_message)
{
    return mavlink_msg_my_custom_message_pack_chan(system_id, component_id, chan, msg, my_custom_message->value, my_custom_message->flag);
}

/**
 * @brief Encode a my_custom_message struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param my_custom_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_my_custom_message_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_my_custom_message_t* my_custom_message)
{
    return mavlink_msg_my_custom_message_pack_status(system_id, component_id, _status, msg,  my_custom_message->value, my_custom_message->flag);
}

/**
 * @brief Send a my_custom_message message
 * @param chan MAVLink channel to send the message
 *
 * @param value  Some value
 * @param flag  Flag indicator
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_my_custom_message_send(mavlink_channel_t chan, float value, uint8_t flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN];
    _mav_put_float(buf, 0, value);
    _mav_put_uint8_t(buf, 4, flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE, buf, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#else
    mavlink_my_custom_message_t packet;
    packet.value = value;
    packet.flag = flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE, (const char *)&packet, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#endif
}

/**
 * @brief Send a my_custom_message message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_my_custom_message_send_struct(mavlink_channel_t chan, const mavlink_my_custom_message_t* my_custom_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_my_custom_message_send(chan, my_custom_message->value, my_custom_message->flag);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE, (const char *)my_custom_message, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_my_custom_message_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float value, uint8_t flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, value);
    _mav_put_uint8_t(buf, 4, flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE, buf, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#else
    mavlink_my_custom_message_t *packet = (mavlink_my_custom_message_t *)msgbuf;
    packet->value = value;
    packet->flag = flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE, (const char *)packet, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#endif
}
#endif

#endif

// MESSAGE MY_CUSTOM_MESSAGE UNPACKING


/**
 * @brief Get field value from my_custom_message message
 *
 * @return  Some value
 */
static inline float mavlink_msg_my_custom_message_get_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field flag from my_custom_message message
 *
 * @return  Flag indicator
 */
static inline uint8_t mavlink_msg_my_custom_message_get_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a my_custom_message message into a struct
 *
 * @param msg The message to decode
 * @param my_custom_message C-struct to decode the message contents into
 */
static inline void mavlink_msg_my_custom_message_decode(const mavlink_message_t* msg, mavlink_my_custom_message_t* my_custom_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    my_custom_message->value = mavlink_msg_my_custom_message_get_value(msg);
    my_custom_message->flag = mavlink_msg_my_custom_message_get_flag(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN? msg->len : MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN;
        memset(my_custom_message, 0, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
    memcpy(my_custom_message, _MAV_PAYLOAD(msg), len);
#endif
}
