#ifndef __MYUN2_GITHUB__NANO_STORED_H__
#define __MYUN2_GITHUB__NANO_STORED_H__

#define NS_BLOCK_LENGTH  (16)

typedef unsigned long ns_entry_data_t;

/* Entry Type structure */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_LENGTH];
} ns_record_t, ns_entry_t;

#endif//__MYUN2_GITHUB__NANO_STORED_H__
