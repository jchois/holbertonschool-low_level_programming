#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: int value
 * @argv: char value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, add = 0, j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != 0; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", add);
	return (0);
}