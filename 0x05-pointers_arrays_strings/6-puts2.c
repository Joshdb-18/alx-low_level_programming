#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts2 - prints every other character of a string
 *
 * @str - function parameter
 *
 * Return: void
 */

void _puts2(char *str)
{
	int length, i = 0;

	for (length = 0; length < strlen(str); length++)
	{
		i += 1;
		printf("%c", str[length + i]);
	}
	printf("\n");
}
