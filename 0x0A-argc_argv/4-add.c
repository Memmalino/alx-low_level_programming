#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - func that check a string if it contains digit
 * @str: array str
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int incre;

	incre = 0;
	while (incre < strlen(str))
	{
		if (!isdigit(str[incre]))
		{
			return (0);
		}
		incre++;
	}
	return (1);
}

/**
 * main - function that prints the name of a program
 * @argc: Count parameter
 * @argv: The argument
 * Return: Always 0 (Success);
 */

int main(int argc, char *argv[])
{
	int count;
	int str;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str = atoi(argv[count]);
			sum += str;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

