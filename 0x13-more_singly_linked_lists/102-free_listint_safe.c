#include "lists.h"

/**
 * free_listint_safe - funct that frees a listint_t list
 * @h: the head argument
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t  *tmp;
	int a;
	size_t count = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;
	return (count);
}
