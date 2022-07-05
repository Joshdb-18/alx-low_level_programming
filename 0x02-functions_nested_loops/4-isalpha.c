#include<stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - main func
 * Return: 0
 */
int _isalpha(int c);

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
/**
 * _isalpha - caps
 * Return: 1 0r 0
 */
int _isalpha(int c)
{
	if (isalpha(c) || islower(c) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
