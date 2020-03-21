#include "lists.h"

void before_main() __attribute__((constructor));

/**
 * before_main - prints something before main
 * Return: nothing
 */
void before_main()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
