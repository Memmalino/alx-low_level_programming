#include "lists.h"
#include <stdio.h>

/**
 * len - This function will help to count the
 * number of unique nodes in the looped listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The function returns thenumber of nodes in
 * the listint_t linked list
 */

size_t len(const listint_t *head)
{
	const listint_t *i, *a;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	i = head->next;
	a = (head->next)->next;

	while (a)
	{
		if (i == a)
		{
			i = head;
			while (i != a)
			{
				nodes++;
				i = i->next;
				a = a->next;
			}

			i = i->next;
			while (i != a)
			{
				nodes++;
				i = i->next;
			}

			return (nodes);
		}

		i = i->next;
		a = (a->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe -function that  prints all the data in the
 * listint_t list.
 * @head: A pointer to the head of the listint_t linked  list.
 *
 * Return: The function returns the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
