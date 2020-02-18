#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;
	char l;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			l = str[i];
			_putchar(l);
		}
	}

	_putchar(10);
}

