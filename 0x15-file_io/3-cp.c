#include "holberton.h"

/**
 * main - Entry point
 * @ac: Number or arguments
 * @av: Arguments
 * Return: 0 if failed
 */
void (int ac, char *av)
{
	int file_from, file_to, fd, fd;
	char *buff;

	if (ac != 3)
		dprint(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	file_to = open(av[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fp == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	fd = read(from, buff, 1024);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_new = write(to, buff, fd);
	if (fd_new == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	if (close(from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);

	if (close(to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);

	free(buff);
	return (0);
}

