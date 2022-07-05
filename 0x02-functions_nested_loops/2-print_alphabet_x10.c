#include <stdio.h>
#include "main.h"
/**
 * main - prints func
 * print_alphabet_x10
 * Return: 0
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();

	return(0);
}

void print_alphabet_x10(void)
{
	char c = 'a';
	int num = 0;

	for(num = 0; num < 10; num++)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
