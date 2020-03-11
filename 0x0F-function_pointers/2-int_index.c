#include "function_pointers.h"

/**
 * int_index - searches an int
 * @array: arr
 * @size: size
 * @cmp: cmp
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{

		for (i = 0 ; i < size ; i++)
		{

			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
		if (cmp(array[i]) == 0)
		{
			return (-1);
		}
	}

	return (-1);
}
