#include "main.h"

/**
 * _print_rev_recursion - a recursion that reverse a string
 * @s: The string to be reversed
 * Return: a void function
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}

}

