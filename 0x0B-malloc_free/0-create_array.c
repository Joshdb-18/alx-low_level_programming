#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: function parameter
 * @c: second function parameter
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ch;

	if (size == 0)
	{
		return (NULL);
	}
	ch = malloc(sizeof(c));

	return (ch);

	free(ch);
}
