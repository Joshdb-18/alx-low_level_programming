#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: func para
 * Return: cap
 */
char *cap_string(char *str)
{
	int k, n;
	char *cap = str;

	for (k = 0, n = strlen(str); k < n; k++)
	{
		if (str[k] == ' ' || str[k] == '\n')
		{
			str[k + 1] = toupper(str[k + 1]);
		}
	}
	return (cap);
}
