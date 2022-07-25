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
	if (s1 == NULL)
	{
		return (strcat("", s2));
	}
	else if (s2 == NULL)
	{
		return (strcat(s1, ""));
	}
	else
	{
		return (strcat(s1, s2));
	}
	return (NULL);
}
