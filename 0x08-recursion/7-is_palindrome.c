#include "holberton.h"

/**
 * _str - find the length of a string
 * @s: string to find
 * Return: the length
 */
int _str(char *s)
{
	int l;

	l = 0;
	if (*s != 0)
	{
		l++;
		return (l + _str(s + 1));
	}
	return (l);
}

/**
 * _check - check for palindrome
 * @s: string
 * @l: length
 * Return: palindrome
 */
int _check(char *s, int l)
{
	if (l <= 1)
		return (1);
	if (*s != s[l - 1])
		return (0);
	else
		return (_check((s + 1), (l - 2)));
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: char variable
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int l;

	l = _str(s);
	if (l <= 1)
		return (1);
	return (_check(s, l));
}

