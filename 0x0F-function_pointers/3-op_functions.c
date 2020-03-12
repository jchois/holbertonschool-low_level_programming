#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: var
 * @b: var
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two num
 * @a: var
 * @b: var
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 * @a: var
 * @b: var
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: var
 * @b: var
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod
 * @a: var
 * @b: var
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

