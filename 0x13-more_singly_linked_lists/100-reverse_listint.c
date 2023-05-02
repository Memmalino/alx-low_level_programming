#include "lists.h"

/**
 * reverse_listint - funct that reverses a listint_t linked list
 * @head: pointer to pointer that points to the first node
 * Return: a pointer to the first dnode of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
