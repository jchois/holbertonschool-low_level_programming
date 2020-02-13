#include "holberton.h"

/**
 * print_numbers - Print the numbers (0 to 9) followed by a new line
 * Return - void
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
