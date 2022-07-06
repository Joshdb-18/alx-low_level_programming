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

	if (b > a && b > c)
	{
		largest = b;
		return (largest);
	}
	if (c > a && c > b)
	{
		largest = c;
		return (largest);
	}
	if (a >= b && a >= c)
	{
		largest = a;
		return (largest);
	}
}
