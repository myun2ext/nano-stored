#include <stdio.h>
#include <string.h>
#include "allocation.h"

int main()
{
  ns_memory_handle h = ns_alloc(80);
  strcpy(h->ptr, "abc");
  h = ns_realloc(h, 800);
  printf("%s\n", h->ptr);
  ns_free(h);
  return 0;
}
