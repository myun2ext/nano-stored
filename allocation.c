#include <memory.h>
#include <stdlib.h>
#include "allocation.h"

ns_memory_handle ns_alloc(unsigned long size)
{
  ns_memory_handle p = (ns_memory_handle) calloc(1, sizeof(ns_memory_ptr));
  p->ptr = calloc(size, 1);
  p->size = size;
  return p;
}

ns_memory_handle ns_realloc(ns_memory_handle h, unsigned long size)
{
  h->ptr = realloc(h->ptr, size);
  h->size = size;
  return h;
}

void ns_free(ns_memory_handle p)
{
  free(p->ptr);
  free(p);
}