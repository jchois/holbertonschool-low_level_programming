#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int var
 * @y: int var
 * Return: the factorial
 */

int _pow_recursion(int x, int y)
{

	if (x == 1 || y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

