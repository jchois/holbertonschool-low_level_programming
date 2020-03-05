#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: aa
 * @size: size
 * Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p =  malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (x = 0; x < (size * nmemb); x++)
		p[x] = 0;

	return (p);
}

