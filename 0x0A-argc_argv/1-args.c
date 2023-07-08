#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments
 * @argc: argument number
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
printf("%d\n", argc - 1);

return (0);
}
