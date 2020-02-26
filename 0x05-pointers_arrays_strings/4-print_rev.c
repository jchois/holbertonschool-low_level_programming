#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		j = s[i];
		_putchar(j);
	}

	_putchar(10);
}

