#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to func used to compare values
 * Return: -1 or p
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, s;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		s = cmp(array[i]);
	if (s <= 0)
		return (-1);

	return (s);
}
