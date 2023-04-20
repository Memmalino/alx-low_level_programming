#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -funct that calculate the sum of it's parameters
 * @n: The represents the  number of paramters passed to the function.
 * @...: This ellipsis means that the function accepts a variable
 * number of arguments.
 *
 * Return: return 0  If n == 0 Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;


	va_start(ap, n); /*initializes a variable argument list*/


	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);


	va_end(ap);


	return (sum);
}
