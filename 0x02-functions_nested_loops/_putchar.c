#include <unistd.h>
 /**
  * _putchar - it writes out the character c to stdout
  * * @c: The character to be written out
  * Return: it return 1 on succes
  * On error, -1 is returned, error set appropriately.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
