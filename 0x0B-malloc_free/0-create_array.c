#include "holberton.h"

/**
 * create_array - create an array of chars
 * @size: size of int
 * @c: array
 * Return: 0 or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(c));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}


	p[i] = '\0';
	return (p);
}

