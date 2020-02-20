#include "holberton.h"

/**
 * _strncpy - function that concatenates two strings
 * @dest: where to copy
 * @src: string to copy
 * @n: number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			for (; i != n; i++)
				dest[i] = '\0';
			break;
		}
		i++;
	}
	return (dest);
}

