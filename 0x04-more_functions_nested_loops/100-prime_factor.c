#include <stdio.h>
/**
 * main - prints prime factors
 * Return: 0
 */

int main(void)
{
	long prime = 612852475143, num;

	while (num < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (num = 3; num < (num / 2); num += 2)
		{
			if ((prime % num) == 0)
			{
				prime /= num;
			}
		}

		printf("%ld", prime);
		printf("\n");

		return (0);
	}
}
