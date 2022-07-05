#include <stdio.h>
void _putchar(int n)
{
	putchar(n);
}
void print_alphabet(void)
{
	char n = 'a';

	for(n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
