#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%li\n", n);

	return (0);
}
