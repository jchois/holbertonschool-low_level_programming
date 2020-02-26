#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{

	char tmp;
	int b, cont;

	tmp = s[0];
	cont = 0;
	b = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}

	for (b = 0; b < cont ; b++)
	{
		cont--;
		tmp = s[b];
		s[b] = s[cont];
		s[cont] = tmp;
	}

}
