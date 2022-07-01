#include <stdio.h>
/**
 * main - main func
 * Description: desc
 * Return: 0
 */
int main(void)
{
	int num;
	int p = '\n';

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	putchar(p);

	return (0);
}
