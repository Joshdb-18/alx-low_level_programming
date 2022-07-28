#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: function parameter
 * @size: func para
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n = malloc(nmemb);
	void *s = malloc(size);

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	if (n == NULL || s == NULL)
		return (NULL);

	return (calloc(nmemb, size));
}
