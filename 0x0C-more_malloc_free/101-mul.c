#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * num_checker - checks the number
 * @a: func para
 * Return: wareva
 */
int num_checker(char *a)
{
	int i, num, len;

	i = 0;
	len = strlen(a);
	num = 0;
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
			return (-1);
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}
/**
 * main - multiplies two positive numbers
 * @argc:  argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned long long int num, num2, total;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num = num_checker(argv[1]);
	num2 = num_checker(argv[2]);
	if (num == -1 || num2 == -1)
	{
		printf("Error\n");
		exit(98);
	}
	total = num * num2;
	printf("%lld\n", total);

	return (0);
}
