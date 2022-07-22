#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main func
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents;

	cents = get_cents(argc, argv[1]);

	if (cents == 0)
	{
		printf("0\n");
	}
	else if (cents == -1 || cents == 1)
	{
		printf("Error\n");
	}
	else
	{
		int quarters, dimes, nickels, two, pennies, coins;

		quarters = calculate_quarters(cents);
		cents = cents - quarters * 25;
		dimes = calculate_dimes(cents);
		cents = cents - dimes * 10;
		nickels = calculate_nickels(cents);
		cents = cents - nickels * 5;
		two = calculate_twos(cents);
		cents = cents - two * 2;
		pennies = calculate_pennies(cents);
		cents = cents - pennies * 1;
		coins = quarters + dimes + nickels + two + pennies;
		printf("%d\n", coins);
	}
	return (0);
}

/**
 * get_cents - gets the number of cents
 * @argc: first parameter
 * @argv: string parameter
 * Return: depends
 */
int get_cents(int argc, char *argv)
{
	if (argc < 2 || argc > 2)
		return (1);
	int cents;

	cents = atoi(argv);
	if (cents < 0)
		return (0);
	else if (cents == 0)
		return (-1);
	return (cents);
}
/**
 * calculate_quarters - 25
 * @cents: func para
 * Return: count
 */
int calculate_quarters(int cents)
{
	int count = 0;

	while (cents >= 25)
	{
		cents -= 25;
		count++;
	}
	return (count);
}

/**
 * calculate_dimes - 10
 * @cents: func para
 * Return: count
 */
int calculate_dimes(int cents)
{
	int count = 0;

	while (cents >= 10)
	{
		cents -= 10;
		count++;
	}
	return (count);
}

/**
 * calculate_nickels - 5
 * @cents: func para
 * Return: count
 */
int calculate_nickels(int cents)
{
	int count = 0;

	while (cents >= 5)
	{
		cents -= 5;
		count++;
	}
	return (count);
}
/**
 * calculate_twos - 2
 * @cents: func para
 * Return: count
 */
int calculate_twos(int cents)
{
	int count = 0;

	while (cents >= 2)
	{
		cents -= 2;
		count++;
	}
	return (count);
}
/**
 * calculate_pennies - 1
 * @cents: function para
 * Return: count
 */
int calculate_pennies(int cents)
{
	int count = 0;

	while (cents >= 1)
	{
		cents -= 1;
		count++;
	}
	return (count);
}
