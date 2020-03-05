#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - ss
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, counter;
	char *ptr;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (strlen(s2) > n)
	{
		counter = n;
	}
	else if (n >= strlen(s2))
	{
		counter = strlen(s2);
	}

	ptr = malloc(strlen(s1) + counter);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i != counter; i++)
	{
		ptr[i + strlen(s1)] = s2[i];
	}

	ptr[i] = "\0";
	return (ptr);
}
