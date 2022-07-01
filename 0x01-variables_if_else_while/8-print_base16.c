#include <stdio.h>
/**
 * main - main func
 * Description: func
 * Return: 0
 */
int main(void)
{
	char i = '0';
	char c = 'a';
	char n = '\n';

	for (i = '48'; i <= '57'; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar(n);

	return (0);
}
