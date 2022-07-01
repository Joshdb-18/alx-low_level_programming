#include <stdio.h>
/**
 * main - main func
 * Description: except q and e
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char n = '\n';
	for (c = 'a'; c <= 'z'; c++)
		if (c == 'q' || c == 'e')
			continue;
		else
			putchar(c);
	putchar(n);

	return (0);
}
