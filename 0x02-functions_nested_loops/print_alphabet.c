#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - print all alphabets
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
