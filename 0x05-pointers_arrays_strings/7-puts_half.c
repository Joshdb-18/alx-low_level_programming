#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: func para
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int num = len / 2;
	int sum = num + num;
	int i;

	for (i = num; i <= sum; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
