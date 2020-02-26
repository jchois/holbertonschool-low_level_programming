#include "holberton.h"

/**
 * print_line: print a '_' n times
 * @n: number of times to print
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (n > 0 && i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
