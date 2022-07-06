#include "main.h"
/**
 * print_times_table - time table
 * @n: n at
 * Return: 0
 */
void print_tiimes_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		int count = 0;
		int next;

		for (count = 0; count <= n; count++)
		{
			for (next = 0; next <= n; next++)
			{
				_putchar(next);
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
