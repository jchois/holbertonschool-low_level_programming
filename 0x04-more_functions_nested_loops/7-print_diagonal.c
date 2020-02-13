#include "holberton.h"

/**
 * print_diagonal: print a ' '  n times
 * @n: number of times to print
 * Return: void
 */

void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (c != 0)
			{
				for (c = 0; c < i; c++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
