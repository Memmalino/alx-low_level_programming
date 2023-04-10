#include <stdio.h>
#include "main.h"
/**
 * main - funct that prints the name of the program
 * @argc: number of arguments
 * @argv: aray of arguments
 * Return: Always 0 if sucessful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

