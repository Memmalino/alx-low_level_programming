#include "main.h"

/**
 * _sqrt_recursion - function that prints natural square root a a number
 * @n: the int number
 * Return: if no square root return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int root = _sqrt_recursion(n / 2);

		if (n == root * root)
			return (root);
		else if (n < root * root)
		{
			return (root - 1);
		}
		else
			return (root + 1);
	}
}

