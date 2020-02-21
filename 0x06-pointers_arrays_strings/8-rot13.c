#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	int i = 0;
	int base;

	while (s[i] != '\0')
	{

		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 90))
		{
			base = 'a';

			while (s[i] >= 'A' && s[i]  <= 'Z')
			{	base = 'A';
				break;
			}
			s[i] = ((((s[i] - base) + 13) % 26) + base);
		}
		i++;
	}
	return (s);
}

