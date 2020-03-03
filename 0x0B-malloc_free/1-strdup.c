#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that return a pointer
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, count;
	char *p;

	count = 1;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	p = malloc(count);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		p[i] = str[i];

	return (p);
}
