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
	char p = *s;
	int num = 0;
	int sign = 1;

	if ( '-' == *s || '+' == *s)
	{
		if ( '-' == *s)
		{
			sign = -1;
		}
		s++;
	}
       	while (*s)
	{
		p = *c - '0';
		if ( 0 <= p && 9 >= p)
		{
			num = num * 10 + p;
			s++;
		}
		else
		{
			break;
		}
	}

       	return num * sign;
}
