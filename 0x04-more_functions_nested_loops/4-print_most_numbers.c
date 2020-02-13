#include "holberton.h"

/**
 * print_most_number - Print all numbers (0 - 9) except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
