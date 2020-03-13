#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * followed by a new line
 * @separator: string
 * @Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(list, int);
		printf("%d", x);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

