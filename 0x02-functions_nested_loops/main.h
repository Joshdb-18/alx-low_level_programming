#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
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

void print_alphabet_x10(void)
{
	char c = 'a';
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int _isalpha(int c)
{
	if (isalpha(c) || islower(c) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
