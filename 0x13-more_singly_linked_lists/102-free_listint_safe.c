#include "lists.h"

/**
 * free_listint_safe - funct that frees a listint_t list
 * @h: the head argument
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t cont = 0;

	if (h == NULL || *h == NULL)
		return (count);
	current = *h;
	while (current != NULL)
	{
		count++;
		if (current->next >= current)
		{
			*h = NULL;
			return (count);
		}
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*h = NULL;
	return (count);
}
