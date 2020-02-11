#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: is the absolute value
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (n * -1);

	return (n);
}
