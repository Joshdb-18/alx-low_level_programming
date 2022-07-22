#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int len = atoi(argv[argc - 1]);

	printf("%d\n", len + 1);
	return (0);
}
