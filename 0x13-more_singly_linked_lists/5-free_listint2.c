#include "lists.h"

/**
 * free_listint2 - funct that free a listint_t list
 * @head: the nodes to be free and set to null
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *current;

	if (head == NULL)
	{
		return;
	}
	while (*head == NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
