#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: allocated of  bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
