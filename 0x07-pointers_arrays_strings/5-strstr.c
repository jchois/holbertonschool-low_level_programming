#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: char variable
 * @needle: char variable
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	register char *a, *b;

	b = needle;

	if (*b == 0)
	{
		return (haystack);
	}
	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}

		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return (haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}

	return (NULL);
}

