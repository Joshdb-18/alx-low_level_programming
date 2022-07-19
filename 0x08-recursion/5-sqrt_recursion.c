#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: func para
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	return (sqrt(n));
}
