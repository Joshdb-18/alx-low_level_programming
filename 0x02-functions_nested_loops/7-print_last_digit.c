#include "main.h"
/**
 * print_last_digit - last digit
 * @n: para
 * Description: print last digit in c
 * Return: 0
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
	return (n);
}
