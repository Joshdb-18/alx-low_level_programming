#include <stdio.h>
/**
 * main - main func
 * Description: desc
 * Return: 0
 */
int main(void)
{
	int num = 0;
	int c = 44;

	for (num = 0; num <= 90; num++)
	{
		putchar(num + '0');
		if (num == 89)
			putchar('\n');
		else
		{
			putchar(c);
			putchar(' ');
		}
	}

	return (0);
}
