#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n > 0)
	{
		va_list valist;
		unsigned int sum, i;

		sum = 0;

		va_start(valist, n);

		for (i = 0; i < n; i++)
			sum += va_arg(valist, int);

		va_end(valist);

		return (sum);
	}
	return (0);
}

