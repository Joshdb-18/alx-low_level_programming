#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to join
 * @s2: string to join
 * @n: no
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	p = malloc(strlen(s1) + n + 1);
	if (p == NULL)
		return (NULL);
	return (strncat(s1, s2, n));
}
