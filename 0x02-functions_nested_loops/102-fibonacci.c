#include <stdio.h>

/**
 * main - main function
 * Return: zero always
 */

int main(void)
{
int n = 50;
int fib[];
int i;

fib[0] = 1;
fib[1] = 2;
printf("%d, %d, ", fib[0], fib[1]);
for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
printf("%d", fib[i]);
if (i <  n - 1)
{
printf(", ");
}
else
{
printf("\n");
}
}
return (0);
}
