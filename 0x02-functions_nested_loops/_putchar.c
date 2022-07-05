#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{

	return (write(1, &c, 1));

}

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	char c = 'a';
	int num = 10;

	for (num = 0; num < 10; num++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
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
