#include "lists.h"

/**
 * delete_nodeint_at_index - funct that deletes a node
 * @head: pointer to the node to be deleted
 * @index: index of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;

	listint_t *current_node = NULL;

	unsigned int a = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		a++;
	}


	current_node = tmp->next;
	tmp->next = current_node->next;
	free(current_node);
	return (1);
}
