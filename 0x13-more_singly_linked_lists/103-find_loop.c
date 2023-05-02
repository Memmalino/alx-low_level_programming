#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: A pointer to the head of the linked list
 *
 *Return: The address of the node, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node_1 = head;
	listint_t *node_2 = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (node_1 && node_2 && node_2->next)
	{
		node_2 = node_2->next->next;
		node_1 = node_1->next;
		if (node_2 == node_1)
		{
			node_1 = head;
			while (node_1 != node_2)
			{
				node_1 = node_1->next;
				node_2 = node_2->next;
			}
			return (node_2);
		}
	}

	return (NULL);
}

