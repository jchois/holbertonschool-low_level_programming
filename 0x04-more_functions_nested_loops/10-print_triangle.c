#include "holberton.h"
/**
 * print_triangle - Print Square
 * @size: size of the square
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < (size - a) - 1; b++)
			{
				_putchar(' ');
			}
			for (c = 0; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
