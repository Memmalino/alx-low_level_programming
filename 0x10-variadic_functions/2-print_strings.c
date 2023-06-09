#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - funct that prints a  string followed by a new line
* @separator: The string to be printed between strings.
 * @n: This represents the  number of strings passed to the function.
 * @...: This is an ellipsis which indicates that the function accepts
 * a variable number of arguments.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int index;


	va_start(strings, n);


	for (index = 0; index < n; index++)
	{
		s = va_arg(strings, char *);


	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);


	if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}


		printf("\n");


		va_end(strings);
}

