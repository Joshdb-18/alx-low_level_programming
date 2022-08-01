#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL or values
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
