nano-stored
===========

**Nano-Storage Engine.**

## Entry / Record

Entry is single Item of stored.

Basicaly Entry as Size is 4bytes (32bit) with integer (C like unsigned long).

## Block

**Block** in included entries of max as `16`.

## Chunked blocks

Chunked blocks.

## Bank

Bank is chuncked blocks. in max of `2048` blocks.

if over of used at `2048` blocks, we choose and use other bank.

**Bank** in included blocks of max `2048` blocks (as fully used entries max of 65535 entries).

## Mass bank
