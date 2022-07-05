#include <stdio.h>
#include "main.h"
/** main - check code
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();

	return (0);
}
/**
 * print_alphabet - alpha
 * Return: void
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
