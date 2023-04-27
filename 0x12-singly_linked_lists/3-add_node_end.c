#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -fucntion that add new node at the end of a linked list
 * @head: an argument which takes in double pointer to the list
 * @str:  the content of the new node which is a string data type
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int num = 0;

	while (str[num])
		num++;

	new = malloc(sizeof(list_t)); /*allocating memmory space */
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->num = num;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
