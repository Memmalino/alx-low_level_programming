#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -funct that calculate the sum of it's parameters
 * @n: One of the parameters to the funciton
 * @...: unlimited number of arguments
 * Return: return 0  If n == 0 Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a = 0, total = 0;


	va_start(ap, n); /*initializes a variable argument list*/


	for (; a < n; a++)
		total += va_arg(ap, int);


	va_end(ap);


	return (total);
}
