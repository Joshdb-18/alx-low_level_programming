#include <stdio.h>
/**
 * main - main func
 * Description: desc
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	putchar('10');

	return (0);
}
