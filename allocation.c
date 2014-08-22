#include <memory.h>

typedef struct
{
  void* ptr;
  unsigned long size;
} ns_memory_ptr, *ns_memory_handle;

ns_memory_handle ns_alloc(unsigned long size)
{
  ns_memory_ptr p;
  p.ptr = malloc(size);
  p.size = size;
  return p;
}