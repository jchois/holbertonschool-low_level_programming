#include "holberton.h"

/**
 * create_file - create a new file
 * @filename: name of the file created
 * @text_content: Null
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	mode_t mode = O_CREAT | O_WRONLY | O_TRUNC;
	mode_t chmod = S_IRUSR | S_IWUSR;
	ssize_t w;

	fd = open(filename, mode, chmod);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

