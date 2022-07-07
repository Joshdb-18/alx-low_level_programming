#include <stdio.h>
/**
 * main - print prime numbers
 * Return: 0
 */

int main(void)
{
	long long int n = 612852475143, largest = 0, i = 2;

	while (n != 1)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n /= i;
			}
			largest = i;
		}
		i++;
	}
	printf("%lld", largest);
	printf("\n");

	return (0);
}
