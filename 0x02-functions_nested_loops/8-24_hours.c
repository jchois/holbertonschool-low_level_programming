#include "holberton.h"
/**
 * jack_bauer - Print hour
 * Return: void
 */
void jack_bauer(void)
{
	int h1, h2, m1, m2;

	h1 = 1;
	while (h1 <= 2)
	{
		h2 = 0;
		while (h2 <= 9)
		{
			if (h1 == 2 && h2 > 3)
				break;

			m1 = 0;
			while (m1 <= 5)
			{
				m2 = 0;
				while (m2 <= 9)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(58);
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
					m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}
}
