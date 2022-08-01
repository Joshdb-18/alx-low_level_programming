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
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL || name == NULL || age < 0 || owner == NULL)
		return (NULL);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
