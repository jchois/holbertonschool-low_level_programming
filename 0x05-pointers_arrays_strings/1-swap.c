#include "holberton.h"

/**
 * swap_int - swaps the values of two integer
 * @a: pointer
 * @b: pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}

