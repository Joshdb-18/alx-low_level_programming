#include "main.h"
#include <unistd.h>
/**
 * _putchar - prins character to stdout
 * @c: function parametr
 * Return: 0
 */

int _putchar(char c);
{
	return (write(1, &c, 1));
}
