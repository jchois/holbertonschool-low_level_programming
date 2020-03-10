#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strcpy - copy a string
 * @d: destination
 * @s: source
 * Return: d
 */

char *strcpy(char *d, char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		d[i] = s[i];

	d[i] = '\0';
	return (d);
}

/**
 * new_dog - creates a new dog structure
 * @name: char var
 * @age: float
 * @owner: char
 * Return: new ptr
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	(*new).name = malloc(sizeof(name) + 1);
	if (name == NULL)
	{
		free(new);
		return (NULL);
	}

	(*new).owner = malloc(sizeof(owner) + 1);
	if ((*new).owner == NULL)
	{
		free((*new).name);
		free(new);
		return (NULL);
	}

	_strcpy((*new).name, name);
	_strcpy((*new).owner, owner);
	(*new).age = age;

	return (new);
}

