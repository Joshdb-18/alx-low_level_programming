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
		if (n == 9)
		{
			putchar(d);
		}
		else
		{
			putchar(c);
			putchar(' ');
		}
	}

	return (0);
}
