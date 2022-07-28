#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memoty using malloc
 * @b: function int parameter
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(sizeof(b));
	if (c != NULL)
	{
		malloc_checked(*c);
	}
	exit (98);
}
