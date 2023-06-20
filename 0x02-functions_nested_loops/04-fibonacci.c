#include <stdio.h>

/**
 * main -  Fibonacci <3
 *
 * purpose - no hardcode
 *
 * Return: (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bef + 1;
	unsigned long int aft = 2;
	unsigned long int l = 10000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);
	
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / l);
	bef2 + 

