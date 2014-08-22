#include <stdio.h>
#include "nano_stored.h"
#include "types.h"
#include "bank.h"
#include "block.h"

int main()
{
  printf("%lu\n", sizeof(ns_record_t));
  return 0;
}
