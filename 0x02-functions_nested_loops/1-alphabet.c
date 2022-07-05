#include <stdio.h>
#include "main.h"
/** main - check code
 * print_alphabet - prints lowercase alphabets
 * Return: 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
