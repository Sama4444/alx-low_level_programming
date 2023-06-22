#include "main.h"

/**
 * _isdigit - Checks for a digit character
 * @x: The numb to be check
 * Return: 1 for a character that will be a digit of 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && <= 57)
	{
	return (1);
	}
	return (0);
}
