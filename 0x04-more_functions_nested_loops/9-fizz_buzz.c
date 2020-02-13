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
			printf("%s", "FizzBuzz ");
		}
		else if (m3 == 0)
		{
			printf("%s", "Fizz ");
		}
		else if (m5 == 0)
		{
			printf("%s", "Buzz ");
		}
		else if (i == 100)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
