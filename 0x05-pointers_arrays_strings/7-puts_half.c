#include "holberton.h"

/**
 * puts_half - prints every other character of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i + 1 % 2 != 0)
	{
		i = (i - 1) / 2;
	}
	else
	{
		i = i / 2;
	}

	i++;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}


	_putchar(10);
}

