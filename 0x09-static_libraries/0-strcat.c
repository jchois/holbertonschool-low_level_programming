#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: First String
 * @src: Second String
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int count, i, j;

	count = 0;
	i = 0;

	while (dest[i++])
	{
		count++;
	}

	for (j = 0; j <= count ; j++)
	{
		dest[count + j] = src[j];
	}

	return (dest);
}

