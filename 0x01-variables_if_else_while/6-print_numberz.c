#include <stdio.h>
/**
 * main - main func
 * Description: desc
 * Return: 0
 */
int main(void)
{
	long long n = 0123456789;
	int p = '\n';

	while (n != 0)
		putchar((n % 10) + '0');
		n = n / 10;
	putchar(p);

	return (0);
}
