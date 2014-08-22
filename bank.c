ns_block_description* ns_find_first_vacancied_block(ns_block_description* blocks, ns_type type)
{
  ns_block_description* block = blocks;
  for(; block->type != 0; block++)
    if ( block->type == type && block->entried != NS_BLOCK_MAX_LENGTH )
      return block;
  return NULL;
}

int ns_append(ns_bank_t* bank, ns_type type, const void* data, unsigned int size)
{
}