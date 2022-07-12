#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string
 *
 * @str: function parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	int length, i = 0;
	int r = strlen(str);

	for (length = 0; length < r; length++)
	{
		printf("%c", str[length + i]);
		i += 1;
	}
	printf("\n");
}
