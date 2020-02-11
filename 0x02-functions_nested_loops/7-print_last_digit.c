#include "holberton.h"
/**
 * print_last_digit - Print the last number
 * @dig: the variable with the last number
 * Return: variable
 */
int print_last_digit(int dig)
{
	int n;

	n = (dig % 10);

	if (n < 0)
		n = n * -1;

	_putchar(n + '0');
	return (n);
}
