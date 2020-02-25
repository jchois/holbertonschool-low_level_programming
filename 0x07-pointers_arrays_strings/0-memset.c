#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: Memory space to be filled
 * @b: The character to fill the memory area
 * @n: Unsigned parameter
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
