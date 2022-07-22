#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num = argc;

	printf("%s\n", argv[num]);
	return (0);
}
