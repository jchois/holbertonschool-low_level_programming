#include "holberton.h"

void print_alphabet(void){

	char abc;
	abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');
}
