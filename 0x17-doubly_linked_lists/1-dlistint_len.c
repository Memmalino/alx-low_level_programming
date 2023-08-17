#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * owned by asofeyeje
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
		h = h->next;
	return (size);
}
