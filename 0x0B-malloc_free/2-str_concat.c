#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -concatenates two stringss
 * @s1: first parameter to concatenate
 * @s2: second parameter to concatenate
 * Return: NULL or pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *str;

	if (s1 == NULL)
	{
		str = malloc(sizeof(s2));
		str = strcat("", s2);
	}
	else if (s2 == NULL)
	{
		str = malloc(sizeof(s1));
		str = strcat(s1, "");
	}
	return (str);
	free(str);
}
