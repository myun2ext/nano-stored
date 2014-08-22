#include <stdio.h>
#include "nano_stored.h"
#include "types.h"
#include "bank.h"
#include "block.h"

int main()
{
  printf("%lu\n", sizeof(ns_block_t));
  printf("%lu\n", sizeof(ns_double_block_t));
  printf("%lu\n", sizeof(ns_triple_block_t));
  return 0;
}
