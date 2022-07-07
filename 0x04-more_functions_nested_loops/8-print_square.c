#include "main.h"

/**
 * print_square - print square
 * @size: number to print
 * Return: 0
 */

void print_square(int size)
{
	int first, second;

	for (first = 0; first < size; first++)
	{
		for (second = 0; second < size; second++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}

