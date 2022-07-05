#include "main.h"
/** main - check code
 * Return: 0
 */

int main(void)
{
	print_alphabet();

	return (0);
}
/**
 * print_alphabet - alpha
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
