#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 *
 * @s: func para
 *
 * Return: int
 */

int _atoi(char *s)
{
	int number = atoi(s);
	
	if (number < 0)
	{
		number = -number;
	}
	return (number);
}
