#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num = argc;
	
	if (num != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int digit1 = atoi(argv[1]);
		int digit2 = atoi(argv[2]);

		printf("%d\n", digit1 * digit2);
		return (0);
	}
}
