#include "lists.h"

/**
 * add_nodeint_end - Adds a new node containing an integer value
 *  to the end of a singly linked list.
 *
 * @head: Double pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
	return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
	*head = new_node;
}
else
{
listint_t *last = *head;
while (last->next != NULL)
{
	last = last->next;
}
last->next = new_node;
}
return (new_node);
}
