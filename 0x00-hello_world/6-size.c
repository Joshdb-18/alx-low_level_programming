#include <stdio.h>
/**
 * main - size of variables
 * Description: print sizes of variables
 * Return: 0
 */
int main(void)
{
	int i;
	char c;
	long int r;
	long long int p;
	float f;
	printf("Size of a char %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("Size of a long long int %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of a flaot %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
