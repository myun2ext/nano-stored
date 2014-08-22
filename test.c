#include <stdio.h>
#include "nano_stored.h"
#include "types.h"
#include "bank.h"
#include "block.h"

int main()
{
  printf("Single Block size:   %lu\n", sizeof(ns_block_t));
  printf("Double Block size:   %lu\n", sizeof(ns_double_block_t));
  printf("Triple Block size:   %lu\n", sizeof(ns_triple_block_t));
  printf("Quad Block size:     %lu\n", sizeof(ns_quad_block_t));

  printf("Medium large block:  %lu\n", sizeof(ns_medium_large_block_t));
  printf("Large Block size:    %lu\n", sizeof(ns_large_block_t));
  printf("LL Block size:       %lu\n", sizeof(ns_ll_block_t));
  printf("XLarge Block size:   %lu\n", sizeof(ns_xl_block_t));
  printf("Very Large Block:    %lu\n", sizeof(ns_vl_block_t));
  printf("Ultra Very Large Block: %lu\n", sizeof(ns_uvl_block_t));
  return 0;
}
