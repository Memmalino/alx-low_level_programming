#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - funct that appends text to a file
 * @filename: the name of the file to append to
 * @text_content: the content to append
 * Return: 1 on succes, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content){
    
	int bytes_written, fd;
	
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
