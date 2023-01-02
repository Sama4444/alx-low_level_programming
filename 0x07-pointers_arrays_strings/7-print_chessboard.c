#include "main.h"
/**
 * print_chessbord - prints the chessbord.
 * @a: array of pointers.
 *
 * Return: void.
 */
void print_chessbord(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
