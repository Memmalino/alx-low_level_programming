#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Funct that prints number of elements in a linked list
 * @h: a pointer to the link list also parameters to the function
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
	n++;
	h = h->next;
	}
	return (n);
}
