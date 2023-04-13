#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Funct that  allocate memory for array
 * @nmemb: number of elements
 * @size: size of byte to allocate
 * Return: pointer to the alocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}

