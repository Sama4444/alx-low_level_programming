#include "main.h"

/**
 * _isdigit - checks for a digit character
 * @c: The numb to be check
 * Return: 1 for a character that will be a digit of 0 for any else
 */

int _isdigit(int c)
{
	if (c >= 48 && <= 57)
	{
	return (1);
	}
	return (0);
}
