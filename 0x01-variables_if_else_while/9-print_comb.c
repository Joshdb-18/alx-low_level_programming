#include <stdio.h>
/**
 * main - main func
 * Description: func
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int c = 44;
	int d = 36;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		putchar(' ');
		if (n < 9)
		{
			putchar(c);
		}
		putchar(d);
	}

	return (0);
}
