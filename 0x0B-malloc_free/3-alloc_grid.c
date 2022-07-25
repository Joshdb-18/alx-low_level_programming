#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of ints
 * @width: width
 * @height: heignt
 * Return: NULL or pointer to 2 dim arr
 */
int **alloc_grid(int width, int height)
{
	int **p;

	p[width][height];
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/**
	 * for (i = 0; i < height; i++)
	 * {
	 *	for (j = 0; j < width; j++)
	 *	{
	 *		_putchar(w);
	 *	}
	 *	_putchar('\n');
	 * }
	 */
	return (p);
}
