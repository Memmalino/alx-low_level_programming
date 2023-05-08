#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print. If the file
 * could not be opened or read, or if filename is NULL, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread, nwritten;
	char *buffer = NULL;
	FILE *file;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);
	nread = fread(buffer, 1, letters, file);
	if (nread == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[nread] = '\0';
	nwritten = write(STDOUT_FILENO, buffer, nread);
	if (nwritten != nread)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (nwritten);
}
