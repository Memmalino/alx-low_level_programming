#include "lists.h"

/**
 * print_listint_safe -This function prints all the data in the
 * listint_t list.
 * @head: Argument that points to the head of the listint_t linked  list.
 *
 * Return: The function returns the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			break;
		}
	}
	if (!slow || !fast || !fast->next)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
	}
	if (!slow || !fast || !fast->next)
	{
		exit(98);
	}
	return (count);
}
