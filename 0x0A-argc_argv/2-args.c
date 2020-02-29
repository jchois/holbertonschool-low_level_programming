#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: value
 * @argv: number of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
