#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 97-100 on error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}

/**
 * close_fd - Closes a file descriptor
 * @fd: The file descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copies a file from one path to another
 * @from_path: The path of the source file
 * @to_path: The path of the destination file
 */

void copy_file(const char *from_path, const char *to_path)
{
	int fd_out, fd_in, n_read, n_written;
	char buffer[BUFFER_SIZE];

	fd_out = open(from_path, O_RDONLY);
	if (fd_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_path);
		exit(98);
	}
	fd_in = open(to_path, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_path);
		close_fd(fd_out);
		exit(99);
	}
	while ((n_read = read(fd_out, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_in, buffer, n_read);
		if (n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_path);
			close_fd(fd_out);
			close_fd(fd_in);
			exit(99);
		}
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_path);
		close_fd(fd_out);
		close_fd(fd_in);
		exit(98);
	}
	close_fd(fd_out);
	close_fd(fd_in);
}
