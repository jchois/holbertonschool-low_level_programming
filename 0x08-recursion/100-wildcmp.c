#include "holberton.h"

/**
 * wildcmp - compares two strings and return
 * @s1: string
 * @s2: string
 * Return: 1 if palindrome, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (!(*s1))
			return (0);
		if (wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
