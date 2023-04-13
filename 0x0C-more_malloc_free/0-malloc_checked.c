#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that  allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocate memory
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

