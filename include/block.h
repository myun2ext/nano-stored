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

/* 16Blocks (chunked) */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_LENGTH * 16];
} ns_large_block_t;

/* 32Blocks */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_LENGTH * 32];
} ns_ll_block_t;

/* 64Blocks (xLarge) */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_LENGTH * 64];
} ns_xl_block_t;

/* 128Blocks (Very Large) */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_LENGTH * 128];
} ns_vl_block_t;

/* 256Blocks (Ultra Very Large) */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_LENGTH * 256];
} ns_uvl_block_t;

#endif//__MYUN2_GITHUB__NANO_STORED__BLOCK_H__
