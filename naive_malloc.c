#include "malloc.h"

void *naive_malloc(size_t size)
{
  void *begin;
  begin = sbrk(0);
  brk(begin);
  begin = sbrk(size);
  return sbrk(0);
}