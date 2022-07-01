#include <stdio.h>
/**
 * main - main func
 * Description: func
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char c[2] =", ";
	char n = '\n';
	char d = '$';

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
		putchar(c);
	putchar(d);
	putchar(n);

	return (0);
}
