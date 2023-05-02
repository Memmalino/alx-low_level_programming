#include "lists.h"

/**
 * free_listint - function that frees the listint_t list
 * @head: the argument conatianing the next node to free
 * Return: the function returns void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
