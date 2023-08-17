#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * owned by asofeyeje
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
