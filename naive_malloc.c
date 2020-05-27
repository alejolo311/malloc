#include "malloc.h"
/**
 * naive_malloc - Program entry point
 * @size: the size
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
void *naive_malloc(size_t size)
{
	void *begin;

	begin = sbrk(0);
	brk(begin);
	begin = sbrk(size);
	return (sbrk(0));
}
