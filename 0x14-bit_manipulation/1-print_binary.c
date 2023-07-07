#include "main.h"

/**
 * print_binary - funct that prints binary rep of a number
 * @n: an argument to the function
 * Return: void
 */

void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int bit_printed = 0;

while (mask != 0)
{
if ((n & mask) != 0)
{
_putchar('1');
bit_printed = 1;
}
else
{
if (bit_printed)
{
_putchar('0');
}
}
mask >>= 1;
}
if (!bit_printed)
{
_putchar('0');
}
}
