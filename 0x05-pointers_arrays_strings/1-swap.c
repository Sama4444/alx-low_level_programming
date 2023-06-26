#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: integer first to be swapped
 * @b: integer second to be swapped
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
