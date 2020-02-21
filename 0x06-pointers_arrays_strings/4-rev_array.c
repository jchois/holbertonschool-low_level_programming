#include "holberton.h"

/**
 *reverse_array - reverse array
 *@a: int
 *@n: int
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int x, aux;

	x = 0;
	n--;

	while (x <= n)
	{
		aux = a[x];
		a[x] = a[n];
		a[n] = aux;
		x++;
		n--;
	}
}

