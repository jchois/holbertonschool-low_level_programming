#include "variadic_functions.h"


/**
 * print_all - prints anything
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	char *ptr;

	Dtype prt[] = {
		{"c", print_s},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
	};

	va_star(list, format);

	i = 0;
	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if(ptr[j].type[0] == format[i])
			{
				ptr[j].f(list);
			}
			j++;
		}
		i++;
	}

}

/**
 * print_c - print char
 * @c: char
 * Return: Nothing
 */
void print_c(va_list c)
{

	printf("%s", va_arg(c, char));
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
 * print_s - s
 * @s: string
 * Return: nothing
 */
void print_s(va_list s)
{
	char *x;

	x = va_arg(x, char *);
	if (x == NULL)
		printf("(nil)");

	printf("%s", x);
}

