#include "main.h"
#include <unistd.h>
/**
 * _putchar - work exactly like putchar function
 * @c: The character to print
 * Return: 1 on success
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
