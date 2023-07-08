#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string they are digit
 * @str: str array
 * Return: 0
 */
int check_num(char *str)
{
	/* Declearing variables */
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /* count string */

	{
		if (!isdigit(str[count])) /*check if strthere are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - program that adds positive numbers
 * @argc: argurment count
 * @argv: number of array
 * Return: 0
 */
int main(int argc,char *argv[])
{
	/*Declearing variable*/
	int count;
	int str_to_int;

	int = 0;

	count = 1;

	while (count < argc) /*Goes through the whole array*/
	{
		if (check_number(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*condition if one of the number contain symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d,\n", sum); /*print sum*/

	return (0);
}
