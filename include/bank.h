#ifndef __MYUN2_GITHUB__NANO_STORED__BANK_H__
#define __MYUN2_GITHUB__NANO_STORED__BANK_H__

typedef enum {
  ns_persistent_memory,
  ns_persistent_file
} ns_bank_persistent_method;

typedef struct {
  ns_bank_persistent_method method;
} ns_bank_header_t, ns_bank_header;

typedef struct {
  ns_bank_header head;
} ns_bank_t;

#endif//__MYUN2_GITHUB__NANO_STORED__BANK_H__
