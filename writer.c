#include <stdio.h>
#include <memory.h>
#include "bank.h"

int ns_memory_write(void* handle, const void* data, unsigned long size)
{
  return (int)memcpy(handle, data, size);
}
int ns_file_write(FILE* fp, const void* data, unsigned long size)
{
  return fwrite(data, size, 1, fp); 
}
int ns_write(ns_bank_persistent_method method, void* handle, const void* data, unsigned long size)
{
  switch(method)
  {
    case ns_persistent_memory:
      return ns_memory_write(handle, data, size);
    case ns_persistent_file:
      return ns_file_write((FILE*)handle, data, size);
  }
  return 0;
}
