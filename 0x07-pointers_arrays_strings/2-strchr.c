#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: char variable
 * @c: char variable
 * Return: string
 */

char *_strchr(char *s, char c)
{
	if (s == 0)
	{
		return (0);
	}

	while (s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		else if (*s == '\0')
		{
			return (0);
		}

		s++;
	}

	return (s);
}

