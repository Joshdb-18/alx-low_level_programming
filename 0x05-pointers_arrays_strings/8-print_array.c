#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of ints
 * @a: func para
 * @n: func para
 *Return: void
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 1; count <= n; count++)
	{
		if (count == n)
		{
			printf("%d\n", a[count]);
		}
		else
		{
			printf("%d, ", a[count]);
		}
	}
}
