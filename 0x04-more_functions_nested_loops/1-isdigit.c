#include "main.h"

/**
 * _isdigit - Checks for a digit character
 * @c: The numb to be check
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
