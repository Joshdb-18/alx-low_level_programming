#include "main.h"

/**
 * largest_number - print largest number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}

	return (largest);
}
