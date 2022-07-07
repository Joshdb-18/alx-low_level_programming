#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check for numbers
 *
 * @c: parameter to print
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
