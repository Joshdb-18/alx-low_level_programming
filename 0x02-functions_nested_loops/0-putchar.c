#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - main func
 * Return: 0
 */

int main(void)
{
	char c[8] = "_putchar";
	int n;

	for(n = 0; n < strlen(c); n++)
	{
		_putchar(c[n]);
	}
	_putchar('\n');

	return (0);
}