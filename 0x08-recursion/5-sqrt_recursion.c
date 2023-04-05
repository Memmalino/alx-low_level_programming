#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - func that returns natural square root a number
 * @n: the number be passed in as the argument of the function
 * Return:the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finding the natural number
 * @n: number one
 * @i: number two
 * Return: return the square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

