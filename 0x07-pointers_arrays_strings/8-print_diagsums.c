#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square.
 * @a: pointer to array.
 * @size: size of array.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sum0iag1, sum0iag2;

	size1 = 0;
	sum0iag1 = 0;
	sum0iag2 = 0;

	size1 = (size *size) - 1;

	for (i = 0; i <= size1; i 
