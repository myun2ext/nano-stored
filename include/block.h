#ifndef __MYUN2_GITHUB__NANO_STORED__BLOCK_H__
#define __MYUN2_GITHUB__NANO_STORED__BLOCK_H__

#define NS_BLOCK_LENGTH  (16)

typedef unsigned long ns_entry_data_t;

/* Block structure */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_LENGTH];
} ns_record_t, ns_block_t, ns_basic_block_t;

typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_LENGTH * 2];
} ns_double_block_t;

typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_LENGTH * 3];
} ns_triple_block_t;

#endif//__MYUN2_GITHUB__NANO_STORED__BLOCK_H__
