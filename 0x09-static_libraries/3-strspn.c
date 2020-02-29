#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char variable
 * @accept: variable
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{

	int count, i;

	count = 0;

	for ( ; *s != '\0' ; s++)
	{
		for (i = 0; *(accept + i) != '\0' ; i++)
		{
			if (*s == *(accept + i))
			{
				count++;
				break;
			}
		}
		if (*s != *(accept + i))
		{
			break;
		}
	}

	return (count);

}

