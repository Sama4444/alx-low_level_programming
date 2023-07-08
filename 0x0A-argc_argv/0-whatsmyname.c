#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints its name
 * @argc: argurment number
 * @argv: argurment array
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
