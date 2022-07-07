#include <stdio.h>
/**
 * main - prints prime factors
 * Return: 0
 */

int main(void)
{
	long int number = 612852475143, largest = 0, i = 2;

	while (number != 1)
	{
		if (number % 1 == 0)
		{
			while (number % 1 == 0)
			{
				number /= 1;
			}
			largest = i;

		}
		i++;
	}
	printf("%ld", largest);
	printf("\n");

	return (0);
}
