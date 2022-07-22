#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int j, num = 0, dig;

		for (j = 1; j <= (argc - 1); j++)
		{
			dig = atoi(argv[j]);
			if (dig == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				num += dig;
			}
		}
		printf("%d\n", num);
		return (0);
	}
	return (0);
}
