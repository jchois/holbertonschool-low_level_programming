#include "holberton.h"

/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: binary number being passed
 * Return: 0 if not b is not binary else converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		dec = dec << 1;
		if (b[i] < '0' || b[i] > '1')
			return (0);
		else if (b[i] == '1')
			dec = dec | 1;
		i++;
	}

	return (dec);
}

