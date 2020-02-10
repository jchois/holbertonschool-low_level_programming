#include "holberton.h"

void print_alphabet_x10(void){

	int n;
	char abc;

	n = 0;
	while (n <= 10){
		abc = 97;
		while (abc <= 122){
			_putchar(abc);
			abc++;
		}

		_putchar('\n');
		n++;
	}
	return (0);
}
