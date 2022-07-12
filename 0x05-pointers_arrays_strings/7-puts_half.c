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

	for (i = 0; i < num; i++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
