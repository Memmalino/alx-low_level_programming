#include "lists.h"

/**
 * pop_listint - function that deletes head node of listint_t
 * @head: the head node to be deleted
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
