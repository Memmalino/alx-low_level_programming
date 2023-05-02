#include "lists.h"

/**
 * insert_nodeint_at_index - Funct that inserts a new mode at nth position
 * @head: pointer to the first data in the linked list
 * @idx: index of the list to add to
 * @n: the last parameter integer
 * Return: address of the new node if successful else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *tmp;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
	}

	tmp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);
	tmp = tmp->next;
	}

	if (tmp == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = tmp->next;
	tmp->next = ptr;

	return (ptr);
}
