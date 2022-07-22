#ifndef MAIN_H
#define MAIN_H

int num_checker(char *a);
int get_cents(int argc, char *argv);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int calculate_twos(int cents);

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
#endif
