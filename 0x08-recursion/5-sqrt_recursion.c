#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to be calculated square root
 * @i: iterate number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate natural square root
 * @n: number to be calculated the squrae root
 * @i: iterate number
 * Return: 0
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
