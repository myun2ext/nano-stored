#include <stdio.h>
#include "nano_stored.h"
#include "types.h"
#include "bank.h"
#include "block.h"

int main()
{
  printf("Single Entry size:        %lu\n", sizeof(ns_entry_t));
  printf("ns_data_type size:        %lu\n", sizeof(ns_block_header));
  printf("------------------------------\n");
  printf("Single Block size:        %lu\n", sizeof(ns_block_t));
  printf("Double Block size:        %lu\n", sizeof(ns_double_block_t));
  printf("Triple Block size:        %lu\n", sizeof(ns_triple_block_t));
  printf("Quad Block size:          %lu\n", sizeof(ns_quad_block_t));
  printf("------------------------------\n");
  printf("Medium large block:       %lu\n", sizeof(ns_medium_large_block_t));
  printf("Large Block size:         %lu\n", sizeof(ns_large_block_t));
  printf("Double Large Block size:  %lu\n", sizeof(ns_double_large_block_t));
  printf("XLarge Block size:        %lu\n", sizeof(ns_xl_block_t));
  printf("Very Large Block:         %lu\n", sizeof(ns_vl_block_t));
  printf("Ultra Very Large Block:   %lu\n", sizeof(ns_uvl_block_t));
  printf("---------------------------------\n");
  printf("32KB Block size:          %lu\n", sizeof(ns_32kb_block_t));
  printf("64KB Block size:          %lu\n", sizeof(ns_64kb_block_t));
  printf("128KB Block size:         %lu\n", sizeof(ns_128kb_block_t));
  printf("256KB Block size:         %lu\n", sizeof(ns_256kb_block_t));
  printf("512KB Block size:         %lu\n", sizeof(ns_512kb_block_t));
  return 0;
}
