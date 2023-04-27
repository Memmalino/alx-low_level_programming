#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -funct that add new node at the beginning of a linked list
 * @head: A double pointer to the list_t list (argument 1)
 * @str:  new string to add in the node (argument 2)
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int num = 0;

	while (str[num])
		num++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->num = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
