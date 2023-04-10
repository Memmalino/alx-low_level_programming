#include "main.h"
#include <stdio.h>

/**
 * main - funct that prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success);
 */

int main(int argc, char *argv[])
{
	(void) argv; /*don't consider argv*/

	printf("%d\n", argc - 1);
	return (0);
}

