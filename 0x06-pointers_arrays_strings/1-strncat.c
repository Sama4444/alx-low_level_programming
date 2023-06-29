#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: the appended string upon to
 * @src: the dest string
 * @n: the number of bytes from src
 * Return: A pointer to be resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}

