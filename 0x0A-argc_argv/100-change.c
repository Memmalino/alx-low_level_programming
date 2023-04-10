#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - funct that prints minimum number of coin
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int num, i, result;
	int coins[] = {25, 10, 5, 2, 3};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}

