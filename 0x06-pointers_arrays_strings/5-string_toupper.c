#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @x: string to change
 * Return: x
 */

char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = x[i] - 32;
	}
	return (x);
}

