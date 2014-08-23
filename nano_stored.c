#include "block.h"
#include "bank.h"
#include "alocation.h"
#include <string.h>

void ns_append(ns_storage* st, void* data, unsigned long size)
{
}

void ns_append_int(ns_storage* st, int data, unsigned long size)
{
  ns_append(st, &data, size);
}

void ns_append_string(ns_storage* st, const char* s)
{
  ns_append(st, s, strlen(s));
}
