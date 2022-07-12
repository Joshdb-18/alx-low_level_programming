#include <unistd.h>
/**
 * _putchar - writes the character to c stdout
 *
 * @c: The character to print
 *
 * Return: on success 1.
 *
 * on error, -1 is returned, and error is set approoximately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
