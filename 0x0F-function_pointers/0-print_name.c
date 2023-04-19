#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  Function that prints a name using pointer to function
 * @name: The first argument pointer to a char
 * @f: pointer to function
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}
