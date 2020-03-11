#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: char
 * @f: parameter
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
