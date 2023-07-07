#include "main.h"

/**
 * _memset - a block of memory to be fill with a specific value
 * @s: start address of memory to filled
 * @b: the value desired
 * @n: number of bytes to be change
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;

		n--;
	}
	return (s);
}
