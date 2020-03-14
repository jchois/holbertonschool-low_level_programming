#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	struct **p = {
		{"c", char},
		{"i", int},
		{"f", float},
		{"s", char *}
	};
}
