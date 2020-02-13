#include "holberton.h"

/**
 * more_numbers -ssdam
 * Return: void
 */

void more_numbers(void)
{
	int i, num;

	i = 0;

	while (i < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
