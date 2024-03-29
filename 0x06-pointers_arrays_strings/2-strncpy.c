#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: the string copy buffer store
 * @src: string source
 * @n: the number of bytes to be copy
 * Return: A pointer to the resulting string des
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
