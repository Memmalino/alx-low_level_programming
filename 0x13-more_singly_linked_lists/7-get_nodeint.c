#include "lists.h"

/**
 * get_nodeint_at_index - funct that returns the nth node of a listint_t
 * @head: the head listint, also the funct argument
 * @index: an integer for the index to be returned
 * Return: if the node does not exist return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
