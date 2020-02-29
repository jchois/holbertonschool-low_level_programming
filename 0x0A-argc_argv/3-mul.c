#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: value
 * @argv: number of arguments
 * Return: If you have 2 arguments 0 otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}