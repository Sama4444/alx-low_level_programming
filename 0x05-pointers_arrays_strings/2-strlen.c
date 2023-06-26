#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @str: the length of the string to get
 * Return: the length of @str.
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
