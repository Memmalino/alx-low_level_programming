#include "3-calc.h"


	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);


/**
 * op_add - function that calculate sum of two numbers
 * @a: The first argument number.
 * @b: The second argument number.
 * Return: The sum of a and b.
 */

	int op_add(int a, int b)
	{
		return (a + b);
	}
/**
 * op_sub - functions that calculate different btw two numbers.
 * @a: the first argument.
 * @b: the second argument.
 * Return: The difference of a and b.
 */
	int op_sub(int a, int b)
	{
		return (a - b);
	}
/**
 * op_mul - calculate the product of two numbers
 * @a: The first number.
 * @b: The second number.
 * Return: The product of a and b.
 */

	int op_mul(int a, int b)
	{
		return (a * b);
	}
/**
 * op_div - funct that divides two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The quotient of a and b.
 */

	int op_div(int a, int b)
	{
		return (a / b);
	}
/**
 * op_mod -  function that calculate the modular of two numbers
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of a by b.
 */

	int op_mod(int a, int b)
	{
		return (a % b);
	}

