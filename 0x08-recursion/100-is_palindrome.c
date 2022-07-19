#include "main.h"
/**
 * is_palindrome - checks for a palindrome number
 * @s: func para
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (s == reverse(s))
		return (1);
	return (0);
}

/**
 * reverse - reverses 
 *
 * @n: func para
 * Return: reverse
 */
int reverse (int n)
{
	int rem;
	int sum = 0;
	if (n != 0)
		rem = num % 10;
		sum = sum * 10 + rem;
		reverse (num / 10);
	else
		return (sum);
	return (sum);
}
