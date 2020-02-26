#include "holberton.h"
/**
 * _isalpha - check for lowercase character.
 * @c: is a variable
 * Return: 1 if the character is lowercase/uppercase
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
