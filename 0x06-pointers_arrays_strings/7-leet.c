#include "holberton.h"

/**
 * leet - function that encodes a string
 * @s: string to encode
 * Return: string
 */

char *leet(char *s)
{
	int i, enc;

	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (enc = 0; enc <= 10; enc++)
		{
			if (s[i] == letters[enc])
				s[i] = num[enc];
		}
	}

	return (s);
}

