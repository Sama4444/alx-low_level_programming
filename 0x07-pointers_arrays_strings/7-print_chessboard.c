#include "main.h"

/**
 * print_chessbord - prints the chessbord
 * @a: input pointer.
 * Return: no return.
 */

void print_chessborard(char (*a)[8])
{
	unsigned int i, a = 0;

	for (i = 0; i < 4; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			a = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - a]);
	}
	_putchar('\n');
}

