#include "main.h"
#include <ctype.h>
/**
 * _islower - islower func
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
