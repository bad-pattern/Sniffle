/*
 * Written by Sultan Qasim Khan
 * Copyright (c) 2018, NCC Group plc
 * Released as open source under GPLv3
 */

#ifndef MESSENGER_H
#define MESSENGER_H

// 300 byte message length limit
#define MESSAGE_MAX 300

// message types sent by sniffer
#define MESSAGE_BLEFRAME 0x10
#define MESSAGE_DEBUG 0x11

int messenger_init();
int messenger_recv(uint8_t *dst_buf);
void messenger_send(const uint8_t *src_buf, unsigned src_len);

#endif
