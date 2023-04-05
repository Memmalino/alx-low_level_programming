#include "main.h"

/**
 * _pow_recursion - prints the power of two number
 * @x: one of the argument
 * @y: second argument
 * Return: pow of two number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

