#include <stdio.h>
/**
 * main - main func
 * Description: alphabeths
 * Return: 0
 */
int main(void)
{
	char i = 'a';
	char n = '\n';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		putchar(n);
	}

	return (0);
}
