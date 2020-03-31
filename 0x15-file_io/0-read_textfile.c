#include "holberton.h"

/**
 * read_textfile - read a text file and prints
 * it to the POSIX standard output.
 * @filename: asd
 * @letters: sadas
 * Return: asd
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char *b = NULL;
	ssize_t num;
	ssize_t w;

	b = malloc(sizeof(char) * letters);
	if (!b)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num = read(fd, b, letters);
	if (num == -1)
		return (0);

	w = write(STDOUT_FILENO, b, num);
	if (w == -1)
		return (0);

	close(fd);

	return (w);
}

