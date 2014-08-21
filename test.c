#include <stdio.h>
#include "nano_stored.h"
#include "types.h"

int main()
{
  printf("%d\n", sizeof(ns_record_t));
  return 0;
}