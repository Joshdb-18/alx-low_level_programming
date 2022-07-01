#include <stdio.h>
/**
 * main - main func
 * Description: alphabeths
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char d = 'A';
	char n = '\n';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar(n);

	return (0);
}
