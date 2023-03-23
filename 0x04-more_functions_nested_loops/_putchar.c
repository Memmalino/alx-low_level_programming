#include <unistd.h>

/**
 * _putchar - a function that print c
 * @c: The character to be printed
 *
 * Return: it returns 1 on success else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

