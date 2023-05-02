#include "lists.h"

/**
 * free_listint2 - funct that free a listint_t list
 * @head: the nodes to be free and set to null
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
