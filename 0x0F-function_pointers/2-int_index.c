#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer
 * @array: array value
 * @size: array element in size
 * @cmp: pointer of function of one of the main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
