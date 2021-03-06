#ifndef __MYUN2_GITHUB__NANO_STORED__BLOCK_H__
#define __MYUN2_GITHUB__NANO_STORED__BLOCK_H__

#define NS_BLOCK_MAX_LENGTH  (16)

typedef unsigned int ns_entry_t, ns_entry_data_t;

/* Block structure */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH];
} ns_record_t, ns_block_t, ns_basic_block_t;

typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 2];
} ns_double_block_t;

typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 3];
} ns_triple_block_t;

typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 4];
} ns_quad_block_t;

/* 8 Blocks (Medium Large) */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 8];
} ns_medium_large_block_t;

/* 16Blocks (Large) */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 16];
} ns_large_block_t;

/* 32Blocks (Double large) */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 32];
} ns_double_large_block_t, ns_dl_block_t;

/* 64Blocks (xLarge) */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 64];
} ns_xl_block_t, ns_xlarge_block_t;

/* 128Blocks (Very Large) */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 128];
} ns_vl_block_t, ns_very_large_block, ns_very_large_block_t;

/* 256Blocks (Ultra Very Large) */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 256];
} ns_uvl_block_t, ns_ultra_very_large_block;

/* 32KB Block */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 512];
} ns_32kb_block_t;

/* 64KB Block */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 1024];
} ns_64kb_block_t;

/* 128KB Block */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 2048];
} ns_128kb_block_t;

/* 256KB Block */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 4096];
} ns_256kb_block_t;

/* 512KB Block */
typedef struct
{
  ns_entry_data_t entries[NS_BLOCK_MAX_LENGTH * 8192];
} ns_512kb_block_t;

#endif//__MYUN2_GITHUB__NANO_STORED__BLOCK_H__
