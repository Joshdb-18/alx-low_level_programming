#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string in reverse
 *
 * @s: function para
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > '\0'; i--)
	{
		printf("%c", s[i - 1]);
	}
	printf("\n");
}
