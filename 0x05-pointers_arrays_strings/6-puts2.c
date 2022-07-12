#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 *
 * @str: function parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	int length = 0, i = 0;

	while (str[i++])
	{
		length++;
	}
	for (i = 0; i < length / 2; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
