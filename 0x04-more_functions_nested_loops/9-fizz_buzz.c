#include <stdio.h>

/**
 * main - Print numbers
 * Return: 0
 */

int main(void)
{
	int i, m3, m5;

	for (i = 1; i <= 100; i++)
	{
		m3 = (i % 3);
		m5 = (i % 5);

		if ((m3 == 0) && (m5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (m3 == 0)
		{
			printf("Fizz ");
		}
		else if (m5 == 0)
		{
			i == 100 ? printf("Buzz") : printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
