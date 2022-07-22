#include <stdlib.h>
#include <stdio.h>
/**
 * main - cash
 * @argc: argument count
 * @argv: argument vector
 * Return: depends xd
 */

int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int count = 0, dib;

		dib = atoi(argv[1]);
		if (dib < 0)
		{
			printf("0\n");
		}
		else if (dib == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			while (dib >= 25)
			{
				dib -= 25;
				count++;
			}
			while (dib >= 10)
			{
				dib -= 10;
				count++;
			}
			while (dib >= 5)
			{
				dib -= 5;
				count++;
			}
			while (dib >= 2)
			{
				dib -= 2;
				count++;
			}
			while (dib >= 1)
			{
				dib -= 1;
				count++;
			}
			printf("%d\n", count);
			return (0);
		}
		return (0);
	}
	return (0);
}
		
