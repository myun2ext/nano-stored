#ifndef __MYUN2_GITHUB__NANO_STORED__BANK_H__
#define __MYUN2_GITHUB__NANO_STORED__BANK_H__

typedef enum {
  ns_persistent_memory,
  ns_persistent_file
} ns_bank_persistent_method;

typedef struct {
  ns_bank_persistent_method method;
  unsigned int reserved_1;
  unsigned int block_size;
  unsigned int reserved_3;
  unsigned int reserved_4;
  unsigned int reserved_5;
  unsigned int reserved_6;
  unsigned int reserved_7;
} ns_bank_header_t, ns_bank_header;

typedef struct {
  unsigned char type;
  unsigned char entried;
  unsigned short reserved_1;
  unsigned int reserved_2;
} ns_block_header, ns_block_description;

/* Bank structure */
typedef struct {
  ns_bank_header head;
  ns_block_description blocks[4];
} ns_minimum_bank_t;

typedef struct {
  ns_bank_header head;
  ns_block_description blocks[16];
} ns_mini_bank_t;

typedef struct {
  ns_bank_header head;
  ns_block_description blocks[128];
} ns_small_bank_t;

typedef struct {
  ns_bank_header head;
  ns_block_description blocks[1024];
} ns_bank_t;

#endif//__MYUN2_GITHUB__NANO_STORED__BANK_H__
