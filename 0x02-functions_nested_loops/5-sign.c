#include "holberton.h"
/**
 * print_sign - depending the n print a sign
 * @n: is the number to compare.
 * Return: 1, 0 or -1 depending the condition.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
