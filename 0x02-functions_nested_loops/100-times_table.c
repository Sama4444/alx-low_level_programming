#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the time table
 */

void print_times_table(int n)
{
	int num, nult, prod;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (nult = 1; nult <= n; nult++)
	{
	_putchar(',');
	_putchar(' ');
	prod = num * nult;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
