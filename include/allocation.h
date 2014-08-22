#ifndef __MYUN2_GITHUB__NANO_STORED__ALLOCATION_H__
#define __MYUN2_GITHUB__NANO_STORED__ALLOCATION_H__

typedef struct ns_memory_ptr, *ns_memory_handle;

ns_memory_handle ns_alloc(unsigned long size);
void ns_realloc(ns_memory_handle h, unsigned long size);
void ns_free(ns_memory_handle h);

#endif//__MYUN2_GITHUB__NANO_STORED__ALLOCATION_H__
