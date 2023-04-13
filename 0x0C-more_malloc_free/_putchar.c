#include <unistd.h>
#include "main.h"

/**
 * _putchar - a func that prints to the stdout
 * @c: The character to be printed
 * Return: return 1 on succes -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
