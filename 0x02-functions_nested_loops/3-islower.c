#include "holberton.h"
/**
 * _islower - check for lowercase character.
 * Return: 1 if the character is lowercase and if it uppercase return 0.
 */
int _islower(int c){

	if(c >= 97 && c <= 122){
		return (1);
	}else {
		return (0);
	}
}
