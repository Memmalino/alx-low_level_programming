#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file with the given name and writes the
 * given text content to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int a, len = 0, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		len++;
	}

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(a, text_content, len);
	if (w == -1 || w != len)
	{
		close(a);
		return (-1);
	}
	}

	close(a);
	return (1);
}
