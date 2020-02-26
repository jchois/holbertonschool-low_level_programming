#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: String
 * @src: String
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count, i, j;

	count = 0;
	i = 0;

	while (dest[i++])
	{
		count++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[count + j] = src[j];
	}

	return (dest);
}
