#include "holberton.h"
/**
 * print_alphabet - Print alphabet
 */
void print_alphabet(void)
{
	char abc;

	abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');
}
