#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the int to checked
 * Return: the absolute value of int
 */
int _abs(int c)
{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
