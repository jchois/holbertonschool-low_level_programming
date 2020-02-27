#include "holberton.h"

/**
 * counter - square root
 * @n: number
 * @i: int
 * Return: int
 */

int counter(int n, int i)
{
	if (n == (i * i))
	{
		return (i);
	}
	else if (n > (i * i))
	{
		return (counter(n, i + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 *_sqrt_recursion - return the natural square root
 *@n: int variable
 *Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (counter(n, 1));
	}

}

