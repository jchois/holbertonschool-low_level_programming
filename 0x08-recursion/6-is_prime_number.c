#include "holberton.h"

/**
 * _prime_num - checking if n is prime
 * @n: int to check
 * @i: int to check
 * Return: prime num
 */
int _prime_num(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i)
		return (_prime_num(n, i + 1));
	return (0);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: dd
 * Return: dd
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime_num(n, 2));
}

