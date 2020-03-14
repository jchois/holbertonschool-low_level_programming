#include "variadic_functions.h"

/**
 * print_c - print char
 * @c: char
 * Return: Nothing
 */
void print_c(va_list c)
{

	printf("%c", va_arg(c, int));
}

/**
 * print_i - print int
 * @i: int
 * Return: Nothing
 */
void print_i(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 *  print_f - print float
 * @f: float
 * Return: Nothing
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s - print string
 * @s: string
 * Return: nothing
 */
void print_s(va_list s)
{
	char *x;

	x = va_arg(s, char *);
	if (x == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", x);
}

/**
 * print_all - prints anything
 * @format - format
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list list;
	char *sep = "";

	Dtype ptr[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(list, format);

	i = 0;
	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (ptr[j].type[0] == format[i])
			{
				printf("%s", sep);
				ptr[j].f(list);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

