#include "main.h"

/**
 * _puts_recursion - a recursion that reverse a string
 * @s: The string to be reversed
 * Return: a void function
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);

	_putchar('\n');
}

