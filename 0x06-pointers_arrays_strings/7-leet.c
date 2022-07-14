#include "main.h"
/**
 * leet - encodes a string into 1337
 * @lt: func para
 * Return: result
 */

char *leet(char *lt)
{
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char num[] = { 4, 3, 0, 7, 1 };
	int i;
	char *r = str;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[j] - 32)
			{
				*str = num[j] + '0';
			}
		}
		str++;
	}

	return (r);
}
