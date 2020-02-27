#include "holberton.h"

/**
 * factorial - return the factorial of a given number
 * @n: factorial number
 * Return: factorial number
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}

