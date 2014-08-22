#ifndef __MYUN2_GITHUB__NANO_STORED__BANK_H__
#define __MYUN2_GITHUB__NANO_STORED__BANK_H__

typedef enum {
  memory,
  file
} ns_bank_persistent_method;

typedef struct {
  ns_bank_persistent_method method;
} ns_bank_header_t;

typedef struct {
} ns_bank_t;

#endif//__MYUN2_GITHUB__NANO_STORED__BANK_H__
