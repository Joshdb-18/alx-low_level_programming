#include "main.h"
/**
 * print_to_98 - print 98
 * @n: 98
 * Return: 0
 */

void print_to_98(int n)
{
	int num = n;
	int p;

	if (num < 98)
	{
		for (p = num; p <= 98; p++)
		{
			_putchar(p);
		}
	}
	else if (num > 98)
	{
		for (p = num; p > 98; p--)
		{
			_putchar(p);
		}
	}
}
