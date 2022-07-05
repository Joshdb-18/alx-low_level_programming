#include <stdio.h>
#include "main.h"
/** main - check code
 * Return: 0
 */
void print_alphabet();

int main(void)
{
	print_alphabet();

	return (0);
}
/**
 * print_alphabet - print alphabets
 * Return: void
 */
void print_alphabet()
{
	char n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
